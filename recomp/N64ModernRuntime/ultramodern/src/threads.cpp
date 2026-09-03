#include <cstdio>
#include <thread>
#include <cassert>
#include <string>

#include "ultramodern/ultra64.h"
#include "ultramodern/ultramodern.hpp"
#include "blockingconcurrentqueue.h"
#include "ultramodern/threads.hpp"

#ifdef _WIN32
#include <windows.h>
#endif

static ultramodern::threads::callbacks_t threads_callbacks;

void ultramodern::threads::set_callbacks(const callbacks_t& callbacks) {
    threads_callbacks = callbacks;
}

std::string ultramodern::threads::get_game_thread_name(const OSThread* t) {
    if (threads_callbacks.get_game_thread_name == nullptr) {
        return "Game Thread " + std::to_string(t->id);
    }
    return threads_callbacks.get_game_thread_name(t);
}

#if defined(_WIN32)
static DWORD g_tls_thread_self = TLS_OUT_OF_INDEXES;
static DWORD g_tls_is_game_thread = TLS_OUT_OF_INDEXES;
static DWORD g_tls_is_entrypoint = TLS_OUT_OF_INDEXES;

static void ensure_tls() {
    static std::once_flag flag;
    std::call_once(flag, []() {
        g_tls_thread_self = TlsAlloc();
        g_tls_is_game_thread = TlsAlloc();
        g_tls_is_entrypoint = TlsAlloc();
    });
}

static inline PTR(OSThread) get_thread_self() {
    ensure_tls();
    return (PTR(OSThread))(uintptr_t)TlsGetValue(g_tls_thread_self);
}

static inline void set_thread_self(PTR(OSThread) val) {
    ensure_tls();
    TlsSetValue(g_tls_thread_self, (LPVOID)(uintptr_t)val);
}

static inline bool get_is_game_thread() {
    ensure_tls();
    return TlsGetValue(g_tls_is_game_thread) != NULL;
}

static inline void set_is_game_thread(bool val) {
    ensure_tls();
    TlsSetValue(g_tls_is_game_thread, (LPVOID)(uintptr_t)(val ? 1 : 0));
}

static inline bool get_is_entrypoint_thread() {
    ensure_tls();
    return TlsGetValue(g_tls_is_entrypoint) != NULL;
}

static inline void set_is_entrypoint_thread(bool val) {
    ensure_tls();
    TlsSetValue(g_tls_is_entrypoint, (LPVOID)(uintptr_t)(val ? 1 : 0));
}
#else
static thread_local bool is_entrypoint_thread_var = false;
static thread_local bool is_game_thread_var = false;
static thread_local PTR(OSThread) thread_self_var = NULLPTR;

#define get_thread_self() thread_self_var
#define set_thread_self(val) (thread_self_var = (val))
#define get_is_game_thread() is_game_thread_var
#define set_is_game_thread(val) (is_game_thread_var = (val))
#define get_is_entrypoint_thread() is_entrypoint_thread_var
#define set_is_entrypoint_thread(val) (is_entrypoint_thread_var = (val))
#endif

void ultramodern::set_entrypoint_thread() {
    set_is_game_thread(true);
    set_is_entrypoint_thread(true);
}

bool ultramodern::is_entrypoint_thread() {
    return get_is_entrypoint_thread();
}

bool ultramodern::is_game_thread() {
    return get_is_game_thread();
}

void run_thread_function(uint8_t* rdram, uint64_t addr, uint64_t sp, uint64_t arg);

#if defined(_WIN32)
void ultramodern::set_native_thread_name(const std::string& name) {
    std::wstring wname{name.begin(), name.end()};

    typedef HRESULT (WINAPI *pfnSetThreadDescription)(HANDLE, PCWSTR);
    static auto pSetThreadDescription = (pfnSetThreadDescription)GetProcAddress(
        GetModuleHandleA("kernel32.dll"), "SetThreadDescription");
    if (pSetThreadDescription) {
        pSetThreadDescription(GetCurrentThread(), wname.c_str());
    }
}

void ultramodern::set_native_thread_priority(ThreadPriority pri) {
    int nPriority = THREAD_PRIORITY_NORMAL;

    // Convert ThreadPriority to Win32 priority
    switch (pri) {
        case ThreadPriority::Low:
            nPriority = THREAD_PRIORITY_BELOW_NORMAL;
            break;
        case ThreadPriority::Normal:
            nPriority = THREAD_PRIORITY_NORMAL;
            break;
        case ThreadPriority::High:
            nPriority = THREAD_PRIORITY_ABOVE_NORMAL;
            break;
        case ThreadPriority::VeryHigh:
            nPriority = THREAD_PRIORITY_HIGHEST;
            break;
        case ThreadPriority::Critical:
            nPriority = THREAD_PRIORITY_TIME_CRITICAL;
            break;
        default:
            throw std::runtime_error("Invalid thread priority!");
            break;
    }
    // SetThreadPriority(GetCurrentThread(), nPriority);
}
#elif defined(__linux__)
#include <sys/prctl.h>

void ultramodern::set_native_thread_name(const std::string& name) {
    if (name.length() > 15) {
        debug_printf("[Thread] The thread name '%s' will be truncated to 15 characters", name.c_str());
    }
    prctl(PR_SET_NAME, name.c_str());
}

void ultramodern::set_native_thread_priority(ThreadPriority pri) {}
#elif defined(__APPLE__)
void ultramodern::set_native_thread_name(const std::string& name) {
    if (name.length() > 15) {
        debug_printf("[Thread] The thread name '%s' will be truncated to 15 characters", name.c_str());
    }
    pthread_setname_np(name.c_str());
}

void ultramodern::set_native_thread_priority(ThreadPriority pri) {}
#endif

#include <unordered_map>
#include <mutex>

static std::unordered_map<const OSThread*, UltraThreadContext*> g_thread_contexts{};
static std::mutex g_thread_contexts_mutex{};

static void register_thread_context(const OSThread* t, UltraThreadContext* ctx) {
    std::lock_guard<std::mutex> lock(g_thread_contexts_mutex);
    g_thread_contexts[t] = ctx;
}

static UltraThreadContext* get_thread_context(const OSThread* t) {
    if (!t) return nullptr;
    std::lock_guard<std::mutex> lock(g_thread_contexts_mutex);
    auto it = g_thread_contexts.find(t);
    if (it != g_thread_contexts.end()) {
        return it->second;
    }
    return t->context;
}

static void unregister_thread_context(const OSThread* t) {
    if (!t) return;
    std::lock_guard<std::mutex> lock(g_thread_contexts_mutex);
    g_thread_contexts.erase(t);
}

void wait_for_resumed(RDRAM_ARG UltraThreadContext* thread_context) {
    thread_context->running.wait();
}

void resume_thread(OSThread* t) {
    UltraThreadContext* ctx = get_thread_context(t);
    if (ctx != nullptr) {
        ctx->running.signal();
    } else {
        fprintf(stderr, "[Scheduling Error] resume_thread: context is NULL for thread %d!\n", t ? t->id : -1);
        fflush(stderr);
    }
}

void run_next_thread(RDRAM_ARG1) {
    static uint64_t emptySpinCount = 0;
    while (ultramodern::thread_queue_empty(PASS_RDRAM ultramodern::running_queue)) {
        emptySpinCount++;
        if (emptySpinCount <= 20 || (emptySpinCount % 2000) == 0) {
            fprintf(stderr, "[Scheduler] running_queue empty, spin #%llu\n", (unsigned long long)emptySpinCount);
            fflush(stderr);
        }
        ultramodern::wait_for_external_message_timed(PASS_RDRAM 1);
    }

    OSThread* to_run = TO_PTR(OSThread, ultramodern::thread_queue_pop(PASS_RDRAM ultramodern::running_queue));
    UltraThreadContext* ctx = get_thread_context(to_run);
    if (ctx != nullptr) {
        ctx->running.signal();
    } else {
        fprintf(stderr, "[Scheduling Error] to_run context is NULL for thread %d!\n", to_run->id);
        fflush(stderr);
    }
}

void ultramodern::run_next_thread_and_wait(RDRAM_ARG1) {
    if (!get_thread_self()) {
        run_next_thread(PASS_RDRAM1);
        return;
    }
    UltraThreadContext* cur_context = get_thread_context(TO_PTR(OSThread, get_thread_self()));
    run_next_thread(PASS_RDRAM1);
    if (cur_context != nullptr) {
        wait_for_resumed(PASS_RDRAM cur_context);
    }
}

void ultramodern::resume_thread_and_wait(RDRAM_ARG OSThread *t) {
    if (!get_thread_self()) {
        resume_thread(t);
        return;
    }
    UltraThreadContext* cur_context = get_thread_context(TO_PTR(OSThread, get_thread_self()));
    resume_thread(t);
    if (cur_context != nullptr) {
        wait_for_resumed(PASS_RDRAM cur_context);
    }
}

static void _thread_func(RDRAM_ARG PTR(OSThread) self_, PTR(thread_func_t) entrypoint, PTR(void) arg, UltraThreadContext* thread_context) {
    OSThread *self = TO_PTR(OSThread, self_);
    debug_printf("[Thread] Thread created: %d\n", self->id);
    set_thread_self(self_);
    set_is_game_thread(true);

    // Set the thread name
    ultramodern::set_native_thread_name(ultramodern::threads::get_game_thread_name(self));
    ultramodern::set_native_thread_priority(ultramodern::ThreadPriority::High);

    // Signal the initialized semaphore to indicate that this thread can be started.
    thread_context->initialized.signal();

    debug_printf("[Thread] Thread waiting to be started: %d\n", self->id);

    // Wait until the thread is marked as running.
    try {
        wait_for_resumed(PASS_RDRAM thread_context);
    } catch (ultramodern::thread_terminated& terminated) {
    }

    fprintf(stdout, "[Thread %d] Starting execution of entrypoint 0x%08X (sp=0x%08X)\n", (int)self->id, (uint32_t)(uintptr_t)entrypoint, (uint32_t)self->sp);
    fflush(stdout);
    try {
        // Run the thread's function with the provided argument.
        run_thread_function(PASS_RDRAM entrypoint, self->sp, arg);
        fprintf(stdout, "[Thread %d] run_thread_function returned normally!\n", (int)self->id);
        fflush(stdout);
    } catch (ultramodern::thread_terminated& terminated) {
        fprintf(stdout, "[Thread %d] run_thread_function threw thread_terminated!\n", (int)self->id);
        fflush(stdout);
    } catch (std::exception& ex) {
        fprintf(stdout, "[Thread %d] run_thread_function threw exception: %s\n", (int)self->id, ex.what());
        fflush(stdout);
    } catch (...) {
        fprintf(stdout, "[Thread %d] run_thread_function threw unknown exception!\n", (int)self->id);
        fflush(stdout);
    }

    // Mark this thread as destroyed and run the next queued thread.
    fprintf(stdout, "[Thread %d] Completed execution, parking native thread...\n", (int)self->id);
    fflush(stdout);
    unregister_thread_context(self);
    self->context = nullptr;
    try {
        run_next_thread(PASS_RDRAM1);
    } catch (...) {
    }

    while (true) {
        std::this_thread::sleep_for(std::chrono::hours(24));
    }
}

extern "C" void osStartThread(RDRAM_ARG PTR(OSThread) t_) {
    OSThread* t = TO_PTR(OSThread, t_);
    fprintf(stdout, "[Conker OS] osStartThread: id=%d, entrypoint=0x%08X, priority=%d, thread_self=%d\n", t ? t->id : -1, (uint32_t)(uintptr_t)t_, t ? t->priority : -1, (uint32_t)(uintptr_t)get_thread_self());
    fflush(stdout);

    // If this is a game thread, insert the new thread into the running queue and then check the running queue.
    if (get_thread_self()) {
        ultramodern::schedule_running_thread(PASS_RDRAM t_);
        ultramodern::check_running_queue(PASS_RDRAM1);
    }
    // Otherwise, immediately start the thread and terminate this one.
    else {
        t->state = OSThreadState::QUEUED;
        resume_thread(t);
    }
}

extern "C" void osCreateThread(RDRAM_ARG PTR(OSThread) t_, OSId id, PTR(thread_func_t) entrypoint, PTR(void) arg, PTR(void) sp, OSPri pri) {
    fprintf(stdout, "[Conker OS] osCreateThread: id=%d, entrypoint=0x%08X, sp=0x%08X, pri=%d\n", (int)id, (uint32_t)(uintptr_t)entrypoint, (uint32_t)(uintptr_t)sp, (int)pri);
    fflush(stdout);
    OSThread *t = TO_PTR(OSThread, t_);
    
    t->next = NULLPTR;
    t->queue = NULLPTR;
    t->priority = pri;
    t->id = id;
    t->state = OSThreadState::STOPPED;
    t->sp = sp - 0x10; // Set up the first stack frame

    // Spawn a new thread, which will immediately pause itself and wait until it's been started.
    UltraThreadContext* context = new UltraThreadContext{};
    t->context = context;
    register_thread_context(t, context);
    context->host_thread = std::thread{_thread_func, PASS_RDRAM t_, entrypoint, arg, context};

    // Wait until the thread is initialized to indicate that it's ready to be started.
    context->initialized.wait();
    fprintf(stdout, "[Conker OS] Thread %d is ready to be started\n", (int)t->id);
    fflush(stdout);
}

extern "C" void osStopThread(RDRAM_ARG PTR(OSThread) t_) {
    if (t_ == NULLPTR) {
        t_ = get_thread_self();
    }
    OSThread* t = TO_PTR(OSThread, t_);
    if (!t) return;

    // Check if the thread is stopping itself (arg is null or thread_self).
    if (t_ == get_thread_self()) {
        t->state = OSThreadState::STOPPED;
        ultramodern::run_next_thread_and_wait(PASS_RDRAM1);
    }
    else {
        if (t->state != OSThreadState::STOPPED) {
            ultramodern::thread_queue_remove(PASS_RDRAM t->queue, t_);
            t->state = OSThreadState::STOPPED;
        }
    }
}

extern "C" void osDestroyThread(RDRAM_ARG PTR(OSThread) t_) {
    if (t_ == NULLPTR) {
        t_ = get_thread_self();
    }
    OSThread* t = TO_PTR(OSThread, t_);
    if (t_ == get_thread_self()) {
        throw ultramodern::thread_terminated{};
    }
    if (t->state != OSThreadState::STOPPED) {
        ultramodern::thread_queue_remove(PASS_RDRAM t->queue, t_);
    }
    UltraThreadContext* cur_context = get_thread_context(t);
    if (cur_context != nullptr) {
        unregister_thread_context(t);
        t->context = nullptr;
        cur_context->running.signal();
    }
}

extern "C" void osSetThreadPri(RDRAM_ARG PTR(OSThread) t_, OSPri pri) {
    if (t_ == NULLPTR) {
        t_ = get_thread_self();
    }
    OSThread* t = TO_PTR(OSThread, t_);

    if (t->priority != pri) {
        t->priority = pri;

        if (t_ != ultramodern::this_thread() && t->state != OSThreadState::STOPPED) {
            ultramodern::thread_queue_remove(PASS_RDRAM t->queue, t_);
            ultramodern::thread_queue_insert(PASS_RDRAM t->queue, t_);
        }

        ultramodern::check_running_queue(PASS_RDRAM1);
    }
}

extern "C" OSPri osGetThreadPri(RDRAM_ARG PTR(OSThread) t) {
    if (t == NULLPTR) {
        t = get_thread_self();
    }
    return TO_PTR(OSThread, t)->priority;
}

extern "C" OSId osGetThreadId(RDRAM_ARG PTR(OSThread) t) {
    if (t == NULLPTR) {
        t = get_thread_self();
    }
    return TO_PTR(OSThread, t)->id;
}

PTR(OSThread) ultramodern::this_thread() {
    return get_thread_self();
}

static std::thread thread_cleaner_thread;
static moodycamel::BlockingConcurrentQueue<UltraThreadContext*> deleted_threads{};
extern std::atomic_bool exited;

void thread_cleaner_func() {
    using namespace std::chrono_literals;
    while (!exited) {
        UltraThreadContext* to_delete;
        if (deleted_threads.wait_dequeue_timed(to_delete, 50ms)) {
            std::this_thread::sleep_for(100ms);
            try {
                if (to_delete->host_thread.joinable()) {
                    to_delete->host_thread.detach();
                }
            } catch (...) {
            }
            delete to_delete;
        }
    }
}

void ultramodern::init_thread_cleanup() {
    thread_cleaner_thread = std::thread{thread_cleaner_func};
}

void ultramodern::cleanup_thread(UltraThreadContext *cur_context) {
    deleted_threads.enqueue(cur_context);
}

void ultramodern::join_thread_cleaner_thread() {
    thread_cleaner_thread.join();
}

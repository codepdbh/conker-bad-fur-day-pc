#include <cstdio>
#include <thread>
#include <cassert>
#include <string>

#include "ultramodern/ultra64.h"
#include "ultramodern/ultramodern.hpp"
#include "blockingconcurrentqueue.h"

#include "ultramodern/threads.hpp"

// Native APIs only used to set thread names for easier debugging
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

extern "C" void bootproc();

thread_local bool is_entrypoint_thread = false;
// Whether this thread is part of the game (i.e. the start thread or one spawned by osCreateThread)
thread_local bool is_game_thread = false;
thread_local PTR(OSThread) thread_self = NULLPTR;

void ultramodern::set_entrypoint_thread() {
    ::is_game_thread = true;
    ::is_entrypoint_thread = true;
}

bool ultramodern::is_entrypoint_thread() {
    return ::is_entrypoint_thread;
}

bool ultramodern::is_game_thread() {
    return ::is_game_thread;
}

#if 0
int main(int argc, char** argv) {
    ultramodern::set_entrypoint_thread();

    bootproc();
}
#endif

#if 1
void run_thread_function(uint8_t* rdram, uint64_t addr, uint64_t sp, uint64_t arg);
#else
#define run_thread_function(func, sp, arg) func(arg)
#endif

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
        // Linux only accepts up to 16 characters including the null terminator for a thread name.
        debug_printf("[Thread] The thread name '%s' will be truncated to 15 characters", name.c_str());
    }

    prctl(PR_SET_NAME, name.c_str());
}

void ultramodern::set_native_thread_priority(ThreadPriority pri) {
    // TODO linux thread priority
    // printf("set_native_thread_priority unimplemented\n");
    // int nPriority = THREAD_PRIORITY_NORMAL;

    // // Convert ThreadPriority to Win32 priority
    // switch (pri) {
    //     case ThreadPriority::Low:
    //         nPriority = THREAD_PRIORITY_BELOW_NORMAL;
    //         break;
    //     case ThreadPriority::Normal:
    //         nPriority = THREAD_PRIORITY_NORMAL;
    //         break;
    //     case ThreadPriority::High:
    //         nPriority = THREAD_PRIORITY_ABOVE_NORMAL;
    //         break;
    //     case ThreadPriority::VeryHigh:
    //         nPriority = THREAD_PRIORITY_HIGHEST;
    //         break;
    //     case ThreadPriority::Critical:
    //         nPriority = THREAD_PRIORITY_TIME_CRITICAL;
    //         break;
    //     default:
    //         throw std::runtime_error("Invalid thread priority!");
    //         break;
    // }
}
#elif defined(__APPLE__)
void ultramodern::set_native_thread_name(const std::string& name) {
    if (name.length() > 15) {
        // Macs seem to only accept up to 16 characters including the null terminator for a thread name.
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
    fprintf(stdout, "[Scheduling] wait_for_resumed ENTER: thread_self=0x%08X, waiting on context %p\n", (uint32_t)(uintptr_t)thread_self, (void*)thread_context);
    fflush(stdout);
    thread_context->running.wait();
    fprintf(stdout, "[Scheduling] wait_for_resumed POST-WAIT: thread_self=0x%08X, context %p (woke up!)\n", (uint32_t)(uintptr_t)thread_self, (void*)thread_context);
    fflush(stdout);
}

void resume_thread(OSThread* t) {
    UltraThreadContext* ctx = get_thread_context(t);
    fprintf(stdout, "[Scheduling] resume_thread: Resuming thread %d (context=%p)\n", t ? t->id : -1, (void*)ctx);
    fflush(stdout);
    if (ctx != nullptr) {
        ctx->running.signal();
    } else {
        fprintf(stderr, "[Scheduling Error] resume_thread: context is NULL for thread %d!\n", t ? t->id : -1);
        fflush(stderr);
    }
}

void run_next_thread(RDRAM_ARG1) {
    if (ultramodern::thread_queue_empty(PASS_RDRAM ultramodern::running_queue)) {
        fprintf(stderr, "[Scheduling Error] No threads left to run in running_queue!\n");
        fflush(stderr);
        throw std::runtime_error("No threads left to run!\n");
    }


    OSThread* self = ultramodern::this_thread() ? TO_PTR(OSThread, ultramodern::this_thread()) : nullptr;
    OSThread* to_run = TO_PTR(OSThread, ultramodern::thread_queue_pop(PASS_RDRAM ultramodern::running_queue));
    UltraThreadContext* ctx = get_thread_context(to_run);
    fprintf(stdout, "[Scheduling] run_next_thread (called by thread %d): Resuming execution of thread %d (context=%p)\n", self ? self->id : -1, to_run->id, (void*)ctx);
    fflush(stdout);
    if (ctx != nullptr) {
        ctx->running.signal();
    } else {
        fprintf(stderr, "[Scheduling Error] to_run context is NULL for thread %d!\n", to_run->id);
        fflush(stderr);
    }
}

void ultramodern::run_next_thread_and_wait(RDRAM_ARG1) {
    OSThread* self = ultramodern::this_thread() ? TO_PTR(OSThread, ultramodern::this_thread()) : nullptr;
    fprintf(stdout, "[Scheduling] run_next_thread_and_wait ENTER: caller thread %d (self=0x%08X)\n", self ? self->id : -1, (uint32_t)(uintptr_t)thread_self);
    fflush(stdout);
    if (!thread_self) {
        run_next_thread(PASS_RDRAM1);
        return;
    }
    UltraThreadContext* cur_context = get_thread_context(TO_PTR(OSThread, thread_self));
    run_next_thread(PASS_RDRAM1);
    if (cur_context != nullptr) {
        wait_for_resumed(PASS_RDRAM cur_context);
    }
    fprintf(stdout, "[Scheduling] run_next_thread_and_wait EXIT: resumed thread %d\n", self ? self->id : -1);
    fflush(stdout);
}

void ultramodern::resume_thread_and_wait(RDRAM_ARG OSThread *t) {
    OSThread* self = ultramodern::this_thread() ? TO_PTR(OSThread, ultramodern::this_thread()) : nullptr;
    fprintf(stdout, "[Scheduling] resume_thread_and_wait ENTER: caller thread %d resuming %d\n", self ? self->id : -1, t ? t->id : -1);
    fflush(stdout);
    if (!thread_self) {
        resume_thread(t);
        return;
    }
    UltraThreadContext* cur_context = get_thread_context(TO_PTR(OSThread, thread_self));
    resume_thread(t);
    if (cur_context != nullptr) {
        wait_for_resumed(PASS_RDRAM cur_context);
    }
    fprintf(stdout, "[Scheduling] resume_thread_and_wait EXIT: resumed thread %d\n", self ? self->id : -1);
    fflush(stdout);
}

static void _thread_func(RDRAM_ARG PTR(OSThread) self_, PTR(thread_func_t) entrypoint, PTR(void) arg, UltraThreadContext* thread_context) {
    OSThread *self = TO_PTR(OSThread, self_);
    debug_printf("[Thread] Thread created: %d\n", self->id);
    thread_self = self_;
    is_game_thread = true;

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
    fprintf(stdout, "[Thread %d] Terminating thread and running next queued thread...\n", (int)self->id);
    fflush(stdout);
    unregister_thread_context(self);
    self->context = nullptr;
    try {
        run_next_thread(PASS_RDRAM1);
    } catch (...) {
    }

    // Dispose of this thread now that it's completed or terminated.
    ultramodern::cleanup_thread(thread_context);
}

extern "C" void osStartThread(RDRAM_ARG PTR(OSThread) t_) {
    OSThread* t = TO_PTR(OSThread, t_);
    fprintf(stdout, "[Conker OS] osStartThread: id=%d, entrypoint=0x%08X, priority=%d, thread_self=%d\n", t ? t->id : -1, (uint32_t)(uintptr_t)t_, t ? t->priority : -1, (uint32_t)(uintptr_t)thread_self);
    fflush(stdout);

    // If this is a game thread, insert the new thread into the running queue and then check the running queue.
    if (thread_self) {
        ultramodern::schedule_running_thread(PASS_RDRAM t_);
        ultramodern::check_running_queue(PASS_RDRAM1);
    }
    // Otherwise, immediately start the thread and terminate this one.
    else {
        t->state = OSThreadState::QUEUED;
        resume_thread(t);
        //throw ultramodern::thread_terminated{};
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
    // Pass the context as an argument to the thread function to ensure that it can't get cleared before the thread captures its value.
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
        t_ = thread_self;
    }
    OSThread* t = TO_PTR(OSThread, t_);
    if (!t) return;

    // Check if the thread is stopping itself (arg is null or thread_self).
    if (t_ == thread_self) {
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
        t_ = thread_self;
    }
    OSThread* t = TO_PTR(OSThread, t_);
    // Check if the thread is destroying itself (arg is null or thread_self)
    if (t_ == thread_self) {
        throw ultramodern::thread_terminated{};
    }
    // Otherwise if the thread isn't stopped, remove it from its currrent queue., 
    if (t->state != OSThreadState::STOPPED) {
        ultramodern::thread_queue_remove(PASS_RDRAM t->queue, t_);
    }
    // Check if the thread has already been destroyed to prevent destroying it again.
    UltraThreadContext* cur_context = get_thread_context(t);
    if (cur_context != nullptr) {
        // Mark the target thread as destroyed and resume it. When it starts it'll check this and terminate itself instead of resuming.
        unregister_thread_context(t);
        t->context = nullptr;
        cur_context->running.signal();
    }
}

extern "C" void osSetThreadPri(RDRAM_ARG PTR(OSThread) t_, OSPri pri) {
    if (t_ == NULLPTR) {
        t_ = thread_self;
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
        t = thread_self;
    }
    return TO_PTR(OSThread, t)->priority;
}

extern "C" OSId osGetThreadId(RDRAM_ARG PTR(OSThread) t) {
    if (t == NULLPTR) {
        t = thread_self;
    }
    return TO_PTR(OSThread, t)->id;
}

PTR(OSThread) ultramodern::this_thread() {
    return thread_self;
}

static std::thread thread_cleaner_thread;
static moodycamel::BlockingConcurrentQueue<UltraThreadContext*> deleted_threads{};
extern std::atomic_bool exited;

void thread_cleaner_func() {
    using namespace std::chrono_literals;
    while (!exited) {
        UltraThreadContext* to_delete;
        if (deleted_threads.wait_dequeue_timed(to_delete, 10ms)) {
            debug_printf("[Cleanup] Deleting thread context %p\n", to_delete);

            to_delete->host_thread.join();
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

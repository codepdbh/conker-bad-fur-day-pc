#include <cassert>
#include <cstdio>
#include <mutex>

#include "ultramodern/ultramodern.hpp"

static PTR(OSThread) running_queue_impl = NULLPTR;
static std::recursive_mutex g_queue_mutex{};

static PTR(OSThread)* queue_to_ptr(RDRAM_ARG PTR(PTR(OSThread)) queue) {
    if (queue == ultramodern::running_queue) {
        return &running_queue_impl;
    }
    return TO_PTR(PTR(OSThread), queue);
}

void ultramodern::thread_queue_insert(RDRAM_ARG PTR(PTR(OSThread)) queue_, PTR(OSThread) toadd_) {
    std::lock_guard<std::recursive_mutex> lock(g_queue_mutex);
    if (toadd_ == NULLPTR) return;
    OSThread* toadd = TO_PTR(OSThread, toadd_);
    if (!toadd) return;

    // Detach from previous queue first if already queued
    if (toadd->queue != NULLPTR) {
        ultramodern::thread_queue_remove(PASS_RDRAM toadd->queue, toadd_);
    }

    PTR(OSThread)* cur = queue_to_ptr(PASS_RDRAM queue_);
    while (*cur != NULLPTR && *cur != toadd_ && TO_PTR(OSThread, *cur)->priority > toadd->priority) {
        cur = &TO_PTR(OSThread, *cur)->next;
    }
    toadd->next = (*cur != toadd_) ? (*cur) : NULLPTR;
    toadd->queue = queue_;
    *cur = toadd_;

}

PTR(OSThread) ultramodern::thread_queue_pop(RDRAM_ARG PTR(PTR(OSThread)) queue_) {
    std::lock_guard<std::recursive_mutex> lock(g_queue_mutex);
    PTR(OSThread)* queue = queue_to_ptr(PASS_RDRAM queue_);
    if (*queue == NULLPTR) {
        return NULLPTR;
    }
    PTR(OSThread) ret = *queue;
    *queue = TO_PTR(OSThread, ret)->next;
    TO_PTR(OSThread, ret)->queue = NULLPTR;
    return ret;
}

bool ultramodern::thread_queue_remove(RDRAM_ARG PTR(PTR(OSThread)) queue_, PTR(OSThread) t_) {
    std::lock_guard<std::recursive_mutex> lock(g_queue_mutex);
    PTR(OSThread)* cur = queue_to_ptr(PASS_RDRAM queue_);
    while (*cur != NULLPTR) {
        if (*cur == t_) {
            *cur = TO_PTR(OSThread, *cur)->next;
            TO_PTR(OSThread, t_)->queue = NULLPTR;
            return true;
        }
        cur = &TO_PTR(OSThread, *cur)->next;
    }
    return false;
}

bool ultramodern::thread_queue_empty(RDRAM_ARG PTR(PTR(OSThread)) queue_) {
    std::lock_guard<std::recursive_mutex> lock(g_queue_mutex);
    PTR(OSThread)* queue = queue_to_ptr(PASS_RDRAM queue_);
    return *queue == NULLPTR;
}

PTR(OSThread) ultramodern::thread_queue_peek(RDRAM_ARG PTR(PTR(OSThread)) queue_) {
    std::lock_guard<std::recursive_mutex> lock(g_queue_mutex);
    PTR(OSThread)* queue = queue_to_ptr(PASS_RDRAM queue_);
    return *queue;
}

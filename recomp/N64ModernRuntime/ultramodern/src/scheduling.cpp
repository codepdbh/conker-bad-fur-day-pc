#include <cstdio>
#include "ultramodern/ultramodern.hpp"

void ultramodern::schedule_running_thread(RDRAM_ARG PTR(OSThread) t_) {
    fprintf(stdout, "[Scheduling] Adding thread %d to the running queue\n", TO_PTR(OSThread, t_)->id);
    fflush(stdout);
    thread_queue_insert(PASS_RDRAM running_queue, t_);
    TO_PTR(OSThread, t_)->state = OSThreadState::QUEUED;
}

void swap_to_thread(RDRAM_ARG OSThread *to) {
    OSThread* self = ultramodern::this_thread() ? TO_PTR(OSThread, ultramodern::this_thread()) : nullptr;
    fprintf(stdout, "[Scheduling] swap_to_thread: Thread %d giving execution to thread %d\n", self ? self->id : -1, to->id);
    fflush(stdout);
    // Insert this thread in the running queue.
    ultramodern::thread_queue_insert(PASS_RDRAM ultramodern::running_queue, ultramodern::this_thread());
    if (self) self->state = OSThreadState::QUEUED;
    // Unpause the target thread and wait for this one to be unpaused.
    ultramodern::resume_thread_and_wait(PASS_RDRAM to);
    fprintf(stdout, "[Scheduling] swap_to_thread: Thread %d resumed after yielding to %d\n", self ? self->id : -1, to->id);
    fflush(stdout);
}

void ultramodern::check_running_queue(RDRAM_ARG1) {
    // Check if there are any threads in the running queue.
    if (!thread_queue_empty(PASS_RDRAM running_queue)) {
        // Check if the highest priority thread in the queue is higher priority than the current thread.
        OSThread* next_thread = TO_PTR(OSThread, ultramodern::thread_queue_peek(PASS_RDRAM running_queue));
        OSThread* self = TO_PTR(OSThread, ultramodern::this_thread());
        fprintf(stdout, "[Scheduling] check_running_queue: self=%d (pri %d), next=%d (pri %d)\n", self ? self->id : -1, self ? self->priority : -1, next_thread ? next_thread->id : -1, next_thread ? next_thread->priority : -1);
        fflush(stdout);
        if (next_thread->priority > self->priority) {
            ultramodern::thread_queue_pop(PASS_RDRAM running_queue);
            // Swap to the higher priority thread.
            swap_to_thread(PASS_RDRAM next_thread);
        }
    }
}

extern "C" void pause_self(RDRAM_ARG1) {
    while (true) {
        // Wait until an external message arrives, then allow the next thread to run.
        ultramodern::wait_for_external_message(PASS_RDRAM1);
        ultramodern::check_running_queue(PASS_RDRAM1);
    }
}

extern "C" void yield_self(RDRAM_ARG1) {
    ultramodern::wait_for_external_message(PASS_RDRAM1);
    ultramodern::check_running_queue(PASS_RDRAM1);
}

extern "C" void yield_self_1ms(RDRAM_ARG1) {
    ultramodern::wait_for_external_message_timed(PASS_RDRAM1, 1);
    ultramodern::check_running_queue(PASS_RDRAM1);
}

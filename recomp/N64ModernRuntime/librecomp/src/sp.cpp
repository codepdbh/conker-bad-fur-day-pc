#include <cstdio>
#include <fstream>
#include <ultramodern/ultramodern.hpp>
#include "recomp.h"

extern "C" void osSpTaskLoad_recomp(uint8_t* rdram, recomp_context* ctx) {
    // Nothing to do here
}

bool dump_frame = false;

extern "C" void osSpTaskStartGo_recomp(uint8_t* rdram, recomp_context* ctx) {
    OSTask* task = TO_PTR(OSTask, ctx->r4);
    static int task_count = 0;
    if (task_count < 300 || (task_count % 100 == 0)) {
        printf("[sp] osSpTaskStartGo #%d: type=%u, flags=0x%x, data_ptr=0x%08X, data_size=%u\n",
            task_count, task->t.type, task->t.flags, (uint32_t)task->t.data_ptr, (uint32_t)task->t.data_size);
        if (task->t.type == M_GFXTASK && task_count < 10) {
            uint32_t dl_addr = (uint32_t)task->t.data_ptr & 0x00FFFFFF;
            printf("  [DL Dump %08X, len=%u]:\n", (uint32_t)task->t.data_ptr, (uint32_t)task->t.data_size);
            for (uint32_t off = 0; off < task->t.data_size && off < 64; off += 8) {
                uint32_t w0 = *(uint32_t*)(rdram + dl_addr + off);
                uint32_t w1 = *(uint32_t*)(rdram + dl_addr + off + 4);
                printf("    +0x%02X: %08X %08X (op=0x%02X)\n", off, w0, w1, (w0 >> 24) & 0xFF);
            }
        }
        fflush(stdout);
    }
    task_count++;

    // For debugging
    if (dump_frame) {
        char addr_str[32];
        constexpr size_t ram_size = 0x800000;
        std::unique_ptr<char[]> ram_unswapped = std::make_unique<char[]>(ram_size);
        snprintf(addr_str, sizeof(addr_str) - 1, "%08X", task->t.data_ptr);
        addr_str[sizeof(addr_str) - 1] = '\0';
        std::ofstream dump_file{ "ramdump" + std::string{ addr_str } + ".bin", std::ios::binary};

        for (size_t i = 0; i < ram_size; i++) {
            ram_unswapped[i] = rdram[i ^ 3];
        }

        dump_file.write(ram_unswapped.get(), ram_size);
        dump_frame = false;
    }
    ultramodern::submit_rsp_task(rdram, ctx->r4);
}

extern "C" void osSpTaskYield_recomp(uint8_t* rdram, recomp_context* ctx) {
    // Ignore yield requests (acts as if the task completed before it received the yield request)
}

extern "C" void osSpTaskYielded_recomp(uint8_t* rdram, recomp_context* ctx) {
    // Task yield requests are ignored, so always return 0 as tasks will never be yielded
    ctx->r2 = 0;
}

extern "C" void __osSpSetPc_recomp(uint8_t* rdram, recomp_context* ctx) {
    assert(false);
}

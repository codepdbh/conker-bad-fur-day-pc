#include <cstdint>
#include <cstdio>
#include <cstring>
#include <chrono>
#include <thread>
#include "recomp.h"

extern "C" {

alignas(4096) uint8_t rdram[0x1000000];

gpr cop0_cause_read(recomp_context* ctx) {
    (void)ctx;
    return 0;
}

void cop0_cause_write(recomp_context* ctx, gpr value) {
    (void)ctx;
    (void)value;
}

gpr cop0_count_read(recomp_context* ctx) {
    (void)ctx;
    static auto start = std::chrono::high_resolution_clock::now();
    auto now = std::chrono::high_resolution_clock::now();
    uint64_t ns = std::chrono::duration_cast<std::chrono::nanoseconds>(now - start).count();
    return (uint32_t)(ns * 93750000ULL / 1000000000ULL);
}

void cop0_count_write(recomp_context* ctx, gpr value) {
    (void)ctx;
    (void)value;
}

gpr cop0_compare_read(recomp_context* ctx) {
    (void)ctx;
    return 0;
}

void cop0_compare_write(recomp_context* ctx, gpr value) {
    (void)ctx;
    (void)value;
}

gpr cop0_epc_read(recomp_context* ctx) {
    (void)ctx;
    return 0;
}

gpr cop0_badvaddr_read(recomp_context* ctx) {
    (void)ctx;
    return 0;
}

// Controller pack and rumble helpers
void _MakeMotorData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osContAddressCrc_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osSiDeviceBusy_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = 0; }

// SI (Serial Interface) stubs
void __osSiGetAccess_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osSiRelAccess_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osSiRawStartDma_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osSiCreateAccessQueue_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }

// PFS / Controller Pack stubs
void osPfsInit_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = 0; }
void __osPfsGetInitData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osPfsRequestData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osPfsGetStatus_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osPfsSelectBank_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osPfsRWInode_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }

void __osContRamRead_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osContRamWrite_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osContDataCrc_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osContGetInitData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osPackRequestData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osCheckPackId_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osRepairPackId_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osGetId_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osCheckId_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void corrupted_init_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void corrupted_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }

// Status register / VI / TLB / PI / Timer stubs
void __osGetSR_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = ctx->status_reg; }
void __osSetSR_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->status_reg = (uint32_t)ctx->r4; }
void __osViInit_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osInsertTimer_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osSetTimerIntr_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void osUnmapTLB_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void osMapTLB_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void osPiRawReadIo_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = 0; }

// Ignored/dummy functions
void func_150AE280(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }

void recomp_syscall_handler(uint8_t* rdram, recomp_context* ctx, int32_t instruction_vram) {
    (void)rdram;
    (void)ctx;
    (void)instruction_vram;
}

}

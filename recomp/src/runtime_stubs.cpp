#include <cstdint>
#include <cstdio>
#include <cstring>
#include <chrono>
#include <thread>
#include "recomp.h"
#include "librecomp/addresses.hpp"
#include "librecomp/game.hpp"

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

// libultra PFS (Controller Pak file system) error codes, matching
// ultramodern/src/input.cpp.
#define PFS_ERR_NOPACK      1   // no device inserted
#define PFS_ERR_CONTRFAIL   4   // data transmission failure
#define PFS_ERR_INVALID     5   // invalid parameter or invalid file
#define PFS_ERR_DEVICE      11  // different type of device inserted

// Log the first call to each stub so it's visible which of these the game
// actually depends on, rather than having to guess. Deliberately one-shot:
// these sit on hot paths and the point is "was it reached at all".
#define STUB_LOG_ONCE(name)                                                     \
    do {                                                                        \
        static bool logged_##name = false;                                      \
        if (!logged_##name) {                                                   \
            logged_##name = true;                                               \
            fprintf(stderr, "[Conker Stub] %s called (first time)\n", #name);   \
            fflush(stderr);                                                     \
        }                                                                       \
    } while (0)

// Controller pack and rumble helpers
void _MakeMotorData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; STUB_LOG_ONCE(_MakeMotorData); }
void __osContAddressCrc_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = 0; STUB_LOG_ONCE(__osContAddressCrc); }
void __osSiDeviceBusy_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = 0; }

// SI (Serial Interface) stubs
void __osSiGetAccess_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; STUB_LOG_ONCE(__osSiGetAccess); }
void __osSiRelAccess_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; STUB_LOG_ONCE(__osSiRelAccess); }
void __osSiRawStartDma_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = 0; STUB_LOG_ONCE(__osSiRawStartDma); }
void __osSiCreateAccessQueue_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; STUB_LOG_ONCE(__osSiCreateAccessQueue); }

// PFS / Controller Pak stubs.
//
// These used to either return 0 (success) or leave $v0 holding whatever
// garbage was in it. Both are actively harmful: the game then believes it has
// a working Controller Pak, walks the "file system" it thinks is there, and
// iterates entry counts / decodes file names out of uninitialized RDRAM. That
// is the documented trigger for the runaway loops guarded in
// funcs_22/33/42/54.c (see the README's Known Issues section).
//
// This port's input layer reports controller 0 as having a Rumble Pak (see
// get_connected_device_info in main.cpp), so the honest answer to "is there a
// Controller Pak?" is PFS_ERR_DEVICE -- the same thing real hardware reports
// with a Rumble Pak inserted, which makes the game skip the pak path entirely
// instead of parsing garbage.
void osPfsInit_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_DEVICE; STUB_LOG_ONCE(osPfsInit); }
void __osPfsGetInitData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; STUB_LOG_ONCE(__osPfsGetInitData); }
void __osPfsRequestData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_CONTRFAIL; STUB_LOG_ONCE(__osPfsRequestData); }
void __osPfsGetStatus_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; STUB_LOG_ONCE(__osPfsGetStatus); }
void __osPfsSelectBank_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_CONTRFAIL; STUB_LOG_ONCE(__osPfsSelectBank); }
void __osPfsRWInode_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_CONTRFAIL; STUB_LOG_ONCE(__osPfsRWInode); }

void __osContRamRead_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_CONTRFAIL; STUB_LOG_ONCE(__osContRamRead); }
void __osContRamWrite_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_CONTRFAIL; STUB_LOG_ONCE(__osContRamWrite); }
void __osContDataCrc_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = 0; STUB_LOG_ONCE(__osContDataCrc); }
void __osContGetInitData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = 0; STUB_LOG_ONCE(__osContGetInitData); }
void __osPackRequestData_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_CONTRFAIL; STUB_LOG_ONCE(__osPackRequestData); }
void __osCheckPackId_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; STUB_LOG_ONCE(__osCheckPackId); }
void __osRepairPackId_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; STUB_LOG_ONCE(__osRepairPackId); }
void __osGetId_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; STUB_LOG_ONCE(__osGetId); }
void __osCheckId_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = PFS_ERR_NOPACK; STUB_LOG_ONCE(__osCheckId); }
void corrupted_init_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; STUB_LOG_ONCE(corrupted_init); }
void corrupted_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; STUB_LOG_ONCE(corrupted); }

// Status register / VI / TLB / PI / Timer stubs
void __osGetSR_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->r2 = ctx->status_reg; }
void __osSetSR_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; ctx->status_reg = (uint32_t)ctx->r4; }
void __osViInit_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osInsertTimer_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void __osSetTimerIntr_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void osUnmapTLB_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }
void osMapTLB_recomp(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }

// osPiRawReadIo(u32 devAddr, u32 *data): read one word straight off the PI bus.
// This used to report success without ever writing *data, so every caller read
// back whatever stale bytes were already at that address and treated them as
// ROM contents. Do the read for real, the same way osEPiReadIo_recomp does.
void osPiRawReadIo_recomp(uint8_t* rdram, recomp_context* ctx) {
    STUB_LOG_ONCE(osPiRawReadIo);
    uint32_t devAddr = (uint32_t)ctx->r4;
    gpr dramAddr = ctx->r5;
    uint32_t physical_addr = devAddr & 0x1FFFFFFF; // k1_to_phys
    if (physical_addr >= recomp::rom_base && recomp::is_rom_loaded()) {
        recomp::do_rom_pio(rdram, dramAddr, physical_addr);
        ctx->r2 = 0;
    }
    else {
        // Not a cart read (or no ROM yet): report failure instead of
        // pretending the caller's buffer now holds valid data.
        ctx->r2 = -1;
    }
}

// Ignored/dummy functions
void func_150AE280(uint8_t* rdram, recomp_context* ctx) { (void)rdram; (void)ctx; }

void recomp_syscall_handler(uint8_t* rdram, recomp_context* ctx, int32_t instruction_vram) {
    (void)rdram;
    (void)ctx;
    (void)instruction_vram;
}

}

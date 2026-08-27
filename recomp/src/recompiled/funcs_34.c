#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1506B370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B378: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1506B37C: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1506B380: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506B384: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1506B388: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1506B38C: subu        $a0, $t6, $t7
    ctx->r4 = SUB32(ctx->r14, ctx->r15);
    // 0x1506B390: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x1506B394: mflo        $a0
    ctx->r4 = lo;
    // 0x1506B398: jal         0x1507D4F8
    // 0x1506B39C: nop

    func_1507D4F8(rdram, ctx);
        goto after_0;
    // 0x1506B39C: nop

    after_0:
    // 0x1506B3A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B3A8: jr          $ra
    // 0x1506B3AC: nop

    return;
    return;
    // 0x1506B3AC: nop

;}
RECOMP_FUNC void func_16000384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16000384: lui         $v0, 0x1600
    ctx->r2 = S32(0X1600 << 16);
    // 0x16000388: lw          $v0, 0x3890($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3890);
    // 0x1600038C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x16000390: andi        $t6, $v0, 0x5
    ctx->r14 = ctx->r2 & 0X5;
    // 0x16000394: beq         $t6, $zero, L_160003CC
    if (ctx->r14 == 0) {
        // 0x16000398: andi        $t0, $v0, 0xA
        ctx->r8 = ctx->r2 & 0XA;
            goto L_160003CC;
    }
    // 0x16000398: andi        $t0, $v0, 0xA
    ctx->r8 = ctx->r2 & 0XA;
    // 0x1600039C: lui         $v0, 0x1600
    ctx->r2 = S32(0X1600 << 16);
    // 0x160003A0: addiu       $v0, $v0, 0x3B28
    ctx->r2 = ADD32(ctx->r2, 0X3B28);
    // 0x160003A4: lb          $t7, 0x0($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X0);
    // 0x160003A8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x160003AC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x160003B0: lb          $t9, 0x0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X0);
    // 0x160003B4: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x160003B8: bne         $at, $zero, L_160003C4
    if (ctx->r1 != 0) {
        // 0x160003BC: nop
    
            goto L_160003C4;
    }
    // 0x160003BC: nop

    // 0x160003C0: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_160003C4:
    // 0x160003C4: jr          $ra
    // 0x160003C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    return;
    // 0x160003C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_160003CC:
    // 0x160003CC: beq         $t0, $zero, L_16000404
    if (ctx->r8 == 0) {
        // 0x160003D0: andi        $t5, $v0, 0x4000
        ctx->r13 = ctx->r2 & 0X4000;
            goto L_16000404;
    }
    // 0x160003D0: andi        $t5, $v0, 0x4000
    ctx->r13 = ctx->r2 & 0X4000;
    // 0x160003D4: lui         $v0, 0x1600
    ctx->r2 = S32(0X1600 << 16);
    // 0x160003D8: addiu       $v0, $v0, 0x3B28
    ctx->r2 = ADD32(ctx->r2, 0X3B28);
    // 0x160003DC: lb          $t1, 0x0($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X0);
    // 0x160003E0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x160003E4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x160003E8: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x160003EC: lb          $t3, 0x0($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X0);
    // 0x160003F0: bgez        $t3, L_160003FC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x160003F4: nop
    
            goto L_160003FC;
    }
    // 0x160003F4: nop

    // 0x160003F8: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_160003FC:
    // 0x160003FC: jr          $ra
    // 0x16000400: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    return;
    // 0x16000400: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_16000404:
    // 0x16000404: beq         $t5, $zero, L_16000418
    if (ctx->r13 == 0) {
        // 0x16000408: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_16000418;
    }
    // 0x16000408: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1600040C: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16000410: sb          $t6, 0x3AF4($at)
    MEM_B(0X3AF4, ctx->r1) = ctx->r14;
    // 0x16000414: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_16000418:
    // 0x16000418: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1600041C: jr          $ra
    // 0x16000420: nop

    return;
    return;
    // 0x16000420: nop

;}
RECOMP_FUNC void func_15010FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15010FB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15010FB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15010FB8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x15010FBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15010FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15010FC4: jal         0x10003C40
    // 0x15010FC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15010FC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15010FCC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15010FD0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15010FD4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15010FD8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15010FDC: sw          $v0, -0x1B10($at)
    MEM_W(-0X1B10, ctx->r1) = ctx->r2;
    // 0x15010FE0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15010FE4: lw          $a1, 0x310($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X310);
    // 0x15010FE8: lw          $a0, 0xE04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE04);
    // 0x15010FEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15010FF0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15010FF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15010FF8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15010FFC: jal         0x15195AA8
    // 0x15011000: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_1;
    // 0x15011000: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x15011004: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15011008: lw          $t7, -0x1B10($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1B10);
    // 0x1501100C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15011010: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15011014: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x15011018: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1501101C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15011020: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15011024: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15011028: lw          $a1, 0x314($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X314);
    // 0x1501102C: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    // 0x15011030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15011034: jal         0x15195AA8
    // 0x15011038: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    func_15195AA8(rdram, ctx);
        goto after_2;
    // 0x15011038: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_2:
    // 0x1501103C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15011040: lw          $t8, -0x1B10($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1B10);
    // 0x15011044: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    // 0x15011048: jal         0x151149AC
    // 0x1501104C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    func_151149AC(rdram, ctx);
        goto after_3;
    // 0x1501104C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    after_3:
    // 0x15011050: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15011054: lw          $a1, 0x310($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X310);
    // 0x15011058: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1501105C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15011060: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15011064: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15011068: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1501106C: jal         0x15195FB0
    // 0x15011070: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195FB0(rdram, ctx);
        goto after_4;
    // 0x15011070: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_4:
    // 0x15011074: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15011078: lw          $t9, -0x1B10($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1B10);
    // 0x1501107C: addiu       $a0, $zero, 0xF9
    ctx->r4 = ADD32(0, 0XF9);
    // 0x15011080: jal         0x151149AC
    // 0x15011084: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    func_151149AC(rdram, ctx);
        goto after_5;
    // 0x15011084: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    after_5:
    // 0x15011088: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1501108C: lw          $a1, 0x310($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X310);
    // 0x15011090: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15011094: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15011098: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1501109C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150110A0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150110A4: jal         0x15195FB0
    // 0x150110A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195FB0(rdram, ctx);
        goto after_6;
    // 0x150110A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_6:
    // 0x150110AC: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150110B0: lw          $t0, -0x1B10($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1B10);
    // 0x150110B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150110B8: jal         0x1510F800
    // 0x150110BC: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    func_1510F800(rdram, ctx);
        goto after_7;
    // 0x150110BC: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    after_7:
    // 0x150110C0: addiu       $a0, $zero, 0x1500
    ctx->r4 = ADD32(0, 0X1500);
    // 0x150110C4: jal         0x1510FD20
    // 0x150110C8: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    func_1510FD20(rdram, ctx);
        goto after_8;
    // 0x150110C8: addiu       $a1, $zero, 0x700
    ctx->r5 = ADD32(0, 0X700);
    after_8:
    // 0x150110CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150110D0: sw          $v0, -0x65C0($at)
    MEM_W(-0X65C0, ctx->r1) = ctx->r2;
    // 0x150110D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150110D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150110DC: jr          $ra
    // 0x150110E0: nop

    return;
    return;
    // 0x150110E0: nop

;}
RECOMP_FUNC void func_1517CFC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517CFC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1517CFC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1517CFCC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x1517CFD0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x1517CFD4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x1517CFD8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x1517CFDC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1517CFE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1517CFE4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x1517CFE8: lui         $s4, 0x8004
    ctx->r20 = S32(0X8004 << 16);
    // 0x1517CFEC: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x1517CFF0: addiu       $s2, $s2, -0x2B88
    ctx->r18 = ADD32(ctx->r18, -0X2B88);
    // 0x1517CFF4: addiu       $s4, $s4, -0x7F64
    ctx->r20 = ADD32(ctx->r20, -0X7F64);
    // 0x1517CFF8: addiu       $s0, $s0, -0x2570
    ctx->r16 = ADD32(ctx->r16, -0X2570);
    // 0x1517CFFC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1517D000: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
    // 0x1517D004: addiu       $s3, $zero, 0x1A
    ctx->r19 = ADD32(0, 0X1A);
L_1517D008:
    // 0x1517D008: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x1517D00C: beql        $a0, $zero, L_1517D048
    if (ctx->r4 == 0) {
        // 0x1517D010: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1517D048;
    }
    goto skip_0;
    // 0x1517D010: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x1517D014: multu       $s1, $s3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1517D018: mflo        $t6
    ctx->r14 = lo;
    // 0x1517D01C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1517D020: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x1517D024: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x1517D028: beql        $a1, $zero, L_1517D044
    if (ctx->r5 == 0) {
        // 0x1517D02C: sw          $zero, 0x8($s0)
        MEM_W(0X8, ctx->r16) = 0;
            goto L_1517D044;
    }
    goto skip_1;
    // 0x1517D02C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    skip_1:
    // 0x1517D030: jal         0x10006240
    // 0x1517D034: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    func_10006240(rdram, ctx);
        goto after_0;
    // 0x1517D034: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    after_0:
    // 0x1517D038: jal         0x10004074
    // 0x1517D03C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    func_10004074(rdram, ctx);
        goto after_1;
    // 0x1517D03C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    after_1:
    // 0x1517D040: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_1517D044:
    // 0x1517D044: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1517D048:
    // 0x1517D048: bne         $s1, $s5, L_1517D008
    if (ctx->r17 != ctx->r21) {
        // 0x1517D04C: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_1517D008;
    }
    // 0x1517D04C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x1517D050: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1517D054: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1517D058: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1517D05C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x1517D060: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x1517D064: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x1517D068: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x1517D06C: jr          $ra
    // 0x1517D070: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1517D070: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1506B7F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B7F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B7F8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506B7FC: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x1506B800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B804: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1506B808: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1506B80C: sb          $zero, 0x89($t6)
    MEM_B(0X89, ctx->r14) = 0;
    // 0x1506B810: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1506B814: jal         0x1506B634
    // 0x1506B818: sb          $zero, 0x83($t7)
    MEM_B(0X83, ctx->r15) = 0;
    func_1506B634(rdram, ctx);
        goto after_0;
    // 0x1506B818: sb          $zero, 0x83($t7)
    MEM_B(0X83, ctx->r15) = 0;
    after_0:
    // 0x1506B81C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B824: jr          $ra
    // 0x1506B828: nop

    return;
    return;
    // 0x1506B828: nop

;}
RECOMP_FUNC void func_150A3FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A3FBC:
    // 0x150A3FC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A3FC8: cvt.w.s     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = CVT_W_S(ctx->f12.fl);
    // 0x150A3FCC: mfc1        $a0, $f12
    ctx->r4 = (int32_t)ctx->f12.u32l;
    // 0x150A3FD0: nop

    // 0x150A3FD4: cvt.w.s     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = CVT_W_S(ctx->f14.fl);
    // 0x150A3FD8: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x150A3FDC: nop

    // 0x150A3FE0: bne         $a3, $zero, L_150A4044
    if (ctx->r7 != 0) {
        // 0x150A3FE4: nop
    
            goto L_150A4044;
    }
    // 0x150A3FE4: nop

    // 0x150A3FE8: mtc1        $s5, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r21;
    // 0x150A3FEC: nop

    // 0x150A3FF0: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x150A3FF4: mtc1        $s6, $f2
    ctx->f2.u32l = ctx->r22;
    // 0x150A3FF8: nop

    // 0x150A3FFC: lw          $s5, 0x4($a2)
    ctx->r21 = MEM_W(ctx->r6, 0X4);
    // 0x150A4000: mtc1        $s7, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r23;
    // 0x150A4004: nop

    // 0x150A4008: mtc1        $fp, $f4
    ctx->f4.u32l = ctx->r30;
    // 0x150A400C: nop

    // 0x150A4010: lw          $fp, 0x8($a2)
    ctx->r30 = MEM_W(ctx->r6, 0X8);
    // 0x150A4014: lh          $t0, 0x0($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X0);
    // 0x150A4018: lh          $t1, 0x2($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X2);
    // 0x150A401C: lh          $t2, 0x4($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4);
    // 0x150A4020: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A4024: lh          $t3, 0x0($s5)
    ctx->r11 = MEM_H(ctx->r21, 0X0);
    // 0x150A4028: lh          $t4, 0x2($s5)
    ctx->r12 = MEM_H(ctx->r21, 0X2);
    // 0x150A402C: lh          $s5, 0x4($s5)
    ctx->r21 = MEM_H(ctx->r21, 0X4);
    // 0x150A4030: lh          $s6, 0x0($fp)
    ctx->r22 = MEM_H(ctx->r30, 0X0);
    // 0x150A4034: lh          $s7, 0x2($fp)
    ctx->r23 = MEM_H(ctx->r30, 0X2);
    // 0x150A4038: lh          $fp, 0x4($fp)
    ctx->r30 = MEM_H(ctx->r30, 0X4);
    // 0x150A403C: j           L_150A40A8
    // 0x150A4040: nop

        goto L_150A40A8;
    // 0x150A4040: nop

L_150A4044:
    // 0x150A4044: ldl         $t0, 0x0($a3)
    ctx->r8 = do_ldl(rdram, ctx->r8, ctx->r7, 0X0);
    // 0x150A4048: ldr         $t0, 0x7($a3)
    ctx->r8 = do_ldr(rdram, ctx->r8, ctx->r7, 0X7);
    // 0x150A404C: beq         $t0, $zero, L_150A3FBC
    if (ctx->r8 == 0) {
        // 0x150A4050: nop
    
        // 0x150A4050: nop

    static_5_150A3FBC(rdram, ctx);
        return;
    }
    // 0x150A4050: nop

    // 0x150A4054: ldl         $t0, 0x8($a3)
    ctx->r8 = do_ldl(rdram, ctx->r8, ctx->r7, 0X8);
    // 0x150A4058: ldr         $t0, 0xF($a3)
    ctx->r8 = do_ldr(rdram, ctx->r8, ctx->r7, 0XF);
    // 0x150A405C: beq         $t0, $zero, L_150A3FBC
    if (ctx->r8 == 0) {
        // 0x150A4060: nop
    
        // 0x150A4060: nop

    static_5_150A3FBC(rdram, ctx);
        return;
    }
    // 0x150A4060: nop

    // 0x150A4064: mtc1        $s5, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r21;
    // 0x150A4068: nop

    // 0x150A406C: mtc1        $s6, $f2
    ctx->f2.u32l = ctx->r22;
    // 0x150A4070: nop

    // 0x150A4074: mtc1        $s7, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r23;
    // 0x150A4078: nop

    // 0x150A407C: mtc1        $fp, $f4
    ctx->f4.u32l = ctx->r30;
    // 0x150A4080: nop

    // 0x150A4084: lh          $t0, 0x0($a3)
    ctx->r8 = MEM_H(ctx->r7, 0X0);
    // 0x150A4088: lh          $t1, 0x2($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X2);
    // 0x150A408C: lh          $t2, 0x4($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X4);
    // 0x150A4090: lh          $t3, 0x6($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X6);
    // 0x150A4094: lh          $t4, 0x8($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X8);
    // 0x150A4098: lh          $s5, 0xA($a3)
    ctx->r21 = MEM_H(ctx->r7, 0XA);
    // 0x150A409C: lh          $s6, 0xC($a3)
    ctx->r22 = MEM_H(ctx->r7, 0XC);
    // 0x150A40A0: lh          $s7, 0xE($a3)
    ctx->r23 = MEM_H(ctx->r7, 0XE);
    // 0x150A40A4: lh          $fp, 0x10($a3)
    ctx->r30 = MEM_H(ctx->r7, 0X10);
L_150A40A8:
    // 0x150A40A8: slt         $at, $t2, $s5
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x150A40AC: beq         $at, $zero, L_150A40EC
    if (ctx->r1 == 0) {
        // 0x150A40B0: nop
    
            goto L_150A40EC;
    }
    // 0x150A40B0: nop

    // 0x150A40B4: slt         $at, $fp, $t2
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x150A40B8: beq         $at, $zero, L_150A411C
    if (ctx->r1 == 0) {
        // 0x150A40BC: nop
    
            goto L_150A411C;
    }
    // 0x150A40BC: nop

L_150A40C0:
    // 0x150A40C0: or          $t5, $s6, $zero
    ctx->r13 = ctx->r22 | 0;
    // 0x150A40C4: or          $t6, $fp, $zero
    ctx->r14 = ctx->r30 | 0;
    // 0x150A40C8: or          $t7, $s7, $zero
    ctx->r15 = ctx->r23 | 0;
    // 0x150A40CC: or          $s6, $t0, $zero
    ctx->r22 = ctx->r8 | 0;
    // 0x150A40D0: or          $fp, $t2, $zero
    ctx->r30 = ctx->r10 | 0;
    // 0x150A40D4: or          $s7, $t1, $zero
    ctx->r23 = ctx->r9 | 0;
    // 0x150A40D8: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x150A40DC: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x150A40E0: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
    // 0x150A40E4: j           L_150A411C
    // 0x150A40E8: nop

        goto L_150A411C;
    // 0x150A40E8: nop

L_150A40EC:
    // 0x150A40EC: slt         $at, $s5, $fp
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x150A40F0: beq         $at, $zero, L_150A40C0
    if (ctx->r1 == 0) {
        // 0x150A40F4: nop
    
            goto L_150A40C0;
    }
    // 0x150A40F4: nop

    // 0x150A40F8: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x150A40FC: or          $t6, $s5, $zero
    ctx->r14 = ctx->r21 | 0;
    // 0x150A4100: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x150A4104: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
    // 0x150A4108: or          $s5, $t2, $zero
    ctx->r21 = ctx->r10 | 0;
    // 0x150A410C: or          $t4, $t1, $zero
    ctx->r12 = ctx->r9 | 0;
    // 0x150A4110: or          $t0, $t5, $zero
    ctx->r8 = ctx->r13 | 0;
    // 0x150A4114: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x150A4118: or          $t1, $t7, $zero
    ctx->r9 = ctx->r15 | 0;
L_150A411C:
    // 0x150A411C: slt         $at, $a1, $t2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x150A4120: bne         $at, $zero, L_150A43B0
    if (ctx->r1 != 0) {
        // 0x150A4124: nop
    
            goto L_150A43B0;
    }
    // 0x150A4124: nop

    // 0x150A4128: slt         $at, $fp, $s5
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x150A412C: beq         $at, $zero, L_150A4158
    if (ctx->r1 == 0) {
        // 0x150A4130: nop
    
            goto L_150A4158;
    }
    // 0x150A4130: nop

    // 0x150A4134: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x150A4138: or          $t6, $s5, $zero
    ctx->r14 = ctx->r21 | 0;
    // 0x150A413C: or          $t7, $t4, $zero
    ctx->r15 = ctx->r12 | 0;
    // 0x150A4140: or          $t3, $s6, $zero
    ctx->r11 = ctx->r22 | 0;
    // 0x150A4144: or          $s5, $fp, $zero
    ctx->r21 = ctx->r30 | 0;
    // 0x150A4148: or          $t4, $s7, $zero
    ctx->r12 = ctx->r23 | 0;
    // 0x150A414C: or          $s6, $t5, $zero
    ctx->r22 = ctx->r13 | 0;
    // 0x150A4150: or          $fp, $t6, $zero
    ctx->r30 = ctx->r14 | 0;
    // 0x150A4154: or          $s7, $t7, $zero
    ctx->r23 = ctx->r15 | 0;
L_150A4158:
    // 0x150A4158: slt         $at, $fp, $a1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x150A415C: bne         $at, $zero, L_150A43B0
    if (ctx->r1 != 0) {
        // 0x150A4160: nop
    
            goto L_150A43B0;
    }
    // 0x150A4160: nop

    // 0x150A4164: sub         $t6, $fp, $t2
    ctx->r14 = SUB32(ctx->r30, ctx->r10);
    // 0x150A4168: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x150A416C: sub         $t7, $s6, $t0
    ctx->r15 = SUB32(ctx->r22, ctx->r8);
    // 0x150A4170: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x150A4174: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x150A4178: sub         $t5, $a1, $t2
    ctx->r13 = SUB32(ctx->r5, ctx->r10);
    // 0x150A417C: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x150A4180: nop

    // 0x150A4184: mtc1        $t6, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r14;
    // 0x150A4188: nop

    // 0x150A418C: mflo        $t7
    ctx->r15 = lo;
    // 0x150A4190: nop

    // 0x150A4194: nop

    // 0x150A4198: mult        $t5, $t7
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A419C: mflo        $t5
    ctx->r13 = lo;
    // 0x150A41A0: nop

    // 0x150A41A4: nop

    // 0x150A41A8: sra         $t5, $t5, 8
    ctx->r13 = S32(SIGNED(ctx->r13) >> 8);
    // 0x150A41AC: sub         $t6, $fp, $s5
    ctx->r14 = SUB32(ctx->r30, ctx->r21);
    // 0x150A41B0: addu        $fp, $t5, $t0
    ctx->r30 = ADD32(ctx->r13, ctx->r8);
    // 0x150A41B4: sub         $t5, $a1, $s5
    ctx->r13 = SUB32(ctx->r5, ctx->r21);
    // 0x150A41B8: mtc1        $t5, $f14
    ctx->f14.u32l = ctx->r13;
    // 0x150A41BC: nop

    // 0x150A41C0: bgez        $t5, L_150A41D8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150A41C4: nop
    
            goto L_150A41D8;
    }
    // 0x150A41C4: nop

    // 0x150A41C8: sub         $t6, $s5, $t2
    ctx->r14 = SUB32(ctx->r21, ctx->r10);
    // 0x150A41CC: sub         $t5, $a1, $t2
    ctx->r13 = SUB32(ctx->r5, ctx->r10);
    // 0x150A41D0: or          $s6, $t3, $zero
    ctx->r22 = ctx->r11 | 0;
    // 0x150A41D4: or          $t3, $t0, $zero
    ctx->r11 = ctx->r8 | 0;
L_150A41D8:
    // 0x150A41D8: addiu       $t6, $t6, 0x1
    ctx->r14 = ADD32(ctx->r14, 0X1);
    // 0x150A41DC: sub         $t7, $s6, $t3
    ctx->r15 = SUB32(ctx->r22, ctx->r11);
    // 0x150A41E0: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x150A41E4: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x150A41E8: mtc1        $t5, $f12
    ctx->f12.u32l = ctx->r13;
    // 0x150A41EC: nop

    // 0x150A41F0: mtc1        $t6, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r14;
    // 0x150A41F4: nop

    // 0x150A41F8: mflo        $t7
    ctx->r15 = lo;
    // 0x150A41FC: nop

    // 0x150A4200: nop

    // 0x150A4204: mult        $t5, $t7
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A4208: mflo        $t5
    ctx->r13 = lo;
    // 0x150A420C: nop

    // 0x150A4210: nop

    // 0x150A4214: sra         $t5, $t5, 8
    ctx->r13 = S32(SIGNED(ctx->r13) >> 8);
    // 0x150A4218: addu        $s6, $t5, $t3
    ctx->r22 = ADD32(ctx->r13, ctx->r11);
    // 0x150A421C: sub         $t6, $s6, $a0
    ctx->r14 = SUB32(ctx->r22, ctx->r4);
    // 0x150A4220: sub         $t7, $fp, $a0
    ctx->r15 = SUB32(ctx->r30, ctx->r4);
    // 0x150A4224: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150A4228: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150A422C: bnel        $at, $zero, L_150A4234
    if (ctx->r1 != 0) {
        // 0x150A4230: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_150A4234;
    }
    goto skip_0;
    // 0x150A4230: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    skip_0:
L_150A4234:
    // 0x150A4234: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x150A4238: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x150A423C: xor         $t5, $t7, $t6
    ctx->r13 = ctx->r15 ^ ctx->r14;
    // 0x150A4240: bgez        $t5, L_150A43B0
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150A4244: nop
    
            goto L_150A43B0;
    }
    // 0x150A4244: nop

    // 0x150A4248: or          $t9, $t1, $zero
    ctx->r25 = ctx->r9 | 0;
    // 0x150A424C: slt         $at, $t9, $t4
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x150A4250: beq         $at, $zero, L_150A425C
    if (ctx->r1 == 0) {
        // 0x150A4254: nop
    
            goto L_150A425C;
    }
    // 0x150A4254: nop

    // 0x150A4258: or          $t9, $t4, $zero
    ctx->r25 = ctx->r12 | 0;
L_150A425C:
    // 0x150A425C: slt         $at, $t9, $s7
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x150A4260: beq         $at, $zero, L_150A426C
    if (ctx->r1 == 0) {
        // 0x150A4264: nop
    
            goto L_150A426C;
    }
    // 0x150A4264: nop

    // 0x150A4268: or          $t9, $s7, $zero
    ctx->r25 = ctx->r23 | 0;
L_150A426C:
    // 0x150A426C: sll         $t9, $t9, 8
    ctx->r25 = S32(ctx->r25 << 8);
    // 0x150A4270: sub         $t7, $s7, $t1
    ctx->r15 = SUB32(ctx->r23, ctx->r9);
    // 0x150A4274: mfc1        $t6, $f11
    ctx->r14 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x150A4278: nop

    // 0x150A427C: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x150A4280: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x150A4284: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x150A4288: nop

    // 0x150A428C: or          $t8, $t1, $zero
    ctx->r24 = ctx->r9 | 0;
    // 0x150A4290: slt         $at, $t4, $t8
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x150A4294: beq         $at, $zero, L_150A42A0
    if (ctx->r1 == 0) {
        // 0x150A4298: nop
    
            goto L_150A42A0;
    }
    // 0x150A4298: nop

    // 0x150A429C: or          $t8, $t4, $zero
    ctx->r24 = ctx->r12 | 0;
L_150A42A0:
    // 0x150A42A0: mflo        $t7
    ctx->r15 = lo;
    // 0x150A42A4: nop

    // 0x150A42A8: nop

    // 0x150A42AC: mult        $t5, $t7
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A42B0: slt         $at, $s7, $t8
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x150A42B4: beq         $at, $zero, L_150A42C0
    if (ctx->r1 == 0) {
        // 0x150A42B8: nop
    
            goto L_150A42C0;
    }
    // 0x150A42B8: nop

    // 0x150A42BC: or          $t8, $s7, $zero
    ctx->r24 = ctx->r23 | 0;
L_150A42C0:
    // 0x150A42C0: mflo        $t5
    ctx->r13 = lo;
    // 0x150A42C4: nop

    // 0x150A42C8: nop

    // 0x150A42CC: sll         $t3, $t1, 8
    ctx->r11 = S32(ctx->r9 << 8);
    // 0x150A42D0: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x150A42D4: mfc1        $t6, $f14
    ctx->r14 = (int32_t)ctx->f14.u32l;
    // 0x150A42D8: nop

    // 0x150A42DC: bgez        $t6, L_150A42EC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x150A42E0: nop
    
            goto L_150A42EC;
    }
    // 0x150A42E0: nop

    // 0x150A42E4: or          $s7, $t4, $zero
    ctx->r23 = ctx->r12 | 0;
    // 0x150A42E8: or          $t4, $t1, $zero
    ctx->r12 = ctx->r9 | 0;
L_150A42EC:
    // 0x150A42EC: sub         $t7, $s7, $t4
    ctx->r15 = SUB32(ctx->r23, ctx->r12);
    // 0x150A42F0: mfc1        $t6, $f13
    ctx->r14 = (int32_t)ctx->f_odd[(13 - 1) * 2];
    // 0x150A42F4: nop

    // 0x150A42F8: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x150A42FC: div         $zero, $t7, $t6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r14)));
    // 0x150A4300: mfc1        $t5, $f12
    ctx->r13 = (int32_t)ctx->f12.u32l;
    // 0x150A4304: nop

    // 0x150A4308: mflo        $t7
    ctx->r15 = lo;
    // 0x150A430C: nop

    // 0x150A4310: nop

    // 0x150A4314: mult        $t5, $t7
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A4318: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x150A431C: mflo        $t5
    ctx->r13 = lo;
    // 0x150A4320: nop

    // 0x150A4324: nop

    // 0x150A4328: sll         $t4, $t4, 8
    ctx->r12 = S32(ctx->r12 << 8);
    // 0x150A432C: addu        $s5, $t5, $t4
    ctx->r21 = ADD32(ctx->r13, ctx->r12);
    // 0x150A4330: sub         $fp, $fp, $s6
    ctx->r30 = SUB32(ctx->r30, ctx->r22);
    // 0x150A4334: sub         $t3, $t3, $s5
    ctx->r11 = SUB32(ctx->r11, ctx->r21);
    // 0x150A4338: sll         $t3, $t3, 8
    ctx->r11 = S32(ctx->r11 << 8);
    // 0x150A433C: div         $zero, $t3, $fp
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r30)));
    // 0x150A4340: sub         $t0, $a0, $s6
    ctx->r8 = SUB32(ctx->r4, ctx->r22);
    // 0x150A4344: mflo        $fp
    ctx->r30 = lo;
    // 0x150A4348: nop

    // 0x150A434C: nop

    // 0x150A4350: mult        $t0, $fp
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A4354: mflo        $t0
    ctx->r8 = lo;
    // 0x150A4358: nop

    // 0x150A435C: nop

    // 0x150A4360: sra         $t0, $t0, 8
    ctx->r8 = S32(SIGNED(ctx->r8) >> 8);
    // 0x150A4364: addu        $v0, $s5, $t0
    ctx->r2 = ADD32(ctx->r21, ctx->r8);
    // 0x150A4368: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150A436C: beq         $at, $zero, L_150A4378
    if (ctx->r1 == 0) {
        // 0x150A4370: nop
    
            goto L_150A4378;
    }
    // 0x150A4370: nop

    // 0x150A4374: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_150A4378:
    // 0x150A4378: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x150A437C: beq         $at, $zero, L_150A4388
    if (ctx->r1 == 0) {
        // 0x150A4380: nop
    
            goto L_150A4388;
    }
    // 0x150A4380: nop

    // 0x150A4384: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_150A4388:
    // 0x150A4388: mtc1        $v0, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r2;
    // 0x150A438C: nop

    // 0x150A4390: cvt.s.w     $f11, $f11
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    ctx->f11.fl = CVT_S_W(ctx->f_odd[(11 - 1) * 2]);
    // 0x150A4394: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x150A4398: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150A439C: nop

    // 0x150A43A0: mul.s       $f10, $f10, $f11
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f11.fl);
    // 0x150A43A4: nop

    // 0x150A43A8: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x150A43AC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_150A43B0:
    // 0x150A43B0: mfc1        $s5, $f1
    ctx->r21 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x150A43B4: nop

    // 0x150A43B8: mfc1        $s6, $f2
    ctx->r22 = (int32_t)ctx->f2.u32l;
    // 0x150A43BC: nop

    // 0x150A43C0: mfc1        $s7, $f3
    ctx->r23 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x150A43C4: nop

    // 0x150A43C8: mfc1        $fp, $f4
    ctx->r30 = (int32_t)ctx->f4.u32l;
    // 0x150A43CC: nop

    // 0x150A43D0: jr          $ra
    // 0x150A43D4: nop

    return;
    return;
    // 0x150A43D4: nop

    // 0x150A43D8: jr          $ra
    // 0x150A43DC: nop

    return;
    return;
    // 0x150A43DC: nop

;}
RECOMP_FUNC void func_1507DF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507DF10: addiu       $t6, $a1, -0x4
    ctx->r14 = ADD32(ctx->r5, -0X4);
    // 0x1507DF14: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x1507DF18: beq         $at, $zero, L_1507DFDC
    if (ctx->r1 == 0) {
        // 0x1507DF1C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1507DFDC;
    }
    // 0x1507DF1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1507DF20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1507DF24: addu        $at, $at, $t6
    gpr jr_addend_1507DF2C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1507DF28: lw          $t6, -0x477C($at)
    ctx->r14 = ADD32(ctx->r1, -0X477C);
    // 0x1507DF2C: jr          $t6
    // 0x1507DF30: nop

    switch (jr_addend_1507DF2C >> 2) {
        case 0: goto L_1507DFBC; break;
        case 1: goto L_1507DFBC; break;
        case 2: goto L_1507DF88; break;
        case 3: goto L_1507DF88; break;
        case 4: goto L_1507DF58; break;
        case 5: goto L_1507DF34; break;
        default: switch_error(__func__, 0x1507DF2C, 0x8009B884);
    }
    // 0x1507DF30: nop

L_1507DF34:
    // 0x1507DF34: lw          $t7, 0x94($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X94);
    // 0x1507DF38: lw          $t9, 0x9C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X9C);
    // 0x1507DF3C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1507DF40: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x1507DF44: ori         $t0, $t9, 0x78
    ctx->r8 = ctx->r25 | 0X78;
    // 0x1507DF48: sw          $t8, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r24;
    // 0x1507DF4C: sw          $t0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r8;
    // 0x1507DF50: jr          $ra
    // 0x1507DF54: sw          $t1, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r9;
    return;
    return;
    // 0x1507DF54: sw          $t1, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r9;
L_1507DF58:
    // 0x1507DF58: lw          $t2, 0x94($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X94);
    // 0x1507DF5C: lw          $t6, 0x9C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X9C);
    // 0x1507DF60: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x1507DF64: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x1507DF68: sw          $t3, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r11;
    // 0x1507DF6C: and         $t5, $t3, $at
    ctx->r13 = ctx->r11 & ctx->r1;
    // 0x1507DF70: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x1507DF74: ori         $t7, $t6, 0xF00
    ctx->r15 = ctx->r14 | 0XF00;
    // 0x1507DF78: sw          $t5, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r13;
    // 0x1507DF7C: sw          $t7, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r15;
    // 0x1507DF80: jr          $ra
    // 0x1507DF84: sw          $t8, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r24;
    return;
    return;
    // 0x1507DF84: sw          $t8, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r24;
L_1507DF88:
    // 0x1507DF88: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x1507DF8C: lw          $t3, 0x9C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X9C);
    // 0x1507DF90: addiu       $at, $zero, -0x411
    ctx->r1 = ADD32(0, -0X411);
    // 0x1507DF94: ori         $t0, $t9, 0xE
    ctx->r8 = ctx->r25 | 0XE;
    // 0x1507DF98: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x1507DF9C: lui         $at, 0xEE
    ctx->r1 = S32(0XEE << 16);
    // 0x1507DFA0: sw          $t0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r8;
    // 0x1507DFA4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x1507DFA8: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x1507DFAC: sw          $t2, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r10;
    // 0x1507DFB0: sw          $t4, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r12;
    // 0x1507DFB4: jr          $ra
    // 0x1507DFB8: sw          $t5, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r13;
    return;
    return;
    // 0x1507DFB8: sw          $t5, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r13;
L_1507DFBC:
    // 0x1507DFBC: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x1507DFC0: addiu       $at, $zero, -0x501
    ctx->r1 = ADD32(0, -0X501);
    // 0x1507DFC4: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x1507DFC8: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x1507DFCC: sw          $t7, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r15;
    // 0x1507DFD0: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x1507DFD4: sw          $t9, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r25;
    // 0x1507DFD8: sw          $t0, 0x2E4($a0)
    MEM_W(0X2E4, ctx->r4) = ctx->r8;
L_1507DFDC:
    // 0x1507DFDC: jr          $ra
    // 0x1507DFE0: nop

    return;
    return;
    // 0x1507DFE0: nop

;}
RECOMP_FUNC void func_15197AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15197AB4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15197AB8: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x15197ABC: lwc1        $f0, 0x15C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X15C);
    // 0x15197AC0: lwc1        $f4, 0x140($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X140);
    // 0x15197AC4: lwc1        $f2, 0x158($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X158);
    // 0x15197AC8: lwc1        $f8, 0x144($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X144);
    // 0x15197ACC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15197AD0: lwc1        $f4, 0x148($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X148);
    // 0x15197AD4: lwc1        $f12, 0x160($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X160);
    // 0x15197AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15197ADC: swc1        $f6, 0x140($a0)
    MEM_W(0X140, ctx->r4) = ctx->f6.u32l;
    // 0x15197AE0: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15197AE4: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x15197AE8: lwc1        $f10, 0x14C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x15197AEC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15197AF0: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15197AF4: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15197AF8: swc1        $f6, 0x148($a0)
    MEM_W(0X148, ctx->r4) = ctx->f6.u32l;
    // 0x15197AFC: lwc1        $f10, 0x154($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X154);
    // 0x15197B00: swc1        $f18, 0x144($a0)
    MEM_W(0X144, ctx->r4) = ctx->f18.u32l;
    // 0x15197B04: lwc1        $f16, 0x150($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X150);
    // 0x15197B08: swc1        $f8, 0x14C($a0)
    MEM_W(0X14C, ctx->r4) = ctx->f8.u32l;
    // 0x15197B0C: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15197B10: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x15197B14: lwc1        $f18, 0x140($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X140);
    // 0x15197B18: mul.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15197B1C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x15197B20: swc1        $f8, 0x154($a0)
    MEM_W(0X154, ctx->r4) = ctx->f8.u32l;
    // 0x15197B24: lwc1        $f8, 0x144($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X144);
    // 0x15197B28: swc1        $f6, 0x150($a0)
    MEM_W(0X150, ctx->r4) = ctx->f6.u32l;
    // 0x15197B2C: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15197B30: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x15197B34: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x15197B38: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15197B3C: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15197B40: swc1        $f10, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f10.u32l;
    // 0x15197B44: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15197B48: lwc1        $f10, 0x148($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X148);
    // 0x15197B4C: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x15197B50: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x15197B54: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15197B58: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x15197B5C: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15197B60: lwc1        $f4, 0x14C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x15197B64: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15197B68: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x15197B6C: lwc1        $f6, 0x40($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X40);
    // 0x15197B70: swc1        $f16, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f16.u32l;
    // 0x15197B74: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15197B78: lwc1        $f16, 0x150($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X150);
    // 0x15197B7C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x15197B80: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15197B84: lwc1        $f6, 0x44($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X44);
    // 0x15197B88: swc1        $f18, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f18.u32l;
    // 0x15197B8C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15197B90: lwc1        $f18, 0x154($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X154);
    // 0x15197B94: mul.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x15197B98: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15197B9C: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x15197BA0: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x15197BA4: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15197BA8: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x15197BAC: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15197BB0: swc1        $f10, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f10.u32l;
    // 0x15197BB4: jr          $ra
    // 0x15197BB8: nop

    return;
    return;
    // 0x15197BB8: nop

;}
RECOMP_FUNC void func_151D5E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5E90: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x151D5E94: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x151D5E98: lui         $s4, 0xE700
    ctx->r20 = S32(0XE700 << 16);
    // 0x151D5E9C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D5EA0: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x151D5EA4: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x151D5EA8: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x151D5EAC: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x151D5EB0: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x151D5EB4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x151D5EB8: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x151D5EBC: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x151D5EC0: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x151D5EC4: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x151D5EC8: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x151D5ECC: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x151D5ED0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151D5ED4: lw          $s2, -0x19E0($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X19E0);
    // 0x151D5ED8: lw          $v1, -0x19DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X19DC);
    // 0x151D5EDC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D5EE0: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x151D5EE4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151D5EE8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D5EEC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151D5EF0: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x151D5EF4: lui         $t7, 0xFFFC
    ctx->r15 = S32(0XFFFC << 16);
    // 0x151D5EF8: ori         $t7, $t7, 0xF279
    ctx->r15 = ctx->r15 | 0XF279;
    // 0x151D5EFC: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x151D5F00: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x151D5F04: sw          $t7, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r15;
    // 0x151D5F08: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D5F0C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151D5F10: lui         $t8, 0xEF00
    ctx->r24 = S32(0XEF00 << 16);
    // 0x151D5F14: lui         $t9, 0xF0A
    ctx->r25 = S32(0XF0A << 16);
    // 0x151D5F18: ori         $t9, $t9, 0x4000
    ctx->r25 = ctx->r25 | 0X4000;
    // 0x151D5F1C: ori         $t8, $t8, 0xCFF
    ctx->r24 = ctx->r24 | 0XCFF;
    // 0x151D5F20: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x151D5F24: sw          $t9, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r25;
    // 0x151D5F28: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D5F2C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x151D5F30: lui         $t6, 0xD900
    ctx->r14 = S32(0XD900 << 16);
    // 0x151D5F34: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x151D5F38: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x151D5F3C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D5F40: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x151D5F44: lui         $t7, 0xD700
    ctx->r15 = S32(0XD700 << 16);
    // 0x151D5F48: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x151D5F4C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151D5F50: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x151D5F54: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x151D5F58: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D5F5C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x151D5F60: beq         $v1, $zero, L_151D615C
    if (ctx->r3 == 0) {
        // 0x151D5F64: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151D615C;
    }
    // 0x151D5F64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151D5F68: lui         $ra, 0xE600
    ctx->r31 = S32(0XE600 << 16);
    // 0x151D5F6C: lui         $fp, 0xF510
    ctx->r30 = S32(0XF510 << 16);
    // 0x151D5F70: lui         $s3, 0x700
    ctx->r19 = S32(0X700 << 16);
L_151D5F74:
    // 0x151D5F74: addu        $a3, $v0, $a1
    ctx->r7 = ADD32(ctx->r2, ctx->r5);
    // 0x151D5F78: sltu        $at, $v1, $a3
    ctx->r1 = ctx->r3 < ctx->r7 ? 1 : 0;
    // 0x151D5F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D5F80: beq         $at, $zero, L_151D5F90
    if (ctx->r1 == 0) {
        // 0x151D5F84: addiu       $s0, $zero, 0x80
        ctx->r16 = ADD32(0, 0X80);
            goto L_151D5F90;
    }
    // 0x151D5F84: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
    // 0x151D5F88: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
    // 0x151D5F8C: addu        $a3, $v0, $a1
    ctx->r7 = ADD32(ctx->r2, ctx->r5);
L_151D5F90:
    // 0x151D5F90: beq         $s2, $zero, L_151D6150
    if (ctx->r18 == 0) {
        // 0x151D5F94: addiu       $s5, $s2, -0x1
        ctx->r21 = ADD32(ctx->r18, -0X1);
            goto L_151D6150;
    }
    // 0x151D5F94: addiu       $s5, $s2, -0x1
    ctx->r21 = ADD32(ctx->r18, -0X1);
    // 0x151D5F98: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x151D5F9C: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x151D5FA0: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
    // 0x151D5FA4: addiu       $s1, $a3, -0x1
    ctx->r17 = ADD32(ctx->r7, -0X1);
    // 0x151D5FA8: sll         $s6, $a3, 2
    ctx->r22 = S32(ctx->r7 << 2);
    // 0x151D5FAC: sll         $s7, $v0, 5
    ctx->r23 = S32(ctx->r2 << 5);
    // 0x151D5FB0: andi        $t7, $s7, 0xFFFF
    ctx->r15 = ctx->r23 & 0XFFFF;
    // 0x151D5FB4: andi        $t6, $s6, 0xFFF
    ctx->r14 = ctx->r22 & 0XFFF;
    // 0x151D5FB8: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x151D5FBC: andi        $t9, $s5, 0xFFF
    ctx->r25 = ctx->r21 & 0XFFF;
    // 0x151D5FC0: lui         $at, 0xFD10
    ctx->r1 = S32(0XFD10 << 16);
    // 0x151D5FC4: or          $s5, $t9, $at
    ctx->r21 = ctx->r25 | ctx->r1;
    // 0x151D5FC8: andi        $s1, $t8, 0xFFF
    ctx->r17 = ctx->r24 & 0XFFF;
    // 0x151D5FCC: or          $s6, $t6, $zero
    ctx->r22 = ctx->r14 | 0;
    // 0x151D5FD0: or          $s7, $t7, $zero
    ctx->r23 = ctx->r15 | 0;
    // 0x151D5FD4: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x151D5FD8: sw          $v1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r3;
    // 0x151D5FDC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
L_151D5FE0:
    // 0x151D5FE0: addu        $a3, $a2, $s0
    ctx->r7 = ADD32(ctx->r6, ctx->r16);
    // 0x151D5FE4: sltu        $at, $s2, $a3
    ctx->r1 = ctx->r18 < ctx->r7 ? 1 : 0;
    // 0x151D5FE8: beq         $at, $zero, L_151D5FF8
    if (ctx->r1 == 0) {
        // 0x151D5FEC: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151D5FF8;
    }
    // 0x151D5FEC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D5FF0: subu        $s0, $s2, $a2
    ctx->r16 = SUB32(ctx->r18, ctx->r6);
    // 0x151D5FF4: addu        $a3, $a2, $s0
    ctx->r7 = ADD32(ctx->r6, ctx->r16);
L_151D5FF8:
    // 0x151D5FF8: sw          $s5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r21;
    // 0x151D5FFC: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x151D6000: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6004: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D6008: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151D600C: addiu       $t1, $a3, -0x1
    ctx->r9 = ADD32(ctx->r7, -0X1);
    // 0x151D6010: subu        $t9, $t1, $a2
    ctx->r25 = SUB32(ctx->r9, ctx->r6);
    // 0x151D6014: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x151D6018: addiu       $t7, $t6, 0x9
    ctx->r15 = ADD32(ctx->r14, 0X9);
    // 0x151D601C: srl         $t8, $t7, 3
    ctx->r24 = S32(U32(ctx->r15) >> 3);
    // 0x151D6020: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x151D6024: sll         $t6, $t9, 9
    ctx->r14 = S32(ctx->r25 << 9);
    // 0x151D6028: or          $t2, $t6, $fp
    ctx->r10 = ctx->r14 | ctx->r30;
    // 0x151D602C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x151D6030: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6034: sw          $s3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r19;
    // 0x151D6038: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D603C: sw          $ra, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r31;
    // 0x151D6040: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x151D6044: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6048: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x151D604C: andi        $t7, $t0, 0xFFF
    ctx->r15 = ctx->r8 & 0XFFF;
    // 0x151D6050: sll         $t0, $t7, 12
    ctx->r8 = S32(ctx->r15 << 12);
    // 0x151D6054: lui         $at, 0xF400
    ctx->r1 = S32(0XF400 << 16);
    // 0x151D6058: or          $t9, $t0, $at
    ctx->r25 = ctx->r8 | ctx->r1;
    // 0x151D605C: sll         $a1, $t1, 2
    ctx->r5 = S32(ctx->r9 << 2);
    // 0x151D6060: andi        $t7, $a1, 0xFFF
    ctx->r15 = ctx->r5 & 0XFFF;
    // 0x151D6064: or          $t6, $t9, $t5
    ctx->r14 = ctx->r25 | ctx->r13;
    // 0x151D6068: sll         $a1, $t7, 12
    ctx->r5 = S32(ctx->r15 << 12);
    // 0x151D606C: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x151D6070: sw          $t6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r14;
    // 0x151D6074: or          $t9, $a1, $s3
    ctx->r25 = ctx->r5 | ctx->r19;
    // 0x151D6078: or          $t6, $t9, $s1
    ctx->r14 = ctx->r25 | ctx->r17;
    // 0x151D607C: sw          $t6, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r14;
    // 0x151D6080: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6084: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D6088: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x151D608C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151D6090: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6094: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D6098: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x151D609C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151D60A0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D60A4: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x151D60A8: lui         $at, 0xF200
    ctx->r1 = S32(0XF200 << 16);
    // 0x151D60AC: or          $t7, $t0, $at
    ctx->r15 = ctx->r8 | ctx->r1;
    // 0x151D60B0: or          $t8, $t7, $t5
    ctx->r24 = ctx->r15 | ctx->r13;
    // 0x151D60B4: or          $t9, $a1, $s1
    ctx->r25 = ctx->r5 | ctx->r17;
    // 0x151D60B8: sw          $t9, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r25;
    // 0x151D60BC: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x151D60C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D60C4: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x151D60C8: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x151D60CC: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x151D60D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D60D4: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x151D60D8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x151D60DC: or          $t6, $t9, $s6
    ctx->r14 = ctx->r25 | ctx->r22;
    // 0x151D60E0: or          $t7, $t0, $t5
    ctx->r15 = ctx->r8 | ctx->r13;
    // 0x151D60E4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x151D60E8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151D60EC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D60F0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D60F4: lui         $t8, 0xE100
    ctx->r24 = S32(0XE100 << 16);
    // 0x151D60F8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x151D60FC: sll         $t7, $a2, 21
    ctx->r15 = S32(ctx->r6 << 21);
    // 0x151D6100: or          $t8, $t7, $s7
    ctx->r24 = ctx->r15 | ctx->r23;
    // 0x151D6104: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x151D6108: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D610C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D6110: lui         $t6, 0x400
    ctx->r14 = S32(0X400 << 16);
    // 0x151D6114: ori         $t6, $t6, 0x400
    ctx->r14 = ctx->r14 | 0X400;
    // 0x151D6118: lui         $t9, 0xF100
    ctx->r25 = S32(0XF100 << 16);
    // 0x151D611C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151D6120: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x151D6124: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6128: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D612C: sw          $s4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r20;
    // 0x151D6130: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151D6134: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6138: sltu        $at, $a3, $s2
    ctx->r1 = ctx->r7 < ctx->r18 ? 1 : 0;
    // 0x151D613C: bne         $at, $zero, L_151D5FE0
    if (ctx->r1 != 0) {
        // 0x151D6140: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_151D5FE0;
    }
    // 0x151D6140: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x151D6144: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x151D6148: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x151D614C: lw          $v1, 0x8C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8C);
L_151D6150:
    // 0x151D6150: sltu        $at, $a3, $v1
    ctx->r1 = ctx->r7 < ctx->r3 ? 1 : 0;
    // 0x151D6154: bne         $at, $zero, L_151D5F74
    if (ctx->r1 != 0) {
        // 0x151D6158: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_151D5F74;
    }
    // 0x151D6158: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_151D615C:
    // 0x151D615C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D6160: lui         $t7, 0xEF08
    ctx->r15 = S32(0XEF08 << 16);
    // 0x151D6164: lui         $t8, 0xF0A
    ctx->r24 = S32(0XF0A << 16);
    // 0x151D6168: ori         $t8, $t8, 0x4000
    ctx->r24 = ctx->r24 | 0X4000;
    // 0x151D616C: ori         $t7, $t7, 0xC3F
    ctx->r15 = ctx->r15 | 0XC3F;
    // 0x151D6170: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151D6174: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x151D6178: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D617C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D6180: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D6184: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x151D6188: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x151D618C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x151D6190: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x151D6194: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x151D6198: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x151D619C: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x151D61A0: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x151D61A4: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x151D61A8: jr          $ra
    // 0x151D61AC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x151D61AC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_15142838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15142838: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1514283C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15142840: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x15142844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15142848: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x1514284C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x15142850: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15142854: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x15142858: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    // 0x1514285C: lw          $a3, 0x6C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X6C);
    // 0x15142860: swc1        $f12, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f12.u32l;
    // 0x15142864: jal         0x150A8050
    // 0x15142868: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15142868: swc1        $f14, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x1514286C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15142870: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15142874: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x15142878: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1514287C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15142880: mul.s       $f14, $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x15142884: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15142888: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1514288C: mul.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x15142890: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15142894: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15142898: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x1514289C: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151428A0: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x151428A4: mul.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151428A8: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x151428AC: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x151428B0: mul.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x151428B4: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151428B8: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x151428BC: mul.s       $f16, $f4, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151428C0: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151428C4: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151428C8: mul.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151428CC: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151428D0: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x151428D4: mul.s       $f0, $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151428D8: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x151428DC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x151428E0: mul.s       $f18, $f12, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x151428E4: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x151428E8: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x151428EC: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x151428F0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x151428F4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x151428F8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x151428FC: jal         0x150A7790
    // 0x15142900: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x15142900: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x15142904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15142908: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1514290C: jr          $ra
    // 0x15142910: nop

    return;
    return;
    // 0x15142910: nop

;}
RECOMP_FUNC void func_1506A864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506A864: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1506A868: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506A86C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1506A870: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x1506A874: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x1506A878: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x1506A87C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1506A880: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506A884: lwc1        $f4, 0x14($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X14);
    // 0x1506A888: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1506A88C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x1506A890: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1506A894: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x1506A898: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x1506A89C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x1506A8A0: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1506A8A4: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x1506A8A8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1506A8AC: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x1506A8B0: lwc1        $f8, 0x18($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X18);
    // 0x1506A8B4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1506A8B8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x1506A8BC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1506A8C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1506A8C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506A8C8: lwc1        $f10, -0x65D8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X65D8);
    // 0x1506A8CC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1506A8D0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x1506A8D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1506A8D8: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x1506A8DC: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x1506A8E0: nop

    // 0x1506A8E4: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x1506A8E8: lwc1        $f4, 0x1C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x1506A8EC: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x1506A8F0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1506A8F4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1506A8F8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x1506A8FC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x1506A900: sb          $t3, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r11;
    // 0x1506A904: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x1506A908: sb          $t4, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r12;
    // 0x1506A90C: sh          $t5, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r13;
    // 0x1506A910: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x1506A914: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1506A918: sb          $t7, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r15;
    // 0x1506A91C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x1506A920: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1506A924: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x1506A928: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1506A92C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1506A930: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1506A934: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1506A938: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x1506A93C: jal         0x151602C0
    // 0x1506A940: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    func_151602C0(rdram, ctx);
        goto after_0;
    // 0x1506A940: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x1506A944: beq         $v0, $zero, L_1506A958
    if (ctx->r2 == 0) {
        // 0x1506A948: addiu       $a0, $v0, 0x18
        ctx->r4 = ADD32(ctx->r2, 0X18);
            goto L_1506A958;
    }
    // 0x1506A948: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x1506A94C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x1506A950: jal         0x10022EC0
    // 0x1506A954: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1506A954: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
L_1506A958:
    // 0x1506A958: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1506A95C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x1506A960: jr          $ra
    // 0x1506A964: nop

    return;
    return;
    // 0x1506A964: nop

;}
RECOMP_FUNC void func_1000E17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E17C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1000E180: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1000E184: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x1000E188: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x1000E18C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1000E190: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1000E194: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1000E198: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1000E19C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000E1A0: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x1000E1A4: lui         $s4, 0x8003
    ctx->r20 = S32(0X8003 << 16);
    // 0x1000E1A8: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000E1AC: addiu       $v1, $v1, 0x1E58
    ctx->r3 = ADD32(ctx->r3, 0X1E58);
    // 0x1000E1B0: addiu       $s4, $s4, -0x4F8C
    ctx->r20 = ADD32(ctx->r20, -0X4F8C);
    // 0x1000E1B4: addiu       $s0, $s0, 0x19A8
    ctx->r16 = ADD32(ctx->r16, 0X19A8);
    // 0x1000E1B8: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x1000E1BC: addiu       $s5, $zero, -0xF1
    ctx->r21 = ADD32(0, -0XF1);
    // 0x1000E1C0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1000E1C4: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x1000E1C8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_1000E1CC:
    // 0x1000E1CC: blez        $a0, L_1000E200
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1000E1D0: sll         $t6, $a0, 4
        ctx->r14 = S32(ctx->r4 << 4);
            goto L_1000E200;
    }
    // 0x1000E1D0: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x1000E1D4: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x1000E1D8: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x1000E1DC: and         $v0, $t8, $s5
    ctx->r2 = ctx->r24 & ctx->r21;
    // 0x1000E1E0: beql        $s3, $v0, L_1000E1F4
    if (ctx->r19 == ctx->r2) {
        // 0x1000E1E4: lw          $t9, 0x0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X0);
            goto L_1000E1F4;
    }
    goto skip_0;
    // 0x1000E1E4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x1000E1E8: bnel        $s6, $v0, L_1000E204
    if (ctx->r22 != ctx->r2) {
        // 0x1000E1EC: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000E204;
    }
    goto skip_1;
    // 0x1000E1EC: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_1:
    // 0x1000E1F0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
L_1000E1F4:
    // 0x1000E1F4: bnel        $s1, $t9, L_1000E204
    if (ctx->r17 != ctx->r25) {
        // 0x1000E1F8: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000E204;
    }
    goto skip_2;
    // 0x1000E1F8: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_2:
    // 0x1000E1FC: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
L_1000E200:
    // 0x1000E200: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_1000E204:
    // 0x1000E204: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x1000E208: bnel        $at, $zero, L_1000E1CC
    if (ctx->r1 != 0) {
        // 0x1000E20C: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_1000E1CC;
    }
    goto skip_3;
    // 0x1000E20C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_3:
    // 0x1000E210: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x1000E214: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000E218: addiu       $v1, $v1, 0x1E58
    ctx->r3 = ADD32(ctx->r3, 0X1E58);
    // 0x1000E21C: addiu       $s0, $s0, 0x19A8
    ctx->r16 = ADD32(ctx->r16, 0X19A8);
    // 0x1000E220: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
L_1000E224:
    // 0x1000E224: blezl       $t0, L_1000E268
    if (SIGNED(ctx->r8) <= 0) {
        // 0x1000E228: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000E268;
    }
    goto skip_4;
    // 0x1000E228: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_4:
    // 0x1000E22C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x1000E230: beql        $v0, $zero, L_1000E24C
    if (ctx->r2 == 0) {
        // 0x1000E234: lw          $v0, 0x10($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X10);
            goto L_1000E24C;
    }
    goto skip_5;
    // 0x1000E234: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    skip_5:
    // 0x1000E238: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x1000E23C: bnel        $s1, $t1, L_1000E24C
    if (ctx->r17 != ctx->r9) {
        // 0x1000E240: lw          $v0, 0x10($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X10);
            goto L_1000E24C;
    }
    goto skip_6;
    // 0x1000E240: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    skip_6:
    // 0x1000E244: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x1000E248: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
L_1000E24C:
    // 0x1000E24C: beql        $v0, $zero, L_1000E268
    if (ctx->r2 == 0) {
        // 0x1000E250: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000E268;
    }
    goto skip_7;
    // 0x1000E250: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_7:
    // 0x1000E254: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x1000E258: bnel        $s1, $t2, L_1000E268
    if (ctx->r17 != ctx->r10) {
        // 0x1000E25C: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000E268;
    }
    goto skip_8;
    // 0x1000E25C: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_8:
    // 0x1000E260: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x1000E264: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_1000E268:
    // 0x1000E268: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x1000E26C: bnel        $at, $zero, L_1000E224
    if (ctx->r1 != 0) {
        // 0x1000E270: lw          $t0, 0x4($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X4);
            goto L_1000E224;
    }
    goto skip_9;
    // 0x1000E270: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    skip_9:
    // 0x1000E274: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x1000E278: lui         $s2, 0x8004
    ctx->r18 = S32(0X8004 << 16);
    // 0x1000E27C: addiu       $s2, $s2, 0x1E58
    ctx->r18 = ADD32(ctx->r18, 0X1E58);
    // 0x1000E280: addiu       $s0, $s0, 0x19A8
    ctx->r16 = ADD32(ctx->r16, 0X19A8);
    // 0x1000E284: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
L_1000E288:
    // 0x1000E288: blez        $a0, L_1000E2C0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x1000E28C: sll         $t3, $a0, 4
        ctx->r11 = S32(ctx->r4 << 4);
            goto L_1000E2C0;
    }
    // 0x1000E28C: sll         $t3, $a0, 4
    ctx->r11 = S32(ctx->r4 << 4);
    // 0x1000E290: addu        $t4, $s4, $t3
    ctx->r12 = ADD32(ctx->r20, ctx->r11);
    // 0x1000E294: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x1000E298: and         $v0, $t5, $s5
    ctx->r2 = ctx->r13 & ctx->r21;
    // 0x1000E29C: beql        $s3, $v0, L_1000E2B0
    if (ctx->r19 == ctx->r2) {
        // 0x1000E2A0: lw          $t6, 0x0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X0);
            goto L_1000E2B0;
    }
    goto skip_10;
    // 0x1000E2A0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    skip_10:
    // 0x1000E2A4: bnel        $s6, $v0, L_1000E2C4
    if (ctx->r22 != ctx->r2) {
        // 0x1000E2A8: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000E2C4;
    }
    goto skip_11;
    // 0x1000E2A8: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_11:
    // 0x1000E2AC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_1000E2B0:
    // 0x1000E2B0: beql        $s1, $t6, L_1000E2C4
    if (ctx->r17 == ctx->r14) {
        // 0x1000E2B4: addiu       $s0, $s0, 0x64
        ctx->r16 = ADD32(ctx->r16, 0X64);
            goto L_1000E2C4;
    }
    goto skip_12;
    // 0x1000E2B4: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
    skip_12:
    // 0x1000E2B8: jal         0x1000DE1C
    // 0x1000E2BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_1000DE1C(rdram, ctx);
        goto after_0;
    // 0x1000E2BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
L_1000E2C0:
    // 0x1000E2C0: addiu       $s0, $s0, 0x64
    ctx->r16 = ADD32(ctx->r16, 0X64);
L_1000E2C4:
    // 0x1000E2C4: bnel        $s0, $s2, L_1000E288
    if (ctx->r16 != ctx->r18) {
        // 0x1000E2C8: lw          $a0, 0x4($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X4);
            goto L_1000E288;
    }
    goto skip_13;
    // 0x1000E2C8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    skip_13:
    // 0x1000E2CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1000E2D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1000E2D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1000E2D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1000E2DC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1000E2E0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1000E2E4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x1000E2E8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x1000E2EC: jr          $ra
    // 0x1000E2F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1000E2F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_1506E5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E5FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E604: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E608: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E60C: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E610: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E614: jal         0x1506E46C
    // 0x1506E618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1506E61C: beq         $v0, $zero, L_1506E62C
    if (ctx->r2 == 0) {
        // 0x1506E620: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1506E62C;
    }
    // 0x1506E620: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1506E624: jal         0x1506BA4C
    // 0x1506E628: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    func_1506BA4C(rdram, ctx);
        goto after_1;
    // 0x1506E628: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    after_1:
L_1506E62C:
    // 0x1506E62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E634: jr          $ra
    // 0x1506E638: nop

    return;
    return;
    // 0x1506E638: nop

;}
RECOMP_FUNC void func_150AC9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150AC2D8:
    // 0x150AC9B0: j           L_150AC2D8
    // 0x150AC9B4: nop

    static_5_150AC2D8(rdram, ctx);
    return;
    // 0x150AC9B4: nop

;}
RECOMP_FUNC void func_151C4AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C4AB0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151C4AB4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151C4AB8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151C4ABC: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151C4AC0: bne         $a2, $at, L_151C4B04
    if (ctx->r6 != ctx->r1) {
        // 0x151C4AC4: addiu       $v0, $a0, 0x110
        ctx->r2 = ADD32(ctx->r4, 0X110);
            goto L_151C4B04;
    }
    // 0x151C4AC4: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x151C4AC8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151C4ACC: lw          $a2, 0x90($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X90);
    // 0x151C4AD0: bnel        $v1, $a2, L_151C4AF0
    if (ctx->r3 != ctx->r6) {
        // 0x151C4AD4: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_151C4AF0;
    }
    goto skip_0;
    // 0x151C4AD4: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x151C4AD8: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x151C4ADC: sw          $t7, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r15;
    // 0x151C4AE0: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x151C4AE4: jr          $ra
    // 0x151C4AE8: sb          $t8, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r24;
    return;
    return;
    // 0x151C4AE8: sb          $t8, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r24;
    // 0x151C4AEC: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_151C4AF0:
    // 0x151C4AF0: bne         $t9, $a2, L_151C4B04
    if (ctx->r25 != ctx->r6) {
        // 0x151C4AF4: nop
    
            goto L_151C4B04;
    }
    // 0x151C4AF4: nop

    // 0x151C4AF8: sw          $v1, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r3;
    // 0x151C4AFC: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x151C4B00: sb          $t0, 0x94($v0)
    MEM_B(0X94, ctx->r2) = ctx->r8;
L_151C4B04:
    // 0x151C4B04: jr          $ra
    // 0x151C4B08: nop

    return;
    return;
    // 0x151C4B08: nop

;}
RECOMP_FUNC void func_1502F264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502F264: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1502F268: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x1502F26C: addiu       $a2, $zero, 0x32C
    ctx->r6 = ADD32(0, 0X32C);
    // 0x1502F270: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502F274: mflo        $t6
    ctx->r14 = lo;
    // 0x1502F278: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x1502F27C: lbu         $v1, 0x65($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X65);
    // 0x1502F280: beq         $v1, $zero, L_1502F3C0
    if (ctx->r3 == 0) {
        // 0x1502F284: nop
    
            goto L_1502F3C0;
    }
    // 0x1502F284: nop

    // 0x1502F288: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502F28C: lbu         $t8, 0x101($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X101);
    // 0x1502F290: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1502F294: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x1502F298: mflo        $t7
    ctx->r15 = lo;
    // 0x1502F29C: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x1502F2A0: beq         $t9, $at, L_1502F3C0
    if (ctx->r25 == ctx->r1) {
        // 0x1502F2A4: addiu       $a0, $a0, -0x32C
        ctx->r4 = ADD32(ctx->r4, -0X32C);
            goto L_1502F3C0;
    }
    // 0x1502F2A4: addiu       $a0, $a0, -0x32C
    ctx->r4 = ADD32(ctx->r4, -0X32C);
    // 0x1502F2A8: lw          $v1, 0x1D4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1D4);
    // 0x1502F2AC: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x1502F2B0: bnel        $v1, $zero, L_1502F2D8
    if (ctx->r3 != 0) {
        // 0x1502F2B4: lw          $t0, 0x5C($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X5C);
            goto L_1502F2D8;
    }
    goto skip_0;
    // 0x1502F2B4: lw          $t0, 0x5C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X5C);
    skip_0:
    // 0x1502F2B8: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1502F2BC: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x1502F2C0: lwc1        $f6, 0x18($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X18);
    // 0x1502F2C4: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
    // 0x1502F2C8: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1502F2CC: b           L_1502F2F8
    // 0x1502F2D0: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
        goto L_1502F2F8;
    // 0x1502F2D0: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x1502F2D4: lw          $t0, 0x5C($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X5C);
L_1502F2D8:
    // 0x1502F2D8: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x1502F2DC: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x1502F2E0: lwc1        $f10, 0x30($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X30);
    // 0x1502F2E4: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x1502F2E8: lwc1        $f16, 0x34($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X34);
    // 0x1502F2EC: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
    // 0x1502F2F0: lwc1        $f18, 0x38($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X38);
    // 0x1502F2F4: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
L_1502F2F8:
    // 0x1502F2F8: lbu         $v1, 0x101($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X101);
    // 0x1502F2FC: lwc1        $f4, 0x180($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X180);
    // 0x1502F300: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1502F304: andi        $t2, $v1, 0x20
    ctx->r10 = ctx->r3 & 0X20;
    // 0x1502F308: swc1        $f4, 0x180($v0)
    MEM_W(0X180, ctx->r2) = ctx->f4.u32l;
    // 0x1502F30C: bne         $t2, $zero, L_1502F348
    if (ctx->r10 != 0) {
        // 0x1502F310: swc1        $f6, 0x20($v0)
        MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
            goto L_1502F348;
    }
    // 0x1502F310: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
    // 0x1502F314: lhu         $t3, 0x76($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X76);
    // 0x1502F318: lbu         $v1, 0x101($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X101);
    // 0x1502F31C: sh          $t3, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r11;
    // 0x1502F320: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1502F324: swc1        $f8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f8.u32l;
    // 0x1502F328: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
    // 0x1502F32C: swc1        $f10, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f10.u32l;
    // 0x1502F330: lhu         $t4, 0x76($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X76);
    // 0x1502F334: sh          $t4, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r12;
    // 0x1502F338: lhu         $t5, 0x7A($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X7A);
    // 0x1502F33C: sh          $t5, 0x7A($v0)
    MEM_H(0X7A, ctx->r2) = ctx->r13;
    // 0x1502F340: lhu         $t6, 0x78($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X78);
    // 0x1502F344: sh          $t6, 0x78($v0)
    MEM_H(0X78, ctx->r2) = ctx->r14;
L_1502F348:
    // 0x1502F348: andi        $t7, $v1, 0x40
    ctx->r15 = ctx->r3 & 0X40;
    // 0x1502F34C: bne         $t7, $zero, L_1502F3C0
    if (ctx->r15 != 0) {
        // 0x1502F350: nop
    
            goto L_1502F3C0;
    }
    // 0x1502F350: nop

    // 0x1502F354: lbu         $t8, 0x7($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X7);
    // 0x1502F358: lui         $a3, 0x8008
    ctx->r7 = S32(0X8008 << 16);
    // 0x1502F35C: addiu       $a3, $a3, 0x2FA0
    ctx->r7 = ADD32(ctx->r7, 0X2FA0);
    // 0x1502F360: sb          $t8, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r24;
    // 0x1502F364: lbu         $t9, 0x8($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X8);
    // 0x1502F368: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1502F36C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1502F370: sb          $t9, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r25;
    // 0x1502F374: lbu         $t0, 0x9($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X9);
    // 0x1502F378: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x1502F37C: sb          $t0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r8;
    // 0x1502F380: lbu         $t1, 0xA($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XA);
    // 0x1502F384: sb          $t1, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r9;
    // 0x1502F388: lbu         $t2, 0xF($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XF);
    // 0x1502F38C: sb          $t2, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r10;
    // 0x1502F390: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x1502F394: bltz        $t3, L_1502F3C0
    if (SIGNED(ctx->r11) < 0) {
        // 0x1502F398: nop
    
            goto L_1502F3C0;
    }
    // 0x1502F398: nop

    // 0x1502F39C: lbu         $t4, 0xB($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0XB);
L_1502F3A0:
    // 0x1502F3A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1502F3A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x1502F3A8: sb          $t4, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r12;
    // 0x1502F3AC: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x1502F3B0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1502F3B4: slt         $at, $t5, $v1
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1502F3B8: beql        $at, $zero, L_1502F3A0
    if (ctx->r1 == 0) {
        // 0x1502F3BC: lbu         $t4, 0xB($a1)
        ctx->r12 = MEM_BU(ctx->r5, 0XB);
            goto L_1502F3A0;
    }
    goto skip_1;
    // 0x1502F3BC: lbu         $t4, 0xB($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0XB);
    skip_1:
L_1502F3C0:
    // 0x1502F3C0: jr          $ra
    // 0x1502F3C4: nop

    return;
    return;
    // 0x1502F3C4: nop

;}
RECOMP_FUNC void func_151348F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151348F0: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x151348F4: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
    // 0x151348F8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151348FC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15134900: jr          $ra
    // 0x15134904: nop

    return;
    return;
    // 0x15134904: nop

;}
RECOMP_FUNC void func_1515AA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515AA84: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x1515AA88: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x1515AA8C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1515AA90: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x1515AA94: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x1515AA98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1515AA9C: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x1515AAA0: addiu       $t1, $sp, 0x58
    ctx->r9 = ADD32(ctx->r29, 0X58);
    // 0x1515AAA4: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x1515AAA8: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x1515AAAC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1515AAB0: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x1515AAB4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x1515AAB8: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x1515AABC: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1515AAC0: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x1515AAC4: swc1        $f12, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f12.u32l;
    // 0x1515AAC8: addiu       $t5, $t2, 0x24
    ctx->r13 = ADD32(ctx->r10, 0X24);
L_1515AACC:
    // 0x1515AACC: lw          $at, 0x84($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X84);
    // 0x1515AAD0: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x1515AAD4: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x1515AAD8: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x1515AADC: lw          $at, 0x7C($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X7C);
    // 0x1515AAE0: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x1515AAE4: lw          $at, 0x80($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X80);
    // 0x1515AAE8: bne         $t2, $t5, L_1515AACC
    if (ctx->r10 != ctx->r13) {
        // 0x1515AAEC: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_1515AACC;
    }
    // 0x1515AAEC: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x1515AAF0: lw          $at, 0x84($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X84);
    // 0x1515AAF4: jal         0x150ADA20
    // 0x1515AAF8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1515AAF8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    after_0:
    // 0x1515AAFC: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x1515AB00: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1515AB04: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x1515AB08: addiu       $v1, $t0, 0x80
    ctx->r3 = ADD32(ctx->r8, 0X80);
    // 0x1515AB0C: lh          $t8, 0x2($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X2);
    // 0x1515AB10: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x1515AB14: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1515AB18: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x1515AB1C: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x1515AB20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1515AB24: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1515AB28: lbu         $t1, 0xC($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0XC);
    // 0x1515AB2C: mfhi        $t6
    ctx->r14 = hi;
    // 0x1515AB30: addu        $a0, $t6, $t9
    ctx->r4 = ADD32(ctx->r14, ctx->r25);
    // 0x1515AB34: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1515AB38: lbu         $t8, 0x1($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X1);
    // 0x1515AB3C: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x1515AB40: bne         $t7, $zero, L_1515AB4C
    if (ctx->r15 != 0) {
        // 0x1515AB44: nop
    
            goto L_1515AB4C;
    }
    // 0x1515AB44: nop

    // 0x1515AB48: break       7
    do_break(353741640);
L_1515AB4C:
    // 0x1515AB4C: sra         $a0, $t4, 16
    ctx->r4 = S32(SIGNED(ctx->r12) >> 16);
    // 0x1515AB50: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1515AB54: addiu       $a2, $zero, 0x3F
    ctx->r6 = ADD32(0, 0X3F);
    // 0x1515AB58: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1515AB5C: jal         0x15149130
    // 0x1515AB60: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_15149130(rdram, ctx);
        goto after_1;
    // 0x1515AB60: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_1:
    // 0x1515AB64: beq         $v0, $zero, L_1515AB78
    if (ctx->r2 == 0) {
        // 0x1515AB68: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1515AB78;
    }
    // 0x1515AB68: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1515AB6C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x1515AB70: jal         0x10022EC0
    // 0x1515AB74: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1515AB74: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_2:
L_1515AB78:
    // 0x1515AB78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1515AB7C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x1515AB80: jr          $ra
    // 0x1515AB84: nop

    return;
    return;
    // 0x1515AB84: nop

;}
RECOMP_FUNC void func_1502B224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502B224: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1502B228: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1502B22C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1502B230: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1502B234: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1502B238: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1502B23C: lui         $at, 0xFFF
    ctx->r1 = S32(0XFFF << 16);
    // 0x1502B240: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1502B244: and         $v0, $a2, $at
    ctx->r2 = ctx->r6 & ctx->r1;
    // 0x1502B248: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1502B24C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1502B250: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x1502B254: beq         $a3, $zero, L_1502B26C
    if (ctx->r7 == 0) {
        // 0x1502B258: or          $s1, $t6, $zero
        ctx->r17 = ctx->r14 | 0;
            goto L_1502B26C;
    }
    // 0x1502B258: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x1502B25C: sltu        $at, $a3, $t6
    ctx->r1 = ctx->r7 < ctx->r14 ? 1 : 0;
    // 0x1502B260: beql        $at, $zero, L_1502B270
    if (ctx->r1 == 0) {
        // 0x1502B264: lui         $at, 0x7000
        ctx->r1 = S32(0X7000 << 16);
            goto L_1502B270;
    }
    goto skip_0;
    // 0x1502B264: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
    skip_0:
    // 0x1502B268: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
L_1502B26C:
    // 0x1502B26C: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
L_1502B270:
    // 0x1502B270: and         $t7, $a2, $at
    ctx->r15 = ctx->r6 & ctx->r1;
    // 0x1502B274: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x1502B278: bne         $t7, $at, L_1502B31C
    if (ctx->r15 != ctx->r1) {
        // 0x1502B27C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_1502B31C;
    }
    // 0x1502B27C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1502B280: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502B284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1502B288: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1502B28C: jal         0x10003C40
    // 0x1502B290: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1502B290: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x1502B294: bne         $v0, $zero, L_1502B2A4
    if (ctx->r2 != 0) {
        // 0x1502B298: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1502B2A4;
    }
    // 0x1502B298: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1502B29C: b           L_1502B33C
    // 0x1502B2A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1502B33C;
    // 0x1502B2A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1502B2A4:
    // 0x1502B2A4: addiu       $a2, $s1, 0xF
    ctx->r6 = ADD32(ctx->r17, 0XF);
    // 0x1502B2A8: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x1502B2AC: and         $t8, $a2, $at
    ctx->r24 = ctx->r6 & ctx->r1;
    // 0x1502B2B0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x1502B2B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1502B2B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1502B2BC: jal         0x10004514
    // 0x1502B2C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_10004514(rdram, ctx);
        goto after_1;
    // 0x1502B2C0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x1502B2C4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1502B2C8: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x1502B2CC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1502B2D0: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x1502B2D4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x1502B2D8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x1502B2DC: lw          $a2, -0x7F64($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7F64);
    // 0x1502B2E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502B2E4: jal         0x10006240
    // 0x1502B2E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_10006240(rdram, ctx);
        goto after_2;
    // 0x1502B2E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_2:
    // 0x1502B2EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1502B2F0: lui         $t2, 0xC00
    ctx->r10 = S32(0XC00 << 16);
    // 0x1502B2F4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1502B2F8: beq         $v0, $t1, L_1502B30C
    if (ctx->r2 == ctx->r9) {
        // 0x1502B2FC: ori         $t2, $t2, 0x36
        ctx->r10 = ctx->r10 | 0X36;
            goto L_1502B30C;
    }
    // 0x1502B2FC: ori         $t2, $t2, 0x36
    ctx->r10 = ctx->r10 | 0X36;
    // 0x1502B300: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1502B304: jal         0x150AD770
    // 0x1502B308: sw          $t2, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r10;
    func_150AD770(rdram, ctx);
        goto after_3;
    // 0x1502B308: sw          $t2, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r10;
    after_3:
L_1502B30C:
    // 0x1502B30C: jal         0x10004074
    // 0x1502B310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x1502B310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x1502B314: b           L_1502B33C
    // 0x1502B318: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_1502B33C;
    // 0x1502B318: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1502B31C:
    // 0x1502B31C: addiu       $a2, $s1, 0xF
    ctx->r6 = ADD32(ctx->r17, 0XF);
    // 0x1502B320: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x1502B324: and         $t3, $a2, $at
    ctx->r11 = ctx->r6 & ctx->r1;
    // 0x1502B328: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x1502B32C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1502B330: jal         0x10004514
    // 0x1502B334: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_10004514(rdram, ctx);
        goto after_5;
    // 0x1502B334: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x1502B338: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1502B33C:
    // 0x1502B33C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1502B340: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x1502B344: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x1502B348: jr          $ra
    // 0x1502B34C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1502B34C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1518C0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518C0B8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1518C0BC: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x1518C0C0: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x1518C0C4: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    // 0x1518C0C8: lw          $t6, 0x48($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X48);
    // 0x1518C0CC: addiu       $a1, $v1, 0x48
    ctx->r5 = ADD32(ctx->r3, 0X48);
    // 0x1518C0D0: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x1518C0D4: beq         $t7, $zero, L_1518C10C
    if (ctx->r15 == 0) {
        // 0x1518C0D8: nop
    
            goto L_1518C10C;
    }
    // 0x1518C0D8: nop

    // 0x1518C0DC: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x1518C0E0: lw          $t0, 0x24($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X24);
    // 0x1518C0E4: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1518C0E8: beq         $t8, $zero, L_1518C10C
    if (ctx->r24 == 0) {
        // 0x1518C0EC: nop
    
            goto L_1518C10C;
    }
    // 0x1518C0EC: nop

    // 0x1518C0F0: lw          $t9, 0x1D4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X1D4);
    // 0x1518C0F4: beq         $t9, $zero, L_1518C10C
    if (ctx->r25 == 0) {
        // 0x1518C0F8: nop
    
            goto L_1518C10C;
    }
    // 0x1518C0F8: nop

    // 0x1518C0FC: lbu         $t5, 0x28($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X28);
    // 0x1518C100: lbu         $t6, 0x3B($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X3B);
    // 0x1518C104: beql        $t5, $t6, L_1518C118
    if (ctx->r13 == ctx->r14) {
        // 0x1518C108: lb          $t7, 0x4($a1)
        ctx->r15 = MEM_B(ctx->r5, 0X4);
            goto L_1518C118;
    }
    goto skip_0;
    // 0x1518C108: lb          $t7, 0x4($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X4);
    skip_0:
L_1518C10C:
    // 0x1518C10C: b           L_1518C538
    // 0x1518C110: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518C538;
    // 0x1518C110: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1518C114: lb          $t7, 0x4($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X4);
L_1518C118:
    // 0x1518C118: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x1518C11C: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x1518C120: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C124: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1518C128: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1518C12C: addiu       $t3, $t3, -0x165C
    ctx->r11 = ADD32(ctx->r11, -0X165C);
    // 0x1518C130: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x1518C134: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x1518C138: mflo        $t8
    ctx->r24 = lo;
    // 0x1518C13C: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x1518C140: lh          $t5, 0x1AC($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X1AC);
    // 0x1518C144: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1518C148: nop

    // 0x1518C14C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1518C150: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x1518C154: lb          $t8, 0x4($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X4);
    // 0x1518C158: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1518C15C: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C160: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x1518C164: mflo        $t9
    ctx->r25 = lo;
    // 0x1518C168: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x1518C16C: lh          $t6, 0x1AE($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X1AE);
    // 0x1518C170: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x1518C174: nop

    // 0x1518C178: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1518C17C: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x1518C180: lb          $t9, 0x4($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X4);
    // 0x1518C184: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1518C188: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C18C: lw          $t7, 0x24($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X24);
    // 0x1518C190: addiu       $a2, $v1, 0x50
    ctx->r6 = ADD32(ctx->r3, 0X50);
    // 0x1518C194: mflo        $t5
    ctx->r13 = lo;
    // 0x1518C198: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x1518C19C: lh          $t8, 0x1B0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X1B0);
    // 0x1518C1A0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1518C1A4: nop

    // 0x1518C1A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1518C1AC: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x1518C1B0: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x1518C1B4: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x1518C1B8: lb          $t7, 0x1B8($t0)
    ctx->r15 = MEM_B(ctx->r8, 0X1B8);
    // 0x1518C1BC: lb          $t5, 0x1BA($t0)
    ctx->r13 = MEM_B(ctx->r8, 0X1BA);
    // 0x1518C1C0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1518C1C4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1518C1C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1518C1CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1518C1D0: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1518C1D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1518C1D8: mul.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1518C1DC: nop

    // 0x1518C1E0: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1518C1E4: nop

    // 0x1518C1E8: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1518C1EC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1518C1F0: c.eq.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl == ctx->f18.fl;
    // 0x1518C1F4: nop

    // 0x1518C1F8: bc1t        L_1518C230
    if (c1cs) {
        // 0x1518C1FC: nop
    
            goto L_1518C230;
    }
    // 0x1518C1FC: nop

    // 0x1518C200: sqrt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = sqrtf(ctx->f18.fl);
    // 0x1518C204: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1518C208: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1518C20C: nop

    // 0x1518C210: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1518C214: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1518C218: mul.s       $f2, $f14, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1518C21C: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x1518C220: mul.s       $f12, $f16, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x1518C224: nop

    // 0x1518C228: b           L_1518C244
    // 0x1518C22C: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
        goto L_1518C244;
    // 0x1518C22C: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
L_1518C230:
    // 0x1518C230: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1518C234: nop

    // 0x1518C238: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1518C23C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1518C240: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
L_1518C244:
    // 0x1518C244: beql        $a3, $t0, L_1518C330
    if (ctx->r7 == ctx->r8) {
        // 0x1518C248: lbu         $t7, 0x25($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X25);
            goto L_1518C330;
    }
    goto skip_1;
    // 0x1518C248: lbu         $t7, 0x25($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X25);
    skip_1:
L_1518C24C:
    // 0x1518C24C: multu       $a3, $t2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C250: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1518C254: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x1518C258: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1518C25C: mflo        $t6
    ctx->r14 = lo;
    // 0x1518C260: addu        $t0, $v0, $t6
    ctx->r8 = ADD32(ctx->r2, ctx->r14);
    // 0x1518C264: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x1518C268: multu       $a3, $t4
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C26C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1518C270: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x1518C274: swc1        $f10, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f10.u32l;
    // 0x1518C278: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x1518C27C: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1518C280: mflo        $t8
    ctx->r24 = lo;
    // 0x1518C284: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1518C288: addu        $t1, $a2, $t8
    ctx->r9 = ADD32(ctx->r6, ctx->r24);
    // 0x1518C28C: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1518C290: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x1518C294: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1518C298: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x1518C29C: lwc1        $f10, 0xC($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XC);
    // 0x1518C2A0: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1518C2A4: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    // 0x1518C2A8: lwc1        $f8, 0x0($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X0);
    // 0x1518C2AC: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x1518C2B0: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x1518C2B4: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1518C2B8: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1518C2BC: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1518C2C0: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1518C2C4: swc1        $f4, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f4.u32l;
    // 0x1518C2C8: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1518C2CC: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x1518C2D0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1518C2D4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1518C2D8: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1518C2DC: swc1        $f10, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f10.u32l;
    // 0x1518C2E0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1518C2E4: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x1518C2E8: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1518C2EC: swc1        $f4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f4.u32l;
    // 0x1518C2F0: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x1518C2F4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1518C2F8: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1518C2FC: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1518C300: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1518C304: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1518C308: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1518C30C: swc1        $f8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f8.u32l;
    // 0x1518C310: lbu         $t9, 0x25($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X25);
    // 0x1518C314: bnel        $a3, $t9, L_1518C324
    if (ctx->r7 != ctx->r25) {
        // 0x1518C318: lb          $t0, 0x2E($a0)
        ctx->r8 = MEM_B(ctx->r4, 0X2E);
            goto L_1518C324;
    }
    goto skip_2;
    // 0x1518C318: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
    skip_2:
    // 0x1518C31C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1518C320: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
L_1518C324:
    // 0x1518C324: bne         $a3, $t0, L_1518C24C
    if (ctx->r7 != ctx->r8) {
        // 0x1518C328: nop
    
            goto L_1518C24C;
    }
    // 0x1518C328: nop

    // 0x1518C32C: lbu         $t7, 0x25($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X25);
L_1518C330:
    // 0x1518C330: lb          $a3, 0x2C($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2C);
    // 0x1518C334: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1518C338: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x1518C33C: slt         $at, $a3, $t5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x1518C340: addiu       $t3, $t3, -0x165C
    ctx->r11 = ADD32(ctx->r11, -0X165C);
    // 0x1518C344: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x1518C348: beq         $at, $zero, L_1518C490
    if (ctx->r1 == 0) {
        // 0x1518C34C: addiu       $t4, $zero, 0xC
        ctx->r12 = ADD32(0, 0XC);
            goto L_1518C490;
    }
    // 0x1518C34C: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x1518C350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1518C354: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x1518C358: beq         $a3, $zero, L_1518C398
    if (ctx->r7 == 0) {
        // 0x1518C35C: addiu       $a2, $v1, 0x50
        ctx->r6 = ADD32(ctx->r3, 0X50);
            goto L_1518C398;
    }
    // 0x1518C35C: addiu       $a2, $v1, 0x50
    ctx->r6 = ADD32(ctx->r3, 0X50);
    // 0x1518C360: addiu       $t6, $zero, 0x1000
    ctx->r14 = ADD32(0, 0X1000);
    // 0x1518C364: div         $zero, $t6, $a3
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r7)));
    // 0x1518C368: mflo        $t1
    ctx->r9 = lo;
    // 0x1518C36C: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x1518C370: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x1518C374: bne         $a3, $zero, L_1518C380
    if (ctx->r7 != 0) {
        // 0x1518C378: nop
    
            goto L_1518C380;
    }
    // 0x1518C378: nop

    // 0x1518C37C: break       7
    do_break(353944444);
L_1518C380:
    // 0x1518C380: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1518C384: bne         $a3, $at, L_1518C398
    if (ctx->r7 != ctx->r1) {
        // 0x1518C388: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1518C398;
    }
    // 0x1518C388: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1518C38C: bne         $t6, $at, L_1518C398
    if (ctx->r14 != ctx->r1) {
        // 0x1518C390: nop
    
            goto L_1518C398;
    }
    // 0x1518C390: nop

    // 0x1518C394: break       6
    do_break(353944468);
L_1518C398:
    // 0x1518C398: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C39C: addiu       $t5, $sp, 0x40
    ctx->r13 = ADD32(ctx->r29, 0X40);
    // 0x1518C3A0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x1518C3A4: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x1518C3A8: mflo        $t9
    ctx->r25 = lo;
    // 0x1518C3AC: addu        $t7, $v0, $t9
    ctx->r15 = ADD32(ctx->r2, ctx->r25);
    // 0x1518C3B0: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x1518C3B4: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x1518C3B8: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x1518C3BC: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x1518C3C0: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x1518C3C4: lb          $t9, 0x2E($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X2E);
    // 0x1518C3C8: multu       $t9, $t2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C3CC: mflo        $t6
    ctx->r14 = lo;
    // 0x1518C3D0: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x1518C3D4: swc1        $f0, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f0.u32l;
    // 0x1518C3D8: lb          $t5, 0x2E($a0)
    ctx->r13 = MEM_B(ctx->r4, 0X2E);
    // 0x1518C3DC: multu       $t5, $t4
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C3E0: mflo        $t8
    ctx->r24 = lo;
    // 0x1518C3E4: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x1518C3E8: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
    // 0x1518C3EC: lb          $t6, 0x2E($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2E);
    // 0x1518C3F0: multu       $t6, $t4
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C3F4: mflo        $t7
    ctx->r15 = lo;
    // 0x1518C3F8: addu        $t5, $a2, $t7
    ctx->r13 = ADD32(ctx->r6, ctx->r15);
    // 0x1518C3FC: swc1        $f0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f0.u32l;
    // 0x1518C400: lb          $t8, 0x2E($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X2E);
    // 0x1518C404: multu       $t8, $t4
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C408: mflo        $t9
    ctx->r25 = lo;
    // 0x1518C40C: addu        $t6, $a2, $t9
    ctx->r14 = ADD32(ctx->r6, ctx->r25);
    // 0x1518C410: swc1        $f0, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f0.u32l;
    // 0x1518C414: lb          $t8, 0x2E($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X2E);
    // 0x1518C418: lb          $t7, 0x2C($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2C);
    // 0x1518C41C: lbu         $t6, 0x25($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X25);
    // 0x1518C420: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x1518C424: sb          $t9, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r25;
    // 0x1518C428: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
    // 0x1518C42C: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x1518C430: sb          $t5, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r13;
    // 0x1518C434: bnel        $t6, $t0, L_1518C448
    if (ctx->r14 != ctx->r8) {
        // 0x1518C438: lb          $a3, 0x2D($a0)
        ctx->r7 = MEM_B(ctx->r4, 0X2D);
            goto L_1518C448;
    }
    goto skip_3;
    // 0x1518C438: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
    skip_3:
    // 0x1518C43C: sb          $zero, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = 0;
    // 0x1518C440: lb          $t0, 0x2E($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X2E);
    // 0x1518C444: lb          $a3, 0x2D($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X2D);
L_1518C448:
    // 0x1518C448: beql        $a3, $t0, L_1518C538
    if (ctx->r7 == ctx->r8) {
        // 0x1518C44C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1518C538;
    }
    goto skip_4;
    // 0x1518C44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_4:
L_1518C450:
    // 0x1518C450: multu       $a3, $t2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C454: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x1518C458: mflo        $t7
    ctx->r15 = lo;
    // 0x1518C45C: addu        $t5, $v0, $t7
    ctx->r13 = ADD32(ctx->r2, ctx->r15);
    // 0x1518C460: sh          $a1, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r5;
    // 0x1518C464: lbu         $t9, 0x25($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X25);
    // 0x1518C468: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x1518C46C: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x1518C470: bne         $a3, $t9, L_1518C47C
    if (ctx->r7 != ctx->r25) {
        // 0x1518C474: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_1518C47C;
    }
    // 0x1518C474: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x1518C478: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_1518C47C:
    // 0x1518C47C: lb          $t6, 0x2E($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X2E);
    // 0x1518C480: bne         $a3, $t6, L_1518C450
    if (ctx->r7 != ctx->r14) {
        // 0x1518C484: nop
    
            goto L_1518C450;
    }
    // 0x1518C484: nop

    // 0x1518C488: b           L_1518C538
    // 0x1518C48C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1518C538;
    // 0x1518C48C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1518C490:
    // 0x1518C490: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1518C494: lwc1        $f14, 0xC($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0XC);
    // 0x1518C498: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1518C49C: mul.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1518C4A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1518C4A4: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x1518C4A8: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1518C4AC: div.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1518C4B0: mul.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1518C4B4: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1518C4B8: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1518C4BC: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1518C4C0: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x1518C4C4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x1518C4C8: lb          $t5, 0x4($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X4);
    // 0x1518C4CC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x1518C4D0: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x1518C4D4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1518C4D8: lwc1        $f6, 0x34($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X34);
    // 0x1518C4DC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x1518C4E0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1518C4E4: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x1518C4E8: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1518C4EC: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1518C4F0: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x1518C4F4: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x1518C4F8: sub.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x1518C4FC: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x1518C500: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x1518C504: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x1518C508: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x1518C50C: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1518C510: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x1518C514: lbu         $t9, 0x18($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X18);
    // 0x1518C518: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1518C51C: andi        $t6, $t9, 0x17
    ctx->r14 = ctx->r25 & 0X17;
    // 0x1518C520: beq         $t6, $zero, L_1518C530
    if (ctx->r14 == 0) {
        // 0x1518C524: swc1        $f10, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
            goto L_1518C530;
    }
    // 0x1518C524: swc1        $f10, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f10.u32l;
    // 0x1518C528: b           L_1518C534
    // 0x1518C52C: sb          $t5, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r13;
        goto L_1518C534;
    // 0x1518C52C: sb          $t5, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r13;
L_1518C530:
    // 0x1518C530: sb          $t7, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r15;
L_1518C534:
    // 0x1518C534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1518C538:
    // 0x1518C538: jr          $ra
    // 0x1518C53C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x1518C53C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_150034B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150034B4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x150034B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x150034BC: sw          $t6, 0xE58($at)
    MEM_W(0XE58, ctx->r1) = ctx->r14;
    // 0x150034C0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150034C4: sb          $zero, -0x3BB8($at)
    MEM_B(-0X3BB8, ctx->r1) = 0;
    // 0x150034C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x150034CC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150034D0: sw          $t7, 0xE5C($at)
    MEM_W(0XE5C, ctx->r1) = ctx->r15;
    // 0x150034D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150034D8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x150034DC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150034E0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150034E4: addiu       $v0, $v0, -0x1D66
    ctx->r2 = ADD32(ctx->r2, -0X1D66);
    // 0x150034E8: addiu       $a0, $a0, -0x3BB6
    ctx->r4 = ADD32(ctx->r4, -0X3BB6);
    // 0x150034EC: addiu       $v1, $v1, 0xE60
    ctx->r3 = ADD32(ctx->r3, 0XE60);
    // 0x150034F0: sb          $zero, -0x3BB7($at)
    MEM_B(-0X3BB7, ctx->r1) = 0;
    // 0x150034F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_150034F8:
    // 0x150034F8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x150034FC: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x15003500: sb          $zero, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = 0;
    // 0x15003504: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x15003508: sb          $zero, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = 0;
    // 0x1500350C: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x15003510: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
    // 0x15003514: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x15003518: sw          $a1, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r5;
    // 0x1500351C: bne         $a0, $v0, L_150034F8
    if (ctx->r4 != ctx->r2) {
        // 0x15003520: sb          $zero, -0x4($a0)
        MEM_B(-0X4, ctx->r4) = 0;
            goto L_150034F8;
    }
    // 0x15003520: sb          $zero, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = 0;
    // 0x15003524: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x15003528: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500352C: sw          $t8, -0x60A8($at)
    MEM_W(-0X60A8, ctx->r1) = ctx->r24;
    // 0x15003530: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15003534: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x15003538: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500353C: sw          $a1, -0x60A4($at)
    MEM_W(-0X60A4, ctx->r1) = ctx->r5;
    // 0x15003540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15003544: beq         $v0, $at, L_15003560
    if (ctx->r2 == ctx->r1) {
        // 0x15003548: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_15003560;
    }
    // 0x15003548: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1500354C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x15003550: beq         $v0, $at, L_15003560
    if (ctx->r2 == ctx->r1) {
        // 0x15003554: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_15003560;
    }
    // 0x15003554: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15003558: jr          $ra
    // 0x1500355C: sb          $zero, -0x60A0($at)
    MEM_B(-0X60A0, ctx->r1) = 0;
    return;
    return;
    // 0x1500355C: sb          $zero, -0x60A0($at)
    MEM_B(-0X60A0, ctx->r1) = 0;
L_15003560:
    // 0x15003560: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15003564: sb          $t9, -0x60A0($at)
    MEM_B(-0X60A0, ctx->r1) = ctx->r25;
    // 0x15003568: jr          $ra
    // 0x1500356C: nop

    return;
    return;
    // 0x1500356C: nop

;}
RECOMP_FUNC void func_1506A724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506A724: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1506A728: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506A72C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1506A730: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506A734: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x1506A738: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1506A73C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1506A740: addiu       $a2, $a2, 0x1570
    ctx->r6 = ADD32(ctx->r6, 0X1570);
    // 0x1506A744: addiu       $a1, $a1, 0x1560
    ctx->r5 = ADD32(ctx->r5, 0X1560);
    // 0x1506A748: jal         0x151BB61C
    // 0x1506A74C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_151BB61C(rdram, ctx);
        goto after_0;
    // 0x1506A74C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x1506A750: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1506A754: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1506A758: jr          $ra
    // 0x1506A75C: nop

    return;
    return;
    // 0x1506A75C: nop

;}
RECOMP_FUNC void func_151DE8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DE8F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151DE8F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DE8F8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DE8FC: lbu         $a0, -0x25C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X25C);
    // 0x151DE900: slti        $at, $a0, 0x5
    ctx->r1 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
    // 0x151DE904: beq         $at, $zero, L_151DE97C
    if (ctx->r1 == 0) {
        // 0x151DE908: nop
    
            goto L_151DE97C;
    }
    // 0x151DE908: nop

    // 0x151DE90C: bnel        $a0, $zero, L_151DE944
    if (ctx->r4 != 0) {
        // 0x151DE910: slti        $at, $a0, 0x4
        ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
            goto L_151DE944;
    }
    goto skip_0;
    // 0x151DE910: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    skip_0:
    // 0x151DE914: jal         0x151EDF4C
    // 0x151DE918: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_151EDF4C(rdram, ctx);
        goto after_0;
    // 0x151DE918: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x151DE91C: jal         0x15007778
    // 0x151DE920: nop

    func_15007778(rdram, ctx);
        goto after_1;
    // 0x151DE920: nop

    after_1:
    // 0x151DE924: jal         0x151E7DC0
    // 0x151DE928: nop

    func_151E7DC0(rdram, ctx);
        goto after_2;
    // 0x151DE928: nop

    after_2:
    // 0x151DE92C: jal         0x151E81EC
    // 0x151DE930: nop

    func_151E81EC(rdram, ctx);
        goto after_3;
    // 0x151DE930: nop

    after_3:
    // 0x151DE934: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x151DE938: lbu         $a0, -0x25C($t1)
    ctx->r4 = MEM_BU(ctx->r9, -0X25C);
    // 0x151DE93C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151DE940: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
L_151DE944:
    // 0x151DE944: beq         $at, $zero, L_151DE95C
    if (ctx->r1 == 0) {
        // 0x151DE948: nop
    
            goto L_151DE95C;
    }
    // 0x151DE948: nop

    // 0x151DE94C: jal         0x150076BC
    // 0x151DE950: nop

    func_150076BC(rdram, ctx);
        goto after_4;
    // 0x151DE950: nop

    after_4:
    // 0x151DE954: b           L_151DE964
    // 0x151DE958: nop

        goto L_151DE964;
    // 0x151DE958: nop

L_151DE95C:
    // 0x151DE95C: jal         0x15007684
    // 0x151DE960: nop

    func_15007684(rdram, ctx);
        goto after_5;
    // 0x151DE960: nop

    after_5:
L_151DE964:
    // 0x151DE964: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151DE968: lbu         $t6, -0x25C($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X25C);
    // 0x151DE96C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE970: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151DE974: b           L_151DE994
    // 0x151DE978: sb          $t7, -0x25C($at)
    MEM_B(-0X25C, ctx->r1) = ctx->r15;
        goto L_151DE994;
    // 0x151DE978: sb          $t7, -0x25C($at)
    MEM_B(-0X25C, ctx->r1) = ctx->r15;
L_151DE97C:
    // 0x151DE97C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151DE980: lb          $t8, -0x1D0($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1D0);
    // 0x151DE984: bne         $t8, $zero, L_151DE994
    if (ctx->r24 != 0) {
        // 0x151DE988: nop
    
            goto L_151DE994;
    }
    // 0x151DE988: nop

    // 0x151DE98C: jal         0x1500764C
    // 0x151DE990: nop

    func_1500764C(rdram, ctx);
        goto after_6;
    // 0x151DE990: nop

    after_6:
L_151DE994:
    // 0x151DE994: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151DE998: lbu         $t9, -0x280($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X280);
    // 0x151DE99C: beq         $t9, $zero, L_151DE9D8
    if (ctx->r25 == 0) {
        // 0x151DE9A0: lui         $t7, 0x800E
        ctx->r15 = S32(0X800E << 16);
            goto L_151DE9D8;
    }
    // 0x151DE9A0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151DE9A4: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x151DE9A8: lui         $t6, 0x8
    ctx->r14 = S32(0X8 << 16);
    // 0x151DE9AC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x151DE9B0: sw          $t6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r14;
    // 0x151DE9B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151DE9B8: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    // 0x151DE9BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151DE9C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DE9C4: jal         0x1501D348
    // 0x151DE9C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501D348(rdram, ctx);
        goto after_7;
    // 0x151DE9C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x151DE9CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE9D0: b           L_151DF1AC
    // 0x151DE9D4: sb          $zero, -0x280($at)
    MEM_B(-0X280, ctx->r1) = 0;
        goto L_151DF1AC;
    // 0x151DE9D4: sb          $zero, -0x280($at)
    MEM_B(-0X280, ctx->r1) = 0;
L_151DE9D8:
    // 0x151DE9D8: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151DE9DC: addiu       $t2, $t2, -0x290
    ctx->r10 = ADD32(ctx->r10, -0X290);
    // 0x151DE9E0: lb          $a1, 0x0($t2)
    ctx->r5 = MEM_B(ctx->r10, 0X0);
    // 0x151DE9E4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x151DE9E8: lbu         $t1, -0x25C($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X25C);
    // 0x151DE9EC: beq         $a1, $zero, L_151DEA5C
    if (ctx->r5 == 0) {
        // 0x151DE9F0: addiu       $t8, $zero, 0x10
        ctx->r24 = ADD32(0, 0X10);
            goto L_151DEA5C;
    }
    // 0x151DE9F0: addiu       $t8, $zero, 0x10
    ctx->r24 = ADD32(0, 0X10);
    // 0x151DE9F4: subu        $t0, $t8, $a1
    ctx->r8 = SUB32(ctx->r24, ctx->r5);
    // 0x151DE9F8: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151DE9FC: beq         $at, $zero, L_151DEA58
    if (ctx->r1 == 0) {
        // 0x151DEA00: addu        $v1, $a1, $a1
        ctx->r3 = ADD32(ctx->r5, ctx->r5);
            goto L_151DEA58;
    }
    // 0x151DEA00: addu        $v1, $a1, $a1
    ctx->r3 = ADD32(ctx->r5, ctx->r5);
    // 0x151DEA04: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151DEA08: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151DEA0C: addiu       $t6, $t6, 0xC00
    ctx->r14 = ADD32(ctx->r14, 0XC00);
    // 0x151DEA10: addiu       $t9, $t9, -0x1BC
    ctx->r25 = ADD32(ctx->r25, -0X1BC);
    // 0x151DEA14: addu        $a0, $a1, $t9
    ctx->r4 = ADD32(ctx->r5, ctx->r25);
    // 0x151DEA18: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x151DEA1C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151DEA20: addiu       $a1, $a1, 0xC00
    ctx->r5 = ADD32(ctx->r5, 0XC00);
    // 0x151DEA24: addu        $a3, $t0, $t6
    ctx->r7 = ADD32(ctx->r8, ctx->r14);
L_151DEA28:
    // 0x151DEA28: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151DEA2C: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x151DEA30: addu        $t8, $a1, $v1
    ctx->r24 = ADD32(ctx->r5, ctx->r3);
    // 0x151DEA34: lb          $t7, -0x1BC($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1BC);
    // 0x151DEA38: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x151DEA3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151DEA40: sltu        $at, $v0, $a3
    ctx->r1 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x151DEA44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x151DEA48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x151DEA4C: sb          $t7, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r15;
    // 0x151DEA50: bne         $at, $zero, L_151DEA28
    if (ctx->r1 != 0) {
        // 0x151DEA54: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_151DEA28;
    }
    // 0x151DEA54: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_151DEA58:
    // 0x151DEA58: sb          $zero, 0x0($t2)
    MEM_B(0X0, ctx->r10) = 0;
L_151DEA5C:
    // 0x151DEA5C: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x151DEA60: bne         $at, $zero, L_151DEA70
    if (ctx->r1 != 0) {
        // 0x151DEA64: nop
    
            goto L_151DEA70;
    }
    // 0x151DEA64: nop

    // 0x151DEA68: jal         0x151E530C
    // 0x151DEA6C: nop

    func_151E530C(rdram, ctx);
        goto after_8;
    // 0x151DEA6C: nop

    after_8:
L_151DEA70:
    // 0x151DEA70: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DEA74: lui         $ra, 0x800E
    ctx->r31 = S32(0X800E << 16);
    // 0x151DEA78: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151DEA7C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DEA80: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151DEA84: addiu       $t2, $t2, -0x22C
    ctx->r10 = ADD32(ctx->r10, -0X22C);
    // 0x151DEA88: addiu       $t3, $t3, -0x224
    ctx->r11 = ADD32(ctx->r11, -0X224);
    // 0x151DEA8C: addiu       $t5, $t5, -0x161C
    ctx->r13 = ADD32(ctx->r13, -0X161C);
    // 0x151DEA90: addiu       $ra, $ra, 0xB96
    ctx->r31 = ADD32(ctx->r31, 0XB96);
    // 0x151DEA94: lw          $a0, -0x22C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X22C);
    // 0x151DEA98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DEA9C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151DEAA0: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
L_151DEAA4:
    // 0x151DEAA4: addu        $t6, $a0, $a3
    ctx->r14 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEAA8: sh          $zero, 0x22($t6)
    MEM_H(0X22, ctx->r14) = 0;
    // 0x151DEAAC: lbu         $t7, 0x0($ra)
    ctx->r15 = MEM_BU(ctx->r31, 0X0);
    // 0x151DEAB0: bnel        $t7, $zero, L_151DEC84
    if (ctx->r15 != 0) {
        // 0x151DEAB4: lw          $t8, 0x0($t2)
        ctx->r24 = MEM_W(ctx->r10, 0X0);
            goto L_151DEC84;
    }
    goto skip_1;
    // 0x151DEAB4: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    skip_1:
    // 0x151DEAB8: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DEABC: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x151DEAC0: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x151DEAC4: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x151DEAC8: lb          $a1, 0x32($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X32);
    // 0x151DEACC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151DEAD0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151DEAD4: addiu       $t6, $t6, -0x16D0
    ctx->r14 = ADD32(ctx->r14, -0X16D0);
    // 0x151DEAD8: addiu       $t9, $t9, -0x16E8
    ctx->r25 = ADD32(ctx->r25, -0X16E8);
    // 0x151DEADC: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x151DEAE0: slti        $at, $a1, -0x31
    ctx->r1 = SIGNED(ctx->r5) < -0X31 ? 1 : 0;
    // 0x151DEAE4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x151DEAE8: bne         $at, $zero, L_151DEB1C
    if (ctx->r1 != 0) {
        // 0x151DEAEC: addu        $t1, $a3, $t6
        ctx->r9 = ADD32(ctx->r7, ctx->r14);
            goto L_151DEB1C;
    }
    // 0x151DEAEC: addu        $t1, $a3, $t6
    ctx->r9 = ADD32(ctx->r7, ctx->r14);
    // 0x151DEAF0: lb          $t7, 0x3($t0)
    ctx->r15 = MEM_B(ctx->r8, 0X3);
    // 0x151DEAF4: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEAF8: slti        $at, $t7, -0x31
    ctx->r1 = SIGNED(ctx->r15) < -0X31 ? 1 : 0;
    // 0x151DEAFC: beql        $at, $zero, L_151DEB20
    if (ctx->r1 == 0) {
        // 0x151DEB00: slti        $at, $a1, 0x32
        ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
            goto L_151DEB20;
    }
    goto skip_2;
    // 0x151DEB00: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
    skip_2:
    // 0x151DEB04: lhu         $t8, 0x22($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEB08: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x151DEB0C: sh          $t9, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r25;
    // 0x151DEB10: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DEB14: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x151DEB18: lb          $a1, 0x32($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X32);
L_151DEB1C:
    // 0x151DEB1C: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
L_151DEB20:
    // 0x151DEB20: beql        $at, $zero, L_151DEB54
    if (ctx->r1 == 0) {
        // 0x151DEB24: lb          $a1, 0x2E($v1)
        ctx->r5 = MEM_B(ctx->r3, 0X2E);
            goto L_151DEB54;
    }
    goto skip_3;
    // 0x151DEB24: lb          $a1, 0x2E($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X2E);
    skip_3:
    // 0x151DEB28: lb          $t6, 0x3($t0)
    ctx->r14 = MEM_B(ctx->r8, 0X3);
    // 0x151DEB2C: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEB30: slti        $at, $t6, 0x32
    ctx->r1 = SIGNED(ctx->r14) < 0X32 ? 1 : 0;
    // 0x151DEB34: bnel        $at, $zero, L_151DEB54
    if (ctx->r1 != 0) {
        // 0x151DEB38: lb          $a1, 0x2E($v1)
        ctx->r5 = MEM_B(ctx->r3, 0X2E);
            goto L_151DEB54;
    }
    goto skip_4;
    // 0x151DEB38: lb          $a1, 0x2E($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X2E);
    skip_4:
    // 0x151DEB3C: lhu         $t7, 0x22($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEB40: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x151DEB44: sh          $t8, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r24;
    // 0x151DEB48: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DEB4C: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x151DEB50: lb          $a1, 0x2E($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X2E);
L_151DEB54:
    // 0x151DEB54: slti        $at, $a1, -0x31
    ctx->r1 = SIGNED(ctx->r5) < -0X31 ? 1 : 0;
    // 0x151DEB58: bnel        $at, $zero, L_151DEB90
    if (ctx->r1 != 0) {
        // 0x151DEB5C: slti        $at, $a1, 0x32
        ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
            goto L_151DEB90;
    }
    goto skip_5;
    // 0x151DEB5C: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
    skip_5:
    // 0x151DEB60: lb          $t9, 0x2($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X2);
    // 0x151DEB64: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEB68: slti        $at, $t9, -0x31
    ctx->r1 = SIGNED(ctx->r25) < -0X31 ? 1 : 0;
    // 0x151DEB6C: beql        $at, $zero, L_151DEB90
    if (ctx->r1 == 0) {
        // 0x151DEB70: slti        $at, $a1, 0x32
        ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
            goto L_151DEB90;
    }
    goto skip_6;
    // 0x151DEB70: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
    skip_6:
    // 0x151DEB74: lhu         $t6, 0x22($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEB78: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x151DEB7C: sh          $t7, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r15;
    // 0x151DEB80: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DEB84: addu        $t8, $a0, $a2
    ctx->r24 = ADD32(ctx->r4, ctx->r6);
    // 0x151DEB88: lb          $a1, 0x2E($t8)
    ctx->r5 = MEM_B(ctx->r24, 0X2E);
    // 0x151DEB8C: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
L_151DEB90:
    // 0x151DEB90: beql        $at, $zero, L_151DEBC0
    if (ctx->r1 == 0) {
        // 0x151DEB94: lhu         $v1, 0x0($t1)
        ctx->r3 = MEM_HU(ctx->r9, 0X0);
            goto L_151DEBC0;
    }
    goto skip_7;
    // 0x151DEB94: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    skip_7:
    // 0x151DEB98: lb          $t9, 0x2($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X2);
    // 0x151DEB9C: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEBA0: slti        $at, $t9, 0x32
    ctx->r1 = SIGNED(ctx->r25) < 0X32 ? 1 : 0;
    // 0x151DEBA4: bnel        $at, $zero, L_151DEBC0
    if (ctx->r1 != 0) {
        // 0x151DEBA8: lhu         $v1, 0x0($t1)
        ctx->r3 = MEM_HU(ctx->r9, 0X0);
            goto L_151DEBC0;
    }
    goto skip_8;
    // 0x151DEBA8: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    skip_8:
    // 0x151DEBAC: lhu         $t6, 0x22($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEBB0: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x151DEBB4: sh          $t7, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r15;
    // 0x151DEBB8: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DEBBC: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
L_151DEBC0:
    // 0x151DEBC0: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEBC4: andi        $t8, $v1, 0x1000
    ctx->r24 = ctx->r3 & 0X1000;
    // 0x151DEBC8: beql        $t8, $zero, L_151DEBE8
    if (ctx->r24 == 0) {
        // 0x151DEBCC: andi        $t7, $v1, 0x8000
        ctx->r15 = ctx->r3 & 0X8000;
            goto L_151DEBE8;
    }
    goto skip_9;
    // 0x151DEBCC: andi        $t7, $v1, 0x8000
    ctx->r15 = ctx->r3 & 0X8000;
    skip_9:
    // 0x151DEBD0: lhu         $t9, 0x22($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEBD4: ori         $t6, $t9, 0x10
    ctx->r14 = ctx->r25 | 0X10;
    // 0x151DEBD8: sh          $t6, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r14;
    // 0x151DEBDC: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x151DEBE0: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DEBE4: andi        $t7, $v1, 0x8000
    ctx->r15 = ctx->r3 & 0X8000;
L_151DEBE8:
    // 0x151DEBE8: beq         $t7, $zero, L_151DEC04
    if (ctx->r15 == 0) {
        // 0x151DEBEC: addu        $v0, $a0, $a3
        ctx->r2 = ADD32(ctx->r4, ctx->r7);
            goto L_151DEC04;
    }
    // 0x151DEBEC: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEBF0: lhu         $t8, 0x22($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEBF4: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x151DEBF8: sh          $t9, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r25;
    // 0x151DEBFC: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x151DEC00: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_151DEC04:
    // 0x151DEC04: andi        $t6, $v1, 0x4000
    ctx->r14 = ctx->r3 & 0X4000;
    // 0x151DEC08: beq         $t6, $zero, L_151DEC24
    if (ctx->r14 == 0) {
        // 0x151DEC0C: addu        $v0, $a0, $a3
        ctx->r2 = ADD32(ctx->r4, ctx->r7);
            goto L_151DEC24;
    }
    // 0x151DEC0C: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEC10: lhu         $t7, 0x22($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEC14: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x151DEC18: sh          $t8, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r24;
    // 0x151DEC1C: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x151DEC20: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_151DEC24:
    // 0x151DEC24: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    // 0x151DEC28: beq         $t9, $zero, L_151DEC44
    if (ctx->r25 == 0) {
        // 0x151DEC2C: addu        $v0, $a0, $a3
        ctx->r2 = ADD32(ctx->r4, ctx->r7);
            goto L_151DEC44;
    }
    // 0x151DEC2C: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEC30: lhu         $t6, 0x22($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEC34: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x151DEC38: sh          $t7, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r15;
    // 0x151DEC3C: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x151DEC40: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_151DEC44:
    // 0x151DEC44: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x151DEC48: beq         $t8, $zero, L_151DEC60
    if (ctx->r24 == 0) {
        // 0x151DEC4C: addu        $v0, $a0, $a3
        ctx->r2 = ADD32(ctx->r4, ctx->r7);
            goto L_151DEC60;
    }
    // 0x151DEC4C: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x151DEC50: lhu         $t9, 0x22($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X22);
    // 0x151DEC54: ori         $t6, $t9, 0x80
    ctx->r14 = ctx->r25 | 0X80;
    // 0x151DEC58: sh          $t6, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r14;
    // 0x151DEC5C: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_151DEC60:
    // 0x151DEC60: lb          $t7, 0x3($t0)
    ctx->r15 = MEM_B(ctx->r8, 0X3);
    // 0x151DEC64: addu        $t8, $a0, $a2
    ctx->r24 = ADD32(ctx->r4, ctx->r6);
    // 0x151DEC68: sb          $t7, 0x32($t8)
    MEM_B(0X32, ctx->r24) = ctx->r15;
    // 0x151DEC6C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x151DEC70: lb          $t9, 0x2($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X2);
    // 0x151DEC74: addu        $t7, $t6, $a2
    ctx->r15 = ADD32(ctx->r14, ctx->r6);
    // 0x151DEC78: b           L_151DEC98
    // 0x151DEC7C: sb          $t9, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = ctx->r25;
        goto L_151DEC98;
    // 0x151DEC7C: sb          $t9, 0x2E($t7)
    MEM_B(0X2E, ctx->r15) = ctx->r25;
    // 0x151DEC80: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
L_151DEC84:
    // 0x151DEC84: addu        $t6, $t8, $a2
    ctx->r14 = ADD32(ctx->r24, ctx->r6);
    // 0x151DEC88: sb          $zero, 0x2E($t6)
    MEM_B(0X2E, ctx->r14) = 0;
    // 0x151DEC8C: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x151DEC90: addu        $t7, $t9, $a2
    ctx->r15 = ADD32(ctx->r25, ctx->r6);
    // 0x151DEC94: sb          $zero, 0x32($t7)
    MEM_B(0X32, ctx->r15) = 0;
L_151DEC98:
    // 0x151DEC98: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x151DEC9C: addu        $v1, $t8, $a2
    ctx->r3 = ADD32(ctx->r24, ctx->r6);
    // 0x151DECA0: lb          $a1, 0x2E($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X2E);
    // 0x151DECA4: slti        $at, $a1, -0x31
    ctx->r1 = SIGNED(ctx->r5) < -0X31 ? 1 : 0;
    // 0x151DECA8: bne         $at, $zero, L_151DECE0
    if (ctx->r1 != 0) {
        // 0x151DECAC: slti        $at, $a1, 0x32
        ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
            goto L_151DECE0;
    }
    // 0x151DECAC: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
    // 0x151DECB0: beq         $at, $zero, L_151DECE0
    if (ctx->r1 == 0) {
        // 0x151DECB4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_151DECE0;
    }
    // 0x151DECB4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151DECB8: sb          $zero, 0x36($v1)
    MEM_B(0X36, ctx->r3) = 0;
    // 0x151DECBC: lb          $t6, 0x0($t3)
    ctx->r14 = MEM_B(ctx->r11, 0X0);
    // 0x151DECC0: sllv        $t7, $t9, $a2
    ctx->r15 = S32(ctx->r25 << (ctx->r6 & 31));
    // 0x151DECC4: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x151DECC8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DECCC: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x151DECD0: sb          $t9, -0x224($at)
    MEM_B(-0X224, ctx->r1) = ctx->r25;
    // 0x151DECD4: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x151DECD8: b           L_151DED38
    // 0x151DECDC: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
        goto L_151DED38;
    // 0x151DECDC: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
L_151DECE0:
    // 0x151DECE0: lb          $t6, 0x0($t3)
    ctx->r14 = MEM_B(ctx->r11, 0X0);
    // 0x151DECE4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151DECE8: sllv        $t9, $t8, $a2
    ctx->r25 = S32(ctx->r24 << (ctx->r6 & 31));
    // 0x151DECEC: and         $t7, $t6, $t9
    ctx->r15 = ctx->r14 & ctx->r25;
    // 0x151DECF0: bnel        $t7, $zero, L_151DED3C
    if (ctx->r15 != 0) {
        // 0x151DECF4: lb          $a1, 0x32($v1)
        ctx->r5 = MEM_B(ctx->r3, 0X32);
            goto L_151DED3C;
    }
    goto skip_10;
    // 0x151DECF4: lb          $a1, 0x32($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X32);
    skip_10:
    // 0x151DECF8: lb          $t8, 0x36($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X36);
    // 0x151DECFC: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x151DED00: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x151DED04: sb          $t9, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r25;
    // 0x151DED08: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x151DED0C: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
    // 0x151DED10: lb          $t8, 0x36($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X36);
    // 0x151DED14: slti        $at, $t8, 0x33
    ctx->r1 = SIGNED(ctx->r24) < 0X33 ? 1 : 0;
    // 0x151DED18: bnel        $at, $zero, L_151DED3C
    if (ctx->r1 != 0) {
        // 0x151DED1C: lb          $a1, 0x32($v1)
        ctx->r5 = MEM_B(ctx->r3, 0X32);
            goto L_151DED3C;
    }
    goto skip_11;
    // 0x151DED1C: lb          $a1, 0x32($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X32);
    skip_11:
    // 0x151DED20: sb          $t4, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r12;
    // 0x151DED24: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x151DED28: addu        $t9, $t6, $a2
    ctx->r25 = ADD32(ctx->r14, ctx->r6);
    // 0x151DED2C: sb          $zero, 0x2E($t9)
    MEM_B(0X2E, ctx->r25) = 0;
    // 0x151DED30: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x151DED34: addu        $v1, $t7, $a2
    ctx->r3 = ADD32(ctx->r15, ctx->r6);
L_151DED38:
    // 0x151DED38: lb          $a1, 0x32($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X32);
L_151DED3C:
    // 0x151DED3C: slti        $at, $a1, -0x31
    ctx->r1 = SIGNED(ctx->r5) < -0X31 ? 1 : 0;
    // 0x151DED40: bne         $at, $zero, L_151DED5C
    if (ctx->r1 != 0) {
        // 0x151DED44: slti        $at, $a1, 0x32
        ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
            goto L_151DED5C;
    }
    // 0x151DED44: slti        $at, $a1, 0x32
    ctx->r1 = SIGNED(ctx->r5) < 0X32 ? 1 : 0;
    // 0x151DED48: beql        $at, $zero, L_151DED60
    if (ctx->r1 == 0) {
        // 0x151DED4C: lb          $t8, 0x3A($v1)
        ctx->r24 = MEM_B(ctx->r3, 0X3A);
            goto L_151DED60;
    }
    goto skip_12;
    // 0x151DED4C: lb          $t8, 0x3A($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X3A);
    skip_12:
    // 0x151DED50: sb          $zero, 0x3A($v1)
    MEM_B(0X3A, ctx->r3) = 0;
    // 0x151DED54: b           L_151DED98
    // 0x151DED58: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
        goto L_151DED98;
    // 0x151DED58: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_151DED5C:
    // 0x151DED5C: lb          $t8, 0x3A($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X3A);
L_151DED60:
    // 0x151DED60: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x151DED64: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x151DED68: sb          $t9, 0x3A($v1)
    MEM_B(0X3A, ctx->r3) = ctx->r25;
    // 0x151DED6C: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DED70: addu        $v1, $a0, $a2
    ctx->r3 = ADD32(ctx->r4, ctx->r6);
    // 0x151DED74: lb          $t7, 0x3A($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X3A);
    // 0x151DED78: slti        $at, $t7, 0x33
    ctx->r1 = SIGNED(ctx->r15) < 0X33 ? 1 : 0;
    // 0x151DED7C: bnel        $at, $zero, L_151DED9C
    if (ctx->r1 != 0) {
        // 0x151DED80: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_151DED9C;
    }
    goto skip_13;
    // 0x151DED80: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_13:
    // 0x151DED84: sb          $t4, 0x3A($v1)
    MEM_B(0X3A, ctx->r3) = ctx->r12;
    // 0x151DED88: lw          $t8, 0x0($t2)
    ctx->r24 = MEM_W(ctx->r10, 0X0);
    // 0x151DED8C: addu        $t6, $t8, $a2
    ctx->r14 = ADD32(ctx->r24, ctx->r6);
    // 0x151DED90: sb          $zero, 0x32($t6)
    MEM_B(0X32, ctx->r14) = 0;
    // 0x151DED94: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
L_151DED98:
    // 0x151DED98: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_151DED9C:
    // 0x151DED9C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151DEDA0: bne         $a2, $at, L_151DEAA4
    if (ctx->r6 != ctx->r1) {
        // 0x151DEDA4: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_151DEAA4;
    }
    // 0x151DEDA4: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x151DEDA8: lhu         $t9, 0x22($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X22);
    // 0x151DEDAC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151DEDB0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151DEDB4: sh          $t9, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r25;
    // 0x151DEDB8: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x151DEDBC: bne         $t0, $t7, L_151DEDF4
    if (ctx->r8 != ctx->r15) {
        // 0x151DEDC0: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_151DEDF4;
    }
    // 0x151DEDC0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151DEDC4: lw          $t8, 0xA90($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XA90);
    // 0x151DEDC8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DEDCC: sw          $zero, -0x1DC($at)
    MEM_W(-0X1DC, ctx->r1) = 0;
    // 0x151DEDD0: slti        $at, $t8, 0x546
    ctx->r1 = SIGNED(ctx->r24) < 0X546 ? 1 : 0;
    // 0x151DEDD4: beq         $at, $zero, L_151DF1AC
    if (ctx->r1 == 0) {
        // 0x151DEDD8: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_151DF1AC;
    }
    // 0x151DEDD8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151DEDDC: lhu         $t6, -0x16D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X16D0);
    // 0x151DEDE0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DEDE4: beql        $t6, $zero, L_151DF1B0
    if (ctx->r14 == 0) {
        // 0x151DEDE8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151DF1B0;
    }
    goto skip_14;
    // 0x151DEDE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_14:
    // 0x151DEDEC: b           L_151DF1AC
    // 0x151DEDF0: sb          $t0, -0x27C($at)
    MEM_B(-0X27C, ctx->r1) = ctx->r8;
        goto L_151DF1AC;
    // 0x151DEDF0: sb          $t0, -0x27C($at)
    MEM_B(-0X27C, ctx->r1) = ctx->r8;
L_151DEDF4:
    // 0x151DEDF4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DEDF8: lh          $a0, -0x104($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X104);
    // 0x151DEDFC: blez        $a0, L_151DEEF8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x151DEE00: nop
    
            goto L_151DEEF8;
    }
    // 0x151DEE00: nop

    // 0x151DEE04: lw          $t9, 0x0($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X0);
    // 0x151DEE08: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DEE0C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x151DEE10: subu        $a0, $a0, $t9
    ctx->r4 = SUB32(ctx->r4, ctx->r25);
    // 0x151DEE14: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x151DEE18: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151DEE1C: sh          $a0, -0x104($at)
    MEM_H(-0X104, ctx->r1) = ctx->r4;
    // 0x151DEE20: slti        $at, $a0, 0x3D
    ctx->r1 = SIGNED(ctx->r4) < 0X3D ? 1 : 0;
    // 0x151DEE24: bne         $at, $zero, L_151DEEF8
    if (ctx->r1 != 0) {
        // 0x151DEE28: addiu       $a2, $zero, 0x32
        ctx->r6 = ADD32(0, 0X32);
            goto L_151DEEF8;
    }
    // 0x151DEE28: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x151DEE2C: slti        $at, $a0, 0xB5
    ctx->r1 = SIGNED(ctx->r4) < 0XB5 ? 1 : 0;
    // 0x151DEE30: bne         $at, $zero, L_151DEE5C
    if (ctx->r1 != 0) {
        // 0x151DEE34: addiu       $v0, $a0, -0x3C
        ctx->r2 = ADD32(ctx->r4, -0X3C);
            goto L_151DEE5C;
    }
    // 0x151DEE34: addiu       $v0, $a0, -0x3C
    ctx->r2 = ADD32(ctx->r4, -0X3C);
    // 0x151DEE38: addiu       $t6, $a0, -0xB4
    ctx->r14 = ADD32(ctx->r4, -0XB4);
    // 0x151DEE3C: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x151DEE40: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151DEE44: subu        $v1, $t7, $t9
    ctx->r3 = SUB32(ctx->r15, ctx->r25);
    // 0x151DEE48: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DEE4C: bgez        $v1, L_151DEEBC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151DEE50: sh          $a0, -0x104($at)
        MEM_H(-0X104, ctx->r1) = ctx->r4;
            goto L_151DEEBC;
    }
    // 0x151DEE50: sh          $a0, -0x104($at)
    MEM_H(-0X104, ctx->r1) = ctx->r4;
    // 0x151DEE54: b           L_151DEEBC
    // 0x151DEE58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151DEEBC;
    // 0x151DEE58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151DEE5C:
    // 0x151DEE5C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x151DEE60: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x151DEE64: bne         $at, $zero, L_151DEE70
    if (ctx->r1 != 0) {
        // 0x151DEE68: nop
    
            goto L_151DEE70;
    }
    // 0x151DEE68: nop

    // 0x151DEE6C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151DEE70:
    // 0x151DEE70: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DEE74: sh          $a0, -0x104($at)
    MEM_H(-0X104, ctx->r1) = ctx->r4;
    // 0x151DEE78: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151DEE7C: bne         $v1, $at, L_151DEE9C
    if (ctx->r3 != ctx->r1) {
        // 0x151DEE80: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_151DEE9C;
    }
    // 0x151DEE80: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DEE84: sh          $a0, -0x104($at)
    MEM_H(-0X104, ctx->r1) = ctx->r4;
    // 0x151DEE88: slti        $at, $a0, 0x79
    ctx->r1 = SIGNED(ctx->r4) < 0X79 ? 1 : 0;
    // 0x151DEE8C: bne         $at, $zero, L_151DEE9C
    if (ctx->r1 != 0) {
        // 0x151DEE90: addiu       $a0, $zero, 0x8C
        ctx->r4 = ADD32(0, 0X8C);
            goto L_151DEE9C;
    }
    // 0x151DEE90: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x151DEE94: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DEE98: sh          $a0, -0x104($at)
    MEM_H(-0X104, ctx->r1) = ctx->r4;
L_151DEE9C:
    // 0x151DEE9C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x151DEEA0: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    // 0x151DEEA4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DEEA8: lhu         $t7, 0x20($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X20);
    // 0x151DEEAC: andi        $t9, $t7, 0x10
    ctx->r25 = ctx->r15 & 0X10;
    // 0x151DEEB0: beql        $t9, $zero, L_151DEEC0
    if (ctx->r25 == 0) {
        // 0x151DEEB4: sra         $t8, $v1, 2
        ctx->r24 = S32(SIGNED(ctx->r3) >> 2);
            goto L_151DEEC0;
    }
    goto skip_15;
    // 0x151DEEB4: sra         $t8, $v1, 2
    ctx->r24 = S32(SIGNED(ctx->r3) >> 2);
    skip_15:
    // 0x151DEEB8: sh          $a0, -0x104($at)
    MEM_H(-0X104, ctx->r1) = ctx->r4;
L_151DEEBC:
    // 0x151DEEBC: sra         $t8, $v1, 2
    ctx->r24 = S32(SIGNED(ctx->r3) >> 2);
L_151DEEC0:
    // 0x151DEEC0: subu        $a3, $v1, $t8
    ctx->r7 = SUB32(ctx->r3, ctx->r24);
    // 0x151DEEC4: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x151DEEC8: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x151DEECC: jal         0x1504332C
    // 0x151DEED0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    func_1504332C(rdram, ctx);
        goto after_9;
    // 0x151DEED0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_9:
    // 0x151DEED4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151DEED8: lw          $t7, 0xBD8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XBD8);
    // 0x151DEEDC: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151DEEE0: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x151DEEE4: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    // 0x151DEEE8: jal         0x15042D94
    // 0x151DEEEC: lw          $a3, 0x23C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X23C);
    func_15042D94(rdram, ctx);
        goto after_10;
    // 0x151DEEEC: lw          $a3, 0x23C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X23C);
    after_10:
    // 0x151DEEF0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151DEEF4: addiu       $t2, $t2, -0x22C
    ctx->r10 = ADD32(ctx->r10, -0X22C);
L_151DEEF8:
    // 0x151DEEF8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151DEEFC: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x151DEF00: lui         $t9, 0x8
    ctx->r25 = S32(0X8 << 16);
    // 0x151DEF04: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x151DEF08: sw          $t9, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->r25;
    // 0x151DEF0C: lw          $t6, 0x0($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X0);
    // 0x151DEF10: jal         0x1000E7A0
    // 0x151DEF14: lb          $a1, 0x3E($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X3E);
    func_1000E7A0(rdram, ctx);
        goto after_11;
    // 0x151DEF14: lb          $a1, 0x3E($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X3E);
    after_11:
    // 0x151DEF18: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151DEF1C: addiu       $t2, $t2, -0x22C
    ctx->r10 = ADD32(ctx->r10, -0X22C);
    // 0x151DEF20: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DEF24: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151DEF28: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151DEF2C: beql        $a0, $zero, L_151DF1B0
    if (ctx->r4 == 0) {
        // 0x151DEF30: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151DF1B0;
    }
    goto skip_16;
    // 0x151DEF30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_16:
    // 0x151DEF34: lbu         $t7, -0x25C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X25C);
    // 0x151DEF38: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x151DEF3C: bnel        $at, $zero, L_151DF1B0
    if (ctx->r1 != 0) {
        // 0x151DEF40: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_151DF1B0;
    }
    goto skip_17;
    // 0x151DEF40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_17:
    // 0x151DEF44: lb          $t9, 0x3F($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X3F);
    // 0x151DEF48: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151DEF4C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151DEF50: sb          $t9, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r25;
    // 0x151DEF54: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x151DEF58: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151DEF5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151DEF60: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151DEF64: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x151DEF68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151DEF6C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151DEF70: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151DEF74: addiu       $v1, $v1, -0x1AC
    ctx->r3 = ADD32(ctx->r3, -0X1AC);
    // 0x151DEF78: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151DEF7C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151DEF80: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x151DEF84: nop

    // 0x151DEF88: bgez        $v0, L_151DEF98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151DEF8C: slti        $at, $v0, 0x100
        ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
            goto L_151DEF98;
    }
    // 0x151DEF8C: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x151DEF90: b           L_151DEFA4
    // 0x151DEF94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151DEFA4;
    // 0x151DEF94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DEF98:
    // 0x151DEF98: bne         $at, $zero, L_151DEFA4
    if (ctx->r1 != 0) {
        // 0x151DEF9C: nop
    
            goto L_151DEFA4;
    }
    // 0x151DEF9C: nop

    // 0x151DEFA0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151DEFA4:
    // 0x151DEFA4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DEFA8: sb          $v0, 0xA94($at)
    MEM_B(0XA94, ctx->r1) = ctx->r2;
    // 0x151DEFAC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151DEFB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DEFB4: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151DEFB8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DEFBC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151DEFC0: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x151DEFC4: nop

    // 0x151DEFC8: bc1f        L_151DF114
    if (!c1cs) {
        // 0x151DEFCC: nop
    
            goto L_151DF114;
    }
    // 0x151DEFCC: nop

    // 0x151DEFD0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151DEFD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151DEFD8: nop

    // 0x151DEFDC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x151DEFE0: nop

    // 0x151DEFE4: bc1fl       L_151DF004
    if (!c1cs) {
        // 0x151DEFE8: lb          $v0, 0x3E($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X3E);
            goto L_151DF004;
    }
    goto skip_18;
    // 0x151DEFE8: lb          $v0, 0x3E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3E);
    skip_18:
    // 0x151DEFEC: lhu         $t6, 0x20($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X20);
    // 0x151DEFF0: andi        $t7, $t6, 0xFFEF
    ctx->r15 = ctx->r14 & 0XFFEF;
    // 0x151DEFF4: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x151DEFF8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DEFFC: lw          $a0, -0x22C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X22C);
    // 0x151DF000: lb          $v0, 0x3E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3E);
L_151DF004:
    // 0x151DF004: beql        $v0, $zero, L_151DF020
    if (ctx->r2 == 0) {
        // 0x151DF008: lb          $v0, 0x2C($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X2C);
            goto L_151DF020;
    }
    goto skip_19;
    // 0x151DF008: lb          $v0, 0x2C($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2C);
    skip_19:
    // 0x151DF00C: beq         $v0, $t0, L_151DF088
    if (ctx->r2 == ctx->r8) {
        // 0x151DF010: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_151DF088;
    }
    // 0x151DF010: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151DF014: b           L_151DF1B0
    // 0x151DF018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DF01C: lb          $v0, 0x2C($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2C);
L_151DF020:
    // 0x151DF020: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF024: beql        $t0, $v0, L_151DF038
    if (ctx->r8 == ctx->r2) {
        // 0x151DF028: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_151DF038;
    }
    goto skip_20;
    // 0x151DF028: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    skip_20:
    // 0x151DF02C: sb          $zero, -0x108($at)
    MEM_B(-0X108, ctx->r1) = 0;
    // 0x151DF030: lb          $v0, 0x2C($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2C);
    // 0x151DF034: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
L_151DF038:
    // 0x151DF038: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x151DF03C: beq         $at, $zero, L_151DF1AC
    if (ctx->r1 == 0) {
        // 0x151DF040: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_151DF1AC;
    }
    // 0x151DF040: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x151DF044: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DF048: addu        $at, $at, $t9
    gpr jr_addend_151DF050 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x151DF04C: lw          $t9, -0x46A0($at)
    ctx->r25 = ADD32(ctx->r1, -0X46A0);
    // 0x151DF050: jr          $t9
    // 0x151DF054: nop

    switch (jr_addend_151DF050 >> 2) {
        case 0: goto L_151DF058; break;
        case 1: goto L_151DF068; break;
        case 2: goto L_151DF078; break;
        case 3: goto L_151DF078; break;
        case 4: goto L_151DF078; break;
        case 5: goto L_151DF1AC; break;
        default: switch_error(__func__, 0x151DF050, 0x800AB960);
    }
    // 0x151DF054: nop

L_151DF058:
    // 0x151DF058: jal         0x151DF1BC
    // 0x151DF05C: nop

    func_151DF1BC(rdram, ctx);
        goto after_12;
    // 0x151DF05C: nop

    after_12:
    // 0x151DF060: b           L_151DF1B0
    // 0x151DF064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF068:
    // 0x151DF068: jal         0x151DF574
    // 0x151DF06C: nop

    func_151DF574(rdram, ctx);
        goto after_13;
    // 0x151DF06C: nop

    after_13:
    // 0x151DF070: b           L_151DF1B0
    // 0x151DF074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF078:
    // 0x151DF078: jal         0x151DFF38
    // 0x151DF07C: nop

    func_151DFF38(rdram, ctx);
        goto after_14;
    // 0x151DF07C: nop

    after_14:
    // 0x151DF080: b           L_151DF1B0
    // 0x151DF084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF088:
    // 0x151DF088: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF08C: sb          $a1, -0x258($at)
    MEM_B(-0X258, ctx->r1) = ctx->r5;
    // 0x151DF090: lbu         $t8, 0x3F($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X3F);
    // 0x151DF094: sltiu       $at, $t8, 0x6
    ctx->r1 = ctx->r24 < 0X6 ? 1 : 0;
    // 0x151DF098: beq         $at, $zero, L_151DF1AC
    if (ctx->r1 == 0) {
        // 0x151DF09C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_151DF1AC;
    }
    // 0x151DF09C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151DF0A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DF0A4: addu        $at, $at, $t8
    gpr jr_addend_151DF0AC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x151DF0A8: lw          $t8, -0x4688($at)
    ctx->r24 = ADD32(ctx->r1, -0X4688);
    // 0x151DF0AC: jr          $t8
    // 0x151DF0B0: nop

    switch (jr_addend_151DF0AC >> 2) {
        case 0: goto L_151DF0B4; break;
        case 1: goto L_151DF0F4; break;
        case 2: goto L_151DF0C4; break;
        case 3: goto L_151DF0D4; break;
        case 4: goto L_151DF0E4; break;
        case 5: goto L_151DF104; break;
        default: switch_error(__func__, 0x151DF0AC, 0x800AB978);
    }
    // 0x151DF0B0: nop

L_151DF0B4:
    // 0x151DF0B4: jal         0x151E0424
    // 0x151DF0B8: nop

    func_151E0424(rdram, ctx);
        goto after_15;
    // 0x151DF0B8: nop

    after_15:
    // 0x151DF0BC: b           L_151DF1B0
    // 0x151DF0C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF0C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF0C4:
    // 0x151DF0C4: jal         0x151E09DC
    // 0x151DF0C8: nop

    func_151E09DC(rdram, ctx);
        goto after_16;
    // 0x151DF0C8: nop

    after_16:
    // 0x151DF0CC: b           L_151DF1B0
    // 0x151DF0D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF0D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF0D4:
    // 0x151DF0D4: jal         0x151E2284
    // 0x151DF0D8: nop

    func_151E2284(rdram, ctx);
        goto after_17;
    // 0x151DF0D8: nop

    after_17:
    // 0x151DF0DC: b           L_151DF1B0
    // 0x151DF0E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF0E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF0E4:
    // 0x151DF0E4: jal         0x151E0B70
    // 0x151DF0E8: nop

    func_151E0B70(rdram, ctx);
        goto after_18;
    // 0x151DF0E8: nop

    after_18:
    // 0x151DF0EC: b           L_151DF1B0
    // 0x151DF0F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF0F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF0F4:
    // 0x151DF0F4: jal         0x151E1744
    // 0x151DF0F8: nop

    func_151E1744(rdram, ctx);
        goto after_19;
    // 0x151DF0F8: nop

    after_19:
    // 0x151DF0FC: b           L_151DF1B0
    // 0x151DF100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF100: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF104:
    // 0x151DF104: jal         0x151E1214
    // 0x151DF108: nop

    func_151E1214(rdram, ctx);
        goto after_20;
    // 0x151DF108: nop

    after_20:
    // 0x151DF10C: b           L_151DF1B0
    // 0x151DF110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151DF1B0;
    // 0x151DF110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF114:
    // 0x151DF114: sb          $a1, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r5;
    // 0x151DF118: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DF11C: sb          $t6, 0xA95($at)
    MEM_B(0XA95, ctx->r1) = ctx->r14;
    // 0x151DF120: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
    // 0x151DF124: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x151DF128: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF12C: addiu       $v0, $v0, -0x1BB
    ctx->r2 = ADD32(ctx->r2, -0X1BB);
    // 0x151DF130: sb          $zero, 0x41($t7)
    MEM_B(0X41, ctx->r15) = 0;
    // 0x151DF134: sb          $t0, -0x1C0($at)
    MEM_B(-0X1C0, ctx->r1) = ctx->r8;
    // 0x151DF138: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF13C: sb          $zero, -0x1BC($at)
    MEM_B(-0X1BC, ctx->r1) = 0;
    // 0x151DF140: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF144: sb          $zero, -0x1D4($at)
    MEM_B(-0X1D4, ctx->r1) = 0;
L_151DF148:
    // 0x151DF148: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151DF14C: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x151DF150: bne         $at, $zero, L_151DF148
    if (ctx->r1 != 0) {
        // 0x151DF154: sb          $a1, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r5;
            goto L_151DF148;
    }
    // 0x151DF154: sb          $a1, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r5;
    // 0x151DF158: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151DF15C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151DF160: addiu       $v1, $v1, 0xC10
    ctx->r3 = ADD32(ctx->r3, 0XC10);
    // 0x151DF164: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
L_151DF168:
    // 0x151DF168: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151DF16C: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x151DF170: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x151DF174: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x151DF178: bne         $v0, $v1, L_151DF168
    if (ctx->r2 != ctx->r3) {
        // 0x151DF17C: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_151DF168;
    }
    // 0x151DF17C: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x151DF180: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151DF184: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF188: sb          $zero, -0x1CC($at)
    MEM_B(-0X1CC, ctx->r1) = 0;
    // 0x151DF18C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF190: swc1        $f0, -0x1C8($at)
    MEM_W(-0X1C8, ctx->r1) = ctx->f0.u32l;
    // 0x151DF194: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF198: swc1        $f0, -0x1C4($at)
    MEM_W(-0X1C4, ctx->r1) = ctx->f0.u32l;
    // 0x151DF19C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF1A0: swc1        $f0, -0x218($at)
    MEM_W(-0X218, ctx->r1) = ctx->f0.u32l;
    // 0x151DF1A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DF1A8: sb          $zero, -0x21C($at)
    MEM_B(-0X21C, ctx->r1) = 0;
L_151DF1AC:
    // 0x151DF1AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151DF1B0:
    // 0x151DF1B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x151DF1B4: jr          $ra
    // 0x151DF1B8: nop

    return;
    return;
    // 0x151DF1B8: nop

;}
RECOMP_FUNC void func_1506E958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E95C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E960: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E964: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E968: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E96C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E970: jal         0x1506E46C
    // 0x1506E974: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E974: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1506E978: beq         $v0, $zero, L_1506E988
    if (ctx->r2 == 0) {
        // 0x1506E97C: addiu       $a0, $zero, 0xBE
        ctx->r4 = ADD32(0, 0XBE);
            goto L_1506E988;
    }
    // 0x1506E97C: addiu       $a0, $zero, 0xBE
    ctx->r4 = ADD32(0, 0XBE);
    // 0x1506E980: jal         0x1506BAD8
    // 0x1506E984: addiu       $a1, $zero, 0x514
    ctx->r5 = ADD32(0, 0X514);
    func_1506BAD8(rdram, ctx);
        goto after_1;
    // 0x1506E984: addiu       $a1, $zero, 0x514
    ctx->r5 = ADD32(0, 0X514);
    after_1:
L_1506E988:
    // 0x1506E988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E990: jr          $ra
    // 0x1506E994: nop

    return;
    return;
    // 0x1506E994: nop

;}
RECOMP_FUNC void func_15076600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076600: jr          $ra
    // 0x15076604: nop

    return;
    return;
    // 0x15076604: nop

;}
RECOMP_FUNC void func_150FE320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FE320: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x150FE324: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150FE328: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x150FE32C: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x150FE330: bne         $a0, $zero, L_150FE340
    if (ctx->r4 != 0) {
        // 0x150FE334: addiu       $a1, $sp, 0x84
        ctx->r5 = ADD32(ctx->r29, 0X84);
            goto L_150FE340;
    }
    // 0x150FE334: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x150FE338: b           L_150FE48C
    // 0x150FE33C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150FE48C;
    // 0x150FE33C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150FE340:
    // 0x150FE340: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150FE344: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x150FE348: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150FE34C: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x150FE350: jal         0x15145740
    // 0x150FE354: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_15145740(rdram, ctx);
        goto after_0;
    // 0x150FE354: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150FE358: addiu       $t6, $sp, 0x90
    ctx->r14 = ADD32(ctx->r29, 0X90);
    // 0x150FE35C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FE360: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x150FE364: lbu         $a1, 0xBF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBF);
    // 0x150FE368: lw          $a2, 0xC0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XC0);
    // 0x150FE36C: jal         0x150FE49C
    // 0x150FE370: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    func_150FE49C(rdram, ctx);
        goto after_1;
    // 0x150FE370: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    after_1:
    // 0x150FE374: jal         0x150ADA68
    // 0x150FE378: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150FE378: nop

    after_2:
    // 0x150FE37C: jal         0x150ADA68
    // 0x150FE380: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150FE380: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x150FE384: jal         0x150ADA20
    // 0x150FE388: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150FE388: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x150FE38C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150FE390: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FE394: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FE398: lwc1        $f8, 0x1FEC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1FEC);
    // 0x150FE39C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150FE3A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150FE3A4: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150FE3A8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150FE3AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FE3B0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150FE3B4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x150FE3B8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150FE3BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150FE3C0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x150FE3C4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x150FE3C8: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150FE3CC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150FE3D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150FE3D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150FE3D8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150FE3DC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x150FE3E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FE3E4: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150FE3E8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150FE3EC: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x150FE3F0: mfhi        $t7
    ctx->r15 = hi;
    // 0x150FE3F4: addiu       $t8, $t7, 0xC8
    ctx->r24 = ADD32(ctx->r15, 0XC8);
    // 0x150FE3F8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150FE3FC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x150FE400: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x150FE404: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x150FE408: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x150FE40C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150FE410: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150FE414: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150FE418: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150FE41C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150FE420: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150FE424: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150FE428: addiu       $t5, $zero, 0x23
    ctx->r13 = ADD32(0, 0X23);
    // 0x150FE42C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FE430: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x150FE434: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x150FE438: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x150FE43C: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x150FE440: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x150FE444: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x150FE448: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x150FE44C: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x150FE450: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x150FE454: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x150FE458: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x150FE45C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150FE460: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150FE464: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150FE468: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150FE46C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150FE470: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150FE474: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150FE478: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x150FE47C: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    // 0x150FE480: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x150FE484: jal         0x151C229C
    // 0x150FE488: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    func_151C229C(rdram, ctx);
        goto after_5;
    // 0x150FE488: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    after_5:
L_150FE48C:
    // 0x150FE48C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x150FE490: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x150FE494: jr          $ra
    // 0x150FE498: nop

    return;
    return;
    // 0x150FE498: nop

;}
RECOMP_FUNC void func_15036310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15036310: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15036314: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15036318: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x1503631C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x15036320: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x15036324: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15036328: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x1503632C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15036330: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x15036334: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15036338: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x1503633C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15036340: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x15036344: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15036348: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x1503634C: lw          $t0, 0x1D4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1D4);
    // 0x15036350: sll         $t2, $a2, 6
    ctx->r10 = S32(ctx->r6 << 6);
    // 0x15036354: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15036358: beq         $t0, $zero, L_15036554
    if (ctx->r8 == 0) {
        // 0x1503635C: addu        $a0, $t0, $t2
        ctx->r4 = ADD32(ctx->r8, ctx->r10);
            goto L_15036554;
    }
    // 0x1503635C: addu        $a0, $t0, $t2
    ctx->r4 = ADD32(ctx->r8, ctx->r10);
    // 0x15036360: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15036364: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15036368: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x1503636C: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x15036370: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x15036374: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15036378: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1503637C: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    // 0x15036380: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15036384: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x15036388: lwc1        $f4, 0x2F8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x1503638C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15036390: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15036394: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x15036398: lwc1        $f10, 0x2FC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x1503639C: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150363A0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150363A4: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150363A8: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x150363AC: lwc1        $f8, 0x300($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X300);
    // 0x150363B0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150363B4: beq         $a3, $zero, L_150363CC
    if (ctx->r7 == 0) {
        // 0x150363B8: swc1        $f4, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
            goto L_150363CC;
    }
    // 0x150363B8: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x150363BC: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150363C0: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x150363C4: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x150363C8: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
L_150363CC:
    // 0x150363CC: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150363D0: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150363D4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150363D8: mul.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x150363DC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150363E0: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150363E4: mul.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x150363E8: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x150363EC: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x150363F0: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150363F4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150363F8: mul.s       $f6, $f14, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x150363FC: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x15036400: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x15036404: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15036408: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1503640C: nop

    // 0x15036410: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15036414: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x15036418: sub.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1503641C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15036420: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x15036424: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x15036428: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1503642C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15036430: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x15036434: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x15036438: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x1503643C: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x15036440: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15036444: mul.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x15036448: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1503644C: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15036450: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x15036454: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x15036458: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x1503645C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15036460: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x15036464: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15036468: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1503646C: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x15036470: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x15036474: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x15036478: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1503647C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15036480: swc1        $f14, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f14.u32l;
    // 0x15036484: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x15036488: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x1503648C: jal         0x150440A0
    // 0x15036490: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_150440A0(rdram, ctx);
        goto after_0;
    // 0x15036490: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15036494: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x15036498: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1503649C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150364A0: lwc1        $f0, 0x14C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X14C);
    // 0x150364A4: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x150364A8: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x150364AC: nop

    // 0x150364B0: bc1tl       L_15036518
    if (c1cs) {
        // 0x150364B4: lwc1        $f0, 0x150($v1)
        ctx->f0.u32l = MEM_W(ctx->r3, 0X150);
            goto L_15036518;
    }
    goto skip_0;
    // 0x150364B4: lwc1        $f0, 0x150($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X150);
    skip_0:
    // 0x150364B8: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150364BC: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x150364C0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150364C4: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x150364C8: lwc1        $f4, 0x14C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14C);
    // 0x150364CC: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150364D0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150364D4: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x150364D8: lwc1        $f10, 0x14C($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14C);
    // 0x150364DC: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150364E0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150364E4: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
    // 0x150364E8: lwc1        $f8, 0x14C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14C);
    // 0x150364EC: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x150364F0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150364F4: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x150364F8: lwc1        $f6, 0x14C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X14C);
    // 0x150364FC: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15036500: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15036504: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x15036508: lwc1        $f4, 0x14C($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14C);
    // 0x1503650C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15036510: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
    // 0x15036514: lwc1        $f0, 0x150($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X150);
L_15036518:
    // 0x15036518: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1503651C: nop

    // 0x15036520: bc1tl       L_15036558
    if (c1cs) {
        // 0x15036524: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15036558;
    }
    goto skip_1;
    // 0x15036524: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_1:
    // 0x15036528: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1503652C: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15036530: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15036534: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x15036538: lwc1        $f6, 0x150($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X150);
    // 0x1503653C: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x15036540: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15036544: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x15036548: lwc1        $f4, 0x150($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X150);
    // 0x1503654C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15036550: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
L_15036554:
    // 0x15036554: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15036558:
    // 0x15036558: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x1503655C: jr          $ra
    // 0x15036560: nop

    return;
    return;
    // 0x15036560: nop

;}
RECOMP_FUNC void func_15072208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072208: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x1507220C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15072210: addiu       $a1, $a1, -0x3D30
    ctx->r5 = ADD32(ctx->r5, -0X3D30);
    // 0x15072214: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x15072218: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x1507221C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15072220: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15072224: lbu         $t7, -0x3CCB($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X3CCB);
    // 0x15072228: mflo        $t6
    ctx->r14 = lo;
    // 0x1507222C: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x15072230: bne         $v0, $t7, L_15072248
    if (ctx->r2 != ctx->r15) {
        // 0x15072234: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15072248;
    }
    // 0x15072234: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15072238: bne         $a2, $zero, L_15072248
    if (ctx->r6 != 0) {
        // 0x1507223C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_15072248;
    }
    // 0x1507223C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15072240: jr          $ra
    // 0x15072244: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    return;
    // 0x15072244: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_15072248:
    // 0x15072248: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507224C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15072250: addiu       $a0, $a0, 0x121C
    ctx->r4 = ADD32(ctx->r4, 0X121C);
    // 0x15072254: addiu       $a1, $a1, -0x3A04
    ctx->r5 = ADD32(ctx->r5, -0X3A04);
    // 0x15072258: lbu         $t8, 0x65($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X65);
L_1507225C:
    // 0x1507225C: bnel        $v0, $t8, L_1507227C
    if (ctx->r2 != ctx->r24) {
        // 0x15072260: lbu         $t9, 0x391($a1)
        ctx->r25 = MEM_BU(ctx->r5, 0X391);
            goto L_1507227C;
    }
    goto skip_0;
    // 0x15072260: lbu         $t9, 0x391($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X391);
    skip_0:
    // 0x15072264: bnel        $v1, $a2, L_15072278
    if (ctx->r3 != ctx->r6) {
        // 0x15072268: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15072278;
    }
    goto skip_1;
    // 0x15072268: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x1507226C: jr          $ra
    // 0x15072270: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    return;
    // 0x15072270: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x15072274: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15072278:
    // 0x15072278: lbu         $t9, 0x391($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X391);
L_1507227C:
    // 0x1507227C: bnel        $v0, $t9, L_1507229C
    if (ctx->r2 != ctx->r25) {
        // 0x15072280: lbu         $t0, 0x6BD($a1)
        ctx->r8 = MEM_BU(ctx->r5, 0X6BD);
            goto L_1507229C;
    }
    goto skip_2;
    // 0x15072280: lbu         $t0, 0x6BD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X6BD);
    skip_2:
    // 0x15072284: bnel        $v1, $a2, L_15072298
    if (ctx->r3 != ctx->r6) {
        // 0x15072288: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15072298;
    }
    goto skip_3;
    // 0x15072288: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
    // 0x1507228C: jr          $ra
    // 0x15072290: addiu       $v0, $a1, 0x32C
    ctx->r2 = ADD32(ctx->r5, 0X32C);
    return;
    return;
    // 0x15072290: addiu       $v0, $a1, 0x32C
    ctx->r2 = ADD32(ctx->r5, 0X32C);
    // 0x15072294: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15072298:
    // 0x15072298: lbu         $t0, 0x6BD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X6BD);
L_1507229C:
    // 0x1507229C: bnel        $v0, $t0, L_150722BC
    if (ctx->r2 != ctx->r8) {
        // 0x150722A0: lbu         $t1, 0x9E9($a1)
        ctx->r9 = MEM_BU(ctx->r5, 0X9E9);
            goto L_150722BC;
    }
    goto skip_4;
    // 0x150722A0: lbu         $t1, 0x9E9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9E9);
    skip_4:
    // 0x150722A4: bnel        $v1, $a2, L_150722B8
    if (ctx->r3 != ctx->r6) {
        // 0x150722A8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150722B8;
    }
    goto skip_5;
    // 0x150722A8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_5:
    // 0x150722AC: jr          $ra
    // 0x150722B0: addiu       $v0, $a1, 0x658
    ctx->r2 = ADD32(ctx->r5, 0X658);
    return;
    return;
    // 0x150722B0: addiu       $v0, $a1, 0x658
    ctx->r2 = ADD32(ctx->r5, 0X658);
    // 0x150722B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_150722B8:
    // 0x150722B8: lbu         $t1, 0x9E9($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X9E9);
L_150722BC:
    // 0x150722BC: bnel        $v0, $t1, L_150722DC
    if (ctx->r2 != ctx->r9) {
        // 0x150722C0: addiu       $a1, $a1, 0xCB0
        ctx->r5 = ADD32(ctx->r5, 0XCB0);
            goto L_150722DC;
    }
    goto skip_6;
    // 0x150722C0: addiu       $a1, $a1, 0xCB0
    ctx->r5 = ADD32(ctx->r5, 0XCB0);
    skip_6:
    // 0x150722C4: bnel        $v1, $a2, L_150722D8
    if (ctx->r3 != ctx->r6) {
        // 0x150722C8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_150722D8;
    }
    goto skip_7;
    // 0x150722C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_7:
    // 0x150722CC: jr          $ra
    // 0x150722D0: addiu       $v0, $a1, 0x984
    ctx->r2 = ADD32(ctx->r5, 0X984);
    return;
    return;
    // 0x150722D0: addiu       $v0, $a1, 0x984
    ctx->r2 = ADD32(ctx->r5, 0X984);
    // 0x150722D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_150722D8:
    // 0x150722D8: addiu       $a1, $a1, 0xCB0
    ctx->r5 = ADD32(ctx->r5, 0XCB0);
L_150722DC:
    // 0x150722DC: bnel        $a1, $a0, L_1507225C
    if (ctx->r5 != ctx->r4) {
        // 0x150722E0: lbu         $t8, 0x65($a1)
        ctx->r24 = MEM_BU(ctx->r5, 0X65);
            goto L_1507225C;
    }
    goto skip_8;
    // 0x150722E0: lbu         $t8, 0x65($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X65);
    skip_8:
    // 0x150722E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150722E8: jr          $ra
    // 0x150722EC: nop

    return;
    return;
    // 0x150722EC: nop

;}
RECOMP_FUNC void func_150F740C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F740C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F7410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F7414: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F7418: jal         0x150F739C
    // 0x150F741C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F739C(rdram, ctx);
        goto after_0;
    // 0x150F741C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F7420: jal         0x1514933C
    // 0x150F7424: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150F7424: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F7428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F742C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F7430: jr          $ra
    // 0x150F7434: nop

    return;
    return;
    // 0x150F7434: nop

;}
RECOMP_FUNC void func_1510C8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510C8A8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1510C8AC: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x1510C8B0: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x1510C8B4: addiu       $s6, $s6, -0x619C
    ctx->r22 = ADD32(ctx->r22, -0X619C);
    // 0x1510C8B8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1510C8BC: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x1510C8C0: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x1510C8C4: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x1510C8C8: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x1510C8CC: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x1510C8D0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1510C8D4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1510C8D8: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x1510C8DC: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x1510C8E0: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x1510C8E4: lbu         $t6, 0x0($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X0);
    // 0x1510C8E8: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x1510C8EC: addiu       $s4, $s4, -0x61A0
    ctx->r20 = ADD32(ctx->r20, -0X61A0);
    // 0x1510C8F0: blez        $t6, L_1510CACC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1510C8F4: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_1510CACC;
    }
    // 0x1510C8F4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1510C8F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510C8FC: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x1510C900: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x1510C904: addiu       $s5, $s5, 0xE10
    ctx->r21 = ADD32(ctx->r21, 0XE10);
    // 0x1510C908: addiu       $s7, $s7, -0x161C
    ctx->r23 = ADD32(ctx->r23, -0X161C);
    // 0x1510C90C: lwc1        $f24, 0x2CC0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X2CC0);
    // 0x1510C910: lh          $a1, 0x50($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X50);
    // 0x1510C914: lh          $a0, 0x52($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X52);
    // 0x1510C918: lw          $s1, 0x0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X0);
L_1510C91C:
    // 0x1510C91C: lbu         $t7, 0xC($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XC);
    // 0x1510C920: bnel        $t7, $zero, L_1510CAB0
    if (ctx->r15 != 0) {
        // 0x1510C924: lbu         $t7, 0x0($s6)
        ctx->r15 = MEM_BU(ctx->r22, 0X0);
            goto L_1510CAB0;
    }
    goto skip_0;
    // 0x1510C924: lbu         $t7, 0x0($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X0);
    skip_0:
    // 0x1510C928: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x1510C92C: beql        $t8, $zero, L_1510CA3C
    if (ctx->r24 == 0) {
        // 0x1510C930: lw          $t4, 0x4($s1)
        ctx->r12 = MEM_W(ctx->r17, 0X4);
            goto L_1510CA3C;
    }
    goto skip_1;
    // 0x1510C930: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
    skip_1:
    // 0x1510C934: lhu         $t9, 0x10($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X10);
    // 0x1510C938: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x1510C93C: lhu         $t2, 0xE($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0XE);
    // 0x1510C940: lbu         $t4, 0xA($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XA);
    // 0x1510C944: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1510C948: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1510C94C: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x1510C950: mflo        $t1
    ctx->r9 = lo;
    // 0x1510C954: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x1510C958: sh          $t3, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r11;
    // 0x1510C95C: andi        $t6, $t3, 0xFFFF
    ctx->r14 = ctx->r11 & 0XFFFF;
    // 0x1510C960: lw          $s2, 0x0($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X0);
    // 0x1510C964: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1510C968: addu        $s2, $s2, $t5
    ctx->r18 = ADD32(ctx->r18, ctx->r13);
    // 0x1510C96C: bgez        $t6, L_1510C980
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1510C970: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1510C980;
    }
    // 0x1510C970: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510C974: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1510C978: nop

    // 0x1510C97C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_1510C980:
    // 0x1510C980: mul.s       $f20, $f6, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x1510C984: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1510C988: jal         0x15047D60
    // 0x1510C98C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1510C98C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x1510C990: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1510C994: jal         0x15047C00
    // 0x1510C998: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x1510C998: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x1510C99C: lhu         $t7, 0x12($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X12);
    // 0x1510C9A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1510C9A4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x1510C9A8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1510C9AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1510C9B0: bgez        $t7, L_1510C9C4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1510C9B4: cvt.s.w     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1510C9C4;
    }
    // 0x1510C9B4: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1510C9B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1510C9BC: nop

    // 0x1510C9C0: add.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f16.fl;
L_1510C9C4:
    // 0x1510C9C4: mul.s       $f18, $f2, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x1510C9C8: lbu         $t4, 0x8($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X8);
    // 0x1510C9CC: mul.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1510C9D0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1510C9D4: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1510C9D8: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x1510C9DC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x1510C9E0: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x1510C9E4: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1510C9E8: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x1510C9EC: blez        $t4, L_1510CA38
    if (SIGNED(ctx->r12) <= 0) {
        // 0x1510C9F0: sra         $a1, $t1, 16
        ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
            goto L_1510CA38;
    }
    // 0x1510C9F0: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x1510C9F4: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_1510C9F8:
    // 0x1510C9F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1510C9FC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x1510CA00: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x1510CA04: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x1510CA08: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x1510CA0C: sh          $t8, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r24;
    // 0x1510CA10: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x1510CA14: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x1510CA18: lh          $t2, 0x2($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X2);
    // 0x1510CA1C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1510CA20: addu        $t1, $t2, $a1
    ctx->r9 = ADD32(ctx->r10, ctx->r5);
    // 0x1510CA24: sh          $t1, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r9;
    // 0x1510CA28: lbu         $t3, 0x8($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X8);
    // 0x1510CA2C: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x1510CA30: bnel        $at, $zero, L_1510C9F8
    if (ctx->r1 != 0) {
        // 0x1510CA34: lw          $t5, 0x0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X0);
            goto L_1510C9F8;
    }
    goto skip_2;
    // 0x1510CA34: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    skip_2:
L_1510CA38:
    // 0x1510CA38: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
L_1510CA3C:
    // 0x1510CA3C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1510CA40: beql        $t4, $zero, L_1510CAB0
    if (ctx->r12 == 0) {
        // 0x1510CA44: lbu         $t7, 0x0($s6)
        ctx->r15 = MEM_BU(ctx->r22, 0X0);
            goto L_1510CAB0;
    }
    goto skip_3;
    // 0x1510CA44: lbu         $t7, 0x0($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X0);
    skip_3:
    // 0x1510CA48: lbu         $t5, 0xB($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0XB);
    // 0x1510CA4C: lbu         $t7, 0x9($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X9);
    // 0x1510CA50: lw          $s2, 0x4($s5)
    ctx->r18 = MEM_W(ctx->r21, 0X4);
    // 0x1510CA54: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x1510CA58: blez        $t7, L_1510CAAC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1510CA5C: addu        $s2, $s2, $t6
        ctx->r18 = ADD32(ctx->r18, ctx->r14);
            goto L_1510CAAC;
    }
    // 0x1510CA5C: addu        $s2, $s2, $t6
    ctx->r18 = ADD32(ctx->r18, ctx->r14);
    // 0x1510CA60: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x1510CA64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1510CA68: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
L_1510CA6C:
    // 0x1510CA6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1510CA70: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x1510CA74: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1510CA78: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x1510CA7C: addu        $t2, $t0, $a0
    ctx->r10 = ADD32(ctx->r8, ctx->r4);
    // 0x1510CA80: sh          $t2, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r10;
    // 0x1510CA84: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x1510CA88: addu        $t3, $t1, $v1
    ctx->r11 = ADD32(ctx->r9, ctx->r3);
    // 0x1510CA8C: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x1510CA90: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x1510CA94: addu        $t5, $t4, $a1
    ctx->r13 = ADD32(ctx->r12, ctx->r5);
    // 0x1510CA98: sh          $t5, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r13;
    // 0x1510CA9C: lbu         $t6, 0x9($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X9);
    // 0x1510CAA0: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1510CAA4: bnel        $at, $zero, L_1510CA6C
    if (ctx->r1 != 0) {
        // 0x1510CAA8: lw          $t8, 0x4($s1)
        ctx->r24 = MEM_W(ctx->r17, 0X4);
            goto L_1510CA6C;
    }
    goto skip_4;
    // 0x1510CAA8: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    skip_4:
L_1510CAAC:
    // 0x1510CAAC: lbu         $t7, 0x0($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X0);
L_1510CAB0:
    // 0x1510CAB0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x1510CAB4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x1510CAB8: slt         $at, $s3, $t7
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1510CABC: bnel        $at, $zero, L_1510C91C
    if (ctx->r1 != 0) {
        // 0x1510CAC0: lw          $s1, 0x0($s4)
        ctx->r17 = MEM_W(ctx->r20, 0X0);
            goto L_1510C91C;
    }
    goto skip_5;
    // 0x1510CAC0: lw          $s1, 0x0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X0);
    skip_5:
    // 0x1510CAC4: sh          $a1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r5;
    // 0x1510CAC8: sh          $a0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r4;
L_1510CACC:
    // 0x1510CACC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1510CAD0: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1510CAD4: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x1510CAD8: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x1510CADC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1510CAE0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1510CAE4: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x1510CAE8: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x1510CAEC: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x1510CAF0: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x1510CAF4: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x1510CAF8: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x1510CAFC: jr          $ra
    // 0x1510CB00: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1510CB00: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_1511EC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511EC50: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x1511EC54: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1511EC58: bne         $t6, $zero, L_1511EC74
    if (ctx->r14 != 0) {
        // 0x1511EC5C: nop
    
            goto L_1511EC74;
    }
    // 0x1511EC5C: nop

    // 0x1511EC60: lh          $t7, 0x12($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X12);
    // 0x1511EC64: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1511EC68: nop

    // 0x1511EC6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511EC70: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
L_1511EC74:
    // 0x1511EC74: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1511EC78: lh          $t9, 0x12($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X12);
    // 0x1511EC7C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1511EC80: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1511EC84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511EC88: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x1511EC8C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511EC90: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x1511EC94: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1511EC98: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1511EC9C: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1511ECA0: beql        $t0, $zero, L_1511ECBC
    if (ctx->r8 == 0) {
        // 0x1511ECA4: lw          $t1, 0x80($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X80);
            goto L_1511ECBC;
    }
    goto skip_0;
    // 0x1511ECA4: lw          $t1, 0x80($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X80);
    skip_0:
    // 0x1511ECA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511ECAC: nop

    // 0x1511ECB0: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1511ECB4: nop

    // 0x1511ECB8: lw          $t1, 0x80($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X80);
L_1511ECBC:
    // 0x1511ECBC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1511ECC0: beql        $t1, $zero, L_1511ED30
    if (ctx->r9 == 0) {
        // 0x1511ECC4: sub.s       $f16, $f0, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_1511ED30;
    }
    goto skip_1;
    // 0x1511ECC4: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    skip_1:
    // 0x1511ECC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511ECCC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x1511ECD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511ECD4: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1511ECD8: lwc1        $f18, 0x84($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511ECDC: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1511ECE0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x1511ECE4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1511ECE8: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x1511ECEC: nop

    // 0x1511ECF0: sh          $t3, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r11;
    // 0x1511ECF4: lh          $t4, 0x12($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X12);
    // 0x1511ECF8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x1511ECFC: nop

    // 0x1511ED00: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1511ED04: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x1511ED08: nop

    // 0x1511ED0C: bc1fl       L_1511ED78
    if (!c1cs) {
        // 0x1511ED10: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_1511ED78;
    }
    goto skip_2;
    // 0x1511ED10: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_2:
    // 0x1511ED14: trunc.w.s   $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511ED18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1511ED1C: sb          $t7, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r15;
    // 0x1511ED20: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1511ED24: b           L_1511ED74
    // 0x1511ED28: sh          $t6, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r14;
        goto L_1511ED74;
    // 0x1511ED28: sh          $t6, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r14;
    // 0x1511ED2C: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
L_1511ED30:
    // 0x1511ED30: lwc1        $f12, 0x84($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511ED34: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1511ED38: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x1511ED3C: nop

    // 0x1511ED40: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x1511ED44: lh          $t0, 0x12($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X12);
    // 0x1511ED48: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1511ED4C: nop

    // 0x1511ED50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511ED54: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x1511ED58: nop

    // 0x1511ED5C: bc1fl       L_1511ED78
    if (!c1cs) {
        // 0x1511ED60: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_1511ED78;
    }
    goto skip_3;
    // 0x1511ED60: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    skip_3:
    // 0x1511ED64: trunc.w.s   $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1511ED68: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x1511ED6C: nop

    // 0x1511ED70: sh          $t2, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r10;
L_1511ED74:
    // 0x1511ED74: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_1511ED78:
    // 0x1511ED78: sw          $t3, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r11;
    // 0x1511ED7C: jr          $ra
    // 0x1511ED80: nop

    return;
    return;
    // 0x1511ED80: nop

;}
RECOMP_FUNC void func_1505250C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505250C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15052510: lh          $v0, 0xCE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XCE);
    // 0x15052514: lh          $v1, 0xCC($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XCC);
    // 0x15052518: beq         $v0, $v1, L_15052588
    if (ctx->r2 == ctx->r3) {
        // 0x1505251C: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_15052588;
    }
    // 0x1505251C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15052520: beq         $at, $zero, L_1505255C
    if (ctx->r1 == 0) {
        // 0x15052524: subu        $t1, $v0, $v1
        ctx->r9 = SUB32(ctx->r2, ctx->r3);
            goto L_1505255C;
    }
    // 0x15052524: subu        $t1, $v0, $v1
    ctx->r9 = SUB32(ctx->r2, ctx->r3);
    // 0x15052528: subu        $t6, $v0, $v1
    ctx->r14 = SUB32(ctx->r2, ctx->r3);
    // 0x1505252C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15052530: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x15052534: mflo        $t7
    ctx->r15 = lo;
    // 0x15052538: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x1505253C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15052540: sh          $t9, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r25;
    // 0x15052544: lh          $t0, 0xCC($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XCC);
    // 0x15052548: slt         $at, $v0, $t0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1505254C: beq         $at, $zero, L_15052588
    if (ctx->r1 == 0) {
        // 0x15052550: nop
    
            goto L_15052588;
    }
    // 0x15052550: nop

    // 0x15052554: jr          $ra
    // 0x15052558: sh          $v0, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r2;
    return;
    return;
    // 0x15052558: sh          $v0, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r2;
L_1505255C:
    // 0x1505255C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15052560: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x15052564: mflo        $t2
    ctx->r10 = lo;
    // 0x15052568: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x1505256C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x15052570: sh          $t4, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r12;
    // 0x15052574: lh          $t5, 0xCC($a0)
    ctx->r13 = MEM_H(ctx->r4, 0XCC);
    // 0x15052578: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1505257C: beq         $at, $zero, L_15052588
    if (ctx->r1 == 0) {
        // 0x15052580: nop
    
            goto L_15052588;
    }
    // 0x15052580: nop

    // 0x15052584: sh          $v0, 0xCC($a0)
    MEM_H(0XCC, ctx->r4) = ctx->r2;
L_15052588:
    // 0x15052588: jr          $ra
    // 0x1505258C: nop

    return;
    return;
    // 0x1505258C: nop

;}
RECOMP_FUNC void func_15070830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15070834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15070838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1507083C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070840: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070844: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15070848: jal         0x150FE320
    // 0x1507084C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150FE320(rdram, ctx);
        goto after_0;
    // 0x1507084C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15070850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15070854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15070858: jr          $ra
    // 0x1507085C: nop

    return;
    return;
    // 0x1507085C: nop

;}
RECOMP_FUNC void func_15167C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15167C58: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x15167C5C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15167C60: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15167C64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15167C68: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x15167C6C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15167C70: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x15167C74: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x15167C78: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x15167C7C: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x15167C80: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x15167C84: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15167C88: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15167C8C: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x15167C90: sra         $t1, $v0, 8
    ctx->r9 = S32(SIGNED(ctx->r2) >> 8);
    // 0x15167C94: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x15167C98: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x15167C9C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x15167CA0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x15167CA4: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x15167CA8: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x15167CAC: addiu       $t6, $sp, 0x5C
    ctx->r14 = ADD32(ctx->r29, 0X5C);
    // 0x15167CB0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15167CB4: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x15167CB8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15167CBC: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x15167CC0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15167CC4: sll         $a2, $v0, 8
    ctx->r6 = S32(ctx->r2 << 8);
    // 0x15167CC8: jal         0x15142E24
    // 0x15167CCC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_15142E24(rdram, ctx);
        goto after_0;
    // 0x15167CCC: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_0:
    // 0x15167CD0: lh          $t9, 0x18($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X18);
    // 0x15167CD4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15167CD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15167CDC: sh          $t9, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r25;
    // 0x15167CE0: lh          $t1, 0x1A($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X1A);
    // 0x15167CE4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x15167CE8: sh          $t1, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r9;
    // 0x15167CEC: lh          $t0, 0x1C($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1C);
    // 0x15167CF0: sh          $t0, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r8;
    // 0x15167CF4: lh          $t2, 0x1E($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X1E);
    // 0x15167CF8: sh          $t2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r10;
    // 0x15167CFC: lh          $t3, 0x20($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X20);
    // 0x15167D00: sh          $t3, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r11;
    // 0x15167D04: lbu         $t4, 0x23($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X23);
    // 0x15167D08: sb          $zero, 0x69($sp)
    MEM_B(0X69, ctx->r29) = 0;
    // 0x15167D0C: sb          $t4, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r12;
    // 0x15167D10: lb          $v1, 0x22($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X22);
    // 0x15167D14: beq         $a1, $v1, L_15167D24
    if (ctx->r5 == ctx->r3) {
        // 0x15167D18: nop
    
            goto L_15167D24;
    }
    // 0x15167D18: nop

    // 0x15167D1C: b           L_15167D30
    // 0x15167D20: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
        goto L_15167D30;
    // 0x15167D20: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
L_15167D24:
    // 0x15167D24: bne         $a1, $v1, L_15167D30
    if (ctx->r5 != ctx->r3) {
        // 0x15167D28: addiu       $t6, $zero, 0x9
        ctx->r14 = ADD32(0, 0X9);
            goto L_15167D30;
    }
    // 0x15167D28: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x15167D2C: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
L_15167D30:
    // 0x15167D30: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x15167D34: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x15167D38: addiu       $t9, $t9, 0x4AC8
    ctx->r25 = ADD32(ctx->r25, 0X4AC8);
    // 0x15167D3C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x15167D40: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15167D44: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x15167D48: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x15167D4C: addiu       $a1, $zero, 0x2C00
    ctx->r5 = ADD32(0, 0X2C00);
    // 0x15167D50: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    // 0x15167D54: or          $a2, $t1, $t0
    ctx->r6 = ctx->r9 | ctx->r8;
    // 0x15167D58: ori         $t2, $a2, 0x4
    ctx->r10 = ctx->r6 | 0X4;
    // 0x15167D5C: jal         0x15142FBC
    // 0x15167D60: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_15142FBC(rdram, ctx);
        goto after_1;
    // 0x15167D60: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_1:
    // 0x15167D64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15167D68: jal         0x15095760
    // 0x15167D6C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    func_15095760(rdram, ctx);
        goto after_2;
    // 0x15167D6C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    after_2:
    // 0x15167D70: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15167D74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15167D78: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x15167D7C: jr          $ra
    // 0x15167D80: nop

    return;
    return;
    // 0x15167D80: nop

;}
RECOMP_FUNC void func_150409EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150409EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150409F0: jr          $ra
    // 0x150409F4: nop

    return;
    return;
    // 0x150409F4: nop

;}
RECOMP_FUNC void func_1514DB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DB58: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1514DB5C: jr          $ra
    // 0x1514DB60: nop

    return;
    return;
    // 0x1514DB60: nop

;}
RECOMP_FUNC void func_1511F4D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511F4D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1511F4D4: lbu         $v1, 0x73($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X73);
    // 0x1511F4D8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1511F4DC: andi        $a1, $v1, 0x4
    ctx->r5 = ctx->r3 & 0X4;
    // 0x1511F4E0: bne         $a1, $at, L_1511F50C
    if (ctx->r5 != ctx->r1) {
        // 0x1511F4E4: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_1511F50C;
    }
    // 0x1511F4E4: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x1511F4E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1511F4EC: bnel        $v0, $at, L_1511F500
    if (ctx->r2 != ctx->r1) {
        // 0x1511F4F0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1511F500;
    }
    goto skip_0;
    // 0x1511F4F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x1511F4F4: b           L_1511F50C
    // 0x1511F4F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1511F50C;
    // 0x1511F4F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1511F4FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_1511F500:
    // 0x1511F500: bnel        $v0, $at, L_1511F510
    if (ctx->r2 != ctx->r1) {
        // 0x1511F504: lw          $v1, 0x3C($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X3C);
            goto L_1511F510;
    }
    goto skip_1;
    // 0x1511F504: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    skip_1:
    // 0x1511F508: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1511F50C:
    // 0x1511F50C: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
L_1511F510:
    // 0x1511F510: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1511F514: lw          $a2, 0x84($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X84);
    // 0x1511F518: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1511F51C: lw          $t0, 0x7C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X7C);
    // 0x1511F520: sra         $a3, $a2, 16
    ctx->r7 = S32(SIGNED(ctx->r6) >> 16);
    // 0x1511F524: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511F528: andi        $t7, $a3, 0xFFFF
    ctx->r15 = ctx->r7 & 0XFFFF;
    // 0x1511F52C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x1511F530: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    // 0x1511F534: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1511F538: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1511F53C: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x1511F540: bnel        $t0, $zero, L_1511F588
    if (ctx->r8 != 0) {
        // 0x1511F544: sll         $t6, $t0, 16
        ctx->r14 = S32(ctx->r8 << 16);
            goto L_1511F588;
    }
    goto skip_2;
    // 0x1511F544: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    skip_2:
    // 0x1511F548: lh          $t8, 0x10($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X10);
    // 0x1511F54C: lh          $t2, 0x12($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X12);
    // 0x1511F550: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511F554: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x1511F558: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x1511F55C: or          $t4, $t9, $t3
    ctx->r12 = ctx->r25 | ctx->r11;
    // 0x1511F560: bne         $v0, $at, L_1511F578
    if (ctx->r2 != ctx->r1) {
        // 0x1511F564: sw          $t4, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r12;
            goto L_1511F578;
    }
    // 0x1511F564: sw          $t4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r12;
    // 0x1511F568: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x1511F56C: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x1511F570: b           L_1511F584
    // 0x1511F574: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
        goto L_1511F584;
    // 0x1511F574: or          $t0, $t4, $zero
    ctx->r8 = ctx->r12 | 0;
L_1511F578:
    // 0x1511F578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511F57C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1511F580: lw          $t0, 0x7C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X7C);
L_1511F584:
    // 0x1511F584: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
L_1511F588:
    // 0x1511F588: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1511F58C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x1511F590: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x1511F594: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1511F598: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1511F59C: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
    // 0x1511F5A0: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x1511F5A4: sll         $t9, $t2, 16
    ctx->r25 = S32(ctx->r10 << 16);
    // 0x1511F5A8: sra         $t3, $t9, 16
    ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1511F5AC: bne         $v0, $at, L_1511F5FC
    if (ctx->r2 != ctx->r1) {
        // 0x1511F5B0: sw          $t3, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r11;
            goto L_1511F5FC;
    }
    // 0x1511F5B0: sw          $t3, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r11;
    // 0x1511F5B4: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x1511F5B8: addu        $a2, $a1, $t0
    ctx->r6 = ADD32(ctx->r5, ctx->r8);
    // 0x1511F5BC: slti        $at, $a2, 0xD
    ctx->r1 = SIGNED(ctx->r6) < 0XD ? 1 : 0;
    // 0x1511F5C0: beq         $at, $zero, L_1511F5D0
    if (ctx->r1 == 0) {
        // 0x1511F5C4: addiu       $a1, $zero, 0xD
        ctx->r5 = ADD32(0, 0XD);
            goto L_1511F5D0;
    }
    // 0x1511F5C4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x1511F5C8: b           L_1511F5D0
    // 0x1511F5CC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
        goto L_1511F5D0;
    // 0x1511F5CC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_1511F5D0:
    // 0x1511F5D0: slti        $at, $a1, 0x9
    ctx->r1 = SIGNED(ctx->r5) < 0X9 ? 1 : 0;
    // 0x1511F5D4: bne         $at, $zero, L_1511F644
    if (ctx->r1 != 0) {
        // 0x1511F5D8: nop
    
            goto L_1511F644;
    }
    // 0x1511F5D8: nop

    // 0x1511F5DC: addu        $a2, $a3, $t0
    ctx->r6 = ADD32(ctx->r7, ctx->r8);
    // 0x1511F5E0: slti        $at, $a2, 0xD
    ctx->r1 = SIGNED(ctx->r6) < 0XD ? 1 : 0;
    // 0x1511F5E4: beq         $at, $zero, L_1511F5F4
    if (ctx->r1 == 0) {
        // 0x1511F5E8: addiu       $a3, $zero, 0xD
        ctx->r7 = ADD32(0, 0XD);
            goto L_1511F5F4;
    }
    // 0x1511F5E8: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x1511F5EC: b           L_1511F644
    // 0x1511F5F0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
        goto L_1511F644;
    // 0x1511F5F0: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
L_1511F5F4:
    // 0x1511F5F4: b           L_1511F644
    // 0x1511F5F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_1511F644;
    // 0x1511F5F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1511F5FC:
    // 0x1511F5FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511F600: bne         $v0, $at, L_1511F644
    if (ctx->r2 != ctx->r1) {
        // 0x1511F604: lui         $t0, 0x800C
        ctx->r8 = S32(0X800C << 16);
            goto L_1511F644;
    }
    // 0x1511F604: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1511F608: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x1511F60C: subu        $a2, $a3, $t0
    ctx->r6 = SUB32(ctx->r7, ctx->r8);
    // 0x1511F610: blez        $a2, L_1511F620
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1511F614: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_1511F620;
    }
    // 0x1511F614: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1511F618: b           L_1511F620
    // 0x1511F61C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
        goto L_1511F620;
    // 0x1511F61C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
L_1511F620:
    // 0x1511F620: slti        $at, $a3, 0x4
    ctx->r1 = SIGNED(ctx->r7) < 0X4 ? 1 : 0;
    // 0x1511F624: beq         $at, $zero, L_1511F644
    if (ctx->r1 == 0) {
        // 0x1511F628: nop
    
            goto L_1511F644;
    }
    // 0x1511F628: nop

    // 0x1511F62C: subu        $a2, $a1, $t0
    ctx->r6 = SUB32(ctx->r5, ctx->r8);
    // 0x1511F630: blez        $a2, L_1511F640
    if (SIGNED(ctx->r6) <= 0) {
        // 0x1511F634: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_1511F640;
    }
    // 0x1511F634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1511F638: b           L_1511F644
    // 0x1511F63C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
        goto L_1511F644;
    // 0x1511F63C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_1511F640:
    // 0x1511F640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1511F644:
    // 0x1511F644: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1511F648: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x1511F64C: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x1511F650: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x1511F654: mflo        $t5
    ctx->r13 = lo;
    // 0x1511F658: nop

    // 0x1511F65C: nop

    // 0x1511F660: div         $zero, $t5, $t0
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r8)));
    // 0x1511F664: mflo        $t6
    ctx->r14 = lo;
    // 0x1511F668: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x1511F66C: bne         $t0, $zero, L_1511F678
    if (ctx->r8 != 0) {
        // 0x1511F670: nop
    
            goto L_1511F678;
    }
    // 0x1511F670: nop

    // 0x1511F674: break       7
    do_break(353498740);
L_1511F678:
    // 0x1511F678: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1511F67C: bne         $t0, $at, L_1511F690
    if (ctx->r8 != ctx->r1) {
        // 0x1511F680: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1511F690;
    }
    // 0x1511F680: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511F684: bne         $t5, $at, L_1511F690
    if (ctx->r13 != ctx->r1) {
        // 0x1511F688: nop
    
            goto L_1511F690;
    }
    // 0x1511F688: nop

    // 0x1511F68C: break       6
    do_break(353498764);
L_1511F690:
    // 0x1511F690: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1511F694: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x1511F698: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x1511F69C: mflo        $t2
    ctx->r10 = lo;
    // 0x1511F6A0: nop

    // 0x1511F6A4: nop

    // 0x1511F6A8: div         $zero, $t2, $t0
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r8)));
    // 0x1511F6AC: mflo        $t9
    ctx->r25 = lo;
    // 0x1511F6B0: subu        $t3, $t8, $t9
    ctx->r11 = SUB32(ctx->r24, ctx->r25);
    // 0x1511F6B4: bne         $t0, $zero, L_1511F6C0
    if (ctx->r8 != 0) {
        // 0x1511F6B8: nop
    
            goto L_1511F6C0;
    }
    // 0x1511F6B8: nop

    // 0x1511F6BC: break       7
    do_break(353498812);
L_1511F6C0:
    // 0x1511F6C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1511F6C4: bne         $t0, $at, L_1511F6D8
    if (ctx->r8 != ctx->r1) {
        // 0x1511F6C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1511F6D8;
    }
    // 0x1511F6C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511F6CC: bne         $t2, $at, L_1511F6D8
    if (ctx->r10 != ctx->r1) {
        // 0x1511F6D0: nop
    
            goto L_1511F6D8;
    }
    // 0x1511F6D0: nop

    // 0x1511F6D4: break       6
    do_break(353498836);
L_1511F6D8:
    // 0x1511F6D8: multu       $a3, $v1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1511F6DC: sh          $t3, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = ctx->r11;
    // 0x1511F6E0: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x1511F6E4: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x1511F6E8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x1511F6EC: andi        $t2, $a1, 0xFFFF
    ctx->r10 = ctx->r5 & 0XFFFF;
    // 0x1511F6F0: or          $t3, $t2, $t9
    ctx->r11 = ctx->r10 | ctx->r25;
    // 0x1511F6F4: mflo        $t5
    ctx->r13 = lo;
    // 0x1511F6F8: nop

    // 0x1511F6FC: nop

    // 0x1511F700: div         $zero, $t5, $t0
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r8)));
    // 0x1511F704: bne         $t0, $zero, L_1511F710
    if (ctx->r8 != 0) {
        // 0x1511F708: nop
    
            goto L_1511F710;
    }
    // 0x1511F708: nop

    // 0x1511F70C: break       7
    do_break(353498892);
L_1511F710:
    // 0x1511F710: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1511F714: bne         $t0, $at, L_1511F728
    if (ctx->r8 != ctx->r1) {
        // 0x1511F718: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1511F728;
    }
    // 0x1511F718: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511F71C: bne         $t5, $at, L_1511F728
    if (ctx->r13 != ctx->r1) {
        // 0x1511F720: nop
    
            goto L_1511F728;
    }
    // 0x1511F720: nop

    // 0x1511F724: break       6
    do_break(353498916);
L_1511F728:
    // 0x1511F728: mflo        $a2
    ctx->r6 = lo;
    // 0x1511F72C: subu        $t6, $t4, $a2
    ctx->r14 = SUB32(ctx->r12, ctx->r6);
    // 0x1511F730: lbu         $t5, 0x73($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X73);
    // 0x1511F734: sh          $t6, 0x150($a0)
    MEM_H(0X150, ctx->r4) = ctx->r14;
    // 0x1511F738: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1511F73C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x1511F740: and         $t4, $t5, $at
    ctx->r12 = ctx->r13 & ctx->r1;
    // 0x1511F744: andi        $t6, $t4, 0xFF
    ctx->r14 = ctx->r12 & 0XFF;
    // 0x1511F748: addu        $t1, $t7, $a2
    ctx->r9 = ADD32(ctx->r15, ctx->r6);
    // 0x1511F74C: sb          $t4, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r12;
    // 0x1511F750: or          $t7, $t6, $v0
    ctx->r15 = ctx->r14 | ctx->r2;
    // 0x1511F754: sh          $t1, 0x1F0($a0)
    MEM_H(0X1F0, ctx->r4) = ctx->r9;
    // 0x1511F758: sw          $t3, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r11;
    // 0x1511F75C: sb          $t7, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r15;
    // 0x1511F760: jr          $ra
    // 0x1511F764: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1511F764: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1513CBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513CBA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513CBA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513CBAC: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x1513CBB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513CBB4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513CBB8: sll         $t7, $t6, 9
    ctx->r15 = S32(ctx->r14 << 9);
    // 0x1513CBBC: bgez        $t7, L_1513CBCC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1513CBC0: nop
    
            goto L_1513CBCC;
    }
    // 0x1513CBC0: nop

    // 0x1513CBC4: b           L_1513CBCC
    // 0x1513CBC8: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
        goto L_1513CBCC;
    // 0x1513CBC8: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
L_1513CBCC:
    // 0x1513CBCC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1513CBD0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1513CBD4: lw          $t9, -0x60D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X60D4);
    // 0x1513CBD8: jalr        $t9
    // 0x1513CBDC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1513CBDC: nop

    after_0:
    // 0x1513CBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513CBE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513CBE8: jr          $ra
    // 0x1513CBEC: nop

    return;
    return;
    // 0x1513CBEC: nop

;}
RECOMP_FUNC void func_150C84F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C84F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C84F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C84FC: bnel        $a0, $zero, L_150C8510
    if (ctx->r4 != 0) {
        // 0x150C8500: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150C8510;
    }
    goto skip_0;
    // 0x150C8500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150C8504: jal         0x150C8350
    // 0x150C8508: nop

    func_150C8350(rdram, ctx);
        goto after_0;
    // 0x150C8508: nop

    after_0:
    // 0x150C850C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C8510:
    // 0x150C8510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C8514: jr          $ra
    // 0x150C8518: nop

    return;
    return;
    // 0x150C8518: nop

;}
RECOMP_FUNC void func_150EA11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EA11C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x150EA120: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x150EA124: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150EA128: lw          $a2, 0xCC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XCC);
    // 0x150EA12C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150EA130: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x150EA134: lwc1        $f12, 0xC8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150EA138: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x150EA13C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150EA140: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA144: lwc1        $f6, 0x1418($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1418);
    // 0x150EA148: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x150EA14C: sb          $t6, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r14;
    // 0x150EA150: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x150EA154: addiu       $t7, $zero, 0xC01
    ctx->r15 = ADD32(0, 0XC01);
    // 0x150EA158: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x150EA15C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150EA160: addiu       $t0, $zero, 0x1207
    ctx->r8 = ADD32(0, 0X1207);
    // 0x150EA164: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x150EA168: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x150EA16C: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x150EA170: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150EA174: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x150EA178: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x150EA17C: sh          $t7, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r15;
    // 0x150EA180: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x150EA184: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150EA188: sb          $zero, 0x62($sp)
    MEM_B(0X62, ctx->r29) = 0;
    // 0x150EA18C: sb          $zero, 0x61($sp)
    MEM_B(0X61, ctx->r29) = 0;
    // 0x150EA190: sb          $zero, 0x60($sp)
    MEM_B(0X60, ctx->r29) = 0;
    // 0x150EA194: sb          $zero, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = 0;
    // 0x150EA198: sb          $zero, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = 0;
    // 0x150EA19C: sb          $zero, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = 0;
    // 0x150EA1A0: sb          $zero, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = 0;
    // 0x150EA1A4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x150EA1A8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x150EA1AC: sb          $t9, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r25;
    // 0x150EA1B0: sh          $zero, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = 0;
    // 0x150EA1B4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x150EA1B8: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x150EA1BC: sb          $t1, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r9;
    // 0x150EA1C0: sb          $t2, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r10;
    // 0x150EA1C4: sb          $t3, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r11;
    // 0x150EA1C8: sb          $t4, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r12;
    // 0x150EA1CC: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x150EA1D0: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x150EA1D4: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x150EA1D8: sh          $t5, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r13;
    // 0x150EA1DC: sh          $t6, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r14;
    // 0x150EA1E0: sb          $zero, 0x20($sp)
    MEM_B(0X20, ctx->r29) = 0;
    // 0x150EA1E4: sb          $zero, 0x21($sp)
    MEM_B(0X21, ctx->r29) = 0;
    // 0x150EA1E8: sb          $zero, 0x34($sp)
    MEM_B(0X34, ctx->r29) = 0;
    // 0x150EA1EC: sb          $zero, 0x35($sp)
    MEM_B(0X35, ctx->r29) = 0;
    // 0x150EA1F0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x150EA1F4: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x150EA1F8: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150EA1FC: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x150EA200: lwc1        $f18, 0x74($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X74);
    // 0x150EA204: addiu       $t7, $sp, 0x78
    ctx->r15 = ADD32(ctx->r29, 0X78);
    // 0x150EA208: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150EA20C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150EA210: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x150EA214: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150EA218: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x150EA21C: lwc1        $f16, 0x74($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X74);
    // 0x150EA220: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150EA224: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150EA228: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x150EA22C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150EA230: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x150EA234: lwc1        $f10, 0x74($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X74);
    // 0x150EA238: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150EA23C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150EA240: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    // 0x150EA244: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x150EA248: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150EA24C: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x150EA250: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x150EA254: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x150EA258: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150EA25C: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150EA260: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150EA264: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150EA268: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x150EA26C: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150EA270: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x150EA274: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x150EA278: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150EA27C: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150EA280: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x150EA284: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x150EA288: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x150EA28C: mul.s       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x150EA290: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x150EA294: jal         0x150ADA20
    // 0x150EA298: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150EA298: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x150EA29C: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150EA2A0: beq         $t1, $zero, L_150EA2B4
    if (ctx->r9 == 0) {
        // 0x150EA2A4: nop
    
            goto L_150EA2B4;
    }
    // 0x150EA2A4: nop

    // 0x150EA2A8: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x150EA2AC: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x150EA2B0: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_150EA2B4:
    // 0x150EA2B4: jal         0x150ADA20
    // 0x150EA2B8: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150EA2B8: nop

    after_1:
    // 0x150EA2BC: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x150EA2C0: beq         $t4, $zero, L_150EA2D4
    if (ctx->r12 == 0) {
        // 0x150EA2C4: nop
    
            goto L_150EA2D4;
    }
    // 0x150EA2C4: nop

    // 0x150EA2C8: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x150EA2CC: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x150EA2D0: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
L_150EA2D4:
    // 0x150EA2D4: jal         0x150ADA20
    // 0x150EA2D8: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150EA2D8: nop

    after_2:
    // 0x150EA2DC: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x150EA2E0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150EA2E4: mfhi        $t9
    ctx->r25 = hi;
    // 0x150EA2E8: addiu       $t8, $t9, 0x32
    ctx->r24 = ADD32(ctx->r25, 0X32);
    // 0x150EA2EC: jal         0x150ADA20
    // 0x150EA2F0: sh          $t8, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150EA2F0: sh          $t8, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r24;
    after_3:
    // 0x150EA2F4: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150EA2F8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150EA2FC: mfhi        $t7
    ctx->r15 = hi;
    // 0x150EA300: addiu       $t0, $t7, 0x64
    ctx->r8 = ADD32(ctx->r15, 0X64);
    // 0x150EA304: jal         0x150ADA68
    // 0x150EA308: sb          $t0, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r8;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150EA308: sb          $t0, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r8;
    after_4:
    // 0x150EA30C: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x150EA310: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150EA314: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x150EA318: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EA31C: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150EA320: add.s       $f2, $f18, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x150EA324: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x150EA328: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x150EA32C: jal         0x150ADA20
    // 0x150EA330: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150EA330: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x150EA334: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150EA338: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150EA33C: mfhi        $t1
    ctx->r9 = hi;
    // 0x150EA340: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x150EA344: jal         0x150ADA20
    // 0x150EA348: sb          $t2, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150EA348: sb          $t2, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r10;
    after_6:
    // 0x150EA34C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150EA350: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150EA354: mfhi        $t3
    ctx->r11 = hi;
    // 0x150EA358: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x150EA35C: jal         0x150ADA68
    // 0x150EA360: sb          $t4, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r12;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150EA360: sb          $t4, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r12;
    after_7:
    // 0x150EA364: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150EA368: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EA36C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA370: lwc1        $f10, 0x141C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X141C);
    // 0x150EA374: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EA378: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150EA37C: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x150EA380: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x150EA384: jal         0x150ADA68
    // 0x150EA388: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150EA388: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x150EA38C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x150EA390: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EA394: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA398: lwc1        $f10, 0x1420($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1420);
    // 0x150EA39C: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EA3A0: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150EA3A4: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x150EA3A8: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x150EA3AC: jal         0x150ADA20
    // 0x150EA3B0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150EA3B0: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x150EA3B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150EA3B8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150EA3BC: mfhi        $t5
    ctx->r13 = hi;
    // 0x150EA3C0: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x150EA3C4: jal         0x150ADA20
    // 0x150EA3C8: sb          $t6, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150EA3C8: sb          $t6, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r14;
    after_10:
    // 0x150EA3CC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150EA3D0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150EA3D4: mfhi        $t9
    ctx->r25 = hi;
    // 0x150EA3D8: addiu       $t8, $t9, 0x4
    ctx->r24 = ADD32(ctx->r25, 0X4);
    // 0x150EA3DC: jal         0x150ADA68
    // 0x150EA3E0: sb          $t8, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r24;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150EA3E0: sb          $t8, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r24;
    after_11:
    // 0x150EA3E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA3E8: lwc1        $f6, 0x1424($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1424);
    // 0x150EA3EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA3F0: lwc1        $f10, 0x1428($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1428);
    // 0x150EA3F4: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EA3F8: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150EA3FC: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x150EA400: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x150EA404: jal         0x150ADA68
    // 0x150EA408: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150EA408: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x150EA40C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA410: lwc1        $f6, 0x142C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X142C);
    // 0x150EA414: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA418: lwc1        $f10, 0x1430($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1430);
    // 0x150EA41C: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EA420: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150EA424: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x150EA428: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x150EA42C: jal         0x150ADA68
    // 0x150EA430: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150EA430: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_13:
    // 0x150EA434: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150EA438: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EA43C: lui         $at, 0x4292
    ctx->r1 = S32(0X4292 << 16);
    // 0x150EA440: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EA444: mul.s       $f16, $f0, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150EA448: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA44C: lwc1        $f18, 0x1434($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1434);
    // 0x150EA450: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x150EA454: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x150EA458: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x150EA45C: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x150EA460: mul.s       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x150EA464: jal         0x151303BC
    // 0x150EA468: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    func_151303BC(rdram, ctx);
        goto after_14;
    // 0x150EA468: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x150EA46C: beq         $v0, $zero, L_150EA480
    if (ctx->r2 == 0) {
        // 0x150EA470: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150EA480;
    }
    // 0x150EA470: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150EA474: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x150EA478: jal         0x10022EC0
    // 0x150EA47C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x150EA47C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_15:
L_150EA480:
    // 0x150EA480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150EA484: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x150EA488: jr          $ra
    // 0x150EA48C: nop

    return;
    return;
    // 0x150EA48C: nop

;}
RECOMP_FUNC void func_150E971C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E971C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150E9720: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150E9724: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150E9728: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150E972C: jal         0x151337C0
    // 0x150E9730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151337C0(rdram, ctx);
        goto after_0;
    // 0x150E9730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x150E9734: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150E9738: lwc1        $f6, 0x170($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X170);
    // 0x150E973C: addiu       $v1, $s0, 0x170
    ctx->r3 = ADD32(ctx->r16, 0X170);
    // 0x150E9740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150E9744: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150E9748: nop

    // 0x150E974C: bc1f        L_150E9874
    if (!c1cs) {
        // 0x150E9750: nop
    
            goto L_150E9874;
    }
    // 0x150E9750: nop

    // 0x150E9754: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x150E9758: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x150E975C: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    // 0x150E9760: bne         $t7, $at, L_150E986C
    if (ctx->r15 != ctx->r1) {
        // 0x150E9764: nop
    
            goto L_150E986C;
    }
    // 0x150E9764: nop

    // 0x150E9768: jal         0x150ADA68
    // 0x150E976C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150E976C: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    after_1:
    // 0x150E9770: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150E9774: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150E9778: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x150E977C: ori         $t9, $zero, 0x9701
    ctx->r25 = 0 | 0X9701;
    // 0x150E9780: mul.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150E9784: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x150E9788: sb          $t8, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r24;
    // 0x150E978C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x150E9790: sh          $t0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r8;
    // 0x150E9794: lui         $t7, 0x3B
    ctx->r15 = S32(0X3B << 16);
    // 0x150E9798: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150E979C: add.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x150E97A0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150E97A4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150E97A8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150E97AC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150E97B0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150E97B4: ori         $t7, $t7, 0x3
    ctx->r15 = ctx->r15 | 0X3;
    // 0x150E97B8: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x150E97BC: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x150E97C0: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x150E97C4: sb          $zero, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = 0;
    // 0x150E97C8: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x150E97CC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150E97D0: sb          $t1, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r9;
    // 0x150E97D4: sb          $t2, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r10;
    // 0x150E97D8: sb          $t3, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r11;
    // 0x150E97DC: sb          $t4, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r12;
    // 0x150E97E0: sb          $t5, 0x68($sp)
    MEM_B(0X68, ctx->r29) = ctx->r13;
    // 0x150E97E4: sb          $t6, 0x69($sp)
    MEM_B(0X69, ctx->r29) = ctx->r14;
    // 0x150E97E8: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x150E97EC: sb          $zero, 0x6A($sp)
    MEM_B(0X6A, ctx->r29) = 0;
    // 0x150E97F0: sb          $t8, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r24;
    // 0x150E97F4: sh          $t9, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r25;
    // 0x150E97F8: sh          $t0, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r8;
    // 0x150E97FC: jal         0x150ADA20
    // 0x150E9800: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150E9800: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x150E9804: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150E9808: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x150E980C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150E9810: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150E9814: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E9818: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150E981C: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150E9820: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x150E9824: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150E9828: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x150E982C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E9830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E9834: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x150E9838: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150E983C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150E9840: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150E9844: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x150E9848: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x150E984C: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x150E9850: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x150E9854: lbu         $t2, 0xC($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XC);
    // 0x150E9858: addiu       $a3, $v1, 0x8
    ctx->r7 = ADD32(ctx->r3, 0X8);
    // 0x150E985C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x150E9860: lbu         $t3, 0x1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1);
    // 0x150E9864: jal         0x1513C73C
    // 0x150E9868: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    func_1513C73C(rdram, ctx);
        goto after_3;
    // 0x150E9868: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    after_3:
L_150E986C:
    // 0x150E986C: b           L_150E9874
    // 0x150E9870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150E9874;
    // 0x150E9870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E9874:
    // 0x150E9874: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150E9878: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150E987C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x150E9880: jr          $ra
    // 0x150E9884: nop

    return;
    return;
    // 0x150E9884: nop

;}
RECOMP_FUNC void func_15190550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15190550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15190554: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15190558: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x1519055C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15190560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15190564: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15190568: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x1519056C: bne         $a2, $at, L_15190588
    if (ctx->r6 != ctx->r1) {
        // 0x15190570: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_15190588;
    }
    // 0x15190570: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x15190574: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15190578: jal         0x151D33FC
    // 0x1519057C: sb          $a2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r6;
    func_151D33FC(rdram, ctx);
        goto after_0;
    // 0x1519057C: sb          $a2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r6;
    after_0:
    // 0x15190580: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15190584: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
L_15190588:
    // 0x15190588: lbu         $t7, 0x8A($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X8A);
    // 0x1519058C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x15190590: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15190594: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x15190598: lw          $v0, -0x297C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X297C);
    // 0x1519059C: beql        $v0, $zero, L_151905B0
    if (ctx->r2 == 0) {
        // 0x151905A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151905B0;
    }
    goto skip_0;
    // 0x151905A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151905A4: jalr        $v0
    // 0x151905A8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x151905A8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x151905AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151905B0:
    // 0x151905B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151905B4: jr          $ra
    // 0x151905B8: nop

    return;
    return;
    // 0x151905B8: nop

;}
RECOMP_FUNC void func_1515D5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D5AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1515D5B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1515D5B4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x1515D5B8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x1515D5BC: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x1515D5C0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x1515D5C4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x1515D5C8: lbu         $t1, 0x57($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X57);
    // 0x1515D5CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1515D5D0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1515D5D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1515D5D8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1515D5DC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1515D5E0: jal         0x1515D5F8
    // 0x1515D5E4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_1515D5F8(rdram, ctx);
        goto after_0;
    // 0x1515D5E4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x1515D5E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1515D5EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1515D5F0: jr          $ra
    // 0x1515D5F4: nop

    return;
    return;
    // 0x1515D5F4: nop

;}
RECOMP_FUNC void func_150B54A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B54A8: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x150B54AC: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x150B54B0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x150B54B4: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150B54B8: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x150B54BC: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x150B54C0: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x150B54C4: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x150B54C8: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x150B54CC: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x150B54D0: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x150B54D4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x150B54D8: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x150B54DC: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x150B54E0: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x150B54E4: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x150B54E8: lw          $s6, 0x28($s4)
    ctx->r22 = MEM_W(ctx->r20, 0X28);
    // 0x150B54EC: addiu       $s1, $s4, 0x28
    ctx->r17 = ADD32(ctx->r20, 0X28);
    // 0x150B54F0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150B54F4: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x150B54F8: beq         $t6, $zero, L_150B5524
    if (ctx->r14 == 0) {
        // 0x150B54FC: nop
    
            goto L_150B5524;
    }
    // 0x150B54FC: nop

    // 0x150B5500: lbu         $t7, 0x4($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X4);
    // 0x150B5504: lbu         $t8, 0x3B($s6)
    ctx->r24 = MEM_BU(ctx->r22, 0X3B);
    // 0x150B5508: bne         $t7, $t8, L_150B5524
    if (ctx->r15 != ctx->r24) {
        // 0x150B550C: nop
    
            goto L_150B5524;
    }
    // 0x150B550C: nop

    // 0x150B5510: lbu         $t9, 0x4($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X4);
    // 0x150B5514: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150B5518: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150B551C: bne         $t9, $at, L_150B552C
    if (ctx->r25 != ctx->r1) {
        // 0x150B5520: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_150B552C;
    }
    // 0x150B5520: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
L_150B5524:
    // 0x150B5524: b           L_150B5784
    // 0x150B5528: sh          $t0, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r8;
        goto L_150B5784;
    // 0x150B5528: sh          $t0, 0xE($s4)
    MEM_H(0XE, ctx->r20) = ctx->r8;
L_150B552C:
    // 0x150B552C: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x150B5530: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x150B5534: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150B5538: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150B553C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150B5540: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150B5544: jal         0x1502EA98
    // 0x150B5548: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1502EA98(rdram, ctx);
        goto after_0;
    // 0x150B5548: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x150B554C: jal         0x150ADA68
    // 0x150B5550: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150B5550: nop

    after_1:
    // 0x150B5554: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150B5558: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150B555C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B5560: lwc1        $f4, -0x3E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3E0);
    // 0x150B5564: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B5568: lwc1        $f6, -0x3DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3DC);
    // 0x150B556C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150B5570: lwc1        $f16, -0x165C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150B5574: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150B5578: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150B557C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150B5580: addiu       $s5, $zero, 0x65
    ctx->r21 = ADD32(0, 0X65);
    // 0x150B5584: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150B5588: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150B558C: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150B5590: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x150B5594: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150B5598: c.lt.s      $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f20.fl < ctx->f8.fl;
    // 0x150B559C: nop

    // 0x150B55A0: bc1f        L_150B56C0
    if (!c1cs) {
        // 0x150B55A4: nop
    
            goto L_150B56C0;
    }
    // 0x150B55A4: nop

    // 0x150B55A8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150B55AC: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x150B55B0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150B55B4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x150B55B8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150B55BC: addiu       $fp, $sp, 0x94
    ctx->r30 = ADD32(ctx->r29, 0X94);
    // 0x150B55C0: addiu       $s7, $zero, 0x7E
    ctx->r23 = ADD32(0, 0X7E);
    // 0x150B55C4: addiu       $t3, $zero, 0xBA
    ctx->r11 = ADD32(0, 0XBA);
L_150B55C8:
    // 0x150B55C8: addiu       $t4, $zero, 0xD2
    ctx->r12 = ADD32(0, 0XD2);
    // 0x150B55CC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150B55D0: sb          $t3, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r11;
    // 0x150B55D4: sb          $t4, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r12;
    // 0x150B55D8: jal         0x150ADA20
    // 0x150B55DC: sb          $t5, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150B55DC: sb          $t5, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r13;
    after_2:
    // 0x150B55E0: divu        $zero, $v0, $s7
    lo = S32(U32(ctx->r2) / U32(ctx->r23)); hi = S32(U32(ctx->r2) % U32(ctx->r23));
    // 0x150B55E4: mfhi        $t6
    ctx->r14 = hi;
    // 0x150B55E8: addiu       $t7, $t6, 0x82
    ctx->r15 = ADD32(ctx->r14, 0X82);
    // 0x150B55EC: bne         $s7, $zero, L_150B55F8
    if (ctx->r23 != 0) {
        // 0x150B55F0: nop
    
            goto L_150B55F8;
    }
    // 0x150B55F0: nop

    // 0x150B55F4: break       7
    do_break(353064436);
L_150B55F8:
    // 0x150B55F8: sb          $t7, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r15;
    // 0x150B55FC: jal         0x150ADA20
    // 0x150B5600: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150B5600: nop

    after_3:
    // 0x150B5604: jal         0x150ADA20
    // 0x150B5608: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150B5608: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_4:
    // 0x150B560C: jal         0x150ADA20
    // 0x150B5610: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150B5610: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x150B5614: jal         0x150ADA68
    // 0x150B5618: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150B5618: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_6:
    // 0x150B561C: divu        $zero, $s0, $s5
    lo = S32(U32(ctx->r16) / U32(ctx->r21)); hi = S32(U32(ctx->r16) % U32(ctx->r21));
    // 0x150B5620: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150B5624: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x150B5628: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150B562C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x150B5630: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150B5634: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    // 0x150B5638: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150B563C: add.s       $f16, $f10, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x150B5640: sw          $fp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r30;
    // 0x150B5644: mfhi        $a2
    ctx->r6 = hi;
    // 0x150B5648: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x150B564C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x150B5650: lbu         $t6, 0xC($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0XC);
    // 0x150B5654: andi        $a3, $s3, 0xF
    ctx->r7 = ctx->r19 & 0XF;
    // 0x150B5658: addiu       $a3, $a3, 0xF
    ctx->r7 = ADD32(ctx->r7, 0XF);
    // 0x150B565C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150B5660: lbu         $t7, 0x1($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X1);
    // 0x150B5664: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150B5668: addiu       $a2, $a2, -0x3F
    ctx->r6 = ADD32(ctx->r6, -0X3F);
    // 0x150B566C: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x150B5670: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150B5674: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x150B5678: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150B567C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x150B5680: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150B5684: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150B5688: bne         $s5, $zero, L_150B5694
    if (ctx->r21 != 0) {
        // 0x150B568C: nop
    
            goto L_150B5694;
    }
    // 0x150B568C: nop

    // 0x150B5690: break       7
    do_break(353064592);
L_150B5694:
    // 0x150B5694: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x150B5698: jal         0x15107700
    // 0x150B569C: nop

    func_15107700(rdram, ctx);
        goto after_7;
    // 0x150B569C: nop

    after_7:
    // 0x150B56A0: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150B56A4: sub.s       $f18, $f6, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x150B56A8: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x150B56AC: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150B56B0: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x150B56B4: nop

    // 0x150B56B8: bc1tl       L_150B55C8
    if (c1cs) {
        // 0x150B56BC: addiu       $t3, $zero, 0xBA
        ctx->r11 = ADD32(0, 0XBA);
            goto L_150B55C8;
    }
    goto skip_0;
    // 0x150B56BC: addiu       $t3, $zero, 0xBA
    ctx->r11 = ADD32(0, 0XBA);
    skip_0:
L_150B56C0:
    // 0x150B56C0: jal         0x150ADA68
    // 0x150B56C4: addiu       $s5, $zero, 0x65
    ctx->r21 = ADD32(0, 0X65);
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150B56C4: addiu       $s5, $zero, 0x65
    ctx->r21 = ADD32(0, 0X65);
    after_8:
    // 0x150B56C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B56CC: lwc1        $f8, -0x3D8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D8);
    // 0x150B56D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B56D4: lwc1        $f10, -0x3D4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3D4);
    // 0x150B56D8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150B56DC: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150B56E0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150B56E4: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150B56E8: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150B56EC: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x150B56F0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150B56F4: swc1        $f8, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f8.u32l;
    // 0x150B56F8: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150B56FC: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x150B5700: nop

    // 0x150B5704: bc1fl       L_150B5788
    if (!c1cs) {
        // 0x150B5708: lw          $ra, 0x7C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X7C);
            goto L_150B5788;
    }
    goto skip_1;
    // 0x150B5708: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    skip_1:
L_150B570C:
    // 0x150B570C: jal         0x150ADA20
    // 0x150B5710: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150B5710: nop

    after_9:
    // 0x150B5714: jal         0x150ADA20
    // 0x150B5718: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150B5718: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_10:
    // 0x150B571C: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150B5720: mfhi        $a2
    ctx->r6 = hi;
    // 0x150B5724: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x150B5728: lbu         $t2, 0x1($s4)
    ctx->r10 = MEM_BU(ctx->r20, 0X1);
    // 0x150B572C: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150B5730: addiu       $a2, $a2, -0x3F
    ctx->r6 = ADD32(ctx->r6, -0X3F);
    // 0x150B5734: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x150B5738: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150B573C: lbu         $a3, 0xC($s4)
    ctx->r7 = MEM_BU(ctx->r20, 0XC);
    // 0x150B5740: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x150B5744: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150B5748: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x150B574C: bne         $s5, $zero, L_150B5758
    if (ctx->r21 != 0) {
        // 0x150B5750: nop
    
            goto L_150B5758;
    }
    // 0x150B5750: nop

    // 0x150B5754: break       7
    do_break(353064788);
L_150B5758:
    // 0x150B5758: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150B575C: jal         0x15107B78
    // 0x150B5760: nop

    func_15107B78(rdram, ctx);
        goto after_11;
    // 0x150B5760: nop

    after_11:
    // 0x150B5764: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150B5768: sub.s       $f18, $f6, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x150B576C: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x150B5770: lwc1        $f10, 0xC($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150B5774: c.lt.s      $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f20.fl < ctx->f10.fl;
    // 0x150B5778: nop

    // 0x150B577C: bc1t        L_150B570C
    if (c1cs) {
        // 0x150B5780: nop
    
            goto L_150B570C;
    }
    // 0x150B5780: nop

L_150B5784:
    // 0x150B5784: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
L_150B5788:
    // 0x150B5788: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x150B578C: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x150B5790: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x150B5794: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x150B5798: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x150B579C: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x150B57A0: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x150B57A4: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x150B57A8: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x150B57AC: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x150B57B0: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x150B57B4: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x150B57B8: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x150B57BC: jr          $ra
    // 0x150B57C0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x150B57C0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_15009B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009B84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15009B88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15009B8C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15009B90: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x15009B94: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15009B98: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15009B9C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15009BA0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15009BA4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15009BA8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15009BAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15009BB0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x15009BB4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x15009BB8: jal         0x15162740
    // 0x15009BBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15162740(rdram, ctx);
        goto after_0;
    // 0x15009BBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x15009BC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15009BC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15009BC8: jr          $ra
    // 0x15009BCC: nop

    return;
    return;
    // 0x15009BCC: nop

;}
RECOMP_FUNC void func_15074C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074C00: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x15074C04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15074C08: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x15074C0C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x15074C10: lbu         $t6, 0x239($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X239);
    // 0x15074C14: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15074C18: andi        $t7, $t6, 0x7F
    ctx->r15 = ctx->r14 & 0X7F;
    // 0x15074C1C: bnel        $t7, $at, L_15074C74
    if (ctx->r15 != ctx->r1) {
        // 0x15074C20: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15074C74;
    }
    goto skip_0;
    // 0x15074C20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x15074C24: jal         0x1504715C
    // 0x15074C28: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_1504715C(rdram, ctx);
        goto after_0;
    // 0x15074C28: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x15074C2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15074C30: lwc1        $f4, -0x3D40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3D40);
    // 0x15074C34: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15074C38: lwc1        $f6, -0x3D3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3D3C);
    // 0x15074C3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15074C40: lwc1        $f8, -0x3D38($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D38);
    // 0x15074C44: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15074C48: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15074C4C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x15074C50: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x15074C54: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x15074C58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15074C5C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15074C60: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    // 0x15074C64: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x15074C68: jal         0x150C04C0
    // 0x15074C6C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    func_150C04C0(rdram, ctx);
        goto after_1;
    // 0x15074C6C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x15074C70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15074C74:
    // 0x15074C74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15074C78: jr          $ra
    // 0x15074C7C: nop

    return;
    return;
    // 0x15074C7C: nop

;}
RECOMP_FUNC void func_150A4FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_150A3BAC:
    // 0x150A4FA0: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x150A4FA4: mtc1        $s1, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r17;
    // 0x150A4FA8: mtc1        $s2, $f2
    ctx->f2.u32l = ctx->r18;
    // 0x150A4FAC: mtc1        $s3, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r19;
    // 0x150A4FB0: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x150A4FB4: mtc1        $s5, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r21;
    // 0x150A4FB8: mtc1        $s6, $f6
    ctx->f6.u32l = ctx->r22;
    // 0x150A4FBC: mtc1        $s7, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r23;
    // 0x150A4FC0: mtc1        $fp, $f8
    ctx->f8.u32l = ctx->r30;
    // 0x150A4FC4: mtc1        $gp, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r28;
    // 0x150A4FC8: mtc1        $ra, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r31;
    // 0x150A4FCC: lui         $ra, 0x150A
    ctx->r31 = S32(0X150A << 16);
    // 0x150A4FD0: addiu       $ra, $ra, 0x5070
    ctx->r31 = ADD32(ctx->r31, 0X5070);
    // 0x150A4FD4: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x150A4FD8: addiu       $t2, $t2, 0x3300
    ctx->r10 = ADD32(ctx->r10, 0X3300);
    // 0x150A4FDC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x150A4FE0: addiu       $a2, $a2, -0x3D30
    ctx->r6 = ADD32(ctx->r6, -0X3D30);
    // 0x150A4FE4: addiu       $a3, $a2, 0x4F4C
    ctx->r7 = ADD32(ctx->r6, 0X4F4C);
    // 0x150A4FE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A4FEC: addiu       $gp, $zero, -0x1
    ctx->r28 = ADD32(0, -0X1);
    // 0x150A4FF0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150A4FF4: lbu         $t9, 0x35DC($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35DC);
    // 0x150A4FF8: addiu       $t9, $t9, -0x1
    ctx->r25 = ADD32(ctx->r25, -0X1);
    // 0x150A4FFC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
L_150A5000:
    // 0x150A5000: addiu       $gp, $gp, 0x1
    ctx->r28 = ADD32(ctx->r28, 0X1);
    // 0x150A5004: beq         $a3, $a2, L_150A5080
    if (ctx->r7 == ctx->r6) {
        // 0x150A5008: mfc1        $t9, $f16
        ctx->r25 = (int32_t)ctx->f16.u32l;
            goto L_150A5080;
    }
    // 0x150A5008: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x150A500C: beq         $gp, $t9, L_150A5000
    if (ctx->r28 == ctx->r25) {
        // 0x150A5010: addiu       $a2, $a2, 0x32C
        ctx->r6 = ADD32(ctx->r6, 0X32C);
            goto L_150A5000;
    }
    // 0x150A5010: addiu       $a2, $a2, 0x32C
    ctx->r6 = ADD32(ctx->r6, 0X32C);
    // 0x150A5014: lw          $t9, -0x32C($a2)
    ctx->r25 = MEM_W(ctx->r6, -0X32C);
    // 0x150A5018: beq         $t9, $zero, L_150A5000
    if (ctx->r25 == 0) {
        // 0x150A501C: nop
    
            goto L_150A5000;
    }
    // 0x150A501C: nop

    // 0x150A5020: lw          $t9, -0x234($a2)
    ctx->r25 = MEM_W(ctx->r6, -0X234);
    // 0x150A5024: lw          $t0, -0xC8($a2)
    ctx->r8 = MEM_W(ctx->r6, -0XC8);
    // 0x150A5028: andi        $t9, $t9, 0x4000
    ctx->r25 = ctx->r25 & 0X4000;
    // 0x150A502C: beq         $t9, $zero, L_150A5000
    if (ctx->r25 == 0) {
        // 0x150A5030: lw          $t4, -0xC4($a2)
        ctx->r12 = MEM_W(ctx->r6, -0XC4);
            goto L_150A5000;
    }
    // 0x150A5030: lw          $t4, -0xC4($a2)
    ctx->r12 = MEM_W(ctx->r6, -0XC4);
    // 0x150A5034: lbu         $t8, -0x328($a2)
    ctx->r24 = MEM_BU(ctx->r6, -0X328);
    // 0x150A5038: beq         $t0, $zero, L_150A5000
    if (ctx->r8 == 0) {
        // 0x150A503C: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_150A5000;
    }
    // 0x150A503C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150A5040: addiu       $t9, $t9, 0x5918
    ctx->r25 = ADD32(ctx->r25, 0X5918);
    // 0x150A5044: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x150A5048: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x150A504C: lhu         $t1, 0x0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X0);
    // 0x150A5050: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150A5054: addiu       $t3, $t3, 0x6070
    ctx->r11 = ADD32(ctx->r11, 0X6070);
    // 0x150A5058: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150A505C: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x150A5060: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x150A5064: or          $t8, $zero, $zero
    ctx->r24 = 0 | 0;
    // 0x150A5068: beq         $t4, $zero, L_150A5000
    if (ctx->r12 == 0) {
        // 0x150A506C: nop
    
            goto L_150A5000;
    }
    // 0x150A506C: nop

    // 0x150A5070: beq         $t8, $t1, L_150A5000
    if (ctx->r24 == ctx->r9) {
        // 0x150A5074: nop
    
            goto L_150A5000;
    }
    // 0x150A5074: nop

    // 0x150A5078: j           L_150A3BAC
    // 0x150A507C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    static_5_150A3BAC(rdram, ctx);
    return;
    // 0x150A507C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_150A5080:
    // 0x150A5080: mfc1        $s0, $f0
    ctx->r16 = (int32_t)ctx->f0.u32l;
    // 0x150A5084: mfc1        $s1, $f1
    ctx->r17 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x150A5088: mfc1        $s2, $f2
    ctx->r18 = (int32_t)ctx->f2.u32l;
    // 0x150A508C: mfc1        $s3, $f3
    ctx->r19 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x150A5090: mfc1        $s4, $f4
    ctx->r20 = (int32_t)ctx->f4.u32l;
    // 0x150A5094: mfc1        $s5, $f5
    ctx->r21 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x150A5098: mfc1        $s6, $f6
    ctx->r22 = (int32_t)ctx->f6.u32l;
    // 0x150A509C: mfc1        $s7, $f7
    ctx->r23 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x150A50A0: mfc1        $fp, $f8
    ctx->r30 = (int32_t)ctx->f8.u32l;
    // 0x150A50A4: mfc1        $gp, $f9
    ctx->r28 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x150A50A8: mfc1        $ra, $f15
    ctx->r31 = (int32_t)ctx->f_odd[(15 - 1) * 2];
    // 0x150A50AC: jr          $ra
    // 0x150A50B0: nop

    return;
    return;
    // 0x150A50B0: nop

;}
RECOMP_FUNC void func_1515D6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D6C8: jr          $ra
    // 0x1515D6CC: nop

    return;
    return;
    // 0x1515D6CC: nop

;}
RECOMP_FUNC void func_1506BA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506BA4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1506BA50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506BA54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1506BA58: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1506BA5C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506BA60: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x1506BA64: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506BA68: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506BA6C: bne         $v0, $zero, L_1506BA84
    if (ctx->r2 != 0) {
        // 0x1506BA70: nop
    
            goto L_1506BA84;
    }
    // 0x1506BA70: nop

    // 0x1506BA74: jal         0x100109D0
    // 0x1506BA78: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_100109D0(rdram, ctx);
        goto after_0;
    // 0x1506BA78: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506BA7C: b           L_1506BACC
    // 0x1506BA80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506BACC;
    // 0x1506BA80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BA84:
    // 0x1506BA84: lw          $a1, 0x154C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X154C);
    // 0x1506BA88: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1506BA8C: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x1506BA90: lw          $t6, 0x318($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X318);
    // 0x1506BA94: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x1506BA98: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    // 0x1506BA9C: bne         $t6, $zero, L_1506BAC0
    if (ctx->r14 != 0) {
        // 0x1506BAA0: addiu       $t8, $zero, 0x9C4
        ctx->r24 = ADD32(0, 0X9C4);
            goto L_1506BAC0;
    }
    // 0x1506BAA0: addiu       $t8, $zero, 0x9C4
    ctx->r24 = ADD32(0, 0X9C4);
    // 0x1506BAA4: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x1506BAA8: addiu       $a2, $zero, 0x6D60
    ctx->r6 = ADD32(0, 0X6D60);
    // 0x1506BAAC: lh          $a3, 0x22($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X22);
    // 0x1506BAB0: jal         0x10010154
    // 0x1506BAB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_10010154(rdram, ctx);
        goto after_1;
    // 0x1506BAB4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x1506BAB8: b           L_1506BACC
    // 0x1506BABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1506BACC;
    // 0x1506BABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BAC0:
    // 0x1506BAC0: jal         0x10010154
    // 0x1506BAC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_10010154(rdram, ctx);
        goto after_2;
    // 0x1506BAC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x1506BAC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506BACC:
    // 0x1506BACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1506BAD0: jr          $ra
    // 0x1506BAD4: nop

    return;
    return;
    // 0x1506BAD4: nop

;}
RECOMP_FUNC void func_1517EFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517EFAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1517EFB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1517EFB4: jal         0x1517EF00
    // 0x1517EFB8: nop

    func_1517EF00(rdram, ctx);
        goto after_0;
    // 0x1517EFB8: nop

    after_0:
    // 0x1517EFBC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1517EFC0: bne         $v0, $at, L_1517EFD0
    if (ctx->r2 != ctx->r1) {
        // 0x1517EFC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1517EFD0;
    }
    // 0x1517EFC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1517EFC8: b           L_1517EFD4
    // 0x1517EFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1517EFD4;
    // 0x1517EFCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1517EFD0:
    // 0x1517EFD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1517EFD4:
    // 0x1517EFD4: jr          $ra
    // 0x1517EFD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1517EFD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151451F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151451F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151451F4: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x151451F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151451FC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x15145200: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x15145204: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x15145208: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x1514520C: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x15145210: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15145214: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15145218: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514521C: jal         0x151452C4
    // 0x15145220: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_151452C4(rdram, ctx);
        goto after_0;
    // 0x15145220: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x15145224: beq         $v0, $zero, L_151452B0
    if (ctx->r2 == 0) {
        // 0x15145228: lw          $v1, 0x48($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X48);
            goto L_151452B0;
    }
    // 0x15145228: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x1514522C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x15145230: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15145234: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15145238: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1514523C: nop

    // 0x15145240: bc1fl       L_15145268
    if (!c1cs) {
        // 0x15145244: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_15145268;
    }
    goto skip_0;
    // 0x15145244: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_0:
    // 0x15145248: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1514524C: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x15145250: nop

    // 0x15145254: bc1fl       L_15145268
    if (!c1cs) {
        // 0x15145258: c.le.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
            goto L_15145268;
    }
    goto skip_1;
    // 0x15145258: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    skip_1:
    // 0x1514525C: b           L_151452B4
    // 0x15145260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151452B4;
    // 0x15145260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15145264: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
L_15145268:
    // 0x15145268: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1514526C: bc1fl       L_15145294
    if (!c1cs) {
        // 0x15145270: c.lt.s      $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
            goto L_15145294;
    }
    goto skip_2;
    // 0x15145270: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    skip_2:
    // 0x15145274: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15145278: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x1514527C: nop

    // 0x15145280: bc1fl       L_15145294
    if (!c1cs) {
        // 0x15145284: c.lt.s      $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
            goto L_15145294;
    }
    goto skip_3;
    // 0x15145284: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    skip_3:
    // 0x15145288: b           L_151452B4
    // 0x1514528C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151452B4;
    // 0x1514528C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15145290: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
L_15145294:
    // 0x15145294: nop

    // 0x15145298: bc1f        L_151452A8
    if (!c1cs) {
        // 0x1514529C: nop
    
            goto L_151452A8;
    }
    // 0x1514529C: nop

    // 0x151452A0: b           L_151452B4
    // 0x151452A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151452B4;
    // 0x151452A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151452A8:
    // 0x151452A8: b           L_151452B4
    // 0x151452AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151452B4;
    // 0x151452AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151452B0:
    // 0x151452B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151452B4:
    // 0x151452B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151452B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151452BC: jr          $ra
    // 0x151452C0: nop

    return;
    return;
    // 0x151452C0: nop

;}
RECOMP_FUNC void func_151DC6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DC6A0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x151DC6A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151DC6A8: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x151DC6AC: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x151DC6B0: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x151DC6B4: jal         0x150ADA20
    // 0x151DC6B8: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151DC6B8: nop

    after_0:
    // 0x151DC6BC: jal         0x150ADA20
    // 0x151DC6C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151DC6C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x151DC6C4: jal         0x150ADA68
    // 0x151DC6C8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151DC6C8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x151DC6CC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x151DC6D0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151DC6D4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x151DC6D8: divu        $zero, $a0, $at
    lo = S32(U32(ctx->r4) / U32(ctx->r1)); hi = S32(U32(ctx->r4) % U32(ctx->r1));
    // 0x151DC6DC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151DC6E0: mfhi        $t6
    ctx->r14 = hi;
    // 0x151DC6E4: lbu         $t2, 0x87($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X87);
    // 0x151DC6E8: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x151DC6EC: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x151DC6F0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x151DC6F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151DC6F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC6FC: lwc1        $f8, -0x4AE8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4AE8);
    // 0x151DC700: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151DC704: mfhi        $t9
    ctx->r25 = hi;
    // 0x151DC708: addiu       $a1, $t9, 0xC8
    ctx->r5 = ADD32(ctx->r25, 0XC8);
    // 0x151DC70C: addiu       $a0, $t6, 0xC
    ctx->r4 = ADD32(ctx->r14, 0XC);
    // 0x151DC710: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x151DC714: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x151DC718: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151DC71C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151DC720: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151DC724: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x151DC728: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151DC72C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x151DC730: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
    // 0x151DC734: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151DC738: jal         0x15103254
    // 0x151DC73C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_15103254(rdram, ctx);
        goto after_3;
    // 0x151DC73C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_3:
    // 0x151DC740: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x151DC744: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x151DC748: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x151DC74C: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x151DC750: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151DC754: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151DC758: addiu       $t1, $zero, -0x40
    ctx->r9 = ADD32(0, -0X40);
    // 0x151DC75C: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151DC760: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x151DC764: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x151DC768: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x151DC76C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x151DC770: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151DC774: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x151DC778: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x151DC77C: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151DC780: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151DC784: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151DC788: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151DC78C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151DC790: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC794: lwc1        $f4, -0x4AE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4AE4);
    // 0x151DC798: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC79C: lwc1        $f6, -0x4AE0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4AE0);
    // 0x151DC7A0: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x151DC7A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151DC7A8: lui         $at, 0x43C3
    ctx->r1 = S32(0X43C3 << 16);
    // 0x151DC7AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151DC7B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151DC7B4: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x151DC7B8: lwc1        $f16, -0x4ADC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4ADC);
    // 0x151DC7BC: sh          $t9, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r25;
    // 0x151DC7C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151DC7C4: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x151DC7C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151DC7CC: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x151DC7D0: sh          $t8, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r24;
    // 0x151DC7D4: addiu       $t4, $zero, 0x37
    ctx->r12 = ADD32(0, 0X37);
    // 0x151DC7D8: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x151DC7DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151DC7E0: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x151DC7E4: sh          $t0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r8;
    // 0x151DC7E8: sh          $t1, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r9;
    // 0x151DC7EC: sh          $t2, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r10;
    // 0x151DC7F0: sh          $t3, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r11;
    // 0x151DC7F4: sh          $t6, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r14;
    // 0x151DC7F8: sb          $t5, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r13;
    // 0x151DC7FC: sb          $t4, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r12;
    // 0x151DC800: sb          $zero, 0x70($sp)
    MEM_B(0X70, ctx->r29) = 0;
    // 0x151DC804: sb          $t7, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r15;
    // 0x151DC808: sb          $t8, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r24;
    // 0x151DC80C: lbu         $a3, 0x87($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X87);
    // 0x151DC810: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x151DC814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DC818: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x151DC81C: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x151DC820: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x151DC824: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x151DC828: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    // 0x151DC82C: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x151DC830: jal         0x15150178
    // 0x151DC834: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15150178(rdram, ctx);
        goto after_4;
    // 0x151DC834: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_4:
    // 0x151DC838: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x151DC83C: lbu         $a1, 0x87($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X87);
    // 0x151DC840: jal         0x151D3F14
    // 0x151DC844: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    func_151D3F14(rdram, ctx);
        goto after_5;
    // 0x151DC844: lw          $a2, 0x88($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X88);
    after_5:
    // 0x151DC848: jal         0x150ADA20
    // 0x151DC84C: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151DC84C: nop

    after_6:
    // 0x151DC850: jal         0x150ADA20
    // 0x151DC854: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151DC854: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x151DC858: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x151DC85C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x151DC860: lbu         $t6, 0x87($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X87);
    // 0x151DC864: divu        $zero, $a3, $at
    lo = S32(U32(ctx->r7) / U32(ctx->r1)); hi = S32(U32(ctx->r7) % U32(ctx->r1));
    // 0x151DC868: mfhi        $t0
    ctx->r8 = hi;
    // 0x151DC86C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151DC870: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x151DC874: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151DC878: mfhi        $t2
    ctx->r10 = hi;
    // 0x151DC87C: addiu       $a3, $t0, 0x96
    ctx->r7 = ADD32(ctx->r8, 0X96);
    // 0x151DC880: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x151DC884: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x151DC888: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151DC88C: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x151DC890: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151DC894: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151DC898: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151DC89C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151DC8A0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151DC8A4: jal         0x15182670
    // 0x151DC8A8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    func_15182670(rdram, ctx);
        goto after_8;
    // 0x151DC8A8: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_8:
    // 0x151DC8AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151DC8B0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x151DC8B4: jr          $ra
    // 0x151DC8B8: nop

    return;
    return;
    // 0x151DC8B8: nop

;}
RECOMP_FUNC void func_151B4C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B4C1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B4C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B4C24: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151B4C28: addiu       $a0, $a1, 0x140
    ctx->r4 = ADD32(ctx->r5, 0X140);
    // 0x151B4C2C: jal         0x151D5E30
    // 0x151B4C30: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_151D5E30(rdram, ctx);
        goto after_0;
    // 0x151B4C30: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x151B4C34: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x151B4C38: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151B4C3C: lbu         $t6, 0x44($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X44);
    // 0x151B4C40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151B4C44: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x151B4C48: lw          $v0, -0x490($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X490);
    // 0x151B4C4C: beql        $v0, $zero, L_151B4C60
    if (ctx->r2 == 0) {
        // 0x151B4C50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151B4C60;
    }
    goto skip_0;
    // 0x151B4C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151B4C54: jalr        $v0
    // 0x151B4C58: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x151B4C58: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x151B4C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151B4C60:
    // 0x151B4C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B4C64: jr          $ra
    // 0x151B4C68: nop

    return;
    return;
    // 0x151B4C68: nop

;}
RECOMP_FUNC void func_151C436C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C436C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x151C4370: sdc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X8, ctx->r29);
    // 0x151C4374: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x151C4378: blez        $a2, L_151C43D4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x151C437C: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_151C43D4;
    }
    // 0x151C437C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C4380: lwc1        $f2, 0x1C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x151C4384: lwc1        $f14, 0x20($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X20);
    // 0x151C4388: lwc1        $f18, 0x24($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X24);
    // 0x151C438C: lwc1        $f20, -0x5584($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X5584);
L_151C4390:
    // 0x151C4390: lwc1        $f0, 0x10($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X10);
    // 0x151C4394: lwc1        $f12, 0x14($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X14);
    // 0x151C4398: lwc1        $f16, 0x18($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X18);
    // 0x151C439C: sub.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x151C43A0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x151C43A4: sub.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x151C43A8: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x151C43AC: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x151C43B0: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x151C43B4: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x151C43B8: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x151C43BC: add.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x151C43C0: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x151C43C4: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    // 0x151C43C8: add.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x151C43CC: bgtz        $a2, L_151C4390
    if (SIGNED(ctx->r6) > 0) {
        // 0x151C43D0: swc1        $f4, 0x18($a1)
        MEM_W(0X18, ctx->r5) = ctx->f4.u32l;
            goto L_151C4390;
    }
    // 0x151C43D0: swc1        $f4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f4.u32l;
L_151C43D4:
    // 0x151C43D4: ldc1        $f20, 0x8($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X8);
    // 0x151C43D8: jr          $ra
    // 0x151C43DC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x151C43DC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_150F48D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F48D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150F48D4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150F48D8: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x150F48DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F48E0: lwc1        $f4, 0x170($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X170);
    // 0x150F48E4: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150F48E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150F48EC: addiu       $v0, $a0, 0x170
    ctx->r2 = ADD32(ctx->r4, 0X170);
    // 0x150F48F0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F48F4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x150F48F8: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    // 0x150F48FC: swc1        $f8, 0x170($a0)
    MEM_W(0X170, ctx->r4) = ctx->f8.u32l;
    // 0x150F4900: lwc1        $f16, 0x170($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X170);
    // 0x150F4904: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x150F4908: nop

    // 0x150F490C: bc1fl       L_150F4920
    if (!c1cs) {
        // 0x150F4910: lwc1        $f12, 0x10($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
            goto L_150F4920;
    }
    goto skip_0;
    // 0x150F4910: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    skip_0:
    // 0x150F4914: b           L_150F4A28
    // 0x150F4918: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F4A28;
    // 0x150F4918: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F491C: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
L_150F4920:
    // 0x150F4920: lwc1        $f14, 0x20($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X20);
    // 0x150F4924: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150F4928: jal         0x1514373C
    // 0x150F492C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1514373C(rdram, ctx);
        goto after_0;
    // 0x150F492C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x150F4930: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x150F4934: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150F4938: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x150F493C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150F4940: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150F4944: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x150F4948: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x150F494C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150F4950: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150F4954: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150F4958: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x150F495C: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150F4960: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x150F4964: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150F4968: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150F496C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150F4970: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x150F4974: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150F4978: lwc1        $f10, 0x48($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X48);
    // 0x150F497C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150F4980: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x150F4984: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150F4988: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x150F498C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150F4990: lwc1        $f6, 0x4C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x150F4994: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150F4998: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150F499C: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150F49A0: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150F49A4: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x150F49A8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150F49AC: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150F49B0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F49B4: swc1        $f16, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f16.u32l;
    // 0x150F49B8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x150F49BC: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150F49C0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150F49C4: swc1        $f6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f6.u32l;
    // 0x150F49C8: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x150F49CC: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150F49D0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150F49D4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150F49D8: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x150F49DC: swc1        $f4, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f4.u32l;
    // 0x150F49E0: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x150F49E4: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150F49E8: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x150F49EC: lwc1        $f4, 0x54($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X54);
    // 0x150F49F0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150F49F4: add.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x150F49F8: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x150F49FC: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x150F4A00: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150F4A04: lwc1        $f16, 0x58($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150F4A08: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150F4A0C: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x150F4A10: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150F4A14: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x150F4A18: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150F4A1C: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x150F4A20: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x150F4A24: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
L_150F4A28:
    // 0x150F4A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F4A2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150F4A30: jr          $ra
    // 0x150F4A34: nop

    return;
    return;
    // 0x150F4A34: nop

;}
RECOMP_FUNC void func_150AA5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AA5A8: add.s       $f6, $f0, $f1
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f1.fl;
    // 0x150AA5AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150AA5B0: add.s       $f7, $f3, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f7.fl = ctx->f3.fl + ctx->f4.fl;
    // 0x150AA5B4: add.s       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x150AA5B8: add.s       $f8, $f7, $f5
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f8.fl = ctx->f7.fl + ctx->f5.fl;
    // 0x150AA5BC: sub.s       $f9, $f7, $f5
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f9.fl = ctx->f7.fl - ctx->f5.fl;
    // 0x150AA5C0: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150AA5C4: bc1fl       L_150AA5CC
    if (!c1cs) {
        // 0x150AA5C8: ori         $v0, $v0, 0x1
        ctx->r2 = ctx->r2 | 0X1;
            goto L_150AA5CC;
    }
    goto skip_0;
    // 0x150AA5C8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    skip_0:
L_150AA5CC:
    // 0x150AA5CC: sub.s       $f7, $f3, $f4
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f7.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x150AA5D0: c.ule.s     $f9, $f6
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f9.fl <= ctx->f6.fl;
    // 0x150AA5D4: bc1fl       L_150AA5DC
    if (!c1cs) {
        // 0x150AA5D8: ori         $v0, $v0, 0x2
        ctx->r2 = ctx->r2 | 0X2;
            goto L_150AA5DC;
    }
    goto skip_1;
    // 0x150AA5D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    skip_1:
L_150AA5DC:
    // 0x150AA5DC: add.s       $f10, $f7, $f5
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f10.fl = ctx->f7.fl + ctx->f5.fl;
    // 0x150AA5E0: sub.s       $f7, $f7, $f5
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f5.fl); 
    ctx->f7.fl = ctx->f7.fl - ctx->f5.fl;
    // 0x150AA5E4: c.ule.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x150AA5E8: bc1fl       L_150AA5F0
    if (!c1cs) {
        // 0x150AA5EC: ori         $v0, $v0, 0x4
        ctx->r2 = ctx->r2 | 0X4;
            goto L_150AA5F0;
    }
    goto skip_2;
    // 0x150AA5EC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    skip_2:
L_150AA5F0:
    // 0x150AA5F0: c.ule.s     $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f7.fl <= ctx->f6.fl;
    // 0x150AA5F4: bc1fl       L_150AA5FC
    if (!c1cs) {
        // 0x150AA5F8: ori         $v0, $v0, 0x8
        ctx->r2 = ctx->r2 | 0X8;
            goto L_150AA5FC;
    }
    goto skip_3;
    // 0x150AA5F8: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    skip_3:
L_150AA5FC:
    // 0x150AA5FC: neg.s       $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = -ctx->f8.fl;
    // 0x150AA600: neg.s       $f9, $f9
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f9.fl); 
    ctx->f9.fl = -ctx->f9.fl;
    // 0x150AA604: neg.s       $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = -ctx->f10.fl;
    // 0x150AA608: neg.s       $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f7.fl); 
    ctx->f7.fl = -ctx->f7.fl;
    // 0x150AA60C: c.ule.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x150AA610: bc1fl       L_150AA618
    if (!c1cs) {
        // 0x150AA614: ori         $v0, $v0, 0x80
        ctx->r2 = ctx->r2 | 0X80;
            goto L_150AA618;
    }
    goto skip_4;
    // 0x150AA614: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    skip_4:
L_150AA618:
    // 0x150AA618: c.ule.s     $f9, $f6
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f9.fl <= ctx->f6.fl;
    // 0x150AA61C: bc1fl       L_150AA624
    if (!c1cs) {
        // 0x150AA620: ori         $v0, $v0, 0x40
        ctx->r2 = ctx->r2 | 0X40;
            goto L_150AA624;
    }
    goto skip_5;
    // 0x150AA620: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    skip_5:
L_150AA624:
    // 0x150AA624: c.ule.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x150AA628: bc1fl       L_150AA630
    if (!c1cs) {
        // 0x150AA62C: ori         $v0, $v0, 0x20
        ctx->r2 = ctx->r2 | 0X20;
            goto L_150AA630;
    }
    goto skip_6;
    // 0x150AA62C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    skip_6:
L_150AA630:
    // 0x150AA630: c.ule.s     $f7, $f6
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f7.fl <= ctx->f6.fl;
    // 0x150AA634: bc1fl       L_150AA63C
    if (!c1cs) {
        // 0x150AA638: ori         $v0, $v0, 0x10
        ctx->r2 = ctx->r2 | 0X10;
            goto L_150AA63C;
    }
    goto skip_7;
    // 0x150AA638: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    skip_7:
L_150AA63C:
    // 0x150AA63C: jr          $ra
    // 0x150AA640: nop

    return;
    return;
    // 0x150AA640: nop

;}
RECOMP_FUNC void func_1514E9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514E9E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514E9E4: jal         0x1514E920
    // 0x1514E9E8: nop

    func_1514E920(rdram, ctx);
        goto after_0;
    // 0x1514E9E8: nop

    after_0:
    // 0x1514E9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514E9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514E9F4: jr          $ra
    // 0x1514E9F8: nop

    return;
    return;
    // 0x1514E9F8: nop

;}
RECOMP_FUNC void func_10022460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10022460: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x10022464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10022468: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1002246C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x10022470: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x10022474: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x10022478: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1002247C: addiu       $t7, $zero, 0x170
    ctx->r15 = ADD32(0, 0X170);
    // 0x10022480: sh          $t7, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r15;
    // 0x10022484: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10022488: lw          $t9, 0x50($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X50);
    // 0x1002248C: beq         $t9, $zero, L_10022500
    if (ctx->r25 == 0) {
        // 0x10022490: nop
    
            goto L_10022500;
    }
    // 0x10022490: nop

    // 0x10022494: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x10022498: addiu       $a1, $sp, 0x32
    ctx->r5 = ADD32(ctx->r29, 0X32);
    // 0x1002249C: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x100224A0: jal         0x100214F0
    // 0x100224A4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_100214F0(rdram, ctx);
        goto after_0;
    // 0x100224A4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x100224A8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x100224AC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x100224B0: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x100224B4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x100224B8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x100224BC: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x100224C0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x100224C4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x100224C8: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x100224CC: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x100224D0: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x100224D4: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x100224D8: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x100224DC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x100224E0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x100224E4: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x100224E8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x100224EC: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x100224F0: ori         $t0, $t9, 0x170
    ctx->r8 = ctx->r25 | 0X170;
    // 0x100224F4: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x100224F8: b           L_10022684
    // 0x100224FC: nop

        goto L_10022684;
    // 0x100224FC: nop

L_10022500:
    // 0x10022500: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x10022504: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10022508: ldc1        $f8, -0x37C0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X37C0);
    // 0x1002250C: lwc1        $f4, 0x4C($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4C);
    // 0x10022510: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x10022514: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x10022518: nop

    // 0x1002251C: bc1f        L_10022534
    if (!c1cs) {
        // 0x10022520: nop
    
            goto L_10022534;
    }
    // 0x10022520: nop

    // 0x10022524: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10022528: lwc1        $f10, -0x37B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X37B8);
    // 0x1002252C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x10022530: swc1        $f10, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->f10.u32l;
L_10022534:
    // 0x10022534: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x10022538: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x1002253C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x10022540: lwc1        $f16, 0x4C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4C);
    // 0x10022544: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x10022548: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1002254C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x10022550: nop

    // 0x10022554: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x10022558: nop

    // 0x1002255C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x10022560: swc1        $f10, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->f10.u32l;
    // 0x10022564: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x10022568: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x1002256C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x10022570: lwc1        $f16, 0x4C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4C);
    // 0x10022574: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x10022578: swc1        $f4, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->f4.u32l;
    // 0x1002257C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10022580: lui         $at, 0x4338
    ctx->r1 = S32(0X4338 << 16);
    // 0x10022584: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x10022588: lwc1        $f6, 0x4C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4C);
    // 0x1002258C: lwc1        $f16, 0x54($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X54);
    // 0x10022590: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x10022594: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x10022598: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x1002259C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x100225A0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x100225A4: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x100225A8: nop

    // 0x100225AC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x100225B0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x100225B4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x100225B8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x100225BC: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x100225C0: nop

    // 0x100225C4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x100225C8: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x100225CC: swc1        $f18, 0x54($t2)
    MEM_W(0X54, ctx->r10) = ctx->f18.u32l;
    // 0x100225D0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x100225D4: addiu       $a1, $sp, 0x32
    ctx->r5 = ADD32(ctx->r29, 0X32);
    // 0x100225D8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x100225DC: jal         0x100214F0
    // 0x100225E0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    func_100214F0(rdram, ctx);
        goto after_1;
    // 0x100225E0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x100225E4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x100225E8: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x100225EC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x100225F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x100225F4: lwc1        $f4, 0x4C($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4C);
    // 0x100225F8: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x100225FC: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x10022600: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x10022604: nop

    // 0x10022608: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1002260C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x10022610: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x10022614: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x10022618: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x1002261C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x10022620: jal         0x100233C0
    // 0x10022624: lw          $a0, 0x48($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X48);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x10022624: lw          $a0, 0x48($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X48);
    after_2:
    // 0x10022628: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x1002262C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x10022630: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x10022634: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x10022638: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x1002263C: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x10022640: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x10022644: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x10022648: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x1002264C: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x10022650: lw          $t3, 0x58($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X58);
    // 0x10022654: andi        $t7, $t4, 0xFFFF
    ctx->r15 = ctx->r12 & 0XFFFF;
    // 0x10022658: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x1002265C: andi        $t5, $t3, 0x3
    ctx->r13 = ctx->r11 & 0X3;
    // 0x10022660: sll         $t6, $t5, 30
    ctx->r14 = S32(ctx->r13 << 30);
    // 0x10022664: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x10022668: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x1002266C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x10022670: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x10022674: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x10022678: sw          $t3, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r11;
    // 0x1002267C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x10022680: sw          $zero, 0x58($t4)
    MEM_W(0X58, ctx->r12) = 0;
L_10022684:
    // 0x10022684: b           L_10022694
    // 0x10022688: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_10022694;
    // 0x10022688: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x1002268C: b           L_10022694
    // 0x10022690: nop

        goto L_10022694;
    // 0x10022690: nop

L_10022694:
    // 0x10022694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10022698: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1002269C: jr          $ra
    // 0x100226A0: nop

    return;
    return;
    // 0x100226A0: nop

    // 0x100226A4: nop

    // 0x100226A8: nop

    // 0x100226AC: nop

    // 0x100226B0: nop

    // 0x100226B4: nop

    // 0x100226B8: nop

    // 0x100226BC: nop

    // 0x100226C0: nop

    // 0x100226C4: nop

    // 0x100226C8: nop

    // 0x100226CC: nop

    // 0x100226D0: nop

    // 0x100226D4: nop

    // 0x100226D8: nop

    // 0x100226DC: nop

    // 0x100226E0: nop

    // 0x100226E4: nop

    // 0x100226E8: nop

    // 0x100226EC: nop

;}
RECOMP_FUNC void func_1514ECE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514ECE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1514ECE4: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x1514ECE8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1514ECEC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1514ECF0: beq         $a0, $zero, L_1514ED24
    if (ctx->r4 == 0) {
        // 0x1514ECF4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1514ED24;
    }
    // 0x1514ECF4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1514ECF8: lh          $t8, 0x1C($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X1C);
L_1514ECFC:
    // 0x1514ECFC: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x1514ED00: bnel        $a1, $t8, L_1514ED14
    if (ctx->r5 != ctx->r24) {
        // 0x1514ED04: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1514ED14;
    }
    goto skip_0;
    // 0x1514ED04: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x1514ED08: b           L_1514ED14
    // 0x1514ED0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1514ED14;
    // 0x1514ED0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1514ED10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1514ED14:
    // 0x1514ED14: beq         $v0, $zero, L_1514ED24
    if (ctx->r2 == 0) {
        // 0x1514ED18: nop
    
            goto L_1514ED24;
    }
    // 0x1514ED18: nop

    // 0x1514ED1C: beql        $v1, $zero, L_1514ECFC
    if (ctx->r3 == 0) {
        // 0x1514ED20: lh          $t8, 0x1C($v0)
        ctx->r24 = MEM_H(ctx->r2, 0X1C);
            goto L_1514ECFC;
    }
    goto skip_1;
    // 0x1514ED20: lh          $t8, 0x1C($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X1C);
    skip_1:
L_1514ED24:
    // 0x1514ED24: beql        $a2, $zero, L_1514ED34
    if (ctx->r6 == 0) {
        // 0x1514ED28: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1514ED34;
    }
    goto skip_2;
    // 0x1514ED28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_2:
    // 0x1514ED2C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x1514ED30: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1514ED34:
    // 0x1514ED34: jr          $ra
    // 0x1514ED38: nop

    return;
    return;
    // 0x1514ED38: nop

;}
RECOMP_FUNC void func_1518A324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518A324: lw          $t6, 0x188($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X188);
    // 0x1518A328: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1518A32C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518A330: lbu         $t7, 0x6F($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6F);
    // 0x1518A334: bnel        $t7, $zero, L_1518A358
    if (ctx->r15 != 0) {
        // 0x1518A338: sb          $t0, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r8;
            goto L_1518A358;
    }
    goto skip_0;
    // 0x1518A338: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    skip_0:
    // 0x1518A33C: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
    // 0x1518A340: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x1518A344: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x1518A348: sw          $t9, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r25;
    // 0x1518A34C: b           L_1518A358
    // 0x1518A350: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_1518A358;
    // 0x1518A350: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
    // 0x1518A354: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
L_1518A358:
    // 0x1518A358: jr          $ra
    // 0x1518A35C: nop

    return;
    return;
    // 0x1518A35C: nop

;}
RECOMP_FUNC void func_1511E780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511E780: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1511E784: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1511E788: lbu         $t0, 0x73($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X73);
    // 0x1511E78C: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x1511E790: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511E794: andi        $t6, $t0, 0x3
    ctx->r14 = ctx->r8 & 0X3;
    // 0x1511E798: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x1511E79C: bne         $v0, $at, L_1511E7CC
    if (ctx->r2 != ctx->r1) {
        // 0x1511E7A0: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_1511E7CC;
    }
    // 0x1511E7A0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x1511E7A4: beq         $t6, $zero, L_1511E7B4
    if (ctx->r14 == 0) {
        // 0x1511E7A8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_1511E7B4;
    }
    // 0x1511E7A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511E7AC: bnel        $t6, $at, L_1511E7C0
    if (ctx->r14 != ctx->r1) {
        // 0x1511E7B0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1511E7C0;
    }
    goto skip_0;
    // 0x1511E7B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
L_1511E7B4:
    // 0x1511E7B4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1511E7B8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511E7BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_1511E7C0:
    // 0x1511E7C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1511E7C4: b           L_1511E80C
    // 0x1511E7C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_1511E80C;
    // 0x1511E7C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_1511E7CC:
    // 0x1511E7CC: bne         $v0, $zero, L_1511E800
    if (ctx->r2 != 0) {
        // 0x1511E7D0: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_1511E800;
    }
    // 0x1511E7D0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x1511E7D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511E7D8: beq         $t0, $at, L_1511E7E8
    if (ctx->r8 == ctx->r1) {
        // 0x1511E7DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1511E7E8;
    }
    // 0x1511E7DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1511E7E0: bnel        $t0, $at, L_1511E7F4
    if (ctx->r8 != ctx->r1) {
        // 0x1511E7E4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_1511E7F4;
    }
    goto skip_1;
    // 0x1511E7E4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_1:
L_1511E7E8:
    // 0x1511E7E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1511E7EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x1511E7F0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_1511E7F4:
    // 0x1511E7F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1511E7F8: b           L_1511E80C
    // 0x1511E7FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_1511E80C;
    // 0x1511E7FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_1511E800:
    // 0x1511E800: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x1511E804: nop

    // 0x1511E808: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_1511E80C:
    // 0x1511E80C: beq         $v1, $at, L_1511E874
    if (ctx->r3 == ctx->r1) {
        // 0x1511E810: nop
    
            goto L_1511E874;
    }
    // 0x1511E810: nop

    // 0x1511E814: lw          $a1, 0x3C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X3C);
    // 0x1511E818: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x1511E81C: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x1511E820: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x1511E824: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1511E828: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1511E82C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1511E830: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x1511E834: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1511E838: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x1511E83C: lh          $a1, -0x6DA0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6DA0);
    // 0x1511E840: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x1511E844: addiu       $t2, $zero, 0x9C4
    ctx->r10 = ADD32(0, 0X9C4);
    // 0x1511E848: blez        $a1, L_1511E874
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1511E84C: nop
    
            goto L_1511E874;
    }
    // 0x1511E84C: nop

    // 0x1511E850: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1511E854: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1511E858: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1511E85C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1511E860: jal         0x15114D24
    // 0x1511E864: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    func_15114D24(rdram, ctx);
        goto after_0;
    // 0x1511E864: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x1511E868: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1511E86C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1511E870: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
L_1511E874:
    // 0x1511E874: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1511E878: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x1511E87C: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x1511E880: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x1511E884: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1511E888: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511E88C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1511E890: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511E894: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511E898: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1511E89C: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x1511E8A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1511E8A4: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x1511E8A8: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1511E8AC: beq         $t4, $at, L_1511E8D8
    if (ctx->r12 == ctx->r1) {
        // 0x1511E8B0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_1511E8D8;
    }
    // 0x1511E8B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1511E8B4: beq         $t4, $at, L_1511E8D8
    if (ctx->r12 == ctx->r1) {
        // 0x1511E8B8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_1511E8D8;
    }
    // 0x1511E8B8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x1511E8BC: bne         $t4, $at, L_1511E8E4
    if (ctx->r12 != ctx->r1) {
        // 0x1511E8C0: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_1511E8E4;
    }
    // 0x1511E8C0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1511E8C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511E8C8: lui         $at, 0x42A4
    ctx->r1 = S32(0X42A4 << 16);
    // 0x1511E8CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511E8D0: b           L_1511E8E8
    // 0x1511E8D4: sltiu       $at, $v1, 0xE
    ctx->r1 = ctx->r3 < 0XE ? 1 : 0;
        goto L_1511E8E8;
    // 0x1511E8D4: sltiu       $at, $v1, 0xE
    ctx->r1 = ctx->r3 < 0XE ? 1 : 0;
L_1511E8D8:
    // 0x1511E8D8: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1511E8DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511E8E0: nop

L_1511E8E4:
    // 0x1511E8E4: sltiu       $at, $v1, 0xE
    ctx->r1 = ctx->r3 < 0XE ? 1 : 0;
L_1511E8E8:
    // 0x1511E8E8: beq         $at, $zero, L_1511EC24
    if (ctx->r1 == 0) {
        // 0x1511E8EC: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1511EC24;
    }
    // 0x1511E8EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511E8F0: addu        $at, $at, $t5
    gpr jr_addend_1511E8F8 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x1511E8F4: lw          $t5, 0x331C($at)
    ctx->r13 = ADD32(ctx->r1, 0X331C);
    // 0x1511E8F8: jr          $t5
    // 0x1511E8FC: nop

    switch (jr_addend_1511E8F8 >> 2) {
        case 0: goto L_1511E900; break;
        case 1: goto L_1511EC24; break;
        case 2: goto L_1511E9E0; break;
        case 3: goto L_1511E970; break;
        case 4: goto L_1511EA48; break;
        case 5: goto L_1511EC24; break;
        case 6: goto L_1511EA48; break;
        case 7: goto L_1511EA48; break;
        case 8: goto L_1511E9E0; break;
        case 9: goto L_1511EC24; break;
        case 10: goto L_1511EAB0; break;
        case 11: goto L_1511EAD8; break;
        case 12: goto L_1511EBA8; break;
        case 13: goto L_1511EBD0; break;
        default: switch_error(__func__, 0x1511E8F8, 0x800A331C);
    }
    // 0x1511E8FC: nop

L_1511E900:
    // 0x1511E900: lw          $t6, 0x7C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X7C);
    // 0x1511E904: mul.s       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x1511E908: lui         $at, 0xC2DC
    ctx->r1 = S32(0XC2DC << 16);
    // 0x1511E90C: bnel        $t6, $zero, L_1511E920
    if (ctx->r14 != 0) {
        // 0x1511E910: lwc1        $f8, 0x8($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
            goto L_1511E920;
    }
    goto skip_2;
    // 0x1511E910: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    skip_2:
    // 0x1511E914: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1511E918: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
    // 0x1511E91C: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
L_1511E920:
    // 0x1511E920: lwc1        $f2, 0x84($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511E924: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1511E928: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x1511E92C: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1511E930: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1511E934: nop

    // 0x1511E938: bc1fl       L_1511E950
    if (!c1cs) {
        // 0x1511E93C: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_1511E950;
    }
    goto skip_3;
    // 0x1511E93C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_3:
    // 0x1511E940: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
    // 0x1511E944: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1511E948: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1511E94C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_1511E950:
    // 0x1511E950: nop

    // 0x1511E954: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1511E958: nop

    // 0x1511E95C: bc1fl       L_1511EC28
    if (!c1cs) {
        // 0x1511E960: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_1511EC28;
    }
    goto skip_4;
    // 0x1511E960: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_4:
    // 0x1511E964: swc1        $f2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f2.u32l;
    // 0x1511E968: b           L_1511EC24
    // 0x1511E96C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
        goto L_1511EC24;
    // 0x1511E96C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_1511E970:
    // 0x1511E970: lw          $t7, 0x7C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X7C);
    // 0x1511E974: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x1511E978: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1511E97C: bne         $t7, $zero, L_1511E98C
    if (ctx->r15 != 0) {
        // 0x1511E980: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_1511E98C;
    }
    // 0x1511E980: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1511E984: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511E988: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
L_1511E98C:
    // 0x1511E98C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1511E990: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511E994: mul.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x1511E998: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1511E99C: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x1511E9A0: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511E9A4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1511E9A8: nop

    // 0x1511E9AC: bc1fl       L_1511E9C4
    if (!c1cs) {
        // 0x1511E9B0: lwc1        $f2, 0x84($a0)
        ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
            goto L_1511E9C4;
    }
    goto skip_5;
    // 0x1511E9B0: lwc1        $f2, 0x84($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
    skip_5:
    // 0x1511E9B4: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x1511E9B8: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511E9BC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x1511E9C0: lwc1        $f2, 0x84($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
L_1511E9C4:
    // 0x1511E9C4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1511E9C8: nop

    // 0x1511E9CC: bc1fl       L_1511EC28
    if (!c1cs) {
        // 0x1511E9D0: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_1511EC28;
    }
    goto skip_6;
    // 0x1511E9D0: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_6:
    // 0x1511E9D4: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x1511E9D8: b           L_1511EC24
    // 0x1511E9DC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_1511EC24;
    // 0x1511E9DC: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1511E9E0:
    // 0x1511E9E0: lw          $t8, 0x7C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X7C);
    // 0x1511E9E4: mul.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x1511E9E8: bnel        $t8, $zero, L_1511E9FC
    if (ctx->r24 != 0) {
        // 0x1511E9EC: lwc1        $f8, 0x4($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
            goto L_1511E9FC;
    }
    goto skip_7;
    // 0x1511E9EC: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    skip_7:
    // 0x1511E9F0: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511E9F4: swc1        $f10, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f10.u32l;
    // 0x1511E9F8: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
L_1511E9FC:
    // 0x1511E9FC: lwc1        $f2, 0x84($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EA00: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1511EA04: add.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x1511EA08: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x1511EA0C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511EA10: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1511EA14: nop

    // 0x1511EA18: bc1fl       L_1511EA30
    if (!c1cs) {
        // 0x1511EA1C: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_1511EA30;
    }
    goto skip_8;
    // 0x1511EA1C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_8:
    // 0x1511EA20: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    // 0x1511EA24: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511EA28: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x1511EA2C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_1511EA30:
    // 0x1511EA30: nop

    // 0x1511EA34: bc1fl       L_1511EC28
    if (!c1cs) {
        // 0x1511EA38: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_1511EC28;
    }
    goto skip_9;
    // 0x1511EA38: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_9:
    // 0x1511EA3C: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x1511EA40: b           L_1511EC24
    // 0x1511EA44: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_1511EC24;
    // 0x1511EA44: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1511EA48:
    // 0x1511EA48: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x1511EA4C: mul.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x1511EA50: bnel        $t9, $zero, L_1511EA64
    if (ctx->r25 != 0) {
        // 0x1511EA54: lwc1        $f8, 0x4($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
            goto L_1511EA64;
    }
    goto skip_10;
    // 0x1511EA54: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    skip_10:
    // 0x1511EA58: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511EA5C: swc1        $f10, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f10.u32l;
    // 0x1511EA60: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
L_1511EA64:
    // 0x1511EA64: lwc1        $f2, 0x84($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EA68: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1511EA6C: sub.s       $f12, $f2, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f16.fl;
    // 0x1511EA70: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x1511EA74: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511EA78: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1511EA7C: nop

    // 0x1511EA80: bc1fl       L_1511EA98
    if (!c1cs) {
        // 0x1511EA84: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_1511EA98;
    }
    goto skip_11;
    // 0x1511EA84: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_11:
    // 0x1511EA88: swc1        $f2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f2.u32l;
    // 0x1511EA8C: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1511EA90: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1511EA94: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_1511EA98:
    // 0x1511EA98: nop

    // 0x1511EA9C: bc1fl       L_1511EC28
    if (!c1cs) {
        // 0x1511EAA0: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_1511EC28;
    }
    goto skip_12;
    // 0x1511EAA0: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_12:
    // 0x1511EAA4: swc1        $f12, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f12.u32l;
    // 0x1511EAA8: b           L_1511EC24
    // 0x1511EAAC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
        goto L_1511EC24;
    // 0x1511EAAC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
L_1511EAB0:
    // 0x1511EAB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511EAB4: lwc1        $f8, 0x3354($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3354);
    // 0x1511EAB8: lwc1        $f10, 0x84($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EABC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1511EAC0: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1511EAC4: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
    // 0x1511EAC8: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x1511EACC: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1511EAD0: nop

    // 0x1511EAD4: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
L_1511EAD8:
    // 0x1511EAD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511EADC: lwc1        $f8, 0x3358($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3358);
    // 0x1511EAE0: lwc1        $f10, 0x84($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EAE4: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1511EAE8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1511EAEC: swc1        $f6, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f6.u32l;
    // 0x1511EAF0: lwc1        $f12, 0x84($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EAF4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1511EAF8: jal         0x15047D60
    // 0x1511EAFC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x1511EAFC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_1:
    // 0x1511EB00: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1511EB04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1511EB08: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1511EB0C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1511EB10: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1511EB14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511EB18: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EB1C: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x1511EB20: lwc1        $f4, 0x335C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X335C);
    // 0x1511EB24: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x1511EB28: nop

    // 0x1511EB2C: bc1fl       L_1511EC28
    if (!c1cs) {
        // 0x1511EB30: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_1511EC28;
    }
    goto skip_13;
    // 0x1511EB30: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_13:
    // 0x1511EB34: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1511EB38: jal         0x150ADA20
    // 0x1511EB3C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1511EB3C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_2:
    // 0x1511EB40: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x1511EB44: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x1511EB48: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x1511EB4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511EB50: lwc1        $f8, 0x3360($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3360);
    // 0x1511EB54: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1511EB58: bgez        $t3, L_1511EB70
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1511EB5C: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1511EB70;
    }
    // 0x1511EB5C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1511EB60: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1511EB64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511EB68: nop

    // 0x1511EB6C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_1511EB70:
    // 0x1511EB70: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x1511EB74: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EB78: addiu       $t4, $zero, 0x258
    ctx->r12 = ADD32(0, 0X258);
    // 0x1511EB7C: addiu       $a1, $zero, 0x503
    ctx->r5 = ADD32(0, 0X503);
    // 0x1511EB80: addiu       $a2, $zero, 0x1F40
    ctx->r6 = ADD32(0, 0X1F40);
    // 0x1511EB84: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    // 0x1511EB88: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1511EB8C: swc1        $f8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f8.u32l;
    // 0x1511EB90: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1511EB94: jal         0x15114D24
    // 0x1511EB98: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_15114D24(rdram, ctx);
        goto after_3;
    // 0x1511EB98: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_3:
    // 0x1511EB9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1511EBA0: b           L_1511EC24
    // 0x1511EBA4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
        goto L_1511EC24;
    // 0x1511EBA4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
L_1511EBA8:
    // 0x1511EBA8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511EBAC: lwc1        $f6, 0x3364($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3364);
    // 0x1511EBB0: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EBB4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1511EBB8: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1511EBBC: swc1        $f10, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f10.u32l;
    // 0x1511EBC0: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x1511EBC4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x1511EBC8: nop

    // 0x1511EBCC: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
L_1511EBD0:
    // 0x1511EBD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511EBD4: lwc1        $f6, 0x3368($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3368);
    // 0x1511EBD8: lwc1        $f4, 0x84($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EBDC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1511EBE0: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1511EBE4: swc1        $f8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f8.u32l;
    // 0x1511EBE8: lwc1        $f12, 0x84($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511EBEC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1511EBF0: jal         0x15047D60
    // 0x1511EBF4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x1511EBF4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_4:
    // 0x1511EBF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511EBFC: ldc1        $f6, 0x3370($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X3370);
    // 0x1511EC00: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1511EC04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511EC08: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1511EC0C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1511EC10: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1511EC14: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x1511EC18: sub.d       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = ctx->f6.d - ctx->f8.d;
    // 0x1511EC1C: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x1511EC20: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
L_1511EC24:
    // 0x1511EC24: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
L_1511EC28:
    // 0x1511EC28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1511EC2C: sw          $t6, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r14;
    // 0x1511EC30: andi        $t9, $t7, 0xFFFC
    ctx->r25 = ctx->r15 & 0XFFFC;
    // 0x1511EC34: sb          $t9, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r25;
    // 0x1511EC38: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x1511EC3C: sb          $t1, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r9;
    // 0x1511EC40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1511EC44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1511EC48: jr          $ra
    // 0x1511EC4C: nop

    return;
    return;
    // 0x1511EC4C: nop

;}
RECOMP_FUNC void func_151B3A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B3A34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B3A38: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151B3A3C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151B3A40: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151B3A44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B3A48: lbu         $t7, 0x44($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X44);
    // 0x151B3A4C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151B3A50: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151B3A54: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x151B3A58: lw          $v0, -0x498($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X498);
    // 0x151B3A5C: beql        $v0, $zero, L_151B3A70
    if (ctx->r2 == 0) {
        // 0x151B3A60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151B3A70;
    }
    goto skip_0;
    // 0x151B3A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151B3A64: jalr        $v0
    // 0x151B3A68: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x151B3A68: nop

    after_0:
    // 0x151B3A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151B3A70:
    // 0x151B3A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B3A74: jr          $ra
    // 0x151B3A78: nop

    return;
    return;
    // 0x151B3A78: nop

;}
RECOMP_FUNC void func_150CD59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CD59C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x150CD5A0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x150CD5A4: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x150CD5A8: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x150CD5AC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150CD5B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150CD5B4: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x150CD5B8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150CD5BC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x150CD5C0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x150CD5C4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x150CD5C8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x150CD5CC: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x150CD5D0: sll         $a1, $s3, 16
    ctx->r5 = S32(ctx->r19 << 16);
    // 0x150CD5D4: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150CD5D8: addiu       $t8, $sp, 0x5A
    ctx->r24 = ADD32(ctx->r29, 0X5A);
    // 0x150CD5DC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150CD5E0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x150CD5E4: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x150CD5E8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150CD5EC: jal         0x151D5D60
    // 0x150CD5F0: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x150CD5F0: addiu       $a3, $sp, 0xD0
    ctx->r7 = ADD32(ctx->r29, 0XD0);
    after_0:
    // 0x150CD5F4: lw          $v0, 0xD0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XD0);
    // 0x150CD5F8: lbu         $t9, 0x5A($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X5A);
    // 0x150CD5FC: beq         $v0, $zero, L_150CD640
    if (ctx->r2 == 0) {
        // 0x150CD600: sw          $v0, 0xCC($sp)
        MEM_W(0XCC, ctx->r29) = ctx->r2;
            goto L_150CD640;
    }
    // 0x150CD600: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x150CD604: beq         $t9, $zero, L_150CD648
    if (ctx->r25 == 0) {
        // 0x150CD608: sll         $t0, $s3, 2
        ctx->r8 = S32(ctx->r19 << 2);
            goto L_150CD648;
    }
    // 0x150CD608: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x150CD60C: addu        $s1, $s0, $t0
    ctx->r17 = ADD32(ctx->r16, ctx->r8);
    // 0x150CD610: addiu       $s2, $s0, 0xC0
    ctx->r18 = ADD32(ctx->r16, 0XC0);
    // 0x150CD614: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150CD618: lw          $a0, 0x100($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X100);
    // 0x150CD61C: jal         0x10022EC0
    // 0x150CD620: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150CD620: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x150CD624: lw          $a0, 0x100($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X100);
    // 0x150CD628: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150CD62C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150CD630: jal         0x10022EC0
    // 0x150CD634: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x150CD634: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x150CD638: b           L_150CD64C
    // 0x150CD63C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
        goto L_150CD64C;
    // 0x150CD63C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_150CD640:
    // 0x150CD640: b           L_150CD7D4
    // 0x150CD644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150CD7D4;
    // 0x150CD644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150CD648:
    // 0x150CD648: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_150CD64C:
    // 0x150CD64C: addiu       $s4, $sp, 0x8C
    ctx->r20 = ADD32(ctx->r29, 0X8C);
    // 0x150CD650: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150CD654: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150CD658: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x150CD65C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150CD660: swc1        $f20, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f20.u32l;
    // 0x150CD664: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x150CD668: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150CD66C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x150CD670: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x150CD674: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150CD678: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x150CD67C: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x150CD680: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150CD684: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x150CD688: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x150CD68C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150CD690: swc1        $f20, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f20.u32l;
    // 0x150CD694: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x150CD698: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x150CD69C: lwc1        $f10, 0x2C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150CD6A0: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x150CD6A4: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x150CD6A8: swc1        $f20, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f20.u32l;
    // 0x150CD6AC: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x150CD6B0: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x150CD6B4: lw          $a3, 0x48($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X48);
    // 0x150CD6B8: lw          $a2, 0x44($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X44);
    // 0x150CD6BC: jal         0x150A8050
    // 0x150CD6C0: lw          $a1, 0x40($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X40);
    func_150A8050(rdram, ctx);
        goto after_3;
    // 0x150CD6C0: lw          $a1, 0x40($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X40);
    after_3:
    // 0x150CD6C4: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150CD6C8: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
    // 0x150CD6CC: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x150CD6D0: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x150CD6D4: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150CD6D8: lwc1        $f16, 0xBC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x150CD6DC: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x150CD6E0: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150CD6E4: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x150CD6E8: lwc1        $f10, 0x114($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X114);
    // 0x150CD6EC: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x150CD6F0: nop

    // 0x150CD6F4: bc1fl       L_150CD72C
    if (!c1cs) {
        // 0x150CD6F8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150CD72C;
    }
    goto skip_0;
    // 0x150CD6F8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    skip_0:
    // 0x150CD6FC: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x150CD700: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150CD704: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150CD708: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150CD70C: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x150CD710: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x150CD714: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CD718: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x150CD71C: lwc1        $f18, 0x54($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X54);
    // 0x150CD720: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150CD724: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x150CD728: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_150CD72C:
    // 0x150CD72C: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150CD730: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x150CD734: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150CD738: mflo        $t1
    ctx->r9 = lo;
    // 0x150CD73C: addu        $s1, $s2, $t1
    ctx->r17 = ADD32(ctx->r18, ctx->r9);
    // 0x150CD740: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x150CD744: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x150CD748: addiu       $t2, $s1, 0x4
    ctx->r10 = ADD32(ctx->r17, 0X4);
    // 0x150CD74C: addiu       $t3, $s1, 0x8
    ctx->r11 = ADD32(ctx->r17, 0X8);
    // 0x150CD750: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150CD754: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150CD758: jal         0x150A7960
    // 0x150CD75C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_150A7960(rdram, ctx);
        goto after_4;
    // 0x150CD75C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_4:
    // 0x150CD760: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150CD764: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x150CD768: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150CD76C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150CD770: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x150CD774: nop

    // 0x150CD778: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x150CD77C: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x150CD780: lw          $t9, 0xD0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD0);
    // 0x150CD784: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x150CD788: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150CD78C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x150CD790: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x150CD794: nop

    // 0x150CD798: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x150CD79C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150CD7A0: lw          $t2, 0xD0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XD0);
    // 0x150CD7A4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150CD7A8: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150CD7AC: nop

    // 0x150CD7B0: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x150CD7B4: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x150CD7B8: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x150CD7BC: lw          $t4, 0xD0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD0);
    // 0x150CD7C0: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x150CD7C4: sw          $t5, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r13;
    // 0x150CD7C8: bne         $at, $zero, L_150CD72C
    if (ctx->r1 != 0) {
        // 0x150CD7CC: or          $s0, $t6, $zero
        ctx->r16 = ctx->r14 | 0;
            goto L_150CD72C;
    }
    // 0x150CD7CC: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x150CD7D0: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_150CD7D4:
    // 0x150CD7D4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150CD7D8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x150CD7DC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150CD7E0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x150CD7E4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x150CD7E8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x150CD7EC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x150CD7F0: jr          $ra
    // 0x150CD7F4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x150CD7F4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_150BAFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BAFEC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x150BAFF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150BAFF4: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x150BAFF8: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x150BAFFC: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x150BB000: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x150BB004: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x150BB008: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150BB00C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150BB010: jal         0x151423D8
    // 0x150BB014: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x150BB014: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x150BB018: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x150BB01C: jal         0x151423D8
    // 0x150BB020: lbu         $a0, 0xDB($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XDB);
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x150BB020: lbu         $a0, 0xDB($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XDB);
    after_1:
    // 0x150BB024: lui         $t9, 0x20
    ctx->r25 = S32(0X20 << 16);
    // 0x150BB028: addiu       $t7, $zero, 0x29
    ctx->r15 = ADD32(0, 0X29);
    // 0x150BB02C: addiu       $t8, $zero, 0xE03
    ctx->r24 = ADD32(0, 0XE03);
    // 0x150BB030: ori         $t9, $t9, 0x5
    ctx->r25 = ctx->r25 | 0X5;
    // 0x150BB034: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x150BB038: sb          $t7, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r15;
    // 0x150BB03C: sh          $t8, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r24;
    // 0x150BB040: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x150BB044: jal         0x150ADA20
    // 0x150BB048: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150BB048: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_2:
    // 0x150BB04C: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x150BB050: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BB054: mfhi        $t0
    ctx->r8 = hi;
    // 0x150BB058: addiu       $t1, $t0, 0x46
    ctx->r9 = ADD32(ctx->r8, 0X46);
    // 0x150BB05C: addiu       $t2, $zero, 0xB0
    ctx->r10 = ADD32(0, 0XB0);
    // 0x150BB060: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    // 0x150BB064: addiu       $t4, $zero, 0x2A
    ctx->r12 = ADD32(0, 0X2A);
    // 0x150BB068: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x150BB06C: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x150BB070: addiu       $t7, $zero, 0x6A
    ctx->r15 = ADD32(0, 0X6A);
    // 0x150BB074: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150BB078: sh          $t1, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r9;
    // 0x150BB07C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x150BB080: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x150BB084: sb          $t2, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r10;
    // 0x150BB088: sb          $t3, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r11;
    // 0x150BB08C: sb          $t4, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r12;
    // 0x150BB090: sb          $t5, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r13;
    // 0x150BB094: sb          $t6, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r14;
    // 0x150BB098: sb          $t7, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r15;
    // 0x150BB09C: jal         0x150ADA20
    // 0x150BB0A0: sb          $t8, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150BB0A0: sb          $t8, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r24;
    after_3:
    // 0x150BB0A4: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x150BB0A8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BB0AC: mfhi        $t9
    ctx->r25 = hi;
    // 0x150BB0B0: addiu       $t0, $t9, 0x5A
    ctx->r8 = ADD32(ctx->r25, 0X5A);
    // 0x150BB0B4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150BB0B8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150BB0BC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150BB0C0: sb          $t0, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r8;
    // 0x150BB0C4: sb          $t1, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r9;
    // 0x150BB0C8: sb          $t2, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r10;
    // 0x150BB0CC: jal         0x150ADA68
    // 0x150BB0D0: sb          $t3, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r11;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150BB0D0: sb          $t3, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r11;
    after_4:
    // 0x150BB0D4: lui         $at, 0x4325
    ctx->r1 = S32(0X4325 << 16);
    // 0x150BB0D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BB0DC: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x150BB0E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BB0E4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150BB0E8: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150BB0EC: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150BB0F0: lwc1        $f18, 0xC8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150BB0F4: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x150BB0F8: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    // 0x150BB0FC: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x150BB100: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150BB104: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x150BB108: jal         0x150ADA20
    // 0x150BB10C: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150BB10C: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x150BB110: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150BB114: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BB118: mfhi        $v1
    ctx->r3 = hi;
    // 0x150BB11C: addiu       $t4, $v1, -0xC
    ctx->r12 = ADD32(ctx->r3, -0XC);
    // 0x150BB120: addiu       $a0, $t4, -0x40
    ctx->r4 = ADD32(ctx->r12, -0X40);
    // 0x150BB124: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x150BB128: sh          $t4, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r12;
    // 0x150BB12C: jal         0x151423D8
    // 0x150BB130: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x150BB130: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_6:
    // 0x150BB134: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x150BB138: jal         0x151423D8
    // 0x150BB13C: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x150BB13C: lbu         $a0, 0x3F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3F);
    after_7:
    // 0x150BB140: jal         0x150ADA68
    // 0x150BB144: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150BB144: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x150BB148: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x150BB14C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BB150: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150BB154: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BB158: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150BB15C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150BB160: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150BB164: addiu       $t6, $zero, 0xE05
    ctx->r14 = ADD32(0, 0XE05);
    // 0x150BB168: sw          $t6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r14;
    // 0x150BB16C: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150BB170: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150BB174: mul.s       $f12, $f2, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x150BB178: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x150BB17C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150BB180: mul.s       $f18, $f12, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x150BB184: nop

    // 0x150BB188: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BB18C: nop

    // 0x150BB190: mul.s       $f16, $f12, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x150BB194: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x150BB198: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150BB19C: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x150BB1A0: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    // 0x150BB1A4: jal         0x150ADA20
    // 0x150BB1A8: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150BB1A8: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x150BB1AC: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x150BB1B0: beq         $t7, $zero, L_150BB1C0
    if (ctx->r15 == 0) {
        // 0x150BB1B4: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_150BB1C0;
    }
    // 0x150BB1B4: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x150BB1B8: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x150BB1BC: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
L_150BB1C0:
    // 0x150BB1C0: jal         0x150ADA20
    // 0x150BB1C4: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150BB1C4: nop

    after_10:
    // 0x150BB1C8: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x150BB1CC: beq         $t0, $zero, L_150BB1E0
    if (ctx->r8 == 0) {
        // 0x150BB1D0: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_150BB1E0;
    }
    // 0x150BB1D0: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150BB1D4: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x150BB1D8: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x150BB1DC: sw          $t2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r10;
L_150BB1E0:
    // 0x150BB1E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BB1E4: lwc1        $f4, -0x18C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X18C);
    // 0x150BB1E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BB1EC: lwc1        $f6, -0x188($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X188);
    // 0x150BB1F0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150BB1F4: addiu       $t5, $zero, 0x16
    ctx->r13 = ADD32(0, 0X16);
    // 0x150BB1F8: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x150BB1FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150BB200: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150BB204: sb          $t3, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r11;
    // 0x150BB208: sb          $t4, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r12;
    // 0x150BB20C: sh          $t5, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r13;
    // 0x150BB210: sh          $t6, 0x68($sp)
    MEM_H(0X68, ctx->r29) = ctx->r14;
    // 0x150BB214: sh          $t7, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r15;
    // 0x150BB218: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150BB21C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x150BB220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150BB224: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150BB228: lbu         $a3, 0xF3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XF3);
    // 0x150BB22C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x150BB230: jal         0x15130374
    // 0x150BB234: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    func_15130374(rdram, ctx);
        goto after_11;
    // 0x150BB234: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x150BB238: beq         $v0, $zero, L_150BB24C
    if (ctx->r2 == 0) {
        // 0x150BB23C: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150BB24C;
    }
    // 0x150BB23C: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150BB240: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x150BB244: jal         0x10022EC0
    // 0x150BB248: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x150BB248: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
L_150BB24C:
    // 0x150BB24C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BB250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150BB254: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x150BB258: jr          $ra
    // 0x150BB25C: nop

    return;
    return;
    // 0x150BB25C: nop

;}
RECOMP_FUNC void func_150746F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150746F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150746F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150746F8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150746FC: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15074700: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15074704: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15074708: beq         $t6, $zero, L_15074720
    if (ctx->r14 == 0) {
        // 0x1507470C: addiu       $a1, $a1, 0x154C
        ctx->r5 = ADD32(ctx->r5, 0X154C);
            goto L_15074720;
    }
    // 0x1507470C: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x15074710: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15074714: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x15074718: b           L_15074738
    // 0x1507471C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
        goto L_15074738;
    // 0x1507471C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
L_15074720:
    // 0x15074720: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x15074724: lbu         $t8, 0x13C($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X13C);
    // 0x15074728: beq         $t8, $zero, L_15074738
    if (ctx->r24 == 0) {
        // 0x1507472C: nop
    
            goto L_15074738;
    }
    // 0x1507472C: nop

    // 0x15074730: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15074734: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
L_15074738:
    // 0x15074738: beq         $a0, $zero, L_150747D4
    if (ctx->r4 == 0) {
        // 0x1507473C: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_150747D4;
    }
    // 0x1507473C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15074740: lw          $v0, 0x1580($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1580);
    // 0x15074744: lbu         $v1, 0x1CA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1CA);
    // 0x15074748: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1507474C: bnel        $at, $zero, L_1507478C
    if (ctx->r1 != 0) {
        // 0x15074750: lw          $a1, 0x31C($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X31C);
            goto L_1507478C;
    }
    goto skip_0;
    // 0x15074750: lw          $a1, 0x31C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X31C);
    skip_0:
    // 0x15074754: sb          $zero, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = 0;
    // 0x15074758: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x1507475C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15074760: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15074764: sb          $zero, 0x1CA($t9)
    MEM_B(0X1CA, ctx->r25) = 0;
    // 0x15074768: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x1507476C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x15074770: bnel        $t0, $at, L_150747D8
    if (ctx->r8 != ctx->r1) {
        // 0x15074774: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150747D8;
    }
    goto skip_1;
    // 0x15074774: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x15074778: jal         0x1507CD64
    // 0x1507477C: sb          $t1, 0x125($a0)
    MEM_B(0X125, ctx->r4) = ctx->r9;
    func_1507CD64(rdram, ctx);
        goto after_0;
    // 0x1507477C: sb          $t1, 0x125($a0)
    MEM_B(0X125, ctx->r4) = ctx->r9;
    after_0:
    // 0x15074780: b           L_150747D8
    // 0x15074784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_150747D8;
    // 0x15074784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15074788: lw          $a1, 0x31C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X31C);
L_1507478C:
    // 0x1507478C: subu        $t2, $v1, $v0
    ctx->r10 = SUB32(ctx->r3, ctx->r2);
    // 0x15074790: sb          $t2, 0x1CA($a0)
    MEM_B(0X1CA, ctx->r4) = ctx->r10;
    // 0x15074794: beql        $a1, $zero, L_150747D8
    if (ctx->r5 == 0) {
        // 0x15074798: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150747D8;
    }
    goto skip_2;
    // 0x15074798: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x1507479C: lw          $v0, 0x318($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X318);
    // 0x150747A0: beql        $v0, $zero, L_150747D8
    if (ctx->r2 == 0) {
        // 0x150747A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_150747D8;
    }
    goto skip_3;
    // 0x150747A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x150747A8: lbu         $t3, 0x197($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X197);
    // 0x150747AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150747B0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x150747B4: beq         $t3, $zero, L_150747D4
    if (ctx->r11 == 0) {
        // 0x150747B8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150747D4;
    }
    // 0x150747B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150747BC: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x150747C0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150747C4: lbu         $t5, 0x23D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X23D);
    // 0x150747C8: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    // 0x150747CC: jal         0x1517F488
    // 0x150747D0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_1517F488(rdram, ctx);
        goto after_1;
    // 0x150747D0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_1:
L_150747D4:
    // 0x150747D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_150747D8:
    // 0x150747D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150747DC: jr          $ra
    // 0x150747E0: nop

    return;
    return;
    // 0x150747E0: nop

;}
RECOMP_FUNC void func_150B73F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B73F0: lh          $t0, 0x24($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X24);
    // 0x150B73F4: lw          $a3, 0x1C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X1C);
    // 0x150B73F8: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x150B73FC: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x150B7400: div         $zero, $t6, $a3
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r7)));
    // 0x150B7404: lh          $a1, 0x20($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X20);
    // 0x150B7408: mflo        $t1
    ctx->r9 = lo;
    // 0x150B740C: lh          $v1, 0x1A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1A);
    // 0x150B7410: subu        $t7, $a1, $v0
    ctx->r15 = SUB32(ctx->r5, ctx->r2);
    // 0x150B7414: multu       $t7, $t1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B7418: lh          $a2, 0x22($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X22);
    // 0x150B741C: bne         $a3, $zero, L_150B7428
    if (ctx->r7 != 0) {
        // 0x150B7420: nop
    
            goto L_150B7428;
    }
    // 0x150B7420: nop

    // 0x150B7424: break       7
    do_break(353072164);
L_150B7428:
    // 0x150B7428: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150B742C: bne         $a3, $at, L_150B7440
    if (ctx->r7 != ctx->r1) {
        // 0x150B7430: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150B7440;
    }
    // 0x150B7430: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150B7434: bne         $t6, $at, L_150B7440
    if (ctx->r14 != ctx->r1) {
        // 0x150B7438: nop
    
            goto L_150B7440;
    }
    // 0x150B7438: nop

    // 0x150B743C: break       6
    do_break(353072188);
L_150B7440:
    // 0x150B7440: mflo        $t8
    ctx->r24 = lo;
    // 0x150B7444: subu        $t3, $a2, $v1
    ctx->r11 = SUB32(ctx->r6, ctx->r3);
    // 0x150B7448: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150B744C: multu       $t3, $t1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B7450: addu        $t2, $t9, $v0
    ctx->r10 = ADD32(ctx->r25, ctx->r2);
    // 0x150B7454: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x150B7458: nop

    // 0x150B745C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B7460: mflo        $t4
    ctx->r12 = lo;
    // 0x150B7464: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x150B7468: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x150B746C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x150B7470: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x150B7474: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B7478: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x150B747C: jr          $ra
    // 0x150B7480: nop

    return;
    return;
    // 0x150B7480: nop

;}
RECOMP_FUNC void func_15076500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076500: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15076504: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15076508: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1507650C: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15076510: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15076514: lw          $t0, 0x154C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X154C);
    // 0x15076518: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1507651C: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x15076520: sh          $t9, 0x22E($t0)
    MEM_H(0X22E, ctx->r8) = ctx->r25;
    // 0x15076524: jr          $ra
    // 0x15076528: nop

    return;
    return;
    // 0x15076528: nop

;}
RECOMP_FUNC void func_151932E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151932E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151932E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151932E8: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151932EC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151932F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151932F4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151932F8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151932FC: bne         $a2, $at, L_1519334C
    if (ctx->r6 != ctx->r1) {
        // 0x15193300: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_1519334C;
    }
    // 0x15193300: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x15193304: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x15193308: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x1519330C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x15193310: bnel        $v1, $a0, L_15193330
    if (ctx->r3 != ctx->r4) {
        // 0x15193314: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_15193330;
    }
    goto skip_0;
    // 0x15193314: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x15193318: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x1519331C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15193320: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x15193324: b           L_1519337C
    // 0x15193328: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
        goto L_1519337C;
    // 0x15193328: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x1519332C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_15193330:
    // 0x15193330: bnel        $t9, $a0, L_15193380
    if (ctx->r25 != ctx->r4) {
        // 0x15193334: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15193380;
    }
    goto skip_1;
    // 0x15193334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15193338: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x1519333C: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x15193340: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x15193344: b           L_15193380
    // 0x15193348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15193380;
    // 0x15193348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1519334C:
    // 0x1519334C: bne         $v0, $zero, L_1519337C
    if (ctx->r2 != 0) {
        // 0x15193350: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_1519337C;
    }
    // 0x15193350: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x15193354: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x15193358: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x1519335C: beq         $v1, $t1, L_15193374
    if (ctx->r3 == ctx->r9) {
        // 0x15193360: nop
    
            goto L_15193374;
    }
    // 0x15193360: nop

    // 0x15193364: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x15193368: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x1519336C: bnel        $t2, $t3, L_15193380
    if (ctx->r10 != ctx->r11) {
        // 0x15193370: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15193380;
    }
    goto skip_2;
    // 0x15193370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_15193374:
    // 0x15193374: jal         0x1516972C
    // 0x15193378: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15193378: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
L_1519337C:
    // 0x1519337C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15193380:
    // 0x15193380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15193384: jr          $ra
    // 0x15193388: nop

    return;
    return;
    // 0x15193388: nop

;}
RECOMP_FUNC void func_150F7E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F7E20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150F7E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F7E28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F7E2C: lwc1        $f6, 0x1BD8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1BD8);
    // 0x150F7E30: lwc1        $f4, 0x128($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X128);
    // 0x150F7E34: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150F7E38: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150F7E3C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150F7E40: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x150F7E44: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150F7E48: nop

    // 0x150F7E4C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150F7E50: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150F7E54: nop

    // 0x150F7E58: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x150F7E5C: beql        $t7, $zero, L_150F7EAC
    if (ctx->r15 == 0) {
        // 0x150F7E60: mfc1        $t7, $f10
        ctx->r15 = (int32_t)ctx->f10.u32l;
            goto L_150F7EAC;
    }
    goto skip_0;
    // 0x150F7E60: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x150F7E64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F7E68: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150F7E6C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150F7E70: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150F7E74: nop

    // 0x150F7E78: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150F7E7C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150F7E80: nop

    // 0x150F7E84: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x150F7E88: bne         $t7, $zero, L_150F7EA0
    if (ctx->r15 != 0) {
        // 0x150F7E8C: nop
    
            goto L_150F7EA0;
    }
    // 0x150F7E8C: nop

    // 0x150F7E90: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x150F7E94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F7E98: b           L_150F7EB8
    // 0x150F7E9C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_150F7EB8;
    // 0x150F7E9C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_150F7EA0:
    // 0x150F7EA0: b           L_150F7EB8
    // 0x150F7EA4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_150F7EB8;
    // 0x150F7EA4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150F7EA8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
L_150F7EAC:
    // 0x150F7EAC: nop

    // 0x150F7EB0: bltz        $t7, L_150F7EA0
    if (SIGNED(ctx->r15) < 0) {
        // 0x150F7EB4: nop
    
            goto L_150F7EA0;
    }
    // 0x150F7EB4: nop

L_150F7EB8:
    // 0x150F7EB8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x150F7EBC: sb          $t7, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r15;
    // 0x150F7EC0: lwc1        $f12, 0x12C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X12C);
    // 0x150F7EC4: jal         0x15047D60
    // 0x150F7EC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x150F7EC8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x150F7ECC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x150F7ED0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F7ED4: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x150F7ED8: lwc1        $f16, 0x28($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X28);
    // 0x150F7EDC: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x150F7EE0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150F7EE4: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150F7EE8: swc1        $f2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f2.u32l;
    // 0x150F7EEC: swc1        $f2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f2.u32l;
    // 0x150F7EF0: lwc1        $f8, -0x165C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F7EF4: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x150F7EF8: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150F7EFC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x150F7F00: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150F7F04: jal         0x15144B68
    // 0x150F7F08: add.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f10.fl;
    func_15144B68(rdram, ctx);
        goto after_1;
    // 0x150F7F08: add.s       $f12, $f16, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f10.fl;
    after_1:
    // 0x150F7F0C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x150F7F10: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F7F14: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F7F18: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x150F7F1C: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F7F20: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150F7F24: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150F7F28: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
    // 0x150F7F2C: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150F7F30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F7F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F7F38: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x150F7F3C: nop

    // 0x150F7F40: bc1f        L_150F7F50
    if (!c1cs) {
        // 0x150F7F44: nop
    
            goto L_150F7F50;
    }
    // 0x150F7F44: nop

    // 0x150F7F48: b           L_150F7F50
    // 0x150F7F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F7F50;
    // 0x150F7F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F7F50:
    // 0x150F7F50: jr          $ra
    // 0x150F7F54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150F7F54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15185D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15185D84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15185D88: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15185D8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15185D90: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15185D94: nop

    // 0x15185D98: bc1f        L_15185DA4
    if (!c1cs) {
        // 0x15185D9C: nop
    
            goto L_15185DA4;
    }
    // 0x15185D9C: nop

    // 0x15185DA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15185DA4:
    // 0x15185DA4: jr          $ra
    // 0x15185DA8: nop

    return;
    return;
    // 0x15185DA8: nop

;}
RECOMP_FUNC void func_150D1530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D1530: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150D1534: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150D1538: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150D153C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150D1540: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x150D1544: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x150D1548: beql        $t6, $at, L_150D17FC
    if (ctx->r14 == ctx->r1) {
        // 0x150D154C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_150D17FC;
    }
    goto skip_0;
    // 0x150D154C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150D1550: lw          $t7, 0x5F0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5F0);
    // 0x150D1554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D1558: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x150D155C: beq         $t8, $zero, L_150D1788
    if (ctx->r24 == 0) {
        // 0x150D1560: nop
    
            goto L_150D1788;
    }
    // 0x150D1560: nop

    // 0x150D1564: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150D1568: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150D156C: lw          $t9, 0x3D0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D0);
    // 0x150D1570: lwc1        $f2, 0x3C($t9)
    ctx->f2.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x150D1574: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150D1578: nop

    // 0x150D157C: bc1fl       L_150D1590
    if (!c1cs) {
        // 0x150D1580: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_150D1590;
    }
    goto skip_1;
    // 0x150D1580: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_1:
    // 0x150D1584: b           L_150D15B4
    // 0x150D1588: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_150D15B4;
    // 0x150D1588: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150D158C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_150D1590:
    // 0x150D1590: nop

    // 0x150D1594: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x150D1598: nop

    // 0x150D159C: bc1fl       L_150D15B0
    if (!c1cs) {
        // 0x150D15A0: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_150D15B0;
    }
    goto skip_2;
    // 0x150D15A0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_2:
    // 0x150D15A4: b           L_150D15B0
    // 0x150D15A8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_150D15B0;
    // 0x150D15A8: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x150D15AC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_150D15B0:
    // 0x150D15B0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_150D15B4:
    // 0x150D15B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D15B8: lwc1        $f4, 0x8D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X8D0);
    // 0x150D15BC: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x150D15C0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150D15C4: mul.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x150D15C8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150D15CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D15D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150D15D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150D15D8: jal         0x15123934
    // 0x150D15DC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    func_15123934(rdram, ctx);
        goto after_0;
    // 0x150D15DC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x150D15E0: beq         $v0, $zero, L_150D1618
    if (ctx->r2 == 0) {
        // 0x150D15E4: lwc1        $f2, 0x34($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
            goto L_150D1618;
    }
    // 0x150D15E4: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150D15E8: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x150D15EC: lui         $at, 0x130
    ctx->r1 = S32(0X130 << 16);
    // 0x150D15F0: ori         $at, $at, 0x80
    ctx->r1 = ctx->r1 | 0X80;
    // 0x150D15F4: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x150D15F8: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x150D15FC: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x150D1600: and         $t4, $t2, $at
    ctx->r12 = ctx->r10 & ctx->r1;
    // 0x150D1604: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150D1608: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150D160C: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    // 0x150D1610: sh          $t5, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r13;
    // 0x150D1614: sh          $t6, 0x1E0($s0)
    MEM_H(0X1E0, ctx->r16) = ctx->r14;
L_150D1618:
    // 0x150D1618: lui         $at, 0xC342
    ctx->r1 = S32(0XC342 << 16);
    // 0x150D161C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D1620: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x150D1624: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D1628: lui         $at, 0x4208
    ctx->r1 = S32(0X4208 << 16);
    // 0x150D162C: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150D1630: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D1634: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x150D1638: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D163C: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150D1640: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150D1644: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x150D1648: addiu       $t9, $zero, 0x4035
    ctx->r25 = ADD32(0, 0X4035);
    // 0x150D164C: addiu       $t0, $zero, 0x4036
    ctx->r8 = ADD32(0, 0X4036);
    // 0x150D1650: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D1654: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x150D1658: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    // 0x150D165C: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150D1660: swc1        $f16, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f16.u32l;
    // 0x150D1664: addiu       $a3, $zero, 0x400A
    ctx->r7 = ADD32(0, 0X400A);
    // 0x150D1668: addiu       $t3, $zero, 0x400B
    ctx->r11 = ADD32(0, 0X400B);
    // 0x150D166C: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150D1670: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150D1674: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x150D1678: addiu       $t4, $zero, 0x400C
    ctx->r12 = ADD32(0, 0X400C);
    // 0x150D167C: addiu       $t5, $zero, 0x400D
    ctx->r13 = ADD32(0, 0X400D);
    // 0x150D1680: bne         $t7, $at, L_150D16C0
    if (ctx->r15 != ctx->r1) {
        // 0x150D1684: addiu       $t6, $zero, 0x400E
        ctx->r14 = ADD32(0, 0X400E);
            goto L_150D16C0;
    }
    // 0x150D1684: addiu       $t6, $zero, 0x400E
    ctx->r14 = ADD32(0, 0X400E);
    // 0x150D1688: lbu         $a1, 0x23D($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X23D);
    // 0x150D168C: addiu       $t1, $zero, 0x4037
    ctx->r9 = ADD32(0, 0X4037);
    // 0x150D1690: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150D1694: ori         $t8, $a1, 0x2000
    ctx->r24 = ctx->r5 | 0X2000;
    // 0x150D1698: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x150D169C: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x150D16A0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150D16A4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x150D16A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x150D16AC: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    // 0x150D16B0: jal         0x1509BE40
    // 0x150D16B4: addiu       $a3, $zero, 0x4027
    ctx->r7 = ADD32(0, 0X4027);
    func_1509BE40(rdram, ctx);
        goto after_1;
    // 0x150D16B4: addiu       $a3, $zero, 0x4027
    ctx->r7 = ADD32(0, 0X4027);
    after_1:
    // 0x150D16B8: b           L_150D16E8
    // 0x150D16BC: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
        goto L_150D16E8;
    // 0x150D16BC: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
L_150D16C0:
    // 0x150D16C0: lbu         $a1, 0x23D($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X23D);
    // 0x150D16C4: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x150D16C8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150D16CC: ori         $t2, $a1, 0x2000
    ctx->r10 = ctx->r5 | 0X2000;
    // 0x150D16D0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x150D16D4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150D16D8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150D16DC: jal         0x1509BE40
    // 0x150D16E0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_1509BE40(rdram, ctx);
        goto after_2;
    // 0x150D16E0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x150D16E4: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
L_150D16E8:
    // 0x150D16E8: beql        $v0, $zero, L_150D1708
    if (ctx->r2 == 0) {
        // 0x150D16EC: lw          $t9, 0x3D0($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X3D0);
            goto L_150D1708;
    }
    goto skip_3;
    // 0x150D16EC: lw          $t9, 0x3D0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D0);
    skip_3:
    // 0x150D16F0: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    // 0x150D16F4: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x150D16F8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x150D16FC: b           L_150D1748
    // 0x150D1700: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
        goto L_150D1748;
    // 0x150D1700: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
    // 0x150D1704: lw          $t9, 0x3D0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D0);
L_150D1708:
    // 0x150D1708: lui         $at, 0x42F6
    ctx->r1 = S32(0X42F6 << 16);
    // 0x150D170C: lbu         $t0, 0x81($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X81);
    // 0x150D1710: beql        $t0, $zero, L_150D172C
    if (ctx->r8 == 0) {
        // 0x150D1714: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_150D172C;
    }
    goto skip_4;
    // 0x150D1714: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_4:
    // 0x150D1718: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x150D171C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D1720: b           L_150D1734
    // 0x150D1724: swc1        $f8, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
        goto L_150D1734;
    // 0x150D1724: swc1        $f8, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
    // 0x150D1728: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_150D172C:
    // 0x150D172C: nop

    // 0x150D1730: swc1        $f10, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f10.u32l;
L_150D1734:
    // 0x150D1734: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x150D1738: lui         $at, 0xEFFF
    ctx->r1 = S32(0XEFFF << 16);
    // 0x150D173C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150D1740: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x150D1744: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
L_150D1748:
    // 0x150D1748: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D174C: lwc1        $f16, 0x8D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X8D4);
    // 0x150D1750: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150D1754: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D1758: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150D175C: lbu         $t3, 0x23C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X23C);
    // 0x150D1760: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150D1764: swc1        $f0, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f0.u32l;
    // 0x150D1768: beq         $t3, $zero, L_150D17AC
    if (ctx->r11 == 0) {
        // 0x150D176C: swc1        $f0, 0x1A4($s0)
        MEM_W(0X1A4, ctx->r16) = ctx->f0.u32l;
            goto L_150D17AC;
    }
    // 0x150D176C: swc1        $f0, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f0.u32l;
    // 0x150D1770: lwc1        $f6, 0x1A4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x150D1774: lwc1        $f8, 0x1A8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x150D1778: swc1        $f6, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f6.u32l;
    // 0x150D177C: swc1        $f8, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f8.u32l;
    // 0x150D1780: b           L_150D17AC
    // 0x150D1784: nop

        goto L_150D17AC;
    // 0x150D1784: nop

L_150D1788:
    // 0x150D1788: jal         0x151239CC
    // 0x150D178C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151239CC(rdram, ctx);
        goto after_3;
    // 0x150D178C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x150D1790: beq         $v0, $zero, L_150D17AC
    if (ctx->r2 == 0) {
        // 0x150D1794: nop
    
            goto L_150D17AC;
    }
    // 0x150D1794: nop

    // 0x150D1798: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150D179C: nop

    // 0x150D17A0: swc1        $f0, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f0.u32l;
    // 0x150D17A4: swc1        $f0, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f0.u32l;
    // 0x150D17A8: swc1        $f0, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f0.u32l;
L_150D17AC:
    // 0x150D17AC: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x150D17B0: lw          $t4, -0x1610($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1610);
    // 0x150D17B4: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x150D17B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150D17BC: bne         $t4, $at, L_150D17F8
    if (ctx->r12 != ctx->r1) {
        // 0x150D17C0: addiu       $a1, $zero, 0x4039
        ctx->r5 = ADD32(0, 0X4039);
            goto L_150D17F8;
    }
    // 0x150D17C0: addiu       $a1, $zero, 0x4039
    ctx->r5 = ADD32(0, 0X4039);
    // 0x150D17C4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150D17C8: jal         0x1509BE40
    // 0x150D17CC: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_4;
    // 0x150D17CC: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_4:
    // 0x150D17D0: beql        $v0, $zero, L_150D17EC
    if (ctx->r2 == 0) {
        // 0x150D17D4: lw          $t7, 0x84($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X84);
            goto L_150D17EC;
    }
    goto skip_5;
    // 0x150D17D4: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
    skip_5:
    // 0x150D17D8: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    // 0x150D17DC: ori         $t6, $t5, 0x1000
    ctx->r14 = ctx->r13 | 0X1000;
    // 0x150D17E0: b           L_150D17F8
    // 0x150D17E4: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
        goto L_150D17F8;
    // 0x150D17E4: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
    // 0x150D17E8: lw          $t7, 0x84($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X84);
L_150D17EC:
    // 0x150D17EC: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x150D17F0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x150D17F4: sw          $t8, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r24;
L_150D17F8:
    // 0x150D17F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_150D17FC:
    // 0x150D17FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150D1800: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150D1804: jr          $ra
    // 0x150D1808: nop

    return;
    return;
    // 0x150D1808: nop

;}
RECOMP_FUNC void func_15008BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008BF0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15008BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15008BF8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15008BFC: lwc1        $f0, 0x5B40($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5B40);
    // 0x15008C00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15008C04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15008C08: lh          $t8, 0x6($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X6);
    // 0x15008C0C: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x15008C10: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15008C14: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15008C18: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x15008C1C: sb          $t7, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r15;
    // 0x15008C20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15008C24: lwc1        $f8, 0x5B44($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5B44);
    // 0x15008C28: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15008C2C: lwc1        $f16, 0x5B48($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5B48);
    // 0x15008C30: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x15008C34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15008C38: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15008C3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15008C40: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15008C44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15008C48: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15008C4C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x15008C50: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x15008C54: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15008C58: lwc1        $f10, 0x5B4C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5B4C);
    // 0x15008C5C: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x15008C60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15008C64: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15008C68: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x15008C6C: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x15008C70: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x15008C74: lwc1        $f18, 0x5B50($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5B50);
    // 0x15008C78: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15008C7C: lwc1        $f4, 0x5B54($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5B54);
    // 0x15008C80: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x15008C84: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x15008C88: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x15008C8C: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x15008C90: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    // 0x15008C94: sh          $t1, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r9;
    // 0x15008C98: sh          $t2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r10;
    // 0x15008C9C: sh          $t3, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r11;
    // 0x15008CA0: sh          $t4, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r12;
    // 0x15008CA4: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x15008CA8: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x15008CAC: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x15008CB0: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x15008CB4: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x15008CB8: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x15008CBC: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15008CC0: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x15008CC4: sh          $t7, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r15;
    // 0x15008CC8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15008CCC: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x15008CD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15008CD4: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x15008CD8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x15008CDC: addiu       $a3, $sp, 0x24
    ctx->r7 = ADD32(ctx->r29, 0X24);
    // 0x15008CE0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15008CE4: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x15008CE8: nop

    // 0x15008CEC: sh          $t6, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r14;
    // 0x15008CF0: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x15008CF4: sh          $t0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r8;
    // 0x15008CF8: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x15008CFC: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15008D00: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x15008D04: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x15008D08: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    // 0x15008D0C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15008D10: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15008D14: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15008D18: nop

    // 0x15008D1C: sh          $t9, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r25;
    // 0x15008D20: lh          $t3, 0x6($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X6);
    // 0x15008D24: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x15008D28: nop

    // 0x15008D2C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15008D30: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15008D34: jal         0x15143874
    // 0x15008D38: nop

    func_15143874(rdram, ctx);
        goto after_0;
    // 0x15008D38: nop

    after_0:
    // 0x15008D3C: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x15008D40: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15008D44: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x15008D48: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x15008D4C: nop

    // 0x15008D50: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15008D54: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15008D58: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x15008D5C: lh          $t5, 0x2($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2);
    // 0x15008D60: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15008D64: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x15008D68: nop

    // 0x15008D6C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15008D70: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x15008D74: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    // 0x15008D78: add.s       $f10, $f4, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f4.fl;
    // 0x15008D7C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15008D80: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x15008D84: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15008D88: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15008D8C: nop

    // 0x15008D90: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x15008D94: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x15008D98: add.s       $f18, $f6, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f6.fl;
    // 0x15008D9C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x15008DA0: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x15008DA4: jal         0x15189900
    // 0x15008DA8: lbu         $a1, 0x1B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1B);
    func_15189900(rdram, ctx);
        goto after_1;
    // 0x15008DA8: lbu         $a1, 0x1B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1B);
    after_1:
    // 0x15008DAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15008DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15008DB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15008DB8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x15008DBC: jr          $ra
    // 0x15008DC0: nop

    return;
    return;
    // 0x15008DC0: nop

    // 0x15008DC4: nop

    // 0x15008DC8: nop

    // 0x15008DCC: nop

;}
RECOMP_FUNC void func_150E68B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E68B0: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150E68B4: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x150E68B8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150E68BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150E68C0: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x150E68C4: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x150E68C8: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x150E68CC: beq         $a1, $zero, L_150E6B74
    if (ctx->r5 == 0) {
        // 0x150E68D0: lui         $t6, 0x800C
        ctx->r14 = S32(0X800C << 16);
            goto L_150E6B74;
    }
    // 0x150E68D0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150E68D4: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150E68D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150E68DC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150E68E0: bne         $t6, $at, L_150E68F8
    if (ctx->r14 != ctx->r1) {
        // 0x150E68E4: nop
    
            goto L_150E68F8;
    }
    // 0x150E68E4: nop

    // 0x150E68E8: lbu         $t7, 0x35E8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35E8);
    // 0x150E68EC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x150E68F0: beql        $t7, $at, L_150E6B78
    if (ctx->r15 == ctx->r1) {
        // 0x150E68F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150E6B78;
    }
    goto skip_0;
    // 0x150E68F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_150E68F8:
    // 0x150E68F8: jal         0x150ADA68
    // 0x150E68FC: sw          $a1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r5;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150E68FC: sw          $a1, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r5;
    after_0:
    // 0x150E6900: lbu         $t8, 0xB7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XB7);
    // 0x150E6904: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x150E6908: addiu       $t0, $t0, 0x1190
    ctx->r8 = ADD32(ctx->r8, 0X1190);
    // 0x150E690C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x150E6910: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x150E6914: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150E6918: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    // 0x150E691C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150E6920: nop

    // 0x150E6924: bc1fl       L_150E6B78
    if (!c1cs) {
        // 0x150E6928: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150E6B78;
    }
    goto skip_1;
    // 0x150E6928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x150E692C: lb          $t1, 0x4($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X4);
    // 0x150E6930: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150E6934: beql        $a2, $t1, L_150E6B78
    if (ctx->r6 == ctx->r9) {
        // 0x150E6938: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150E6B78;
    }
    goto skip_2;
    // 0x150E6938: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x150E693C: lb          $v1, 0x5($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X5);
    // 0x150E6940: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150E6944: beq         $a2, $v1, L_150E6974
    if (ctx->r6 == ctx->r3) {
        // 0x150E6948: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_150E6974;
    }
    // 0x150E6948: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x150E694C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x150E6950: lw          $t9, -0x75D4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75D4);
    // 0x150E6954: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x150E6958: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x150E695C: jalr        $t9
    // 0x150E6960: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x150E6960: nop

    after_1:
    // 0x150E6964: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150E6968: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x150E696C: b           L_150E6988
    // 0x150E6970: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_150E6988;
    // 0x150E6970: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_150E6974:
    // 0x150E6974: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150E6978: nop

    // 0x150E697C: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x150E6980: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    // 0x150E6984: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
L_150E6988:
    // 0x150E6988: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x150E698C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150E6990: beq         $a2, $v1, L_150E69C0
    if (ctx->r6 == ctx->r3) {
        // 0x150E6994: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_150E69C0;
    }
    // 0x150E6994: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x150E6998: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x150E699C: lw          $t9, -0x75E0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75E0);
    // 0x150E69A0: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E69A4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x150E69A8: jalr        $t9
    // 0x150E69AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x150E69AC: nop

    after_2:
    // 0x150E69B0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150E69B4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x150E69B8: b           L_150E69CC
    // 0x150E69BC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
        goto L_150E69CC;
    // 0x150E69BC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_150E69C0:
    // 0x150E69C0: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x150E69C4: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x150E69C8: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
L_150E69CC:
    // 0x150E69CC: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x150E69D0: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150E69D4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150E69D8: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x150E69DC: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150E69E0: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150E69E4: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150E69E8: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150E69EC: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x150E69F0: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x150E69F4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150E69F8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150E69FC: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x150E6A00: bc1f        L_150E6A18
    if (!c1cs) {
        // 0x150E6A04: swc1        $f8, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
            goto L_150E6A18;
    }
    // 0x150E6A04: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x150E6A08: c.eq.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl == ctx->f12.fl;
    // 0x150E6A0C: nop

    // 0x150E6A10: bc1tl       L_150E6B78
    if (c1cs) {
        // 0x150E6A14: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150E6B78;
    }
    goto skip_3;
    // 0x150E6A14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_3:
L_150E6A18:
    // 0x150E6A18: lb          $v1, 0x6($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X6);
    // 0x150E6A1C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x150E6A20: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x150E6A24: beq         $a2, $v1, L_150E6A50
    if (ctx->r6 == ctx->r3) {
        // 0x150E6A28: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_150E6A50;
    }
    // 0x150E6A28: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x150E6A2C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150E6A30: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x150E6A34: lw          $t9, -0x75CC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X75CC);
    // 0x150E6A38: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x150E6A3C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x150E6A40: jalr        $t9
    // 0x150E6A44: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x150E6A44: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_3:
    // 0x150E6A48: b           L_150E6A68
    // 0x150E6A4C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
        goto L_150E6A68;
    // 0x150E6A4C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
L_150E6A50:
    // 0x150E6A50: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150E6A54: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x150E6A58: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x150E6A5C: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x150E6A60: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x150E6A64: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
L_150E6A68:
    // 0x150E6A68: jal         0x150ADA68
    // 0x150E6A6C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150E6A6C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_4:
    // 0x150E6A70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E6A74: lwc1        $f10, 0x12F8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X12F8);
    // 0x150E6A78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E6A7C: lwc1        $f18, 0x12FC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X12FC);
    // 0x150E6A80: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150E6A84: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150E6A88: addiu       $t6, $sp, 0x8C
    ctx->r14 = ADD32(ctx->r29, 0X8C);
    // 0x150E6A8C: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x150E6A90: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    // 0x150E6A94: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150E6A98: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x150E6A9C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150E6AA0: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x150E6AA4: lw          $t0, 0x4($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X4);
    // 0x150E6AA8: sw          $t0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r8;
    // 0x150E6AAC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x150E6AB0: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x150E6AB4: jal         0x150ADA68
    // 0x150E6AB8: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150E6AB8: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x150E6ABC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150E6AC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E6AC4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150E6AC8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E6ACC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150E6AD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E6AD4: lwc1        $f18, 0x1300($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1300);
    // 0x150E6AD8: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x150E6ADC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150E6AE0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150E6AE4: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x150E6AE8: lh          $t1, 0x8($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X8);
    // 0x150E6AEC: sh          $t1, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r9;
    // 0x150E6AF0: lh          $t2, 0xA($v0)
    ctx->r10 = MEM_H(ctx->r2, 0XA);
    // 0x150E6AF4: sh          $t2, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r10;
    // 0x150E6AF8: lbu         $t3, 0xC($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XC);
    // 0x150E6AFC: jal         0x150ADA68
    // 0x150E6B00: sb          $t3, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r11;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150E6B00: sb          $t3, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r11;
    after_6:
    // 0x150E6B04: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150E6B08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E6B0C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150E6B10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E6B14: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150E6B18: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x150E6B1C: addiu       $t5, $zero, 0x44
    ctx->r13 = ADD32(0, 0X44);
    // 0x150E6B20: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150E6B24: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150E6B28: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x150E6B2C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150E6B30: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150E6B34: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x150E6B38: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150E6B3C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150E6B40: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150E6B44: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x150E6B48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150E6B4C: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x150E6B50: nop

    // 0x150E6B54: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x150E6B58: jal         0x151491F4
    // 0x150E6B5C: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    func_151491F4(rdram, ctx);
        goto after_7;
    // 0x150E6B5C: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    after_7:
    // 0x150E6B60: beq         $v0, $zero, L_150E6B74
    if (ctx->r2 == 0) {
        // 0x150E6B64: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150E6B74;
    }
    // 0x150E6B64: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150E6B68: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x150E6B6C: jal         0x10022EC0
    // 0x150E6B70: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x150E6B70: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    after_8:
L_150E6B74:
    // 0x150E6B74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150E6B78:
    // 0x150E6B78: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150E6B7C: jr          $ra
    // 0x150E6B80: nop

    return;
    return;
    // 0x150E6B80: nop

;}
RECOMP_FUNC void func_1507E9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E9E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1507E9EC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1507E9F0: jr          $ra
    // 0x1507E9F4: nop

    return;
    return;
    // 0x1507E9F4: nop

;}
RECOMP_FUNC void func_15187EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15187EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15187EC4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15187EC8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x15187ECC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15187ED0: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x15187ED4: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15187ED8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15187EDC: addiu       $t0, $t0, -0x84C
    ctx->r8 = ADD32(ctx->r8, -0X84C);
    // 0x15187EE0: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x15187EE4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15187EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15187EEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15187EF0: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x15187EF4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15187EF8: addiu       $t9, $t9, -0x900
    ctx->r25 = ADD32(ctx->r25, -0X900);
    // 0x15187EFC: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x15187F00: beq         $at, $zero, L_15187F7C
    if (ctx->r1 == 0) {
        // 0x15187F04: sll         $t8, $v1, 3
        ctx->r24 = S32(ctx->r3 << 3);
            goto L_15187F7C;
    }
    // 0x15187F04: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x15187F08: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x15187F0C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15187F10: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15187F14: lbu         $t5, 0x2B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2B);
    // 0x15187F18: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x15187F1C: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x15187F20: lbu         $t7, 0x33($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X33);
    // 0x15187F24: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x15187F28: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x15187F2C: sb          $a2, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r6;
    // 0x15187F30: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
    // 0x15187F34: sb          $a3, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r7;
    // 0x15187F38: sb          $a3, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r7;
    // 0x15187F3C: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x15187F40: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x15187F44: sb          $t5, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r13;
    // 0x15187F48: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x15187F4C: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    // 0x15187F50: sb          $t6, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r14;
    // 0x15187F54: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x15187F58: jal         0x100226F0
    // 0x15187F5C: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15187F5C: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    after_0:
    // 0x15187F60: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15187F64: addiu       $t0, $t0, -0x84C
    ctx->r8 = ADD32(ctx->r8, -0X84C);
    // 0x15187F68: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15187F6C: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x15187F70: sw          $t1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r9;
    // 0x15187F74: b           L_15187F80
    // 0x15187F78: addiu       $v0, $t1, -0x1
    ctx->r2 = ADD32(ctx->r9, -0X1);
        goto L_15187F80;
    // 0x15187F78: addiu       $v0, $t1, -0x1
    ctx->r2 = ADD32(ctx->r9, -0X1);
L_15187F7C:
    // 0x15187F7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15187F80:
    // 0x15187F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15187F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15187F88: jr          $ra
    // 0x15187F8C: nop

    return;
    return;
    // 0x15187F8C: nop

;}
RECOMP_FUNC void func_1501748C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501748C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15017490: jr          $ra
    // 0x15017494: nop

    return;
    return;
    // 0x15017494: nop

;}
RECOMP_FUNC void func_15043E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043E68: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15043E6C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15043E70: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x15043E74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15043E78: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15043E7C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x15043E80: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15043E84: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x15043E88: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15043E8C: jal         0x150A8050
    // 0x15043E90: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15043E90: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_0:
    // 0x15043E94: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15043E98: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15043E9C: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15043EA0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15043EA4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x15043EA8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x15043EAC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x15043EB0: jal         0x150A7790
    // 0x15043EB4: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x15043EB4: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x15043EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15043EBC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15043EC0: jr          $ra
    // 0x15043EC4: nop

    return;
    return;
    // 0x15043EC4: nop

;}
RECOMP_FUNC void func_15048664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15048664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15048668: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x1504866C: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x15048670: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15048674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15048678: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1504867C: bltz        $a1, L_1504868C
    if (SIGNED(ctx->r5) < 0) {
        // 0x15048680: negu        $a0, $a1
        ctx->r4 = SUB32(0, ctx->r5);
            goto L_1504868C;
    }
    // 0x15048680: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    // 0x15048684: b           L_1504868C
    // 0x15048688: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
        goto L_1504868C;
    // 0x15048688: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_1504868C:
    // 0x1504868C: jal         0x150485E0
    // 0x15048690: sh          $a1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r5;
    func_150485E0(rdram, ctx);
        goto after_0;
    // 0x15048690: sh          $a1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r5;
    after_0:
    // 0x15048694: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x15048698: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1504869C: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x150486A0: bgez        $a1, L_150486AC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x150486A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150486AC;
    }
    // 0x150486A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150486A8: subu        $a0, $t7, $v0
    ctx->r4 = SUB32(ctx->r15, ctx->r2);
L_150486AC:
    // 0x150486AC: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x150486B0: jr          $ra
    // 0x150486B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150486B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151A6068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A6068: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x151A606C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151A6070: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151A6074: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151A6078: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x151A607C: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x151A6080: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x151A6084: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151A6088: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x151A608C: jal         0x150ADA68
    // 0x151A6090: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151A6090: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151A6094: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x151A6098: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A609C: lui         $at, 0xC3BE
    ctx->r1 = S32(0XC3BE << 16);
    // 0x151A60A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151A60A4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151A60A8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151A60AC: jal         0x150ADA68
    // 0x151A60B0: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151A60B0: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x151A60B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A60B8: lwc1        $f18, -0x7268($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7268);
    // 0x151A60BC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A60C0: lwc1        $f6, -0x7264($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7264);
    // 0x151A60C4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151A60C8: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x151A60CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A60D0: jal         0x150ADA20
    // 0x151A60D4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151A60D4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x151A60D8: jal         0x150ADA20
    // 0x151A60DC: sb          $v0, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151A60DC: sb          $v0, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r2;
    after_3:
    // 0x151A60E0: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x151A60E4: addiu       $t8, $t7, 0x4
    ctx->r24 = ADD32(ctx->r15, 0X4);
    // 0x151A60E8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151A60EC: lbu         $t0, 0xE7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XE7);
    // 0x151A60F0: sb          $t8, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r24;
    // 0x151A60F4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151A60F8: addiu       $t1, $zero, 0x6B
    ctx->r9 = ADD32(0, 0X6B);
    // 0x151A60FC: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x151A6100: addiu       $t3, $zero, 0x4C03
    ctx->r11 = ADD32(0, 0X4C03);
    // 0x151A6104: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x151A6108: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151A610C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151A6110: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151A6114: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151A6118: sb          $t9, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r25;
    // 0x151A611C: sb          $t1, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r9;
    // 0x151A6120: sb          $t2, 0x81($sp)
    MEM_B(0X81, ctx->r29) = ctx->r10;
    // 0x151A6124: sh          $t3, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r11;
    // 0x151A6128: sh          $t4, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r12;
    // 0x151A612C: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x151A6130: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x151A6134: sb          $t5, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r13;
    // 0x151A6138: sb          $t6, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r14;
    // 0x151A613C: sb          $t7, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r15;
    // 0x151A6140: sb          $t8, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r24;
    // 0x151A6144: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x151A6148: sb          $t0, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r8;
    // 0x151A614C: lh          $t9, 0x6($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X6);
    // 0x151A6150: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A6154: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151A6158: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x151A615C: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x151A6160: lui         $t4, 0x1EC
    ctx->r12 = S32(0X1EC << 16);
    // 0x151A6164: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151A6168: ori         $t4, $t4, 0x9
    ctx->r12 = ctx->r12 | 0X9;
    // 0x151A616C: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x151A6170: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x151A6174: addiu       $a1, $a1, 0x4AA0
    ctx->r5 = ADD32(ctx->r5, 0X4AA0);
    // 0x151A6178: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x151A617C: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x151A6180: lh          $t0, 0x8($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X8);
    // 0x151A6184: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A6188: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x151A618C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x151A6190: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x151A6194: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151A6198: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x151A619C: lh          $t1, 0x0($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X0);
    // 0x151A61A0: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x151A61A4: lbu         $t1, 0xEB($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XEB);
    // 0x151A61A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151A61AC: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x151A61B0: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x151A61B4: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x151A61B8: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x151A61BC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151A61C0: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x151A61C4: lh          $t3, 0x4($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X4);
    // 0x151A61C8: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    // 0x151A61CC: sb          $t5, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r13;
    // 0x151A61D0: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x151A61D4: sb          $t6, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r14;
    // 0x151A61D8: sb          $zero, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = 0;
    // 0x151A61DC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151A61E0: sb          $zero, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = 0;
    // 0x151A61E4: sb          $t8, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r24;
    // 0x151A61E8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151A61EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151A61F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151A61F4: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x151A61F8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151A61FC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151A6200: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A6204: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x151A6208: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x151A620C: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x151A6210: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x151A6214: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x151A6218: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x151A621C: sw          $t7, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r15;
    // 0x151A6220: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x151A6224: jal         0x1513D2F0
    // 0x151A6228: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_1513D2F0(rdram, ctx);
        goto after_4;
    // 0x151A6228: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_4:
    // 0x151A622C: beq         $v0, $zero, L_151A62D8
    if (ctx->r2 == 0) {
        // 0x151A6230: addiu       $a0, $v0, 0x110
        ctx->r4 = ADD32(ctx->r2, 0X110);
            goto L_151A62D8;
    }
    // 0x151A6230: addiu       $a0, $v0, 0x110
    ctx->r4 = ADD32(ctx->r2, 0X110);
    // 0x151A6234: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x151A6238: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x151A623C: jal         0x10022EC0
    // 0x151A6240: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151A6240: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_5:
    // 0x151A6244: lbu         $t3, 0xE3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XE3);
    // 0x151A6248: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x151A624C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x151A6250: beq         $t3, $zero, L_151A62D8
    if (ctx->r11 == 0) {
        // 0x151A6254: addiu       $t2, $zero, 0x12C
        ctx->r10 = ADD32(0, 0X12C);
            goto L_151A62D8;
    }
    // 0x151A6254: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x151A6258: lh          $t4, 0x0($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X0);
    // 0x151A625C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x151A6260: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151A6264: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x151A6268: lh          $t6, 0x8($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X8);
    // 0x151A626C: lh          $t5, 0x2($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2);
    // 0x151A6270: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151A6274: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x151A6278: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x151A627C: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x151A6280: lh          $t9, 0x4($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4);
    // 0x151A6284: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x151A6288: lbu         $t5, 0xEB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XEB);
    // 0x151A628C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x151A6290: sb          $t0, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r8;
    // 0x151A6294: sb          $t1, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r9;
    // 0x151A6298: sh          $t2, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r10;
    // 0x151A629C: sb          $t3, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r11;
    // 0x151A62A0: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x151A62A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151A62A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151A62AC: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151A62B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151A62B4: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x151A62B8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151A62BC: addiu       $a3, $zero, 0x79
    ctx->r7 = ADD32(0, 0X79);
    // 0x151A62C0: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x151A62C4: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x151A62C8: jal         0x1516284C
    // 0x151A62CC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    func_1516284C(rdram, ctx);
        goto after_6;
    // 0x151A62CC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_6:
    // 0x151A62D0: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x151A62D4: sw          $v0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r2;
L_151A62D8:
    // 0x151A62D8: lbu         $t9, 0xE3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE3);
    // 0x151A62DC: beql        $t9, $zero, L_151A6340
    if (ctx->r25 == 0) {
        // 0x151A62E0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_151A6340;
    }
    goto skip_0;
    // 0x151A62E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x151A62E4: jal         0x150ADA20
    // 0x151A62E8: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151A62E8: nop

    after_7:
    // 0x151A62EC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x151A62F0: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x151A62F4: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x151A62F8: lui         $t3, 0x1001
    ctx->r11 = S32(0X1001 << 16);
    // 0x151A62FC: addiu       $t3, $t3, -0x10C0
    ctx->r11 = ADD32(ctx->r11, -0X10C0);
    // 0x151A6300: addiu       $t0, $zero, 0x4000
    ctx->r8 = ADD32(0, 0X4000);
    // 0x151A6304: addiu       $t1, $zero, 0x3E8
    ctx->r9 = ADD32(0, 0X3E8);
    // 0x151A6308: addiu       $t2, $zero, 0x2EE
    ctx->r10 = ADD32(0, 0X2EE);
    // 0x151A630C: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x151A6310: andi        $t6, $v0, 0x300
    ctx->r14 = ctx->r2 & 0X300;
    // 0x151A6314: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x151A6318: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x151A631C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x151A6320: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151A6324: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151A6328: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151A632C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151A6330: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151A6334: jal         0x1000FA64
    // 0x151A6338: addiu       $a0, $zero, 0x1AA
    ctx->r4 = ADD32(0, 0X1AA);
    func_1000FA64(rdram, ctx);
        goto after_8;
    // 0x151A6338: addiu       $a0, $zero, 0x1AA
    ctx->r4 = ADD32(0, 0X1AA);
    after_8:
    // 0x151A633C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_151A6340:
    // 0x151A6340: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151A6344: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x151A6348: jr          $ra
    // 0x151A634C: nop

    return;
    return;
    // 0x151A634C: nop

;}
RECOMP_FUNC void func_150F26A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F26A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150F26A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150F26A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F26AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150F26B0: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x150F26B4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150F26B8: lbu         $t6, 0x102($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X102);
    // 0x150F26BC: beql        $t6, $zero, L_150F27BC
    if (ctx->r14 == 0) {
        // 0x150F26C0: sb          $t8, 0x7($v0)
        MEM_B(0X7, ctx->r2) = ctx->r24;
            goto L_150F27BC;
    }
    goto skip_0;
    // 0x150F26C0: sb          $t8, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r24;
    skip_0:
    // 0x150F26C4: lbu         $t7, 0x104($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X104);
    // 0x150F26C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F26CC: bnel        $t7, $zero, L_150F27BC
    if (ctx->r15 != 0) {
        // 0x150F26D0: sb          $t8, 0x7($v0)
        MEM_B(0X7, ctx->r2) = ctx->r24;
            goto L_150F27BC;
    }
    goto skip_1;
    // 0x150F26D0: sb          $t8, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r24;
    skip_1:
    // 0x150F26D4: jal         0x150F2994
    // 0x150F26D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_150F2994(rdram, ctx);
        goto after_0;
    // 0x150F26D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x150F26DC: lw          $t8, 0x2C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C);
    // 0x150F26E0: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x150F26E4: beql        $t8, $at, L_150F28C8
    if (ctx->r24 == ctx->r1) {
        // 0x150F26E8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150F28C8;
    }
    goto skip_2;
    // 0x150F26E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
    // 0x150F26EC: lw          $t9, 0x6C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C8);
    // 0x150F26F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F26F4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x150F26F8: bne         $t9, $zero, L_150F28C4
    if (ctx->r25 != 0) {
        // 0x150F26FC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150F28C4;
    }
    // 0x150F26FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F2700: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150F2704: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150F2708: jal         0x15123934
    // 0x150F270C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_1;
    // 0x150F270C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x150F2710: beq         $v0, $zero, L_150F274C
    if (ctx->r2 == 0) {
        // 0x150F2714: lui         $at, 0x30
        ctx->r1 = S32(0X30 << 16);
            goto L_150F274C;
    }
    // 0x150F2714: lui         $at, 0x30
    ctx->r1 = S32(0X30 << 16);
    // 0x150F2718: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x150F271C: ori         $at, $at, 0x400
    ctx->r1 = ctx->r1 | 0X400;
    // 0x150F2720: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150F2724: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x150F2728: addiu       $at, $zero, -0x7
    ctx->r1 = ADD32(0, -0X7);
    // 0x150F272C: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x150F2730: and         $t4, $t2, $at
    ctx->r12 = ctx->r10 & ctx->r1;
    // 0x150F2734: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x150F2738: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    // 0x150F273C: sh          $t5, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r13;
    // 0x150F2740: sh          $t6, 0x1E0($s0)
    MEM_H(0X1E0, ctx->r16) = ctx->r14;
    // 0x150F2744: jal         0x15124B18
    // 0x150F2748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15124B18(rdram, ctx);
        goto after_2;
    // 0x150F2748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_150F274C:
    // 0x150F274C: lui         $at, 0x41E8
    ctx->r1 = S32(0X41E8 << 16);
    // 0x150F2750: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F2754: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150F2758: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F275C: lbu         $t7, 0x3E8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X3E8);
    // 0x150F2760: lui         $at, 0xC198
    ctx->r1 = S32(0XC198 << 16);
    // 0x150F2764: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F2768: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150F276C: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150F2770: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x150F2774: bne         $t7, $zero, L_150F28C4
    if (ctx->r15 != 0) {
        // 0x150F2778: swc1        $f6, 0x190($s0)
        MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
            goto L_150F28C4;
    }
    // 0x150F2778: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
    // 0x150F277C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150F2780: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F2784: lwc1        $f0, 0x374($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X374);
    // 0x150F2788: lwc1        $f16, 0x370($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X370);
    // 0x150F278C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F2790: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150F2794: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x150F2798: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x150F279C: nop

    // 0x150F27A0: bc1fl       L_150F28C8
    if (!c1cs) {
        // 0x150F27A4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150F28C8;
    }
    goto skip_3;
    // 0x150F27A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_3:
    // 0x150F27A8: jal         0x15128774
    // 0x150F27AC: lw          $a1, 0x3D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D0);
    func_15128774(rdram, ctx);
        goto after_3;
    // 0x150F27AC: lw          $a1, 0x3D0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D0);
    after_3:
    // 0x150F27B0: b           L_150F28C8
    // 0x150F27B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_150F28C8;
    // 0x150F27B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150F27B8: sb          $t8, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r24;
L_150F27BC:
    // 0x150F27BC: lbu         $t9, 0x23E($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X23E);
    // 0x150F27C0: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x150F27C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F27C8: bnel        $t9, $at, L_150F2870
    if (ctx->r25 != ctx->r1) {
        // 0x150F27CC: lw          $v0, 0x2C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X2C);
            goto L_150F2870;
    }
    goto skip_4;
    // 0x150F27CC: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    skip_4:
    // 0x150F27D0: jal         0x150F2994
    // 0x150F27D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_150F2994(rdram, ctx);
        goto after_4;
    // 0x150F27D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x150F27D8: lw          $t0, 0x2C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X2C);
    // 0x150F27DC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x150F27E0: beql        $t0, $at, L_150F28C8
    if (ctx->r8 == ctx->r1) {
        // 0x150F27E4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150F28C8;
    }
    goto skip_5;
    // 0x150F27E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_5:
    // 0x150F27E8: lw          $t1, 0x6C8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X6C8);
    // 0x150F27EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F27F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150F27F4: bne         $t1, $zero, L_150F28C4
    if (ctx->r9 != 0) {
        // 0x150F27F8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_150F28C4;
    }
    // 0x150F27F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F27FC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150F2800: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150F2804: jal         0x15123934
    // 0x150F2808: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_5;
    // 0x150F2808: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x150F280C: beq         $v0, $zero, L_150F283C
    if (ctx->r2 == 0) {
        // 0x150F2810: lui         $at, 0x30
        ctx->r1 = S32(0X30 << 16);
            goto L_150F283C;
    }
    // 0x150F2810: lui         $at, 0x30
    ctx->r1 = S32(0X30 << 16);
    // 0x150F2814: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    // 0x150F2818: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150F281C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150F2820: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x150F2824: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150F2828: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    // 0x150F282C: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x150F2830: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
    // 0x150F2834: sh          $t7, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r15;
    // 0x150F2838: sh          $t8, 0x1E0($s0)
    MEM_H(0X1E0, ctx->r16) = ctx->r24;
L_150F283C:
    // 0x150F283C: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x150F2840: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F2844: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x150F2848: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F284C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150F2850: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F2854: sw          $zero, 0x134($s0)
    MEM_W(0X134, ctx->r16) = 0;
    // 0x150F2858: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150F285C: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150F2860: swc1        $f4, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f4.u32l;
    // 0x150F2864: b           L_150F28C4
    // 0x150F2868: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
        goto L_150F28C4;
    // 0x150F2868: swc1        $f6, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f6.u32l;
    // 0x150F286C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
L_150F2870:
    // 0x150F2870: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150F2874: beq         $v0, $at, L_150F2884
    if (ctx->r2 == ctx->r1) {
        // 0x150F2878: addiu       $at, $zero, 0x80
        ctx->r1 = ADD32(0, 0X80);
            goto L_150F2884;
    }
    // 0x150F2878: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x150F287C: bnel        $v0, $at, L_150F28A0
    if (ctx->r2 != ctx->r1) {
        // 0x150F2880: lh          $t0, 0x1B4($s0)
        ctx->r8 = MEM_H(ctx->r16, 0X1B4);
            goto L_150F28A0;
    }
    goto skip_6;
    // 0x150F2880: lh          $t0, 0x1B4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1B4);
    skip_6:
L_150F2884:
    // 0x150F2884: lw          $t9, 0x6C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C8);
    // 0x150F2888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F288C: bnel        $t9, $zero, L_150F28A0
    if (ctx->r25 != 0) {
        // 0x150F2890: lh          $t0, 0x1B4($s0)
        ctx->r8 = MEM_H(ctx->r16, 0X1B4);
            goto L_150F28A0;
    }
    goto skip_7;
    // 0x150F2890: lh          $t0, 0x1B4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1B4);
    skip_7:
    // 0x150F2894: jal         0x151239CC
    // 0x150F2898: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151239CC(rdram, ctx);
        goto after_6;
    // 0x150F2898: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x150F289C: lh          $t0, 0x1B4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1B4);
L_150F28A0:
    // 0x150F28A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150F28A4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150F28A8: bne         $t0, $at, L_150F28B8
    if (ctx->r8 != ctx->r1) {
        // 0x150F28AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150F28B8;
    }
    // 0x150F28AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F28B0: jal         0x15124B18
    // 0x150F28B4: sh          $t1, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r9;
    func_15124B18(rdram, ctx);
        goto after_7;
    // 0x150F28B4: sh          $t1, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r9;
    after_7:
L_150F28B8:
    // 0x150F28B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F28BC: jal         0x150F2994
    // 0x150F28C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150F2994(rdram, ctx);
        goto after_8;
    // 0x150F28C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_150F28C4:
    // 0x150F28C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_150F28C8:
    // 0x150F28C8: addiu       $a1, $zero, 0x405A
    ctx->r5 = ADD32(0, 0X405A);
    // 0x150F28CC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150F28D0: jal         0x1509BE40
    // 0x150F28D4: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_9;
    // 0x150F28D4: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_9:
    // 0x150F28D8: beq         $v0, $zero, L_150F28F4
    if (ctx->r2 == 0) {
        // 0x150F28DC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150F28F4;
    }
    // 0x150F28DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150F28E0: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x150F28E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F28E8: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x150F28EC: b           L_150F2908
    // 0x150F28F0: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
        goto L_150F2908;
    // 0x150F28F0: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
L_150F28F4:
    // 0x150F28F4: lw          $t4, 0x84($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X84);
    // 0x150F28F8: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x150F28FC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150F2900: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x150F2904: sw          $t5, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r13;
L_150F2908:
    // 0x150F2908: addiu       $a1, $zero, 0x405E
    ctx->r5 = ADD32(0, 0X405E);
    // 0x150F290C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150F2910: jal         0x1509BE40
    // 0x150F2914: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    func_1509BE40(rdram, ctx);
        goto after_10;
    // 0x150F2914: ori         $a3, $zero, 0x9000
    ctx->r7 = 0 | 0X9000;
    after_10:
    // 0x150F2918: beq         $v0, $zero, L_150F2934
    if (ctx->r2 == 0) {
        // 0x150F291C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_150F2934;
    }
    // 0x150F291C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150F2920: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150F2924: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x150F2928: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x150F292C: b           L_150F2948
    // 0x150F2930: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
        goto L_150F2948;
    // 0x150F2930: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
L_150F2934:
    // 0x150F2934: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x150F2938: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x150F293C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150F2940: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150F2944: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
L_150F2948:
    // 0x150F2948: addiu       $a1, $zero, 0x405F
    ctx->r5 = ADD32(0, 0X405F);
    // 0x150F294C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150F2950: jal         0x1509BE40
    // 0x150F2954: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_11;
    // 0x150F2954: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_11:
    // 0x150F2958: beql        $v0, $zero, L_150F2974
    if (ctx->r2 == 0) {
        // 0x150F295C: lw          $t2, 0x84($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X84);
            goto L_150F2974;
    }
    goto skip_8;
    // 0x150F295C: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    skip_8:
    // 0x150F2960: lw          $t0, 0x84($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X84);
    // 0x150F2964: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x150F2968: b           L_150F2980
    // 0x150F296C: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
        goto L_150F2980;
    // 0x150F296C: sw          $t1, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r9;
    // 0x150F2970: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
L_150F2974:
    // 0x150F2974: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x150F2978: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x150F297C: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
L_150F2980:
    // 0x150F2980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150F2984: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150F2988: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150F298C: jr          $ra
    // 0x150F2990: nop

    return;
    return;
    // 0x150F2990: nop

;}
RECOMP_FUNC void func_15072E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072E98: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15072E9C: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x15072EA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15072EA4: lwc1        $f6, 0x1874($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1874);
    // 0x15072EA8: lw          $v0, 0x2D0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X2D0);
    // 0x15072EAC: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15072EB0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15072EB4: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x15072EB8: jr          $ra
    // 0x15072EBC: nop

    return;
    return;
    // 0x15072EBC: nop

;}
RECOMP_FUNC void func_15127FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15127FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15127FF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15127FF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15127FF8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15127FFC: lwc1        $f4, 0x2A4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2A4);
    // 0x15128000: lwc1        $f6, 0x2A8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2A8);
    // 0x15128004: lwc1        $f8, 0x2AC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2AC);
    // 0x15128008: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1512800C: sh          $t6, 0x7F4($a0)
    MEM_H(0X7F4, ctx->r4) = ctx->r14;
    // 0x15128010: swc1        $f4, 0x7F8($a0)
    MEM_W(0X7F8, ctx->r4) = ctx->f4.u32l;
    // 0x15128014: swc1        $f6, 0x7FC($a0)
    MEM_W(0X7FC, ctx->r4) = ctx->f6.u32l;
    // 0x15128018: jal         0x1512A390
    // 0x1512801C: swc1        $f8, 0x800($a0)
    MEM_W(0X800, ctx->r4) = ctx->f8.u32l;
    func_1512A390(rdram, ctx);
        goto after_0;
    // 0x1512801C: swc1        $f8, 0x800($a0)
    MEM_W(0X800, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x15128020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15128024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15128028: jr          $ra
    // 0x1512802C: nop

    return;
    return;
    // 0x1512802C: nop

;}
RECOMP_FUNC void func_1514E668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514E668: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1514E66C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1514E670: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1514E674: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x1514E678: addiu       $t8, $t8, 0x58F8
    ctx->r24 = ADD32(ctx->r24, 0X58F8);
    // 0x1514E67C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1514E680: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1514E684: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1514E688: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1514E68C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1514E690: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1514E694: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x1514E698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514E69C: jal         0x1518D1C0
    // 0x1514E6A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_1518D1C0(rdram, ctx);
        goto after_0;
    // 0x1514E6A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1514E6A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514E6A8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x1514E6AC: jal         0x1514EC1C
    // 0x1514E6B0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514E6B0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_1:
    // 0x1514E6B4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x1514E6B8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1514E6BC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1514E6C0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1514E6C4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1514E6C8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x1514E6CC: sra         $a1, $v1, 16
    ctx->r5 = S32(SIGNED(ctx->r3) >> 16);
    // 0x1514E6D0: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x1514E6D4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1514E6D8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1514E6DC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1514E6E0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1514E6E4: addiu       $a0, $zero, -0x8000
    ctx->r4 = ADD32(0, -0X8000);
    // 0x1514E6E8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x1514E6EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1514E6F0: jal         0x1515D5F8
    // 0x1514E6F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_1515D5F8(rdram, ctx);
        goto after_2;
    // 0x1514E6F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_2:
    // 0x1514E6F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514E6FC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x1514E700: jal         0x1514EC1C
    // 0x1514E704: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_1514EC1C(rdram, ctx);
        goto after_3;
    // 0x1514E704: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_3:
    // 0x1514E708: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1514E70C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1514E710: jr          $ra
    // 0x1514E714: nop

    return;
    return;
    // 0x1514E714: nop

;}
RECOMP_FUNC void func_15197C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15197C10: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x15197C14: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x15197C18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15197C1C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x15197C20: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x15197C24: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x15197C28: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x15197C2C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x15197C30: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x15197C34: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15197C38: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x15197C3C: addiu       $t6, $sp, 0x77
    ctx->r14 = ADD32(ctx->r29, 0X77);
    // 0x15197C40: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15197C44: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x15197C48: lh          $a1, 0xBE($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XBE);
    // 0x15197C4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15197C50: jal         0x151D5D60
    // 0x15197C54: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x15197C54: addiu       $a3, $sp, 0xB4
    ctx->r7 = ADD32(ctx->r29, 0XB4);
    after_0:
    // 0x15197C58: lw          $v0, 0xB4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB4);
    // 0x15197C5C: lbu         $t7, 0x77($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X77);
    // 0x15197C60: beq         $v0, $zero, L_15197CB0
    if (ctx->r2 == 0) {
        // 0x15197C64: sw          $v0, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r2;
            goto L_15197CB0;
    }
    // 0x15197C64: sw          $v0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r2;
    // 0x15197C68: beq         $t7, $zero, L_15197CB8
    if (ctx->r15 == 0) {
        // 0x15197C6C: lh          $t8, 0xBE($sp)
        ctx->r24 = MEM_H(ctx->r29, 0XBE);
            goto L_15197CB8;
    }
    // 0x15197C6C: lh          $t8, 0xBE($sp)
    ctx->r24 = MEM_H(ctx->r29, 0XBE);
    // 0x15197C70: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15197C74: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x15197C78: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x15197C7C: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x15197C80: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x15197C84: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x15197C88: jal         0x10022EC0
    // 0x15197C8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15197C8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x15197C90: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x15197C94: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x15197C98: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x15197C9C: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x15197CA0: jal         0x10022EC0
    // 0x15197CA4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15197CA4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
    // 0x15197CA8: b           L_15197CBC
    // 0x15197CAC: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
        goto L_15197CBC;
    // 0x15197CAC: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
L_15197CB0:
    // 0x15197CB0: b           L_1519802C
    // 0x15197CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519802C;
    // 0x15197CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15197CB8:
    // 0x15197CB8: lwc1        $f14, 0x34($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X34);
L_15197CBC:
    // 0x15197CBC: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15197CC0: lwc1        $f2, 0x38($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15197CC4: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x15197CC8: sub.s       $f18, $f4, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x15197CCC: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15197CD0: lwc1        $f12, 0x3C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15197CD4: sub.s       $f20, $f6, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x15197CD8: lwc1        $f8, 0x48($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X48);
    // 0x15197CDC: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15197CE0: lh          $t0, 0xBE($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XBE);
    // 0x15197CE4: sub.s       $f22, $f8, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x15197CE8: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x15197CEC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x15197CF0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x15197CF4: mul.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x15197CF8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15197CFC: add.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x15197D00: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x15197D04: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x15197D08: add.s       $f24, $f2, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x15197D0C: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x15197D10: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15197D14: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x15197D18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x15197D1C: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x15197D20: swc1        $f24, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f24.u32l;
    // 0x15197D24: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x15197D28: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x15197D2C: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x15197D30: swc1        $f14, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f14.u32l;
    // 0x15197D34: sub.s       $f22, $f10, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15197D38: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x15197D3C: lwc1        $f10, 0x300($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X300);
    // 0x15197D40: sub.s       $f20, $f24, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f24.fl - ctx->f2.fl;
    // 0x15197D44: lwc1        $f6, 0x2F8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x15197D48: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15197D4C: sub.s       $f24, $f12, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x15197D50: lwc1        $f8, 0x2FC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x15197D54: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x15197D58: sub.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x15197D5C: addiu       $v0, $v0, 0x2F8
    ctx->r2 = ADD32(ctx->r2, 0X2F8);
    // 0x15197D60: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15197D64: mul.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x15197D68: sub.s       $f16, $f2, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x15197D6C: mul.s       $f6, $f16, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x15197D70: nop

    // 0x15197D74: mul.s       $f8, $f22, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x15197D78: nop

    // 0x15197D7C: mul.s       $f10, $f24, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x15197D80: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15197D84: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x15197D88: nop

    // 0x15197D8C: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x15197D90: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15197D94: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15197D98: nop

    // 0x15197D9C: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15197DA0: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15197DA4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15197DA8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15197DAC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15197DB0: add.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15197DB4: c.eq.s      $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f30.fl == ctx->f26.fl;
    // 0x15197DB8: swc1        $f26, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f26.u32l;
    // 0x15197DBC: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15197DC0: bc1f        L_15197DD8
    if (!c1cs) {
        // 0x15197DC4: nop
    
            goto L_15197DD8;
    }
    // 0x15197DC4: nop

    // 0x15197DC8: mov.s       $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    ctx->f24.fl = ctx->f30.fl;
    // 0x15197DCC: mov.s       $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    ctx->f26.fl = ctx->f30.fl;
    // 0x15197DD0: b           L_15197DFC
    // 0x15197DD4: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
        goto L_15197DFC;
    // 0x15197DD4: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
L_15197DD8:
    // 0x15197DD8: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15197DDC: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15197DE0: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15197DE4: mul.s       $f24, $f2, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x15197DE8: nop

    // 0x15197DEC: mul.s       $f26, $f12, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f26.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x15197DF0: nop

    // 0x15197DF4: mul.s       $f28, $f14, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x15197DF8: nop

L_15197DFC:
    // 0x15197DFC: add.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x15197E00: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x15197E04: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x15197E08: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15197E0C: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x15197E10: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x15197E14: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x15197E18: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x15197E1C: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15197E20: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x15197E24: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x15197E28: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15197E2C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x15197E30: nop

    // 0x15197E34: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x15197E38: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15197E3C: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x15197E40: add.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f28.fl;
    // 0x15197E44: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15197E48: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x15197E4C: nop

    // 0x15197E50: sh          $t0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r8;
    // 0x15197E54: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x15197E58: sh          $zero, 0x6($t2)
    MEM_H(0X6, ctx->r10) = 0;
    // 0x15197E5C: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x15197E60: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x15197E64: sw          $t4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r12;
    // 0x15197E68: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15197E6C: sub.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f24.fl;
    // 0x15197E70: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15197E74: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x15197E78: nop

    // 0x15197E7C: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x15197E80: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15197E84: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x15197E88: sub.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f26.fl;
    // 0x15197E8C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15197E90: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15197E94: nop

    // 0x15197E98: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x15197E9C: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15197EA0: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x15197EA4: sub.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f28.fl;
    // 0x15197EA8: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15197EAC: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x15197EB0: nop

    // 0x15197EB4: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x15197EB8: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x15197EBC: sh          $zero, 0x6($t3)
    MEM_H(0X6, ctx->r11) = 0;
    // 0x15197EC0: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x15197EC4: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15197EC8: lwc1        $f10, 0xA4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x15197ECC: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x15197ED0: sw          $t6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r14;
    // 0x15197ED4: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15197ED8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15197EDC: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15197EE0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15197EE4: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x15197EE8: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15197EEC: sub.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15197EF0: mul.s       $f10, $f20, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x15197EF4: nop

    // 0x15197EF8: mul.s       $f4, $f16, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x15197EFC: nop

    // 0x15197F00: mul.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x15197F04: nop

    // 0x15197F08: mul.s       $f8, $f24, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f18.fl);
    // 0x15197F0C: sub.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15197F10: mul.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x15197F14: nop

    // 0x15197F18: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x15197F1C: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15197F20: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15197F24: nop

    // 0x15197F28: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15197F2C: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x15197F30: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x15197F34: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15197F38: add.s       $f26, $f10, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15197F3C: c.eq.s      $f30, $f26
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f30.fl == ctx->f26.fl;
    // 0x15197F40: swc1        $f26, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f26.u32l;
    // 0x15197F44: lwc1        $f0, 0x78($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15197F48: bc1f        L_15197F60
    if (!c1cs) {
        // 0x15197F4C: nop
    
            goto L_15197F60;
    }
    // 0x15197F4C: nop

    // 0x15197F50: mov.s       $f24, $f30
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    ctx->f24.fl = ctx->f30.fl;
    // 0x15197F54: mov.s       $f26, $f30
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    ctx->f26.fl = ctx->f30.fl;
    // 0x15197F58: b           L_15197F84
    // 0x15197F5C: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
        goto L_15197F84;
    // 0x15197F5C: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
L_15197F60:
    // 0x15197F60: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15197F64: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15197F68: div.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15197F6C: mul.s       $f24, $f2, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x15197F70: nop

    // 0x15197F74: mul.s       $f26, $f12, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f26.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x15197F78: nop

    // 0x15197F7C: mul.s       $f28, $f14, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x15197F80: nop

L_15197F84:
    // 0x15197F84: lwc1        $f12, 0xA0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15197F88: lwc1        $f2, 0xA4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x15197F8C: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x15197F90: add.s       $f8, $f12, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f24.fl;
    // 0x15197F94: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x15197F98: add.s       $f4, $f2, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f26.fl;
    // 0x15197F9C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15197FA0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15197FA4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x15197FA8: add.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f28.fl;
    // 0x15197FAC: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x15197FB0: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x15197FB4: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x15197FB8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15197FBC: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x15197FC0: lw          $t5, 0xB4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB4);
    // 0x15197FC4: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x15197FC8: sub.s       $f4, $f12, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f24.fl;
    // 0x15197FCC: sh          $t3, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r11;
    // 0x15197FD0: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x15197FD4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15197FD8: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x15197FDC: sub.s       $f8, $f2, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f26.fl;
    // 0x15197FE0: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x15197FE4: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x15197FE8: sub.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x15197FEC: addiu       $t7, $t4, 0x10
    ctx->r15 = ADD32(ctx->r12, 0X10);
    // 0x15197FF0: sw          $t7, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r15;
    // 0x15197FF4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15197FF8: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
    // 0x15197FFC: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x15198000: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15198004: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x15198008: nop

    // 0x1519800C: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x15198010: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x15198014: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x15198018: nop

    // 0x1519801C: sh          $t5, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r13;
    // 0x15198020: lw          $t4, 0xB4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB4);
    // 0x15198024: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x15198028: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
L_1519802C:
    // 0x1519802C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x15198030: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x15198034: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x15198038: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1519803C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x15198040: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x15198044: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x15198048: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1519804C: jr          $ra
    // 0x15198050: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x15198050: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_15156190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15156190: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15156194: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15156198: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1515619C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151561A0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151561A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151561A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151561AC: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151561B0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x151561B4: beq         $a1, $zero, L_151561D0
    if (ctx->r5 == 0) {
        // 0x151561B8: lw          $a2, 0x50($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X50);
            goto L_151561D0;
    }
    // 0x151561B8: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x151561BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151561C0: beq         $a1, $at, L_151561D8
    if (ctx->r5 == ctx->r1) {
        // 0x151561C4: addiu       $a0, $zero, 0x53
        ctx->r4 = ADD32(0, 0X53);
            goto L_151561D8;
    }
    // 0x151561C4: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    // 0x151561C8: b           L_151561D8
    // 0x151561CC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
        goto L_151561D8;
    // 0x151561CC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
L_151561D0:
    // 0x151561D0: b           L_151561D8
    // 0x151561D4: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
        goto L_151561D8;
    // 0x151561D4: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
L_151561D8:
    // 0x151561D8: lbu         $t7, 0x57($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X57);
    // 0x151561DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151561E0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151561E4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x151561E8: addiu       $a2, $a2, 0x98
    ctx->r6 = ADD32(ctx->r6, 0X98);
    // 0x151561EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151561F0: jal         0x15167A68
    // 0x151561F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151561F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x151561F8: bne         $v0, $zero, L_15156208
    if (ctx->r2 != 0) {
        // 0x151561FC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15156208;
    }
    // 0x151561FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15156200: b           L_15156374
    // 0x15156204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15156374;
    // 0x15156204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15156208:
    // 0x15156208: sh          $zero, 0x5E($v0)
    MEM_H(0X5E, ctx->r2) = 0;
    // 0x1515620C: lbu         $t9, 0x24($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X24);
    // 0x15156210: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x15156214: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x15156218: sb          $t9, 0x64($v0)
    MEM_B(0X64, ctx->r2) = ctx->r25;
    // 0x1515621C: lbu         $t0, 0x25($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X25);
    // 0x15156220: sb          $t0, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r8;
    // 0x15156224: lbu         $t1, 0x26($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X26);
    // 0x15156228: sb          $t1, 0x66($v0)
    MEM_B(0X66, ctx->r2) = ctx->r9;
    // 0x1515622C: lbu         $t2, 0x27($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X27);
    // 0x15156230: sh          $zero, 0x60($v0)
    MEM_H(0X60, ctx->r2) = 0;
    // 0x15156234: sh          $zero, 0x62($v0)
    MEM_H(0X62, ctx->r2) = 0;
    // 0x15156238: sh          $zero, 0x6E($v0)
    MEM_H(0X6E, ctx->r2) = 0;
    // 0x1515623C: sb          $t2, 0x67($v0)
    MEM_B(0X67, ctx->r2) = ctx->r10;
    // 0x15156240: lbu         $t3, 0x20($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X20);
    // 0x15156244: sb          $t3, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r11;
    // 0x15156248: lbu         $t4, 0x21($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X21);
    // 0x1515624C: sb          $t4, 0x75($v0)
    MEM_B(0X75, ctx->r2) = ctx->r12;
    // 0x15156250: lbu         $t5, 0x22($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X22);
    // 0x15156254: sb          $t5, 0x76($v0)
    MEM_B(0X76, ctx->r2) = ctx->r13;
    // 0x15156258: lbu         $t6, 0x23($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23);
    // 0x1515625C: sh          $zero, 0x7E($v0)
    MEM_H(0X7E, ctx->r2) = 0;
    // 0x15156260: sb          $t6, 0x77($v0)
    MEM_B(0X77, ctx->r2) = ctx->r14;
    // 0x15156264: lbu         $t7, 0x20($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X20);
    // 0x15156268: sb          $t7, 0x84($v0)
    MEM_B(0X84, ctx->r2) = ctx->r15;
    // 0x1515626C: lbu         $t8, 0x21($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X21);
    // 0x15156270: sb          $t8, 0x85($v0)
    MEM_B(0X85, ctx->r2) = ctx->r24;
    // 0x15156274: lbu         $t9, 0x22($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X22);
    // 0x15156278: sb          $t9, 0x86($v0)
    MEM_B(0X86, ctx->r2) = ctx->r25;
    // 0x1515627C: lbu         $t0, 0x23($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X23);
    // 0x15156280: sb          $t0, 0x87($v0)
    MEM_B(0X87, ctx->r2) = ctx->r8;
    // 0x15156284: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x15156288: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x1515628C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x15156290: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x15156294: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x15156298: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x1515629C: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151562A0: sw          $at, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r1;
    // 0x151562A4: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x151562A8: sw          $t4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r12;
    // 0x151562AC: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151562B0: sw          $at, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r1;
    // 0x151562B4: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151562B8: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x151562BC: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x151562C0: sw          $t6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r14;
    // 0x151562C4: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151562C8: addiu       $a0, $v1, 0x88
    ctx->r4 = ADD32(ctx->r3, 0X88);
    // 0x151562CC: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x151562D0: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151562D4: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151562D8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151562DC: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x151562E0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151562E4: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151562E8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151562EC: swc1        $f18, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f18.u32l;
    // 0x151562F0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151562F4: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151562F8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151562FC: swc1        $f8, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f8.u32l;
    // 0x15156300: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15156304: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x15156308: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1515630C: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
    // 0x15156310: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15156314: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15156318: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515631C: swc1        $f8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f8.u32l;
    // 0x15156320: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15156324: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15156328: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1515632C: swc1        $f18, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f18.u32l;
    // 0x15156330: lbu         $t7, 0x28($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X28);
    // 0x15156334: sb          $t7, 0x40($v0)
    MEM_B(0X40, ctx->r2) = ctx->r15;
    // 0x15156338: lh          $t8, 0x2A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2A);
    // 0x1515633C: sh          $t8, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r24;
    // 0x15156340: lhu         $t9, 0x2C($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2C);
    // 0x15156344: sh          $t9, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r25;
    // 0x15156348: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1515634C: swc1        $f4, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f4.u32l;
    // 0x15156350: lbu         $t0, 0x34($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X34);
    // 0x15156354: sb          $t0, 0x4C($v1)
    MEM_B(0X4C, ctx->r3) = ctx->r8;
    // 0x15156358: lh          $t1, 0x36($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X36);
    // 0x1515635C: sh          $t1, 0x4E($v1)
    MEM_H(0X4E, ctx->r3) = ctx->r9;
    // 0x15156360: lh          $t2, 0x38($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X38);
    // 0x15156364: sh          $t2, 0x50($v1)
    MEM_H(0X50, ctx->r3) = ctx->r10;
    // 0x15156368: jal         0x100226F0
    // 0x1515636C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x1515636C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_1:
    // 0x15156370: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
L_15156374:
    // 0x15156374: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15156378: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1515637C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15156380: jr          $ra
    // 0x15156384: nop

    return;
    return;
    // 0x15156384: nop

;}
RECOMP_FUNC void func_150F5420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F5420: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150F5424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F5428: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x150F542C: beq         $a3, $zero, L_150F54B4
    if (ctx->r7 == 0) {
        // 0x150F5430: addiu       $a0, $sp, 0x24
        ctx->r4 = ADD32(ctx->r29, 0X24);
            goto L_150F54B4;
    }
    // 0x150F5430: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x150F5434: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150F5438: bne         $a3, $at, L_150F5460
    if (ctx->r7 != ctx->r1) {
        // 0x150F543C: addiu       $t3, $zero, 0x9
        ctx->r11 = ADD32(0, 0X9);
            goto L_150F5460;
    }
    // 0x150F543C: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x150F5440: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x150F5444: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x150F5448: addiu       $t7, $zero, 0xBA
    ctx->r15 = ADD32(0, 0XBA);
    // 0x150F544C: addiu       $t8, $t8, 0x1948
    ctx->r24 = ADD32(ctx->r24, 0X1948);
    // 0x150F5450: sh          $t6, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r14;
    // 0x150F5454: sh          $t7, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r15;
    // 0x150F5458: b           L_150F5494
    // 0x150F545C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_150F5494;
    // 0x150F545C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_150F5460:
    // 0x150F5460: addiu       $t9, $zero, 0x10E
    ctx->r25 = ADD32(0, 0X10E);
    // 0x150F5464: addiu       $t0, $zero, 0x7C
    ctx->r8 = ADD32(0, 0X7C);
    // 0x150F5468: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150F546C: sh          $t9, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r25;
    // 0x150F5470: bne         $a3, $at, L_150F5488
    if (ctx->r7 != ctx->r1) {
        // 0x150F5474: sh          $t0, 0x52($sp)
        MEM_H(0X52, ctx->r29) = ctx->r8;
            goto L_150F5488;
    }
    // 0x150F5474: sh          $t0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r8;
    // 0x150F5478: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x150F547C: addiu       $t1, $t1, 0x1930
    ctx->r9 = ADD32(ctx->r9, 0X1930);
    // 0x150F5480: b           L_150F5494
    // 0x150F5484: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
        goto L_150F5494;
    // 0x150F5484: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_150F5488:
    // 0x150F5488: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150F548C: addiu       $t2, $t2, 0x193C
    ctx->r10 = ADD32(ctx->r10, 0X193C);
    // 0x150F5490: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_150F5494:
    // 0x150F5494: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x150F5498: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x150F549C: sb          $t3, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r11;
    // 0x150F54A0: sb          $t4, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r12;
    // 0x150F54A4: sh          $zero, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = 0;
    // 0x150F54A8: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
    // 0x150F54AC: b           L_150F54F8
    // 0x150F54B0: sb          $t5, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r13;
        goto L_150F54F8;
    // 0x150F54B0: sb          $t5, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r13;
L_150F54B4:
    // 0x150F54B4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150F54B8: addiu       $t6, $t6, 0x17F8
    ctx->r14 = ADD32(ctx->r14, 0X17F8);
    // 0x150F54BC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x150F54C0: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x150F54C4: addiu       $t9, $zero, 0xC0
    ctx->r25 = ADD32(0, 0XC0);
    // 0x150F54C8: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x150F54CC: addiu       $t1, $zero, 0x1000
    ctx->r9 = ADD32(0, 0X1000);
    // 0x150F54D0: addiu       $t2, $zero, 0x1000
    ctx->r10 = ADD32(0, 0X1000);
    // 0x150F54D4: addiu       $t3, $zero, 0x18
    ctx->r11 = ADD32(0, 0X18);
    // 0x150F54D8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x150F54DC: sb          $t7, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r15;
    // 0x150F54E0: sh          $t8, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r24;
    // 0x150F54E4: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    // 0x150F54E8: sb          $t0, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r8;
    // 0x150F54EC: sh          $t1, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r9;
    // 0x150F54F0: sh          $t2, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r10;
    // 0x150F54F4: sb          $t3, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r11;
L_150F54F8:
    // 0x150F54F8: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x150F54FC: lui         $at, 0x4312
    ctx->r1 = S32(0X4312 << 16);
    // 0x150F5500: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F5504: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x150F5508: or          $t6, $t5, $a1
    ctx->r14 = ctx->r13 | ctx->r5;
    // 0x150F550C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150F5510: addu        $t7, $t4, $a1
    ctx->r15 = ADD32(ctx->r12, ctx->r5);
    // 0x150F5514: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F5518: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x150F551C: addu        $v0, $t7, $a2
    ctx->r2 = ADD32(ctx->r15, ctx->r6);
    // 0x150F5520: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x150F5524: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x150F5528: addiu       $t0, $zero, 0x2710
    ctx->r8 = ADD32(0, 0X2710);
    // 0x150F552C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150F5530: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150F5534: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F5538: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F553C: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x150F5540: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x150F5544: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x150F5548: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x150F554C: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x150F5550: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x150F5554: sh          $zero, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = 0;
    // 0x150F5558: sb          $t1, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r9;
    // 0x150F555C: sb          $t2, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r10;
    // 0x150F5560: sb          $t3, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r11;
    // 0x150F5564: sb          $t5, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r13;
    // 0x150F5568: sb          $t6, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r14;
    // 0x150F556C: sb          $zero, 0x59($sp)
    MEM_B(0X59, ctx->r29) = 0;
    // 0x150F5570: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x150F5574: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x150F5578: jal         0x15169968
    // 0x150F557C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    func_15169968(rdram, ctx);
        goto after_0;
    // 0x150F557C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x150F5580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F5584: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x150F5588: jr          $ra
    // 0x150F558C: nop

    return;
    return;
    // 0x150F558C: nop

;}
RECOMP_FUNC void func_1506B520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B520: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506B524: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506B528: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506B52C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506B530: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    // 0x1506B534: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x1506B538: lbu         $t6, 0x1CA($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1CA);
    // 0x1506B53C: beq         $t6, $zero, L_1506B58C
    if (ctx->r14 == 0) {
        // 0x1506B540: nop
    
            goto L_1506B58C;
    }
    // 0x1506B540: nop

    // 0x1506B544: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1506B548: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506B54C: beql        $v0, $zero, L_1506B570
    if (ctx->r2 == 0) {
        // 0x1506B550: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_1506B570;
    }
    goto skip_0;
    // 0x1506B550: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    skip_0:
    // 0x1506B554: lbu         $t7, 0x78($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X78);
    // 0x1506B558: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x1506B55C: bnel        $t7, $at, L_1506B570
    if (ctx->r15 != ctx->r1) {
        // 0x1506B560: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_1506B570;
    }
    goto skip_1;
    // 0x1506B560: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    skip_1:
    // 0x1506B564: b           L_1506B570
    // 0x1506B568: addiu       $v0, $zero, 0x1AB
    ctx->r2 = ADD32(0, 0X1AB);
        goto L_1506B570;
    // 0x1506B568: addiu       $v0, $zero, 0x1AB
    ctx->r2 = ADD32(0, 0X1AB);
    // 0x1506B56C: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_1506B570:
    // 0x1506B570: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x1506B574: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506B578: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506B57C: jal         0x1505E650
    // 0x1506B580: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506B580: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x1506B584: b           L_1506B598
    // 0x1506B588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_1506B598;
    // 0x1506B588: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506B58C:
    // 0x1506B58C: jal         0x1507CD64
    // 0x1506B590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1507CD64(rdram, ctx);
        goto after_1;
    // 0x1506B590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x1506B594: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1506B598:
    // 0x1506B598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506B59C: jr          $ra
    // 0x1506B5A0: nop

    return;
    return;
    // 0x1506B5A0: nop

;}
RECOMP_FUNC void func_1508907C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508907C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x15089080: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x15089084: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x15089088: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x1508908C: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x15089090: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15089094: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x15089098: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x1508909C: andi        $t9, $a3, 0xFF
    ctx->r25 = ctx->r7 & 0XFF;
    // 0x150890A0: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x150890A4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x150890A8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x150890AC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150890B0: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x150890B4: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x150890B8: lh          $t6, 0x7290($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7290);
    // 0x150890BC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x150890C0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150890C4: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150890C8: bne         $at, $zero, L_150890D8
    if (ctx->r1 != 0) {
        // 0x150890CC: nop
    
            goto L_150890D8;
    }
    // 0x150890CC: nop

    // 0x150890D0: b           L_150891DC
    // 0x150890D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_150891DC;
    // 0x150890D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_150890D8:
    // 0x150890D8: lw          $t0, 0x2350($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2350);
    // 0x150890DC: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x150890E0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150890E4: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x150890E8: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
    // 0x150890EC: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
    // 0x150890F0: beql        $t5, $a0, L_15089138
    if (ctx->r13 == ctx->r4) {
        // 0x150890F4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_15089138;
    }
    goto skip_0;
    // 0x150890F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x150890F8: beq         $a2, $a0, L_15089134
    if (ctx->r6 == ctx->r4) {
        // 0x150890FC: sll         $t8, $a0, 4
        ctx->r24 = S32(ctx->r4 << 4);
            goto L_15089134;
    }
    // 0x150890FC: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x15089100: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x15089104: lbu         $t9, 0xE($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0XE);
    // 0x15089108: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
    // 0x1508910C: beql        $a1, $t9, L_15089120
    if (ctx->r5 == ctx->r25) {
        // 0x15089110: lbu         $t6, 0xF($t1)
        ctx->r14 = MEM_BU(ctx->r9, 0XF);
            goto L_15089120;
    }
    goto skip_1;
    // 0x15089110: lbu         $t6, 0xF($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0XF);
    skip_1:
    // 0x15089114: bnel        $t5, $t4, L_15089138
    if (ctx->r13 != ctx->r12) {
        // 0x15089118: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_15089138;
    }
    goto skip_2;
    // 0x15089118: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
    // 0x1508911C: lbu         $t6, 0xF($t1)
    ctx->r14 = MEM_BU(ctx->r9, 0XF);
L_15089120:
    // 0x15089120: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x15089124: bne         $a3, $t6, L_15089134
    if (ctx->r7 != ctx->r14) {
        // 0x15089128: nop
    
            goto L_15089134;
    }
    // 0x15089128: nop

    // 0x1508912C: b           L_150891DC
    // 0x15089130: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_150891DC;
    // 0x15089130: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_15089134:
    // 0x15089134: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15089138:
    // 0x15089138: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
L_1508913C:
    // 0x1508913C: lbu         $t2, 0x9($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X9);
    // 0x15089140: beql        $t5, $t2, L_15089188
    if (ctx->r13 == ctx->r10) {
        // 0x15089144: lbu         $t2, 0xA($t1)
        ctx->r10 = MEM_BU(ctx->r9, 0XA);
            goto L_15089188;
    }
    goto skip_3;
    // 0x15089144: lbu         $t2, 0xA($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XA);
    skip_3:
    // 0x15089148: beq         $a2, $t2, L_15089184
    if (ctx->r6 == ctx->r10) {
        // 0x1508914C: sll         $t7, $t2, 4
        ctx->r15 = S32(ctx->r10 << 4);
            goto L_15089184;
    }
    // 0x1508914C: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x15089150: addu        $v0, $t7, $t0
    ctx->r2 = ADD32(ctx->r15, ctx->r8);
    // 0x15089154: lbu         $t8, 0xE($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XE);
    // 0x15089158: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
    // 0x1508915C: beql        $a1, $t8, L_15089170
    if (ctx->r5 == ctx->r24) {
        // 0x15089160: lbu         $t9, 0xF($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0XF);
            goto L_15089170;
    }
    goto skip_4;
    // 0x15089160: lbu         $t9, 0xF($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XF);
    skip_4:
    // 0x15089164: bnel        $t5, $t4, L_15089188
    if (ctx->r13 != ctx->r12) {
        // 0x15089168: lbu         $t2, 0xA($t1)
        ctx->r10 = MEM_BU(ctx->r9, 0XA);
            goto L_15089188;
    }
    goto skip_5;
    // 0x15089168: lbu         $t2, 0xA($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XA);
    skip_5:
    // 0x1508916C: lbu         $t9, 0xF($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XF);
L_15089170:
    // 0x15089170: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x15089174: bne         $a3, $t9, L_15089184
    if (ctx->r7 != ctx->r25) {
        // 0x15089178: nop
    
            goto L_15089184;
    }
    // 0x15089178: nop

    // 0x1508917C: b           L_150891DC
    // 0x15089180: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_150891DC;
    // 0x15089180: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_15089184:
    // 0x15089184: lbu         $t2, 0xA($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XA);
L_15089188:
    // 0x15089188: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x1508918C: beq         $t5, $t2, L_150891D0
    if (ctx->r13 == ctx->r10) {
        // 0x15089190: nop
    
            goto L_150891D0;
    }
    // 0x15089190: nop

    // 0x15089194: beq         $a2, $t2, L_150891D0
    if (ctx->r6 == ctx->r10) {
        // 0x15089198: sll         $t6, $t2, 4
        ctx->r14 = S32(ctx->r10 << 4);
            goto L_150891D0;
    }
    // 0x15089198: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x1508919C: addu        $t3, $t6, $t0
    ctx->r11 = ADD32(ctx->r14, ctx->r8);
    // 0x150891A0: lbu         $t7, 0xE($t3)
    ctx->r15 = MEM_BU(ctx->r11, 0XE);
    // 0x150891A4: or          $t4, $a1, $zero
    ctx->r12 = ctx->r5 | 0;
    // 0x150891A8: beql        $a1, $t7, L_150891BC
    if (ctx->r5 == ctx->r15) {
        // 0x150891AC: lbu         $t8, 0xF($t3)
        ctx->r24 = MEM_BU(ctx->r11, 0XF);
            goto L_150891BC;
    }
    goto skip_6;
    // 0x150891AC: lbu         $t8, 0xF($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0XF);
    skip_6:
    // 0x150891B0: bne         $t5, $t4, L_150891D0
    if (ctx->r13 != ctx->r12) {
        // 0x150891B4: nop
    
            goto L_150891D0;
    }
    // 0x150891B4: nop

    // 0x150891B8: lbu         $t8, 0xF($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0XF);
L_150891BC:
    // 0x150891BC: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x150891C0: bne         $a3, $t8, L_150891D0
    if (ctx->r7 != ctx->r24) {
        // 0x150891C4: nop
    
            goto L_150891D0;
    }
    // 0x150891C4: nop

    // 0x150891C8: b           L_150891DC
    // 0x150891CC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_150891DC;
    // 0x150891CC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_150891D0:
    // 0x150891D0: bne         $a0, $s0, L_1508913C
    if (ctx->r4 != ctx->r16) {
        // 0x150891D4: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_1508913C;
    }
    // 0x150891D4: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x150891D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_150891DC:
    // 0x150891DC: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x150891E0: jr          $ra
    // 0x150891E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x150891E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_1508FD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508FD38: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x1508FD3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1508FD40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1508FD44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1508FD48: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1508FD4C: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x1508FD50: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x1508FD54: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
    // 0x1508FD58: bne         $t6, $at, L_1508FD68
    if (ctx->r14 != ctx->r1) {
        // 0x1508FD5C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1508FD68;
    }
    // 0x1508FD5C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1508FD60: b           L_150900DC
    // 0x1508FD64: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_150900DC;
    // 0x1508FD64: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1508FD68:
    // 0x1508FD68: lui         $t7, 0xDB0E
    ctx->r15 = S32(0XDB0E << 16);
    // 0x1508FD6C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1508FD70: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1508FD74: lhu         $t8, 0x2454($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X2454);
    // 0x1508FD78: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1508FD7C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1508FD80: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1508FD84: lui         $t9, 0xDA38
    ctx->r25 = S32(0XDA38 << 16);
    // 0x1508FD88: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x1508FD8C: addiu       $t0, $t0, 0x23D0
    ctx->r8 = ADD32(ctx->r8, 0X23D0);
    // 0x1508FD90: ori         $t9, $t9, 0x7
    ctx->r25 = ctx->r25 | 0X7;
    // 0x1508FD94: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x1508FD98: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x1508FD9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1508FDA0: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1508FDA4: lbu         $t1, -0x19EA($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X19EA);
    // 0x1508FDA8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1508FDAC: beq         $t1, $zero, L_1508FE14
    if (ctx->r9 == 0) {
        // 0x1508FDB0: nop
    
            goto L_1508FE14;
    }
    // 0x1508FDB0: nop

    // 0x1508FDB4: jal         0x150918EC
    // 0x1508FDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150918EC(rdram, ctx);
        goto after_0;
    // 0x1508FDB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x1508FDBC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1508FDC0: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x1508FDC4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1508FDC8: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1508FDCC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1508FDD0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x1508FDD4: lw          $t5, -0x1638($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1638);
    // 0x1508FDD8: lw          $t2, -0x145C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X145C);
    // 0x1508FDDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1508FDE0: subu        $t6, $v0, $t5
    ctx->r14 = SUB32(ctx->r2, ctx->r13);
    // 0x1508FDE4: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x1508FDE8: slt         $at, $t2, $t7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x1508FDEC: beq         $at, $zero, L_1508FDFC
    if (ctx->r1 == 0) {
        // 0x1508FDF0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1508FDFC;
    }
    // 0x1508FDF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1508FDF4: b           L_1508FDFC
    // 0x1508FDF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1508FDFC;
    // 0x1508FDF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1508FDFC:
    // 0x1508FDFC: beq         $v0, $zero, L_1508FE0C
    if (ctx->r2 == 0) {
        // 0x1508FE00: nop
    
            goto L_1508FE0C;
    }
    // 0x1508FE00: nop

    // 0x1508FE04: b           L_150900DC
    // 0x1508FE08: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
        goto L_150900DC;
    // 0x1508FE08: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
L_1508FE0C:
    // 0x1508FE0C: b           L_150900DC
    // 0x1508FE10: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_150900DC;
    // 0x1508FE10: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1508FE14:
    // 0x1508FE14: lbu         $t8, 0x2458($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2458);
    // 0x1508FE18: beq         $t8, $zero, L_1508FE2C
    if (ctx->r24 == 0) {
        // 0x1508FE1C: nop
    
            goto L_1508FE2C;
    }
    // 0x1508FE1C: nop

    // 0x1508FE20: jal         0x150938BC
    // 0x1508FE24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150938BC(rdram, ctx);
        goto after_1;
    // 0x1508FE24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x1508FE28: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1508FE2C:
    // 0x1508FE2C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1508FE30: lbu         $t9, 0x35EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35EA);
    // 0x1508FE34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1508FE38: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x1508FE3C: bne         $t9, $at, L_1508FE4C
    if (ctx->r25 != ctx->r1) {
        // 0x1508FE40: nop
    
            goto L_1508FE4C;
    }
    // 0x1508FE40: nop

    // 0x1508FE44: b           L_150900DC
    // 0x1508FE48: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_150900DC;
    // 0x1508FE48: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1508FE4C:
    // 0x1508FE4C: lbu         $t0, -0x3300($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X3300);
    // 0x1508FE50: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1508FE54: beq         $t0, $zero, L_1509000C
    if (ctx->r8 == 0) {
        // 0x1508FE58: nop
    
            goto L_1509000C;
    }
    // 0x1508FE58: nop

    // 0x1508FE5C: lwc1        $f0, -0x1E4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1E4);
    // 0x1508FE60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1508FE64: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1508FE68: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x1508FE6C: addiu       $t1, $zero, 0x400
    ctx->r9 = ADD32(0, 0X400);
    // 0x1508FE70: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x1508FE74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1508FE78: addiu       $v1, $sp, 0x3E
    ctx->r3 = ADD32(ctx->r29, 0X3E);
    // 0x1508FE7C: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x1508FE80: bc1tl       L_1508FFC8
    if (c1cs) {
        // 0x1508FE84: sh          $zero, 0x3C($sp)
        MEM_H(0X3C, ctx->r29) = 0;
            goto L_1508FFC8;
    }
    goto skip_0;
    // 0x1508FE84: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    skip_0:
    // 0x1508FE88: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x1508FE8C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1508FE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1508FE94: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508FE98: addiu       $v1, $sp, 0x3E
    ctx->r3 = ADD32(ctx->r29, 0X3E);
    // 0x1508FE9C: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x1508FEA0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1508FEA4: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1508FEA8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1508FEAC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1508FEB0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1508FEB4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x1508FEB8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x1508FEBC: sh          $t5, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r13;
    // 0x1508FEC0: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x1508FEC4: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x1508FEC8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1508FECC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508FED0: addiu       $t0, $v0, 0x2
    ctx->r8 = ADD32(ctx->r2, 0X2);
    // 0x1508FED4: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x1508FED8: mtc1        $t0, $f14
    ctx->f14.u32l = ctx->r8;
    // 0x1508FEDC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508FEE0: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1508FEE4: trunc.w.s   $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1508FEE8: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1508FEEC: beql        $v0, $a0, L_1508FF70
    if (ctx->r2 == ctx->r4) {
        // 0x1508FEF0: addiu       $t4, $v0, 0x3
        ctx->r12 = ADD32(ctx->r2, 0X3);
            goto L_1508FF70;
    }
    goto skip_1;
    // 0x1508FEF0: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    skip_1:
L_1508FEF4:
    // 0x1508FEF4: cvt.s.w     $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = CVT_S_W(ctx->f14.u32l);
    // 0x1508FEF8: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x1508FEFC: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
    // 0x1508FF00: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1508FF04: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1508FF08: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1508FF0C: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1508FF10: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x1508FF14: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x1508FF18: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1508FF1C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1508FF20: addiu       $t0, $v0, 0x2
    ctx->r8 = ADD32(ctx->r2, 0X2);
    // 0x1508FF24: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508FF28: mtc1        $t0, $f14
    ctx->f14.u32l = ctx->r8;
    // 0x1508FF2C: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x1508FF30: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    // 0x1508FF34: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x1508FF38: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1508FF3C: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1508FF40: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1508FF44: mul.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1508FF48: mfc1        $t3, $f12
    ctx->r11 = (int32_t)ctx->f12.u32l;
    // 0x1508FF4C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508FF50: sh          $t3, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r11;
    // 0x1508FF54: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1508FF58: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1508FF5C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1508FF60: trunc.w.s   $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    ctx->f18.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1508FF64: bne         $v0, $a0, L_1508FEF4
    if (ctx->r2 != ctx->r4) {
        // 0x1508FF68: sh          $t6, -0x2($v1)
        MEM_H(-0X2, ctx->r3) = ctx->r14;
            goto L_1508FEF4;
    }
    // 0x1508FF68: sh          $t6, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r14;
    // 0x1508FF6C: addiu       $t4, $v0, 0x3
    ctx->r12 = ADD32(ctx->r2, 0X3);
L_1508FF70:
    // 0x1508FF70: cvt.s.w     $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = CVT_S_W(ctx->f14.u32l);
    // 0x1508FF74: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x1508FF78: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x1508FF7C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1508FF80: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1508FF84: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1508FF88: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1508FF8C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x1508FF90: sh          $t2, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r10;
    // 0x1508FF94: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1508FF98: trunc.w.s   $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x1508FF9C: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1508FFA0: mfc1        $t3, $f12
    ctx->r11 = (int32_t)ctx->f12.u32l;
    // 0x1508FFA4: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1508FFA8: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1508FFAC: sh          $t3, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r11;
    // 0x1508FFB0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1508FFB4: sh          $t6, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r14;
    // 0x1508FFB8: sh          $t9, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r25;
    // 0x1508FFBC: b           L_1508FFF4
    // 0x1508FFC0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
        goto L_1508FFF4;
    // 0x1508FFC0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1508FFC4: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
L_1508FFC8:
    // 0x1508FFC8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x1508FFCC: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x1508FFD0: addiu       $t7, $v0, 0x2
    ctx->r15 = ADD32(ctx->r2, 0X2);
    // 0x1508FFD4: addiu       $t8, $v0, 0x3
    ctx->r24 = ADD32(ctx->r2, 0X3);
    // 0x1508FFD8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1508FFDC: sh          $t8, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r24;
    // 0x1508FFE0: sh          $t7, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r15;
    // 0x1508FFE4: sh          $t2, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r10;
    // 0x1508FFE8: bne         $v0, $a0, L_1508FFC8
    if (ctx->r2 != ctx->r4) {
        // 0x1508FFEC: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_1508FFC8;
    }
    // 0x1508FFEC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x1508FFF0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_1508FFF4:
    // 0x1508FFF4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1508FFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1508FFFC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x15090000: jal         0x15093B58
    // 0x15090004: addiu       $a3, $zero, 0x2C30
    ctx->r7 = ADD32(0, 0X2C30);
    func_15093B58(rdram, ctx);
        goto after_2;
    // 0x15090004: addiu       $a3, $zero, 0x2C30
    ctx->r7 = ADD32(0, 0X2C30);
    after_2:
    // 0x15090008: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1509000C:
    // 0x1509000C: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x15090010: lh          $t0, -0x234C($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X234C);
    // 0x15090014: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15090018: lwc1        $f6, 0x2428($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2428);
    // 0x1509001C: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x15090020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15090024: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15090028: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1509002C: c.eq.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl == ctx->f10.fl;
    // 0x15090030: nop

    // 0x15090034: bc1t        L_1509004C
    if (c1cs) {
        // 0x15090038: nop
    
            goto L_1509004C;
    }
    // 0x15090038: nop

    // 0x1509003C: jal         0x150900F0
    // 0x15090040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150900F0(rdram, ctx);
        goto after_3;
    // 0x15090040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x15090044: b           L_15090068
    // 0x15090048: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_15090068;
    // 0x15090048: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_1509004C:
    // 0x1509004C: lw          $t1, 0x2588($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2588);
    // 0x15090050: beq         $t1, $zero, L_15090068
    if (ctx->r9 == 0) {
        // 0x15090054: nop
    
            goto L_15090068;
    }
    // 0x15090054: nop

    // 0x15090058: jal         0x1518CA04
    // 0x1509005C: addiu       $a0, $zero, 0xB8
    ctx->r4 = ADD32(0, 0XB8);
    func_1518CA04(rdram, ctx);
        goto after_4;
    // 0x1509005C: addiu       $a0, $zero, 0xB8
    ctx->r4 = ADD32(0, 0XB8);
    after_4:
    // 0x15090060: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15090064: sw          $zero, 0x2588($at)
    MEM_W(0X2588, ctx->r1) = 0;
L_15090068:
    // 0x15090068: jal         0x150911F4
    // 0x1509006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150911F4(rdram, ctx);
        goto after_5;
    // 0x1509006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x15090070: jal         0x15094F40
    // 0x15090074: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15094F40(rdram, ctx);
        goto after_6;
    // 0x15090074: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x15090078: jal         0x15090630
    // 0x1509007C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15090630(rdram, ctx);
        goto after_7;
    // 0x1509007C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x15090080: jal         0x15096934
    // 0x15090084: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15096934(rdram, ctx);
        goto after_8;
    // 0x15090084: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x15090088: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1509008C: lbu         $t4, -0x1640($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1640);
    // 0x15090090: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15090094: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15090098: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1509009C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x150900A0: lw          $t6, -0x1638($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1638);
    // 0x150900A4: lw          $t3, -0x145C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X145C);
    // 0x150900A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150900AC: subu        $t2, $v0, $t6
    ctx->r10 = SUB32(ctx->r2, ctx->r14);
    // 0x150900B0: sra         $t7, $t2, 3
    ctx->r15 = S32(SIGNED(ctx->r10) >> 3);
    // 0x150900B4: slt         $at, $t3, $t7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150900B8: beq         $at, $zero, L_150900C8
    if (ctx->r1 == 0) {
        // 0x150900BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150900C8;
    }
    // 0x150900BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150900C0: b           L_150900C8
    // 0x150900C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150900C8;
    // 0x150900C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150900C8:
    // 0x150900C8: beql        $v0, $zero, L_150900DC
    if (ctx->r2 == 0) {
        // 0x150900CC: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_150900DC;
    }
    goto skip_2;
    // 0x150900CC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_2:
    // 0x150900D0: b           L_150900DC
    // 0x150900D4: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
        goto L_150900DC;
    // 0x150900D4: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x150900D8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_150900DC:
    // 0x150900DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150900E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150900E4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x150900E8: jr          $ra
    // 0x150900EC: nop

    return;
    return;
    // 0x150900EC: nop

;}
RECOMP_FUNC void func_150F64B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F64B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F64B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F64B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F64BC: jal         0x150F6478
    // 0x150F64C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F6478(rdram, ctx);
        goto after_0;
    // 0x150F64C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F64C4: jal         0x151411C4
    // 0x150F64C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151411C4(rdram, ctx);
        goto after_1;
    // 0x150F64C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F64CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F64D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F64D4: jr          $ra
    // 0x150F64D8: nop

    return;
    return;
    // 0x150F64D8: nop

;}
RECOMP_FUNC void func_1506B91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B91C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506B920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506B924: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    // 0x1506B928: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x1506B92C: jal         0x1506B100
    // 0x1506B930: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_1506B100(rdram, ctx);
        goto after_0;
    // 0x1506B930: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_0:
    // 0x1506B934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506B938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506B93C: jr          $ra
    // 0x1506B940: nop

    return;
    return;
    // 0x1506B940: nop

;}
RECOMP_FUNC void func_1506B5B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B5B4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506B5B8: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x1506B5BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1506B5C0: sb          $t6, 0x1CB($t7)
    MEM_B(0X1CB, ctx->r15) = ctx->r14;
    // 0x1506B5C4: jr          $ra
    // 0x1506B5C8: nop

    return;
    return;
    // 0x1506B5C8: nop

;}
RECOMP_FUNC void func_15072EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15072EF4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15072EF8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15072EFC: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15072F00: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15072F04: sb          $t6, 0x104($t7)
    MEM_B(0X104, ctx->r15) = ctx->r14;
    // 0x15072F08: jr          $ra
    // 0x15072F0C: nop

    return;
    return;
    // 0x15072F0C: nop

;}
RECOMP_FUNC void func_1512868C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512868C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15128690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15128694: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15128698: sh          $zero, 0x20C($a1)
    MEM_H(0X20C, ctx->r5) = 0;
    // 0x1512869C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151286A0: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x151286A4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
L_151286A8:
    // 0x151286A8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x151286AC: sh          $zero, 0x20E($v0)
    MEM_H(0X20E, ctx->r2) = 0;
    // 0x151286B0: sh          $zero, 0x210($v0)
    MEM_H(0X210, ctx->r2) = 0;
    // 0x151286B4: sh          $zero, 0x212($v0)
    MEM_H(0X212, ctx->r2) = 0;
    // 0x151286B8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x151286BC: bne         $v1, $a0, L_151286A8
    if (ctx->r3 != ctx->r4) {
        // 0x151286C0: sh          $zero, 0x204($v0)
        MEM_H(0X204, ctx->r2) = 0;
            goto L_151286A8;
    }
    // 0x151286C0: sh          $zero, 0x204($v0)
    MEM_H(0X204, ctx->r2) = 0;
    // 0x151286C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151286C8: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x151286CC: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151286D0: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
    // 0x151286D4: sw          $zero, 0xDC($a1)
    MEM_W(0XDC, ctx->r5) = 0;
    // 0x151286D8: sw          $v0, 0x134($a1)
    MEM_W(0X134, ctx->r5) = ctx->r2;
    // 0x151286DC: sw          $t6, 0x84($a1)
    MEM_W(0X84, ctx->r5) = ctx->r14;
    // 0x151286E0: sh          $t7, 0x1B4($a1)
    MEM_H(0X1B4, ctx->r5) = ctx->r15;
    // 0x151286E4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x151286E8: jal         0x15124B18
    // 0x151286EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x151286EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x151286F0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x151286F4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x151286F8: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x151286FC: lbu         $v0, 0x23D($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X23D);
    // 0x15128700: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15128704: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15128708: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1512870C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x15128710: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15128714: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x15128718: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1512871C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x15128720: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15128724: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x15128728: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1512872C: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x15128730: sw          $v1, 0x3D0($a1)
    MEM_W(0X3D0, ctx->r5) = ctx->r3;
    // 0x15128734: sh          $v0, 0x3CC($a1)
    MEM_H(0X3CC, ctx->r5) = ctx->r2;
    // 0x15128738: sh          $v0, 0x368($a1)
    MEM_H(0X368, ctx->r5) = ctx->r2;
    // 0x1512873C: lw          $t0, 0x31C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X31C);
    // 0x15128740: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15128744: swc1        $f0, 0x190($a1)
    MEM_W(0X190, ctx->r5) = ctx->f0.u32l;
    // 0x15128748: swc1        $f0, 0x198($a1)
    MEM_W(0X198, ctx->r5) = ctx->f0.u32l;
    // 0x1512874C: swc1        $f0, 0x18C($a1)
    MEM_W(0X18C, ctx->r5) = ctx->f0.u32l;
    // 0x15128750: swc1        $f0, 0x194($a1)
    MEM_W(0X194, ctx->r5) = ctx->f0.u32l;
    // 0x15128754: sw          $t0, 0x3D4($a1)
    MEM_W(0X3D4, ctx->r5) = ctx->r8;
    // 0x15128758: swc1        $f4, 0x674($a1)
    MEM_W(0X674, ctx->r5) = ctx->f4.u32l;
    // 0x1512875C: sb          $zero, 0x198($t0)
    MEM_B(0X198, ctx->r8) = 0;
    // 0x15128760: sh          $zero, 0x73C($a1)
    MEM_H(0X73C, ctx->r5) = 0;
    // 0x15128764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15128768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1512876C: jr          $ra
    // 0x15128770: nop

    return;
    return;
    // 0x15128770: nop

;}
RECOMP_FUNC void func_150DE32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DE32C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150DE330: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150DE334: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150DE338: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150DE33C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150DE340: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150DE344: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x150DE348: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x150DE34C: addiu       $s5, $sp, 0x48
    ctx->r21 = ADD32(ctx->r29, 0X48);
    // 0x150DE350: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150DE354: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x150DE358: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150DE35C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150DE360: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150DE364: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150DE368: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150DE36C: addiu       $t7, $t7, -0x76B0
    ctx->r15 = ADD32(ctx->r15, -0X76B0);
    // 0x150DE370: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150DE374: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x150DE378: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x150DE37C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x150DE380: addiu       $t1, $t1, -0x76A8
    ctx->r9 = ADD32(ctx->r9, -0X76A8);
    // 0x150DE384: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150DE388: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x150DE38C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150DE390: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x150DE394: addiu       $s7, $s7, 0x3098
    ctx->r23 = ADD32(ctx->r23, 0X3098);
    // 0x150DE398: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x150DE39C: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x150DE3A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150DE3A4: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x150DE3A8: addiu       $fp, $zero, -0x4
    ctx->r30 = ADD32(0, -0X4);
    // 0x150DE3AC: addiu       $s6, $zero, 0x34
    ctx->r22 = ADD32(0, 0X34);
    // 0x150DE3B0: sw          $t4, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r12;
L_150DE3B4:
    // 0x150DE3B4: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x150DE3B8: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    // 0x150DE3BC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x150DE3C0: multu       $t5, $s6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DE3C4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x150DE3C8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x150DE3CC: mflo        $t9
    ctx->r25 = lo;
    // 0x150DE3D0: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    // 0x150DE3D4: jal         0x150A32B4
    // 0x150DE3D8: nop

    func_150A32B4(rdram, ctx);
        goto after_0;
    // 0x150DE3D8: nop

    after_0:
    // 0x150DE3DC: beq         $v0, $zero, L_150DE418
    if (ctx->r2 == 0) {
        // 0x150DE3E0: addu        $t6, $s5, $s0
        ctx->r14 = ADD32(ctx->r21, ctx->r16);
            goto L_150DE418;
    }
    // 0x150DE3E0: addu        $t6, $s5, $s0
    ctx->r14 = ADD32(ctx->r21, ctx->r16);
    // 0x150DE3E4: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    // 0x150DE3E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150DE3EC: beq         $a0, $zero, L_150DE410
    if (ctx->r4 == 0) {
        // 0x150DE3F0: nop
    
            goto L_150DE410;
    }
    // 0x150DE3F0: nop

    // 0x150DE3F4: jal         0x151149AC
    // 0x150DE3F8: nop

    func_151149AC(rdram, ctx);
        goto after_1;
    // 0x150DE3F8: nop

    after_1:
    // 0x150DE3FC: lbu         $t7, 0x73($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X73);
    // 0x150DE400: and         $t0, $t7, $fp
    ctx->r8 = ctx->r15 & ctx->r30;
    // 0x150DE404: ori         $t3, $t0, 0x3
    ctx->r11 = ctx->r8 | 0X3;
    // 0x150DE408: b           L_150DE418
    // 0x150DE40C: sb          $t3, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r11;
        goto L_150DE418;
    // 0x150DE40C: sb          $t3, 0x73($v0)
    MEM_B(0X73, ctx->r2) = ctx->r11;
L_150DE410:
    // 0x150DE410: jal         0x150A2864
    // 0x150DE414: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    func_150A2864(rdram, ctx);
        goto after_2;
    // 0x150DE414: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    after_2:
L_150DE418:
    // 0x150DE418: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150DE41C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150DE420: bne         $s0, $at, L_150DE3B4
    if (ctx->r16 != ctx->r1) {
        // 0x150DE424: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150DE3B4;
    }
    // 0x150DE424: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x150DE428: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150DE42C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150DE430: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150DE434: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150DE438: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x150DE43C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x150DE440: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x150DE444: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x150DE448: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x150DE44C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x150DE450: jr          $ra
    // 0x150DE454: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x150DE454: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_1507B234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507B234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507B238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507B23C: jal         0x1507A3E8
    // 0x1507B240: nop

    func_1507A3E8(rdram, ctx);
        goto after_0;
    // 0x1507B240: nop

    after_0:
    // 0x1507B244: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1507B248: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1507B24C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x1507B250: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507B254: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1507B258: jal         0x1506E46C
    // 0x1507B25C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1506E46C(rdram, ctx);
        goto after_1;
    // 0x1507B25C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x1507B260: beq         $v0, $zero, L_1507B270
    if (ctx->r2 == 0) {
        // 0x1507B264: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1507B270;
    }
    // 0x1507B264: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1507B268: jal         0x1506BAD8
    // 0x1507B26C: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    func_1506BAD8(rdram, ctx);
        goto after_2;
    // 0x1507B26C: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    after_2:
L_1507B270:
    // 0x1507B270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507B274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507B278: jr          $ra
    // 0x1507B27C: nop

    return;
    return;
    // 0x1507B27C: nop

;}
RECOMP_FUNC void func_15133D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15133D20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15133D24: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15133D28: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15133D2C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15133D30: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15133D34: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15133D38: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x15133D3C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x15133D40: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x15133D44: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x15133D48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15133D4C: jal         0x15133B98
    // 0x15133D50: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15133B98(rdram, ctx);
        goto after_0;
    // 0x15133D50: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x15133D54: jal         0x150ADA20
    // 0x15133D58: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15133D58: nop

    after_1:
    // 0x15133D5C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x15133D60: beql        $t7, $zero, L_15133DD8
    if (ctx->r15 == 0) {
        // 0x15133D64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15133DD8;
    }
    goto skip_0;
    // 0x15133D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15133D68: jal         0x150ADA20
    // 0x15133D6C: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15133D6C: nop

    after_2:
    // 0x15133D70: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15133D74: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15133D78: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15133D7C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15133D80: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15133D84: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15133D88: mfhi        $a0
    ctx->r4 = hi;
    // 0x15133D8C: addiu       $t4, $zero, 0x1F4
    ctx->r12 = ADD32(0, 0X1F4);
    // 0x15133D90: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15133D94: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15133D98: addiu       $t5, $zero, 0x3E8
    ctx->r13 = ADD32(0, 0X3E8);
    // 0x15133D9C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15133DA0: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x15133DA4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15133DA8: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x15133DAC: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x15133DB0: addiu       $a0, $a0, 0x1B8
    ctx->r4 = ADD32(ctx->r4, 0X1B8);
    // 0x15133DB4: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x15133DB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15133DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15133DC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15133DC4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15133DC8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15133DCC: jal         0x10010F88
    // 0x15133DD0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_10010F88(rdram, ctx);
        goto after_3;
    // 0x15133DD0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_3:
    // 0x15133DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15133DD8:
    // 0x15133DD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15133DDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15133DE0: jr          $ra
    // 0x15133DE4: nop

    return;
    return;
    // 0x15133DE4: nop

;}
RECOMP_FUNC void func_15104170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15104170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15104174: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15104178: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1510417C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15104180: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15104184: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15104188: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1510418C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15104190: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15104194: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x15104198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1510419C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x151041A0: jal         0x15167A68
    // 0x151041A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x151041A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151041A8: beq         $v0, $zero, L_151041D4
    if (ctx->r2 == 0) {
        // 0x151041AC: addiu       $t8, $zero, 0xF
        ctx->r24 = ADD32(0, 0XF);
            goto L_151041D4;
    }
    // 0x151041AC: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x151041B0: sh          $t8, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r24;
    // 0x151041B4: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
    // 0x151041B8: sb          $zero, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = 0;
    // 0x151041BC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x151041C0: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    // 0x151041C4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x151041C8: sw          $t0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r8;
    // 0x151041CC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x151041D0: sb          $t1, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = ctx->r9;
L_151041D4:
    // 0x151041D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151041D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151041DC: jr          $ra
    // 0x151041E0: nop

    return;
    return;
    // 0x151041E0: nop

;}
RECOMP_FUNC void func_15045F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15045F8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15045F90: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15045F94: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15045F98: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x15045F9C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15045FA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15045FA4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15045FA8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x15045FAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15045FB0: lwc1        $f4, -0x72A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X72A4);
    // 0x15045FB4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x15045FB8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15045FBC: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x15045FC0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15045FC4: addiu       $a1, $a1, 0x3830
    ctx->r5 = ADD32(ctx->r5, 0X3830);
    // 0x15045FC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15045FCC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x15045FD0: jal         0x150A44F0
    // 0x15045FD4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_150A44F0(rdram, ctx);
        goto after_0;
    // 0x15045FD4: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x15045FD8: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x15045FDC: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x15045FE0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x15045FE4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15045FE8: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15045FEC: addiu       $a3, $a3, 0x3830
    ctx->r7 = ADD32(ctx->r7, 0X3830);
    // 0x15045FF0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15045FF4: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x15045FF8: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x15045FFC: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x15046000: jal         0x150A43E0
    // 0x15046004: nop

    func_150A43E0(rdram, ctx);
        goto after_1;
    // 0x15046004: nop

    after_1:
    // 0x15046008: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1504600C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15046010: blez        $v0, L_1504607C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15046014: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1504607C;
    }
    // 0x15046014: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15046018: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x1504601C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15046020: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15046024: addiu       $v0, $v0, 0x3300
    ctx->r2 = ADD32(ctx->r2, 0X3300);
L_15046028:
    // 0x15046028: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x1504602C: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x15046030: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x15046034: nop

    // 0x15046038: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1504603C: mul.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x15046040: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x15046044: nop

    // 0x15046048: bc1fl       L_15046070
    if (!c1cs) {
        // 0x1504604C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15046070;
    }
    goto skip_0;
    // 0x1504604C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x15046050: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15046054: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x15046058: nop

    // 0x1504605C: bc1fl       L_15046070
    if (!c1cs) {
        // 0x15046060: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15046070;
    }
    goto skip_1;
    // 0x15046060: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x15046064: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x15046068: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x1504606C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_15046070:
    // 0x15046070: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x15046074: bne         $at, $zero, L_15046028
    if (ctx->r1 != 0) {
        // 0x15046078: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_15046028;
    }
    // 0x15046078: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_1504607C:
    // 0x1504607C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15046080: beq         $t0, $at, L_150461AC
    if (ctx->r8 == ctx->r1) {
        // 0x15046084: sll         $t4, $t0, 4
        ctx->r12 = S32(ctx->r8 << 4);
            goto L_150461AC;
    }
    // 0x15046084: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x15046088: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1504608C: addiu       $t5, $t5, 0x3300
    ctx->r13 = ADD32(ctx->r13, 0X3300);
    // 0x15046090: addu        $t1, $t4, $t5
    ctx->r9 = ADD32(ctx->r12, ctx->r13);
    // 0x15046094: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x15046098: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x1504609C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150460A0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150460A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150460A8: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_150460AC:
    // 0x150460AC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x150460B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150460B4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x150460B8: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
    // 0x150460BC: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x150460C0: sh          $t7, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r15;
    // 0x150460C4: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x150460C8: sh          $t8, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r24;
    // 0x150460CC: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x150460D0: sh          $t9, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r25;
    // 0x150460D4: bne         $a0, $a2, L_150460AC
    if (ctx->r4 != ctx->r6) {
        // 0x150460D8: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_150460AC;
    }
    // 0x150460D8: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x150460DC: lw          $v1, 0xC($t1)
    ctx->r3 = MEM_W(ctx->r9, 0XC);
    // 0x150460E0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x150460E4: lw          $t4, -0x410C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X410C);
    // 0x150460E8: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x150460EC: addu        $t3, $t3, $v1
    ctx->r11 = ADD32(ctx->r11, ctx->r3);
    // 0x150460F0: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x150460F4: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x150460F8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x150460FC: lw          $a0, 0x44($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X44);
    // 0x15046100: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15046104: beql        $a0, $zero, L_15046144
    if (ctx->r4 == 0) {
        // 0x15046108: lw          $t6, 0x40($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X40);
            goto L_15046144;
    }
    goto skip_2;
    // 0x15046108: lw          $t6, 0x40($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X40);
    skip_2:
    // 0x1504610C: lw          $t6, -0x41C4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X41C4);
    // 0x15046110: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15046114: lhu         $t9, 0x58($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X58);
    // 0x15046118: subu        $t7, $t2, $t6
    ctx->r15 = SUB32(ctx->r10, ctx->r14);
    // 0x1504611C: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x15046120: mflo        $t8
    ctx->r24 = lo;
    // 0x15046124: subu        $v1, $t8, $t9
    ctx->r3 = SUB32(ctx->r24, ctx->r25);
    // 0x15046128: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x1504612C: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x15046130: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x15046134: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
    // 0x15046138: b           L_1504614C
    // 0x1504613C: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
        goto L_1504614C;
    // 0x1504613C: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
    // 0x15046140: lw          $t6, 0x40($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X40);
L_15046144:
    // 0x15046144: sw          $t6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r14;
    // 0x15046148: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
L_1504614C:
    // 0x1504614C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x15046150: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15046154: ori         $t8, $t7, 0x6
    ctx->r24 = ctx->r15 | 0X6;
    // 0x15046158: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
    // 0x1504615C: lbu         $t9, 0x6F($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X6F);
    // 0x15046160: ori         $t5, $t8, 0x1
    ctx->r13 = ctx->r24 | 0X1;
    // 0x15046164: andi        $t3, $t9, 0x80
    ctx->r11 = ctx->r25 & 0X80;
    // 0x15046168: bnel        $t3, $at, L_15046178
    if (ctx->r11 != ctx->r1) {
        // 0x1504616C: sb          $t6, 0x1D($s0)
        MEM_B(0X1D, ctx->r16) = ctx->r14;
            goto L_15046178;
    }
    goto skip_3;
    // 0x1504616C: sb          $t6, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r14;
    skip_3:
    // 0x15046170: sb          $t5, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r13;
    // 0x15046174: sb          $t6, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r14;
L_15046178:
    // 0x15046178: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1504617C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15046180: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x15046184: nop

    // 0x15046188: bc1f        L_150461A4
    if (!c1cs) {
        // 0x1504618C: nop
    
            goto L_150461A4;
    }
    // 0x1504618C: nop

    // 0x15046190: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
    // 0x15046194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15046198: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x1504619C: b           L_150461BC
    // 0x150461A0: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
        goto L_150461BC;
    // 0x150461A0: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
L_150461A4:
    // 0x150461A4: b           L_150461BC
    // 0x150461A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150461BC;
    // 0x150461A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150461AC:
    // 0x150461AC: lbu         $t9, 0x1C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1C);
    // 0x150461B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150461B4: andi        $t3, $t9, 0xFFFD
    ctx->r11 = ctx->r25 & 0XFFFD;
    // 0x150461B8: sb          $t3, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r11;
L_150461BC:
    // 0x150461BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150461C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150461C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150461C8: jr          $ra
    // 0x150461CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x150461CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15195DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15195DD4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15195DD8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15195DDC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15195DE0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15195DE4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15195DE8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x15195DEC: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x15195DF0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15195DF4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15195DF8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15195DFC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15195E00: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15195E04: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15195E08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15195E0C: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x15195E10: bne         $s6, $zero, L_15195E20
    if (ctx->r22 != 0) {
        // 0x15195E14: or          $s5, $fp, $zero
        ctx->r21 = ctx->r30 | 0;
            goto L_15195E20;
    }
    // 0x15195E14: or          $s5, $fp, $zero
    ctx->r21 = ctx->r30 | 0;
    // 0x15195E18: b           L_15195F80
    // 0x15195E1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15195F80;
    // 0x15195E1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15195E20:
    // 0x15195E20: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15195E24: lbu         $t6, -0x1540($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1540);
    // 0x15195E28: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x15195E2C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x15195E30: beq         $t6, $zero, L_15195E40
    if (ctx->r14 == 0) {
        // 0x15195E34: lw          $s0, 0x44($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X44);
            goto L_15195E40;
    }
    // 0x15195E34: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x15195E38: b           L_15195F80
    // 0x15195E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15195F80;
    // 0x15195E3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15195E40:
    // 0x15195E40: bne         $fp, $s7, L_15195E4C
    if (ctx->r30 != ctx->r23) {
        // 0x15195E44: nop
    
            goto L_15195E4C;
    }
    // 0x15195E44: nop

    // 0x15195E48: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_15195E4C:
    // 0x15195E4C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_15195E50:
    // 0x15195E50: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15195E54: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x15195E58: jal         0x15195868
    // 0x15195E5C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_15195868(rdram, ctx);
        goto after_0;
    // 0x15195E5C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x15195E60: bne         $v0, $s7, L_15195E70
    if (ctx->r2 != ctx->r23) {
        // 0x15195E64: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_15195E70;
    }
    // 0x15195E64: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15195E68: b           L_15195F58
    // 0x15195E6C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
        goto L_15195F58;
    // 0x15195E6C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_15195E70:
    // 0x15195E70: bne         $s3, $zero, L_15195E80
    if (ctx->r19 != 0) {
        // 0x15195E74: lui         $s0, 0x800E
        ctx->r16 = S32(0X800E << 16);
            goto L_15195E80;
    }
    // 0x15195E74: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x15195E78: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x15195E7C: lw          $s3, 0x8F0($s3)
    ctx->r19 = MEM_W(ctx->r19, 0X8F0);
L_15195E80:
    // 0x15195E80: beq         $s4, $zero, L_15195E90
    if (ctx->r20 == 0) {
        // 0x15195E84: sll         $t9, $v0, 3
        ctx->r25 = S32(ctx->r2 << 3);
            goto L_15195E90;
    }
    // 0x15195E84: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x15195E88: b           L_15195E94
    // 0x15195E8C: or          $v1, $s7, $zero
    ctx->r3 = ctx->r23 | 0;
        goto L_15195E94;
    // 0x15195E8C: or          $v1, $s7, $zero
    ctx->r3 = ctx->r23 | 0;
L_15195E90:
    // 0x15195E90: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
L_15195E94:
    // 0x15195E94: lw          $s0, 0x8E8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X8E8);
    // 0x15195E98: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x15195E9C: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15195EA0: beq         $s0, $zero, L_15195ECC
    if (ctx->r16 == 0) {
        // 0x15195EA4: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_15195ECC;
    }
    // 0x15195EA4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x15195EA8: lh          $t7, 0x8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X8);
    // 0x15195EAC: beql        $v1, $t7, L_15195ED0
    if (ctx->r3 == ctx->r15) {
        // 0x15195EB0: addu        $v1, $s6, $t9
        ctx->r3 = ADD32(ctx->r22, ctx->r25);
            goto L_15195ED0;
    }
    goto skip_0;
    // 0x15195EB0: addu        $v1, $s6, $t9
    ctx->r3 = ADD32(ctx->r22, ctx->r25);
    skip_0:
    // 0x15195EB4: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
L_15195EB8:
    // 0x15195EB8: beql        $s0, $zero, L_15195ED0
    if (ctx->r16 == 0) {
        // 0x15195EBC: addu        $v1, $s6, $t9
        ctx->r3 = ADD32(ctx->r22, ctx->r25);
            goto L_15195ED0;
    }
    goto skip_1;
    // 0x15195EBC: addu        $v1, $s6, $t9
    ctx->r3 = ADD32(ctx->r22, ctx->r25);
    skip_1:
    // 0x15195EC0: lh          $t8, 0x8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8);
    // 0x15195EC4: bnel        $v1, $t8, L_15195EB8
    if (ctx->r3 != ctx->r24) {
        // 0x15195EC8: lw          $s0, 0x4($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X4);
            goto L_15195EB8;
    }
    goto skip_2;
    // 0x15195EC8: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    skip_2:
L_15195ECC:
    // 0x15195ECC: addu        $v1, $s6, $t9
    ctx->r3 = ADD32(ctx->r22, ctx->r25);
L_15195ED0:
    // 0x15195ED0: lw          $s1, 0x4($v1)
    ctx->r17 = MEM_W(ctx->r3, 0X4);
    // 0x15195ED4: bne         $s0, $zero, L_15195F14
    if (ctx->r16 != 0) {
        // 0x15195ED8: lw          $a2, 0x0($v1)
        ctx->r6 = MEM_W(ctx->r3, 0X0);
            goto L_15195F14;
    }
    // 0x15195ED8: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x15195EDC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15195EE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15195EE4: jal         0x15195984
    // 0x15195EE8: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    func_15195984(rdram, ctx);
        goto after_1;
    // 0x15195EE8: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x15195EEC: beq         $v0, $zero, L_15195F0C
    if (ctx->r2 == 0) {
        // 0x15195EF0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15195F0C;
    }
    // 0x15195EF0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15195EF4: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x15195EF8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15195EFC: sb          $t0, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r8;
    // 0x15195F00: lw          $t1, 0x78($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X78);
    // 0x15195F04: b           L_15195F2C
    // 0x15195F08: sb          $t1, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r9;
        goto L_15195F2C;
    // 0x15195F08: sb          $t1, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r9;
L_15195F0C:
    // 0x15195F0C: b           L_15195F80
    // 0x15195F10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15195F80;
    // 0x15195F10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15195F14:
    // 0x15195F14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15195F18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15195F1C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x15195F20: jal         0x15195A84
    // 0x15195F24: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    func_15195A84(rdram, ctx);
        goto after_2;
    // 0x15195F24: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    after_2:
    // 0x15195F28: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_15195F2C:
    // 0x15195F2C: lbu         $t3, 0x14($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X14);
    // 0x15195F30: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x15195F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15195F38: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x15195F3C: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x15195F40: beq         $at, $zero, L_15195F4C
    if (ctx->r1 == 0) {
        // 0x15195F44: or          $a2, $s2, $zero
        ctx->r6 = ctx->r18 | 0;
            goto L_15195F4C;
    }
    // 0x15195F44: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x15195F48: sb          $t4, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r12;
L_15195F4C:
    // 0x15195F4C: jal         0x15195D00
    // 0x15195F50: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    func_15195D00(rdram, ctx);
        goto after_3;
    // 0x15195F50: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    after_3:
    // 0x15195F54: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_15195F58:
    // 0x15195F58: beql        $fp, $s7, L_15195E50
    if (ctx->r30 == ctx->r23) {
        // 0x15195F5C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_15195E50;
    }
    goto skip_3;
    // 0x15195F5C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_3:
    // 0x15195F60: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15195F64: addiu       $v1, $v1, 0x8F0
    ctx->r3 = ADD32(ctx->r3, 0X8F0);
    // 0x15195F68: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15195F6C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x15195F70: bne         $s3, $v0, L_15195F7C
    if (ctx->r19 != ctx->r2) {
        // 0x15195F74: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_15195F7C;
    }
    // 0x15195F74: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x15195F78: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_15195F7C:
    // 0x15195F7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15195F80:
    // 0x15195F80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15195F84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15195F88: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15195F8C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15195F90: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15195F94: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15195F98: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15195F9C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15195FA0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15195FA4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15195FA8: jr          $ra
    // 0x15195FAC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x15195FAC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}

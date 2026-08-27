#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_1000EA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000EA94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000EA98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000EA9C: bne         $a0, $zero, L_1000EAB0
    if (ctx->r4 != 0) {
        // 0x1000EAA0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_1000EAB0;
    }
    // 0x1000EAA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000EAA4: addiu       $t6, $zero, 0x52
    ctx->r14 = ADD32(0, 0X52);
    // 0x1000EAA8: b           L_1000EAD4
    // 0x1000EAAC: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
        goto L_1000EAD4;
    // 0x1000EAAC: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
L_1000EAB0:
    // 0x1000EAB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1000EAB4: bne         $a0, $at, L_1000EAC4
    if (ctx->r4 != ctx->r1) {
        // 0x1000EAB8: addiu       $t7, $zero, 0x51
        ctx->r15 = ADD32(0, 0X51);
            goto L_1000EAC4;
    }
    // 0x1000EAB8: addiu       $t7, $zero, 0x51
    ctx->r15 = ADD32(0, 0X51);
    // 0x1000EABC: b           L_1000EAD4
    // 0x1000EAC0: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
        goto L_1000EAD4;
    // 0x1000EAC0: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
L_1000EAC4:
    // 0x1000EAC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1000EAC8: bne         $a0, $at, L_1000EAD4
    if (ctx->r4 != ctx->r1) {
        // 0x1000EACC: addiu       $t8, $zero, 0x53
        ctx->r24 = ADD32(0, 0X53);
            goto L_1000EAD4;
    }
    // 0x1000EACC: addiu       $t8, $zero, 0x53
    ctx->r24 = ADD32(0, 0X53);
    // 0x1000EAD0: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
L_1000EAD4:
    // 0x1000EAD4: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x1000EAD8: jal         0x1000D96C
    // 0x1000EADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1000D96C(rdram, ctx);
        goto after_0;
    // 0x1000EADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1000EAE0: lhu         $v0, 0x1E($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1E);
    // 0x1000EAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000EAE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000EAEC: jr          $ra
    // 0x1000EAF0: nop

    return;
    return;
    // 0x1000EAF0: nop

;}
RECOMP_FUNC void func_151D275C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D275C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D2760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D2764: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151D2768: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151D276C: lb          $v0, 0x16($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X16);
    // 0x151D2770: lh          $t6, 0xE($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XE);
    // 0x151D2774: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x151D2778: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151D277C: mflo        $t8
    ctx->r24 = lo;
    // 0x151D2780: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x151D2784: blez        $v0, L_151D27C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151D2788: sh          $t9, 0xE($a0)
        MEM_H(0XE, ctx->r4) = ctx->r25;
            goto L_151D27C0;
    }
    // 0x151D2788: sh          $t9, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r25;
    // 0x151D278C: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x151D2790: addiu       $t0, $zero, 0x128
    ctx->r8 = ADD32(0, 0X128);
    // 0x151D2794: slti        $at, $v0, 0xED
    ctx->r1 = SIGNED(ctx->r2) < 0XED ? 1 : 0;
    // 0x151D2798: bne         $at, $zero, L_151D27C0
    if (ctx->r1 != 0) {
        // 0x151D279C: subu        $t1, $t0, $v0
        ctx->r9 = SUB32(ctx->r8, ctx->r2);
            goto L_151D27C0;
    }
    // 0x151D279C: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x151D27A0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151D27A4: sh          $t2, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r10;
    // 0x151D27A8: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
    // 0x151D27AC: bgezl       $v1, L_151D27D4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151D27B0: slti        $at, $v1, 0x80
        ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
            goto L_151D27D4;
    }
    goto skip_0;
    // 0x151D27B0: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    skip_0:
    // 0x151D27B4: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    // 0x151D27B8: b           L_151D27D0
    // 0x151D27BC: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
        goto L_151D27D0;
    // 0x151D27BC: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
L_151D27C0:
    // 0x151D27C0: lh          $t3, 0xE($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XE);
    // 0x151D27C4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x151D27C8: sh          $t4, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r12;
    // 0x151D27CC: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
L_151D27D0:
    // 0x151D27D0: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
L_151D27D4:
    // 0x151D27D4: bnel        $at, $zero, L_151D27E4
    if (ctx->r1 != 0) {
        // 0x151D27D8: lh          $t7, 0x12($a0)
        ctx->r15 = MEM_H(ctx->r4, 0X12);
            goto L_151D27E4;
    }
    goto skip_1;
    // 0x151D27D8: lh          $t7, 0x12($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X12);
    skip_1:
    // 0x151D27DC: sh          $t5, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r13;
    // 0x151D27E0: lh          $t7, 0x12($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X12);
L_151D27E4:
    // 0x151D27E4: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x151D27E8: sh          $t6, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r14;
    // 0x151D27EC: lh          $v0, 0x12($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X12);
    // 0x151D27F0: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x151D27F4: bne         $at, $zero, L_151D2800
    if (ctx->r1 != 0) {
        // 0x151D27F8: addiu       $t8, $v0, -0x100
        ctx->r24 = ADD32(ctx->r2, -0X100);
            goto L_151D2800;
    }
    // 0x151D27F8: addiu       $t8, $v0, -0x100
    ctx->r24 = ADD32(ctx->r2, -0X100);
    // 0x151D27FC: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
L_151D2800:
    // 0x151D2800: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x151D2804: slti        $at, $v0, 0x12D
    ctx->r1 = SIGNED(ctx->r2) < 0X12D ? 1 : 0;
    // 0x151D2808: beq         $at, $zero, L_151D2818
    if (ctx->r1 == 0) {
        // 0x151D280C: nop
    
            goto L_151D2818;
    }
    // 0x151D280C: nop

    // 0x151D2810: bgezl       $v0, L_151D2824
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151D2814: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151D2824;
    }
    goto skip_2;
    // 0x151D2814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_151D2818:
    // 0x151D2818: jal         0x1516972C
    // 0x151D281C: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D281C: nop

    after_0:
    // 0x151D2820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D2824:
    // 0x151D2824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D2828: jr          $ra
    // 0x151D282C: nop

    return;
    return;
    // 0x151D282C: nop

;}
RECOMP_FUNC void func_151EF358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EF358: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x151EF35C: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x151EF360: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_151EF364:
    // 0x151EF364: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x151EF368: lw          $t8, 0x0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X0);
    // 0x151EF36C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151EF370: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151EF374: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x151EF378: sw          $zero, 0x2A10($at)
    MEM_W(0X2A10, ctx->r1) = 0;
    // 0x151EF37C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151EF380: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x151EF384: bne         $at, $zero, L_151EF364
    if (ctx->r1 != 0) {
        // 0x151EF388: sw          $t9, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r25;
            goto L_151EF364;
    }
    // 0x151EF388: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    // 0x151EF38C: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x151EF390: lbu         $t9, 0x2A51($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2A51);
    // 0x151EF394: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x151EF398: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151EF39C: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x151EF3A0: addiu       $t1, $t1, 0x2A10
    ctx->r9 = ADD32(ctx->r9, 0X2A10);
    // 0x151EF3A4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151EF3A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151EF3AC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x151EF3B0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151EF3B4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151EF3B8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151EF3BC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151EF3C0: sw          $t0, 0x2A4C($at)
    MEM_W(0X2A4C, ctx->r1) = ctx->r8;
    // 0x151EF3C4: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x151EF3C8: sb          $t2, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r10;
    // 0x151EF3CC: sb          $t3, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r11;
    // 0x151EF3D0: sb          $t4, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r12;
    // 0x151EF3D4: sb          $a0, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r4;
    // 0x151EF3D8: sb          $t5, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r13;
    // 0x151EF3DC: sb          $t6, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r14;
    // 0x151EF3E0: sb          $t7, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r15;
    // 0x151EF3E4: sb          $t8, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r24;
    // 0x151EF3E8: blez        $t9, L_151EF438
    if (SIGNED(ctx->r25) <= 0) {
        // 0x151EF3EC: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_151EF438;
    }
    // 0x151EF3EC: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_151EF3F0:
    // 0x151EF3F0: addiu       $t1, $sp, 0x4
    ctx->r9 = ADD32(ctx->r29, 0X4);
    // 0x151EF3F4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151EF3F8: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x151EF3FC: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x151EF400: swl         $at, 0x0($t0)
    do_swl(rdram, 0X0, ctx->r8, ctx->r1);
    // 0x151EF404: swr         $at, 0x3($t0)
    do_swr(rdram, 0X3, ctx->r8, ctx->r1);
    // 0x151EF408: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x151EF40C: swl         $t3, 0x4($t0)
    do_swl(rdram, 0X4, ctx->r8, ctx->r11);
    // 0x151EF410: swr         $t3, 0x7($t0)
    do_swr(rdram, 0X7, ctx->r8, ctx->r11);
    // 0x151EF414: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x151EF418: lbu         $t8, 0x2A51($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2A51);
    // 0x151EF41C: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x151EF420: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151EF424: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151EF428: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x151EF42C: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x151EF430: bne         $at, $zero, L_151EF3F0
    if (ctx->r1 != 0) {
        // 0x151EF434: sw          $t5, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r13;
            goto L_151EF3F0;
    }
    // 0x151EF434: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
L_151EF438:
    // 0x151EF438: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x151EF43C: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x151EF440: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x151EF444: jr          $ra
    // 0x151EF448: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    return;
    return;
    // 0x151EF448: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
;}
RECOMP_FUNC void func_1503E3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503E3C4: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x1503E3C8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x1503E3CC: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x1503E3D0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1503E3D4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x1503E3D8: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x1503E3DC: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x1503E3E0: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x1503E3E4: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x1503E3E8: lw          $t9, 0xDC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XDC);
    // 0x1503E3EC: lw          $t0, 0xE0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE0);
    // 0x1503E3F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1503E3F4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1503E3F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503E3FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1503E400: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503E404: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1503E408: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503E40C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1503E410: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1503E414: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1503E418: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1503E41C: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x1503E420: lw          $t3, 0x1D4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X1D4);
    // 0x1503E424: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x1503E428: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x1503E42C: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x1503E430: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1503E434: jal         0x10023A10
    // 0x1503E438: addu        $a0, $t3, $t2
    ctx->r4 = ADD32(ctx->r11, ctx->r10);
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x1503E438: addu        $a0, $t3, $t2
    ctx->r4 = ADD32(ctx->r11, ctx->r10);
    after_0:
    // 0x1503E43C: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x1503E440: lw          $t5, 0xD8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XD8);
    // 0x1503E444: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1503E448: beq         $t4, $zero, L_1503E458
    if (ctx->r12 == 0) {
        // 0x1503E44C: sll         $t6, $t5, 4
        ctx->r14 = S32(ctx->r13 << 4);
            goto L_1503E458;
    }
    // 0x1503E44C: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x1503E450: b           L_1503E480
    // 0x1503E454: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1503E480;
    // 0x1503E454: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1503E458:
    // 0x1503E458: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1503E45C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1503E460: lbu         $t7, 0x666E($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X666E);
    // 0x1503E464: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x1503E468: lw          $t0, 0xDC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XDC);
    // 0x1503E46C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1503E470: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1503E474: lw          $t9, 0x4454($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4454);
    // 0x1503E478: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x1503E47C: lb          $v0, 0x0($t1)
    ctx->r2 = MEM_B(ctx->r9, 0X0);
L_1503E480:
    // 0x1503E480: beq         $v0, $at, L_1503E4C4
    if (ctx->r2 == ctx->r1) {
        // 0x1503E484: sll         $t2, $v0, 6
        ctx->r10 = S32(ctx->r2 << 6);
            goto L_1503E4C4;
    }
    // 0x1503E484: sll         $t2, $v0, 6
    ctx->r10 = S32(ctx->r2 << 6);
    // 0x1503E488: lw          $t3, 0x1D4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X1D4);
    // 0x1503E48C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x1503E490: jal         0x150499A0
    // 0x1503E494: addu        $a0, $t3, $t2
    ctx->r4 = ADD32(ctx->r11, ctx->r10);
    func_150499A0(rdram, ctx);
        goto after_1;
    // 0x1503E494: addu        $a0, $t3, $t2
    ctx->r4 = ADD32(ctx->r11, ctx->r10);
    after_1:
    // 0x1503E498: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1503E49C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1503E4A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1503E4A4: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x1503E4A8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1503E4AC: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x1503E4B0: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x1503E4B4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x1503E4B8: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x1503E4BC: jal         0x150A7A48
    // 0x1503E4C0: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    func_150A7A48(rdram, ctx);
        goto after_2;
    // 0x1503E4C0: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    after_2:
L_1503E4C4:
    // 0x1503E4C4: addiu       $t4, $s0, 0xC
    ctx->r12 = ADD32(ctx->r16, 0XC);
    // 0x1503E4C8: addiu       $t5, $s0, 0x10
    ctx->r13 = ADD32(ctx->r16, 0X10);
    // 0x1503E4CC: addiu       $t6, $s0, 0x14
    ctx->r14 = ADD32(ctx->r16, 0X14);
    // 0x1503E4D0: addiu       $t7, $s0, 0x18
    ctx->r15 = ADD32(ctx->r16, 0X18);
    // 0x1503E4D4: addiu       $t8, $s0, 0x1C
    ctx->r24 = ADD32(ctx->r16, 0X1C);
    // 0x1503E4D8: addiu       $t9, $s0, 0x20
    ctx->r25 = ADD32(ctx->r16, 0X20);
    // 0x1503E4DC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1503E4E0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x1503E4E4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1503E4E8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1503E4EC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x1503E4F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1503E4F4: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x1503E4F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1503E4FC: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x1503E500: jal         0x1503E5F8
    // 0x1503E504: addiu       $a3, $s0, 0x8
    ctx->r7 = ADD32(ctx->r16, 0X8);
    func_1503E5F8(rdram, ctx);
        goto after_3;
    // 0x1503E504: addiu       $a3, $s0, 0x8
    ctx->r7 = ADD32(ctx->r16, 0X8);
    after_3:
    // 0x1503E508: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1503E50C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1503E510: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1503E514: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1503E518: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x1503E51C: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x1503E520: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x1503E524: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1503E528: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1503E52C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1503E530: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1503E534: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1503E538: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x1503E53C: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x1503E540: swc1        $f18, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f18.u32l;
    // 0x1503E544: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    // 0x1503E548: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    // 0x1503E54C: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
    // 0x1503E550: lwc1        $f6, 0x18($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1503E554: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1503E558: lwc1        $f18, 0x14($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X14);
    // 0x1503E55C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1503E560: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1503E564: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1503E568: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x1503E56C: sub.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x1503E570: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1503E574: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1503E578: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1503E57C: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1503E580: sub.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x1503E584: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x1503E588: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1503E58C: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1503E590: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1503E594: add.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1503E598: sqrt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = sqrtf(ctx->f0.fl);
    // 0x1503E59C: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x1503E5A0: nop

    // 0x1503E5A4: bc1fl       L_1503E5B8
    if (!c1cs) {
        // 0x1503E5A8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1503E5B8;
    }
    goto skip_0;
    // 0x1503E5A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x1503E5AC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1503E5B0: nop

    // 0x1503E5B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_1503E5B8:
    // 0x1503E5B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1503E5BC: nop

    // 0x1503E5C0: div.s       $f2, $f6, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x1503E5C4: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x1503E5C8: nop

    // 0x1503E5CC: mul.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x1503E5D0: nop

    // 0x1503E5D4: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1503E5D8: swc1        $f8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f8.u32l;
    // 0x1503E5DC: swc1        $f10, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f10.u32l;
    // 0x1503E5E0: swc1        $f18, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f18.u32l;
    // 0x1503E5E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1503E5E8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x1503E5EC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x1503E5F0: jr          $ra
    // 0x1503E5F4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x1503E5F4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_1502B020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502B020: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1502B024: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502B028: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1502B02C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1502B030: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1502B034: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1502B038: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502B03C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x1502B040: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1502B044: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1502B048: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1502B04C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1502B050: lui         $s1, 0xAB
    ctx->r17 = S32(0XAB << 16);
    // 0x1502B054: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x1502B058: addiu       $s1, $s1, 0x1950
    ctx->r17 = ADD32(ctx->r17, 0X1950);
    // 0x1502B05C: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
    // 0x1502B060: beq         $a1, $zero, L_1502B0C0
    if (ctx->r5 == 0) {
        // 0x1502B064: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_1502B0C0;
    }
    // 0x1502B064: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1502B068: lui         $s4, 0xFFF
    ctx->r20 = S32(0XFFF << 16);
    // 0x1502B06C: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x1502B070: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1502B074: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x1502B078: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
L_1502B07C:
    // 0x1502B07C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x1502B080: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x1502B084: and         $s0, $t7, $s2
    ctx->r16 = ctx->r15 & ctx->r18;
    // 0x1502B088: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1502B08C: beq         $t8, $zero, L_1502B0A4
    if (ctx->r24 == 0) {
        // 0x1502B090: lw          $a1, -0x4($s0)
        ctx->r5 = MEM_W(ctx->r16, -0X4);
            goto L_1502B0A4;
    }
    // 0x1502B090: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x1502B094: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502B098: jal         0x1502AC88
    // 0x1502B09C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_1502AC88(rdram, ctx);
        goto after_0;
    // 0x1502B09C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x1502B0A0: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_1502B0A4:
    // 0x1502B0A4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x1502B0A8: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x1502B0AC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x1502B0B0: and         $t0, $t9, $s4
    ctx->r8 = ctx->r25 & ctx->r20;
    // 0x1502B0B4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x1502B0B8: bne         $a1, $zero, L_1502B07C
    if (ctx->r5 != 0) {
        // 0x1502B0BC: sw          $t0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r8;
            goto L_1502B07C;
    }
    // 0x1502B0BC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
L_1502B0C0:
    // 0x1502B0C0: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x1502B0C4: lui         $s4, 0xFFF
    ctx->r20 = S32(0XFFF << 16);
    // 0x1502B0C8: ori         $s4, $s4, 0xFFFF
    ctx->r20 = ctx->r20 | 0XFFFF;
    // 0x1502B0CC: beq         $t1, $zero, L_1502B0DC
    if (ctx->r9 == 0) {
        // 0x1502B0D0: lw          $t2, 0x38($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X38);
            goto L_1502B0DC;
    }
    // 0x1502B0D0: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x1502B0D4: and         $t3, $t2, $s4
    ctx->r11 = ctx->r10 & ctx->r20;
    // 0x1502B0D8: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
L_1502B0DC:
    // 0x1502B0DC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x1502B0E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502B0E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1502B0E8: bne         $t4, $zero, L_1502B0F8
    if (ctx->r12 != 0) {
        // 0x1502B0EC: lw          $s3, 0x24($sp)
        ctx->r19 = MEM_W(ctx->r29, 0X24);
            goto L_1502B0F8;
    }
    // 0x1502B0EC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1502B0F0: b           L_1502B0FC
    // 0x1502B0F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1502B0FC;
    // 0x1502B0F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1502B0F8:
    // 0x1502B0F8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_1502B0FC:
    // 0x1502B0FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1502B100: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1502B104: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1502B108: jr          $ra
    // 0x1502B10C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x1502B10C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_1515F170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515F170: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1515F174: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1515F178: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1515F17C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515F180: lw          $v0, -0x3288($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3288);
    // 0x1515F184: beq         $v0, $zero, L_1515F1A8
    if (ctx->r2 == 0) {
        // 0x1515F188: nop
    
            goto L_1515F1A8;
    }
    // 0x1515F188: nop

    // 0x1515F18C: lbu         $t7, 0xB($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XB);
L_1515F190:
    // 0x1515F190: bnel        $a0, $t7, L_1515F1A0
    if (ctx->r4 != ctx->r15) {
        // 0x1515F194: lw          $v0, 0x0($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X0);
            goto L_1515F1A0;
    }
    goto skip_0;
    // 0x1515F194: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x1515F198: sb          $a1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r5;
    // 0x1515F19C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_1515F1A0:
    // 0x1515F1A0: bnel        $v0, $zero, L_1515F190
    if (ctx->r2 != 0) {
        // 0x1515F1A4: lbu         $t7, 0xB($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0XB);
            goto L_1515F190;
    }
    goto skip_1;
    // 0x1515F1A4: lbu         $t7, 0xB($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XB);
    skip_1:
L_1515F1A8:
    // 0x1515F1A8: jr          $ra
    // 0x1515F1AC: nop

    return;
    return;
    // 0x1515F1AC: nop

;}
RECOMP_FUNC void func_15164F0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15164F0C: addiu       $sp, $sp, -0x210
    ctx->r29 = ADD32(ctx->r29, -0X210);
    // 0x15164F10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15164F14: sw          $a0, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r4;
    // 0x15164F18: sw          $a1, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r5;
    // 0x15164F1C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15164F20: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x15164F24: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x15164F28: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15164F2C: andi        $s0, $a3, 0xFF
    ctx->r16 = ctx->r7 & 0XFF;
    // 0x15164F30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15164F34: sw          $a2, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r6;
    // 0x15164F38: sw          $a3, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->r7;
    // 0x15164F3C: sltiu       $at, $a0, 0x8
    ctx->r1 = ctx->r4 < 0X8 ? 1 : 0;
    // 0x15164F40: beq         $at, $zero, L_15165614
    if (ctx->r1 == 0) {
        // 0x15164F44: sll         $t8, $a0, 2
        ctx->r24 = S32(ctx->r4 << 2);
            goto L_15165614;
    }
    // 0x15164F44: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x15164F48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164F4C: addu        $at, $at, $t8
    gpr jr_addend_15164F54 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15164F50: lw          $t8, 0x6B38($at)
    ctx->r24 = ADD32(ctx->r1, 0X6B38);
    // 0x15164F54: jr          $t8
    // 0x15164F58: nop

    switch (jr_addend_15164F54 >> 2) {
        case 0: goto L_15165034; break;
        case 1: goto L_1516510C; break;
        case 2: goto L_151651C8; break;
        case 3: goto L_151652A0; break;
        case 4: goto L_15165370; break;
        case 5: goto L_15165448; break;
        case 6: goto L_15165530; break;
        case 7: goto L_15164F5C; break;
        default: switch_error(__func__, 0x15164F54, 0x800A6B38);
    }
    // 0x15164F58: nop

L_15164F5C:
    // 0x15164F5C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15164F60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15164F64: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x15164F68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15164F6C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x15164F70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15164F74: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15164F78: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15164F7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164F80: lwc1        $f16, 0x6B58($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6B58);
    // 0x15164F84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164F88: lwc1        $f18, 0x6B5C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6B5C);
    // 0x15164F8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164F90: swc1        $f4, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f4.u32l;
    // 0x15164F94: lwc1        $f4, 0x6B60($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6B60);
    // 0x15164F98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164F9C: swc1        $f6, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f6.u32l;
    // 0x15164FA0: lwc1        $f6, 0x6B64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6B64);
    // 0x15164FA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164FA8: swc1        $f8, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f8.u32l;
    // 0x15164FAC: lwc1        $f8, 0x6B68($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6B68);
    // 0x15164FB0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164FB4: swc1        $f10, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f10.u32l;
    // 0x15164FB8: lwc1        $f10, 0x6B6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6B6C);
    // 0x15164FBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164FC0: swc1        $f16, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f16.u32l;
    // 0x15164FC4: lwc1        $f16, 0x6B70($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6B70);
    // 0x15164FC8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15164FCC: swc1        $f18, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f18.u32l;
    // 0x15164FD0: lwc1        $f18, 0x6B74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6B74);
    // 0x15164FD4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15164FD8: swc1        $f4, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f4.u32l;
    // 0x15164FDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15164FE0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15164FE4: swc1        $f6, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->f6.u32l;
    // 0x15164FE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15164FEC: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x15164FF0: swc1        $f8, 0x1F4($sp)
    MEM_W(0X1F4, ctx->r29) = ctx->f8.u32l;
    // 0x15164FF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15164FF8: lw          $t9, 0x220($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X220);
    // 0x15164FFC: addiu       $a0, $sp, 0x1D4
    ctx->r4 = ADD32(ctx->r29, 0X1D4);
    // 0x15165000: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15165004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15165008: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x1516500C: swc1        $f10, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->f10.u32l;
    // 0x15165010: swc1        $f16, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->f16.u32l;
    // 0x15165014: swc1        $f18, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->f18.u32l;
    // 0x15165018: swc1        $f4, 0x204($sp)
    MEM_W(0X204, ctx->r29) = ctx->f4.u32l;
    // 0x1516501C: swc1        $f6, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->f6.u32l;
    // 0x15165020: swc1        $f8, 0x20C($sp)
    MEM_W(0X20C, ctx->r29) = ctx->f8.u32l;
    // 0x15165024: jal         0x15165628
    // 0x15165028: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_15165628(rdram, ctx);
        goto after_0;
    // 0x15165028: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_0:
    // 0x1516502C: b           L_15165618
    // 0x15165030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15165618;
    // 0x15165030: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15165034:
    // 0x15165034: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15165038: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1516503C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15165040: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15165044: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x15165048: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1516504C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165050: lwc1        $f4, 0x6B78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6B78);
    // 0x15165054: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165058: lwc1        $f6, 0x6B7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6B7C);
    // 0x1516505C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165060: lwc1        $f8, 0x6B80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6B80);
    // 0x15165064: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165068: swc1        $f10, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f10.u32l;
    // 0x1516506C: lwc1        $f10, 0x6B84($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6B84);
    // 0x15165070: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165074: swc1        $f16, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f16.u32l;
    // 0x15165078: lwc1        $f16, 0x6B88($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6B88);
    // 0x1516507C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165080: swc1        $f18, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f18.u32l;
    // 0x15165084: lwc1        $f18, 0x6B8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6B8C);
    // 0x15165088: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516508C: swc1        $f4, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f4.u32l;
    // 0x15165090: lwc1        $f4, 0x6B90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6B90);
    // 0x15165094: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165098: swc1        $f6, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f6.u32l;
    // 0x1516509C: lwc1        $f6, 0x6B94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6B94);
    // 0x151650A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151650A4: swc1        $f8, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f8.u32l;
    // 0x151650A8: lwc1        $f8, 0x6B98($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6B98);
    // 0x151650AC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x151650B0: swc1        $f10, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f10.u32l;
    // 0x151650B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151650B8: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x151650BC: swc1        $f16, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->f16.u32l;
    // 0x151650C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151650C4: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x151650C8: swc1        $f18, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f18.u32l;
    // 0x151650CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151650D0: lw          $t0, 0x220($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X220);
    // 0x151650D4: addiu       $a0, $sp, 0x198
    ctx->r4 = ADD32(ctx->r29, 0X198);
    // 0x151650D8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x151650DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151650E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151650E4: swc1        $f4, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f4.u32l;
    // 0x151650E8: swc1        $f6, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f6.u32l;
    // 0x151650EC: swc1        $f8, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f8.u32l;
    // 0x151650F0: swc1        $f10, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f10.u32l;
    // 0x151650F4: swc1        $f16, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f16.u32l;
    // 0x151650F8: swc1        $f18, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f18.u32l;
    // 0x151650FC: jal         0x15165628
    // 0x15165100: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15165628(rdram, ctx);
        goto after_1;
    // 0x15165100: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x15165104: b           L_15165618
    // 0x15165108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15165618;
    // 0x15165108: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1516510C:
    // 0x1516510C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15165110: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15165114: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15165118: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1516511C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15165120: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x15165124: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15165128: lui         $at, 0x4254
    ctx->r1 = S32(0X4254 << 16);
    // 0x1516512C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15165130: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165134: lwc1        $f10, 0x6B9C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6B9C);
    // 0x15165138: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516513C: lwc1        $f16, 0x6BA0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6BA0);
    // 0x15165140: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165144: lwc1        $f18, 0x6BA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6BA4);
    // 0x15165148: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516514C: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
    // 0x15165150: lwc1        $f4, 0x6BA8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6BA8);
    // 0x15165154: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165158: swc1        $f6, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f6.u32l;
    // 0x1516515C: lwc1        $f6, 0x6BAC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6BAC);
    // 0x15165160: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15165164: swc1        $f8, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f8.u32l;
    // 0x15165168: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1516516C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x15165170: swc1        $f10, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f10.u32l;
    // 0x15165174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15165178: lw          $t1, 0x220($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X220);
    // 0x1516517C: swc1        $f0, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f0.u32l;
    // 0x15165180: swc1        $f0, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f0.u32l;
    // 0x15165184: swc1        $f0, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f0.u32l;
    // 0x15165188: swc1        $f0, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f0.u32l;
    // 0x1516518C: swc1        $f2, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f2.u32l;
    // 0x15165190: addiu       $a0, $sp, 0x15C
    ctx->r4 = ADD32(ctx->r29, 0X15C);
    // 0x15165194: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15165198: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1516519C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151651A0: swc1        $f16, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f16.u32l;
    // 0x151651A4: swc1        $f18, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f18.u32l;
    // 0x151651A8: swc1        $f4, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f4.u32l;
    // 0x151651AC: swc1        $f6, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f6.u32l;
    // 0x151651B0: swc1        $f8, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f8.u32l;
    // 0x151651B4: swc1        $f10, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f10.u32l;
    // 0x151651B8: jal         0x15165628
    // 0x151651BC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    func_15165628(rdram, ctx);
        goto after_2;
    // 0x151651BC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    after_2:
    // 0x151651C0: b           L_15165618
    // 0x151651C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15165618;
    // 0x151651C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151651C8:
    // 0x151651C8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151651CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151651D0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151651D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151651D8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x151651DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151651E0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151651E4: lwc1        $f6, 0x6BB0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6BB0);
    // 0x151651E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151651EC: lwc1        $f8, 0x6BB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6BB4);
    // 0x151651F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151651F4: lwc1        $f10, 0x6BB8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6BB8);
    // 0x151651F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151651FC: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    // 0x15165200: lwc1        $f16, 0x6BBC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6BBC);
    // 0x15165204: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165208: swc1        $f18, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f18.u32l;
    // 0x1516520C: lwc1        $f18, 0x6BC0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6BC0);
    // 0x15165210: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165214: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    // 0x15165218: lwc1        $f4, 0x6BC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6BC4);
    // 0x1516521C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165220: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    // 0x15165224: lwc1        $f6, 0x6BC8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6BC8);
    // 0x15165228: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516522C: swc1        $f8, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f8.u32l;
    // 0x15165230: lwc1        $f8, 0x6BCC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6BCC);
    // 0x15165234: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165238: swc1        $f10, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f10.u32l;
    // 0x1516523C: lwc1        $f10, 0x6BD0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6BD0);
    // 0x15165240: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15165244: swc1        $f16, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f16.u32l;
    // 0x15165248: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1516524C: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x15165250: swc1        $f18, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f18.u32l;
    // 0x15165254: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15165258: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1516525C: swc1        $f4, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f4.u32l;
    // 0x15165260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15165264: lw          $t2, 0x220($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X220);
    // 0x15165268: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    // 0x1516526C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15165270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15165274: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x15165278: swc1        $f6, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f6.u32l;
    // 0x1516527C: swc1        $f8, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f8.u32l;
    // 0x15165280: swc1        $f10, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f10.u32l;
    // 0x15165284: swc1        $f16, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f16.u32l;
    // 0x15165288: swc1        $f18, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f18.u32l;
    // 0x1516528C: swc1        $f4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f4.u32l;
    // 0x15165290: jal         0x15165628
    // 0x15165294: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_15165628(rdram, ctx);
        goto after_3;
    // 0x15165294: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_3:
    // 0x15165298: b           L_15165618
    // 0x1516529C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15165618;
    // 0x1516529C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151652A0:
    // 0x151652A0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151652A4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151652A8: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151652AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151652B0: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x151652B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151652B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151652BC: lwc1        $f10, 0x6BD4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6BD4);
    // 0x151652C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151652C4: lwc1        $f16, 0x6BD8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6BD8);
    // 0x151652C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151652CC: lwc1        $f18, 0x6BDC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6BDC);
    // 0x151652D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151652D4: lwc1        $f4, 0x6BE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6BE0);
    // 0x151652D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151652DC: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x151652E0: lwc1        $f6, 0x6BE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6BE4);
    // 0x151652E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151652E8: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x151652EC: lwc1        $f8, 0x6BE8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6BE8);
    // 0x151652F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151652F4: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x151652F8: lwc1        $f10, 0x6BEC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6BEC);
    // 0x151652FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165300: swc1        $f16, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f16.u32l;
    // 0x15165304: lwc1        $f16, 0x6BF0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6BF0);
    // 0x15165308: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516530C: swc1        $f18, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f18.u32l;
    // 0x15165310: lwc1        $f18, 0x6BF4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6BF4);
    // 0x15165314: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x15165318: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x1516531C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15165320: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x15165324: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x15165328: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1516532C: lw          $t3, 0x220($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X220);
    // 0x15165330: swc1        $f2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f2.u32l;
    // 0x15165334: swc1        $f2, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f2.u32l;
    // 0x15165338: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x1516533C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x15165340: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15165344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x15165348: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x1516534C: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    // 0x15165350: swc1        $f16, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f16.u32l;
    // 0x15165354: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    // 0x15165358: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    // 0x1516535C: swc1        $f6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f6.u32l;
    // 0x15165360: jal         0x15165628
    // 0x15165364: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_15165628(rdram, ctx);
        goto after_4;
    // 0x15165364: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_4:
    // 0x15165368: b           L_15165618
    // 0x1516536C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15165618;
    // 0x1516536C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15165370:
    // 0x15165370: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15165374: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15165378: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x1516537C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15165380: lui         $at, 0x4188
    ctx->r1 = S32(0X4188 << 16);
    // 0x15165384: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15165388: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x1516538C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15165390: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165394: lwc1        $f18, 0x6BF8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6BF8);
    // 0x15165398: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516539C: lwc1        $f4, 0x6BFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6BFC);
    // 0x151653A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151653A4: lwc1        $f6, 0x6C00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6C00);
    // 0x151653A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151653AC: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x151653B0: lwc1        $f8, 0x6C04($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6C04);
    // 0x151653B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151653B8: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x151653BC: lwc1        $f10, 0x6C08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6C08);
    // 0x151653C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151653C4: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x151653C8: lwc1        $f16, 0x6C0C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6C0C);
    // 0x151653CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151653D0: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    // 0x151653D4: lwc1        $f18, 0x6C10($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6C10);
    // 0x151653D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151653DC: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x151653E0: lwc1        $f4, 0x6C14($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6C14);
    // 0x151653E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151653E8: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x151653EC: lwc1        $f6, 0x6C18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6C18);
    // 0x151653F0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151653F4: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x151653F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151653FC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x15165400: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x15165404: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15165408: lw          $t4, 0x220($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X220);
    // 0x1516540C: swc1        $f2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f2.u32l;
    // 0x15165410: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x15165414: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15165418: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1516541C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x15165420: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x15165424: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    // 0x15165428: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x1516542C: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    // 0x15165430: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x15165434: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x15165438: jal         0x15165628
    // 0x1516543C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15165628(rdram, ctx);
        goto after_5;
    // 0x1516543C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_5:
    // 0x15165440: b           L_15165618
    // 0x15165444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15165618;
    // 0x15165444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15165448:
    // 0x15165448: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1516544C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15165450: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x15165454: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15165458: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1516545C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15165460: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x15165464: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15165468: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516546C: lwc1        $f6, 0x6C1C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6C1C);
    // 0x15165470: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165474: lwc1        $f8, 0x6C20($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6C20);
    // 0x15165478: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516547C: lwc1        $f10, 0x6C24($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6C24);
    // 0x15165480: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165484: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x15165488: lwc1        $f16, 0x6C28($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6C28);
    // 0x1516548C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165490: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x15165494: lwc1        $f18, 0x6C2C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6C2C);
    // 0x15165498: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516549C: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x151654A0: lwc1        $f4, 0x6C30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6C30);
    // 0x151654A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151654A8: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x151654AC: lwc1        $f6, 0x6C34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6C34);
    // 0x151654B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151654B4: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x151654B8: lwc1        $f8, 0x6C38($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6C38);
    // 0x151654BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151654C0: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x151654C4: lwc1        $f10, 0x6C3C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6C3C);
    // 0x151654C8: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151654CC: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x151654D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151654D4: lw          $t5, 0x220($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X220);
    // 0x151654D8: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    // 0x151654DC: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x151654E0: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x151654E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151654E8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x151654EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151654F0: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151654F4: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x151654F8: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    // 0x151654FC: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x15165500: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x15165504: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x15165508: jal         0x15165628
    // 0x1516550C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_15165628(rdram, ctx);
        goto after_6;
    // 0x1516550C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_6:
    // 0x15165510: beq         $v0, $zero, L_15165528
    if (ctx->r2 == 0) {
        // 0x15165514: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15165528;
    }
    // 0x15165514: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15165518: addiu       $a0, $v0, 0x108
    ctx->r4 = ADD32(ctx->r2, 0X108);
    // 0x1516551C: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x15165520: jal         0x10022EC0
    // 0x15165524: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x15165524: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_7:
L_15165528:
    // 0x15165528: b           L_15165614
    // 0x1516552C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15165614;
    // 0x1516552C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15165530:
    // 0x15165530: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15165534: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15165538: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1516553C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15165540: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15165544: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15165548: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x1516554C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15165550: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165554: lwc1        $f8, 0x6C40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6C40);
    // 0x15165558: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516555C: lwc1        $f10, 0x6C44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6C44);
    // 0x15165560: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165564: lwc1        $f16, 0x6C48($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6C48);
    // 0x15165568: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516556C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x15165570: lwc1        $f18, 0x6C4C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6C4C);
    // 0x15165574: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165578: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x1516557C: lwc1        $f4, 0x6C50($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6C50);
    // 0x15165580: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165584: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x15165588: lwc1        $f6, 0x6C54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6C54);
    // 0x1516558C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15165590: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x15165594: lwc1        $f8, 0x6C58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6C58);
    // 0x15165598: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516559C: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x151655A0: lwc1        $f10, 0x6C5C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6C5C);
    // 0x151655A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151655A8: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x151655AC: lwc1        $f16, 0x6C60($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6C60);
    // 0x151655B0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151655B4: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x151655B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151655BC: lw          $t6, 0x220($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X220);
    // 0x151655C0: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x151655C4: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x151655C8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151655CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151655D0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x151655D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x151655D8: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x151655DC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x151655E0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x151655E4: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x151655E8: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    // 0x151655EC: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x151655F0: jal         0x15165628
    // 0x151655F4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_15165628(rdram, ctx);
        goto after_8;
    // 0x151655F4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_8:
    // 0x151655F8: beq         $v0, $zero, L_15165610
    if (ctx->r2 == 0) {
        // 0x151655FC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15165610;
    }
    // 0x151655FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15165600: addiu       $a0, $v0, 0x108
    ctx->r4 = ADD32(ctx->r2, 0X108);
    // 0x15165604: lw          $a1, 0x218($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X218);
    // 0x15165608: jal         0x10022EC0
    // 0x1516560C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x1516560C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_9:
L_15165610:
    // 0x15165610: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15165614:
    // 0x15165614: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15165618:
    // 0x15165618: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1516561C: addiu       $sp, $sp, 0x210
    ctx->r29 = ADD32(ctx->r29, 0X210);
    // 0x15165620: jr          $ra
    // 0x15165624: nop

    return;
    return;
    // 0x15165624: nop

;}
RECOMP_FUNC void func_151D8FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8FC8: addiu       $v0, $zero, 0xB3
    ctx->r2 = ADD32(0, 0XB3);
    // 0x151D8FCC: jr          $ra
    // 0x151D8FD0: nop

    return;
    return;
    // 0x151D8FD0: nop

;}
RECOMP_FUNC void func_151E7F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E7F60: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151E7F64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151E7F68: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x151E7F6C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151E7F70: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x151E7F74: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151E7F78: addiu       $t8, $t8, 0xBA0
    ctx->r24 = ADD32(ctx->r24, 0XBA0);
    // 0x151E7F7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151E7F80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x151E7F84: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x151E7F88: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x151E7F8C: beq         $a2, $zero, L_151E7F9C
    if (ctx->r6 == 0) {
        // 0x151E7F90: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_151E7F9C;
    }
    // 0x151E7F90: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x151E7F94: jal         0x15060F28
    // 0x151E7F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060F28(rdram, ctx);
        goto after_0;
    // 0x151E7F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_151E7F9C:
    // 0x151E7F9C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x151E7FA0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x151E7FA4: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x151E7FA8: jal         0x15083E0C
    // 0x151E7FAC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_15083E0C(rdram, ctx);
        goto after_1;
    // 0x151E7FAC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_1:
    // 0x151E7FB0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151E7FB4: lw          $t9, -0x22C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X22C);
    // 0x151E7FB8: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x151E7FBC: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x151E7FC0: lb          $t3, 0x2C($t9)
    ctx->r11 = MEM_B(ctx->r25, 0X2C);
    // 0x151E7FC4: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x151E7FC8: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151E7FCC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x151E7FD0: lw          $t5, 0x20FC($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X20FC);
    // 0x151E7FD4: subu        $t4, $t4, $v0
    ctx->r12 = SUB32(ctx->r12, ctx->r2);
    // 0x151E7FD8: addiu       $t8, $t8, -0x4A84
    ctx->r24 = ADD32(ctx->r24, -0X4A84);
    // 0x151E7FDC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x151E7FE0: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x151E7FE4: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x151E7FE8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151E7FEC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x151E7FF0: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x151E7FF4: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
    // 0x151E7FF8: bne         $t3, $at, L_151E8004
    if (ctx->r11 != ctx->r1) {
        // 0x151E7FFC: addu        $a0, $t4, $t5
        ctx->r4 = ADD32(ctx->r12, ctx->r13);
            goto L_151E8004;
    }
    // 0x151E7FFC: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x151E8000: addiu       $v1, $t2, 0x1
    ctx->r3 = ADD32(ctx->r10, 0X1);
L_151E8004:
    // 0x151E8004: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151E8008: addiu       $t5, $t5, -0x46C0
    ctx->r13 = ADD32(ctx->r13, -0X46C0);
    // 0x151E800C: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
    // 0x151E8010: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    // 0x151E8014: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x151E8018: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x151E801C: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x151E8020: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E8024: sh          $t6, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r14;
    // 0x151E8028: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x151E802C: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x151E8030: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E8034: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    // 0x151E8038: lh          $t8, 0x8($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8);
    // 0x151E803C: lb          $t9, 0x4($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X4);
    // 0x151E8040: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x151E8044: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x151E8048: sh          $t3, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r11;
    // 0x151E804C: lh          $t4, 0x4($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X4);
    // 0x151E8050: sh          $t4, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r12;
    // 0x151E8054: lbu         $t5, 0x6($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X6);
    // 0x151E8058: bne         $t1, $at, L_151E8068
    if (ctx->r9 != ctx->r1) {
        // 0x151E805C: sb          $t5, 0xC($a0)
        MEM_B(0XC, ctx->r4) = ctx->r13;
            goto L_151E8068;
    }
    // 0x151E805C: sb          $t5, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r13;
    // 0x151E8060: b           L_151E806C
    // 0x151E8064: sb          $t6, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r14;
        goto L_151E806C;
    // 0x151E8064: sb          $t6, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r14;
L_151E8068:
    // 0x151E8068: sb          $t7, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r15;
L_151E806C:
    // 0x151E806C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151E8070: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x151E8074: jal         0x15082A44
    // 0x151E8078: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    func_15082A44(rdram, ctx);
        goto after_2;
    // 0x151E8078: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_2:
    // 0x151E807C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x151E8080: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x151E8084: beq         $v0, $zero, L_151E81DC
    if (ctx->r2 == 0) {
        // 0x151E8088: sw          $v0, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r2;
            goto L_151E81DC;
    }
    // 0x151E8088: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x151E808C: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x151E8090: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x151E8094: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151E8098: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x151E809C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151E80A0: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x151E80A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151E80A8: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x151E80AC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x151E80B0: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x151E80B4: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x151E80B8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151E80BC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x151E80C0: addiu       $a0, $v1, -0x32C
    ctx->r4 = ADD32(ctx->r3, -0X32C);
    // 0x151E80C4: sw          $a0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r4;
    // 0x151E80C8: lhu         $t5, -0x34($v1)
    ctx->r13 = MEM_HU(ctx->r3, -0X34);
    // 0x151E80CC: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151E80D0: lbu         $t7, -0x328($v1)
    ctx->r15 = MEM_BU(ctx->r3, -0X328);
    // 0x151E80D4: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x151E80D8: ori         $t6, $t5, 0x3
    ctx->r14 = ctx->r13 | 0X3;
    // 0x151E80DC: sb          $t4, -0x327($v1)
    MEM_B(-0X327, ctx->r3) = ctx->r12;
    // 0x151E80E0: sh          $t6, -0x34($v1)
    MEM_H(-0X34, ctx->r3) = ctx->r14;
    // 0x151E80E4: swc1        $f0, -0x1DC($v1)
    MEM_W(-0X1DC, ctx->r3) = ctx->f0.u32l;
    // 0x151E80E8: beq         $t7, $zero, L_151E80FC
    if (ctx->r15 == 0) {
        // 0x151E80EC: swc1        $f0, -0x1E0($v1)
        MEM_W(-0X1E0, ctx->r3) = ctx->f0.u32l;
            goto L_151E80FC;
    }
    // 0x151E80EC: swc1        $f0, -0x1E0($v1)
    MEM_W(-0X1E0, ctx->r3) = ctx->f0.u32l;
    // 0x151E80F0: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
    // 0x151E80F4: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x151E80F8: bne         $t8, $at, L_151E8160
    if (ctx->r24 != ctx->r1) {
        // 0x151E80FC: addiu       $a0, $zero, 0x1C0
        ctx->r4 = ADD32(0, 0X1C0);
            goto L_151E8160;
    }
L_151E80FC:
    // 0x151E80FC: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    // 0x151E8100: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151E8104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151E8108: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E810C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x151E8110: jal         0x10003C40
    // 0x151E8114: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x151E8114: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    after_3:
    // 0x151E8118: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151E811C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x151E8120: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151E8124: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x151E8128: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x151E812C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151E8130: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x151E8134: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151E8138: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x151E813C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151E8140: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x151E8144: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151E8148: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x151E814C: sw          $v0, -0x3D40($at)
    MEM_W(-0X3D40, ctx->r1) = ctx->r2;
    // 0x151E8150: jal         0x100226F0
    // 0x151E8154: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x151E8154: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    after_4:
    // 0x151E8158: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x151E815C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
L_151E8160:
    // 0x151E8160: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x151E8164: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x151E8168: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x151E816C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x151E8170: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x151E8174: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151E8178: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x151E817C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151E8180: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x151E8184: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151E8188: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x151E818C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x151E8190: addiu       $t6, $t5, -0x32C
    ctx->r14 = ADD32(ctx->r13, -0X32C);
    // 0x151E8194: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x151E8198: bne         $t1, $at, L_151E81AC
    if (ctx->r9 != ctx->r1) {
        // 0x151E819C: addu        $a0, $t6, $t7
        ctx->r4 = ADD32(ctx->r14, ctx->r15);
            goto L_151E81AC;
    }
    // 0x151E819C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x151E81A0: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x151E81A4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151E81A8: sb          $t9, 0x68($a0)
    MEM_B(0X68, ctx->r4) = ctx->r25;
L_151E81AC:
    // 0x151E81AC: lbu         $a1, 0x6($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X6);
    // 0x151E81B0: jal         0x15083384
    // 0x151E81B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_15083384(rdram, ctx);
        goto after_5;
    // 0x151E81B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_5:
    // 0x151E81B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151E81BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x151E81C0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x151E81C4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x151E81C8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x151E81CC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151E81D0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x151E81D4: jal         0x1505E650
    // 0x151E81D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    func_1505E650(rdram, ctx);
        goto after_6;
    // 0x151E81D8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_6:
L_151E81DC:
    // 0x151E81DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151E81E0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151E81E4: jr          $ra
    // 0x151E81E8: nop

    return;
    return;
    // 0x151E81E8: nop

;}
RECOMP_FUNC void func_151D5174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D5174: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151D5178: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151D517C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D5180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D5184: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151D5188: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151D518C: lw          $t8, 0x1D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1D4);
    // 0x151D5190: beql        $t8, $zero, L_151D5314
    if (ctx->r24 == 0) {
        // 0x151D5194: lw          $t8, 0x74($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X74);
            goto L_151D5314;
    }
    goto skip_0;
    // 0x151D5194: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x151D5198: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151D519C: beql        $v0, $zero, L_151D5314
    if (ctx->r2 == 0) {
        // 0x151D51A0: lw          $t8, 0x74($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X74);
            goto L_151D5314;
    }
    goto skip_1;
    // 0x151D51A0: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x151D51A4: lbu         $t9, 0x198($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X198);
    // 0x151D51A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151D51AC: addiu       $v1, $v0, 0x13C
    ctx->r3 = ADD32(ctx->r2, 0X13C);
    // 0x151D51B0: beq         $t9, $at, L_151D51C0
    if (ctx->r25 == ctx->r1) {
        // 0x151D51B4: lw          $a0, 0x60($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X60);
            goto L_151D51C0;
    }
    // 0x151D51B4: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x151D51B8: lbu         $t0, 0x84($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X84);
    // 0x151D51BC: beq         $t0, $zero, L_151D5310
    if (ctx->r8 == 0) {
        // 0x151D51C0: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_151D5310;
    }
L_151D51C0:
    // 0x151D51C0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x151D51C4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x151D51C8: jal         0x151450B4
    // 0x151D51CC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    func_151450B4(rdram, ctx);
        goto after_0;
    // 0x151D51CC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    after_0:
    // 0x151D51D0: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x151D51D4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x151D51D8: jal         0x151450B4
    // 0x151D51DC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_151450B4(rdram, ctx);
        goto after_1;
    // 0x151D51DC: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x151D51E0: lw          $v0, 0x7C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X7C);
    // 0x151D51E4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x151D51E8: beql        $v0, $zero, L_151D521C
    if (ctx->r2 == 0) {
        // 0x151D51EC: lw          $v0, 0x5C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X5C);
            goto L_151D521C;
    }
    goto skip_2;
    // 0x151D51EC: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    skip_2:
    // 0x151D51F0: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151D51F4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151D51F8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151D51FC: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151D5200: sub.s       $f14, $f6, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x151D5204: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151D5208: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151D520C: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151D5210: b           L_151D5240
    // 0x151D5214: sub.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f6.fl;
        goto L_151D5240;
    // 0x151D5214: sub.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x151D5218: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_151D521C:
    // 0x151D521C: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151D5220: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151D5224: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151D5228: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151D522C: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151D5230: sub.s       $f14, $f4, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x151D5234: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151D5238: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x151D523C: sub.s       $f18, $f6, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f4.fl;
L_151D5240:
    // 0x151D5240: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151D5244: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x151D5248: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151D524C: lwc1        $f8, 0x134($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X134);
    // 0x151D5250: lwc1        $f0, 0x130($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X130);
    // 0x151D5254: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x151D5258: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x151D525C: lwc1        $f10, 0x138($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X138);
    // 0x151D5260: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x151D5264: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151D5268: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151D526C: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151D5270: mul.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151D5274: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151D5278: mul.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x151D527C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151D5280: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151D5284: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151D5288: mul.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x151D528C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151D5290: div.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151D5294: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x151D5298: add.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x151D529C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x151D52A0: lw          $t1, 0x31C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X31C);
    // 0x151D52A4: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151D52A8: lwc1        $f8, 0x134($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X134);
    // 0x151D52AC: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x151D52B0: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151D52B4: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x151D52B8: lw          $t2, 0x31C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X31C);
    // 0x151D52BC: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151D52C0: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x151D52C4: lwc1        $f6, 0x138($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X138);
    // 0x151D52C8: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x151D52CC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151D52D0: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x151D52D4: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x151D52D8: lwc1        $f6, 0x130($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X130);
    // 0x151D52DC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x151D52E0: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x151D52E4: lwc1        $f8, 0x134($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X134);
    // 0x151D52E8: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x151D52EC: lw          $t5, 0x31C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X31C);
    // 0x151D52F0: lwc1        $f10, 0x138($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X138);
    // 0x151D52F4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x151D52F8: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x151D52FC: sw          $a0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r4;
    // 0x151D5300: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x151D5304: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x151D5308: b           L_151D5324
    // 0x151D530C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151D5324;
    // 0x151D530C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151D5310:
    // 0x151D5310: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
L_151D5314:
    // 0x151D5314: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x151D5318: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x151D531C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x151D5320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151D5324:
    // 0x151D5324: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151D5328: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151D532C: jr          $ra
    // 0x151D5330: nop

    return;
    return;
    // 0x151D5330: nop

;}
RECOMP_FUNC void func_150712AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150712AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150712B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150712B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150712B8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150712BC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150712C0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150712C4: jal         0x150FE860
    // 0x150712C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150FE860(rdram, ctx);
        goto after_0;
    // 0x150712C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150712CC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150712D0: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x150712D4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150712D8: lw          $t7, 0x318($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X318);
    // 0x150712DC: beql        $t7, $zero, L_15071354
    if (ctx->r15 == 0) {
        // 0x150712E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15071354;
    }
    goto skip_0;
    // 0x150712E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150712E4: jal         0x150ADA20
    // 0x150712E8: sb          $t8, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150712E8: sb          $t8, 0x18($sp)
    MEM_B(0X18, ctx->r29) = ctx->r24;
    after_1:
    // 0x150712EC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x150712F0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150712F4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150712F8: lw          $t1, 0x154C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X154C);
    // 0x150712FC: mfhi        $t9
    ctx->r25 = hi;
    // 0x15071300: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x15071304: sh          $t0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r8;
    // 0x15071308: lw          $t2, 0x318($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X318);
    // 0x1507130C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15071310: lbu         $t3, 0x23D($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X23D);
    // 0x15071314: sllv        $t5, $t4, $t3
    ctx->r13 = S32(ctx->r12 << (ctx->r11 & 31));
    // 0x15071318: jal         0x150ADA20
    // 0x1507131C: sb          $t5, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1507131C: sb          $t5, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r13;
    after_2:
    // 0x15071320: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x15071324: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15071328: mfhi        $t6
    ctx->r14 = hi;
    // 0x1507132C: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x15071330: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x15071334: sb          $t7, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r15;
    // 0x15071338: sb          $t8, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r24;
    // 0x1507133C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15071340: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15071344: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x15071348: jal         0x151D8868
    // 0x1507134C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151D8868(rdram, ctx);
        goto after_3;
    // 0x1507134C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x15071350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15071354:
    // 0x15071354: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15071358: jr          $ra
    // 0x1507135C: nop

    return;
    return;
    // 0x1507135C: nop

;}
RECOMP_FUNC void func_151D7424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D7424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D7428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D742C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D7430: jal         0x151D7404
    // 0x151D7434: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D7404(rdram, ctx);
        goto after_0;
    // 0x151D7434: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D7438: jal         0x1514933C
    // 0x151D743C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x151D743C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D7440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D7444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D7448: jr          $ra
    // 0x151D744C: nop

    return;
    return;
    // 0x151D744C: nop

;}
RECOMP_FUNC void func_151D8FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8FBC: addiu       $v0, $zero, 0x9F
    ctx->r2 = ADD32(0, 0X9F);
    // 0x151D8FC0: jr          $ra
    // 0x151D8FC4: nop

    return;
    return;
    // 0x151D8FC4: nop

;}
RECOMP_FUNC void func_1511C548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511C548: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1511C54C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1511C550: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1511C554: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1511C558: jal         0x15047D60
    // 0x1511C55C: lwc1        $f12, 0x80($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X80);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1511C55C: lwc1        $f12, 0x80($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X80);
    after_0:
    // 0x1511C560: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x1511C564: jal         0x15047D60
    // 0x1511C568: lwc1        $f12, 0x84($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X84);
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x1511C568: lwc1        $f12, 0x84($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X84);
    after_1:
    // 0x1511C56C: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x1511C570: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1511C574: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1511C578: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1511C57C: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x1511C580: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x1511C584: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511C588: lwc1        $f4, 0x80($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1511C58C: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1511C590: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x1511C594: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x1511C598: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1511C59C: lwc1        $f10, 0x31EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X31EC);
    // 0x1511C5A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511C5A4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1511C5A8: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1511C5AC: lwc1        $f4, 0x84($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X84);
    // 0x1511C5B0: swc1        $f6, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f6.u32l;
    // 0x1511C5B4: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1511C5B8: lwc1        $f8, 0x31F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X31F0);
    // 0x1511C5BC: lwc1        $f12, 0x80($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X80);
    // 0x1511C5C0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1511C5C4: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x1511C5C8: jal         0x15144B68
    // 0x1511C5CC: swc1        $f18, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f18.u32l;
    func_15144B68(rdram, ctx);
        goto after_2;
    // 0x1511C5CC: swc1        $f18, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f18.u32l;
    after_2:
    // 0x1511C5D0: swc1        $f0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->f0.u32l;
    // 0x1511C5D4: jal         0x15144B68
    // 0x1511C5D8: lwc1        $f12, 0x84($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X84);
    func_15144B68(rdram, ctx);
        goto after_3;
    // 0x1511C5D8: lwc1        $f12, 0x84($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X84);
    after_3:
    // 0x1511C5DC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1511C5E0: swc1        $f0, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f0.u32l;
    // 0x1511C5E4: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1511C5E8: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x1511C5EC: nop

    // 0x1511C5F0: bc1fl       L_1511C628
    if (!c1cs) {
        // 0x1511C5F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1511C628;
    }
    goto skip_0;
    // 0x1511C5F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1511C5F8: lwc1        $f8, 0x84($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X84);
    // 0x1511C5FC: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x1511C600: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x1511C604: nop

    // 0x1511C608: bc1fl       L_1511C628
    if (!c1cs) {
        // 0x1511C60C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1511C628;
    }
    goto skip_1;
    // 0x1511C60C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x1511C610: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1511C614: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x1511C618: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511C61C: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x1511C620: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x1511C624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1511C628:
    // 0x1511C628: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1511C62C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1511C630: jr          $ra
    // 0x1511C634: nop

    return;
    return;
    // 0x1511C634: nop

;}
RECOMP_FUNC void func_15094AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15094AB8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15094ABC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15094AC0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x15094AC4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x15094AC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15094ACC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15094AD0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15094AD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15094AD8: lwc1        $f4, -0x2160($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2160);
    // 0x15094ADC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15094AE0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15094AE4: mul.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x15094AE8: jal         0x15047D60
    // 0x15094AEC: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15094AEC: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x15094AF0: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15094AF4: jal         0x15047C00
    // 0x15094AF8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x15094AF8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x15094AFC: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x15094B00: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x15094B04: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15094B08: blez        $a2, L_15094E84
    if (SIGNED(ctx->r6) <= 0) {
        // 0x15094B0C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_15094E84;
    }
    // 0x15094B0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15094B10: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x15094B14: beq         $v0, $zero, L_15094BEC
    if (ctx->r2 == 0) {
        // 0x15094B18: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_15094BEC;
    }
    // 0x15094B18: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x15094B1C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x15094B20: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x15094B24: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x15094B28: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x15094B2C: bgez        $t6, L_15094B3C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x15094B30: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_15094B3C;
    }
    // 0x15094B30: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x15094B34: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x15094B38: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_15094B3C:
    // 0x15094B3C: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x15094B40: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x15094B44: lh          $t3, 0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2);
    // 0x15094B48: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x15094B4C: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15094B50: bgez        $t9, L_15094B60
    if (SIGNED(ctx->r25) >= 0) {
        // 0x15094B54: sra         $t0, $t9, 1
        ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
            goto L_15094B60;
    }
    // 0x15094B54: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x15094B58: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x15094B5C: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_15094B60:
    // 0x15094B60: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x15094B64: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x15094B68: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094B6C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15094B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15094B74: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094B78: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15094B7C: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x15094B80: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x15094B84: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15094B88: nop

    // 0x15094B8C: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15094B90: sub.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x15094B94: add.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x15094B98: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15094B9C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x15094BA0: nop

    // 0x15094BA4: sh          $t5, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r13;
    // 0x15094BA8: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x15094BAC: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x15094BB0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x15094BB4: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15094BB8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094BBC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15094BC0: sub.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x15094BC4: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094BC8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15094BCC: nop

    // 0x15094BD0: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15094BD4: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15094BD8: add.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f12.fl;
    // 0x15094BDC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15094BE0: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15094BE4: beq         $a1, $a2, L_15094E84
    if (ctx->r5 == ctx->r6) {
        // 0x15094BE8: sh          $t9, 0xA($v1)
        MEM_H(0XA, ctx->r3) = ctx->r25;
            goto L_15094E84;
    }
    // 0x15094BE8: sh          $t9, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r25;
L_15094BEC:
    // 0x15094BEC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x15094BF0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x15094BF4: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x15094BF8: bgez        $t0, L_15094C08
    if (SIGNED(ctx->r8) >= 0) {
        // 0x15094BFC: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_15094C08;
    }
    // 0x15094BFC: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x15094C00: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x15094C04: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_15094C08:
    // 0x15094C08: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x15094C0C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x15094C10: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x15094C14: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x15094C18: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15094C1C: bgez        $t3, L_15094C2C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x15094C20: sra         $t4, $t3, 1
        ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
            goto L_15094C2C;
    }
    // 0x15094C20: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x15094C24: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x15094C28: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_15094C2C:
    // 0x15094C2C: sll         $t5, $t4, 5
    ctx->r13 = S32(ctx->r12 << 5);
    // 0x15094C30: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x15094C34: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x15094C38: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x15094C3C: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15094C40: addu        $a0, $t8, $a3
    ctx->r4 = ADD32(ctx->r24, ctx->r7);
    // 0x15094C44: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x15094C48: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x15094C4C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x15094C50: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15094C54: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x15094C58: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094C5C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094C60: sub.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094C64: sub.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15094C68: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15094C6C: nop

    // 0x15094C70: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15094C74: beq         $v0, $a0, L_15094D9C
    if (ctx->r2 == ctx->r4) {
        // 0x15094C78: nop
    
            goto L_15094D9C;
    }
    // 0x15094C78: nop

L_15094C7C:
    // 0x15094C7C: sub.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x15094C80: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x15094C84: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x15094C88: add.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x15094C8C: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15094C90: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x15094C94: nop

    // 0x15094C98: sh          $t2, -0x18($v1)
    MEM_H(-0X18, ctx->r3) = ctx->r10;
    // 0x15094C9C: lh          $t3, -0xE($v0)
    ctx->r11 = MEM_H(ctx->r2, -0XE);
    // 0x15094CA0: lh          $t4, -0x10($v0)
    ctx->r12 = MEM_H(ctx->r2, -0X10);
    // 0x15094CA4: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x15094CA8: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x15094CAC: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094CB0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094CB4: sub.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15094CB8: sub.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094CBC: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15094CC0: nop

    // 0x15094CC4: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15094CC8: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15094CCC: add.s       $f8, $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x15094CD0: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15094CD4: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x15094CD8: nop

    // 0x15094CDC: sh          $t6, -0x16($v1)
    MEM_H(-0X16, ctx->r3) = ctx->r14;
    // 0x15094CE0: lh          $t7, -0xC($v0)
    ctx->r15 = MEM_H(ctx->r2, -0XC);
    // 0x15094CE4: lh          $t8, -0xA($v0)
    ctx->r24 = MEM_H(ctx->r2, -0XA);
    // 0x15094CE8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x15094CEC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15094CF0: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094CF4: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094CF8: sub.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094CFC: sub.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15094D00: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15094D04: nop

    // 0x15094D08: mul.s       $f10, $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15094D0C: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15094D10: add.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x15094D14: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15094D18: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x15094D1C: nop

    // 0x15094D20: sh          $t0, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r8;
    // 0x15094D24: lh          $t1, -0xA($v0)
    ctx->r9 = MEM_H(ctx->r2, -0XA);
    // 0x15094D28: lh          $t2, -0xC($v0)
    ctx->r10 = MEM_H(ctx->r2, -0XC);
    // 0x15094D2C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x15094D30: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15094D34: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094D38: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094D3C: sub.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15094D40: sub.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094D44: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15094D48: nop

    // 0x15094D4C: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15094D50: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15094D54: add.s       $f8, $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x15094D58: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15094D5C: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x15094D60: nop

    // 0x15094D64: sh          $t4, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r12;
    // 0x15094D68: lh          $t9, -0x8($v0)
    ctx->r25 = MEM_H(ctx->r2, -0X8);
    // 0x15094D6C: lh          $t0, -0x6($v0)
    ctx->r8 = MEM_H(ctx->r2, -0X6);
    // 0x15094D70: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x15094D74: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x15094D78: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094D7C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094D80: sub.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094D84: sub.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15094D88: mul.s       $f18, $f8, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15094D8C: nop

    // 0x15094D90: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15094D94: bne         $v0, $a0, L_15094C7C
    if (ctx->r2 != ctx->r4) {
        // 0x15094D98: nop
    
            goto L_15094C7C;
    }
    // 0x15094D98: nop

L_15094D9C:
    // 0x15094D9C: sub.s       $f10, $f18, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x15094DA0: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x15094DA4: add.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x15094DA8: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15094DAC: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x15094DB0: nop

    // 0x15094DB4: sh          $t2, -0x18($v1)
    MEM_H(-0X18, ctx->r3) = ctx->r10;
    // 0x15094DB8: lh          $t3, -0x6($v0)
    ctx->r11 = MEM_H(ctx->r2, -0X6);
    // 0x15094DBC: lh          $t4, -0x8($v0)
    ctx->r12 = MEM_H(ctx->r2, -0X8);
    // 0x15094DC0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x15094DC4: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x15094DC8: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094DCC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094DD0: sub.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15094DD4: sub.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094DD8: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15094DDC: nop

    // 0x15094DE0: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15094DE4: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15094DE8: add.s       $f8, $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x15094DEC: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15094DF0: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x15094DF4: nop

    // 0x15094DF8: sh          $t6, -0x16($v1)
    MEM_H(-0X16, ctx->r3) = ctx->r14;
    // 0x15094DFC: lh          $t7, -0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, -0X4);
    // 0x15094E00: lh          $t8, -0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, -0X2);
    // 0x15094E04: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x15094E08: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x15094E0C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094E10: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094E14: sub.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094E18: sub.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15094E1C: mul.s       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15094E20: nop

    // 0x15094E24: mul.s       $f10, $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15094E28: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15094E2C: add.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x15094E30: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15094E34: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x15094E38: nop

    // 0x15094E3C: sh          $t0, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r8;
    // 0x15094E40: lh          $t1, -0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, -0X2);
    // 0x15094E44: lh          $t2, -0x4($v0)
    ctx->r10 = MEM_H(ctx->r2, -0X4);
    // 0x15094E48: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x15094E4C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15094E50: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15094E54: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094E58: sub.s       $f10, $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x15094E5C: sub.s       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x15094E60: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15094E64: nop

    // 0x15094E68: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15094E6C: add.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15094E70: add.s       $f8, $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x15094E74: trunc.w.s   $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15094E78: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x15094E7C: nop

    // 0x15094E80: sh          $t4, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r12;
L_15094E84:
    // 0x15094E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15094E88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15094E8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15094E90: jr          $ra
    // 0x15094E94: nop

    return;
    return;
    // 0x15094E94: nop

    // 0x15094E98: jr          $ra
    // 0x15094E9C: nop

    return;
    return;
    // 0x15094E9C: nop

;}
RECOMP_FUNC void func_15149434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15149438: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1514943C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15149440: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15149444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15149448: lbu         $v0, 0x13($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X13);
    // 0x1514944C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x15149450: bltz        $v0, L_15149460
    if (SIGNED(ctx->r2) < 0) {
        // 0x15149454: slti        $at, $v0, 0x4A
        ctx->r1 = SIGNED(ctx->r2) < 0X4A ? 1 : 0;
            goto L_15149460;
    }
    // 0x15149454: slti        $at, $v0, 0x4A
    ctx->r1 = SIGNED(ctx->r2) < 0X4A ? 1 : 0;
    // 0x15149458: bnel        $at, $zero, L_15149468
    if (ctx->r1 != 0) {
        // 0x1514945C: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15149468;
    }
    goto skip_0;
    // 0x1514945C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    skip_0:
L_15149460:
    // 0x15149460: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15149464: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
L_15149468:
    // 0x15149468: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x1514946C: lw          $v1, -0x5728($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5728);
    // 0x15149470: beql        $v1, $zero, L_15149484
    if (ctx->r3 == 0) {
        // 0x15149474: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15149484;
    }
    goto skip_1;
    // 0x15149474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x15149478: jalr        $v1
    // 0x1514947C: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x1514947C: nop

    after_0:
    // 0x15149480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15149484:
    // 0x15149484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15149488: jr          $ra
    // 0x1514948C: nop

    return;
    return;
    // 0x1514948C: nop

;}
RECOMP_FUNC void func_15146970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15146970: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15146974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15146978: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1514697C: sltiu       $at, $a0, 0x9
    ctx->r1 = ctx->r4 < 0X9 ? 1 : 0;
    // 0x15146980: beq         $at, $zero, L_15146A88
    if (ctx->r1 == 0) {
        // 0x15146984: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_15146A88;
    }
    // 0x15146984: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x15146988: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1514698C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15146990: addu        $at, $at, $t6
    gpr jr_addend_15146998 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15146994: lw          $t6, 0x56E4($at)
    ctx->r14 = ADD32(ctx->r1, 0X56E4);
    // 0x15146998: jr          $t6
    // 0x1514699C: nop

    switch (jr_addend_15146998 >> 2) {
        case 0: goto L_151469C0; break;
        case 1: goto L_151469C8; break;
        case 2: goto L_151469B8; break;
        case 3: goto L_15146A0C; break;
        case 4: goto L_15146A04; break;
        case 5: goto L_151469B0; break;
        case 6: goto L_15146A14; break;
        case 7: goto L_151469A8; break;
        case 8: goto L_151469A0; break;
        default: switch_error(__func__, 0x15146998, 0x800A56E4);
    }
    // 0x1514699C: nop

L_151469A0:
    // 0x151469A0: b           L_15146A88
    // 0x151469A4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_15146A88;
    // 0x151469A4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_151469A8:
    // 0x151469A8: b           L_15146A88
    // 0x151469AC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_15146A88;
    // 0x151469AC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_151469B0:
    // 0x151469B0: b           L_15146A88
    // 0x151469B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_15146A88;
    // 0x151469B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_151469B8:
    // 0x151469B8: b           L_15146A88
    // 0x151469BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_15146A88;
    // 0x151469BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_151469C0:
    // 0x151469C0: b           L_15146A88
    // 0x151469C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15146A88;
    // 0x151469C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151469C8:
    // 0x151469C8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151469CC: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x151469D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x151469D4: bne         $t7, $at, L_151469FC
    if (ctx->r15 != ctx->r1) {
        // 0x151469D8: nop
    
            goto L_151469FC;
    }
    // 0x151469D8: nop

    // 0x151469DC: jal         0x151420F8
    // 0x151469E0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_151420F8(rdram, ctx);
        goto after_0;
    // 0x151469E0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x151469E4: beq         $v0, $zero, L_151469F4
    if (ctx->r2 == 0) {
        // 0x151469E8: nop
    
            goto L_151469F4;
    }
    // 0x151469E8: nop

    // 0x151469EC: b           L_15146A88
    // 0x151469F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_15146A88;
    // 0x151469F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_151469F4:
    // 0x151469F4: b           L_15146A88
    // 0x151469F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_15146A88;
    // 0x151469F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_151469FC:
    // 0x151469FC: b           L_15146A88
    // 0x15146A00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15146A88;
    // 0x15146A00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15146A04:
    // 0x15146A04: b           L_15146A88
    // 0x15146A08: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_15146A88;
    // 0x15146A08: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_15146A0C:
    // 0x15146A0C: b           L_15146A88
    // 0x15146A10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_15146A88;
    // 0x15146A10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_15146A14:
    // 0x15146A14: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x15146A18: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x15146A1C: addiu       $t8, $t8, 0x56D0
    ctx->r24 = ADD32(ctx->r24, 0X56D0);
    // 0x15146A20: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x15146A24: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15146A28: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x15146A2C: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x15146A30: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x15146A34: subu        $a0, $a3, $t1
    ctx->r4 = SUB32(ctx->r7, ctx->r9);
    // 0x15146A38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x15146A3C: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x15146A40: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x15146A44: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    // 0x15146A48: lw          $t0, 0xC($t8)
    ctx->r8 = MEM_W(ctx->r24, 0XC);
    // 0x15146A4C: sw          $t0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r8;
    // 0x15146A50: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x15146A54: sw          $at, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r1;
    // 0x15146A58: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15146A5C: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x15146A60: mflo        $a0
    ctx->r4 = lo;
    // 0x15146A64: jal         0x150A2AEC
    // 0x15146A68: nop

    func_150A2AEC(rdram, ctx);
        goto after_1;
    // 0x15146A68: nop

    after_1:
    // 0x15146A6C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15146A70: bne         $v0, $at, L_15146A80
    if (ctx->r2 != ctx->r1) {
        // 0x15146A74: nop
    
            goto L_15146A80;
    }
    // 0x15146A74: nop

    // 0x15146A78: b           L_15146A88
    // 0x15146A7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15146A88;
    // 0x15146A7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15146A80:
    // 0x15146A80: b           L_15146A88
    // 0x15146A84: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_15146A88;
    // 0x15146A84: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_15146A88:
    // 0x15146A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15146A8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15146A90: jr          $ra
    // 0x15146A94: nop

    return;
    return;
    // 0x15146A94: nop

;}
RECOMP_FUNC void func_150BF0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BF0F4: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
    // 0x150BF0F8: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
    // 0x150BF0FC: lbu         $v1, 0x26($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X26);
    // 0x150BF100: beq         $a1, $zero, L_150BF148
    if (ctx->r5 == 0) {
        // 0x150BF104: nop
    
            goto L_150BF148;
    }
    // 0x150BF104: nop

    // 0x150BF108: beq         $v0, $v1, L_150BF140
    if (ctx->r2 == ctx->r3) {
        // 0x150BF10C: lui         $a2, 0x800C
        ctx->r6 = S32(0X800C << 16);
            goto L_150BF140;
    }
    // 0x150BF10C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x150BF110: addiu       $a2, $a2, -0x161C
    ctx->r6 = ADD32(ctx->r6, -0X161C);
    // 0x150BF114: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x150BF118: lbu         $t7, 0x27($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X27);
    // 0x150BF11C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150BF120: mflo        $t8
    ctx->r24 = lo;
    // 0x150BF124: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x150BF128: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150BF12C: beql        $at, $zero, L_150BF13C
    if (ctx->r1 == 0) {
        // 0x150BF130: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_150BF13C;
    }
    goto skip_0;
    // 0x150BF130: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_0:
    // 0x150BF134: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150BF138: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_150BF13C:
    // 0x150BF13C: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
L_150BF140:
    // 0x150BF140: b           L_150BF17C
    // 0x150BF144: nop

        goto L_150BF17C;
    // 0x150BF144: nop

L_150BF148:
    // 0x150BF148: beq         $v0, $zero, L_150BF17C
    if (ctx->r2 == 0) {
        // 0x150BF14C: lui         $a2, 0x800C
        ctx->r6 = S32(0X800C << 16);
            goto L_150BF17C;
    }
    // 0x150BF14C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x150BF150: addiu       $a2, $a2, -0x161C
    ctx->r6 = ADD32(ctx->r6, -0X161C);
    // 0x150BF154: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x150BF158: lbu         $t0, 0x2F($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2F);
    // 0x150BF15C: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150BF160: mflo        $t1
    ctx->r9 = lo;
    // 0x150BF164: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x150BF168: bgezl       $v0, L_150BF178
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150BF16C: sb          $v0, 0x1F($a0)
        MEM_B(0X1F, ctx->r4) = ctx->r2;
            goto L_150BF178;
    }
    goto skip_1;
    // 0x150BF16C: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
    skip_1:
    // 0x150BF170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150BF174: sb          $v0, 0x1F($a0)
    MEM_B(0X1F, ctx->r4) = ctx->r2;
L_150BF178:
    // 0x150BF178: lbu         $a1, 0x24($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X24);
L_150BF17C:
    // 0x150BF17C: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x150BF180: bne         $a1, $zero, L_150BF198
    if (ctx->r5 != 0) {
        // 0x150BF184: addiu       $a2, $a2, -0x161C
        ctx->r6 = ADD32(ctx->r6, -0X161C);
            goto L_150BF198;
    }
    // 0x150BF184: addiu       $a2, $a2, -0x161C
    ctx->r6 = ADD32(ctx->r6, -0X161C);
    // 0x150BF188: bnel        $v0, $zero, L_150BF19C
    if (ctx->r2 != 0) {
        // 0x150BF18C: lb          $v0, 0x2D($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X2D);
            goto L_150BF19C;
    }
    goto skip_2;
    // 0x150BF18C: lb          $v0, 0x2D($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2D);
    skip_2:
    // 0x150BF190: jr          $ra
    // 0x150BF194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x150BF194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150BF198:
    // 0x150BF198: lb          $v0, 0x2D($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2D);
L_150BF19C:
    // 0x150BF19C: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x150BF1A0: lh          $t3, 0x14($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X14);
    // 0x150BF1A4: lh          $t6, 0x16($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X16);
    // 0x150BF1A8: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150BF1AC: mflo        $v0
    ctx->r2 = lo;
    // 0x150BF1B0: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x150BF1B4: sh          $t4, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r12;
    // 0x150BF1B8: lb          $v0, 0x2E($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X2E);
    // 0x150BF1BC: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x150BF1C0: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
    // 0x150BF1C4: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150BF1C8: mflo        $v0
    ctx->r2 = lo;
    // 0x150BF1CC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x150BF1D0: blez        $v1, L_150BF1E0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x150BF1D4: sh          $t7, 0x16($a0)
        MEM_H(0X16, ctx->r4) = ctx->r15;
            goto L_150BF1E0;
    }
    // 0x150BF1D4: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    // 0x150BF1D8: bgtz        $v1, L_150BF1F4
    if (SIGNED(ctx->r3) > 0) {
        // 0x150BF1DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150BF1F4;
    }
    // 0x150BF1DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150BF1E0:
    // 0x150BF1E0: sh          $zero, 0x16($a0)
    MEM_H(0X16, ctx->r4) = 0;
    // 0x150BF1E4: lh          $t8, 0x16($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X16);
    // 0x150BF1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BF1EC: jr          $ra
    // 0x150BF1F0: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
    return;
    return;
    // 0x150BF1F0: sh          $t8, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r24;
L_150BF1F4:
    // 0x150BF1F4: lbu         $v1, 0x2C($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2C);
    // 0x150BF1F8: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x150BF1FC: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x150BF200: slti        $at, $v1, 0x80
    ctx->r1 = SIGNED(ctx->r3) < 0X80 ? 1 : 0;
    // 0x150BF204: bnel        $at, $zero, L_150BF214
    if (ctx->r1 != 0) {
        // 0x150BF208: sb          $v1, 0x2C($a0)
        MEM_B(0X2C, ctx->r4) = ctx->r3;
            goto L_150BF214;
    }
    goto skip_3;
    // 0x150BF208: sb          $v1, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r3;
    skip_3:
    // 0x150BF20C: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x150BF210: sb          $v1, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r3;
L_150BF214:
    // 0x150BF214: jr          $ra
    // 0x150BF218: nop

    return;
    return;
    // 0x150BF218: nop

;}
RECOMP_FUNC void func_1511C540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511C540: jr          $ra
    // 0x1511C544: nop

    return;
    return;
    // 0x1511C544: nop

;}
RECOMP_FUNC void func_100186DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100186DC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x100186E0: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x100186E4: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x100186E8: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x100186EC: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x100186F0: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x100186F4: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x100186F8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_100186FC:
    // 0x100186FC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x10018700: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x10018704: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x10018708: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x1001870C: addu        $t3, $a0, $t0
    ctx->r11 = ADD32(ctx->r4, ctx->r8);
    // 0x10018710: sw          $t2, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->r10;
    // 0x10018714: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x10018718: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1001871C: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x10018720: lw          $t7, 0x4C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4C);
    // 0x10018724: addu        $t8, $a0, $t5
    ctx->r24 = ADD32(ctx->r4, ctx->r13);
    // 0x10018728: sw          $t7, 0x58($t8)
    MEM_W(0X58, ctx->r24) = ctx->r15;
    // 0x1001872C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x10018730: addu        $t1, $a1, $t9
    ctx->r9 = ADD32(ctx->r5, ctx->r25);
    // 0x10018734: lbu         $t0, 0x8C($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X8C);
    // 0x10018738: addu        $t2, $a0, $t9
    ctx->r10 = ADD32(ctx->r4, ctx->r25);
    // 0x1001873C: sb          $t0, 0x98($t2)
    MEM_B(0X98, ctx->r10) = ctx->r8;
    // 0x10018740: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x10018744: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x10018748: lbu         $t6, 0x9C($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X9C);
    // 0x1001874C: addu        $t5, $a0, $t3
    ctx->r13 = ADD32(ctx->r4, ctx->r11);
    // 0x10018750: sb          $t6, 0xA8($t5)
    MEM_B(0XA8, ctx->r13) = ctx->r14;
    // 0x10018754: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x10018758: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1001875C: addu        $t1, $a1, $t8
    ctx->r9 = ADD32(ctx->r5, ctx->r24);
    // 0x10018760: lw          $t9, 0xAC($t1)
    ctx->r25 = MEM_W(ctx->r9, 0XAC);
    // 0x10018764: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
    // 0x10018768: sw          $t9, 0xB8($t0)
    MEM_W(0XB8, ctx->r8) = ctx->r25;
    // 0x1001876C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x10018770: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x10018774: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x10018778: bne         $at, $zero, L_100186FC
    if (ctx->r1 != 0) {
        // 0x1001877C: sw          $t4, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r12;
            goto L_100186FC;
    }
    // 0x1001877C: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
    // 0x10018780: b           L_10018788
    // 0x10018784: nop

        goto L_10018788;
    // 0x10018784: nop

L_10018788:
    // 0x10018788: jr          $ra
    // 0x1001878C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1001878C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150E4174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E4174: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150E4178: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x150E417C: lwc1        $f4, 0x4C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x150E4180: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150E4184: lwc1        $f10, 0x2C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x150E4188: lwc1        $f18, 0x54($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X54);
    // 0x150E418C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150E4190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150E4194: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150E4198: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150E419C: swc1        $f16, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f16.u32l;
    // 0x150E41A0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150E41A4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150E41A8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150E41AC: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
    // 0x150E41B0: jr          $ra
    // 0x150E41B4: nop

    return;
    return;
    // 0x150E41B4: nop

;}
RECOMP_FUNC void func_1500A0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A0FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500A100: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500A104: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500A108: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x1500A10C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1500A110: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1500A114: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1500A118: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x1500A11C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1500A120: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1500A124: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500A128: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x1500A12C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x1500A130: jal         0x15162740
    // 0x1500A134: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15162740(rdram, ctx);
        goto after_0;
    // 0x1500A134: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1500A138: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A13C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500A140: jr          $ra
    // 0x1500A144: nop

    return;
    return;
    // 0x1500A144: nop

;}
RECOMP_FUNC void func_15097910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15097910: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15097914: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15097918: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1509791C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15097920: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15097924: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x15097928: jal         0x15083E0C
    // 0x1509792C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_15083E0C(rdram, ctx);
        goto after_0;
    // 0x1509792C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_0:
    // 0x15097930: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15097934: beq         $v0, $at, L_150979AC
    if (ctx->r2 == ctx->r1) {
        // 0x15097938: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_150979AC;
    }
    // 0x15097938: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1509793C: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x15097940: jal         0x15083E90
    // 0x15097944: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_15083E90(rdram, ctx);
        goto after_1;
    // 0x15097944: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x15097948: bne         $v0, $zero, L_150979A8
    if (ctx->r2 != 0) {
        // 0x1509794C: lw          $a1, 0x2C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X2C);
            goto L_150979A8;
    }
    // 0x1509794C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x15097950: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15097954: addiu       $v1, $v1, 0x20FC
    ctx->r3 = ADD32(ctx->r3, 0X20FC);
    // 0x15097958: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1509795C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x15097960: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x15097964: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x15097968: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x1509796C: sb          $zero, 0x2($t7)
    MEM_B(0X2, ctx->r15) = 0;
    // 0x15097970: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x15097974: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15097978: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1509797C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15097980: jal         0x15082A44
    // 0x15097984: addu        $a0, $v0, $t8
    ctx->r4 = ADD32(ctx->r2, ctx->r24);
    func_15082A44(rdram, ctx);
        goto after_2;
    // 0x15097984: addu        $a0, $v0, $t8
    ctx->r4 = ADD32(ctx->r2, ctx->r24);
    after_2:
    // 0x15097988: bne         $v0, $zero, L_15097998
    if (ctx->r2 != 0) {
        // 0x1509798C: nop
    
            goto L_15097998;
    }
    // 0x1509798C: nop

    // 0x15097990: b           L_150979BC
    // 0x15097994: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_150979BC;
    // 0x15097994: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_15097998:
    // 0x15097998: jal         0x15083E0C
    // 0x1509799C: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    func_15083E0C(rdram, ctx);
        goto after_3;
    // 0x1509799C: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    after_3:
    // 0x150979A0: b           L_150979AC
    // 0x150979A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
        goto L_150979AC;
    // 0x150979A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_150979A8:
    // 0x150979A8: lbu         $a1, 0x13F($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X13F);
L_150979AC:
    // 0x150979AC: beq         $a1, $zero, L_150979B8
    if (ctx->r5 == 0) {
        // 0x150979B0: ori         $t9, $a1, 0x2000
        ctx->r25 = ctx->r5 | 0X2000;
            goto L_150979B8;
    }
    // 0x150979B0: ori         $t9, $a1, 0x2000
    ctx->r25 = ctx->r5 | 0X2000;
    // 0x150979B4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_150979B8:
    // 0x150979B8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_150979BC:
    // 0x150979BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150979C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150979C4: jr          $ra
    // 0x150979C8: nop

    return;
    return;
    // 0x150979C8: nop

;}
RECOMP_FUNC void func_1515548C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515548C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15155490: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15155494: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15155498: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1515549C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151554A0: beql        $a2, $zero, L_151554E0
    if (ctx->r6 == 0) {
        // 0x151554A4: lhu         $t6, 0x14($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X14);
            goto L_151554E0;
    }
    goto skip_0;
    // 0x151554A4: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    skip_0:
    // 0x151554A8: blezl       $a3, L_151554E0
    if (SIGNED(ctx->r7) <= 0) {
        // 0x151554AC: lhu         $t6, 0x14($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X14);
            goto L_151554E0;
    }
    goto skip_1;
    // 0x151554AC: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    skip_1:
    // 0x151554B0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151554B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151554B8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x151554BC: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x151554C0: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151554C4: jal         0x151555AC
    // 0x151554C8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    func_151555AC(rdram, ctx);
        goto after_0;
    // 0x151554C8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x151554CC: beql        $v0, $zero, L_151554E0
    if (ctx->r2 == 0) {
        // 0x151554D0: lhu         $t6, 0x14($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X14);
            goto L_151554E0;
    }
    goto skip_2;
    // 0x151554D0: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
    skip_2:
    // 0x151554D4: b           L_15155550
    // 0x151554D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15155550;
    // 0x151554D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151554DC: lhu         $t6, 0x14($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X14);
L_151554E0:
    // 0x151554E0: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x151554E4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x151554E8: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x151554EC: beq         $t7, $zero, L_151554FC
    if (ctx->r15 == 0) {
        // 0x151554F0: addiu       $a2, $a2, 0x70
        ctx->r6 = ADD32(ctx->r6, 0X70);
            goto L_151554FC;
    }
    // 0x151554F0: addiu       $a2, $a2, 0x70
    ctx->r6 = ADD32(ctx->r6, 0X70);
    // 0x151554F4: b           L_15155500
    // 0x151554F8: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
        goto L_15155500;
    // 0x151554F8: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
L_151554FC:
    // 0x151554FC: addiu       $a0, $zero, 0x5D
    ctx->r4 = ADD32(0, 0X5D);
L_15155500:
    // 0x15155500: lbu         $t8, 0x4F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4F);
    // 0x15155504: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15155508: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1515550C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15155510: jal         0x15167A68
    // 0x15155514: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15167A68(rdram, ctx);
        goto after_1;
    // 0x15155514: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x15155518: bne         $v0, $zero, L_15155528
    if (ctx->r2 != 0) {
        // 0x1515551C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15155528;
    }
    // 0x1515551C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15155520: b           L_15155550
    // 0x15155524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15155550;
    // 0x15155524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15155528:
    // 0x15155528: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x1515552C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15155530: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x15155534: jal         0x10022EC0
    // 0x15155538: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x15155538: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_2:
    // 0x1515553C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x15155540: sb          $zero, 0x68($v0)
    MEM_B(0X68, ctx->r2) = 0;
    // 0x15155544: lbu         $t1, 0x3F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3F);
    // 0x15155548: or          $t2, $zero, $t1
    ctx->r10 = 0 | ctx->r9;
    // 0x1515554C: sb          $t2, 0x68($v0)
    MEM_B(0X68, ctx->r2) = ctx->r10;
L_15155550:
    // 0x15155550: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15155554: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15155558: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1515555C: jr          $ra
    // 0x15155560: nop

    return;
    return;
    // 0x15155560: nop

;}
RECOMP_FUNC void func_150CFD5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CFD5C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x150CFD60: beql        $t6, $zero, L_150CFD7C
    if (ctx->r14 == 0) {
        // 0x150CFD64: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_150CFD7C;
    }
    goto skip_0;
    // 0x150CFD64: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x150CFD68: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
L_150CFD6C:
    // 0x150CFD6C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150CFD70: bnel        $t7, $zero, L_150CFD6C
    if (ctx->r15 != 0) {
        // 0x150CFD74: lbu         $t7, 0x1($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X1);
            goto L_150CFD6C;
    }
    goto skip_1;
    // 0x150CFD74: lbu         $t7, 0x1($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1);
    skip_1:
    // 0x150CFD78: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_150CFD7C:
    // 0x150CFD7C: jr          $ra
    // 0x150CFD80: nop

    return;
    return;
    // 0x150CFD80: nop

;}
RECOMP_FUNC void func_150CA150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CA150: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x150CA154: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150CA158: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x150CA15C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150CA160: beq         $a1, $zero, L_150CA91C
    if (ctx->r5 == 0) {
        // 0x150CA164: sb          $zero, 0x127($sp)
        MEM_B(0X127, ctx->r29) = 0;
            goto L_150CA91C;
    }
    // 0x150CA164: sb          $zero, 0x127($sp)
    MEM_B(0X127, ctx->r29) = 0;
    // 0x150CA168: addiu       $a0, $sp, 0x128
    ctx->r4 = ADD32(ctx->r29, 0X128);
    // 0x150CA16C: jal         0x1504715C
    // 0x150CA170: sw          $a1, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r5;
    func_1504715C(rdram, ctx);
        goto after_0;
    // 0x150CA170: sw          $a1, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r5;
    after_0:
    // 0x150CA174: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150CA178: lw          $t6, -0x1618($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1618);
    // 0x150CA17C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x150CA180: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x150CA184: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150CA188: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150CA18C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150CA190: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150CA194: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150CA198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150CA19C: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x150CA1A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x150CA1A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150CA1A8: jal         0x1512D748
    // 0x150CA1AC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_1512D748(rdram, ctx);
        goto after_1;
    // 0x150CA1AC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_1:
    // 0x150CA1B0: lw          $v0, 0x168($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X168);
    // 0x150CA1B4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150CA1B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CA1BC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150CA1C0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150CA1C4: addiu       $a0, $sp, 0x15C
    ctx->r4 = ADD32(ctx->r29, 0X15C);
    // 0x150CA1C8: swc1        $f4, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f4.u32l;
    // 0x150CA1CC: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150CA1D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150CA1D4: addiu       $a3, $sp, 0x128
    ctx->r7 = ADD32(ctx->r29, 0X128);
    // 0x150CA1D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CA1DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CA1E0: swc1        $f10, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f10.u32l;
    // 0x150CA1E4: lwc1        $f18, 0x1C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150CA1E8: swc1        $f18, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f18.u32l;
    // 0x150CA1EC: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150CA1F0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150CA1F4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150CA1F8: jal         0x15046C80
    // 0x150CA1FC: nop

    func_15046C80(rdram, ctx);
        goto after_2;
    // 0x150CA1FC: nop

    after_2:
    // 0x150CA200: beq         $v0, $zero, L_150CA21C
    if (ctx->r2 == 0) {
        // 0x150CA204: lui         $a1, 0x1519
        ctx->r5 = S32(0X1519 << 16);
            goto L_150CA21C;
    }
    // 0x150CA204: lui         $a1, 0x1519
    ctx->r5 = S32(0X1519 << 16);
    // 0x150CA208: lwc1        $f10, 0x128($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X128);
    // 0x150CA20C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150CA210: sb          $t9, 0x127($sp)
    MEM_B(0X127, ctx->r29) = ctx->r25;
    // 0x150CA214: b           L_150CA228
    // 0x150CA218: swc1        $f10, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f10.u32l;
        goto L_150CA228;
    // 0x150CA218: swc1        $f10, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f10.u32l;
L_150CA21C:
    // 0x150CA21C: lw          $t2, 0x168($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X168);
    // 0x150CA220: lwc1        $f18, 0x180($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X180);
    // 0x150CA224: swc1        $f18, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f18.u32l;
L_150CA228:
    // 0x150CA228: lui         $a2, 0x1519
    ctx->r6 = S32(0X1519 << 16);
    // 0x150CA22C: addiu       $a0, $a1, 0x42B0
    ctx->r4 = ADD32(ctx->r5, 0X42B0);
    // 0x150CA230: addiu       $v0, $a2, 0x3CA0
    ctx->r2 = ADD32(ctx->r6, 0X3CA0);
    // 0x150CA234: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x150CA238: beq         $at, $zero, L_150CA258
    if (ctx->r1 == 0) {
        // 0x150CA23C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_150CA258;
    }
    // 0x150CA23C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150CA240:
    // 0x150CA240: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x150CA244: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150CA248: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x150CA24C: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x150CA250: bne         $at, $zero, L_150CA240
    if (ctx->r1 != 0) {
        // 0x150CA254: xor         $v1, $v1, $t4
        ctx->r3 = ctx->r3 ^ ctx->r12;
            goto L_150CA240;
    }
    // 0x150CA254: xor         $v1, $v1, $t4
    ctx->r3 = ctx->r3 ^ ctx->r12;
L_150CA258:
    // 0x150CA258: lui         $at, 0x7984
    ctx->r1 = S32(0X7984 << 16);
    // 0x150CA25C: ori         $at, $at, 0x4C6B
    ctx->r1 = ctx->r1 | 0X4C6B;
    // 0x150CA260: beq         $v1, $at, L_150CA270
    if (ctx->r3 == ctx->r1) {
        // 0x150CA264: addiu       $a1, $sp, 0x158
        ctx->r5 = ADD32(ctx->r29, 0X158);
            goto L_150CA270;
    }
    // 0x150CA264: addiu       $a1, $sp, 0x158
    ctx->r5 = ADD32(ctx->r29, 0X158);
    // 0x150CA268: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150CA26C: sh          $zero, 0x3E7C($at)
    MEM_H(0X3E7C, ctx->r1) = 0;
L_150CA270:
    // 0x150CA270: lwc1        $f12, 0x164($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150CA274: addiu       $a2, $sp, 0x154
    ctx->r6 = ADD32(ctx->r29, 0X154);
    // 0x150CA278: jal         0x150CCD90
    // 0x150CA27C: addiu       $a3, $sp, 0x150
    ctx->r7 = ADD32(ctx->r29, 0X150);
    func_150CCD90(rdram, ctx);
        goto after_3;
    // 0x150CA27C: addiu       $a3, $sp, 0x150
    ctx->r7 = ADD32(ctx->r29, 0X150);
    after_3:
    // 0x150CA280: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x150CA284: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150CA288: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x150CA28C: lwc1        $f4, 0x158($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X158);
    // 0x150CA290: lui         $a2, 0x459C
    ctx->r6 = S32(0X459C << 16);
    // 0x150CA294: lui         $a3, 0x3951
    ctx->r7 = S32(0X3951 << 16);
    // 0x150CA298: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150CA29C: ori         $a3, $a3, 0xB717
    ctx->r7 = ctx->r7 | 0XB717;
    // 0x150CA2A0: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x150CA2A4: addiu       $a0, $sp, 0x15C
    ctx->r4 = ADD32(ctx->r29, 0X15C);
    // 0x150CA2A8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x150CA2AC: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x150CA2B0: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x150CA2B4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x150CA2B8: beq         $t6, $zero, L_150CA308
    if (ctx->r14 == 0) {
        // 0x150CA2BC: addiu       $t4, $zero, 0xF
        ctx->r12 = ADD32(0, 0XF);
            goto L_150CA308;
    }
    // 0x150CA2BC: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x150CA2C0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150CA2C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CA2C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150CA2CC: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150CA2D0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x150CA2D4: nop

    // 0x150CA2D8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x150CA2DC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x150CA2E0: nop

    // 0x150CA2E4: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x150CA2E8: bne         $t6, $zero, L_150CA300
    if (ctx->r14 != 0) {
        // 0x150CA2EC: nop
    
            goto L_150CA300;
    }
    // 0x150CA2EC: nop

    // 0x150CA2F0: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x150CA2F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150CA2F8: b           L_150CA318
    // 0x150CA2FC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_150CA318;
    // 0x150CA2FC: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_150CA300:
    // 0x150CA300: b           L_150CA318
    // 0x150CA304: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_150CA318;
    // 0x150CA304: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
L_150CA308:
    // 0x150CA308: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x150CA30C: nop

    // 0x150CA310: bltz        $t6, L_150CA300
    if (SIGNED(ctx->r14) < 0) {
        // 0x150CA314: nop
    
            goto L_150CA300;
    }
    // 0x150CA314: nop

L_150CA318:
    // 0x150CA318: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x150CA31C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150CA320: lwc1        $f8, 0x154($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X154);
    // 0x150CA324: sb          $t6, 0x14F($sp)
    MEM_B(0X14F, ctx->r29) = ctx->r14;
    // 0x150CA328: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150CA32C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x150CA330: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150CA334: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150CA338: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150CA33C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x150CA340: nop

    // 0x150CA344: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x150CA348: beql        $t8, $zero, L_150CA398
    if (ctx->r24 == 0) {
        // 0x150CA34C: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_150CA398;
    }
    goto skip_0;
    // 0x150CA34C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_0:
    // 0x150CA350: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150CA354: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150CA358: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150CA35C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x150CA360: nop

    // 0x150CA364: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150CA368: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x150CA36C: nop

    // 0x150CA370: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x150CA374: bne         $t8, $zero, L_150CA38C
    if (ctx->r24 != 0) {
        // 0x150CA378: nop
    
            goto L_150CA38C;
    }
    // 0x150CA378: nop

    // 0x150CA37C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x150CA380: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150CA384: b           L_150CA3A4
    // 0x150CA388: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_150CA3A4;
    // 0x150CA388: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_150CA38C:
    // 0x150CA38C: b           L_150CA3A4
    // 0x150CA390: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_150CA3A4;
    // 0x150CA390: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150CA394: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_150CA398:
    // 0x150CA398: nop

    // 0x150CA39C: bltz        $t8, L_150CA38C
    if (SIGNED(ctx->r24) < 0) {
        // 0x150CA3A0: nop
    
            goto L_150CA38C;
    }
    // 0x150CA3A0: nop

L_150CA3A4:
    // 0x150CA3A4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150CA3A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150CA3AC: lwc1        $f18, 0x150($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X150);
    // 0x150CA3B0: sb          $t8, 0x14E($sp)
    MEM_B(0X14E, ctx->r29) = ctx->r24;
    // 0x150CA3B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x150CA3B8: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x150CA3BC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150CA3C0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150CA3C4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x150CA3C8: nop

    // 0x150CA3CC: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x150CA3D0: beql        $t2, $zero, L_150CA420
    if (ctx->r10 == 0) {
        // 0x150CA3D4: mfc1        $t2, $f4
        ctx->r10 = (int32_t)ctx->f4.u32l;
            goto L_150CA420;
    }
    goto skip_1;
    // 0x150CA3D4: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    skip_1:
    // 0x150CA3D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CA3DC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150CA3E0: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150CA3E4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x150CA3E8: nop

    // 0x150CA3EC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150CA3F0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x150CA3F4: nop

    // 0x150CA3F8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x150CA3FC: bne         $t2, $zero, L_150CA414
    if (ctx->r10 != 0) {
        // 0x150CA400: nop
    
            goto L_150CA414;
    }
    // 0x150CA400: nop

    // 0x150CA404: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x150CA408: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150CA40C: b           L_150CA42C
    // 0x150CA410: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_150CA42C;
    // 0x150CA410: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_150CA414:
    // 0x150CA414: b           L_150CA42C
    // 0x150CA418: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_150CA42C;
    // 0x150CA418: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150CA41C: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
L_150CA420:
    // 0x150CA420: nop

    // 0x150CA424: bltz        $t2, L_150CA414
    if (SIGNED(ctx->r10) < 0) {
        // 0x150CA428: nop
    
            goto L_150CA414;
    }
    // 0x150CA428: nop

L_150CA42C:
    // 0x150CA42C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x150CA430: sb          $t2, 0x14D($sp)
    MEM_B(0X14D, ctx->r29) = ctx->r10;
    // 0x150CA434: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x150CA438: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150CA43C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150CA440: jal         0x151D5404
    // 0x150CA444: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151D5404(rdram, ctx);
        goto after_4;
    // 0x150CA444: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_4:
    // 0x150CA448: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CA44C: lwc1        $f0, 0x5A0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5A0);
    // 0x150CA450: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    // 0x150CA454: addiu       $t6, $sp, 0x15C
    ctx->r14 = ADD32(ctx->r29, 0X15C);
    // 0x150CA458: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150CA45C: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x150CA460: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x150CA464: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x150CA468: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x150CA46C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150CA470: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150CA474: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x150CA478: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x150CA47C: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x150CA480: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x150CA484: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x150CA488: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CA48C: lwc1        $f6, 0x5A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5A4);
    // 0x150CA490: div.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150CA494: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CA498: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    // 0x150CA49C: lwc1        $f10, 0x5A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5A8);
    // 0x150CA4A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150CA4A4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150CA4A8: addiu       $t4, $zero, 0xD
    ctx->r12 = ADD32(0, 0XD);
    // 0x150CA4AC: addiu       $t5, $zero, 0x65
    ctx->r13 = ADD32(0, 0X65);
    // 0x150CA4B0: addiu       $t8, $zero, 0x58
    ctx->r24 = ADD32(0, 0X58);
    // 0x150CA4B4: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x150CA4B8: sb          $t2, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r10;
    // 0x150CA4BC: sb          $t3, 0xF1($sp)
    MEM_B(0XF1, ctx->r29) = ctx->r11;
    // 0x150CA4C0: sw          $t4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r12;
    // 0x150CA4C4: sh          $t5, 0xFC($sp)
    MEM_H(0XFC, ctx->r29) = ctx->r13;
    // 0x150CA4C8: sh          $t8, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r24;
    // 0x150CA4CC: sh          $t6, 0x104($sp)
    MEM_H(0X104, ctx->r29) = ctx->r14;
    // 0x150CA4D0: sb          $t2, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r10;
    // 0x150CA4D4: sb          $zero, 0x111($sp)
    MEM_B(0X111, ctx->r29) = 0;
    // 0x150CA4D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150CA4DC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150CA4E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150CA4E4: swc1        $f10, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f10.u32l;
    // 0x150CA4E8: div.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150CA4EC: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x150CA4F0: jal         0x150C88D0
    // 0x150CA4F4: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    func_150C88D0(rdram, ctx);
        goto after_5;
    // 0x150CA4F4: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x150CA4F8: lbu         $t3, 0x127($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X127);
    // 0x150CA4FC: lw          $t4, 0x168($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X168);
    // 0x150CA500: beql        $t3, $zero, L_150CA920
    if (ctx->r11 == 0) {
        // 0x150CA504: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_150CA920;
    }
    goto skip_2;
    // 0x150CA504: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x150CA508: lhu         $t5, 0x7A($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X7A);
    // 0x150CA50C: addiu       $t7, $zero, -0x40
    ctx->r15 = ADD32(0, -0X40);
    // 0x150CA510: sra         $t8, $t5, 8
    ctx->r24 = S32(SIGNED(ctx->r13) >> 8);
    // 0x150CA514: subu        $a0, $t7, $t8
    ctx->r4 = SUB32(ctx->r15, ctx->r24);
    // 0x150CA518: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150CA51C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x150CA520: jal         0x151423D8
    // 0x150CA524: sb          $t6, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r14;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x150CA524: sb          $t6, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r14;
    after_6:
    // 0x150CA528: lbu         $a0, 0xA7($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XA7);
    // 0x150CA52C: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x150CA530: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150CA534: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x150CA538: jal         0x151423D8
    // 0x150CA53C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x150CA53C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_7:
    // 0x150CA540: jal         0x150ADA68
    // 0x150CA544: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150CA544: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x150CA548: lui         $at, 0x42C0
    ctx->r1 = S32(0X42C0 << 16);
    // 0x150CA54C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150CA550: lui         $at, 0x43B0
    ctx->r1 = S32(0X43B0 << 16);
    // 0x150CA554: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CA558: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150CA55C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150CA560: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150CA564: addiu       $t2, $zero, 0x701
    ctx->r10 = ADD32(0, 0X701);
    // 0x150CA568: sw          $t2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r10;
    // 0x150CA56C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150CA570: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150CA574: jal         0x150ADA20
    // 0x150CA578: swc1        $f20, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f20.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150CA578: swc1        $f20, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f20.u32l;
    after_9:
    // 0x150CA57C: addiu       $t3, $zero, 0x408
    ctx->r11 = ADD32(0, 0X408);
    // 0x150CA580: sh          $t3, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r11;
    // 0x150CA584: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x150CA588: jal         0x150ADA20
    // 0x150CA58C: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150CA58C: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    after_10:
    // 0x150CA590: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x150CA594: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CA598: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150CA59C: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x150CA5A0: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150CA5A4: lwc1        $f6, 0x15C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150CA5A8: mul.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150CA5AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150CA5B0: lwc1        $f18, 0x160($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150CA5B4: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CA5B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CA5BC: lbu         $v1, 0x14F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X14F);
    // 0x150CA5C0: lbu         $t0, 0x14E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X14E);
    // 0x150CA5C4: lbu         $t1, 0x14D($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X14D);
    // 0x150CA5C8: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x150CA5CC: mfhi        $t4
    ctx->r12 = hi;
    // 0x150CA5D0: addiu       $t5, $t4, 0xB4
    ctx->r13 = ADD32(ctx->r12, 0XB4);
    // 0x150CA5D4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150CA5D8: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150CA5DC: lui         $t3, 0x26
    ctx->r11 = S32(0X26 << 16);
    // 0x150CA5E0: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x150CA5E4: lwc1        $f8, 0x164($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150CA5E8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150CA5EC: sb          $t2, 0xC9($sp)
    MEM_B(0XC9, ctx->r29) = ctx->r10;
    // 0x150CA5F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150CA5F4: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x150CA5F8: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
    // 0x150CA5FC: lbu         $t2, 0xA7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XA7);
    // 0x150CA600: sb          $t5, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r13;
    // 0x150CA604: add.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x150CA608: sb          $t9, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r25;
    // 0x150CA60C: sw          $t3, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r11;
    // 0x150CA610: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150CA614: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150CA618: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150CA61C: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150CA620: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150CA624: addiu       $t9, $zero, 0x51
    ctx->r25 = ADD32(0, 0X51);
    // 0x150CA628: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150CA62C: sb          $t7, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r15;
    // 0x150CA630: sb          $t8, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = ctx->r24;
    // 0x150CA634: sb          $t6, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = ctx->r14;
    // 0x150CA638: sb          $zero, 0xCA($sp)
    MEM_B(0XCA, ctx->r29) = 0;
    // 0x150CA63C: sb          $t4, 0xCB($sp)
    MEM_B(0XCB, ctx->r29) = ctx->r12;
    // 0x150CA640: sh          $t5, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r13;
    // 0x150CA644: sh          $zero, 0x74($sp)
    MEM_H(0X74, ctx->r29) = 0;
    // 0x150CA648: sh          $t7, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r15;
    // 0x150CA64C: sh          $zero, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = 0;
    // 0x150CA650: sh          $t8, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r24;
    // 0x150CA654: sh          $zero, 0x88($sp)
    MEM_H(0X88, ctx->r29) = 0;
    // 0x150CA658: sh          $t6, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r14;
    // 0x150CA65C: sh          $zero, 0x92($sp)
    MEM_H(0X92, ctx->r29) = 0;
    // 0x150CA660: sb          $t9, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r25;
    // 0x150CA664: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x150CA668: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x150CA66C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150CA670: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    // 0x150CA674: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x150CA678: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x150CA67C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x150CA680: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x150CA684: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CA688: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x150CA68C: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x150CA690: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150CA694: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150CA698: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150CA69C: sh          $v1, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r3;
    // 0x150CA6A0: sh          $v1, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r3;
    // 0x150CA6A4: sh          $v1, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r3;
    // 0x150CA6A8: sh          $v1, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r3;
    // 0x150CA6AC: sh          $t0, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r8;
    // 0x150CA6B0: sh          $t0, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r8;
    // 0x150CA6B4: sh          $t0, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r8;
    // 0x150CA6B8: sh          $t0, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r8;
    // 0x150CA6BC: sh          $t1, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r9;
    // 0x150CA6C0: sh          $t1, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r9;
    // 0x150CA6C4: sh          $t1, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r9;
    // 0x150CA6C8: sh          $t1, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r9;
    // 0x150CA6CC: jal         0x1513C5B0
    // 0x150CA6D0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    func_1513C5B0(rdram, ctx);
        goto after_11;
    // 0x150CA6D0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_11:
    // 0x150CA6D4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150CA6D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CA6DC: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150CA6E0: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150CA6E4: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150CA6E8: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150CA6EC: lwc1        $f10, 0x15C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150CA6F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150CA6F4: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150CA6F8: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150CA6FC: add.s       $f18, $f2, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x150CA700: lbu         $t5, 0xA7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XA7);
    // 0x150CA704: mul.s       $f14, $f0, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CA708: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CA70C: addiu       $t4, $zero, 0x52
    ctx->r12 = ADD32(0, 0X52);
    // 0x150CA710: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150CA714: sb          $t4, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r12;
    // 0x150CA718: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CA71C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150CA720: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x150CA724: sub.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x150CA728: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x150CA72C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150CA730: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x150CA734: mul.s       $f16, $f0, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150CA738: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150CA73C: lwc1        $f4, 0x164($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150CA740: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x150CA744: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x150CA748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CA74C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x150CA750: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x150CA754: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x150CA758: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x150CA75C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150CA760: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x150CA764: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150CA768: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150CA76C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150CA770: jal         0x1513C5B0
    // 0x150CA774: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_1513C5B0(rdram, ctx);
        goto after_12;
    // 0x150CA774: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x150CA778: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150CA77C: lwc1        $f10, 0x15C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150CA780: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150CA784: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x150CA788: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x150CA78C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150CA790: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CA794: lwc1        $f6, 0x160($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150CA798: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x150CA79C: lwc1        $f18, 0x164($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150CA7A0: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150CA7A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CA7A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150CA7AC: lbu         $t6, 0xA7($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XA7);
    // 0x150CA7B0: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x150CA7B4: addiu       $t8, $zero, 0x53
    ctx->r24 = ADD32(0, 0X53);
    // 0x150CA7B8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150CA7BC: sb          $t8, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r24;
    // 0x150CA7C0: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x150CA7C4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x150CA7C8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x150CA7CC: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x150CA7D0: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x150CA7D4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x150CA7D8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x150CA7DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CA7E0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x150CA7E4: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x150CA7E8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150CA7EC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150CA7F0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150CA7F4: jal         0x1513C5B0
    // 0x150CA7F8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    func_1513C5B0(rdram, ctx);
        goto after_13;
    // 0x150CA7F8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_13:
    // 0x150CA7FC: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150CA800: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150CA804: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150CA808: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150CA80C: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x150CA810: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CA814: lwc1        $f4, 0x160($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150CA818: lbu         $t3, 0xA7($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XA7);
    // 0x150CA81C: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x150CA820: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x150CA824: addiu       $t2, $zero, 0x54
    ctx->r10 = ADD32(0, 0X54);
    // 0x150CA828: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150CA82C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x150CA830: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150CA834: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x150CA838: sb          $t2, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r10;
    // 0x150CA83C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x150CA840: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x150CA844: add.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x150CA848: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x150CA84C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x150CA850: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x150CA854: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x150CA858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CA85C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x150CA860: swc1        $f20, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f20.u32l;
    // 0x150CA864: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150CA868: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150CA86C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150CA870: jal         0x1513C5B0
    // 0x150CA874: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_1513C5B0(rdram, ctx);
        goto after_14;
    // 0x150CA874: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_14:
    // 0x150CA878: jal         0x150CA930
    // 0x150CA87C: addiu       $a0, $sp, 0x15C
    ctx->r4 = ADD32(ctx->r29, 0X15C);
    func_150CA930(rdram, ctx);
        goto after_15;
    // 0x150CA87C: addiu       $a0, $sp, 0x15C
    ctx->r4 = ADD32(ctx->r29, 0X15C);
    after_15:
    // 0x150CA880: jal         0x150ADA20
    // 0x150CA884: nop

    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x150CA884: nop

    after_16:
    // 0x150CA888: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150CA88C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CA890: lbu         $t8, 0x14F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X14F);
    // 0x150CA894: lbu         $t6, 0x14E($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X14E);
    // 0x150CA898: lbu         $t9, 0x14D($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X14D);
    // 0x150CA89C: mfhi        $t5
    ctx->r13 = hi;
    // 0x150CA8A0: addiu       $t7, $t5, 0xA
    ctx->r15 = ADD32(ctx->r13, 0XA);
    // 0x150CA8A4: sh          $t7, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r15;
    // 0x150CA8A8: sb          $t8, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r24;
    // 0x150CA8AC: sb          $t6, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r14;
    // 0x150CA8B0: jal         0x150ADA68
    // 0x150CA8B4: sb          $t9, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r25;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x150CA8B4: sb          $t9, 0x66($sp)
    MEM_B(0X66, ctx->r29) = ctx->r25;
    after_17:
    // 0x150CA8B8: lui         $at, 0x42A2
    ctx->r1 = S32(0X42A2 << 16);
    // 0x150CA8BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150CA8C0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150CA8C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150CA8C8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150CA8CC: lh          $t3, 0x6A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X6A);
    // 0x150CA8D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150CA8D4: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150CA8D8: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x150CA8DC: addiu       $t5, $sp, 0x64
    ctx->r13 = ADD32(ctx->r29, 0X64);
    // 0x150CA8E0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150CA8E4: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150CA8E8: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x150CA8EC: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x150CA8F0: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x150CA8F4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150CA8F8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x150CA8FC: lwc1        $f12, 0x15C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x150CA900: lwc1        $f14, 0x160($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X160);
    // 0x150CA904: lw          $a2, 0x164($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X164);
    // 0x150CA908: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150CA90C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150CA910: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150CA914: jal         0x1514C678
    // 0x150CA918: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_1514C678(rdram, ctx);
        goto after_18;
    // 0x150CA918: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_18:
L_150CA91C:
    // 0x150CA91C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_150CA920:
    // 0x150CA920: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x150CA924: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    // 0x150CA928: jr          $ra
    // 0x150CA92C: nop

    return;
    return;
    // 0x150CA92C: nop

;}
RECOMP_FUNC void func_15149BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149BF4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15149BF8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15149BFC: nop

    // 0x15149C00: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x15149C04: lwc1        $f2, 0x150($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X150);
    // 0x15149C08: lwc1        $f12, 0x30($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15149C0C: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x15149C10: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x15149C14: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x15149C18: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x15149C1C: lwc1        $f16, 0x2C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x15149C20: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x15149C24: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x15149C28: bc1t        L_15149C48
    if (c1cs) {
        // 0x15149C2C: swc1        $f10, 0x30($a0)
        MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
            goto L_15149C48;
    }
    // 0x15149C2C: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x15149C30: lwc1        $f18, 0x30($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15149C34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15149C38: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x15149C3C: nop

    // 0x15149C40: bc1f        L_15149C50
    if (!c1cs) {
        // 0x15149C44: nop
    
            goto L_15149C50;
    }
    // 0x15149C44: nop

L_15149C48:
    // 0x15149C48: jr          $ra
    // 0x15149C4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15149C4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15149C50:
    // 0x15149C50: jr          $ra
    // 0x15149C54: nop

    return;
    return;
    // 0x15149C54: nop

;}
RECOMP_FUNC void func_150F337C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F337C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F3380: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x150F3384: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x150F3388: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x150F338C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F3390: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150F3394: addiu       $a1, $a0, 0x12C
    ctx->r5 = ADD32(ctx->r4, 0X12C);
    // 0x150F3398: jal         0x15140410
    // 0x150F339C: addiu       $a2, $a0, 0x138
    ctx->r6 = ADD32(ctx->r4, 0X138);
    func_15140410(rdram, ctx);
        goto after_0;
    // 0x150F339C: addiu       $a2, $a0, 0x138
    ctx->r6 = ADD32(ctx->r4, 0X138);
    after_0:
    // 0x150F33A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F33A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F33A8: jr          $ra
    // 0x150F33AC: nop

    return;
    return;
    // 0x150F33AC: nop

;}
RECOMP_FUNC void func_150E5810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E5810: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x150E5814: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150E5818: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150E581C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150E5820: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x150E5824: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x150E5828: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x150E582C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E5830: lwc1        $f6, 0x1160($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1160);
    // 0x150E5834: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150E5838: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150E583C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E5840: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150E5844: lwc1        $f2, 0x48($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X48);
    // 0x150E5848: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150E584C: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x150E5850: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150E5854: bc1f        L_150E5880
    if (!c1cs) {
        // 0x150E5858: swc1        $f16, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
            goto L_150E5880;
    }
    // 0x150E5858: swc1        $f16, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f16.u32l;
    // 0x150E585C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150E5860: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x150E5864: addiu       $at, $zero, -0x70
    ctx->r1 = ADD32(0, -0X70);
    // 0x150E5868: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
    // 0x150E586C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x150E5870: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
    // 0x150E5874: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x150E5878: b           L_150E5AC0
    // 0x150E587C: swc1        $f0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f0.u32l;
        goto L_150E5AC0;
    // 0x150E587C: swc1        $f0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f0.u32l;
L_150E5880:
    // 0x150E5880: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x150E5884: beq         $a1, $zero, L_150E5A64
    if (ctx->r5 == 0) {
        // 0x150E5888: addiu       $v0, $sp, 0x74
        ctx->r2 = ADD32(ctx->r29, 0X74);
            goto L_150E5A64;
    }
    // 0x150E5888: addiu       $v0, $sp, 0x74
    ctx->r2 = ADD32(ctx->r29, 0X74);
    // 0x150E588C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x150E5890: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x150E5894: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x150E5898: beq         $v0, $a0, L_150E58E4
    if (ctx->r2 == ctx->r4) {
        // 0x150E589C: lh          $t8, 0x0($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X0);
            goto L_150E58E4;
    }
    // 0x150E589C: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
L_150E58A0:
    // 0x150E58A0: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x150E58A4: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x150E58A8: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x150E58AC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E58B0: swc1        $f18, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->f18.u32l;
    // 0x150E58B4: lh          $t9, -0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, -0X4);
    // 0x150E58B8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x150E58BC: nop

    // 0x150E58C0: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E58C4: swc1        $f18, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = ctx->f18.u32l;
    // 0x150E58C8: lh          $t0, -0x2($v1)
    ctx->r8 = MEM_H(ctx->r3, -0X2);
    // 0x150E58CC: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x150E58D0: nop

    // 0x150E58D4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E58D8: swc1        $f18, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f18.u32l;
    // 0x150E58DC: bne         $v0, $a0, L_150E58A0
    if (ctx->r2 != ctx->r4) {
        // 0x150E58E0: lh          $t8, 0x0($v1)
        ctx->r24 = MEM_H(ctx->r3, 0X0);
            goto L_150E58A0;
    }
    // 0x150E58E0: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
L_150E58E4:
    // 0x150E58E4: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x150E58E8: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x150E58EC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E58F0: swc1        $f18, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f18.u32l;
    // 0x150E58F4: lh          $t9, -0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, -0X4);
    // 0x150E58F8: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x150E58FC: nop

    // 0x150E5900: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E5904: swc1        $f18, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f18.u32l;
    // 0x150E5908: lh          $t0, -0x2($v1)
    ctx->r8 = MEM_H(ctx->r3, -0X2);
    // 0x150E590C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x150E5910: nop

    // 0x150E5914: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E5918: swc1        $f18, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f18.u32l;
    // 0x150E591C: addiu       $t1, $sp, 0x74
    ctx->r9 = ADD32(ctx->r29, 0X74);
    // 0x150E5920: addiu       $t3, $t1, 0x24
    ctx->r11 = ADD32(ctx->r9, 0X24);
    // 0x150E5924: or          $t4, $sp, $zero
    ctx->r12 = ctx->r29 | 0;
L_150E5928:
    // 0x150E5928: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150E592C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x150E5930: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x150E5934: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x150E5938: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x150E593C: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x150E5940: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x150E5944: bne         $t1, $t3, L_150E5928
    if (ctx->r9 != ctx->r11) {
        // 0x150E5948: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_150E5928;
    }
    // 0x150E5948: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x150E594C: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x150E5950: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x150E5954: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x150E5958: jal         0x15049350
    // 0x150E595C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    func_15049350(rdram, ctx);
        goto after_0;
    // 0x150E595C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    after_0:
    // 0x150E5960: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150E5964: lwc1        $f4, -0x3DF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3DF0);
    // 0x150E5968: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150E596C: lwc1        $f8, -0x3DEC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3DEC);
    // 0x150E5970: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150E5974: lwc1        $f16, -0x3DE8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3DE8);
    // 0x150E5978: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x150E597C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x150E5980: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x150E5984: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x150E5988: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x150E598C: swc1        $f18, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f18.u32l;
    // 0x150E5990: jal         0x150AD930
    // 0x150E5994: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_150AD930(rdram, ctx);
        goto after_1;
    // 0x150E5994: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x150E5998: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E599C: lwc1        $f4, 0x1164($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1164);
    // 0x150E59A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E59A4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x150E59A8: nop

    // 0x150E59AC: bc1f        L_150E5A5C
    if (!c1cs) {
        // 0x150E59B0: nop
    
            goto L_150E5A5C;
    }
    // 0x150E59B0: nop

    // 0x150E59B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E59B8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x150E59BC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x150E59C0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150E59C4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x150E59C8: jal         0x15049148
    // 0x150E59CC: nop

    func_15049148(rdram, ctx);
        goto after_2;
    // 0x150E59CC: nop

    after_2:
    // 0x150E59D0: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150E59D4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x150E59D8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x150E59DC: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x150E59E0: lwc1        $f16, 0x48($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X48);
    // 0x150E59E4: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    // 0x150E59E8: lwc1        $f18, 0x4C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x150E59EC: jal         0x150AD900
    // 0x150E59F0: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    func_150AD900(rdram, ctx);
        goto after_3;
    // 0x150E59F0: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x150E59F4: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x150E59F8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x150E59FC: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x150E5A00: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150E5A04: jal         0x15049148
    // 0x150E5A08: nop

    func_15049148(rdram, ctx);
        goto after_4;
    // 0x150E5A08: nop

    after_4:
    // 0x150E5A0C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x150E5A10: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x150E5A14: jal         0x15048F58
    // 0x150E5A18: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_15048F58(rdram, ctx);
        goto after_5;
    // 0x150E5A18: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_5:
    // 0x150E5A1C: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150E5A20: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150E5A24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E5A28: lwc1        $f2, 0x1168($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X1168);
    // 0x150E5A2C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150E5A30: nop

    // 0x150E5A34: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150E5A38: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
    // 0x150E5A3C: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150E5A40: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150E5A44: swc1        $f18, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f18.u32l;
    // 0x150E5A48: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x150E5A4C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150E5A50: nop

    // 0x150E5A54: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150E5A58: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
L_150E5A5C:
    // 0x150E5A5C: b           L_150E5A94
    // 0x150E5A60: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
        goto L_150E5A94;
    // 0x150E5A60: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
L_150E5A64:
    // 0x150E5A64: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150E5A68: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150E5A6C: neg.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = -ctx->f2.fl;
    // 0x150E5A70: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x150E5A74: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150E5A78: nop

    // 0x150E5A7C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150E5A80: nop

    // 0x150E5A84: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150E5A88: swc1        $f16, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f16.u32l;
    // 0x150E5A8C: swc1        $f4, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f4.u32l;
    // 0x150E5A90: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
L_150E5A94:
    // 0x150E5A94: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x150E5A98: lwc1        $f18, 0x54($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X54);
    // 0x150E5A9C: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x150E5AA0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150E5AA4: nop

    // 0x150E5AA8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150E5AAC: nop

    // 0x150E5AB0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150E5AB4: swc1        $f16, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f16.u32l;
    // 0x150E5AB8: swc1        $f4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f4.u32l;
    // 0x150E5ABC: swc1        $f8, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f8.u32l;
L_150E5AC0:
    // 0x150E5AC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150E5AC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150E5AC8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150E5ACC: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x150E5AD0: jr          $ra
    // 0x150E5AD4: nop

    return;
    return;
    // 0x150E5AD4: nop

;}
RECOMP_FUNC void func_1519E3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E3BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1519E3C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1519E3C4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1519E3C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1519E3CC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1519E3D0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1519E3D4: jal         0x1519E688
    // 0x1519E3D8: nop

    func_1519E688(rdram, ctx);
        goto after_0;
    // 0x1519E3D8: nop

    after_0:
    // 0x1519E3DC: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x1519E3E0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1519E3E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1519E3E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1519E3EC: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x1519E3F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519E3F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1519E3F8: jal         0x1519D030
    // 0x1519E3FC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_1519D030(rdram, ctx);
        goto after_1;
    // 0x1519E3FC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
    // 0x1519E400: lbu         $t8, 0x33($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X33);
    // 0x1519E404: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1519E408: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1519E40C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1519E410: addiu       $a2, $zero, 0x12C
    ctx->r6 = ADD32(0, 0X12C);
    // 0x1519E414: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1519E418: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1519E41C: jal         0x1519D030
    // 0x1519E420: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_1519D030(rdram, ctx);
        goto after_2;
    // 0x1519E420: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_2:
    // 0x1519E424: lbu         $t1, 0x33($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X33);
    // 0x1519E428: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1519E42C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x1519E430: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1519E434: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x1519E438: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1519E43C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1519E440: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1519E444: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1519E448: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1519E44C: jal         0x151491F4
    // 0x1519E450: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_151491F4(rdram, ctx);
        goto after_3;
    // 0x1519E450: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_3:
    // 0x1519E454: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1519E458: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1519E45C: jr          $ra
    // 0x1519E460: nop

    return;
    return;
    // 0x1519E460: nop

;}
RECOMP_FUNC void func_150C5C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C5C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5C7C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x150C5C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150C5C84: jal         0x1514D3B0
    // 0x150C5C88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1514D3B0(rdram, ctx);
        goto after_0;
    // 0x150C5C88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150C5C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C5C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C5C94: jr          $ra
    // 0x150C5C98: nop

    return;
    return;
    // 0x150C5C98: nop

;}
RECOMP_FUNC void func_1518AB60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518AB60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1518AB64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1518AB68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1518AB6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1518AB70: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1518AB74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1518AB78: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1518AB7C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1518AB80: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x1518AB84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1518AB88: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x1518AB8C: jal         0x15167A68
    // 0x1518AB90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1518AB90: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1518AB94: bne         $v0, $zero, L_1518ABA4
    if (ctx->r2 != 0) {
        // 0x1518AB98: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1518ABA4;
    }
    // 0x1518AB98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1518AB9C: b           L_1518ABC0
    // 0x1518ABA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518ABC0;
    // 0x1518ABA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518ABA4:
    // 0x1518ABA4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x1518ABA8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1518ABAC: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x1518ABB0: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x1518ABB4: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x1518ABB8: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x1518ABBC: sb          $t9, 0x1C($v1)
    MEM_B(0X1C, ctx->r3) = ctx->r25;
L_1518ABC0:
    // 0x1518ABC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1518ABC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1518ABC8: jr          $ra
    // 0x1518ABCC: nop

    return;
    return;
    // 0x1518ABCC: nop

;}
RECOMP_FUNC void func_150DD640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DD640: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x150DD644: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x150DD648: sll         $s4, $a2, 16
    ctx->r20 = S32(ctx->r6 << 16);
    // 0x150DD64C: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x150DD650: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x150DD654: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x150DD658: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x150DD65C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x150DD660: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x150DD664: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x150DD668: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x150DD66C: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x150DD670: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x150DD674: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x150DD678: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x150DD67C: sw          $a2, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r6;
    // 0x150DD680: lb          $t7, 0x2C($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2C);
    // 0x150DD684: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x150DD688: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150DD68C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x150DD690: bne         $at, $zero, L_150DDEA0
    if (ctx->r1 != 0) {
        // 0x150DD694: addiu       $a0, $s1, 0x84
        ctx->r4 = ADD32(ctx->r17, 0X84);
            goto L_150DDEA0;
    }
    // 0x150DD694: addiu       $a0, $s1, 0x84
    ctx->r4 = ADD32(ctx->r17, 0X84);
    // 0x150DD698: lbu         $t9, 0x25($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X25);
    // 0x150DD69C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150DD6A0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x150DD6A4: sll         $t5, $t9, 5
    ctx->r13 = S32(ctx->r25 << 5);
    // 0x150DD6A8: addiu       $a2, $t5, 0xA0
    ctx->r6 = ADD32(ctx->r13, 0XA0);
    // 0x150DD6AC: jal         0x151D5D60
    // 0x150DD6B0: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x150DD6B0: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    after_0:
    // 0x150DD6B4: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD6B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150DD6BC: sll         $v1, $s4, 2
    ctx->r3 = S32(ctx->r20 << 2);
    // 0x150DD6C0: beq         $a0, $zero, L_150DDEA0
    if (ctx->r4 == 0) {
        // 0x150DD6C4: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_150DDEA0;
    }
    // 0x150DD6C4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150DD6C8: lw          $s2, 0x98($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X98);
    // 0x150DD6CC: lw          $s3, 0x94($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X94);
    // 0x150DD6D0: sb          $t6, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = ctx->r14;
    // 0x150DD6D4: lbu         $v0, 0x42($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X42);
    // 0x150DD6D8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x150DD6DC: lwc1        $f20, -0x2E28($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X2E28);
    // 0x150DD6E0: andi        $t8, $v0, 0xF0
    ctx->r24 = ctx->r2 & 0XF0;
    // 0x150DD6E4: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x150DD6E8: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x150DD6EC: sb          $t7, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = ctx->r15;
    // 0x150DD6F0: sb          $t9, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r25;
    // 0x150DD6F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150DD6F8: lbu         $t5, 0x60($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X60);
    // 0x150DD6FC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x150DD700: lwc1        $f22, -0x2E18($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x150DD704: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150DD708: bne         $t5, $at, L_150DD720
    if (ctx->r13 != ctx->r1) {
        // 0x150DD70C: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_150DD720;
    }
    // 0x150DD70C: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x150DD710: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150DD714: sb          $t6, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r14;
    // 0x150DD718: b           L_150DD72C
    // 0x150DD71C: sb          $zero, 0x91($sp)
    MEM_B(0X91, ctx->r29) = 0;
        goto L_150DD72C;
    // 0x150DD71C: sb          $zero, 0x91($sp)
    MEM_B(0X91, ctx->r29) = 0;
L_150DD720:
    // 0x150DD720: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150DD724: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x150DD728: sb          $t7, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r15;
L_150DD72C:
    // 0x150DD72C: lbu         $v0, 0x41($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X41);
    // 0x150DD730: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x150DD734: addiu       $s4, $s4, 0xB60
    ctx->r20 = ADD32(ctx->r20, 0XB60);
    // 0x150DD738: multu       $v0, $s5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD73C: addiu       $t9, $sp, 0x8D
    ctx->r25 = ADD32(ctx->r29, 0X8D);
    // 0x150DD740: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150DD744: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x150DD748: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150DD74C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150DD750: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150DD754: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150DD758: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150DD75C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150DD760: mflo        $t8
    ctx->r24 = lo;
    // 0x150DD764: addu        $a1, $s4, $t8
    ctx->r5 = ADD32(ctx->r20, ctx->r24);
    // 0x150DD768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150DD76C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150DD770: jal         0x15142E24
    // 0x150DD774: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_15142E24(rdram, ctx);
        goto after_1;
    // 0x150DD774: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x150DD778: lbu         $a1, 0x28($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X28);
    // 0x150DD77C: addiu       $s0, $sp, 0x8D
    ctx->r16 = ADD32(ctx->r29, 0X8D);
    // 0x150DD780: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150DD784: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150DD788: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150DD78C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150DD790: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x150DD794: jal         0x15142C10
    // 0x150DD798: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    func_15142C10(rdram, ctx);
        goto after_2;
    // 0x150DD798: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_2:
    // 0x150DD79C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150DD7A0: lbu         $a1, 0x8B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X8B);
    // 0x150DD7A4: jal         0x1513F4E4
    // 0x150DD7A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_3;
    // 0x150DD7A8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x150DD7AC: lui         $a2, 0x16
    ctx->r6 = S32(0X16 << 16);
    // 0x150DD7B0: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x150DD7B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150DD7B8: jal         0x15142B7C
    // 0x150DD7BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15142B7C(rdram, ctx);
        goto after_4;
    // 0x150DD7BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x150DD7C0: lbu         $t7, 0x8C($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X8C);
    // 0x150DD7C4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150DD7C8: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x150DD7CC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150DD7D0: addiu       $t9, $t9, 0x4AC8
    ctx->r25 = ADD32(ctx->r25, 0X4AC8);
    // 0x150DD7D4: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x150DD7D8: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x150DD7DC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x150DD7E0: or          $t5, $a1, $at
    ctx->r13 = ctx->r5 | ctx->r1;
    // 0x150DD7E4: ori         $a1, $t5, 0x2CA0
    ctx->r5 = ctx->r13 | 0X2CA0;
    // 0x150DD7E8: lw          $t5, 0x4($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X4);
    // 0x150DD7EC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150DD7F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150DD7F4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x150DD7F8: jal         0x15142FBC
    // 0x150DD7FC: or          $a2, $t5, $t6
    ctx->r6 = ctx->r13 | ctx->r14;
    func_15142FBC(rdram, ctx);
        goto after_5;
    // 0x150DD7FC: or          $a2, $t5, $t6
    ctx->r6 = ctx->r13 | ctx->r14;
    after_5:
    // 0x150DD800: lhu         $t7, 0x1E($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X1E);
    // 0x150DD804: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150DD808: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x150DD80C: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x150DD810: beql        $t8, $zero, L_150DD89C
    if (ctx->r24 == 0) {
        // 0x150DD814: lb          $v0, 0x2E($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X2E);
            goto L_150DD89C;
    }
    goto skip_0;
    // 0x150DD814: lb          $v0, 0x2E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2E);
    skip_0:
    // 0x150DD818: lb          $t1, 0x2E($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X2E);
    // 0x150DD81C: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x150DD820: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x150DD824: bgez        $t1, L_150DD834
    if (SIGNED(ctx->r9) >= 0) {
        // 0x150DD828: nop
    
            goto L_150DD834;
    }
    // 0x150DD828: nop

    // 0x150DD82C: lbu         $t1, 0x25($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X25);
    // 0x150DD830: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
L_150DD834:
    // 0x150DD834: multu       $t1, $t4
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD838: lw          $at, 0x10($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X10);
    // 0x150DD83C: lw          $v0, 0x98($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X98);
    // 0x150DD840: addiu       $t9, $sp, 0xA0
    ctx->r25 = ADD32(ctx->r29, 0XA0);
    // 0x150DD844: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x150DD848: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x150DD84C: addiu       $t8, $sp, 0xAC
    ctx->r24 = ADD32(ctx->r29, 0XAC);
    // 0x150DD850: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x150DD854: lw          $at, 0x18($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X18);
    // 0x150DD858: mflo        $t7
    ctx->r15 = lo;
    // 0x150DD85C: addu        $a3, $s3, $t7
    ctx->r7 = ADD32(ctx->r19, ctx->r15);
    // 0x150DD860: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x150DD864: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x150DD868: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x150DD86C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x150DD870: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150DD874: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x150DD878: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x150DD87C: addu        $v1, $s3, $t6
    ctx->r3 = ADD32(ctx->r19, ctx->r14);
    // 0x150DD880: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x150DD884: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x150DD888: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x150DD88C: lbu         $a2, 0x16($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X16);
    // 0x150DD890: b           L_150DD91C
    // 0x150DD894: or          $t3, $a2, $zero
    ctx->r11 = ctx->r6 | 0;
        goto L_150DD91C;
    // 0x150DD894: or          $t3, $a2, $zero
    ctx->r11 = ctx->r6 | 0;
    // 0x150DD898: lb          $v0, 0x2E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2E);
L_150DD89C:
    // 0x150DD89C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD8A0: bgezl       $v0, L_150DD8B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150DD8A4: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_150DD8B4;
    }
    goto skip_1;
    // 0x150DD8A4: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    skip_1:
    // 0x150DD8A8: lbu         $v0, 0x25($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X25);
    // 0x150DD8AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x150DD8B0: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
L_150DD8B4:
    // 0x150DD8B4: bgez        $t1, L_150DD8C4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x150DD8B8: nop
    
            goto L_150DD8C4;
    }
    // 0x150DD8B8: nop

    // 0x150DD8BC: lbu         $t1, 0x25($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X25);
    // 0x150DD8C0: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
L_150DD8C4:
    // 0x150DD8C4: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD8C8: addiu       $t5, $sp, 0xA0
    ctx->r13 = ADD32(ctx->r29, 0XA0);
    // 0x150DD8CC: mflo        $t7
    ctx->r15 = lo;
    // 0x150DD8D0: addu        $v1, $s3, $t7
    ctx->r3 = ADD32(ctx->r19, ctx->r15);
    // 0x150DD8D4: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150DD8D8: multu       $t1, $t4
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DD8DC: addiu       $t7, $sp, 0xAC
    ctx->r15 = ADD32(ctx->r29, 0XAC);
    // 0x150DD8E0: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x150DD8E4: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x150DD8E8: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x150DD8EC: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150DD8F0: mflo        $t6
    ctx->r14 = lo;
    // 0x150DD8F4: addu        $a3, $s3, $t6
    ctx->r7 = ADD32(ctx->r19, ctx->r14);
    // 0x150DD8F8: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x150DD8FC: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x150DD900: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150DD904: lw          $t5, 0x4($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X4);
    // 0x150DD908: sw          $t5, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r13;
    // 0x150DD90C: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x150DD910: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150DD914: lbu         $t3, 0x16($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X16);
    // 0x150DD918: lbu         $a2, 0x16($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X16);
L_150DD91C:
    // 0x150DD91C: lwc1        $f4, 0x10($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X10);
    // 0x150DD920: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150DD924: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD928: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x150DD92C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150DD930: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DD934: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x150DD938: nop

    // 0x150DD93C: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x150DD940: lwc1        $f18, 0xA4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x150DD944: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD948: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DD94C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x150DD950: nop

    // 0x150DD954: sh          $t5, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r13;
    // 0x150DD958: lwc1        $f8, 0x10($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X10);
    // 0x150DD95C: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150DD960: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD964: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x150DD968: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x150DD96C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DD970: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x150DD974: nop

    // 0x150DD978: sh          $t8, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r24;
    // 0x150DD97C: lbu         $t5, 0x90($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X90);
    // 0x150DD980: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD984: beq         $t5, $zero, L_150DD99C
    if (ctx->r13 == 0) {
        // 0x150DD988: sll         $t6, $t5, 1
        ctx->r14 = S32(ctx->r13 << 1);
            goto L_150DD99C;
    }
    // 0x150DD988: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x150DD98C: sll         $v0, $t3, 6
    ctx->r2 = S32(ctx->r11 << 6);
    // 0x150DD990: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x150DD994: b           L_150DD9B4
    // 0x150DD998: sh          $v0, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r2;
        goto L_150DD9B4;
    // 0x150DD998: sh          $v0, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r2;
L_150DD99C:
    // 0x150DD99C: lbu         $t5, 0x90($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X90);
    // 0x150DD9A0: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD9A4: sll         $v0, $t3, 6
    ctx->r2 = S32(ctx->r11 << 6);
    // 0x150DD9A8: sll         $t9, $t5, 1
    ctx->r25 = S32(ctx->r13 << 1);
    // 0x150DD9AC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x150DD9B0: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
L_150DD9B4:
    // 0x150DD9B4: lbu         $t5, 0x91($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X91);
    // 0x150DD9B8: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD9BC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150DD9C0: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x150DD9C4: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x150DD9C8: sh          $zero, 0x8($t9)
    MEM_H(0X8, ctx->r25) = 0;
    // 0x150DD9CC: sb          $t0, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r8;
    // 0x150DD9D0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD9D4: sb          $t0, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r8;
    // 0x150DD9D8: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD9DC: sb          $t0, 0xE($t5)
    MEM_B(0XE, ctx->r13) = ctx->r8;
    // 0x150DD9E0: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD9E4: lh          $t7, 0x14($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X14);
    // 0x150DD9E8: sb          $t7, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r15;
    // 0x150DD9EC: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD9F0: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x150DD9F4: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DD9F8: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x150DD9FC: addiu       $t5, $t6, 0x10
    ctx->r13 = ADD32(ctx->r14, 0X10);
    // 0x150DDA00: sw          $t5, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r13;
    // 0x150DDA04: lwc1        $f8, 0x10($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X10);
    // 0x150DDA08: mul.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x150DDA0C: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150DDA10: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DDA14: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x150DDA18: nop

    // 0x150DDA1C: sh          $t9, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r25;
    // 0x150DDA20: lwc1        $f18, 0xA4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x150DDA24: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDA28: trunc.w.s   $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DDA2C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150DDA30: nop

    // 0x150DDA34: sh          $t6, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r14;
    // 0x150DDA38: lwc1        $f4, 0x10($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X10);
    // 0x150DDA3C: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150DDA40: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDA44: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x150DDA48: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150DDA4C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DDA50: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x150DDA54: nop

    // 0x150DDA58: sh          $t5, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r13;
    // 0x150DDA5C: lbu         $t6, 0x90($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X90);
    // 0x150DDA60: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDA64: beq         $t6, $zero, L_150DDA78
    if (ctx->r14 == 0) {
        // 0x150DDA68: sll         $t9, $t6, 1
        ctx->r25 = S32(ctx->r14 << 1);
            goto L_150DDA78;
    }
    // 0x150DDA68: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x150DDA6C: addu        $t5, $t7, $t9
    ctx->r13 = ADD32(ctx->r15, ctx->r25);
    // 0x150DDA70: b           L_150DDA8C
    // 0x150DDA74: sh          $v0, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r2;
        goto L_150DDA8C;
    // 0x150DDA74: sh          $v0, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r2;
L_150DDA78:
    // 0x150DDA78: lbu         $t6, 0x90($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X90);
    // 0x150DDA7C: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDA80: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x150DDA84: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x150DDA88: sh          $v0, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r2;
L_150DDA8C:
    // 0x150DDA8C: lbu         $t5, 0x91($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X91);
    // 0x150DDA90: beql        $t5, $zero, L_150DDACC
    if (ctx->r13 == 0) {
        // 0x150DDA94: lbu         $t5, 0x41($s2)
        ctx->r13 = MEM_BU(ctx->r18, 0X41);
            goto L_150DDACC;
    }
    goto skip_2;
    // 0x150DDA94: lbu         $t5, 0x41($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X41);
    skip_2:
    // 0x150DDA98: lbu         $t6, 0x41($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X41);
    // 0x150DDA9C: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DDAA0: mflo        $t8
    ctx->r24 = lo;
    // 0x150DDAA4: addu        $t7, $s4, $t8
    ctx->r15 = ADD32(ctx->r20, ctx->r24);
    // 0x150DDAA8: lhu         $t9, 0x6($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X6);
    // 0x150DDAAC: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDAB0: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x150DDAB4: sll         $t8, $t6, 6
    ctx->r24 = S32(ctx->r14 << 6);
    // 0x150DDAB8: sll         $t9, $t5, 1
    ctx->r25 = S32(ctx->r13 << 1);
    // 0x150DDABC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x150DDAC0: b           L_150DDAF8
    // 0x150DDAC4: sh          $t8, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r24;
        goto L_150DDAF8;
    // 0x150DDAC4: sh          $t8, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r24;
    // 0x150DDAC8: lbu         $t5, 0x41($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X41);
L_150DDACC:
    // 0x150DDACC: multu       $t5, $s5
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DDAD0: mflo        $t7
    ctx->r15 = lo;
    // 0x150DDAD4: addu        $t9, $s4, $t7
    ctx->r25 = ADD32(ctx->r20, ctx->r15);
    // 0x150DDAD8: lhu         $t8, 0x6($t9)
    ctx->r24 = MEM_HU(ctx->r25, 0X6);
    // 0x150DDADC: lbu         $t9, 0x91($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X91);
    // 0x150DDAE0: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDAE4: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x150DDAE8: sll         $t5, $t6, 6
    ctx->r13 = S32(ctx->r14 << 6);
    // 0x150DDAEC: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x150DDAF0: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x150DDAF4: sh          $t5, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r13;
L_150DDAF8:
    // 0x150DDAF8: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDAFC: sb          $t0, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r8;
    // 0x150DDB00: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDB04: sb          $t0, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r8;
    // 0x150DDB08: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDB0C: sb          $t0, 0xE($t8)
    MEM_B(0XE, ctx->r24) = ctx->r8;
    // 0x150DDB10: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDB14: lh          $t5, 0x14($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X14);
    // 0x150DDB18: sb          $t5, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r13;
    // 0x150DDB1C: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDB20: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x150DDB24: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDB28: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x150DDB2C: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
    // 0x150DDB30: lwc1        $f8, 0x10($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X10);
L_150DDB34:
    // 0x150DDB34: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150DDB38: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDB3C: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x150DDB40: or          $t2, $t3, $zero
    ctx->r10 = ctx->r11 | 0;
    // 0x150DDB44: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x150DDB48: sll         $v0, $a2, 6
    ctx->r2 = S32(ctx->r6 << 6);
    // 0x150DDB4C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150DDB50: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DDB54: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x150DDB58: nop

    // 0x150DDB5C: sh          $t6, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r14;
    // 0x150DDB60: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150DDB64: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDB68: trunc.w.s   $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DDB6C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x150DDB70: nop

    // 0x150DDB74: sh          $t8, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r24;
    // 0x150DDB78: lwc1        $f6, 0x10($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X10);
    // 0x150DDB7C: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150DDB80: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDB84: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x150DDB88: sub.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150DDB8C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DDB90: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x150DDB94: nop

    // 0x150DDB98: sh          $t9, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r25;
    // 0x150DDB9C: lbu         $t8, 0x90($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X90);
    // 0x150DDBA0: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDBA4: beq         $t8, $zero, L_150DDBBC
    if (ctx->r24 == 0) {
        // 0x150DDBA8: sll         $t6, $t8, 1
        ctx->r14 = S32(ctx->r24 << 1);
            goto L_150DDBBC;
    }
    // 0x150DDBA8: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x150DDBAC: addu        $t9, $t5, $t6
    ctx->r25 = ADD32(ctx->r13, ctx->r14);
    // 0x150DDBB0: sh          $v0, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r2;
    // 0x150DDBB4: b           L_150DDBD4
    // 0x150DDBB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
        goto L_150DDBD4;
    // 0x150DDBB8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_150DDBBC:
    // 0x150DDBBC: lbu         $t8, 0x90($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X90);
    // 0x150DDBC0: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDBC4: sll         $v0, $a2, 6
    ctx->r2 = S32(ctx->r6 << 6);
    // 0x150DDBC8: sll         $t5, $t8, 1
    ctx->r13 = S32(ctx->r24 << 1);
    // 0x150DDBCC: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x150DDBD0: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
L_150DDBD4:
    // 0x150DDBD4: lbu         $t8, 0x91($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X91);
    // 0x150DDBD8: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDBDC: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x150DDBE0: addu        $t5, $t9, $t7
    ctx->r13 = ADD32(ctx->r25, ctx->r15);
    // 0x150DDBE4: sh          $zero, 0x8($t5)
    MEM_H(0X8, ctx->r13) = 0;
    // 0x150DDBE8: sb          $t0, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r8;
    // 0x150DDBEC: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDBF0: sb          $t0, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r8;
    // 0x150DDBF4: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDBF8: sb          $t0, 0xE($t8)
    MEM_B(0XE, ctx->r24) = ctx->r8;
    // 0x150DDBFC: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDC00: lh          $t7, 0x14($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X14);
    // 0x150DDC04: sb          $t7, 0xF($t5)
    MEM_B(0XF, ctx->r13) = ctx->r15;
    // 0x150DDC08: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDC0C: sh          $zero, 0x6($t9)
    MEM_H(0X6, ctx->r25) = 0;
    // 0x150DDC10: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDC14: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150DDC18: addiu       $t8, $t6, 0x10
    ctx->r24 = ADD32(ctx->r14, 0X10);
    // 0x150DDC1C: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
    // 0x150DDC20: lwc1        $f6, 0x10($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X10);
    // 0x150DDC24: mul.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x150DDC28: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150DDC2C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DDC30: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x150DDC34: nop

    // 0x150DDC38: sh          $t5, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r13;
    // 0x150DDC3C: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150DDC40: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDC44: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150DDC48: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x150DDC4C: nop

    // 0x150DDC50: sh          $t6, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r14;
    // 0x150DDC54: lwc1        $f8, 0x10($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X10);
    // 0x150DDC58: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150DDC5C: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDC60: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x150DDC64: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150DDC68: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150DDC6C: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x150DDC70: nop

    // 0x150DDC74: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x150DDC78: lbu         $t6, 0x90($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X90);
    // 0x150DDC7C: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDC80: beq         $t6, $zero, L_150DDC94
    if (ctx->r14 == 0) {
        // 0x150DDC84: sll         $t5, $t6, 1
        ctx->r13 = S32(ctx->r14 << 1);
            goto L_150DDC94;
    }
    // 0x150DDC84: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x150DDC88: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x150DDC8C: b           L_150DDCA8
    // 0x150DDC90: sh          $v0, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r2;
        goto L_150DDCA8;
    // 0x150DDC90: sh          $v0, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r2;
L_150DDC94:
    // 0x150DDC94: lbu         $t6, 0x90($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X90);
    // 0x150DDC98: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDC9C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x150DDCA0: addu        $t5, $t9, $t7
    ctx->r13 = ADD32(ctx->r25, ctx->r15);
    // 0x150DDCA4: sh          $v0, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r2;
L_150DDCA8:
    // 0x150DDCA8: lbu         $t8, 0x91($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X91);
    // 0x150DDCAC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150DDCB0: beql        $t8, $zero, L_150DDCEC
    if (ctx->r24 == 0) {
        // 0x150DDCB4: lbu         $t8, 0x41($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X41);
            goto L_150DDCEC;
    }
    goto skip_3;
    // 0x150DDCB4: lbu         $t8, 0x41($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X41);
    skip_3:
    // 0x150DDCB8: lbu         $t6, 0x41($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X41);
    // 0x150DDCBC: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DDCC0: mflo        $t9
    ctx->r25 = lo;
    // 0x150DDCC4: addu        $t7, $s4, $t9
    ctx->r15 = ADD32(ctx->r20, ctx->r25);
    // 0x150DDCC8: lhu         $t5, 0x6($t7)
    ctx->r13 = MEM_HU(ctx->r15, 0X6);
    // 0x150DDCCC: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDCD0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x150DDCD4: sll         $t9, $t6, 6
    ctx->r25 = S32(ctx->r14 << 6);
    // 0x150DDCD8: sll         $t5, $t8, 1
    ctx->r13 = S32(ctx->r24 << 1);
    // 0x150DDCDC: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x150DDCE0: b           L_150DDD18
    // 0x150DDCE4: sh          $t9, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r25;
        goto L_150DDD18;
    // 0x150DDCE4: sh          $t9, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r25;
    // 0x150DDCE8: lbu         $t8, 0x41($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X41);
L_150DDCEC:
    // 0x150DDCEC: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DDCF0: mflo        $t7
    ctx->r15 = lo;
    // 0x150DDCF4: addu        $t5, $s4, $t7
    ctx->r13 = ADD32(ctx->r20, ctx->r15);
    // 0x150DDCF8: lhu         $t9, 0x6($t5)
    ctx->r25 = MEM_HU(ctx->r13, 0X6);
    // 0x150DDCFC: lbu         $t5, 0x91($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X91);
    // 0x150DDD00: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDD04: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x150DDD08: sll         $t8, $t6, 6
    ctx->r24 = S32(ctx->r14 << 6);
    // 0x150DDD0C: sll         $t9, $t5, 1
    ctx->r25 = S32(ctx->r13 << 1);
    // 0x150DDD10: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x150DDD14: sh          $t8, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r24;
L_150DDD18:
    // 0x150DDD18: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDD1C: sb          $t0, 0xC($t5)
    MEM_B(0XC, ctx->r13) = ctx->r8;
    // 0x150DDD20: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDD24: sb          $t0, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r8;
    // 0x150DDD28: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDD2C: sb          $t0, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r8;
    // 0x150DDD30: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDD34: lh          $t8, 0x14($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X14);
    // 0x150DDD38: sb          $t8, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r24;
    // 0x150DDD3C: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDD40: lui         $t8, 0x100
    ctx->r24 = S32(0X100 << 16);
    // 0x150DDD44: ori         $t8, $t8, 0x4008
    ctx->r24 = ctx->r24 | 0X4008;
    // 0x150DDD48: sh          $zero, 0x6($t5)
    MEM_H(0X6, ctx->r13) = 0;
    // 0x150DDD4C: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDD50: addiu       $t9, $t7, 0x10
    ctx->r25 = ADD32(ctx->r15, 0X10);
    // 0x150DDD54: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x150DDD58: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x150DDD5C: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDD60: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150DDD64: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x150DDD68: addiu       $t5, $t6, -0x40
    ctx->r13 = ADD32(ctx->r14, -0X40);
    // 0x150DDD6C: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x150DDD70: lui         $t7, 0x500
    ctx->r15 = S32(0X500 << 16);
    // 0x150DDD74: ori         $t7, $t7, 0x204
    ctx->r15 = ctx->r15 | 0X204;
    // 0x150DDD78: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x150DDD7C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150DDD80: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x150DDD84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150DDD88: lui         $t9, 0x502
    ctx->r25 = S32(0X502 << 16);
    // 0x150DDD8C: ori         $t9, $t9, 0x604
    ctx->r25 = ctx->r25 | 0X604;
    // 0x150DDD90: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x150DDD94: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x150DDD98: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150DDD9C: slt         $v0, $t2, $a1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x150DDDA0: beq         $v0, $zero, L_150DDE24
    if (ctx->r2 == 0) {
        // 0x150DDDA4: andi        $t3, $a2, 0xFF
        ctx->r11 = ctx->r6 & 0XFF;
            goto L_150DDE24;
    }
    // 0x150DDDA4: andi        $t3, $a2, 0xFF
    ctx->r11 = ctx->r6 & 0XFF;
    // 0x150DDDA8: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDDAC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x150DDDB0: sw          $a3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r7;
    // 0x150DDDB4: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
    // 0x150DDDB8: sb          $t3, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = ctx->r11;
    // 0x150DDDBC: jal         0x10022EC0
    // 0x150DDDC0: addiu       $a1, $a0, -0x20
    ctx->r5 = ADD32(ctx->r4, -0X20);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x150DDDC0: addiu       $a1, $a0, -0x20
    ctx->r5 = ADD32(ctx->r4, -0X20);
    after_6:
    // 0x150DDDC4: lbu         $t6, 0x90($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X90);
    // 0x150DDDC8: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDDCC: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x150DDDD0: sll         $t5, $t6, 1
    ctx->r13 = S32(ctx->r14 << 1);
    // 0x150DDDD4: addu        $v1, $t8, $t5
    ctx->r3 = ADD32(ctx->r24, ctx->r13);
    // 0x150DDDD8: lh          $t7, -0x18($v1)
    ctx->r15 = MEM_H(ctx->r3, -0X18);
    // 0x150DDDDC: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x150DDDE0: lbu         $t3, 0x8E($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X8E);
    // 0x150DDDE4: addiu       $t9, $t7, -0x4000
    ctx->r25 = ADD32(ctx->r15, -0X4000);
    // 0x150DDDE8: sh          $t9, -0x18($v1)
    MEM_H(-0X18, ctx->r3) = ctx->r25;
    // 0x150DDDEC: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDDF0: lbu         $t5, 0x90($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X90);
    // 0x150DDDF4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150DDDF8: addiu       $t8, $t6, 0x10
    ctx->r24 = ADD32(ctx->r14, 0X10);
    // 0x150DDDFC: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x150DDE00: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
    // 0x150DDE04: addu        $v1, $t8, $t7
    ctx->r3 = ADD32(ctx->r24, ctx->r15);
    // 0x150DDE08: lh          $t9, -0x18($v1)
    ctx->r25 = MEM_H(ctx->r3, -0X18);
    // 0x150DDE0C: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x150DDE10: addiu       $t6, $t9, -0x4000
    ctx->r14 = ADD32(ctx->r25, -0X4000);
    // 0x150DDE14: sh          $t6, -0x18($v1)
    MEM_H(-0X18, ctx->r3) = ctx->r14;
    // 0x150DDE18: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DDE1C: addiu       $t8, $t5, 0x10
    ctx->r24 = ADD32(ctx->r13, 0X10);
    // 0x150DDE20: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
L_150DDE24:
    // 0x150DDE24: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x150DDE28: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x150DDE2C: bgez        $t1, L_150DDE4C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x150DDE30: addiu       $a3, $a3, -0x18
        ctx->r7 = ADD32(ctx->r7, -0X18);
            goto L_150DDE4C;
    }
    // 0x150DDE30: addiu       $a3, $a3, -0x18
    ctx->r7 = ADD32(ctx->r7, -0X18);
    // 0x150DDE34: lbu         $t1, 0x25($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X25);
    // 0x150DDE38: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x150DDE3C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x150DDE40: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x150DDE44: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x150DDE48: addu        $a3, $s3, $t7
    ctx->r7 = ADD32(ctx->r19, ctx->r15);
L_150DDE4C:
    // 0x150DDE4C: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150DDE50: addiu       $t9, $sp, 0xA0
    ctx->r25 = ADD32(ctx->r29, 0XA0);
    // 0x150DDE54: mflo        $t6
    ctx->r14 = lo;
    // 0x150DDE58: addu        $t5, $s3, $t6
    ctx->r13 = ADD32(ctx->r19, ctx->r14);
    // 0x150DDE5C: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150DDE60: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
    // 0x150DDE64: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x150DDE68: lw          $t7, 0x4($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4);
    // 0x150DDE6C: sw          $t7, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r15;
    // 0x150DDE70: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150DDE74: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x150DDE78: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x150DDE7C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150DDE80: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x150DDE84: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x150DDE88: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x150DDE8C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150DDE90: lb          $t5, 0x2D($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X2D);
    // 0x150DDE94: lbu         $a2, 0x16($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X16);
    // 0x150DDE98: bnel        $v0, $t5, L_150DDB34
    if (ctx->r2 != ctx->r13) {
        // 0x150DDE9C: lwc1        $f8, 0x10($a3)
        ctx->f8.u32l = MEM_W(ctx->r7, 0X10);
            goto L_150DDB34;
    }
    goto skip_4;
    // 0x150DDE9C: lwc1        $f8, 0x10($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X10);
    skip_4:
L_150DDEA0:
    // 0x150DDEA0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150DDEA4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x150DDEA8: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150DDEAC: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150DDEB0: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x150DDEB4: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x150DDEB8: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x150DDEBC: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x150DDEC0: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x150DDEC4: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x150DDEC8: jr          $ra
    // 0x150DDECC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    return;
    // 0x150DDECC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_151CFA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CFA4C: addiu       $sp, $sp, -0x248
    ctx->r29 = ADD32(ctx->r29, -0X248);
    // 0x151CFA50: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x151CFA54: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151CFA58: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x151CFA5C: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x151CFA60: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x151CFA64: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x151CFA68: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x151CFA6C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x151CFA70: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x151CFA74: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x151CFA78: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x151CFA7C: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x151CFA80: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x151CFA84: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x151CFA88: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x151CFA8C: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151CFA90: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151CFA94: sw          $a1, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = ctx->r5;
    // 0x151CFA98: sw          $a2, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r6;
    // 0x151CFA9C: lwc1        $f4, 0x14($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X14);
    // 0x151CFAA0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x151CFAA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CFAA8: swc1        $f4, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->f4.u32l;
    // 0x151CFAAC: lwc1        $f6, 0x18($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X18);
    // 0x151CFAB0: addiu       $s1, $sp, 0x23C
    ctx->r17 = ADD32(ctx->r29, 0X23C);
    // 0x151CFAB4: addiu       $a1, $sp, 0x224
    ctx->r5 = ADD32(ctx->r29, 0X224);
    // 0x151CFAB8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151CFABC: addiu       $a2, $sp, 0x228
    ctx->r6 = ADD32(ctx->r29, 0X228);
    // 0x151CFAC0: addiu       $a3, $sp, 0x22C
    ctx->r7 = ADD32(ctx->r29, 0X22C);
    // 0x151CFAC4: addiu       $t6, $sp, 0x240
    ctx->r14 = ADD32(ctx->r29, 0X240);
    // 0x151CFAC8: swc1        $f10, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->f10.u32l;
    // 0x151CFACC: lwc1        $f16, 0x1C($s3)
    ctx->f16.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x151CFAD0: addiu       $t7, $sp, 0x244
    ctx->r15 = ADD32(ctx->r29, 0X244);
    // 0x151CFAD4: addiu       $t8, $sp, 0x218
    ctx->r24 = ADD32(ctx->r29, 0X218);
    // 0x151CFAD8: swc1        $f16, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->f16.u32l;
    // 0x151CFADC: lw          $v0, 0x1D4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1D4);
    // 0x151CFAE0: addiu       $t9, $sp, 0x21C
    ctx->r25 = ADD32(ctx->r29, 0X21C);
    // 0x151CFAE4: addiu       $t0, $sp, 0x220
    ctx->r8 = ADD32(ctx->r29, 0X220);
    // 0x151CFAE8: beq         $v0, $zero, L_151CFFDC
    if (ctx->r2 == 0) {
        // 0x151CFAEC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_151CFFDC;
    }
    // 0x151CFAEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151CFAF0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x151CFAF4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151CFAF8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151CFAFC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x151CFB00: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151CFB04: jal         0x1503F404
    // 0x151CFB08: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_1503F404(rdram, ctx);
        goto after_0;
    // 0x151CFB08: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x151CFB0C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151CFB10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CFB14: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151CFB18: addiu       $s4, $sp, 0x180
    ctx->r20 = ADD32(ctx->r29, 0X180);
    // 0x151CFB1C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151CFB20: addiu       $t1, $t1, -0x50C0
    ctx->r9 = ADD32(ctx->r9, -0X50C0);
    // 0x151CFB24: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151CFB28: addiu       $t5, $sp, 0x1AC
    ctx->r13 = ADD32(ctx->r29, 0X1AC);
    // 0x151CFB2C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151CFB30: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x151CFB34: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x151CFB38: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151CFB3C: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x151CFB40: sw          $t4, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r12;
    // 0x151CFB44: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151CFB48: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x151CFB4C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x151CFB50: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x151CFB54: lw          $t4, 0xC($t1)
    ctx->r12 = MEM_W(ctx->r9, 0XC);
    // 0x151CFB58: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x151CFB5C: addiu       $s5, $s5, -0x5114
    ctx->r21 = ADD32(ctx->r21, -0X5114);
    // 0x151CFB60: sw          $t4, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r12;
    // 0x151CFB64: lw          $at, 0x10($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X10);
    // 0x151CFB68: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151CFB6C: addiu       $fp, $zero, 0x19
    ctx->r30 = ADD32(0, 0X19);
    // 0x151CFB70: sw          $at, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r1;
    // 0x151CFB74: lw          $t4, 0x14($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X14);
    // 0x151CFB78: addiu       $s7, $sp, 0x1C4
    ctx->r23 = ADD32(ctx->r29, 0X1C4);
    // 0x151CFB7C: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x151CFB80: sw          $t4, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r12;
    // 0x151CFB84: lw          $at, 0x18($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X18);
    // 0x151CFB88: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x151CFB8C: addiu       $t4, $zero, 0x39E9
    ctx->r12 = ADD32(0, 0X39E9);
    // 0x151CFB90: sw          $at, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r1;
    // 0x151CFB94: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFB98: lwc1        $f18, -0x4FD8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4FD8);
    // 0x151CFB9C: swc1        $f0, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f0.u32l;
    // 0x151CFBA0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151CFBA4: swc1        $f18, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f18.u32l;
    // 0x151CFBA8: lwc1        $f6, 0x150($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X150);
    // 0x151CFBAC: lwc1        $f4, 0x14C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X14C);
    // 0x151CFBB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CFBB4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151CFBB8: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151CFBBC: swc1        $f16, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f16.u32l;
    // 0x151CFBC0: swc1        $f16, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f16.u32l;
    // 0x151CFBC4: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x151CFBC8: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151CFBCC: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x151CFBD0: sw          $t8, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r24;
    // 0x151CFBD4: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x151CFBD8: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151CFBDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFBE0: lwc1        $f30, -0x4FD4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X4FD4);
    // 0x151CFBE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFBE8: swc1        $f0, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->f0.u32l;
    // 0x151CFBEC: swc1        $f2, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f2.u32l;
    // 0x151CFBF0: swc1        $f0, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f0.u32l;
    // 0x151CFBF4: swc1        $f2, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f2.u32l;
    // 0x151CFBF8: sb          $zero, 0x1F4($sp)
    MEM_B(0X1F4, ctx->r29) = 0;
    // 0x151CFBFC: sw          $zero, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = 0;
    // 0x151CFC00: sb          $t9, 0x1FC($sp)
    MEM_B(0X1FC, ctx->r29) = ctx->r25;
    // 0x151CFC04: sb          $zero, 0x1FE($sp)
    MEM_B(0X1FE, ctx->r29) = 0;
    // 0x151CFC08: sb          $zero, 0x200($sp)
    MEM_B(0X200, ctx->r29) = 0;
    // 0x151CFC0C: sb          $zero, 0x201($sp)
    MEM_B(0X201, ctx->r29) = 0;
    // 0x151CFC10: sb          $zero, 0x202($sp)
    MEM_B(0X202, ctx->r29) = 0;
    // 0x151CFC14: sb          $zero, 0x203($sp)
    MEM_B(0X203, ctx->r29) = 0;
    // 0x151CFC18: sb          $t0, 0x206($sp)
    MEM_B(0X206, ctx->r29) = ctx->r8;
    // 0x151CFC1C: sw          $s3, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r19;
    // 0x151CFC20: lwc1        $f28, -0x4FD0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X4FD0);
    // 0x151CFC24: lbu         $t3, 0x3B($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X3B);
    // 0x151CFC28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFC2C: lwc1        $f26, -0x4FCC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X4FCC);
    // 0x151CFC30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFC34: lwc1        $f24, -0x4FC8($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X4FC8);
    // 0x151CFC38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFC3C: lwc1        $f22, -0x4FC4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X4FC4);
    // 0x151CFC40: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x151CFC44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFC48: sh          $t2, 0x20E($sp)
    MEM_H(0X20E, ctx->r29) = ctx->r10;
    // 0x151CFC4C: sh          $t1, 0x210($sp)
    MEM_H(0X210, ctx->r29) = ctx->r9;
    // 0x151CFC50: sw          $t4, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->r12;
    // 0x151CFC54: sb          $t7, 0x1FD($sp)
    MEM_B(0X1FD, ctx->r29) = ctx->r15;
    // 0x151CFC58: sb          $t6, 0x204($sp)
    MEM_B(0X204, ctx->r29) = ctx->r14;
    // 0x151CFC5C: sb          $t5, 0x1FF($sp)
    MEM_B(0X1FF, ctx->r29) = ctx->r13;
    // 0x151CFC60: lwc1        $f20, -0x4FC0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4FC0);
    // 0x151CFC64: sb          $t3, 0x20C($sp)
    MEM_B(0X20C, ctx->r29) = ctx->r11;
L_151CFC68:
    // 0x151CFC68: multu       $s0, $s6
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CFC6C: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x151CFC70: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x151CFC74: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x151CFC78: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x151CFC7C: sh          $t0, 0x1F2($sp)
    MEM_H(0X1F2, ctx->r29) = ctx->r8;
    // 0x151CFC80: lw          $a2, 0x1D4($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X1D4);
    // 0x151CFC84: mflo        $t3
    ctx->r11 = lo;
    // 0x151CFC88: addu        $a0, $s5, $t3
    ctx->r4 = ADD32(ctx->r21, ctx->r11);
    // 0x151CFC8C: jal         0x15143134
    // 0x151CFC90: nop

    func_15143134(rdram, ctx);
        goto after_1;
    // 0x151CFC90: nop

    after_1:
    // 0x151CFC94: jal         0x150ADA20
    // 0x151CFC98: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151CFC98: nop

    after_2:
    // 0x151CFC9C: jal         0x150ADA20
    // 0x151CFCA0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151CFCA0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_3:
    // 0x151CFCA4: jal         0x150ADA68
    // 0x151CFCA8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151CFCA8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_4:
    // 0x151CFCAC: divu        $zero, $s2, $fp
    lo = S32(U32(ctx->r18) / U32(ctx->r30)); hi = S32(U32(ctx->r18) % U32(ctx->r30));
    // 0x151CFCB0: mul.s       $f18, $f0, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151CFCB4: mfhi        $a1
    ctx->r5 = hi;
    // 0x151CFCB8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x151CFCBC: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x151CFCC0: addiu       $a1, $a1, -0x40
    ctx->r5 = ADD32(ctx->r5, -0X40);
    // 0x151CFCC4: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x151CFCC8: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x151CFCCC: add.s       $f4, $f18, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f26.fl;
    // 0x151CFCD0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x151CFCD4: bne         $fp, $zero, L_151CFCE0
    if (ctx->r30 != 0) {
        // 0x151CFCD8: nop
    
            goto L_151CFCE0;
    }
    // 0x151CFCD8: nop

    // 0x151CFCDC: break       7
    do_break(354221276);
L_151CFCE0:
    // 0x151CFCE0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x151CFCE4: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x151CFCE8: jal         0x15143794
    // 0x151CFCEC: addiu       $a3, $sp, 0x1D0
    ctx->r7 = ADD32(ctx->r29, 0X1D0);
    func_15143794(rdram, ctx);
        goto after_5;
    // 0x151CFCEC: addiu       $a3, $sp, 0x1D0
    ctx->r7 = ADD32(ctx->r29, 0X1D0);
    after_5:
    // 0x151CFCF0: jal         0x150ADA68
    // 0x151CFCF4: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151CFCF4: nop

    after_6:
    // 0x151CFCF8: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151CFCFC: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x151CFD00: jal         0x150ADA68
    // 0x151CFD04: swc1        $f8, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x151CFD04: swc1        $f8, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x151CFD08: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151CFD0C: add.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x151CFD10: jal         0x150ADA68
    // 0x151CFD14: swc1        $f16, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x151CFD14: swc1        $f16, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x151CFD18: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x151CFD1C: add.s       $f4, $f18, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x151CFD20: jal         0x150ADA20
    // 0x151CFD24: swc1        $f4, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x151CFD24: swc1        $f4, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x151CFD28: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151CFD2C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151CFD30: lbu         $t8, 0x24F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X24F);
    // 0x151CFD34: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
    // 0x151CFD38: mfhi        $t6
    ctx->r14 = hi;
    // 0x151CFD3C: addiu       $t5, $t6, 0x64
    ctx->r13 = ADD32(ctx->r14, 0X64);
    // 0x151CFD40: sh          $t5, 0x1F0($sp)
    MEM_H(0X1F0, ctx->r29) = ctx->r13;
    // 0x151CFD44: addiu       $a0, $sp, 0x19C
    ctx->r4 = ADD32(ctx->r29, 0X19C);
    // 0x151CFD48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151CFD4C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151CFD50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151CFD54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151CFD58: jal         0x15132A4C
    // 0x151CFD5C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_15132A4C(rdram, ctx);
        goto after_10;
    // 0x151CFD5C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_10:
    // 0x151CFD60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151CFD64: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x151CFD68: slti        $at, $t0, 0x7
    ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
    // 0x151CFD6C: bne         $at, $zero, L_151CFC68
    if (ctx->r1 != 0) {
        // 0x151CFD70: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_151CFC68;
    }
    // 0x151CFD70: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x151CFD74: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x151CFD78: addiu       $s0, $sp, 0x230
    ctx->r16 = ADD32(ctx->r29, 0X230);
    // 0x151CFD7C: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151CFD80: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x151CFD84: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x151CFD88: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x151CFD8C: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151CFD90: sw          $t2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r10;
    // 0x151CFD94: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x151CFD98: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x151CFD9C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x151CFDA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CFDA4: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x151CFDA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CFDAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFDB0: lwc1        $f10, -0x4FBC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4FBC);
    // 0x151CFDB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFDB8: lwc1        $f16, -0x4FB8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4FB8);
    // 0x151CFDBC: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x151CFDC0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151CFDC4: addiu       $t6, $zero, -0x40
    ctx->r14 = ADD32(0, -0X40);
    // 0x151CFDC8: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x151CFDCC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CFDD0: sh          $t1, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r9;
    // 0x151CFDD4: sh          $t4, 0x11A($sp)
    MEM_H(0X11A, ctx->r29) = ctx->r12;
    // 0x151CFDD8: sh          $t7, 0x11E($sp)
    MEM_H(0X11E, ctx->r29) = ctx->r15;
    // 0x151CFDDC: sh          $t6, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r14;
    // 0x151CFDE0: sh          $t5, 0x122($sp)
    MEM_H(0X122, ctx->r29) = ctx->r13;
    // 0x151CFDE4: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x151CFDE8: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x151CFDEC: addiu       $t3, $zero, 0x19
    ctx->r11 = ADD32(0, 0X19);
    // 0x151CFDF0: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151CFDF4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x151CFDF8: sh          $t0, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r8;
    // 0x151CFDFC: sh          $t3, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r11;
    // 0x151CFE00: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x151CFE04: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151CFE08: addiu       $t4, $zero, 0x48
    ctx->r12 = ADD32(0, 0X48);
    // 0x151CFE0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151CFE10: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x151CFE14: addiu       $t5, $zero, 0x69
    ctx->r13 = ADD32(0, 0X69);
    // 0x151CFE18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151CFE1C: sh          $t8, 0x124($sp)
    MEM_H(0X124, ctx->r29) = ctx->r24;
    // 0x151CFE20: sh          $t9, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r25;
    // 0x151CFE24: sb          $t2, 0x12C($sp)
    MEM_B(0X12C, ctx->r29) = ctx->r10;
    // 0x151CFE28: sb          $t1, 0x12D($sp)
    MEM_B(0X12D, ctx->r29) = ctx->r9;
    // 0x151CFE2C: sb          $t4, 0x12E($sp)
    MEM_B(0X12E, ctx->r29) = ctx->r12;
    // 0x151CFE30: sw          $t7, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r15;
    // 0x151CFE34: sb          $t6, 0x149($sp)
    MEM_B(0X149, ctx->r29) = ctx->r14;
    // 0x151CFE38: sb          $t5, 0x14A($sp)
    MEM_B(0X14A, ctx->r29) = ctx->r13;
    // 0x151CFE3C: sw          $t8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->r24;
    // 0x151CFE40: lui         $t0, 0x22
    ctx->r8 = S32(0X22 << 16);
    // 0x151CFE44: lui         $t3, 0x1D
    ctx->r11 = S32(0X1D << 16);
    // 0x151CFE48: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151CFE4C: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x151CFE50: ori         $t3, $t3, 0x600
    ctx->r11 = ctx->r11 | 0X600;
    // 0x151CFE54: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151CFE58: addiu       $t1, $zero, 0x3B
    ctx->r9 = ADD32(0, 0X3B);
    // 0x151CFE5C: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x151CFE60: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x151CFE64: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151CFE68: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x151CFE6C: addiu       $t8, $zero, 0x19
    ctx->r24 = ADD32(0, 0X19);
    // 0x151CFE70: sh          $zero, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = 0;
    // 0x151CFE74: sw          $zero, 0x134($sp)
    MEM_W(0X134, ctx->r29) = 0;
    // 0x151CFE78: sw          $zero, 0x138($sp)
    MEM_W(0X138, ctx->r29) = 0;
    // 0x151CFE7C: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
    // 0x151CFE80: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x151CFE84: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x151CFE88: sb          $zero, 0x148($sp)
    MEM_B(0X148, ctx->r29) = 0;
    // 0x151CFE8C: sw          $t9, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r25;
    // 0x151CFE90: sw          $zero, 0x154($sp)
    MEM_W(0X154, ctx->r29) = 0;
    // 0x151CFE94: sw          $t0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r8;
    // 0x151CFE98: sw          $t3, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r11;
    // 0x151CFE9C: sw          $t2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r10;
    // 0x151CFEA0: sw          $t1, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r9;
    // 0x151CFEA4: sw          $t4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r12;
    // 0x151CFEA8: sw          $t7, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r15;
    // 0x151CFEAC: sb          $zero, 0x170($sp)
    MEM_B(0X170, ctx->r29) = 0;
    // 0x151CFEB0: sb          $t6, 0x171($sp)
    MEM_B(0X171, ctx->r29) = ctx->r14;
    // 0x151CFEB4: sh          $t5, 0x174($sp)
    MEM_H(0X174, ctx->r29) = ctx->r13;
    // 0x151CFEB8: sh          $t8, 0x176($sp)
    MEM_H(0X176, ctx->r29) = ctx->r24;
    // 0x151CFEBC: lw          $a2, 0x250($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X250);
    // 0x151CFEC0: lbu         $a1, 0x24F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X24F);
    // 0x151CFEC4: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x151CFEC8: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x151CFECC: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    // 0x151CFED0: swc1        $f16, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f16.u32l;
    // 0x151CFED4: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    // 0x151CFED8: jal         0x15151A38
    // 0x151CFEDC: swc1        $f4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
    func_15151A38(rdram, ctx);
        goto after_11;
    // 0x151CFEDC: swc1        $f4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x151CFEE0: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x151CFEE4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x151CFEE8: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
    // 0x151CFEEC: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    // 0x151CFEF0: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151CFEF4: addiu       $t3, $sp, 0xCC
    ctx->r11 = ADD32(ctx->r29, 0XCC);
    // 0x151CFEF8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151CFEFC: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151CFF00: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x151CFF04: addiu       $t6, $zero, -0x1D
    ctx->r14 = ADD32(0, -0X1D);
    // 0x151CFF08: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x151CFF0C: sw          $t4, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r12;
    // 0x151CFF10: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151CFF14: addiu       $t8, $zero, 0x78
    ctx->r24 = ADD32(0, 0X78);
    // 0x151CFF18: addiu       $t9, $zero, 0x78
    ctx->r25 = ADD32(0, 0X78);
    // 0x151CFF1C: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151CFF20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CFF24: lwc1        $f6, -0x4FB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4FB4);
    // 0x151CFF28: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x151CFF2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CFF30: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x151CFF34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CFF38: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x151CFF3C: sh          $zero, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = 0;
    // 0x151CFF40: sh          $t7, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r15;
    // 0x151CFF44: sh          $t6, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r14;
    // 0x151CFF48: sh          $t5, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r13;
    // 0x151CFF4C: sh          $t8, 0xEC($sp)
    MEM_H(0XEC, ctx->r29) = ctx->r24;
    // 0x151CFF50: sh          $t9, 0xEE($sp)
    MEM_H(0XEE, ctx->r29) = ctx->r25;
    // 0x151CFF54: sb          $t0, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r8;
    // 0x151CFF58: lw          $a2, 0x250($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X250);
    // 0x151CFF5C: lbu         $a1, 0x24F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X24F);
    // 0x151CFF60: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    // 0x151CFF64: swc1        $f6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f6.u32l;
    // 0x151CFF68: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    // 0x151CFF6C: jal         0x15150D1C
    // 0x151CFF70: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    func_15150D1C(rdram, ctx);
        goto after_12;
    // 0x151CFF70: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x151CFF74: addiu       $s1, $sp, 0xA0
    ctx->r17 = ADD32(ctx->r29, 0XA0);
    // 0x151CFF78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151CFF7C: jal         0x1504715C
    // 0x151CFF80: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_1504715C(rdram, ctx);
        goto after_13;
    // 0x151CFF80: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_13:
    // 0x151CFF84: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x151CFF88: jal         0x150ADA20
    // 0x151CFF8C: sb          $t1, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x151CFF8C: sb          $t1, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r9;
    after_14:
    // 0x151CFF90: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x151CFF94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CFF98: lwc1        $f16, 0x234($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X234);
    // 0x151CFF9C: lbu         $t7, 0x24F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X24F);
    // 0x151CFFA0: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x151CFFA4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151CFFA8: andi        $t2, $v0, 0x3
    ctx->r10 = ctx->r2 & 0X3;
    // 0x151CFFAC: addiu       $t3, $t2, 0x7
    ctx->r11 = ADD32(ctx->r10, 0X7);
    // 0x151CFFB0: addiu       $t4, $sp, 0x9F
    ctx->r12 = ADD32(ctx->r29, 0X9F);
    // 0x151CFFB4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x151CFFB8: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151CFFBC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151CFFC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151CFFC4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x151CFFC8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x151CFFCC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151CFFD0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151CFFD4: jal         0x151A9834
    // 0x151CFFD8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_151A9834(rdram, ctx);
        goto after_15;
    // 0x151CFFD8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_15:
L_151CFFDC:
    // 0x151CFFDC: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x151CFFE0: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x151CFFE4: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x151CFFE8: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x151CFFEC: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x151CFFF0: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x151CFFF4: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x151CFFF8: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x151CFFFC: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x151D0000: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x151D0004: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x151D0008: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x151D000C: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x151D0010: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x151D0014: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x151D0018: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x151D001C: jr          $ra
    // 0x151D0020: addiu       $sp, $sp, 0x248
    ctx->r29 = ADD32(ctx->r29, 0X248);
    return;
    return;
    // 0x151D0020: addiu       $sp, $sp, 0x248
    ctx->r29 = ADD32(ctx->r29, 0X248);
;}
RECOMP_FUNC void func_15001460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15001460: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x15001464: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15001468: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x1500146C: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x15001470: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x15001474: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x15001478: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x1500147C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x15001480: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x15001484: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x15001488: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x1500148C: sw          $a0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r4;
    // 0x15001490: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x15001494: beql        $t6, $zero, L_15001944
    if (ctx->r14 == 0) {
        // 0x15001498: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15001944;
    }
    goto skip_0;
    // 0x15001498: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x1500149C: lw          $t7, 0x138($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X138);
    // 0x150014A0: sw          $zero, 0x134($sp)
    MEM_W(0X134, ctx->r29) = 0;
    // 0x150014A4: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x150014A8: lb          $t8, 0x0($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X0);
    // 0x150014AC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x150014B0: lw          $s1, -0x41C8($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X41C8);
    // 0x150014B4: beq         $t8, $at, L_15001938
    if (ctx->r24 == ctx->r1) {
        // 0x150014B8: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_15001938;
    }
    // 0x150014B8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x150014BC: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x150014C0: addiu       $s6, $s6, -0x41C4
    ctx->r22 = ADD32(ctx->r22, -0X41C4);
    // 0x150014C4: lb          $v1, 0x0($t7)
    ctx->r3 = MEM_B(ctx->r15, 0X0);
    // 0x150014C8: addiu       $ra, $zero, 0x7FFF
    ctx->r31 = ADD32(0, 0X7FFF);
    // 0x150014CC: addiu       $fp, $zero, -0x8000
    ctx->r30 = ADD32(0, -0X8000);
    // 0x150014D0: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x150014D4: addiu       $s5, $sp, 0x76
    ctx->r21 = ADD32(ctx->r29, 0X76);
    // 0x150014D8: addiu       $s4, $sp, 0x78
    ctx->r20 = ADD32(ctx->r29, 0X78);
    // 0x150014DC: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x150014E0: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x150014E4: addiu       $t2, $sp, 0x94
    ctx->r10 = ADD32(ctx->r29, 0X94);
    // 0x150014E8: sra         $t9, $v1, 4
    ctx->r25 = S32(SIGNED(ctx->r3) >> 4);
L_150014EC:
    // 0x150014EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150014F0: sw          $zero, 0x120($sp)
    MEM_W(0X120, ctx->r29) = 0;
    // 0x150014F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150014F8: bne         $t9, $at, L_150015D4
    if (ctx->r25 != ctx->r1) {
        // 0x150014FC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150015D4;
    }
    // 0x150014FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15001500: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x15001504: srl         $t8, $t6, 25
    ctx->r24 = S32(U32(ctx->r14) >> 25);
    // 0x15001508: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x1500150C: sh          $t7, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r15;
    // 0x15001510: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x15001514: srl         $t6, $t9, 20
    ctx->r14 = S32(U32(ctx->r25) >> 20);
    // 0x15001518: andi        $t8, $t6, 0x1F
    ctx->r24 = ctx->r14 & 0X1F;
    // 0x1500151C: sh          $t8, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r24;
    // 0x15001520: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x15001524: srl         $t9, $t7, 15
    ctx->r25 = S32(U32(ctx->r15) >> 15);
    // 0x15001528: andi        $t6, $t9, 0x1F
    ctx->r14 = ctx->r25 & 0X1F;
    // 0x1500152C: sh          $t6, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r14;
    // 0x15001530: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x15001534: srl         $t7, $t8, 10
    ctx->r15 = S32(U32(ctx->r24) >> 10);
    // 0x15001538: andi        $t9, $t7, 0x1F
    ctx->r25 = ctx->r15 & 0X1F;
    // 0x1500153C: sh          $t9, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r25;
    // 0x15001540: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x15001544: srl         $t8, $t6, 5
    ctx->r24 = S32(U32(ctx->r14) >> 5);
    // 0x15001548: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x1500154C: sh          $t7, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r15;
    // 0x15001550: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x15001554: andi        $t6, $t9, 0x1F
    ctx->r14 = ctx->r25 & 0X1F;
    // 0x15001558: sh          $t6, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r14;
    // 0x1500155C: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x15001560: srl         $t7, $t8, 10
    ctx->r15 = S32(U32(ctx->r24) >> 10);
    // 0x15001564: andi        $t9, $t7, 0x1F
    ctx->r25 = ctx->r15 & 0X1F;
    // 0x15001568: sh          $t9, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r25;
    // 0x1500156C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x15001570: srl         $t8, $t6, 5
    ctx->r24 = S32(U32(ctx->r14) >> 5);
    // 0x15001574: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x15001578: sh          $t7, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r15;
    // 0x1500157C: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x15001580: andi        $t6, $t9, 0x1F
    ctx->r14 = ctx->r25 & 0X1F;
    // 0x15001584: sh          $t6, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r14;
    // 0x15001588: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x1500158C: srl         $t7, $t8, 23
    ctx->r15 = S32(U32(ctx->r24) >> 23);
    // 0x15001590: andi        $t9, $t7, 0x1F
    ctx->r25 = ctx->r15 & 0X1F;
    // 0x15001594: sh          $t9, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r25;
    // 0x15001598: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1500159C: srl         $t8, $t6, 18
    ctx->r24 = S32(U32(ctx->r14) >> 18);
    // 0x150015A0: andi        $t7, $t8, 0x1F
    ctx->r15 = ctx->r24 & 0X1F;
    // 0x150015A4: sh          $t7, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r15;
    // 0x150015A8: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x150015AC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x150015B0: srl         $t6, $t9, 30
    ctx->r14 = S32(U32(ctx->r25) >> 30);
    // 0x150015B4: andi        $t8, $t6, 0x3
    ctx->r24 = ctx->r14 & 0X3;
    // 0x150015B8: srl         $t9, $t7, 13
    ctx->r25 = S32(U32(ctx->r15) >> 13);
    // 0x150015BC: andi        $t6, $t9, 0x1C
    ctx->r14 = ctx->r25 & 0X1C;
    // 0x150015C0: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x150015C4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x150015C8: sh          $t7, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r15;
    // 0x150015CC: b           L_1500171C
    // 0x150015D0: sw          $t9, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r25;
        goto L_1500171C;
    // 0x150015D0: sw          $t9, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r25;
L_150015D4:
    // 0x150015D4: bne         $v0, $s3, L_15001648
    if (ctx->r2 != ctx->r19) {
        // 0x150015D8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15001648;
    }
    // 0x150015D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150015DC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x150015E0: srl         $t6, $t8, 17
    ctx->r14 = S32(U32(ctx->r24) >> 17);
    // 0x150015E4: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    // 0x150015E8: sh          $t7, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r15;
    // 0x150015EC: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x150015F0: srl         $t8, $t9, 9
    ctx->r24 = S32(U32(ctx->r25) >> 9);
    // 0x150015F4: andi        $t6, $t8, 0x1F
    ctx->r14 = ctx->r24 & 0X1F;
    // 0x150015F8: sh          $t6, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r14;
    // 0x150015FC: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x15001600: srl         $t9, $t7, 1
    ctx->r25 = S32(U32(ctx->r15) >> 1);
    // 0x15001604: andi        $t8, $t9, 0x1F
    ctx->r24 = ctx->r25 & 0X1F;
    // 0x15001608: sh          $t8, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r24;
    // 0x1500160C: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x15001610: srl         $t7, $t6, 17
    ctx->r15 = S32(U32(ctx->r14) >> 17);
    // 0x15001614: andi        $t9, $t7, 0x1F
    ctx->r25 = ctx->r15 & 0X1F;
    // 0x15001618: sh          $t9, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r25;
    // 0x1500161C: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x15001620: srl         $t6, $t8, 9
    ctx->r14 = S32(U32(ctx->r24) >> 9);
    // 0x15001624: andi        $t7, $t6, 0x1F
    ctx->r15 = ctx->r14 & 0X1F;
    // 0x15001628: sh          $t7, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r15;
    // 0x1500162C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x15001630: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15001634: sw          $t7, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r15;
    // 0x15001638: srl         $t8, $t9, 1
    ctx->r24 = S32(U32(ctx->r25) >> 1);
    // 0x1500163C: andi        $t6, $t8, 0x1F
    ctx->r14 = ctx->r24 & 0X1F;
    // 0x15001640: b           L_1500171C
    // 0x15001644: sh          $t6, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r14;
        goto L_1500171C;
    // 0x15001644: sh          $t6, 0x82($sp)
    MEM_H(0X82, ctx->r29) = ctx->r14;
L_15001648:
    // 0x15001648: bnel        $v0, $at, L_150016E8
    if (ctx->r2 != ctx->r1) {
        // 0x1500164C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_150016E8;
    }
    goto skip_1;
    // 0x1500164C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    skip_1:
    // 0x15001650: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x15001654: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15001658: srl         $v0, $v1, 24
    ctx->r2 = S32(U32(ctx->r3) >> 24);
    // 0x1500165C: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x15001660: beq         $t9, $zero, L_15001684
    if (ctx->r25 == 0) {
        // 0x15001664: sll         $t8, $t9, 2
        ctx->r24 = S32(ctx->r25 << 2);
            goto L_15001684;
    }
    // 0x15001664: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x15001668: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x1500166C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15001670: lbu         $t9, 0x2C68($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2C68);
    // 0x15001674: lw          $t6, 0x2C28($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2C28);
    // 0x15001678: sll         $t8, $t9, 24
    ctx->r24 = S32(ctx->r25 << 24);
    // 0x1500167C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15001680: subu        $v1, $t7, $t8
    ctx->r3 = SUB32(ctx->r15, ctx->r24);
L_15001684:
    // 0x15001684: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x15001688: sra         $a0, $a2, 12
    ctx->r4 = S32(SIGNED(ctx->r6) >> 12);
    // 0x1500168C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15001690: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x15001694: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15001698: sra         $v0, $a2, 1
    ctx->r2 = S32(SIGNED(ctx->r6) >> 1);
    // 0x1500169C: andi        $t9, $v0, 0x7F
    ctx->r25 = ctx->r2 & 0X7F;
    // 0x150016A0: subu        $v0, $t9, $a0
    ctx->r2 = SUB32(ctx->r25, ctx->r4);
    // 0x150016A4: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x150016A8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150016AC: slt         $at, $t8, $a0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x150016B0: beq         $at, $zero, L_1500171C
    if (ctx->r1 == 0) {
        // 0x150016B4: sll         $t6, $t8, 2
        ctx->r14 = S32(ctx->r24 << 2);
            goto L_1500171C;
    }
    // 0x150016B4: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x150016B8: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x150016BC: addiu       $t7, $sp, 0x94
    ctx->r15 = ADD32(ctx->r29, 0X94);
    // 0x150016C0: addu        $a1, $t9, $t7
    ctx->r5 = ADD32(ctx->r25, ctx->r15);
    // 0x150016C4: addu        $v0, $t2, $t6
    ctx->r2 = ADD32(ctx->r10, ctx->r14);
L_150016C8:
    // 0x150016C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x150016CC: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x150016D0: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x150016D4: bne         $at, $zero, L_150016C8
    if (ctx->r1 != 0) {
        // 0x150016D8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_150016C8;
    }
    // 0x150016D8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x150016DC: b           L_15001720
    // 0x150016E0: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
        goto L_15001720;
    // 0x150016E0: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
    // 0x150016E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_150016E8:
    // 0x150016E8: bne         $v0, $at, L_1500171C
    if (ctx->r2 != ctx->r1) {
        // 0x150016EC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_1500171C;
    }
    // 0x150016EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150016F0: addiu       $v0, $sp, 0x78
    ctx->r2 = ADD32(ctx->r29, 0X78);
    // 0x150016F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_150016F8:
    // 0x150016F8: addu        $t8, $a1, $v1
    ctx->r24 = ADD32(ctx->r5, ctx->r3);
    // 0x150016FC: lbu         $t6, 0x1($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X1);
    // 0x15001700: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15001704: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x15001708: sra         $t9, $t6, 1
    ctx->r25 = S32(SIGNED(ctx->r14) >> 1);
    // 0x1500170C: bne         $v1, $a0, L_150016F8
    if (ctx->r3 != ctx->r4) {
        // 0x15001710: sh          $t9, -0x2($v0)
        MEM_H(-0X2, ctx->r2) = ctx->r25;
            goto L_150016F8;
    }
    // 0x15001710: sh          $t9, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r25;
    // 0x15001714: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15001718: sw          $t7, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r15;
L_1500171C:
    // 0x1500171C: lw          $t8, 0x120($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X120);
L_15001720:
    // 0x15001720: addiu       $t5, $sp, 0x78
    ctx->r13 = ADD32(ctx->r29, 0X78);
    // 0x15001724: sll         $s2, $s1, 3
    ctx->r18 = S32(ctx->r17 << 3);
    // 0x15001728: blez        $t8, L_15001910
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1500172C: sll         $t6, $s1, 2
        ctx->r14 = S32(ctx->r17 << 2);
            goto L_15001910;
    }
    // 0x1500172C: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x15001730: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_15001734:
    // 0x15001734: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x15001738: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x1500173C: ori         $at, $at, 0x1
    ctx->r1 = ctx->r1 | 0X1;
    // 0x15001740: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x15001744: bne         $at, $zero, L_1500183C
    if (ctx->r1 != 0) {
        // 0x15001748: lui         $t4, 0x800E
        ctx->r12 = S32(0X800E << 16);
            goto L_1500183C;
    }
    // 0x15001748: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1500174C: lbu         $t4, -0x419D($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X419D);
    // 0x15001750: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x15001754: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x15001758: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
L_1500175C:
    // 0x1500175C: bnel        $t4, $zero, L_15001828
    if (ctx->r12 != 0) {
        // 0x15001760: sh          $fp, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r30;
            goto L_15001828;
    }
    goto skip_2;
    // 0x15001760: sh          $fp, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r30;
    skip_2:
    // 0x15001764: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15001768: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1500176C: addiu       $t0, $t5, 0x2
    ctx->r8 = ADD32(ctx->r13, 0X2);
    // 0x15001770: mflo        $t7
    ctx->r15 = lo;
    // 0x15001774: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x15001778: lh          $t6, 0x0($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X0);
    // 0x1500177C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x15001780: addu        $t7, $t2, $t9
    ctx->r15 = ADD32(ctx->r10, ctx->r25);
    // 0x15001784: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x15001788: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x1500178C: lh          $v0, 0x0($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X0);
    // 0x15001790: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x15001794: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_15001798:
    // 0x15001798: lh          $t9, 0x0($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X0);
    // 0x1500179C: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x150017A0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x150017A4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x150017A8: addu        $t8, $t2, $t7
    ctx->r24 = ADD32(ctx->r10, ctx->r15);
    // 0x150017AC: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x150017B0: addu        $v1, $t6, $t1
    ctx->r3 = ADD32(ctx->r14, ctx->r9);
    // 0x150017B4: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x150017B8: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x150017BC: beql        $at, $zero, L_150017D8
    if (ctx->r1 == 0) {
        // 0x150017C0: lh          $t9, 0x0($a2)
        ctx->r25 = MEM_H(ctx->r6, 0X0);
            goto L_150017D8;
    }
    goto skip_3;
    // 0x150017C0: lh          $t9, 0x0($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X0);
    skip_3:
    // 0x150017C4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x150017C8: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x150017CC: b           L_150017EC
    // 0x150017D0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
        goto L_150017EC;
    // 0x150017D0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x150017D4: lh          $t9, 0x0($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X0);
L_150017D8:
    // 0x150017D8: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150017DC: beql        $at, $zero, L_150017F0
    if (ctx->r1 == 0) {
        // 0x150017E0: slt         $at, $v0, $a0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_150017F0;
    }
    goto skip_4;
    // 0x150017E0: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    skip_4:
    // 0x150017E4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x150017E8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
L_150017EC:
    // 0x150017EC: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
L_150017F0:
    // 0x150017F0: beql        $at, $zero, L_15001804
    if (ctx->r1 == 0) {
        // 0x150017F4: lh          $t7, 0x0($a2)
        ctx->r15 = MEM_H(ctx->r6, 0X0);
            goto L_15001804;
    }
    goto skip_5;
    // 0x150017F4: lh          $t7, 0x0($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X0);
    skip_5:
    // 0x150017F8: b           L_15001814
    // 0x150017FC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_15001814;
    // 0x150017FC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x15001800: lh          $t7, 0x0($a2)
    ctx->r15 = MEM_H(ctx->r6, 0X0);
L_15001804:
    // 0x15001804: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x15001808: beq         $at, $zero, L_15001814
    if (ctx->r1 == 0) {
        // 0x1500180C: nop
    
            goto L_15001814;
    }
    // 0x1500180C: nop

    // 0x15001810: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_15001814:
    // 0x15001814: bne         $a3, $t3, L_15001798
    if (ctx->r7 != ctx->r11) {
        // 0x15001818: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_15001798;
    }
    // 0x15001818: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x1500181C: b           L_15001830
    // 0x15001820: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
        goto L_15001830;
    // 0x15001820: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x15001824: sh          $fp, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r30;
L_15001828:
    // 0x15001828: sh          $ra, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r31;
    // 0x1500182C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
L_15001830:
    // 0x15001830: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x15001834: bne         $a1, $s5, L_1500175C
    if (ctx->r5 != ctx->r21) {
        // 0x15001838: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_1500175C;
    }
    // 0x15001838: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
L_1500183C:
    // 0x1500183C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15001840: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_15001844:
    // 0x15001844: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x15001848: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1500184C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x15001850: addu        $t9, $t2, $t6
    ctx->r25 = ADD32(ctx->r10, ctx->r14);
    // 0x15001854: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x15001858: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x1500185C: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x15001860: lw          $t7, 0x0($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X0);
    // 0x15001864: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15001868: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x1500186C: addu        $t8, $t9, $v0
    ctx->r24 = ADD32(ctx->r25, ctx->r2);
    // 0x15001870: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x15001874: bne         $v0, $s7, L_15001844
    if (ctx->r2 != ctx->r23) {
        // 0x15001878: sw          $t7, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->r15;
            goto L_15001844;
    }
    // 0x15001878: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x1500187C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15001880: addiu       $v0, $v0, -0x41C0
    ctx->r2 = ADD32(ctx->r2, -0X41C0);
    // 0x15001884: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x15001888: lh          $t6, 0x70($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X70);
    // 0x1500188C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x15001890: addu        $t7, $t9, $s2
    ctx->r15 = ADD32(ctx->r25, ctx->r18);
    // 0x15001894: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x15001898: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x1500189C: lh          $t8, 0x68($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X68);
    // 0x150018A0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150018A4: addu        $t6, $t9, $s2
    ctx->r14 = ADD32(ctx->r25, ctx->r18);
    // 0x150018A8: sh          $t8, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r24;
    // 0x150018AC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x150018B0: lh          $t7, 0x74($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X74);
    // 0x150018B4: addiu       $v1, $v1, -0x41BC
    ctx->r3 = ADD32(ctx->r3, -0X41BC);
    // 0x150018B8: addu        $t8, $t9, $s2
    ctx->r24 = ADD32(ctx->r25, ctx->r18);
    // 0x150018BC: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x150018C0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x150018C4: lh          $t6, 0x6C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X6C);
    // 0x150018C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150018CC: addu        $t7, $t9, $s2
    ctx->r15 = ADD32(ctx->r25, ctx->r18);
    // 0x150018D0: sh          $t6, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r14;
    // 0x150018D4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150018D8: lh          $t8, 0x72($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X72);
    // 0x150018DC: addiu       $t5, $t5, 0x6
    ctx->r13 = ADD32(ctx->r13, 0X6);
    // 0x150018E0: addu        $t6, $t9, $a0
    ctx->r14 = ADD32(ctx->r25, ctx->r4);
    // 0x150018E4: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x150018E8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150018EC: lh          $t7, 0x6A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6A);
    // 0x150018F0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150018F4: addu        $t8, $t9, $a0
    ctx->r24 = ADD32(ctx->r25, ctx->r4);
    // 0x150018F8: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x150018FC: lw          $t6, 0x120($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X120);
    // 0x15001900: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15001904: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x15001908: bne         $s0, $t6, L_15001734
    if (ctx->r16 != ctx->r14) {
        // 0x1500190C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_15001734;
    }
    // 0x1500190C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_15001910:
    // 0x15001910: lw          $t9, 0x134($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X134);
    // 0x15001914: lw          $t6, 0x138($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X138);
    // 0x15001918: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x1500191C: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x15001920: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x15001924: sw          $t7, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r15;
    // 0x15001928: addu        $a1, $t8, $t6
    ctx->r5 = ADD32(ctx->r24, ctx->r14);
    // 0x1500192C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x15001930: bnel        $v1, $at, L_150014EC
    if (ctx->r3 != ctx->r1) {
        // 0x15001934: sra         $t9, $v1, 4
        ctx->r25 = S32(SIGNED(ctx->r3) >> 4);
            goto L_150014EC;
    }
    goto skip_6;
    // 0x15001934: sra         $t9, $v1, 4
    ctx->r25 = S32(SIGNED(ctx->r3) >> 4);
    skip_6:
L_15001938:
    // 0x15001938: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500193C: sw          $s1, -0x41C8($at)
    MEM_W(-0X41C8, ctx->r1) = ctx->r17;
    // 0x15001940: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15001944:
    // 0x15001944: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x15001948: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x1500194C: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x15001950: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x15001954: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x15001958: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x1500195C: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x15001960: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x15001964: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x15001968: jr          $ra
    // 0x1500196C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x1500196C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_15170F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15170F4C: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x15170F50: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15170F54: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x15170F58: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x15170F5C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15170F60: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15170F64: andi        $s5, $a1, 0xFF
    ctx->r21 = ctx->r5 & 0XFF;
    // 0x15170F68: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x15170F6C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15170F70: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x15170F74: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x15170F78: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x15170F7C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x15170F80: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x15170F84: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x15170F88: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x15170F8C: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x15170F90: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x15170F94: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15170F98: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15170F9C: sw          $a1, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r5;
    // 0x15170FA0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15170FA4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x15170FA8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15170FAC: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x15170FB0: sb          $t6, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r14;
    // 0x15170FB4: sb          $t7, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r15;
    // 0x15170FB8: sb          $t8, 0xDF($sp)
    MEM_B(0XDF, ctx->r29) = ctx->r24;
    // 0x15170FBC: sb          $zero, 0xDD($sp)
    MEM_B(0XDD, ctx->r29) = 0;
    // 0x15170FC0: lh          $t9, 0x10($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X10);
    // 0x15170FC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15170FC8: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x15170FCC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15170FD0: addiu       $t2, $zero, 0x3C
    ctx->r10 = ADD32(0, 0X3C);
    // 0x15170FD4: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x15170FD8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15170FDC: lwc1        $f4, 0x6F98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6F98);
    // 0x15170FE0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15170FE4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15170FE8: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
    // 0x15170FEC: addiu       $s0, $s0, 0x6ED8
    ctx->r16 = ADD32(ctx->r16, 0X6ED8);
    // 0x15170FF0: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x15170FF4: lh          $t0, 0x12($a3)
    ctx->r8 = MEM_H(ctx->r7, 0X12);
    // 0x15170FF8: lwc1        $f6, 0x6F9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6F9C);
    // 0x15170FFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15171000: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x15171004: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15171008: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
    // 0x1517100C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15171010: lwc1        $f8, 0x6FA0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6FA0);
    // 0x15171014: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15171018: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x1517101C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15171020: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15171024: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x15171028: lh          $t1, 0x14($a3)
    ctx->r9 = MEM_H(ctx->r7, 0X14);
    // 0x1517102C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15171030: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x15171034: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x15171038: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517103C: lwc1        $f24, 0x6FA4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6FA4);
    // 0x15171040: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15171044: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15171048: lwc1        $f22, 0x6FA8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6FA8);
    // 0x1517104C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15171050: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x15171054: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x15171058: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x1517105C: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x15171060: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x15171064: swc1        $f2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f2.u32l;
    // 0x15171068: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x1517106C: sw          $t2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r10;
    // 0x15171070: sb          $t3, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r11;
    // 0x15171074: sb          $t4, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r12;
    // 0x15171078: sb          $zero, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = 0;
    // 0x1517107C: sb          $zero, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = 0;
    // 0x15171080: sb          $zero, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = 0;
    // 0x15171084: lwc1        $f20, 0x6FAC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6FAC);
    // 0x15171088: sw          $a3, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r7;
    // 0x1517108C: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x15171090: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    // 0x15171094: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
L_15171098:
    // 0x15171098: jal         0x1518C900
    // 0x1517109C: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    func_1518C900(rdram, ctx);
        goto after_0;
    // 0x1517109C: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    after_0:
    // 0x151710A0: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x151710A4: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151710A8: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151710AC: sb          $t5, 0xDE($sp)
    MEM_B(0XDE, ctx->r29) = ctx->r13;
    // 0x151710B0: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151710B4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x151710B8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151710BC: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151710C0: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x151710C4: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151710C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151710CC: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x151710D0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151710D4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151710D8: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x151710DC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151710E0: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x151710E4: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x151710E8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151710EC: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x151710F0: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151710F4: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x151710F8: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151710FC: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15171100: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    // 0x15171104: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15171108: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x1517110C: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15171110: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15171114: mul.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x15171118: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x1517111C: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15171120: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x15171124: jal         0x150ADA68
    // 0x15171128: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x15171128: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x1517112C: mul.s       $f16, $f0, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x15171130: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15171134: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15171138: nop

    // 0x1517113C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15171140: jal         0x150ADA68
    // 0x15171144: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x15171144: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x15171148: mul.s       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x1517114C: sw          $s2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r18;
    // 0x15171150: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15171154: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    // 0x15171158: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x1517115C: sub.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f30.fl;
    // 0x15171160: jal         0x15168BE4
    // 0x15171164: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    func_15168BE4(rdram, ctx);
        goto after_3;
    // 0x15171164: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x15171168: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1517116C: slt         $at, $s1, $s4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x15171170: bne         $at, $zero, L_15171098
    if (ctx->r1 != 0) {
        // 0x15171174: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_15171098;
    }
    // 0x15171174: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x15171178: lw          $t7, 0xE8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE8);
    // 0x1517117C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15171180: sb          $t6, 0x6E($t7)
    MEM_B(0X6E, ctx->r15) = ctx->r14;
    // 0x15171184: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x15171188: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x1517118C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15171190: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15171194: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x15171198: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x1517119C: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x151711A0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x151711A4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x151711A8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x151711AC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x151711B0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x151711B4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x151711B8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x151711BC: jr          $ra
    // 0x151711C0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    return;
    // 0x151711C0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_1516434C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516434C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15164350: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15164354: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x15164358: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1516435C: bne         $a2, $at, L_151643A0
    if (ctx->r6 != ctx->r1) {
        // 0x15164360: addiu       $v0, $a0, 0x18
        ctx->r2 = ADD32(ctx->r4, 0X18);
            goto L_151643A0;
    }
    // 0x15164360: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x15164364: lbu         $t7, 0x4($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X4);
    // 0x15164368: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x1516436C: bne         $t7, $t8, L_151643A0
    if (ctx->r15 != ctx->r24) {
        // 0x15164370: nop
    
            goto L_151643A0;
    }
    // 0x15164370: nop

    // 0x15164374: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15164378: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1516437C: lw          $t0, 0x14($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X14);
    // 0x15164380: lbu         $t9, 0x5($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X5);
    // 0x15164384: sb          $t9, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r25;
    // 0x15164388: lw          $t2, 0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X14);
    // 0x1516438C: lbu         $t1, 0x6($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X6);
    // 0x15164390: sb          $t1, 0x6($t2)
    MEM_B(0X6, ctx->r10) = ctx->r9;
    // 0x15164394: lw          $t4, 0x14($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X14);
    // 0x15164398: lbu         $t3, 0x7($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X7);
    // 0x1516439C: sb          $t3, 0x7($t4)
    MEM_B(0X7, ctx->r12) = ctx->r11;
L_151643A0:
    // 0x151643A0: jr          $ra
    // 0x151643A4: nop

    return;
    return;
    // 0x151643A4: nop

;}
RECOMP_FUNC void func_10006240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10006240: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x10006244: sw          $ra, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r31;
    // 0x10006248: jal         0x1000625C
    // 0x1000624C: nop

    func_1000625C(rdram, ctx);
        goto after_0;
    // 0x1000624C: nop

    after_0:
    // 0x10006250: lw          $ra, 0x0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X0);
    // 0x10006254: jr          $ra
    // 0x10006258: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x10006258: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_15080500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15080500: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15080504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15080508: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1508050C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15080510: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15080514: beql        $s0, $zero, L_15080610
    if (ctx->r16 == 0) {
        // 0x15080518: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15080610;
    }
    goto skip_0;
    // 0x15080518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1508051C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15080520: beql        $t6, $zero, L_15080610
    if (ctx->r14 == 0) {
        // 0x15080524: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15080610;
    }
    goto skip_1;
    // 0x15080524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x15080528: lbu         $t7, 0x127($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X127);
    // 0x1508052C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15080530: beq         $t7, $at, L_1508060C
    if (ctx->r15 == ctx->r1) {
        // 0x15080534: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_1508060C;
    }
    // 0x15080534: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x15080538: beq         $a3, $at, L_15080548
    if (ctx->r7 == ctx->r1) {
        // 0x1508053C: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_15080548;
    }
    // 0x1508053C: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x15080540: bne         $a3, $at, L_15080560
    if (ctx->r7 != ctx->r1) {
        // 0x15080544: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_15080560;
    }
    // 0x15080544: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_15080548:
    // 0x15080548: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1508054C: sb          $a3, 0x1940($at)
    MEM_B(0X1940, ctx->r1) = ctx->r7;
    // 0x15080550: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15080554: sw          $a1, 0x199C($at)
    MEM_W(0X199C, ctx->r1) = ctx->r5;
    // 0x15080558: b           L_150805A8
    // 0x1508055C: addiu       $a3, $zero, 0x2A
    ctx->r7 = ADD32(0, 0X2A);
        goto L_150805A8;
    // 0x1508055C: addiu       $a3, $zero, 0x2A
    ctx->r7 = ADD32(0, 0X2A);
L_15080560:
    // 0x15080560: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15080564: jal         0x15080738
    // 0x15080568: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_15080738(rdram, ctx);
        goto after_0;
    // 0x15080568: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x1508056C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x15080570: beq         $v0, $zero, L_150805A8
    if (ctx->r2 == 0) {
        // 0x15080574: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_150805A8;
    }
    // 0x15080574: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x15080578: sra         $t8, $a3, 3
    ctx->r24 = S32(SIGNED(ctx->r7) >> 3);
    // 0x1508057C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15080580: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15080584: lbu         $t9, 0x2E60($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X2E60);
    // 0x15080588: andi        $t0, $a3, 0x7
    ctx->r8 = ctx->r7 & 0X7;
    // 0x1508058C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15080590: sllv        $t2, $t1, $t0
    ctx->r10 = S32(ctx->r9 << (ctx->r8 & 31));
    // 0x15080594: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15080598: and         $t3, $t9, $t2
    ctx->r11 = ctx->r25 & ctx->r10;
    // 0x1508059C: bne         $t3, $zero, L_150805A8
    if (ctx->r11 != 0) {
        // 0x150805A0: sb          $a3, 0x1940($at)
        MEM_B(0X1940, ctx->r1) = ctx->r7;
            goto L_150805A8;
    }
    // 0x150805A0: sb          $a3, 0x1940($at)
    MEM_B(0X1940, ctx->r1) = ctx->r7;
    // 0x150805A4: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
L_150805A8:
    // 0x150805A8: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x150805AC: bnel        $t4, $zero, L_150805D4
    if (ctx->r12 != 0) {
        // 0x150805B0: lw          $v0, 0x31C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X31C);
            goto L_150805D4;
    }
    goto skip_2;
    // 0x150805B0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    skip_2:
    // 0x150805B4: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x150805B8: lbu         $t5, 0x74($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X74);
    // 0x150805BC: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x150805C0: bnel        $t6, $zero, L_15080610
    if (ctx->r14 != 0) {
        // 0x150805C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15080610;
    }
    goto skip_3;
    // 0x150805C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x150805C8: b           L_1508060C
    // 0x150805CC: sb          $a3, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r7;
        goto L_1508060C;
    // 0x150805CC: sb          $a3, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r7;
    // 0x150805D0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_150805D4:
    // 0x150805D4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150805D8: lbu         $t7, 0x75($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X75);
    // 0x150805DC: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x150805E0: bnel        $t8, $zero, L_15080610
    if (ctx->r24 != 0) {
        // 0x150805E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15080610;
    }
    goto skip_4;
    // 0x150805E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x150805E8: sb          $a3, 0x75($v0)
    MEM_B(0X75, ctx->r2) = ctx->r7;
    // 0x150805EC: lw          $t1, 0x3098($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X3098);
    // 0x150805F0: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x150805F4: lw          $t2, 0x31C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X31C);
    // 0x150805F8: subu        $t0, $a1, $t1
    ctx->r8 = SUB32(ctx->r5, ctx->r9);
    // 0x150805FC: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x15080600: mflo        $t9
    ctx->r25 = lo;
    // 0x15080604: sb          $t9, 0x7A($t2)
    MEM_B(0X7A, ctx->r10) = ctx->r25;
    // 0x15080608: nop

L_1508060C:
    // 0x1508060C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15080610:
    // 0x15080610: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15080614: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15080618: jr          $ra
    // 0x1508061C: nop

    return;
    return;
    // 0x1508061C: nop

;}
RECOMP_FUNC void func_150B1484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B1484: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150B1488: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x150B148C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150B1490: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150B1494: lhu         $t6, 0x76($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X76);
    // 0x150B1498: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x150B149C: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x150B14A0: sh          $t6, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r14;
    // 0x150B14A4: lbu         $t8, 0x104($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X104);
    // 0x150B14A8: sb          $t7, 0x80($s0)
    MEM_B(0X80, ctx->r16) = ctx->r15;
    // 0x150B14AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B14B0: bne         $t8, $zero, L_150B1738
    if (ctx->r24 != 0) {
        // 0x150B14B4: lui         $a1, 0x3D4C
        ctx->r5 = S32(0X3D4C << 16);
            goto L_150B1738;
    }
    // 0x150B14B4: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x150B14B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B14BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150B14C0: lbu         $t0, 0x13F($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13F);
    // 0x150B14C4: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150B14C8: lw          $t9, 0x20FC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20FC);
    // 0x150B14CC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x150B14D0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x150B14D4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x150B14D8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x150B14DC: lh          $t3, 0x8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8);
    // 0x150B14E0: lhu         $t4, 0x22C($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X22C);
    // 0x150B14E4: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x150B14E8: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x150B14EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B14F0: bne         $t5, $zero, L_150B1528
    if (ctx->r13 != 0) {
        // 0x150B14F4: add.s       $f12, $f6, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f0.fl;
            goto L_150B1528;
    }
    // 0x150B14F4: add.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x150B14F8: lbu         $t6, 0x223($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X223);
    // 0x150B14FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150B1500: beq         $t6, $at, L_150B151C
    if (ctx->r14 == ctx->r1) {
        // 0x150B1504: lui         $at, 0xBF00
        ctx->r1 = S32(0XBF00 << 16);
            goto L_150B151C;
    }
    // 0x150B1504: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x150B1508: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B150C: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150B1510: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150B1514: b           L_150B1528
    // 0x150B1518: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
        goto L_150B1528;
    // 0x150B1518: swc1        $f16, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f16.u32l;
L_150B151C:
    // 0x150B151C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150B1520: nop

    // 0x150B1524: swc1        $f18, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f18.u32l;
L_150B1528:
    // 0x150B1528: lbu         $v0, 0x223($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X223);
    // 0x150B152C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x150B1530: bnel        $v0, $at, L_150B15E0
    if (ctx->r2 != ctx->r1) {
        // 0x150B1534: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_150B15E0;
    }
    goto skip_0;
    // 0x150B1534: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x150B1538: lbu         $t7, 0x222($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X222);
    // 0x150B153C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150B1540: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x150B1544: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150B1548: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150B154C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150B1550: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x150B1554: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150B1558: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150B155C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150B1560: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150B1564: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150B1568: jal         0x1505A6F8
    // 0x150B156C: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    func_1505A6F8(rdram, ctx);
        goto after_0;
    // 0x150B156C: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    after_0:
    // 0x150B1570: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150B1574: lbu         $t9, 0x222($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X222);
    // 0x150B1578: lh          $t2, 0x224($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X224);
    // 0x150B157C: div.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150B1580: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x150B1584: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x150B1588: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150B158C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x150B1590: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x150B1594: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150B1598: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x150B159C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150B15A0: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x150B15A4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150B15A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150B15AC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x150B15B0: lwc1        $f6, -0x3D18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3D18);
    // 0x150B15B4: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150B15B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150B15BC: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150B15C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150B15C4: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150B15C8: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x150B15CC: div.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150B15D0: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x150B15D4: b           L_150B1728
    // 0x150B15D8: nop

        goto L_150B1728;
    // 0x150B15D8: nop

    // 0x150B15DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_150B15E0:
    // 0x150B15E0: bne         $v0, $at, L_150B15F4
    if (ctx->r2 != ctx->r1) {
        // 0x150B15E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150B15F4;
    }
    // 0x150B15E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B15E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150B15EC: lwc1        $f10, -0x3D18($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3D18);
    // 0x150B15F0: add.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f0.fl;
L_150B15F4:
    // 0x150B15F4: lh          $v1, 0x224($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X224);
    // 0x150B15F8: addiu       $at, $zero, 0x2710
    ctx->r1 = ADD32(0, 0X2710);
    // 0x150B15FC: beql        $v1, $zero, L_150B1690
    if (ctx->r3 == 0) {
        // 0x150B1600: lbu         $t3, 0x100($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X100);
            goto L_150B1690;
    }
    goto skip_1;
    // 0x150B1600: lbu         $t3, 0x100($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X100);
    skip_1:
    // 0x150B1604: bne         $v1, $at, L_150B163C
    if (ctx->r3 != ctx->r1) {
        // 0x150B1608: lui         $t3, 0x800D
        ctx->r11 = S32(0X800D << 16);
            goto L_150B163C;
    }
    // 0x150B1608: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150B160C: lbu         $t4, 0x13F($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X13F);
    // 0x150B1610: lw          $t3, 0x2104($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2104);
    // 0x150B1614: lbu         $t8, 0x21E($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X21E);
    // 0x150B1618: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x150B161C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x150B1620: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x150B1624: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x150B1628: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x150B162C: lh          $t1, 0xA($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA);
    // 0x150B1630: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x150B1634: b           L_150B168C
    // 0x150B1638: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
        goto L_150B168C;
    // 0x150B1638: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
L_150B163C:
    // 0x150B163C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x150B1640: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x150B1644: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x150B1648: beq         $v0, $at, L_150B1670
    if (ctx->r2 == ctx->r1) {
        // 0x150B164C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_150B1670;
    }
    // 0x150B164C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150B1650: beq         $v0, $at, L_150B1670
    if (ctx->r2 == ctx->r1) {
        // 0x150B1654: addiu       $at, $zero, 0xAD
        ctx->r1 = ADD32(0, 0XAD);
            goto L_150B1670;
    }
    // 0x150B1654: addiu       $at, $zero, 0xAD
    ctx->r1 = ADD32(0, 0XAD);
    // 0x150B1658: beq         $v0, $at, L_150B1670
    if (ctx->r2 == ctx->r1) {
        // 0x150B165C: addiu       $at, $zero, 0xAE
        ctx->r1 = ADD32(0, 0XAE);
            goto L_150B1670;
    }
    // 0x150B165C: addiu       $at, $zero, 0xAE
    ctx->r1 = ADD32(0, 0XAE);
    // 0x150B1660: beq         $v0, $at, L_150B1670
    if (ctx->r2 == ctx->r1) {
        // 0x150B1664: addiu       $at, $zero, 0xAF
        ctx->r1 = ADD32(0, 0XAF);
            goto L_150B1670;
    }
    // 0x150B1664: addiu       $at, $zero, 0xAF
    ctx->r1 = ADD32(0, 0XAF);
    // 0x150B1668: bne         $v0, $at, L_150B167C
    if (ctx->r2 != ctx->r1) {
        // 0x150B166C: sll         $t4, $v1, 3
        ctx->r12 = S32(ctx->r3 << 3);
            goto L_150B167C;
    }
    // 0x150B166C: sll         $t4, $v1, 3
    ctx->r12 = S32(ctx->r3 << 3);
L_150B1670:
    // 0x150B1670: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x150B1674: b           L_150B168C
    // 0x150B1678: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
        goto L_150B168C;
    // 0x150B1678: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
L_150B167C:
    // 0x150B167C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x150B1680: lwc1        $f6, 0x180($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X180);
    // 0x150B1684: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B1688: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
L_150B168C:
    // 0x150B168C: lbu         $t3, 0x100($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X100);
L_150B1690:
    // 0x150B1690: andi        $t5, $t3, 0x40
    ctx->r13 = ctx->r11 & 0X40;
    // 0x150B1694: bne         $t5, $zero, L_150B1728
    if (ctx->r13 != 0) {
        // 0x150B1698: nop
    
            goto L_150B1728;
    }
    // 0x150B1698: nop

    // 0x150B169C: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x150B16A0: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x150B16A4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150B16A8: bnel        $t6, $at, L_150B16F4
    if (ctx->r14 != ctx->r1) {
        // 0x150B16AC: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_150B16F4;
    }
    goto skip_2;
    // 0x150B16AC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    skip_2:
    // 0x150B16B0: lbu         $t7, 0x13F($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X13F);
    // 0x150B16B4: lw          $t8, 0x2104($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2104);
    // 0x150B16B8: lbu         $t2, 0x21E($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X21E);
    // 0x150B16BC: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x150B16C0: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x150B16C4: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x150B16C8: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x150B16CC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150B16D0: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x150B16D4: lh          $t5, 0xA($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA);
    // 0x150B16D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B16DC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150B16E0: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x150B16E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150B16E8: b           L_150B1704
    // 0x150B16EC: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
        goto L_150B1704;
    // 0x150B16EC: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150B16F0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
L_150B16F4:
    // 0x150B16F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B16F8: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150B16FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150B1700: nop

L_150B1704:
    // 0x150B1704: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x150B1708: neg.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = -ctx->f2.fl;
    // 0x150B170C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x150B1710: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x150B1714: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x150B1718: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x150B171C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x150B1720: jal         0x15058EA4
    // 0x150B1724: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    func_15058EA4(rdram, ctx);
        goto after_1;
    // 0x150B1724: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    after_1:
L_150B1728:
    // 0x150B1728: jal         0x15056B08
    // 0x150B172C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15056B08(rdram, ctx);
        goto after_2;
    // 0x150B172C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x150B1730: b           L_150B1744
    // 0x150B1734: lhu         $t6, 0x7A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X7A);
        goto L_150B1744;
    // 0x150B1734: lhu         $t6, 0x7A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X7A);
L_150B1738:
    // 0x150B1738: jal         0x150585F0
    // 0x150B173C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_150585F0(rdram, ctx);
        goto after_3;
    // 0x150B173C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_3:
    // 0x150B1740: lhu         $t6, 0x7A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X7A);
L_150B1744:
    // 0x150B1744: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x150B1748: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B174C: addiu       $t7, $t6, 0x4000
    ctx->r15 = ADD32(ctx->r14, 0X4000);
    // 0x150B1750: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x150B1754: sra         $t0, $t8, 16
    ctx->r8 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150B1758: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x150B175C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B1760: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B1764: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150B1768: jal         0x15059140
    // 0x150B176C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    func_15059140(rdram, ctx);
        goto after_4;
    // 0x150B176C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x150B1770: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x150B1774: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150B1778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B177C: beq         $v0, $at, L_150B17A4
    if (ctx->r2 == ctx->r1) {
        // 0x150B1780: addiu       $at, $zero, 0xAD
        ctx->r1 = ADD32(0, 0XAD);
            goto L_150B17A4;
    }
    // 0x150B1780: addiu       $at, $zero, 0xAD
    ctx->r1 = ADD32(0, 0XAD);
    // 0x150B1784: beq         $v0, $at, L_150B17A4
    if (ctx->r2 == ctx->r1) {
        // 0x150B1788: addiu       $at, $zero, 0xAE
        ctx->r1 = ADD32(0, 0XAE);
            goto L_150B17A4;
    }
    // 0x150B1788: addiu       $at, $zero, 0xAE
    ctx->r1 = ADD32(0, 0XAE);
    // 0x150B178C: beq         $v0, $at, L_150B17A4
    if (ctx->r2 == ctx->r1) {
        // 0x150B1790: addiu       $at, $zero, 0xAF
        ctx->r1 = ADD32(0, 0XAF);
            goto L_150B17A4;
    }
    // 0x150B1790: addiu       $at, $zero, 0xAF
    ctx->r1 = ADD32(0, 0XAF);
    // 0x150B1794: beq         $v0, $at, L_150B17A4
    if (ctx->r2 == ctx->r1) {
        // 0x150B1798: addiu       $at, $zero, 0x44
        ctx->r1 = ADD32(0, 0X44);
            goto L_150B17A4;
    }
    // 0x150B1798: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x150B179C: bne         $v0, $at, L_150B17AC
    if (ctx->r2 != ctx->r1) {
        // 0x150B17A0: nop
    
            goto L_150B17AC;
    }
    // 0x150B17A0: nop

L_150B17A4:
    // 0x150B17A4: jal         0x15052760
    // 0x150B17A8: lh          $a1, 0x36($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X36);
    func_15052760(rdram, ctx);
        goto after_5;
    // 0x150B17A8: lh          $a1, 0x36($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X36);
    after_5:
L_150B17AC:
    // 0x150B17AC: jal         0x150535F4
    // 0x150B17B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150535F4(rdram, ctx);
        goto after_6;
    // 0x150B17B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x150B17B4: bne         $v0, $zero, L_150B17C8
    if (ctx->r2 != 0) {
        // 0x150B17B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150B17C8;
    }
    // 0x150B17B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B17BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150B17C0: jal         0x1502178C
    // 0x150B17C4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_1502178C(rdram, ctx);
        goto after_7;
    // 0x150B17C4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_7:
L_150B17C8:
    // 0x150B17C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150B17CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x150B17D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150B17D4: jr          $ra
    // 0x150B17D8: nop

    return;
    return;
    // 0x150B17D8: nop

;}
RECOMP_FUNC void func_15143134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15143134: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15143138: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x1514313C: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x15143140: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x15143144: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15143148: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x1514314C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15143150: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15143154: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x15143158: addiu       $s3, $s3, -0x3600
    ctx->r19 = ADD32(ctx->r19, -0X3600);
    // 0x1514315C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15143160: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15143164: beq         $s0, $zero, L_1514327C
    if (ctx->r16 == 0) {
        // 0x15143168: sw          $t6, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r14;
            goto L_1514327C;
    }
    // 0x15143168: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x1514316C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15143170: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15143174: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15143178: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x1514317C: nop

    // 0x15143180: bc1fl       L_151431B4
    if (!c1cs) {
        // 0x15143184: sw          $t7, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r15;
            goto L_151431B4;
    }
    goto skip_0;
    // 0x15143184: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    skip_0:
    // 0x15143188: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1514318C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x15143190: nop

    // 0x15143194: bc1fl       L_151431B4
    if (!c1cs) {
        // 0x15143198: sw          $t7, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r15;
            goto L_151431B4;
    }
    goto skip_1;
    // 0x15143198: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    skip_1:
    // 0x1514319C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151431A0: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x151431A4: nop

    // 0x151431A8: bc1tl       L_15143280
    if (c1cs) {
        // 0x151431AC: addiu       $t7, $zero, 0x7
        ctx->r15 = ADD32(0, 0X7);
            goto L_15143280;
    }
    goto skip_2;
    // 0x151431AC: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    skip_2:
    // 0x151431B0: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
L_151431B4:
    // 0x151431B4: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151431B8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151431BC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151431C0: swc1        $f10, -0x35F8($at)
    MEM_W(-0X35F8, ctx->r1) = ctx->f10.u32l;
    // 0x151431C4: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151431C8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151431CC: lbu         $t8, 0x3E90($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3E90);
    // 0x151431D0: swc1        $f16, -0x35F4($at)
    MEM_W(-0X35F4, ctx->r1) = ctx->f16.u32l;
    // 0x151431D4: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151431D8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151431DC: beq         $t8, $zero, L_15143238
    if (ctx->r24 == 0) {
        // 0x151431E0: swc1        $f18, -0x35F0($at)
        MEM_W(-0X35F0, ctx->r1) = ctx->f18.u32l;
            goto L_15143238;
    }
    // 0x151431E0: swc1        $f18, -0x35F0($at)
    MEM_W(-0X35F0, ctx->r1) = ctx->f18.u32l;
    // 0x151431E4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x151431E8: sw          $t9, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r25;
    // 0x151431EC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151431F0: sw          $s2, -0x35FC($at)
    MEM_W(-0X35FC, ctx->r1) = ctx->r18;
    // 0x151431F4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x151431F8: jal         0x151EFEB8
    // 0x151431FC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    guMtxL2F(rdram, ctx);
        goto after_0;
    // 0x151431FC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x15143200: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x15143204: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x15143208: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x1514320C: addiu       $t0, $s1, 0x4
    ctx->r8 = ADD32(ctx->r17, 0X4);
    // 0x15143210: addiu       $t1, $s1, 0x8
    ctx->r9 = ADD32(ctx->r17, 0X8);
    // 0x15143214: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15143218: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1514321C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x15143220: jal         0x150A7960
    // 0x15143224: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15143224: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x15143228: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x1514322C: sw          $t2, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r10;
    // 0x15143230: b           L_151432A0
    // 0x15143234: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
        goto L_151432A0;
    // 0x15143234: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
L_15143238:
    // 0x15143238: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x1514323C: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
    // 0x15143240: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15143244: sw          $s2, -0x35FC($at)
    MEM_W(-0X35FC, ctx->r1) = ctx->r18;
    // 0x15143248: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x1514324C: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x15143250: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x15143254: addiu       $t4, $s1, 0x4
    ctx->r12 = ADD32(ctx->r17, 0X4);
    // 0x15143258: addiu       $t5, $s1, 0x8
    ctx->r13 = ADD32(ctx->r17, 0X8);
    // 0x1514325C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15143260: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15143264: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x15143268: jal         0x150A7960
    // 0x1514326C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_150A7960(rdram, ctx);
        goto after_2;
    // 0x1514326C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x15143270: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x15143274: b           L_1514329C
    // 0x15143278: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
        goto L_1514329C;
    // 0x15143278: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
L_1514327C:
    // 0x1514327C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
L_15143280:
    // 0x15143280: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    // 0x15143284: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15143288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1514328C: jal         0x15142314
    // 0x15143290: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_15142314(rdram, ctx);
        goto after_3;
    // 0x15143290: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x15143294: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x15143298: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
L_1514329C:
    // 0x1514329C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
L_151432A0:
    // 0x151432A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151432A4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x151432A8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x151432AC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x151432B0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x151432B4: jr          $ra
    // 0x151432B8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x151432B8: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_15079B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079B30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15079B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15079B38: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15079B3C: lbu         $v1, 0x1891($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1891);
    // 0x15079B40: beq         $v1, $zero, L_15079B50
    if (ctx->r3 == 0) {
        // 0x15079B44: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_15079B50;
    }
    // 0x15079B44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15079B48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15079B4C: bne         $v1, $at, L_15079B60
    if (ctx->r3 != ctx->r1) {
        // 0x15079B50: lui         $t2, 0x800C
        ctx->r10 = S32(0X800C << 16);
            goto L_15079B60;
    }
L_15079B50:
    // 0x15079B50: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15079B54: addiu       $t2, $t2, 0x3E78
    ctx->r10 = ADD32(ctx->r10, 0X3E78);
    // 0x15079B58: b           L_15079B84
    // 0x15079B5C: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
        goto L_15079B84;
    // 0x15079B5C: lbu         $v1, 0x0($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X0);
L_15079B60:
    // 0x15079B60: addiu       $a0, $v1, -0x2
    ctx->r4 = ADD32(ctx->r3, -0X2);
    // 0x15079B64: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15079B68: jal         0x15083FB0
    // 0x15079B6C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_15083FB0(rdram, ctx);
        goto after_0;
    // 0x15079B6C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x15079B70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15079B74: beq         $v0, $at, L_15079F14
    if (ctx->r2 == ctx->r1) {
        // 0x15079B78: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15079F14;
    }
    // 0x15079B78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15079B7C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15079B80: addiu       $t2, $t2, 0x3E78
    ctx->r10 = ADD32(ctx->r10, 0X3E78);
L_15079B84:
    // 0x15079B84: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15079B88: lbu         $t7, 0x1892($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1892);
    // 0x15079B8C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x15079B90: sltiu       $at, $t8, 0xB
    ctx->r1 = ctx->r24 < 0XB ? 1 : 0;
    // 0x15079B94: beq         $at, $zero, L_15079BE8
    if (ctx->r1 == 0) {
        // 0x15079B98: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15079BE8;
    }
    // 0x15079B98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15079B9C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15079BA0: addu        $at, $at, $t8
    gpr jr_addend_15079BA8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15079BA4: lw          $t8, -0x5E64($at)
    ctx->r24 = ADD32(ctx->r1, -0X5E64);
    // 0x15079BA8: jr          $t8
    // 0x15079BAC: nop

    switch (jr_addend_15079BA8 >> 2) {
        case 0: goto L_15079BB0; break;
        case 1: goto L_15079C14; break;
        case 2: goto L_15079C50; break;
        case 3: goto L_15079C8C; break;
        case 4: goto L_15079C8C; break;
        case 5: goto L_15079D38; break;
        case 6: goto L_15079D90; break;
        case 7: goto L_15079DC8; break;
        case 8: goto L_15079E1C; break;
        case 9: goto L_15079E48; break;
        case 10: goto L_15079E6C; break;
        default: switch_error(__func__, 0x15079BA8, 0x8009A19C);
    }
    // 0x15079BAC: nop

L_15079BB0:
    // 0x15079BB0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x15079BB4: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15079BB8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079BBC: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x15079BC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079BC4: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15079BC8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079BCC: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15079BD0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079BD4: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15079BD8: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x15079BDC: addiu       $t3, $t9, 0x2E4
    ctx->r11 = ADD32(ctx->r25, 0X2E4);
    // 0x15079BE0: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x15079BE4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_15079BE8:
    // 0x15079BE8: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15079BEC: lbu         $t5, 0x1893($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1893);
    // 0x15079BF0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x15079BF4: sltiu       $at, $t5, 0x7
    ctx->r1 = ctx->r13 < 0X7 ? 1 : 0;
    // 0x15079BF8: beq         $at, $zero, L_15079F14
    if (ctx->r1 == 0) {
        // 0x15079BFC: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_15079F14;
    }
    // 0x15079BFC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15079C00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15079C04: addu        $at, $at, $t5
    gpr jr_addend_15079C0C = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x15079C08: lw          $t5, -0x5E38($at)
    ctx->r13 = ADD32(ctx->r1, -0X5E38);
    // 0x15079C0C: jr          $t5
    // 0x15079C10: nop

    switch (jr_addend_15079C0C >> 2) {
        case 0: goto L_15079E88; break;
        case 1: goto L_15079E98; break;
        case 2: goto L_15079EA8; break;
        case 3: goto L_15079EC0; break;
        case 4: goto L_15079ED0; break;
        case 5: goto L_15079EE8; break;
        case 6: goto L_15079F00; break;
        default: switch_error(__func__, 0x15079C0C, 0x8009A1C8);
    }
    // 0x15079C10: nop

L_15079C14:
    // 0x15079C14: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15079C18: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x15079C1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079C20: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x15079C24: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079C28: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x15079C2C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079C30: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x15079C34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079C38: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15079C3C: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x15079C40: addiu       $t7, $t6, 0x2E8
    ctx->r15 = ADD32(ctx->r14, 0X2E8);
    // 0x15079C44: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x15079C48: b           L_15079BE8
    // 0x15079C4C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
        goto L_15079BE8;
    // 0x15079C4C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_15079C50:
    // 0x15079C50: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x15079C54: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15079C58: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079C5C: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x15079C60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079C64: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15079C68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079C6C: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x15079C70: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15079C74: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15079C78: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x15079C7C: addiu       $t3, $t9, 0x2EC
    ctx->r11 = ADD32(ctx->r25, 0X2EC);
    // 0x15079C80: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x15079C84: b           L_15079BE8
    // 0x15079C88: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
        goto L_15079BE8;
    // 0x15079C88: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_15079C8C:
    // 0x15079C8C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15079C90: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15079C94: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x15079C98: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x15079C9C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15079CA0: addu        $t5, $t5, $v1
    ctx->r13 = ADD32(ctx->r13, ctx->r3);
    // 0x15079CA4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15079CA8: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x15079CAC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15079CB0: subu        $t5, $t5, $v1
    ctx->r13 = SUB32(ctx->r13, ctx->r3);
    // 0x15079CB4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079CB8: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x15079CBC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15079CC0: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x15079CC4: lbu         $t1, 0x0($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X0);
    // 0x15079CC8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x15079CCC: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x15079CD0: sb          $v1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r3;
    // 0x15079CD4: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x15079CD8: lbu         $a3, 0x1890($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X1890);
    // 0x15079CDC: lbu         $t8, 0x232($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X232);
    // 0x15079CE0: beql        $a3, $t8, L_15079D30
    if (ctx->r7 == ctx->r24) {
        // 0x15079CE4: sb          $t1, 0x0($t2)
        MEM_B(0X0, ctx->r10) = ctx->r9;
            goto L_15079D30;
    }
    goto skip_0;
    // 0x15079CE4: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    skip_0:
    // 0x15079CE8: sb          $a3, 0x232($t7)
    MEM_B(0X232, ctx->r15) = ctx->r7;
    // 0x15079CEC: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x15079CF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15079CF4: lbu         $a1, 0x232($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X232);
    // 0x15079CF8: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x15079CFC: jal         0x1507BB28
    // 0x15079D00: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_1507BB28(rdram, ctx);
        goto after_1;
    // 0x15079D00: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x15079D04: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15079D08: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15079D0C: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x15079D10: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x15079D14: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x15079D18: sw          $v0, 0x218($t3)
    MEM_W(0X218, ctx->r11) = ctx->r2;
    // 0x15079D1C: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x15079D20: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15079D24: addiu       $t2, $t2, 0x3E78
    ctx->r10 = ADD32(ctx->r10, 0X3E78);
    // 0x15079D28: sh          $zero, 0x21C($t4)
    MEM_H(0X21C, ctx->r12) = 0;
    // 0x15079D2C: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
L_15079D30:
    // 0x15079D30: b           L_15079F14
    // 0x15079D34: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
        goto L_15079F14;
    // 0x15079D34: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
L_15079D38:
    // 0x15079D38: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15079D3C: lbu         $t5, 0x1890($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1890);
    // 0x15079D40: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x15079D44: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x15079D48: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x15079D4C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079D50: bgez        $t5, L_15079D68
    if (SIGNED(ctx->r13) >= 0) {
        // 0x15079D54: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15079D68;
    }
    // 0x15079D54: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15079D58: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15079D5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15079D60: nop

    // 0x15079D64: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15079D68:
    // 0x15079D68: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x15079D6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079D70: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x15079D74: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079D78: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x15079D7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079D80: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15079D84: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x15079D88: b           L_15079F14
    // 0x15079D8C: swc1        $f6, -0x3C68($at)
    MEM_W(-0X3C68, ctx->r1) = ctx->f6.u32l;
        goto L_15079F14;
    // 0x15079D8C: swc1        $f6, -0x3C68($at)
    MEM_W(-0X3C68, ctx->r1) = ctx->f6.u32l;
L_15079D90:
    // 0x15079D90: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15079D94: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15079D98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15079D9C: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x15079DA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15079DA4: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15079DA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15079DAC: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15079DB0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x15079DB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15079DB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15079DBC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15079DC0: b           L_15079F14
    // 0x15079DC4: swc1        $f10, -0x3C78($at)
    MEM_W(-0X3C78, ctx->r1) = ctx->f10.u32l;
        goto L_15079F14;
    // 0x15079DC4: swc1        $f10, -0x3C78($at)
    MEM_W(-0X3C78, ctx->r1) = ctx->f10.u32l;
L_15079DC8:
    // 0x15079DC8: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15079DCC: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15079DD0: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x15079DD4: jal         0x15079A98
    // 0x15079DD8: lbu         $a0, 0x222($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X222);
    func_15079A98(rdram, ctx);
        goto after_2;
    // 0x15079DD8: lbu         $a0, 0x222($t8)
    ctx->r4 = MEM_BU(ctx->r24, 0X222);
    after_2:
    // 0x15079DDC: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15079DE0: addiu       $t2, $t2, 0x3E78
    ctx->r10 = ADD32(ctx->r10, 0X3E78);
    // 0x15079DE4: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x15079DE8: jal         0x15079A98
    // 0x15079DEC: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    func_15079A98(rdram, ctx);
        goto after_3;
    // 0x15079DEC: lbu         $a0, 0x0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X0);
    after_3:
    // 0x15079DF0: lhu         $t9, 0x1E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1E);
    // 0x15079DF4: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15079DF8: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15079DFC: subu        $t3, $v0, $t9
    ctx->r11 = SUB32(ctx->r2, ctx->r25);
    // 0x15079E00: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x15079E04: beq         $t4, $zero, L_15079F14
    if (ctx->r12 == 0) {
        // 0x15079E08: lui         $t5, 0x800D
        ctx->r13 = S32(0X800D << 16);
            goto L_15079F14;
    }
    // 0x15079E08: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15079E0C: lbu         $t5, 0x1890($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1890);
    // 0x15079E10: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x15079E14: b           L_15079F14
    // 0x15079E18: sb          $t5, 0x221($t6)
    MEM_B(0X221, ctx->r14) = ctx->r13;
        goto L_15079F14;
    // 0x15079E18: sb          $t5, 0x221($t6)
    MEM_B(0X221, ctx->r14) = ctx->r13;
L_15079E1C:
    // 0x15079E1C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15079E20: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15079E24: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15079E28: lbu         $t7, 0x1893($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1893);
    // 0x15079E2C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15079E30: lbu         $t9, 0x1890($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1890);
    // 0x15079E34: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x15079E38: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x15079E3C: or          $t3, $t8, $t9
    ctx->r11 = ctx->r24 | ctx->r25;
    // 0x15079E40: b           L_15079F14
    // 0x15079E44: sh          $t3, 0x244($t4)
    MEM_H(0X244, ctx->r12) = ctx->r11;
        goto L_15079F14;
    // 0x15079E44: sh          $t3, 0x244($t4)
    MEM_H(0X244, ctx->r12) = ctx->r11;
L_15079E48:
    // 0x15079E48: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15079E4C: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15079E50: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x15079E54: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079E58: lb          $t6, 0x1890($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X1890);
    // 0x15079E5C: lbu         $t5, 0x23D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X23D);
    // 0x15079E60: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x15079E64: b           L_15079F14
    // 0x15079E68: sb          $t7, 0x236($v0)
    MEM_B(0X236, ctx->r2) = ctx->r15;
        goto L_15079F14;
    // 0x15079E68: sb          $t7, 0x236($v0)
    MEM_B(0X236, ctx->r2) = ctx->r15;
L_15079E6C:
    // 0x15079E6C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15079E70: addiu       $a2, $a2, 0x154C
    ctx->r6 = ADD32(ctx->r6, 0X154C);
    // 0x15079E74: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15079E78: lbu         $t8, 0x1890($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1890);
    // 0x15079E7C: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x15079E80: b           L_15079F14
    // 0x15079E84: sb          $t8, 0x22A($t9)
    MEM_B(0X22A, ctx->r25) = ctx->r24;
        goto L_15079F14;
    // 0x15079E84: sb          $t8, 0x22A($t9)
    MEM_B(0X22A, ctx->r25) = ctx->r24;
L_15079E88:
    // 0x15079E88: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15079E8C: lbu         $t3, 0x1890($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X1890);
    // 0x15079E90: b           L_15079F14
    // 0x15079E94: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_15079F14;
    // 0x15079E94: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_15079E98:
    // 0x15079E98: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x15079E9C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x15079EA0: b           L_15079F14
    // 0x15079EA4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
        goto L_15079F14;
    // 0x15079EA4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_15079EA8:
    // 0x15079EA8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x15079EAC: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x15079EB0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x15079EB4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x15079EB8: b           L_15079F14
    // 0x15079EBC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_15079F14;
    // 0x15079EBC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_15079EC0:
    // 0x15079EC0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x15079EC4: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x15079EC8: b           L_15079F14
    // 0x15079ECC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
        goto L_15079F14;
    // 0x15079ECC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
L_15079ED0:
    // 0x15079ED0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15079ED4: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x15079ED8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x15079EDC: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x15079EE0: b           L_15079F14
    // 0x15079EE4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_15079F14;
    // 0x15079EE4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_15079EE8:
    // 0x15079EE8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15079EEC: lh          $t8, -0x3D9C($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X3D9C);
    // 0x15079EF0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15079EF4: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x15079EF8: b           L_15079F14
    // 0x15079EFC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
        goto L_15079F14;
    // 0x15079EFC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_15079F00:
    // 0x15079F00: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x15079F04: lh          $t4, -0x3D9C($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X3D9C);
    // 0x15079F08: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x15079F0C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x15079F10: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_15079F14:
    // 0x15079F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15079F18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15079F1C: jr          $ra
    // 0x15079F20: nop

    return;
    return;
    // 0x15079F20: nop

;}
RECOMP_FUNC void func_150D8FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D8FAC: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x150D8FB0: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x150D8FB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150D8FB8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x150D8FBC: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x150D8FC0: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x150D8FC4: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x150D8FC8: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x150D8FCC: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x150D8FD0: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x150D8FD4: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x150D8FD8: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x150D8FDC: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x150D8FE0: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x150D8FE4: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x150D8FE8: lw          $s1, 0x98($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X98);
    // 0x150D8FEC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150D8FF0: lw          $s5, 0x94($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X94);
    // 0x150D8FF4: lw          $s2, 0x0($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X0);
    // 0x150D8FF8: lw          $t6, 0x31C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X31C);
    // 0x150D8FFC: lbu         $t5, 0x78($t6)
    ctx->r13 = MEM_BU(ctx->r14, 0X78);
    // 0x150D9000: bne         $t5, $at, L_150D9014
    if (ctx->r13 != ctx->r1) {
        // 0x150D9004: nop
    
            goto L_150D9014;
    }
    // 0x150D9004: nop

    // 0x150D9008: lbu         $t7, 0x1CA($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X1CA);
    // 0x150D900C: bgtzl       $t7, L_150D9020
    if (SIGNED(ctx->r15) > 0) {
        // 0x150D9010: lw          $t9, 0x0($s2)
        ctx->r25 = MEM_W(ctx->r18, 0X0);
            goto L_150D9020;
    }
    goto skip_0;
    // 0x150D9010: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    skip_0:
L_150D9014:
    // 0x150D9014: jal         0x150D8E1C
    // 0x150D9018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150D8E1C(rdram, ctx);
        goto after_0;
    // 0x150D9018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x150D901C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
L_150D9020:
    // 0x150D9020: beq         $t9, $zero, L_150D9040
    if (ctx->r25 == 0) {
        // 0x150D9024: nop
    
            goto L_150D9040;
    }
    // 0x150D9024: nop

    // 0x150D9028: lbu         $t8, 0x4($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X4);
    // 0x150D902C: lbu         $t1, 0x3B($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X3B);
    // 0x150D9030: addiu       $s3, $sp, 0xF8
    ctx->r19 = ADD32(ctx->r29, 0XF8);
    // 0x150D9034: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150D9038: beq         $t8, $t1, L_150D9048
    if (ctx->r24 == ctx->r9) {
        // 0x150D903C: nop
    
            goto L_150D9048;
    }
    // 0x150D903C: nop

L_150D9040:
    // 0x150D9040: b           L_150D93F0
    // 0x150D9044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150D93F0;
    // 0x150D9044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150D9048:
    // 0x150D9048: jal         0x150D8B10
    // 0x150D904C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_150D8B10(rdram, ctx);
        goto after_1;
    // 0x150D904C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x150D9050: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150D9054: jal         0x150D8B3C
    // 0x150D9058: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    func_150D8B3C(rdram, ctx);
        goto after_2;
    // 0x150D9058: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    after_2:
    // 0x150D905C: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x150D9060: addiu       $s4, $sp, 0xB8
    ctx->r20 = ADD32(ctx->r29, 0XB8);
    // 0x150D9064: addiu       $v1, $s1, 0x20
    ctx->r3 = ADD32(ctx->r17, 0X20);
    // 0x150D9068: sw          $at, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r1;
    // 0x150D906C: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x150D9070: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x150D9074: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x150D9078: sw          $at, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r1;
    // 0x150D907C: lbu         $t2, 0x4C($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X4C);
    // 0x150D9080: andi        $t4, $t2, 0x1
    ctx->r12 = ctx->r10 & 0X1;
    // 0x150D9084: beql        $t4, $zero, L_150D9130
    if (ctx->r12 == 0) {
        // 0x150D9088: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150D9130;
    }
    goto skip_1;
    // 0x150D9088: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x150D908C: lw          $t6, 0x31C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X31C);
    // 0x150D9090: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150D9094: addiu       $a0, $a0, -0x165C
    ctx->r4 = ADD32(ctx->r4, -0X165C);
    // 0x150D9098: lhu         $v0, 0x8A($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8A);
    // 0x150D909C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D90A0: andi        $t5, $v0, 0x2000
    ctx->r13 = ctx->r2 & 0X2000;
    // 0x150D90A4: beq         $t5, $zero, L_150D90F4
    if (ctx->r13 == 0) {
        // 0x150D90A8: nop
    
            goto L_150D90F4;
    }
    // 0x150D90A8: nop

    // 0x150D90AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D90B0: lwc1        $f0, 0xB54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB54);
    // 0x150D90B4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150D90B8: addiu       $a0, $a0, -0x165C
    ctx->r4 = ADD32(ctx->r4, -0X165C);
    // 0x150D90BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D90C0: lwc1        $f4, 0xB58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XB58);
    // 0x150D90C4: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150D90C8: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150D90CC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150D90D0: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150D90D4: swc1        $f4, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f4.u32l;
    // 0x150D90D8: lwc1        $f6, 0x3C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150D90DC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x150D90E0: nop

    // 0x150D90E4: bc1fl       L_150D9130
    if (!c1cs) {
        // 0x150D90E8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150D9130;
    }
    goto skip_2;
    // 0x150D90E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_2:
    // 0x150D90EC: b           L_150D912C
    // 0x150D90F0: swc1        $f0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f0.u32l;
        goto L_150D912C;
    // 0x150D90F0: swc1        $f0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f0.u32l;
L_150D90F4:
    // 0x150D90F4: lwc1        $f0, 0xB5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0XB5C);
    // 0x150D90F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D90FC: lwc1        $f10, 0xB60($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XB60);
    // 0x150D9100: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150D9104: lwc1        $f6, 0x3C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150D9108: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x150D910C: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x150D9110: swc1        $f10, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f10.u32l;
    // 0x150D9114: lwc1        $f8, 0x3C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150D9118: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x150D911C: nop

    // 0x150D9120: bc1fl       L_150D9130
    if (!c1cs) {
        // 0x150D9124: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150D9130;
    }
    goto skip_3;
    // 0x150D9124: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_3:
    // 0x150D9128: swc1        $f0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f0.u32l;
L_150D912C:
    // 0x150D912C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_150D9130:
    // 0x150D9130: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150D9134: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150D9138: addiu       $a0, $a0, -0x165C
    ctx->r4 = ADD32(ctx->r4, -0X165C);
    // 0x150D913C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D9140: lwc1        $f6, 0xB64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XB64);
    // 0x150D9144: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150D9148: lwc1        $f8, 0x34($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150D914C: addiu       $v0, $s1, 0x14
    ctx->r2 = ADD32(ctx->r17, 0X14);
    // 0x150D9150: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x150D9154: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150D9158: swc1        $f6, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f6.u32l;
    // 0x150D915C: lwc1        $f2, 0x34($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150D9160: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
    // 0x150D9164: nop

    // 0x150D9168: bc1fl       L_150D93F0
    if (!c1cs) {
        // 0x150D916C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150D93F0;
    }
    goto skip_4;
    // 0x150D916C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_4:
    // 0x150D9170: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x150D9174: lwc1        $f4, 0x2C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x150D9178: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150D917C: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x150D9180: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x150D9184: addiu       $t8, $sp, 0xAC
    ctx->r24 = ADD32(ctx->r29, 0XAC);
    // 0x150D9188: add.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150D918C: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x150D9190: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x150D9194: div.s       $f0, $f24, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f24.fl, ctx->f2.fl);
    // 0x150D9198: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x150D919C: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x150D91A0: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x150D91A4: addiu       $s2, $zero, 0x24
    ctx->r18 = ADD32(0, 0X24);
    // 0x150D91A8: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150D91AC: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x150D91B0: sw          $t3, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r11;
    // 0x150D91B4: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x150D91B8: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x150D91BC: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x150D91C0: lwc1        $f10, 0xF8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x150D91C4: lwc1        $f8, 0x18($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X18);
    // 0x150D91C8: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x150D91CC: sub.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x150D91D0: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x150D91D4: lwc1        $f10, 0x100($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X100);
    // 0x150D91D8: sub.s       $f22, $f4, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150D91DC: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150D91E0: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x150D91E4: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x150D91E8: mul.s       $f26, $f18, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150D91EC: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x150D91F0: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x150D91F4: mul.s       $f28, $f22, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x150D91F8: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x150D91FC: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150D9200: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x150D9204: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x150D9208: lwc1        $f10, 0x24($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X24);
    // 0x150D920C: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x150D9210: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150D9214: lwc1        $f10, 0xF4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x150D9218: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x150D921C: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x150D9220: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    // 0x150D9224: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x150D9228: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150D922C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150D9230: mul.s       $f30, $f4, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f30.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150D9234: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x150D9238: mul.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150D923C: nop

    // 0x150D9240: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150D9244: nop

    // 0x150D9248: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150D924C: nop

L_150D9250:
    // 0x150D9250: lb          $t0, 0x2E($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X2E);
    // 0x150D9254: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x150D9258: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x150D925C: multu       $t0, $s2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D9260: mflo        $t2
    ctx->r10 = lo;
    // 0x150D9264: addu        $a0, $t2, $s5
    ctx->r4 = ADD32(ctx->r10, ctx->r21);
    // 0x150D9268: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x150D926C: lw          $t5, 0x4($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X4);
    // 0x150D9270: addiu       $a1, $a0, 0xC
    ctx->r5 = ADD32(ctx->r4, 0XC);
    // 0x150D9274: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x150D9278: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x150D927C: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x150D9280: lwc1        $f4, 0x3C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150D9284: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150D9288: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150D928C: swc1        $f8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f8.u32l;
    // 0x150D9290: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150D9294: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150D9298: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150D929C: swc1        $f6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f6.u32l;
    // 0x150D92A0: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150D92A4: lwc1        $f8, 0x3C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x150D92A8: swc1        $f22, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f22.u32l;
    // 0x150D92AC: sb          $s3, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r19;
    // 0x150D92B0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150D92B4: swc1        $f22, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f22.u32l;
    // 0x150D92B8: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x150D92BC: swc1        $f16, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f16.u32l;
    // 0x150D92C0: swc1        $f14, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f14.u32l;
    // 0x150D92C4: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    // 0x150D92C8: jal         0x150D8D84
    // 0x150D92CC: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    func_150D8D84(rdram, ctx);
        goto after_3;
    // 0x150D92CC: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x150D92D0: lb          $t7, 0x2E($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2E);
    // 0x150D92D4: lwc1        $f16, 0xDC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x150D92D8: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150D92DC: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150D92E0: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150D92E4: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x150D92E8: sb          $t9, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r25;
    // 0x150D92EC: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
    // 0x150D92F0: lbu         $t1, 0x25($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X25);
    // 0x150D92F4: sub.s       $f20, $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f16.fl;
    // 0x150D92F8: bnel        $t1, $v0, L_150D930C
    if (ctx->r9 != ctx->r2) {
        // 0x150D92FC: lb          $t8, 0x2C($s0)
        ctx->r24 = MEM_B(ctx->r16, 0X2C);
            goto L_150D930C;
    }
    goto skip_5;
    // 0x150D92FC: lb          $t8, 0x2C($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2C);
    skip_5:
    // 0x150D9300: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    // 0x150D9304: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
    // 0x150D9308: lb          $t8, 0x2C($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2C);
L_150D930C:
    // 0x150D930C: lb          $v1, 0x2D($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2D);
    // 0x150D9310: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x150D9314: bne         $v1, $v0, L_150D9344
    if (ctx->r3 != ctx->r2) {
        // 0x150D9318: sb          $t3, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r11;
            goto L_150D9344;
    }
    // 0x150D9318: sb          $t3, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r11;
    // 0x150D931C: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x150D9320: sb          $t0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r8;
    // 0x150D9324: lb          $t6, 0x2D($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2D);
    // 0x150D9328: lbu         $t2, 0x25($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X25);
    // 0x150D932C: bnel        $t2, $t6, L_150D933C
    if (ctx->r10 != ctx->r14) {
        // 0x150D9330: lb          $t4, 0x2C($s0)
        ctx->r12 = MEM_B(ctx->r16, 0X2C);
            goto L_150D933C;
    }
    goto skip_6;
    // 0x150D9330: lb          $t4, 0x2C($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2C);
    skip_6:
    // 0x150D9334: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x150D9338: lb          $t4, 0x2C($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2C);
L_150D933C:
    // 0x150D933C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x150D9340: sb          $t5, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r13;
L_150D9344:
    // 0x150D9344: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150D9348: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x150D934C: add.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x150D9350: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150D9354: add.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x150D9358: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150D935C: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x150D9360: add.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x150D9364: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x150D9368: lwc1        $f6, 0xB0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150D936C: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x150D9370: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150D9374: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x150D9378: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x150D937C: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x150D9380: add.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x150D9384: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x150D9388: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x150D938C: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150D9390: sub.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x150D9394: swc1        $f8, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f8.u32l;
    // 0x150D9398: lwc1        $f10, 0x34($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X34);
    // 0x150D939C: c.lt.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl < ctx->f10.fl;
    // 0x150D93A0: nop

    // 0x150D93A4: bc1t        L_150D9250
    if (c1cs) {
        // 0x150D93A8: nop
    
            goto L_150D9250;
    }
    // 0x150D93A8: nop

    // 0x150D93AC: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x150D93B0: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x150D93B4: addiu       $t3, $sp, 0xAC
    ctx->r11 = ADD32(ctx->r29, 0XAC);
    // 0x150D93B8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150D93BC: lw          $t1, 0x4($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X4);
    // 0x150D93C0: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x150D93C4: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x150D93C8: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150D93CC: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x150D93D0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x150D93D4: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150D93D8: lw          $t2, 0x4($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X4);
    // 0x150D93DC: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x150D93E0: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x150D93E4: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x150D93E8: swc1        $f20, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f20.u32l;
    // 0x150D93EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150D93F0:
    // 0x150D93F0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x150D93F4: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x150D93F8: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x150D93FC: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x150D9400: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x150D9404: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x150D9408: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x150D940C: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x150D9410: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x150D9414: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x150D9418: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x150D941C: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x150D9420: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x150D9424: jr          $ra
    // 0x150D9428: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x150D9428: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_1512DEA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512DEA4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1512DEA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1512DEAC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1512DEB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1512DEB4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1512DEB8: lwc1        $f2, 0x874($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X874);
    // 0x1512DEBC: lwc1        $f4, 0x2BC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X2BC);
    // 0x1512DEC0: lwc1        $f14, 0x878($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X878);
    // 0x1512DEC4: lwc1        $f6, 0x2C0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C0);
    // 0x1512DEC8: sub.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x1512DECC: lwc1        $f18, 0x87C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X87C);
    // 0x1512DED0: lwc1        $f8, 0x2C4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X2C4);
    // 0x1512DED4: sub.s       $f16, $f14, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x1512DED8: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1512DEDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1512DEE0: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x1512DEE4: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1512DEE8: addiu       $s0, $s1, 0x870
    ctx->r16 = ADD32(ctx->r17, 0X870);
    // 0x1512DEEC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x1512DEF0: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x1512DEF4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1512DEF8: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x1512DEFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1512DF00: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1512DF04: lwc1        $f6, 0x880($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X880);
    // 0x1512DF08: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1512DF0C: lwc1        $f4, 0x884($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X884);
    // 0x1512DF10: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1512DF14: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1512DF18: add.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x1512DF1C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1512DF20: swc1        $f8, 0x8A8($s1)
    MEM_W(0X8A8, ctx->r17) = ctx->f8.u32l;
    // 0x1512DF24: lwc1        $f8, 0x888($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X888);
    // 0x1512DF28: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1512DF2C: add.s       $f10, $f14, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x1512DF30: swc1        $f10, 0x8AC($s1)
    MEM_W(0X8AC, ctx->r17) = ctx->f10.u32l;
    // 0x1512DF34: lwc1        $f10, 0x894($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X894);
    // 0x1512DF38: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1512DF3C: swc1        $f6, 0x8B0($s1)
    MEM_W(0X8B0, ctx->r17) = ctx->f6.u32l;
    // 0x1512DF40: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
    // 0x1512DF44: lbu         $v0, 0x870($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X870);
    // 0x1512DF48: beql        $v0, $zero, L_1512DF7C
    if (ctx->r2 == 0) {
        // 0x1512DF4C: lwc1        $f0, 0x20($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
            goto L_1512DF7C;
    }
    goto skip_0;
    // 0x1512DF4C: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    skip_0:
    // 0x1512DF50: beq         $v0, $at, L_1512DF9C
    if (ctx->r2 == ctx->r1) {
        // 0x1512DF54: addiu       $s0, $s1, 0x870
        ctx->r16 = ADD32(ctx->r17, 0X870);
            goto L_1512DF9C;
    }
    // 0x1512DF54: addiu       $s0, $s1, 0x870
    ctx->r16 = ADD32(ctx->r17, 0X870);
    // 0x1512DF58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1512DF5C: beq         $v0, $at, L_1512DFC0
    if (ctx->r2 == ctx->r1) {
        // 0x1512DF60: addiu       $s0, $s1, 0x870
        ctx->r16 = ADD32(ctx->r17, 0X870);
            goto L_1512DFC0;
    }
    // 0x1512DF60: addiu       $s0, $s1, 0x870
    ctx->r16 = ADD32(ctx->r17, 0X870);
    // 0x1512DF64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1512DF68: beq         $v0, $at, L_1512DFE0
    if (ctx->r2 == ctx->r1) {
        // 0x1512DF6C: addiu       $s0, $s1, 0x870
        ctx->r16 = ADD32(ctx->r17, 0X870);
            goto L_1512DFE0;
    }
    // 0x1512DF6C: addiu       $s0, $s1, 0x870
    ctx->r16 = ADD32(ctx->r17, 0X870);
    // 0x1512DF70: b           L_1512E004
    // 0x1512DF74: addiu       $s0, $s1, 0x870
    ctx->r16 = ADD32(ctx->r17, 0X870);
        goto L_1512E004;
    // 0x1512DF74: addiu       $s0, $s1, 0x870
    ctx->r16 = ADD32(ctx->r17, 0X870);
    // 0x1512DF78: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
L_1512DF7C:
    // 0x1512DF7C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1512DF80: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1512DF84: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x1512DF88: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1512DF8C: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x1512DF90: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1512DF94: b           L_1512E004
    // 0x1512DF98: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
        goto L_1512E004;
    // 0x1512DF98: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
L_1512DF9C:
    // 0x1512DF9C: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1512DFA0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1512DFA4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x1512DFA8: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1512DFAC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x1512DFB0: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1512DFB4: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1512DFB8: b           L_1512E004
    // 0x1512DFBC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
        goto L_1512E004;
    // 0x1512DFBC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
L_1512DFC0:
    // 0x1512DFC0: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1512DFC4: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1512DFC8: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1512DFCC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x1512DFD0: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1512DFD4: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1512DFD8: b           L_1512E004
    // 0x1512DFDC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
        goto L_1512E004;
    // 0x1512DFDC: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
L_1512DFE0:
    // 0x1512DFE0: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1512DFE4: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x1512DFE8: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x1512DFEC: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1512DFF0: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x1512DFF4: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1512DFF8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x1512DFFC: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1512E000: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
L_1512E004:
    // 0x1512E004: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1512E008: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1512E00C: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1512E010: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512E014: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1512E018: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x1512E01C: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1512E020: lwc1        $f6, 0x40($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1512E024: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1512E028: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x1512E02C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1512E030: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1512E034: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    // 0x1512E038: lbu         $t6, 0x23C($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X23C);
    // 0x1512E03C: beq         $t6, $zero, L_1512E070
    if (ctx->r14 == 0) {
        // 0x1512E040: nop
    
            goto L_1512E070;
    }
    // 0x1512E040: nop

    // 0x1512E044: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1512E048: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x1512E04C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1512E050: swc1        $f4, 0x2F8($s1)
    MEM_W(0X2F8, ctx->r17) = ctx->f4.u32l;
    // 0x1512E054: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1512E058: swc1        $f6, 0x2FC($s1)
    MEM_W(0X2FC, ctx->r17) = ctx->f6.u32l;
    // 0x1512E05C: lwc1        $f10, 0x40($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1512E060: swc1        $f10, 0x300($s1)
    MEM_W(0X300, ctx->r17) = ctx->f10.u32l;
    // 0x1512E064: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x1512E068: b           L_1512E128
    // 0x1512E06C: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
        goto L_1512E128;
    // 0x1512E06C: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
L_1512E070:
    // 0x1512E070: lwc1        $f8, 0x3710($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3710);
    // 0x1512E074: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    // 0x1512E078: addiu       $a2, $s0, 0x30
    ctx->r6 = ADD32(ctx->r16, 0X30);
    // 0x1512E07C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x1512E080: lwc1        $f4, 0x7B4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X7B4);
    // 0x1512E084: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x1512E088: jal         0x150495B0
    // 0x1512E08C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150495B0(rdram, ctx);
        goto after_0;
    // 0x1512E08C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x1512E090: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512E094: lwc1        $f6, 0x3714($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3714);
    // 0x1512E098: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x1512E09C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x1512E0A0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x1512E0A4: lwc1        $f10, 0x7B4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X7B4);
    // 0x1512E0A8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x1512E0AC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x1512E0B0: addiu       $a2, $s0, 0x34
    ctx->r6 = ADD32(ctx->r16, 0X34);
    // 0x1512E0B4: jal         0x150495B0
    // 0x1512E0B8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_150495B0(rdram, ctx);
        goto after_1;
    // 0x1512E0B8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x1512E0BC: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1512E0C0: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x1512E0C4: lw          $a3, 0x28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X28);
    // 0x1512E0C8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x1512E0CC: lwc1        $f4, 0x7B4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X7B4);
    // 0x1512E0D0: addiu       $a0, $s1, 0x2F8
    ctx->r4 = ADD32(ctx->r17, 0X2F8);
    // 0x1512E0D4: addiu       $a2, $s1, 0x3C0
    ctx->r6 = ADD32(ctx->r17, 0X3C0);
    // 0x1512E0D8: jal         0x150495B0
    // 0x1512E0DC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150495B0(rdram, ctx);
        goto after_2;
    // 0x1512E0DC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x1512E0E0: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1512E0E4: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x1512E0E8: lw          $a3, 0x28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X28);
    // 0x1512E0EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x1512E0F0: lwc1        $f10, 0x7B4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X7B4);
    // 0x1512E0F4: addiu       $a0, $s1, 0x2FC
    ctx->r4 = ADD32(ctx->r17, 0X2FC);
    // 0x1512E0F8: addiu       $a2, $s1, 0x3C4
    ctx->r6 = ADD32(ctx->r17, 0X3C4);
    // 0x1512E0FC: jal         0x150495B0
    // 0x1512E100: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_150495B0(rdram, ctx);
        goto after_3;
    // 0x1512E100: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x1512E104: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1512E108: lw          $a1, 0x40($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X40);
    // 0x1512E10C: lw          $a3, 0x28($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X28);
    // 0x1512E110: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x1512E114: lwc1        $f4, 0x7B4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X7B4);
    // 0x1512E118: addiu       $a0, $s1, 0x300
    ctx->r4 = ADD32(ctx->r17, 0X300);
    // 0x1512E11C: addiu       $a2, $s1, 0x3C8
    ctx->r6 = ADD32(ctx->r17, 0X3C8);
    // 0x1512E120: jal         0x150495B0
    // 0x1512E124: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_150495B0(rdram, ctx);
        goto after_4;
    // 0x1512E124: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_4:
L_1512E128:
    // 0x1512E128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1512E12C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1512E130: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1512E134: jr          $ra
    // 0x1512E138: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x1512E138: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1512E13C: nop

;}
RECOMP_FUNC void func_150C5450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C5454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5458: jal         0x15169824
    // 0x150C545C: nop

    func_15169824(rdram, ctx);
        goto after_0;
    // 0x150C545C: nop

    after_0:
    // 0x150C5460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C5464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C5468: jr          $ra
    // 0x150C546C: nop

    return;
    return;
    // 0x150C546C: nop

;}
RECOMP_FUNC void func_150E3340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E3340: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150E3344: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150E3348: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x150E334C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x150E3350: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x150E3354: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x150E3358: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x150E335C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150E3360: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E3364: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x150E3368: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x150E336C: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x150E3370: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x150E3374: addiu       $t7, $zero, 0x1A
    ctx->r15 = ADD32(0, 0X1A);
    // 0x150E3378: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150E337C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150E3380: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x150E3384: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x150E3388: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x150E338C: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x150E3390: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x150E3394: lh          $t0, 0x4E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4E);
    // 0x150E3398: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x150E339C: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x150E33A0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150E33A4: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x150E33A8: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x150E33AC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x150E33B0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x150E33B4: jal         0x150E3020
    // 0x150E33B8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    func_150E3020(rdram, ctx);
        goto after_0;
    // 0x150E33B8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x150E33BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150E33C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150E33C4: jr          $ra
    // 0x150E33C8: nop

    return;
    return;
    // 0x150E33C8: nop

;}
RECOMP_FUNC void func_151D74B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D74B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151D74B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151D74B8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x151D74BC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x151D74C0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x151D74C4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x151D74C8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x151D74CC: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
    // 0x151D74D0: lb          $t9, 0x43($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X43);
    // 0x151D74D4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x151D74D8: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x151D74DC: lbu         $t1, 0x47($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X47);
    // 0x151D74E0: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x151D74E4: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x151D74E8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151D74EC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x151D74F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151D74F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D74F8: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    // 0x151D74FC: sb          $t8, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r24;
    // 0x151D7500: sb          $t9, 0x36($sp)
    MEM_B(0X36, ctx->r29) = ctx->r25;
    // 0x151D7504: sb          $t7, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r15;
    // 0x151D7508: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151D750C: jal         0x151D71B0
    // 0x151D7510: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_151D71B0(rdram, ctx);
        goto after_0;
    // 0x151D7510: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_0:
    // 0x151D7514: beq         $v0, $zero, L_151D7528
    if (ctx->r2 == 0) {
        // 0x151D7518: addiu       $a0, $v0, 0x40
        ctx->r4 = ADD32(ctx->r2, 0X40);
            goto L_151D7528;
    }
    // 0x151D7518: addiu       $a0, $v0, 0x40
    ctx->r4 = ADD32(ctx->r2, 0X40);
    // 0x151D751C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x151D7520: jal         0x10022EC0
    // 0x151D7524: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151D7524: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_151D7528:
    // 0x151D7528: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151D752C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151D7530: jr          $ra
    // 0x151D7534: nop

    return;
    return;
    // 0x151D7534: nop

;}
RECOMP_FUNC void func_1506B3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B3B0: jr          $ra
    // 0x1506B3B4: nop

    return;
    return;
    // 0x1506B3B4: nop

;}
RECOMP_FUNC void func_1510AA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510AA44: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1510AA48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1510AA4C: addiu       $a1, $zero, 0xE10
    ctx->r5 = ADD32(0, 0XE10);
    // 0x1510AA50: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x1510AA54: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x1510AA58: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x1510AA5C: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x1510AA60: mflo        $t6
    ctx->r14 = lo;
    // 0x1510AA64: bne         $a1, $zero, L_1510AA70
    if (ctx->r5 != 0) {
        // 0x1510AA68: nop
    
            goto L_1510AA70;
    }
    // 0x1510AA68: nop

    // 0x1510AA6C: break       7
    do_break(353413740);
L_1510AA70:
    // 0x1510AA70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510AA74: bne         $a1, $at, L_1510AA88
    if (ctx->r5 != ctx->r1) {
        // 0x1510AA78: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510AA88;
    }
    // 0x1510AA78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510AA7C: bne         $v0, $at, L_1510AA88
    if (ctx->r2 != ctx->r1) {
        // 0x1510AA80: nop
    
            goto L_1510AA88;
    }
    // 0x1510AA80: nop

    // 0x1510AA84: break       6
    do_break(353413764);
L_1510AA88:
    // 0x1510AA88: div         $zero, $t6, $a2
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r6)));
    // 0x1510AA8C: mfhi        $v1
    ctx->r3 = hi;
    // 0x1510AA90: bne         $a2, $zero, L_1510AA9C
    if (ctx->r6 != 0) {
        // 0x1510AA94: nop
    
            goto L_1510AA9C;
    }
    // 0x1510AA94: nop

    // 0x1510AA98: break       7
    do_break(353413784);
L_1510AA9C:
    // 0x1510AA9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510AAA0: bne         $a2, $at, L_1510AAB4
    if (ctx->r6 != ctx->r1) {
        // 0x1510AAA4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510AAB4;
    }
    // 0x1510AAA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510AAA8: bne         $t6, $at, L_1510AAB4
    if (ctx->r14 != ctx->r1) {
        // 0x1510AAAC: nop
    
            goto L_1510AAB4;
    }
    // 0x1510AAAC: nop

    // 0x1510AAB0: break       6
    do_break(353413808);
L_1510AAB4:
    // 0x1510AAB4: bne         $t7, $zero, L_1510AB74
    if (ctx->r15 != 0) {
        // 0x1510AAB8: nop
    
            goto L_1510AB74;
    }
    // 0x1510AAB8: nop

    // 0x1510AABC: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1510AAC0: addiu       $a3, $a3, -0x1C1C
    ctx->r7 = ADD32(ctx->r7, -0X1C1C);
    // 0x1510AAC4: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x1510AAC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1510AACC: beq         $t8, $zero, L_1510AB74
    if (ctx->r24 == 0) {
        // 0x1510AAD0: nop
    
            goto L_1510AB74;
    }
    // 0x1510AAD0: nop

    // 0x1510AAD4: sw          $t9, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r25;
    // 0x1510AAD8: lw          $t2, 0x0($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X0);
    // 0x1510AADC: ori         $at, $zero, 0xA8C0
    ctx->r1 = 0 | 0XA8C0;
    // 0x1510AAE0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1510AAE4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1510AAE8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1510AAEC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x1510AAF0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1510AAF4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x1510AAF8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1510AAFC: divu        $zero, $t3, $at
    lo = S32(U32(ctx->r11) / U32(ctx->r1)); hi = S32(U32(ctx->r11) % U32(ctx->r1));
    // 0x1510AB00: mfhi        $t4
    ctx->r12 = hi;
    // 0x1510AB04: sw          $t4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r12;
    // 0x1510AB08: or          $t5, $t4, $zero
    ctx->r13 = ctx->r12 | 0;
    // 0x1510AB0C: multu       $t4, $a2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1510AB10: mflo        $t6
    ctx->r14 = lo;
    // 0x1510AB14: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x1510AB18: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
    // 0x1510AB1C: div         $zero, $t6, $a1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r5)));
    // 0x1510AB20: mflo        $t7
    ctx->r15 = lo;
    // 0x1510AB24: bne         $a1, $zero, L_1510AB30
    if (ctx->r5 != 0) {
        // 0x1510AB28: nop
    
            goto L_1510AB30;
    }
    // 0x1510AB28: nop

    // 0x1510AB2C: break       7
    do_break(353413932);
L_1510AB30:
    // 0x1510AB30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510AB34: bne         $a1, $at, L_1510AB48
    if (ctx->r5 != ctx->r1) {
        // 0x1510AB38: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510AB48;
    }
    // 0x1510AB38: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510AB3C: bne         $v0, $at, L_1510AB48
    if (ctx->r2 != ctx->r1) {
        // 0x1510AB40: nop
    
            goto L_1510AB48;
    }
    // 0x1510AB40: nop

    // 0x1510AB44: break       6
    do_break(353413956);
L_1510AB48:
    // 0x1510AB48: div         $zero, $t7, $a2
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r6)));
    // 0x1510AB4C: mfhi        $v1
    ctx->r3 = hi;
    // 0x1510AB50: bne         $a2, $zero, L_1510AB5C
    if (ctx->r6 != 0) {
        // 0x1510AB54: nop
    
            goto L_1510AB5C;
    }
    // 0x1510AB54: nop

    // 0x1510AB58: break       7
    do_break(353413976);
L_1510AB5C:
    // 0x1510AB5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510AB60: bne         $a2, $at, L_1510AB74
    if (ctx->r6 != ctx->r1) {
        // 0x1510AB64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510AB74;
    }
    // 0x1510AB64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510AB68: bne         $t7, $at, L_1510AB74
    if (ctx->r15 != ctx->r1) {
        // 0x1510AB6C: nop
    
            goto L_1510AB74;
    }
    // 0x1510AB6C: nop

    // 0x1510AB70: break       6
    do_break(353414000);
L_1510AB74:
    // 0x1510AB74: bgez        $v1, L_1510AB80
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1510AB78: lui         $t8, 0x800C
        ctx->r24 = S32(0X800C << 16);
            goto L_1510AB80;
    }
    // 0x1510AB78: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1510AB7C: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
L_1510AB80:
    // 0x1510AB80: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x1510AB84: lui         $at, 0x27
    ctx->r1 = S32(0X27 << 16);
    // 0x1510AB88: ori         $at, $at, 0x8D00
    ctx->r1 = ctx->r1 | 0X8D00;
    // 0x1510AB8C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x1510AB90: slt         $at, $t9, $at
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x1510AB94: sw          $t9, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r25;
    // 0x1510AB98: bne         $at, $zero, L_1510ABB4
    if (ctx->r1 != 0) {
        // 0x1510AB9C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_1510ABB4;
    }
    // 0x1510AB9C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x1510ABA0: lui         $at, 0xFFD8
    ctx->r1 = S32(0XFFD8 << 16);
    // 0x1510ABA4: ori         $at, $at, 0x7300
    ctx->r1 = ctx->r1 | 0X7300;
    // 0x1510ABA8: addu        $t2, $v0, $at
    ctx->r10 = ADD32(ctx->r2, ctx->r1);
    // 0x1510ABAC: sw          $t2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r10;
    // 0x1510ABB0: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_1510ABB4:
    // 0x1510ABB4: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x1510ABB8: mflo        $t1
    ctx->r9 = lo;
    // 0x1510ABBC: bne         $a2, $zero, L_1510ABC8
    if (ctx->r6 != 0) {
        // 0x1510ABC0: nop
    
            goto L_1510ABC8;
    }
    // 0x1510ABC0: nop

    // 0x1510ABC4: break       7
    do_break(353414084);
L_1510ABC8:
    // 0x1510ABC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510ABCC: bne         $a2, $at, L_1510ABE0
    if (ctx->r6 != ctx->r1) {
        // 0x1510ABD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510ABE0;
    }
    // 0x1510ABD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510ABD4: bne         $v0, $at, L_1510ABE0
    if (ctx->r2 != ctx->r1) {
        // 0x1510ABD8: nop
    
            goto L_1510ABE0;
    }
    // 0x1510ABD8: nop

    // 0x1510ABDC: break       6
    do_break(353414108);
L_1510ABE0:
    // 0x1510ABE0: div         $zero, $t1, $a2
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r6)));
    // 0x1510ABE4: bne         $a2, $zero, L_1510ABF0
    if (ctx->r6 != 0) {
        // 0x1510ABE8: nop
    
            goto L_1510ABF0;
    }
    // 0x1510ABE8: nop

    // 0x1510ABEC: break       7
    do_break(353414124);
L_1510ABF0:
    // 0x1510ABF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510ABF4: bne         $a2, $at, L_1510AC08
    if (ctx->r6 != ctx->r1) {
        // 0x1510ABF8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510AC08;
    }
    // 0x1510ABF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510ABFC: bne         $t1, $at, L_1510AC08
    if (ctx->r9 != ctx->r1) {
        // 0x1510AC00: nop
    
            goto L_1510AC08;
    }
    // 0x1510AC00: nop

    // 0x1510AC04: break       6
    do_break(353414148);
L_1510AC08:
    // 0x1510AC08: mflo        $a1
    ctx->r5 = lo;
    // 0x1510AC0C: addiu       $at, $zero, 0x12C
    ctx->r1 = ADD32(0, 0X12C);
    // 0x1510AC10: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x1510AC14: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x1510AC18: mflo        $t3
    ctx->r11 = lo;
    // 0x1510AC1C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1510AC20: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x1510AC24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1510AC28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510AC2C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1510AC30: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1510AC34: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1510AC38: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x1510AC3C: nop

    // 0x1510AC40: bc1f        L_1510AC58
    if (!c1cs) {
        // 0x1510AC44: nop
    
            goto L_1510AC58;
    }
    // 0x1510AC44: nop

    // 0x1510AC48: lui         $at, 0xFFD8
    ctx->r1 = S32(0XFFD8 << 16);
    // 0x1510AC4C: ori         $at, $at, 0x7300
    ctx->r1 = ctx->r1 | 0X7300;
    // 0x1510AC50: addu        $t4, $v0, $at
    ctx->r12 = ADD32(ctx->r2, ctx->r1);
    // 0x1510AC54: sw          $t4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r12;
L_1510AC58:
    // 0x1510AC58: div         $zero, $a1, $a2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r6)));
    // 0x1510AC5C: mfhi        $t0
    ctx->r8 = hi;
    // 0x1510AC60: bne         $a2, $zero, L_1510AC6C
    if (ctx->r6 != 0) {
        // 0x1510AC64: nop
    
            goto L_1510AC6C;
    }
    // 0x1510AC64: nop

    // 0x1510AC68: break       7
    do_break(353414248);
L_1510AC6C:
    // 0x1510AC6C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510AC70: bne         $a2, $at, L_1510AC84
    if (ctx->r6 != ctx->r1) {
        // 0x1510AC74: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510AC84;
    }
    // 0x1510AC74: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510AC78: bne         $a1, $at, L_1510AC84
    if (ctx->r5 != ctx->r1) {
        // 0x1510AC7C: nop
    
            goto L_1510AC84;
    }
    // 0x1510AC7C: nop

    // 0x1510AC80: break       6
    do_break(353414272);
L_1510AC84:
    // 0x1510AC84: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x1510AC88: bgez        $t0, L_1510AC94
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1510AC8C: nop
    
            goto L_1510AC94;
    }
    // 0x1510AC8C: nop

    // 0x1510AC90: addiu       $t0, $t0, 0x3C
    ctx->r8 = ADD32(ctx->r8, 0X3C);
L_1510AC94:
    // 0x1510AC94: beql        $v1, $t0, L_1510AD44
    if (ctx->r3 == ctx->r8) {
        // 0x1510AC98: lw          $v0, 0x7C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X7C);
            goto L_1510AD44;
    }
    goto skip_0;
    // 0x1510AC98: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    skip_0:
    // 0x1510AC9C: div         $zero, $t0, $a1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r5)));
    // 0x1510ACA0: mflo        $v0
    ctx->r2 = lo;
    // 0x1510ACA4: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x1510ACA8: bne         $a1, $zero, L_1510ACB4
    if (ctx->r5 != 0) {
        // 0x1510ACAC: nop
    
            goto L_1510ACB4;
    }
    // 0x1510ACAC: nop

    // 0x1510ACB0: break       7
    do_break(353414320);
L_1510ACB4:
    // 0x1510ACB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510ACB8: bne         $a1, $at, L_1510ACCC
    if (ctx->r5 != ctx->r1) {
        // 0x1510ACBC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510ACCC;
    }
    // 0x1510ACBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510ACC0: bne         $t0, $at, L_1510ACCC
    if (ctx->r8 != ctx->r1) {
        // 0x1510ACC4: nop
    
            goto L_1510ACCC;
    }
    // 0x1510ACC4: nop

    // 0x1510ACC8: break       6
    do_break(353414344);
L_1510ACCC:
    // 0x1510ACCC: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x1510ACD0: mflo        $t5
    ctx->r13 = lo;
    // 0x1510ACD4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1510ACD8: bne         $a1, $zero, L_1510ACE4
    if (ctx->r5 != 0) {
        // 0x1510ACDC: nop
    
            goto L_1510ACE4;
    }
    // 0x1510ACDC: nop

    // 0x1510ACE0: break       7
    do_break(353414368);
L_1510ACE4:
    // 0x1510ACE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510ACE8: bne         $a1, $at, L_1510ACFC
    if (ctx->r5 != ctx->r1) {
        // 0x1510ACEC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1510ACFC;
    }
    // 0x1510ACEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1510ACF0: bne         $v1, $at, L_1510ACFC
    if (ctx->r3 != ctx->r1) {
        // 0x1510ACF4: nop
    
            goto L_1510ACFC;
    }
    // 0x1510ACF4: nop

    // 0x1510ACF8: break       6
    do_break(353414392);
L_1510ACFC:
    // 0x1510ACFC: beql        $v0, $t5, L_1510AD44
    if (ctx->r2 == ctx->r13) {
        // 0x1510AD00: lw          $v0, 0x7C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X7C);
            goto L_1510AD44;
    }
    goto skip_1;
    // 0x1510AD00: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    skip_1:
    // 0x1510AD04: bne         $t6, $zero, L_1510AD38
    if (ctx->r14 != 0) {
        // 0x1510AD08: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_1510AD38;
    }
    // 0x1510AD08: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1510AD0C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x1510AD10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1510AD14: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x1510AD18: div.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f2.fl, ctx->f16.fl);
    // 0x1510AD1C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1510AD20: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x1510AD24: nop

    // 0x1510AD28: bne         $v0, $zero, L_1510AD3C
    if (ctx->r2 != 0) {
        // 0x1510AD2C: sw          $v0, 0x7C($a0)
        MEM_W(0X7C, ctx->r4) = ctx->r2;
            goto L_1510AD3C;
    }
    // 0x1510AD2C: sw          $v0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r2;
    // 0x1510AD30: b           L_1510AD3C
    // 0x1510AD34: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
        goto L_1510AD3C;
    // 0x1510AD34: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
L_1510AD38:
    // 0x1510AD38: sw          $t9, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r25;
L_1510AD3C:
    // 0x1510AD3C: sw          $t2, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r10;
    // 0x1510AD40: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
L_1510AD44:
    // 0x1510AD44: beql        $v0, $zero, L_1510AD9C
    if (ctx->r2 == 0) {
        // 0x1510AD48: mtc1        $t0, $f6
        ctx->f6.u32l = ctx->r8;
            goto L_1510AD9C;
    }
    goto skip_2;
    // 0x1510AD48: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    skip_2:
    // 0x1510AD4C: lw          $t3, 0x80($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X80);
    // 0x1510AD50: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x1510AD54: addiu       $a1, $zero, 0x4CC
    ctx->r5 = ADD32(0, 0X4CC);
    // 0x1510AD58: beq         $t1, $t3, L_1510AD98
    if (ctx->r9 == ctx->r11) {
        // 0x1510AD5C: addiu       $a2, $zero, 0x7FFF
        ctx->r6 = ADD32(0, 0X7FFF);
            goto L_1510AD98;
    }
    // 0x1510AD5C: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x1510AD60: sw          $t1, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->r9;
    // 0x1510AD64: sw          $t4, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r12;
    // 0x1510AD68: addiu       $t5, $zero, 0x3E8
    ctx->r13 = ADD32(0, 0X3E8);
    // 0x1510AD6C: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x1510AD70: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1510AD74: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1510AD78: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x1510AD7C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1510AD80: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x1510AD84: jal         0x15114D24
    // 0x1510AD88: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_15114D24(rdram, ctx);
        goto after_0;
    // 0x1510AD88: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_0:
    // 0x1510AD8C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1510AD90: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1510AD94: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
L_1510AD98:
    // 0x1510AD98: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
L_1510AD9C:
    // 0x1510AD9C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1510ADA0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1510ADA4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1510ADA8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1510ADAC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1510ADB0: swc1        $f0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f0.u32l;
    // 0x1510ADB4: swc1        $f0, 0x108($a0)
    MEM_W(0X108, ctx->r4) = ctx->f0.u32l;
    // 0x1510ADB8: neg.s       $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = -ctx->f2.fl;
    // 0x1510ADBC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1510ADC0: swc1        $f4, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f4.u32l;
    // 0x1510ADC4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x1510ADC8: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x1510ADCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1510ADD0: jr          $ra
    // 0x1510ADD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1510ADD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_1518B6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518B6B0: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x1518B6B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1518B6B8: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x1518B6BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1518B6C0: andi        $s6, $a3, 0xFF
    ctx->r22 = ctx->r7 & 0XFF;
    // 0x1518B6C4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x1518B6C8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x1518B6CC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1518B6D0: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1518B6D4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1518B6D8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1518B6DC: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1518B6E0: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x1518B6E4: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x1518B6E8: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x1518B6EC: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x1518B6F0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x1518B6F4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x1518B6F8: swc1        $f12, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f12.u32l;
    // 0x1518B6FC: swc1        $f14, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f14.u32l;
    // 0x1518B700: sw          $a2, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r6;
    // 0x1518B704: sw          $a3, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r7;
    // 0x1518B708: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518B70C: lwc1        $f4, 0x7400($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7400);
    // 0x1518B710: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518B714: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1518B718: lwc1        $f8, 0x7404($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7404);
    // 0x1518B71C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x1518B720: addiu       $t7, $zero, 0x29E8
    ctx->r15 = ADD32(0, 0X29E8);
    // 0x1518B724: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1518B728: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1518B72C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1518B730: addiu       $t1, $zero, 0x4000
    ctx->r9 = ADD32(0, 0X4000);
    // 0x1518B734: sh          $t6, 0x122($sp)
    MEM_H(0X122, ctx->r29) = ctx->r14;
    // 0x1518B738: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x1518B73C: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x1518B740: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x1518B744: sw          $t7, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r15;
    // 0x1518B748: sb          $zero, 0x124($sp)
    MEM_B(0X124, ctx->r29) = 0;
    // 0x1518B74C: sw          $zero, 0x128($sp)
    MEM_W(0X128, ctx->r29) = 0;
    // 0x1518B750: sb          $t8, 0x12C($sp)
    MEM_B(0X12C, ctx->r29) = ctx->r24;
    // 0x1518B754: sb          $t9, 0x12D($sp)
    MEM_B(0X12D, ctx->r29) = ctx->r25;
    // 0x1518B758: sb          $zero, 0x12E($sp)
    MEM_B(0X12E, ctx->r29) = 0;
    // 0x1518B75C: sb          $zero, 0x12F($sp)
    MEM_B(0X12F, ctx->r29) = 0;
    // 0x1518B760: sb          $zero, 0x130($sp)
    MEM_B(0X130, ctx->r29) = 0;
    // 0x1518B764: sb          $zero, 0x131($sp)
    MEM_B(0X131, ctx->r29) = 0;
    // 0x1518B768: sb          $zero, 0x132($sp)
    MEM_B(0X132, ctx->r29) = 0;
    // 0x1518B76C: sb          $zero, 0x133($sp)
    MEM_B(0X133, ctx->r29) = 0;
    // 0x1518B770: sb          $zero, 0x134($sp)
    MEM_B(0X134, ctx->r29) = 0;
    // 0x1518B774: sb          $t0, 0x136($sp)
    MEM_B(0X136, ctx->r29) = ctx->r8;
    // 0x1518B778: sw          $zero, 0x138($sp)
    MEM_W(0X138, ctx->r29) = 0;
    // 0x1518B77C: sb          $zero, 0x13C($sp)
    MEM_B(0X13C, ctx->r29) = 0;
    // 0x1518B780: sh          $t1, 0x13E($sp)
    MEM_H(0X13E, ctx->r29) = ctx->r9;
    // 0x1518B784: sh          $zero, 0x140($sp)
    MEM_H(0X140, ctx->r29) = 0;
    // 0x1518B788: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x1518B78C: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x1518B790: jal         0x150ADA20
    // 0x1518B794: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518B794: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x1518B798: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x1518B79C: addiu       $s2, $v1, 0x3
    ctx->r18 = ADD32(ctx->r3, 0X3);
    // 0x1518B7A0: blez        $s2, L_1518B984
    if (SIGNED(ctx->r18) <= 0) {
        // 0x1518B7A4: addiu       $s5, $sp, 0xCC
        ctx->r21 = ADD32(ctx->r29, 0XCC);
            goto L_1518B984;
    }
    // 0x1518B7A4: addiu       $s5, $sp, 0xCC
    ctx->r21 = ADD32(ctx->r29, 0XCC);
    // 0x1518B7A8: addiu       $s4, $zero, -0x10
    ctx->r20 = ADD32(0, -0X10);
    // 0x1518B7AC: lw          $s3, 0x158($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X158);
L_1518B7B0:
    // 0x1518B7B0: jal         0x150ADA68
    // 0x1518B7B4: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x1518B7B4: nop

    after_1:
    // 0x1518B7B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518B7BC: lwc1        $f10, 0x7408($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7408);
    // 0x1518B7C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1518B7C4: lwc1        $f18, 0x740C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X740C);
    // 0x1518B7C8: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1518B7CC: jal         0x150ADA20
    // 0x1518B7D0: add.s       $f24, $f16, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f16.fl + ctx->f18.fl;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1518B7D0: add.s       $f24, $f16, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f24.fl = ctx->f16.fl + ctx->f18.fl;
    after_2:
    // 0x1518B7D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1518B7D8: andi        $t2, $s0, 0xFF
    ctx->r10 = ctx->r16 & 0XFF;
    // 0x1518B7DC: jal         0x150ADA20
    // 0x1518B7E0: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1518B7E0: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    after_3:
    // 0x1518B7E4: andi        $t3, $v0, 0x1F
    ctx->r11 = ctx->r2 & 0X1F;
    // 0x1518B7E8: subu        $s1, $s4, $t3
    ctx->r17 = SUB32(ctx->r20, ctx->r11);
    // 0x1518B7EC: andi        $t4, $s1, 0xFF
    ctx->r12 = ctx->r17 & 0XFF;
    // 0x1518B7F0: jal         0x150ADA68
    // 0x1518B7F4: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x1518B7F4: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    after_4:
    // 0x1518B7F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1518B7FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1518B800: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1518B804: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1518B808: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1518B80C: addiu       $a0, $s0, -0x40
    ctx->r4 = ADD32(ctx->r16, -0X40);
    // 0x1518B810: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x1518B814: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x1518B818: jal         0x151423D8
    // 0x1518B81C: add.s       $f26, $f6, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f8.fl;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x1518B81C: add.s       $f26, $f6, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f6.fl + ctx->f8.fl;
    after_5:
    // 0x1518B820: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1518B824: jal         0x151423D8
    // 0x1518B828: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x1518B828: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_6:
    // 0x1518B82C: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x1518B830: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1518B834: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x1518B838: jal         0x151423D8
    // 0x1518B83C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_7;
    // 0x1518B83C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_7:
    // 0x1518B840: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x1518B844: jal         0x151423D8
    // 0x1518B848: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_8;
    // 0x1518B848: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_8:
    // 0x1518B84C: jal         0x150ADA68
    // 0x1518B850: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x1518B850: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    after_9:
    // 0x1518B854: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x1518B858: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518B85C: lwc1        $f18, 0x148($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X148);
    // 0x1518B860: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x1518B864: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1518B868: lwc1        $f10, 0x150($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X150);
    // 0x1518B86C: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x1518B870: mul.s       $f16, $f2, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x1518B874: nop

    // 0x1518B878: mul.s       $f8, $f2, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x1518B87C: nop

    // 0x1518B880: mul.s       $f12, $f26, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f12.fl = MUL_S(ctx->f26.fl, ctx->f30.fl);
    // 0x1518B884: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1518B888: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1518B88C: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x1518B890: mul.s       $f18, $f12, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x1518B894: neg.s       $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = -ctx->f26.fl;
    // 0x1518B898: swc1        $f16, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f16.u32l;
    // 0x1518B89C: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x1518B8A0: nop

    // 0x1518B8A4: mul.s       $f8, $f12, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x1518B8A8: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x1518B8AC: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x1518B8B0: jal         0x150ADA20
    // 0x1518B8B4: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x1518B8B4: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x1518B8B8: andi        $t7, $v0, 0x1F
    ctx->r15 = ctx->r2 & 0X1F;
    // 0x1518B8BC: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x1518B8C0: sh          $t8, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r24;
    // 0x1518B8C4: swc1        $f24, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f24.u32l;
    // 0x1518B8C8: swc1        $f24, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f24.u32l;
    // 0x1518B8CC: jal         0x150ADA68
    // 0x1518B8D0: swc1        $f24, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f24.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x1518B8D0: swc1        $f24, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f24.u32l;
    after_11:
    // 0x1518B8D4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1518B8D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518B8DC: nop

    // 0x1518B8E0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1518B8E4: jal         0x150ADA68
    // 0x1518B8E8: swc1        $f16, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x1518B8E8: swc1        $f16, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f16.u32l;
    after_12:
    // 0x1518B8EC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1518B8F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1518B8F4: nop

    // 0x1518B8F8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x1518B8FC: jal         0x150ADA68
    // 0x1518B900: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x1518B900: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    after_13:
    // 0x1518B904: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1518B908: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1518B90C: nop

    // 0x1518B910: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1518B914: jal         0x150ADA68
    // 0x1518B918: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x1518B918: swc1        $f8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x1518B91C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1518B920: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1518B924: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1518B928: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1518B92C: nop

    // 0x1518B930: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1518B934: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x1518B938: jal         0x150ADA68
    // 0x1518B93C: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x1518B93C: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    after_15:
    // 0x1518B940: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1518B944: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1518B948: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x1518B94C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1518B950: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x1518B954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1518B958: mul.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1518B95C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1518B960: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1518B964: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    // 0x1518B968: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x1518B96C: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x1518B970: jal         0x15132A4C
    // 0x1518B974: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    func_15132A4C(rdram, ctx);
        goto after_16;
    // 0x1518B974: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x1518B978: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x1518B97C: bne         $s2, $zero, L_1518B7B0
    if (ctx->r18 != 0) {
        // 0x1518B980: nop
    
            goto L_1518B7B0;
    }
    // 0x1518B980: nop

L_1518B984:
    // 0x1518B984: lwc1        $f18, 0x148($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X148);
    // 0x1518B988: lwc1        $f4, 0x14C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x1518B98C: lwc1        $f8, 0x150($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X150);
    // 0x1518B990: addiu       $t9, $zero, 0x1F4
    ctx->r25 = ADD32(0, 0X1F4);
    // 0x1518B994: addiu       $t0, $zero, 0x1F4
    ctx->r8 = ADD32(0, 0X1F4);
    // 0x1518B998: sh          $t9, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r25;
    // 0x1518B99C: sh          $t0, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r8;
    // 0x1518B9A0: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x1518B9A4: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x1518B9A8: jal         0x150ADA20
    // 0x1518B9AC: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_17;
    // 0x1518B9AC: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x1518B9B0: andi        $t1, $v0, 0xF
    ctx->r9 = ctx->r2 & 0XF;
    // 0x1518B9B4: addiu       $t2, $t1, 0x32
    ctx->r10 = ADD32(ctx->r9, 0X32);
    // 0x1518B9B8: jal         0x150ADA20
    // 0x1518B9BC: sh          $t2, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_18;
    // 0x1518B9BC: sh          $t2, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r10;
    after_18:
    // 0x1518B9C0: andi        $t3, $v0, 0xF
    ctx->r11 = ctx->r2 & 0XF;
    // 0x1518B9C4: addiu       $t4, $t3, 0x32
    ctx->r12 = ADD32(ctx->r11, 0X32);
    // 0x1518B9C8: sh          $t4, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r12;
    // 0x1518B9CC: sh          $zero, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = 0;
    // 0x1518B9D0: jal         0x150ADA20
    // 0x1518B9D4: sh          $zero, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x1518B9D4: sh          $zero, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = 0;
    after_19:
    // 0x1518B9D8: addiu       $at, $zero, 0xC9
    ctx->r1 = ADD32(0, 0XC9);
    // 0x1518B9DC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1518B9E0: mfhi        $t5
    ctx->r13 = hi;
    // 0x1518B9E4: addiu       $t6, $t5, 0x12C
    ctx->r14 = ADD32(ctx->r13, 0X12C);
    // 0x1518B9E8: addiu       $t7, $zero, 0x258
    ctx->r15 = ADD32(0, 0X258);
    // 0x1518B9EC: sh          $t6, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r14;
    // 0x1518B9F0: sh          $zero, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = 0;
    // 0x1518B9F4: sh          $t7, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r15;
    // 0x1518B9F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1518B9FC: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x1518BA00: addiu       $a2, $sp, 0xBD
    ctx->r6 = ADD32(ctx->r29, 0XBD);
    // 0x1518BA04: jal         0x151429E0
    // 0x1518BA08: addiu       $a3, $sp, 0xBE
    ctx->r7 = ADD32(ctx->r29, 0XBE);
    func_151429E0(rdram, ctx);
        goto after_20;
    // 0x1518BA08: addiu       $a3, $sp, 0xBE
    ctx->r7 = ADD32(ctx->r29, 0XBE);
    after_20:
    // 0x1518BA0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1518BA10: addiu       $a1, $sp, 0xBF
    ctx->r5 = ADD32(ctx->r29, 0XBF);
    // 0x1518BA14: addiu       $a2, $sp, 0xC0
    ctx->r6 = ADD32(ctx->r29, 0XC0);
    // 0x1518BA18: jal         0x151429E0
    // 0x1518BA1C: addiu       $a3, $sp, 0xC1
    ctx->r7 = ADD32(ctx->r29, 0XC1);
    func_151429E0(rdram, ctx);
        goto after_21;
    // 0x1518BA1C: addiu       $a3, $sp, 0xC1
    ctx->r7 = ADD32(ctx->r29, 0XC1);
    after_21:
    // 0x1518BA20: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1518BA24: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x1518BA28: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x1518BA2C: sb          $t8, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r24;
    // 0x1518BA30: sb          $t9, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r25;
    // 0x1518BA34: sb          $t0, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r8;
    // 0x1518BA38: sb          $zero, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = 0;
    // 0x1518BA3C: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x1518BA40: jal         0x1518CA80
    // 0x1518BA44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1518CA80(rdram, ctx);
        goto after_22;
    // 0x1518BA44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x1518BA48: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x1518BA4C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1518BA50: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1518BA54: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1518BA58: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x1518BA5C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x1518BA60: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1518BA64: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1518BA68: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1518BA6C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1518BA70: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1518BA74: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1518BA78: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x1518BA7C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x1518BA80: jr          $ra
    // 0x1518BA84: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    return;
    // 0x1518BA84: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_150E88C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E88C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150E88C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150E88C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150E88CC: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150E88D0: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150E88D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150E88D8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150E88DC: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x150E88E0: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x150E88E4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x150E88E8: nop

    // 0x150E88EC: bc1fl       L_150E8924
    if (!c1cs) {
        // 0x150E88F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150E8924;
    }
    goto skip_0;
    // 0x150E88F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150E88F4: jal         0x150ADA68
    // 0x150E88F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150E88F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150E88FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E8900: lwc1        $f18, 0x1378($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1378);
    // 0x150E8904: lui         $at, 0x4349
    ctx->r1 = S32(0X4349 << 16);
    // 0x150E8908: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E890C: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150E8910: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150E8914: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150E8918: jal         0x150E8930
    // 0x150E891C: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    func_150E8930(rdram, ctx);
        goto after_1;
    // 0x150E891C: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    after_1:
    // 0x150E8920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150E8924:
    // 0x150E8924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150E8928: jr          $ra
    // 0x150E892C: nop

    return;
    return;
    // 0x150E892C: nop

;}
RECOMP_FUNC void func_150C7870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C7874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C7878: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x150C787C: lw          $t6, 0x2E4C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2E4C);
    // 0x150C7880: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x150C7884: lbu         $t7, 0xA($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XA);
    // 0x150C7888: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x150C788C: bnel        $t8, $zero, L_150C78D4
    if (ctx->r24 != 0) {
        // 0x150C7890: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150C78D4;
    }
    goto skip_0;
    // 0x150C7890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150C7894: lw          $t9, -0x410C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X410C);
    // 0x150C7898: lui         $a3, 0x447A
    ctx->r7 = S32(0X447A << 16);
    // 0x150C789C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C78A0: lbu         $t0, 0x73($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X73);
    // 0x150C78A4: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    // 0x150C78A8: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x150C78AC: bne         $t1, $zero, L_150C78C8
    if (ctx->r9 != 0) {
        // 0x150C78B0: nop
    
            goto L_150C78C8;
    }
    // 0x150C78B0: nop

    // 0x150C78B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C78B8: jal         0x1511650C
    // 0x150C78BC: addiu       $a2, $zero, 0x353
    ctx->r6 = ADD32(0, 0X353);
    func_1511650C(rdram, ctx);
        goto after_0;
    // 0x150C78BC: addiu       $a2, $zero, 0x353
    ctx->r6 = ADD32(0, 0X353);
    after_0:
    // 0x150C78C0: b           L_150C78D4
    // 0x150C78C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150C78D4;
    // 0x150C78C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C78C8:
    // 0x150C78C8: jal         0x1511650C
    // 0x150C78CC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    func_1511650C(rdram, ctx);
        goto after_1;
    // 0x150C78CC: lui         $a3, 0x43C8
    ctx->r7 = S32(0X43C8 << 16);
    after_1:
    // 0x150C78D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C78D4:
    // 0x150C78D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C78D8: jr          $ra
    // 0x150C78DC: nop

    return;
    return;
    // 0x150C78DC: nop

;}
RECOMP_FUNC void func_1519CDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519CDB0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1519CDB4: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x1519CDB8: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x1519CDBC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1519CDC0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1519CDC4: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x1519CDC8: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x1519CDCC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x1519CDD0: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x1519CDD4: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x1519CDD8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x1519CDDC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x1519CDE0: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x1519CDE4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x1519CDE8: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x1519CDEC: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x1519CDF0: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x1519CDF4: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x1519CDF8: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x1519CDFC: lb          $t6, 0x2C($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X2C);
    // 0x1519CE00: lw          $s3, 0x98($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X98);
    // 0x1519CE04: lw          $s4, 0x94($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X94);
    // 0x1519CE08: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x1519CE0C: bne         $at, $zero, L_1519CF24
    if (ctx->r1 != 0) {
        // 0x1519CE10: addiu       $v1, $s2, 0x10
        ctx->r3 = ADD32(ctx->r18, 0X10);
            goto L_1519CF24;
    }
    // 0x1519CE10: addiu       $v1, $s2, 0x10
    ctx->r3 = ADD32(ctx->r18, 0X10);
    // 0x1519CE14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1519CE18: addiu       $fp, $zero, 0x32C
    ctx->r30 = ADD32(0, 0X32C);
    // 0x1519CE1C: lwc1        $f4, 0x14C($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X14C);
    // 0x1519CE20: lui         $s7, 0x800D
    ctx->r23 = S32(0X800D << 16);
    // 0x1519CE24: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x1519CE28: mul.s       $f28, $f4, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f28.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1519CE2C: lb          $s1, 0x2E($s2)
    ctx->r17 = MEM_B(ctx->r18, 0X2E);
    // 0x1519CE30: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x1519CE34: addiu       $s7, $s7, -0x3D30
    ctx->r23 = ADD32(ctx->r23, -0X3D30);
    // 0x1519CE38: addiu       $s6, $zero, 0x28
    ctx->r22 = ADD32(0, 0X28);
    // 0x1519CE3C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_1519CE40:
    // 0x1519CE40: bgez        $s1, L_1519CE50
    if (SIGNED(ctx->r17) >= 0) {
        // 0x1519CE44: nop
    
            goto L_1519CE50;
    }
    // 0x1519CE44: nop

    // 0x1519CE48: lbu         $s1, 0x25($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X25);
    // 0x1519CE4C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_1519CE50:
    // 0x1519CE50: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519CE54: mflo        $t7
    ctx->r15 = lo;
    // 0x1519CE58: addu        $s0, $t7, $s4
    ctx->r16 = ADD32(ctx->r15, ctx->r20);
    // 0x1519CE5C: lwc1        $f22, 0x1C($s0)
    ctx->f22.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1519CE60: add.s       $f24, $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f22.fl;
    // 0x1519CE64: c.le.s      $f26, $f24
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f26.fl <= ctx->f24.fl;
    // 0x1519CE68: nop

    // 0x1519CE6C: bc1fl       L_1519CF18
    if (!c1cs) {
        // 0x1519CE70: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_1519CF18;
    }
    goto skip_0;
    // 0x1519CE70: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    skip_0:
    // 0x1519CE74: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x1519CE78: sub.s       $f6, $f24, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f24.fl - ctx->f26.fl;
    // 0x1519CE7C: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1519CE80: subu        $t8, $v0, $s7
    ctx->r24 = SUB32(ctx->r2, ctx->r23);
    // 0x1519CE84: div         $zero, $t8, $fp
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r30)));
    // 0x1519CE88: div.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1519CE8C: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519CE90: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519CE94: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1519CE98: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x1519CE9C: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1519CEA0: mflo        $t9
    ctx->r25 = lo;
    // 0x1519CEA4: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x1519CEA8: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x1519CEAC: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1519CEB0: add.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x1519CEB4: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519CEB8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1519CEBC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1519CEC0: sub.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x1519CEC4: lhu         $t0, 0x76($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X76);
    // 0x1519CEC8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519CECC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1519CED0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519CED4: add.s       $f14, $f16, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1519CED8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1519CEDC: add.s       $f20, $f18, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x1519CEE0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x1519CEE4: bne         $fp, $zero, L_1519CEF0
    if (ctx->r30 != 0) {
        // 0x1519CEE8: nop
    
            goto L_1519CEF0;
    }
    // 0x1519CEE8: nop

    // 0x1519CEEC: break       7
    do_break(354012908);
L_1519CEF0:
    // 0x1519CEF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1519CEF4: bne         $fp, $at, L_1519CF08
    if (ctx->r30 != ctx->r1) {
        // 0x1519CEF8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1519CF08;
    }
    // 0x1519CEF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1519CEFC: bne         $t8, $at, L_1519CF08
    if (ctx->r24 != ctx->r1) {
        // 0x1519CF00: nop
    
            goto L_1519CF08;
    }
    // 0x1519CF00: nop

    // 0x1519CF04: break       6
    do_break(354012932);
L_1519CF08:
    // 0x1519CF08: jal         0x1505D1C4
    // 0x1519CF0C: nop

    func_1505D1C4(rdram, ctx);
        goto after_0;
    // 0x1519CF0C: nop

    after_0:
    // 0x1519CF10: add.s       $f26, $f26, $f28
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f28.fl;
    // 0x1519CF14: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_1519CF18:
    // 0x1519CF18: lb          $t1, 0x2D($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X2D);
    // 0x1519CF1C: bnel        $s1, $t1, L_1519CE40
    if (ctx->r17 != ctx->r9) {
        // 0x1519CF20: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_1519CE40;
    }
    goto skip_1;
    // 0x1519CF20: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_1:
L_1519CF24:
    // 0x1519CF24: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x1519CF28: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x1519CF2C: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x1519CF30: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x1519CF34: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x1519CF38: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x1519CF3C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1519CF40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x1519CF44: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x1519CF48: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1519CF4C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x1519CF50: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x1519CF54: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x1519CF58: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x1519CF5C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x1519CF60: jr          $ra
    // 0x1519CF64: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    return;
    // 0x1519CF64: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_1519EF04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519EF04: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1519EF08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1519EF0C: nop

    // 0x1519EF10: lw          $v1, 0x110($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X110);
    // 0x1519EF14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1519EF18: lwc1        $f4, 0x18($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1519EF1C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1519EF20: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x1519EF24: lwc1        $f8, 0x1C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1519EF28: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1519EF2C: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x1519EF30: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x1519EF34: swc1        $f16, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f16.u32l;
    // 0x1519EF38: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1519EF3C: swc1        $f18, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f18.u32l;
    // 0x1519EF40: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1519EF44: swc1        $f4, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f4.u32l;
    // 0x1519EF48: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519EF4C: swc1        $f6, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f6.u32l;
    // 0x1519EF50: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1519EF54: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x1519EF58: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1519EF5C: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x1519EF60: jr          $ra
    // 0x1519EF64: nop

    return;
    return;
    // 0x1519EF64: nop

;}
RECOMP_FUNC void func_1506C43C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506C43C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506C440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506C444: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506C448: jal         0x100109D0
    // 0x1506C44C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_100109D0(rdram, ctx);
        goto after_0;
    // 0x1506C44C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x1506C450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506C454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506C458: jr          $ra
    // 0x1506C45C: nop

    return;
    return;
    // 0x1506C45C: nop

;}
RECOMP_FUNC void func_15045714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15045714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15045718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1504571C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15045720: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15045724: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15045728: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1504572C: jal         0x1510F800
    // 0x15045730: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x15045730: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x15045734: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x15045738: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x1504573C: lhu         $a3, 0x1E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X1E);
    // 0x15045740: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15045744: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15045748: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1504574C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15045750: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x15045754: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x15045758: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x1504575C: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15045760: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x15045764: jal         0x150A6500
    // 0x15045768: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    func_150A6500(rdram, ctx);
        goto after_1;
    // 0x15045768: sra         $a1, $t0, 16
    ctx->r5 = S32(SIGNED(ctx->r8) >> 16);
    after_1:
    // 0x1504576C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x15045770: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x15045774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15045778: jr          $ra
    // 0x1504577C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1504577C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150762D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150762D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150762D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150762DC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150762E0: lw          $v0, 0x154C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X154C);
    // 0x150762E4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150762E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150762EC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150762F0: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150762F4: lui         $a3, 0x3EE6
    ctx->r7 = S32(0X3EE6 << 16);
    // 0x150762F8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150762FC: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15076300: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15076304: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15076308: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x1507630C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15076310: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15076314: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15076318: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x1507631C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15076320: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15076324: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x15076328: jal         0x151669A0
    // 0x1507632C: nop

    func_151669A0(rdram, ctx);
        goto after_0;
    // 0x1507632C: nop

    after_0:
    // 0x15076330: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15076334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15076338: jr          $ra
    // 0x1507633C: nop

    return;
    return;
    // 0x1507633C: nop

;}
RECOMP_FUNC void func_150F4A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F4A38: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150F4A3C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150F4A40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F4A44: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150F4A48: lbu         $t6, 0x194($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X194);
    // 0x150F4A4C: addiu       $v1, $s0, 0x170
    ctx->r3 = ADD32(ctx->r16, 0X170);
    // 0x150F4A50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150F4A54: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150F4A58: bnel        $t7, $zero, L_150F4A74
    if (ctx->r15 != 0) {
        // 0x150F4A5C: addiu       $v1, $s0, 0x170
        ctx->r3 = ADD32(ctx->r16, 0X170);
            goto L_150F4A74;
    }
    goto skip_0;
    // 0x150F4A5C: addiu       $v1, $s0, 0x170
    ctx->r3 = ADD32(ctx->r16, 0X170);
    skip_0:
    // 0x150F4A60: lbu         $v0, 0x24($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X24);
    // 0x150F4A64: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x150F4A68: beql        $t8, $zero, L_150F4AC8
    if (ctx->r24 == 0) {
        // 0x150F4A6C: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_150F4AC8;
    }
    goto skip_1;
    // 0x150F4A6C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    skip_1:
    // 0x150F4A70: addiu       $v1, $s0, 0x170
    ctx->r3 = ADD32(ctx->r16, 0X170);
L_150F4A74:
    // 0x150F4A74: jal         0x15144B34
    // 0x150F4A78: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    func_15144B34(rdram, ctx);
        goto after_0;
    // 0x150F4A78: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_0:
    // 0x150F4A7C: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150F4A80: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150F4A84: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x150F4A88: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F4A8C: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x150F4A90: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150F4A94: lwc1        $f10, 0x3C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150F4A98: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150F4A9C: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x150F4AA0: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150F4AA4: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150F4AA8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F4AAC: jal         0x15143E64
    // 0x150F4AB0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    func_15143E64(rdram, ctx);
        goto after_1;
    // 0x150F4AB0: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x150F4AB4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x150F4AB8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150F4ABC: lbu         $v0, 0x24($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X24);
    // 0x150F4AC0: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x150F4AC4: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
L_150F4AC8:
    // 0x150F4AC8: beq         $t9, $zero, L_150F4BCC
    if (ctx->r25 == 0) {
        // 0x150F4ACC: lwc1        $f2, 0x58($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
            goto L_150F4BCC;
    }
    // 0x150F4ACC: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150F4AD0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150F4AD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150F4AD8: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x150F4ADC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150F4AE0: nop

    // 0x150F4AE4: bc1fl       L_150F4AFC
    if (!c1cs) {
        // 0x150F4AE8: mtc1        $at, $f10
        ctx->f10.u32l = ctx->r1;
            goto L_150F4AFC;
    }
    goto skip_2;
    // 0x150F4AE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    skip_2:
    // 0x150F4AEC: sb          $zero, 0x70($s0)
    MEM_B(0X70, ctx->r16) = 0;
    // 0x150F4AF0: b           L_150F4BCC
    // 0x150F4AF4: lbu         $v0, 0x24($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X24);
        goto L_150F4BCC;
    // 0x150F4AF4: lbu         $v0, 0x24($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X24);
    // 0x150F4AF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
L_150F4AFC:
    // 0x150F4AFC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150F4B00: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x150F4B04: nop

    // 0x150F4B08: bc1fl       L_150F4BC8
    if (!c1cs) {
        // 0x150F4B0C: sb          $t2, 0x70($s0)
        MEM_B(0X70, ctx->r16) = ctx->r10;
            goto L_150F4BC8;
    }
    goto skip_3;
    // 0x150F4B0C: sb          $t2, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r10;
    skip_3:
    // 0x150F4B10: sub.s       $f16, $f2, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x150F4B14: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4B18: ldc1        $f4, 0x1A88($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X1A88);
    // 0x150F4B1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F4B20: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x150F4B24: ldc1        $f8, 0x1A90($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X1A90);
    // 0x150F4B28: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x150F4B2C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150F4B30: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x150F4B34: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x150F4B38: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150F4B3C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x150F4B40: nop

    // 0x150F4B44: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x150F4B48: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x150F4B4C: nop

    // 0x150F4B50: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x150F4B54: beql        $t1, $zero, L_150F4BA8
    if (ctx->r9 == 0) {
        // 0x150F4B58: mfc1        $t1, $f16
        ctx->r9 = (int32_t)ctx->f16.u32l;
            goto L_150F4BA8;
    }
    goto skip_4;
    // 0x150F4B58: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    skip_4:
    // 0x150F4B5C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x150F4B60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F4B64: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150F4B68: sub.d       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f10.d - ctx->f16.d;
    // 0x150F4B6C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x150F4B70: nop

    // 0x150F4B74: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x150F4B78: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x150F4B7C: nop

    // 0x150F4B80: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x150F4B84: bne         $t1, $zero, L_150F4B9C
    if (ctx->r9 != 0) {
        // 0x150F4B88: nop
    
            goto L_150F4B9C;
    }
    // 0x150F4B88: nop

    // 0x150F4B8C: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x150F4B90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F4B94: b           L_150F4BB4
    // 0x150F4B98: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_150F4BB4;
    // 0x150F4B98: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_150F4B9C:
    // 0x150F4B9C: b           L_150F4BB4
    // 0x150F4BA0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_150F4BB4;
    // 0x150F4BA0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150F4BA4: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
L_150F4BA8:
    // 0x150F4BA8: nop

    // 0x150F4BAC: bltz        $t1, L_150F4B9C
    if (SIGNED(ctx->r9) < 0) {
        // 0x150F4BB0: nop
    
            goto L_150F4B9C;
    }
    // 0x150F4BB0: nop

L_150F4BB4:
    // 0x150F4BB4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150F4BB8: sb          $t1, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r9;
    // 0x150F4BBC: b           L_150F4BCC
    // 0x150F4BC0: lbu         $v0, 0x24($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X24);
        goto L_150F4BCC;
    // 0x150F4BC0: lbu         $v0, 0x24($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X24);
    // 0x150F4BC4: sb          $t2, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r10;
L_150F4BC8:
    // 0x150F4BC8: lbu         $v0, 0x24($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X24);
L_150F4BCC:
    // 0x150F4BCC: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x150F4BD0: beq         $t3, $zero, L_150F4CE4
    if (ctx->r11 == 0) {
        // 0x150F4BD4: andi        $t4, $v0, 0x4
        ctx->r12 = ctx->r2 & 0X4;
            goto L_150F4CE4;
    }
    // 0x150F4BD4: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
    // 0x150F4BD8: bnel        $t4, $zero, L_150F4CE8
    if (ctx->r12 != 0) {
        // 0x150F4BDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150F4CE8;
    }
    goto skip_5;
    // 0x150F4BDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_5:
    // 0x150F4BE0: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x150F4BE4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150F4BE8: srl         $t5, $v0, 16
    ctx->r13 = S32(U32(ctx->r2) >> 16);
    // 0x150F4BEC: beql        $t5, $zero, L_150F4C44
    if (ctx->r13 == 0) {
        // 0x150F4BF0: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_150F4C44;
    }
    goto skip_6;
    // 0x150F4BF0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_6:
    // 0x150F4BF4: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150F4BF8: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150F4BFC: lwc1        $f10, 0x40($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150F4C00: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150F4C04: andi        $a0, $t5, 0xFFFF
    ctx->r4 = ctx->r13 & 0XFFFF;
    // 0x150F4C08: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150F4C0C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150F4C10: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150F4C14: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150F4C18: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x150F4C1C: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150F4C20: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150F4C24: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x150F4C28: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x150F4C2C: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x150F4C30: jal         0x1000F9D4
    // 0x150F4C34: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_1000F9D4(rdram, ctx);
        goto after_2;
    // 0x150F4C34: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_2:
    // 0x150F4C38: b           L_150F4CE8
    // 0x150F4C3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150F4CE8;
    // 0x150F4C3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F4C40: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_150F4C44:
    // 0x150F4C44: nop

    // 0x150F4C48: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x150F4C4C: nop

    // 0x150F4C50: bc1fl       L_150F4CE8
    if (!c1cs) {
        // 0x150F4C54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150F4CE8;
    }
    goto skip_7;
    // 0x150F4C54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_7:
    // 0x150F4C58: jal         0x150ADA20
    // 0x150F4C5C: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150F4C5C: nop

    after_3:
    // 0x150F4C60: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x150F4C64: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150F4C68: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150F4C6C: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150F4C70: andi        $a1, $v0, 0x3FFF
    ctx->r5 = ctx->r2 & 0X3FFF;
    // 0x150F4C74: andi        $t5, $a0, 0xFFFF
    ctx->r13 = ctx->r4 & 0XFFFF;
    // 0x150F4C78: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150F4C7C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x150F4C80: addiu       $a1, $a1, 0x4000
    ctx->r5 = ADD32(ctx->r5, 0X4000);
    // 0x150F4C84: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x150F4C88: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x150F4C8C: addiu       $t5, $zero, 0x4E20
    ctx->r13 = ADD32(0, 0X4E20);
    // 0x150F4C90: addiu       $t4, $zero, 0x2710
    ctx->r12 = ADD32(0, 0X2710);
    // 0x150F4C94: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150F4C98: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150F4C9C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150F4CA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F4CA4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150F4CA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F4CAC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x150F4CB0: nop

    // 0x150F4CB4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150F4CB8: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x150F4CBC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150F4CC0: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x150F4CC4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150F4CC8: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x150F4CCC: jal         0x10010F88
    // 0x150F4CD0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_10010F88(rdram, ctx);
        goto after_4;
    // 0x150F4CD0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_4:
    // 0x150F4CD4: lw          $t6, 0x88($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X88);
    // 0x150F4CD8: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x150F4CDC: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x150F4CE0: sw          $t8, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r24;
L_150F4CE4:
    // 0x150F4CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150F4CE8:
    // 0x150F4CE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150F4CEC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150F4CF0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x150F4CF4: jr          $ra
    // 0x150F4CF8: nop

    return;
    return;
    // 0x150F4CF8: nop

;}
RECOMP_FUNC void func_150D20DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D20DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D20E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D20E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150D20E8: jal         0x150D2054
    // 0x150D20EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150D2054(rdram, ctx);
        goto after_0;
    // 0x150D20EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150D20F0: jal         0x1514933C
    // 0x150D20F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150D20F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150D20F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D20FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150D2100: jr          $ra
    // 0x150D2104: nop

    return;
    return;
    // 0x150D2104: nop

;}
RECOMP_FUNC void func_15171200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15171200: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x15171204: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x15171208: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1517120C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x15171210: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x15171214: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x15171218: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x1517121C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x15171220: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15171224: lwc1        $f22, 0x100($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X100);
    // 0x15171228: lwc1        $f24, 0xF8($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x1517122C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15171230: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15171234: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x15171238: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x1517123C: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x15171240: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x15171244: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x15171248: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x1517124C: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x15171250: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15171254: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x15171258: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x1517125C: lwc1        $f12, 0x10C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x15171260: lwc1        $f14, 0xF4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x15171264: lui         $at, 0xBF40
    ctx->r1 = S32(0XBF40 << 16);
    // 0x15171268: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1517126C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15171270: lwc1        $f10, 0x6FB0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6FB0);
    // 0x15171274: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x15171278: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517127C: lwc1        $f16, 0x6FB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6FB4);
    // 0x15171280: mul.s       $f22, $f22, $f26
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x15171284: lwc1        $f4, 0xFC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x15171288: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517128C: mul.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x15171290: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x15171294: sub.s       $f20, $f4, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f24.fl;
    // 0x15171298: lwc1        $f4, 0x6FB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6FB8);
    // 0x1517129C: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x151712A0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151712A4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151712A8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151712AC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x151712B0: mul.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x151712B4: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x151712B8: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151712BC: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x151712C0: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x151712C4: swc1        $f12, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f12.u32l;
    // 0x151712C8: sb          $t7, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = ctx->r15;
    // 0x151712CC: sb          $t8, 0xD1($sp)
    MEM_B(0XD1, ctx->r29) = ctx->r24;
    // 0x151712D0: sb          $zero, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = 0;
    // 0x151712D4: sb          $zero, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = 0;
    // 0x151712D8: sb          $zero, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = 0;
    // 0x151712DC: sb          $s1, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r17;
    // 0x151712E0: sb          $t0, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r8;
    // 0x151712E4: sb          $t1, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r9;
    // 0x151712E8: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x151712EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151712F0: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x151712F4: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
    // 0x151712F8: blez        $s2, L_151715C4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x151712FC: sb          $t9, 0xD7($sp)
        MEM_B(0XD7, ctx->r29) = ctx->r25;
            goto L_151715C4;
    }
    // 0x151712FC: sb          $t9, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r25;
    // 0x15171300: lui         $at, 0x3970
    ctx->r1 = S32(0X3970 << 16);
    // 0x15171304: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x15171308: lui         $at, 0x3920
    ctx->r1 = S32(0X3920 << 16);
    // 0x1517130C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15171310: swc1        $f14, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f14.u32l;
    // 0x15171314: addiu       $s5, $sp, 0x7C
    ctx->r21 = ADD32(ctx->r29, 0X7C);
    // 0x15171318: lw          $s4, 0x114($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X114);
    // 0x1517131C: lbu         $s3, 0x113($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X113);
L_15171320:
    // 0x15171320: jal         0x150ADA20
    // 0x15171324: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15171324: nop

    after_0:
    // 0x15171328: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1517132C: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15171330: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x15171334: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15171338: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x1517133C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15171340: jal         0x150ADA20
    // 0x15171344: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15171344: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x15171348: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1517134C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x15171350: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x15171354: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15171358: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x1517135C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15171360: jal         0x150ADA20
    // 0x15171364: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15171364: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x15171368: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1517136C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x15171370: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x15171374: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15171378: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1517137C: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x15171380: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15171384: jal         0x1518C900
    // 0x15171388: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    func_1518C900(rdram, ctx);
        goto after_3;
    // 0x15171388: swc1        $f10, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x1517138C: jal         0x150ADA20
    // 0x15171390: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15171390: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    after_4:
    // 0x15171394: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15171398: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x1517139C: nop

    // 0x151713A0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151713A4: mul.s       $f4, $f18, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x151713A8: jal         0x150ADA20
    // 0x151713AC: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151713AC: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x151713B0: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x151713B4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x151713B8: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151713BC: bgez        $t6, L_151713D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x151713C0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_151713D4;
    }
    // 0x151713C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151713C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151713C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151713CC: nop

    // 0x151713D0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_151713D4:
    // 0x151713D4: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151713D8: lwc1        $f4, 0xF4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x151713DC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151713E0: jal         0x150ADA20
    // 0x151713E4: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151713E4: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x151713E8: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x151713EC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x151713F0: nop

    // 0x151713F4: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151713F8: mul.s       $f16, $f8, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x151713FC: jal         0x150ADA20
    // 0x15171400: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15171400: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x15171404: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15171408: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x1517140C: nop

    // 0x15171410: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15171414: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x15171418: jal         0x150ADA20
    // 0x1517141C: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x1517141C: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x15171420: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15171424: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x15171428: nop

    // 0x1517142C: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15171430: mul.s       $f16, $f8, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f28.fl);
    // 0x15171434: jal         0x150ADA20
    // 0x15171438: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x15171438: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x1517143C: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x15171440: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x15171444: nop

    // 0x15171448: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1517144C: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x15171450: jal         0x150ADA20
    // 0x15171454: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x15171454: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x15171458: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x1517145C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x15171460: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15171464: bgez        $t1, L_15171478
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15171468: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_15171478;
    }
    // 0x15171468: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1517146C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15171470: nop

    // 0x15171474: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
L_15171478:
    // 0x15171478: mul.s       $f18, $f8, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x1517147C: nop

    // 0x15171480: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x15171484: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x15171488: jal         0x150ADA20
    // 0x1517148C: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x1517148C: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x15171490: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x15171494: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x15171498: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1517149C: bgez        $t2, L_151714B0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x151714A0: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_151714B0;
    }
    // 0x151714A0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151714A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151714A8: nop

    // 0x151714AC: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_151714B0:
    // 0x151714B0: mul.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x151714B4: nop

    // 0x151714B8: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x151714BC: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x151714C0: jal         0x150ADA20
    // 0x151714C4: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x151714C4: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x151714C8: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x151714CC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x151714D0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x151714D4: bgez        $t3, L_151714EC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x151714D8: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_151714EC;
    }
    // 0x151714D8: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151714DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x151714E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151714E4: nop

    // 0x151714E8: add.s       $f8, $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f16.fl;
L_151714EC:
    // 0x151714EC: mul.s       $f18, $f8, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x151714F0: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151714F4: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151714F8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151714FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15171500: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15171504: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x15171508: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x1517150C: lwc1        $f18, 0x6FBC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6FBC);
    // 0x15171510: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x15171514: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15171518: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1517151C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x15171520: add.s       $f0, $f4, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x15171524: add.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x15171528: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x1517152C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15171530: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x15171534: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x15171538: nop

    // 0x1517153C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x15171540: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x15171544: nop

    // 0x15171548: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x1517154C: beql        $t5, $zero, L_1517159C
    if (ctx->r13 == 0) {
        // 0x15171550: mfc1        $t5, $f16
        ctx->r13 = (int32_t)ctx->f16.u32l;
            goto L_1517159C;
    }
    goto skip_0;
    // 0x15171550: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x15171554: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15171558: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1517155C: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x15171560: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x15171564: nop

    // 0x15171568: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1517156C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x15171570: nop

    // 0x15171574: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x15171578: bne         $t5, $zero, L_15171590
    if (ctx->r13 != 0) {
        // 0x1517157C: nop
    
            goto L_15171590;
    }
    // 0x1517157C: nop

    // 0x15171580: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x15171584: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15171588: b           L_151715A8
    // 0x1517158C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_151715A8;
    // 0x1517158C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_15171590:
    // 0x15171590: b           L_151715A8
    // 0x15171594: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_151715A8;
    // 0x15171594: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x15171598: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
L_1517159C:
    // 0x1517159C: nop

    // 0x151715A0: bltz        $t5, L_15171590
    if (SIGNED(ctx->r13) < 0) {
        // 0x151715A4: nop
    
            goto L_15171590;
    }
    // 0x151715A4: nop

L_151715A8:
    // 0x151715A8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x151715AC: sb          $t5, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r13;
    // 0x151715B0: jal         0x15168BE4
    // 0x151715B4: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    func_15168BE4(rdram, ctx);
        goto after_13;
    // 0x151715B4: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    after_13:
    // 0x151715B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151715BC: bne         $s0, $s2, L_15171320
    if (ctx->r16 != ctx->r18) {
        // 0x151715C0: nop
    
            goto L_15171320;
    }
    // 0x151715C0: nop

L_151715C4:
    // 0x151715C4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x151715C8: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x151715CC: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x151715D0: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x151715D4: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x151715D8: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x151715DC: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x151715E0: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x151715E4: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x151715E8: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x151715EC: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x151715F0: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x151715F4: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x151715F8: jr          $ra
    // 0x151715FC: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    return;
    // 0x151715FC: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_150723AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150723AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150723B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150723B4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150723B8: jal         0x15083E90
    // 0x150723BC: lbu         $a0, 0x1583($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1583);
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x150723BC: lbu         $a0, 0x1583($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1583);
    after_0:
    // 0x150723C0: beq         $v0, $zero, L_150723D0
    if (ctx->r2 == 0) {
        // 0x150723C4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_150723D0;
    }
    // 0x150723C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150723C8: jal         0x15060F28
    // 0x150723CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15060F28(rdram, ctx);
        goto after_1;
    // 0x150723CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_150723D0:
    // 0x150723D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150723D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150723D8: jr          $ra
    // 0x150723DC: nop

    return;
    return;
    // 0x150723DC: nop

;}
RECOMP_FUNC void func_1513A48C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513A48C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1513A490: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A494: lwc1        $f0, 0x4950($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4950);
    // 0x1513A498: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1513A49C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x1513A4A0: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x1513A4A4: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x1513A4A8: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x1513A4AC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x1513A4B0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x1513A4B4: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1513A4B8: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x1513A4BC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x1513A4C0: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x1513A4C4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1513A4C8: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x1513A4CC: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x1513A4D0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1513A4D4: addiu       $t4, $zero, -0x37
    ctx->r12 = ADD32(0, -0X37);
    // 0x1513A4D8: sw          $t2, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r10;
    // 0x1513A4DC: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x1513A4E0: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x1513A4E4: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x1513A4E8: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x1513A4EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1513A4F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1513A4F4: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x1513A4F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1513A4FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A500: lwc1        $f8, 0x4954($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4954);
    // 0x1513A504: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A508: lwc1        $f10, 0x4958($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4958);
    // 0x1513A50C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513A510: lwc1        $f16, 0x495C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X495C);
    // 0x1513A514: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x1513A518: lbu         $t0, 0x6F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X6F);
    // 0x1513A51C: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x1513A520: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x1513A524: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x1513A528: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1513A52C: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x1513A530: sh          $t3, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r11;
    // 0x1513A534: sh          $t4, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r12;
    // 0x1513A538: sh          $t5, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r13;
    // 0x1513A53C: sh          $t6, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r14;
    // 0x1513A540: sh          $t7, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r15;
    // 0x1513A544: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x1513A548: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x1513A54C: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1513A550: addiu       $a2, $a2, 0x4264
    ctx->r6 = ADD32(ctx->r6, 0X4264);
    // 0x1513A554: addiu       $a1, $a1, 0x4260
    ctx->r5 = ADD32(ctx->r5, 0X4260);
    // 0x1513A558: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x1513A55C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1513A560: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x1513A564: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x1513A568: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x1513A56C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x1513A570: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x1513A574: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x1513A578: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1513A57C: jal         0x15152190
    // 0x1513A580: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_15152190(rdram, ctx);
        goto after_0;
    // 0x1513A580: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x1513A584: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1513A588: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1513A58C: jr          $ra
    // 0x1513A590: nop

    return;
    return;
    // 0x1513A590: nop

;}
RECOMP_FUNC void func_15171F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15171F04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15171F08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15171F0C: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x15171F10: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x15171F14: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15171F18: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15171F1C: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x15171F20: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x15171F24: lbu         $t8, 0x5F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5F);
    // 0x15171F28: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x15171F2C: lh          $a0, 0x42($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X42);
    // 0x15171F30: lhu         $a1, 0x46($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X46);
    // 0x15171F34: lbu         $a2, 0x4B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X4B);
    // 0x15171F38: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x15171F3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15171F40: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15171F44: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15171F48: jal         0x15171CA0
    // 0x15171F4C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_15171CA0(rdram, ctx);
        goto after_0;
    // 0x15171F4C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x15171F50: beq         $v0, $zero, L_15171FB0
    if (ctx->r2 == 0) {
        // 0x15171F54: addiu       $a0, $v0, 0x10
        ctx->r4 = ADD32(ctx->r2, 0X10);
            goto L_15171FB0;
    }
    // 0x15171F54: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x15171F58: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15171F5C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15171F60: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x15171F64: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15171F68: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x15171F6C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15171F70: lbu         $t1, 0x58($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X58);
    // 0x15171F74: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x15171F78: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x15171F7C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x15171F80: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15171F84: lw          $t3, -0x35B4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X35B4);
    // 0x15171F88: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x15171F8C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x15171F90: lhu         $t4, 0x6($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X6);
    // 0x15171F94: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x15171F98: jal         0x151725FC
    // 0x15171F9C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_151725FC(rdram, ctx);
        goto after_1;
    // 0x15171F9C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_1:
    // 0x15171FA0: bnel        $v0, $zero, L_15171FB4
    if (ctx->r2 != 0) {
        // 0x15171FA4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15171FB4;
    }
    goto skip_0;
    // 0x15171FA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15171FA8: jal         0x1516972C
    // 0x15171FAC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x15171FAC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_2:
L_15171FB0:
    // 0x15171FB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15171FB4:
    // 0x15171FB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15171FB8: jr          $ra
    // 0x15171FBC: nop

    return;
    return;
    // 0x15171FBC: nop

;}
RECOMP_FUNC void func_15079A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079A58: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15079A5C: lw          $t1, 0x154C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X154C);
    // 0x15079A60: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079A64: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15079A68: lbu         $t2, 0x13F($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X13F);
    // 0x15079A6C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15079A70: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15079A74: lw          $t0, 0x2110($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2110);
    // 0x15079A78: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15079A7C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x15079A80: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x15079A84: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x15079A88: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15079A8C: sh          $t9, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r25;
    // 0x15079A90: jr          $ra
    // 0x15079A94: nop

    return;
    return;
    // 0x15079A94: nop

;}
RECOMP_FUNC void func_1513C9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513C9FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513CA00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513CA04: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x1513CA08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1513CA0C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1513CA10: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x1513CA14: beq         $t7, $zero, L_1513CA24
    if (ctx->r15 == 0) {
        // 0x1513CA18: nop
    
            goto L_1513CA24;
    }
    // 0x1513CA18: nop

    // 0x1513CA1C: b           L_1513CA24
    // 0x1513CA20: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
        goto L_1513CA24;
    // 0x1513CA20: lbu         $v0, 0x1F($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1F);
L_1513CA24:
    // 0x1513CA24: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1513CA28: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1513CA2C: lw          $t9, -0x6110($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6110);
    // 0x1513CA30: jalr        $t9
    // 0x1513CA34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1513CA34: nop

    after_0:
    // 0x1513CA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513CA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513CA40: jr          $ra
    // 0x1513CA44: nop

    return;
    return;
    // 0x1513CA44: nop

;}
RECOMP_FUNC void func_1515BAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515BAAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1515BAB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1515BAB4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x1515BAB8: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1515BABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1515BAC0: jal         0x1515B5F4
    // 0x1515BAC4: nop

    func_1515B5F4(rdram, ctx);
        goto after_0;
    // 0x1515BAC4: nop

    after_0:
    // 0x1515BAC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1515BACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1515BAD0: jr          $ra
    // 0x1515BAD4: nop

    return;
    return;
    // 0x1515BAD4: nop

;}
RECOMP_FUNC void func_151ABE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ABE00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151ABE04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151ABE08: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151ABE0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x151ABE10: lbu         $t6, 0x3B($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X3B);
    // 0x151ABE14: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x151ABE18: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x151ABE1C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151ABE20: jal         0x1516944C
    // 0x151ABE24: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    func_1516944C(rdram, ctx);
        goto after_0;
    // 0x151ABE24: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x151ABE28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151ABE2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151ABE30: jr          $ra
    // 0x151ABE34: nop

    return;
    return;
    // 0x151ABE34: nop

;}
RECOMP_FUNC void func_1501FC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501FC8C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x1501FC90: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x1501FC94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1501FC98: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x1501FC9C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x1501FCA0: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x1501FCA4: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501FCA8: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x1501FCAC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1501FCB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1501FCB4: lw          $t7, 0x35C8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X35C8);
    // 0x1501FCB8: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501FCBC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x1501FCC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1501FCC4: lhu         $t2, 0x0($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X0);
    // 0x1501FCC8: addiu       $t3, $t3, 0x3A50
    ctx->r11 = ADD32(ctx->r11, 0X3A50);
    // 0x1501FCCC: addu        $t0, $v0, $t3
    ctx->r8 = ADD32(ctx->r2, ctx->r11);
    // 0x1501FCD0: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x1501FCD4: bne         $at, $zero, L_1501FE58
    if (ctx->r1 != 0) {
        // 0x1501FCD8: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_1501FE58;
    }
    // 0x1501FCD8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1501FCDC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1501FCE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1501FCE4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x1501FCE8: nop

    // 0x1501FCEC: bc1fl       L_1501FCFC
    if (!c1cs) {
        // 0x1501FCF0: c.lt.s      $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
            goto L_1501FCFC;
    }
    goto skip_0;
    // 0x1501FCF0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    skip_0:
    // 0x1501FCF4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1501FCF8: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
L_1501FCFC:
    // 0x1501FCFC: nop

    // 0x1501FD00: bc1fl       L_1501FD10
    if (!c1cs) {
        // 0x1501FD04: lw          $t4, 0x0($t0)
        ctx->r12 = MEM_W(ctx->r8, 0X0);
            goto L_1501FD10;
    }
    goto skip_1;
    // 0x1501FD04: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    skip_1:
    // 0x1501FD08: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x1501FD0C: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
L_1501FD10:
    // 0x1501FD10: sll         $t1, $a0, 6
    ctx->r9 = S32(ctx->r4 << 6);
    // 0x1501FD14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501FD18: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x1501FD1C: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x1501FD20: lwc1        $f8, 0x69D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X69D4);
    // 0x1501FD24: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x1501FD28: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1501FD2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1501FD30: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1501FD34: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x1501FD38: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x1501FD3C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x1501FD40: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x1501FD44: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1501FD48: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x1501FD4C: jal         0x1501F72C
    // 0x1501FD50: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    func_1501F72C(rdram, ctx);
        goto after_0;
    // 0x1501FD50: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x1501FD54: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x1501FD58: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x1501FD5C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1501FD60: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x1501FD64: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1501FD68: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1501FD6C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x1501FD70: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x1501FD74: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x1501FD78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x1501FD7C: lw          $t3, 0x3868($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3868);
    // 0x1501FD80: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x1501FD84: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1501FD88: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1501FD8C: lhu         $t7, 0x6($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X6);
    // 0x1501FD90: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x1501FD94: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x1501FD98: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1501FD9C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1501FDA0: bne         $t7, $zero, L_1501FE3C
    if (ctx->r15 != 0) {
        // 0x1501FDA4: lwc1        $f2, 0x5C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
            goto L_1501FE3C;
    }
    // 0x1501FDA4: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1501FDA8: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1501FDAC: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x1501FDB0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1501FDB4: addu        $t9, $t8, $t1
    ctx->r25 = ADD32(ctx->r24, ctx->r9);
    // 0x1501FDB8: lw          $t2, 0x38($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X38);
    // 0x1501FDBC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1501FDC0: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1501FDC4: addu        $v1, $t2, $t4
    ctx->r3 = ADD32(ctx->r10, ctx->r12);
    // 0x1501FDC8: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1501FDCC: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1501FDD0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1501FDD4: sub.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x1501FDD8: sub.s       $f14, $f2, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x1501FDDC: c.eq.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl == ctx->f18.fl;
    // 0x1501FDE0: nop

    // 0x1501FDE4: bc1tl       L_1501FDF8
    if (c1cs) {
        // 0x1501FDE8: mov.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
            goto L_1501FDF8;
    }
    goto skip_2;
    // 0x1501FDE8: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    skip_2:
    // 0x1501FDEC: b           L_1501FDF8
    // 0x1501FDF0: div.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_1501FDF8;
    // 0x1501FDF0: div.s       $f0, $f14, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x1501FDF4: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
L_1501FDF8:
    // 0x1501FDF8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1501FDFC: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1501FE00: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x1501FE04: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1501FE08: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1501FE0C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1501FE10: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1501FE14: add.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1501FE18: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x1501FE1C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1501FE20: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1501FE24: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x1501FE28: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1501FE2C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1501FE30: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1501FE34: b           L_1501FE58
    // 0x1501FE38: swc1        $f18, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f18.u32l;
        goto L_1501FE58;
    // 0x1501FE38: swc1        $f18, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f18.u32l;
L_1501FE3C:
    // 0x1501FE3C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1501FE40: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x1501FE44: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1501FE48: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
    // 0x1501FE4C: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x1501FE50: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1501FE54: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
L_1501FE58:
    // 0x1501FE58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1501FE5C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x1501FE60: jr          $ra
    // 0x1501FE64: nop

    return;
    return;
    // 0x1501FE64: nop

;}
RECOMP_FUNC void func_15189FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15189FF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15189FF4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15189FF8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15189FFC: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x1518A000: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1518A004: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x1518A008: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1518A00C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1518A010: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1518A014: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1518A018: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x1518A01C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1518A020: sb          $t7, 0x58($a0)
    MEM_B(0X58, ctx->r4) = ctx->r15;
    // 0x1518A024: lbu         $t1, 0x53($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X53);
    // 0x1518A028: lbu         $t0, 0x4F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X4F);
    // 0x1518A02C: lbu         $t9, 0x4B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4B);
    // 0x1518A030: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1518A034: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1518A038: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x1518A03C: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x1518A040: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x1518A044: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x1518A048: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1518A04C: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1518A050: jal         0x151407D0
    // 0x1518A054: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_151407D0(rdram, ctx);
        goto after_0;
    // 0x1518A054: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x1518A058: beq         $v0, $zero, L_1518A07C
    if (ctx->r2 == 0) {
        // 0x1518A05C: addiu       $a0, $v0, 0x170
        ctx->r4 = ADD32(ctx->r2, 0X170);
            goto L_1518A07C;
    }
    // 0x1518A05C: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x1518A060: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x1518A064: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x1518A068: jal         0x10022EC0
    // 0x1518A06C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1518A06C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x1518A070: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x1518A074: b           L_1518A084
    // 0x1518A078: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_1518A084;
    // 0x1518A078: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1518A07C:
    // 0x1518A07C: b           L_1518A084
    // 0x1518A080: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1518A084;
    // 0x1518A080: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1518A084:
    // 0x1518A084: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1518A088: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1518A08C: jr          $ra
    // 0x1518A090: nop

    return;
    return;
    // 0x1518A090: nop

;}
RECOMP_FUNC void func_15125628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15125628: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1512562C: lbu         $v0, -0x400C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X400C);
    // 0x15125630: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15125634: beq         $v0, $zero, L_15125640
    if (ctx->r2 == 0) {
        // 0x15125638: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_15125640;
    }
    // 0x15125638: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x1512563C: sb          $t6, -0x400C($at)
    MEM_B(-0X400C, ctx->r1) = ctx->r14;
L_15125640:
    // 0x15125640: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15125644: lbu         $v0, -0x400B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X400B);
    // 0x15125648: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1512564C: beq         $v0, $zero, L_15125658
    if (ctx->r2 == 0) {
        // 0x15125650: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_15125658;
    }
    // 0x15125650: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x15125654: sb          $t7, -0x400B($at)
    MEM_B(-0X400B, ctx->r1) = ctx->r15;
L_15125658:
    // 0x15125658: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1512565C: lbu         $v0, -0x400A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X400A);
    // 0x15125660: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15125664: beq         $v0, $zero, L_15125670
    if (ctx->r2 == 0) {
        // 0x15125668: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_15125670;
    }
    // 0x15125668: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x1512566C: sb          $t8, -0x400A($at)
    MEM_B(-0X400A, ctx->r1) = ctx->r24;
L_15125670:
    // 0x15125670: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15125674: lbu         $v0, -0x4009($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4009);
    // 0x15125678: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1512567C: beq         $v0, $zero, L_15125688
    if (ctx->r2 == 0) {
        // 0x15125680: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_15125688;
    }
    // 0x15125680: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x15125684: sb          $t9, -0x4009($at)
    MEM_B(-0X4009, ctx->r1) = ctx->r25;
L_15125688:
    // 0x15125688: jr          $ra
    // 0x1512568C: nop

    return;
    return;
    // 0x1512568C: nop

;}
RECOMP_FUNC void func_1500E70C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500E70C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1500E710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1500E714: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x1500E718: bnel        $a0, $at, L_1500E72C
    if (ctx->r4 != ctx->r1) {
        // 0x1500E71C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1500E72C;
    }
    goto skip_0;
    // 0x1500E71C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1500E720: jal         0x15011C70
    // 0x1500E724: nop

    func_15011C70(rdram, ctx);
        goto after_0;
    // 0x1500E724: nop

    after_0:
    // 0x1500E728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1500E72C:
    // 0x1500E72C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1500E730: jr          $ra
    // 0x1500E734: nop

    return;
    return;
    // 0x1500E734: nop

;}
RECOMP_FUNC void func_151E1214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E1214: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151E1218: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151E121C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151E1220: addiu       $t1, $t1, 0xA96
    ctx->r9 = ADD32(ctx->r9, 0XA96);
    // 0x151E1224: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x151E1228: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151E122C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x151E1230: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x151E1234: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151E1238: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151E123C: lb          $t6, 0x0($t1)
    ctx->r14 = MEM_B(ctx->r9, 0X0);
    // 0x151E1240: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E1244: addiu       $v1, $v1, 0xA95
    ctx->r3 = ADD32(ctx->r3, 0XA95);
    // 0x151E1248: beq         $s1, $t6, L_151E12B0
    if (ctx->r17 == ctx->r14) {
        // 0x151E124C: lui         $t7, 0x800C
        ctx->r15 = S32(0X800C << 16);
            goto L_151E12B0;
    }
    // 0x151E124C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151E1250: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E1254: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
    // 0x151E1258: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151E125C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151E1260: lhu         $t7, 0x20($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X20);
    // 0x151E1264: addiu       $v1, $v1, 0xA95
    ctx->r3 = ADD32(ctx->r3, 0XA95);
    // 0x151E1268: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151E126C: andi        $t8, $t7, 0xFFDF
    ctx->r24 = ctx->r15 & 0XFFDF;
    // 0x151E1270: sh          $t8, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r24;
    // 0x151E1274: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x151E1278: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x151E127C: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x151E1280: subu        $t0, $t9, $t3
    ctx->r8 = SUB32(ctx->r25, ctx->r11);
    // 0x151E1284: bgtzl       $t0, L_151E12A8
    if (SIGNED(ctx->r8) > 0) {
        // 0x151E1288: sb          $t0, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r8;
            goto L_151E12A8;
    }
    goto skip_0;
    // 0x151E1288: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    skip_0:
    // 0x151E128C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x151E1290: lw          $t5, -0x22C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X22C);
    // 0x151E1294: lb          $t4, 0x0($t1)
    ctx->r12 = MEM_B(ctx->r9, 0X0);
    // 0x151E1298: sb          $t4, 0x3F($t5)
    MEM_B(0X3F, ctx->r13) = ctx->r12;
    // 0x151E129C: b           L_151E1724
    // 0x151E12A0: sb          $s1, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r17;
        goto L_151E1724;
    // 0x151E12A0: sb          $s1, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r17;
    // 0x151E12A4: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
L_151E12A8:
    // 0x151E12A8: b           L_151E12D8
    // 0x151E12AC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
        goto L_151E12D8;
    // 0x151E12AC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_151E12B0:
    // 0x151E12B0: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x151E12B4: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x151E12B8: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x151E12BC: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x151E12C0: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x151E12C4: bnel        $at, $zero, L_151E12D4
    if (ctx->r1 != 0) {
        // 0x151E12C8: sb          $v0, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r2;
            goto L_151E12D4;
    }
    goto skip_1;
    // 0x151E12C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    skip_1:
    // 0x151E12CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x151E12D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_151E12D4:
    // 0x151E12D4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_151E12D8:
    // 0x151E12D8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x151E12DC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151E12E0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151E12E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151E12E8: jal         0x1504332C
    // 0x151E12EC: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_0;
    // 0x151E12EC: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    after_0:
    // 0x151E12F0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E12F4: lw          $t2, -0x22C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X22C);
    // 0x151E12F8: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151E12FC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E1300: lb          $t9, 0x42($t2)
    ctx->r25 = MEM_B(ctx->r10, 0X42);
    // 0x151E1304: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E1308: lb          $a1, -0x1C0($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X1C0);
    // 0x151E130C: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x151E1310: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x151E1314: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x151E1318: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x151E131C: lb          $t4, -0x496F($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X496F);
    // 0x151E1320: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151E1324: addiu       $t8, $t8, -0x48B4
    ctx->r24 = ADD32(ctx->r24, -0X48B4);
    // 0x151E1328: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x151E132C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x151E1330: lb          $t7, -0x11D($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X11D);
    // 0x151E1334: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151E1338: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E133C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x151E1340: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x151E1344: addu        $t2, $v0, $a1
    ctx->r10 = ADD32(ctx->r2, ctx->r5);
    // 0x151E1348: blez        $a1, L_151E1430
    if (SIGNED(ctx->r5) <= 0) {
        // 0x151E134C: lb          $s4, -0x1($t2)
        ctx->r20 = MEM_B(ctx->r10, -0X1);
            goto L_151E1430;
    }
    // 0x151E134C: lb          $s4, -0x1($t2)
    ctx->r20 = MEM_B(ctx->r10, -0X1);
    // 0x151E1350: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x151E1354: addiu       $s3, $s3, -0x260
    ctx->r19 = ADD32(ctx->r19, -0X260);
    // 0x151E1358: addiu       $s0, $s0, -0x1BC
    ctx->r16 = ADD32(ctx->r16, -0X1BC);
L_151E135C:
    // 0x151E135C: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x151E1360: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151E1364: bltzl       $v1, L_151E1424
    if (SIGNED(ctx->r3) < 0) {
        // 0x151E1368: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_151E1424;
    }
    goto skip_2;
    // 0x151E1368: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x151E136C: lw          $t9, -0x22C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X22C);
    // 0x151E1370: sll         $t3, $v1, 1
    ctx->r11 = S32(ctx->r3 << 1);
    // 0x151E1374: lb          $v0, 0x0($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X0);
    // 0x151E1378: addu        $a0, $t9, $t3
    ctx->r4 = ADD32(ctx->r25, ctx->r11);
    // 0x151E137C: lhu         $t4, 0x22($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X22);
    // 0x151E1380: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x151E1384: andi        $t5, $t4, 0x9
    ctx->r13 = ctx->r12 & 0X9;
    // 0x151E1388: beql        $t5, $zero, L_151E13D8
    if (ctx->r13 == 0) {
        // 0x151E138C: lhu         $t3, 0x22($a0)
        ctx->r11 = MEM_HU(ctx->r4, 0X22);
            goto L_151E13D8;
    }
    goto skip_3;
    // 0x151E138C: lhu         $t3, 0x22($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X22);
    skip_3:
    // 0x151E1390: sb          $t7, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r15;
    // 0x151E1394: lb          $v0, 0x0($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X0);
    // 0x151E1398: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151E139C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E13A0: addu        $t6, $a1, $v0
    ctx->r14 = ADD32(ctx->r5, ctx->r2);
    // 0x151E13A4: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151E13A8: bne         $at, $zero, L_151E13D4
    if (ctx->r1 != 0) {
        // 0x151E13AC: addiu       $a1, $zero, 0x4650
        ctx->r5 = ADD32(0, 0X4650);
            goto L_151E13D4;
    }
    // 0x151E13AC: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    // 0x151E13B0: addiu       $a0, $zero, 0x4FF
    ctx->r4 = ADD32(0, 0X4FF);
    // 0x151E13B4: jal         0x10010F30
    // 0x151E13B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_1;
    // 0x151E13B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x151E13BC: lb          $t2, 0x0($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X0);
    // 0x151E13C0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E13C4: lw          $t8, -0x22C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X22C);
    // 0x151E13C8: sll         $t9, $t2, 1
    ctx->r25 = S32(ctx->r10 << 1);
    // 0x151E13CC: lb          $v0, 0x0($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X0);
    // 0x151E13D0: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
L_151E13D4:
    // 0x151E13D4: lhu         $t3, 0x22($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X22);
L_151E13D8:
    // 0x151E13D8: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x151E13DC: andi        $t4, $t3, 0x6
    ctx->r12 = ctx->r11 & 0X6;
    // 0x151E13E0: beq         $t4, $zero, L_151E1410
    if (ctx->r12 == 0) {
        // 0x151E13E4: nop
    
            goto L_151E1410;
    }
    // 0x151E13E4: nop

    // 0x151E13E8: sb          $t5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r13;
    // 0x151E13EC: lb          $v0, 0x0($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X0);
    // 0x151E13F0: addiu       $a0, $zero, 0x4FF
    ctx->r4 = ADD32(0, 0X4FF);
    // 0x151E13F4: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    // 0x151E13F8: bltz        $v0, L_151E1410
    if (SIGNED(ctx->r2) < 0) {
        // 0x151E13FC: addiu       $a2, $zero, 0x40
        ctx->r6 = ADD32(0, 0X40);
            goto L_151E1410;
    }
    // 0x151E13FC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151E1400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E1404: jal         0x10010F30
    // 0x151E1408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_2;
    // 0x151E1408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x151E140C: lb          $v0, 0x0($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X0);
L_151E1410:
    // 0x151E1410: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151E1414: bgez        $v0, L_151E1420
    if (SIGNED(ctx->r2) >= 0) {
        // 0x151E1418: lb          $a1, -0x1C0($a1)
        ctx->r5 = MEM_B(ctx->r5, -0X1C0);
            goto L_151E1420;
    }
    // 0x151E1418: lb          $a1, -0x1C0($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X1C0);
    // 0x151E141C: sb          $zero, 0x0($s3)
    MEM_B(0X0, ctx->r19) = 0;
L_151E1420:
    // 0x151E1420: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_151E1424:
    // 0x151E1424: slt         $at, $s2, $a1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x151E1428: bne         $at, $zero, L_151E135C
    if (ctx->r1 != 0) {
        // 0x151E142C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_151E135C;
    }
    // 0x151E142C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_151E1430:
    // 0x151E1430: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x151E1434: addiu       $s3, $s3, -0x260
    ctx->r19 = ADD32(ctx->r19, -0X260);
    // 0x151E1438: lb          $t7, 0x0($s3)
    ctx->r15 = MEM_B(ctx->r19, 0X0);
    // 0x151E143C: subu        $t6, $s4, $a1
    ctx->r14 = SUB32(ctx->r20, ctx->r5);
    // 0x151E1440: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x151E1444: addu        $v0, $a1, $t7
    ctx->r2 = ADD32(ctx->r5, ctx->r15);
    // 0x151E1448: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151E144C: beql        $at, $zero, L_151E1464
    if (ctx->r1 == 0) {
        // 0x151E1450: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_151E1464;
    }
    goto skip_4;
    // 0x151E1450: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    skip_4:
    // 0x151E1454: sb          $t6, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r14;
    // 0x151E1458: lb          $t2, 0x0($s3)
    ctx->r10 = MEM_B(ctx->r19, 0X0);
    // 0x151E145C: addu        $v0, $a1, $t2
    ctx->r2 = ADD32(ctx->r5, ctx->r10);
    // 0x151E1460: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
L_151E1464:
    // 0x151E1464: beq         $at, $zero, L_151E1470
    if (ctx->r1 == 0) {
        // 0x151E1468: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_151E1470;
    }
    // 0x151E1468: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x151E146C: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_151E1470:
    // 0x151E1470: subu        $t8, $s4, $a1
    ctx->r24 = SUB32(ctx->r20, ctx->r5);
    // 0x151E1474: slt         $at, $a1, $s4
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x151E1478: beq         $at, $zero, L_151E1514
    if (ctx->r1 == 0) {
        // 0x151E147C: sb          $t8, 0x0($s3)
        MEM_B(0X0, ctx->r19) = ctx->r24;
            goto L_151E1514;
    }
    // 0x151E147C: sb          $t8, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r24;
    // 0x151E1480: subu        $v1, $s4, $a1
    ctx->r3 = SUB32(ctx->r20, ctx->r5);
    // 0x151E1484: andi        $t9, $v1, 0x3
    ctx->r25 = ctx->r3 & 0X3;
    // 0x151E1488: beq         $t9, $zero, L_151E14C8
    if (ctx->r25 == 0) {
        // 0x151E148C: addu        $a0, $t9, $a1
        ctx->r4 = ADD32(ctx->r25, ctx->r5);
            goto L_151E14C8;
    }
    // 0x151E148C: addu        $a0, $t9, $a1
    ctx->r4 = ADD32(ctx->r25, ctx->r5);
    // 0x151E1490: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151E1494: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151E1498: addiu       $t4, $t4, 0xC00
    ctx->r12 = ADD32(ctx->r12, 0XC00);
    // 0x151E149C: addiu       $t3, $t3, -0x1BC
    ctx->r11 = ADD32(ctx->r11, -0X1BC);
    // 0x151E14A0: addu        $s0, $a1, $t3
    ctx->r16 = ADD32(ctx->r5, ctx->r11);
    // 0x151E14A4: addu        $v0, $a1, $t4
    ctx->r2 = ADD32(ctx->r5, ctx->r12);
    // 0x151E14A8: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
L_151E14AC:
    // 0x151E14AC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151E14B0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x151E14B4: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151E14B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151E14BC: bne         $a0, $s2, L_151E14AC
    if (ctx->r4 != ctx->r18) {
        // 0x151E14C0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151E14AC;
    }
    // 0x151E14C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x151E14C4: beq         $s2, $s4, L_151E1514
    if (ctx->r18 == ctx->r20) {
        // 0x151E14C8: lui         $t7, 0x800E
        ctx->r15 = S32(0X800E << 16);
            goto L_151E1514;
    }
L_151E14C8:
    // 0x151E14C8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151E14CC: addiu       $t7, $t7, 0xC00
    ctx->r15 = ADD32(ctx->r15, 0XC00);
    // 0x151E14D0: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151E14D4: addiu       $t5, $t5, -0x1BC
    ctx->r13 = ADD32(ctx->r13, -0X1BC);
    // 0x151E14D8: addu        $s0, $s2, $t5
    ctx->r16 = ADD32(ctx->r18, ctx->r13);
    // 0x151E14DC: addu        $v0, $s2, $t7
    ctx->r2 = ADD32(ctx->r18, ctx->r15);
    // 0x151E14E0: addu        $a0, $s4, $t7
    ctx->r4 = ADD32(ctx->r20, ctx->r15);
    // 0x151E14E4: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
L_151E14E8:
    // 0x151E14E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151E14EC: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
    // 0x151E14F0: sb          $zero, -0x3($v0)
    MEM_B(-0X3, ctx->r2) = 0;
    // 0x151E14F4: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x151E14F8: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x151E14FC: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x151E1500: sb          $zero, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = 0;
    // 0x151E1504: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x151E1508: sb          $v1, -0x4($s0)
    MEM_B(-0X4, ctx->r16) = ctx->r3;
    // 0x151E150C: bne         $v0, $a0, L_151E14E8
    if (ctx->r2 != ctx->r4) {
        // 0x151E1510: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_151E14E8;
    }
    // 0x151E1510: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
L_151E1514:
    // 0x151E1514: slti        $at, $s4, 0x10
    ctx->r1 = SIGNED(ctx->r20) < 0X10 ? 1 : 0;
    // 0x151E1518: beq         $at, $zero, L_151E1580
    if (ctx->r1 == 0) {
        // 0x151E151C: or          $s2, $s4, $zero
        ctx->r18 = ctx->r20 | 0;
            goto L_151E1580;
    }
    // 0x151E151C: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x151E1520: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x151E1524: subu        $v1, $a0, $s4
    ctx->r3 = SUB32(ctx->r4, ctx->r20);
    // 0x151E1528: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x151E152C: beq         $t6, $zero, L_151E1554
    if (ctx->r14 == 0) {
        // 0x151E1530: addu        $v0, $t6, $s4
        ctx->r2 = ADD32(ctx->r14, ctx->r20);
            goto L_151E1554;
    }
    // 0x151E1530: addu        $v0, $t6, $s4
    ctx->r2 = ADD32(ctx->r14, ctx->r20);
    // 0x151E1534: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E1538: addiu       $t2, $t2, -0x1BC
    ctx->r10 = ADD32(ctx->r10, -0X1BC);
    // 0x151E153C: addu        $s0, $s2, $t2
    ctx->r16 = ADD32(ctx->r18, ctx->r10);
L_151E1540:
    // 0x151E1540: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151E1544: sb          $s1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r17;
    // 0x151E1548: bne         $v0, $s2, L_151E1540
    if (ctx->r2 != ctx->r18) {
        // 0x151E154C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_151E1540;
    }
    // 0x151E154C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151E1550: beq         $s2, $a0, L_151E1580
    if (ctx->r18 == ctx->r4) {
        // 0x151E1554: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_151E1580;
    }
L_151E1554:
    // 0x151E1554: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151E1558: addiu       $t8, $t8, -0x1BC
    ctx->r24 = ADD32(ctx->r24, -0X1BC);
    // 0x151E155C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E1560: addiu       $v0, $v0, -0x1AC
    ctx->r2 = ADD32(ctx->r2, -0X1AC);
    // 0x151E1564: addu        $s0, $s2, $t8
    ctx->r16 = ADD32(ctx->r18, ctx->r24);
L_151E1568:
    // 0x151E1568: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x151E156C: sb          $s1, -0x4($s0)
    MEM_B(-0X4, ctx->r16) = ctx->r17;
    // 0x151E1570: sb          $s1, -0x3($s0)
    MEM_B(-0X3, ctx->r16) = ctx->r17;
    // 0x151E1574: sb          $s1, -0x2($s0)
    MEM_B(-0X2, ctx->r16) = ctx->r17;
    // 0x151E1578: bne         $s0, $v0, L_151E1568
    if (ctx->r16 != ctx->r2) {
        // 0x151E157C: sb          $s1, -0x1($s0)
        MEM_B(-0X1, ctx->r16) = ctx->r17;
            goto L_151E1568;
    }
    // 0x151E157C: sb          $s1, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r17;
L_151E1580:
    // 0x151E1580: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x151E1584: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151E1588: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151E158C: bne         $t9, $at, L_151E1624
    if (ctx->r25 != ctx->r1) {
        // 0x151E1590: nop
    
            goto L_151E1624;
    }
    // 0x151E1590: nop

    // 0x151E1594: lw          $t3, -0x22C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X22C);
    // 0x151E1598: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x151E159C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E15A0: lhu         $t4, 0x20($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X20);
    // 0x151E15A4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151E15A8: addiu       $a0, $zero, 0x500
    ctx->r4 = ADD32(0, 0X500);
    // 0x151E15AC: andi        $t5, $t4, 0x10
    ctx->r13 = ctx->r12 & 0X10;
    // 0x151E15B0: beq         $t5, $zero, L_151E1624
    if (ctx->r13 == 0) {
        // 0x151E15B4: addiu       $a1, $zero, 0x7D00
        ctx->r5 = ADD32(0, 0X7D00);
            goto L_151E1624;
    }
    // 0x151E15B4: addiu       $a1, $zero, 0x7D00
    ctx->r5 = ADD32(0, 0X7D00);
    // 0x151E15B8: sb          $t7, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r15;
    // 0x151E15BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151E15C0: sb          $t6, -0x28C($at)
    MEM_B(-0X28C, ctx->r1) = ctx->r14;
    // 0x151E15C4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151E15C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151E15CC: jal         0x10010F30
    // 0x151E15D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_3;
    // 0x151E15D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x151E15D4: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x151E15D8: lw          $t2, -0x22C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X22C);
    // 0x151E15DC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x151E15E0: lui         $t4, 0x151E
    ctx->r12 = S32(0X151E << 16);
    // 0x151E15E4: lb          $t8, 0x42($t2)
    ctx->r24 = MEM_B(ctx->r10, 0X42);
    // 0x151E15E8: lui         $t5, 0x151E
    ctx->r13 = S32(0X151E << 16);
    // 0x151E15EC: addiu       $t4, $t4, 0x2834
    ctx->r12 = ADD32(ctx->r12, 0X2834);
    // 0x151E15F0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151E15F4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x151E15F8: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x151E15FC: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x151E1600: lb          $t3, -0x496E($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X496E);
    // 0x151E1604: addiu       $t5, $t5, 0x4314
    ctx->r13 = ADD32(ctx->r13, 0X4314);
    // 0x151E1608: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E160C: bne         $s1, $t3, L_151E1620
    if (ctx->r17 != ctx->r11) {
        // 0x151E1610: nop
    
            goto L_151E1620;
    }
    // 0x151E1610: nop

    // 0x151E1614: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E1618: b           L_151E1624
    // 0x151E161C: sw          $t4, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r12;
        goto L_151E1624;
    // 0x151E161C: sw          $t4, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r12;
L_151E1620:
    // 0x151E1620: sw          $t5, 0xA88($at)
    MEM_W(0XA88, ctx->r1) = ctx->r13;
L_151E1624:
    // 0x151E1624: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151E1628: addiu       $t7, $zero, 0x1A
    ctx->r15 = ADD32(0, 0X1A);
    // 0x151E162C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151E1630: addiu       $a3, $a3, -0x47A8
    ctx->r7 = ADD32(ctx->r7, -0X47A8);
    // 0x151E1634: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151E1638: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    // 0x151E163C: jal         0x15042D94
    // 0x151E1640: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_4;
    // 0x151E1640: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x151E1644: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E1648: lb          $t6, -0x1C0($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X1C0);
    // 0x151E164C: lb          $t9, 0x0($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X0);
    // 0x151E1650: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x151E1654: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x151E1658: subu        $t2, $t2, $t6
    ctx->r10 = SUB32(ctx->r10, ctx->r14);
    // 0x151E165C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x151E1660: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x151E1664: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x151E1668: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x151E166C: sll         $t3, $t3, 1
    ctx->r11 = S32(ctx->r11 << 1);
    // 0x151E1670: negu        $t8, $t2
    ctx->r24 = SUB32(0, ctx->r10);
    // 0x151E1674: subu        $s1, $t8, $t3
    ctx->r17 = SUB32(ctx->r24, ctx->r11);
    // 0x151E1678: blez        $s4, L_151E16E0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x151E167C: addiu       $s1, $s1, 0xA1
        ctx->r17 = ADD32(ctx->r17, 0XA1);
            goto L_151E16E0;
    }
    // 0x151E167C: addiu       $s1, $s1, 0xA1
    ctx->r17 = ADD32(ctx->r17, 0XA1);
    // 0x151E1680: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x151E1684: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x151E1688: addiu       $s3, $s3, -0x47A4
    ctx->r19 = ADD32(ctx->r19, -0X47A4);
    // 0x151E168C: addiu       $s0, $s0, -0x1BC
    ctx->r16 = ADD32(ctx->r16, -0X1BC);
L_151E1690:
    // 0x151E1690: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x151E1694: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151E1698: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x151E169C: jal         0x150432FC
    // 0x151E16A0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_150432FC(rdram, ctx);
        goto after_5;
    // 0x151E16A0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_5:
    // 0x151E16A4: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x151E16A8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151E16AC: addiu       $a0, $a0, -0x47A0
    ctx->r4 = ADD32(ctx->r4, -0X47A0);
    // 0x151E16B0: bltz        $v1, L_151E16C8
    if (SIGNED(ctx->r3) < 0) {
        // 0x151E16B4: addiu       $a1, $v1, 0x1
        ctx->r5 = ADD32(ctx->r3, 0X1);
            goto L_151E16C8;
    }
    // 0x151E16B4: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x151E16B8: jal         0x15042E3C
    // 0x151E16BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_15042E3C(rdram, ctx);
        goto after_6;
    // 0x151E16BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x151E16C0: b           L_151E16D4
    // 0x151E16C4: addiu       $s1, $s1, 0x1A
    ctx->r17 = ADD32(ctx->r17, 0X1A);
        goto L_151E16D4;
    // 0x151E16C4: addiu       $s1, $s1, 0x1A
    ctx->r17 = ADD32(ctx->r17, 0X1A);
L_151E16C8:
    // 0x151E16C8: jal         0x15042E3C
    // 0x151E16CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_15042E3C(rdram, ctx);
        goto after_7;
    // 0x151E16CC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_7:
    // 0x151E16D0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_151E16D4:
    // 0x151E16D4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x151E16D8: bne         $s2, $s4, L_151E1690
    if (ctx->r18 != ctx->r20) {
        // 0x151E16DC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_151E1690;
    }
    // 0x151E16DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_151E16E0:
    // 0x151E16E0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x151E16E4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151E16E8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151E16EC: bne         $t5, $at, L_151E1714
    if (ctx->r13 != ctx->r1) {
        // 0x151E16F0: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_151E1714;
    }
    // 0x151E16F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x151E16F4: lw          $t7, -0x22C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X22C);
    // 0x151E16F8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151E16FC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151E1700: lhu         $t6, 0x20($t7)
    ctx->r14 = MEM_HU(ctx->r15, 0X20);
    // 0x151E1704: andi        $t2, $t6, 0x20
    ctx->r10 = ctx->r14 & 0X20;
    // 0x151E1708: beq         $t2, $zero, L_151E1714
    if (ctx->r10 == 0) {
        // 0x151E170C: nop
    
            goto L_151E1714;
    }
    // 0x151E170C: nop

    // 0x151E1710: sb          $t9, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r25;
L_151E1714:
    // 0x151E1714: lw          $v0, -0x22C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22C);
    // 0x151E1718: lhu         $t8, 0x20($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X20);
    // 0x151E171C: andi        $t3, $t8, 0xFFDF
    ctx->r11 = ctx->r24 & 0XFFDF;
    // 0x151E1720: sh          $t3, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r11;
L_151E1724:
    // 0x151E1724: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151E1728: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151E172C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151E1730: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151E1734: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x151E1738: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x151E173C: jr          $ra
    // 0x151E1740: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151E1740: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_100085A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100085A4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x100085A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x100085AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x100085B0: jr          $ra
    // 0x100085B4: nop

    return;
    return;
    // 0x100085B4: nop

;}
RECOMP_FUNC void func_15085ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15085ABC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15085AC0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15085AC4: sll         $s4, $a0, 16
    ctx->r20 = S32(ctx->r4 << 16);
    // 0x15085AC8: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x15085ACC: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x15085AD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15085AD4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15085AD8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15085ADC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15085AE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15085AE4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15085AE8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15085AEC: lbu         $t7, 0x18A8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X18A8);
    // 0x15085AF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15085AF4: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x15085AF8: bne         $t7, $zero, L_15085B4C
    if (ctx->r15 != 0) {
        // 0x15085AFC: addiu       $s2, $zero, 0x32C
        ctx->r18 = ADD32(0, 0X32C);
            goto L_15085B4C;
    }
    // 0x15085AFC: addiu       $s2, $zero, 0x32C
    ctx->r18 = ADD32(0, 0X32C);
    // 0x15085B00: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x15085B04: addiu       $s1, $s1, -0x3D30
    ctx->r17 = ADD32(ctx->r17, -0X3D30);
    // 0x15085B08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_15085B0C:
    // 0x15085B0C: sllv        $t9, $t8, $s0
    ctx->r25 = S32(ctx->r24 << (ctx->r16 & 31));
    // 0x15085B10: and         $t0, $t9, $s4
    ctx->r8 = ctx->r25 & ctx->r20;
    // 0x15085B14: beql        $t0, $zero, L_15085B44
    if (ctx->r8 == 0) {
        // 0x15085B18: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15085B44;
    }
    goto skip_0;
    // 0x15085B18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x15085B1C: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15085B20: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x15085B24: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15085B28: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x15085B2C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x15085B30: mflo        $t2
    ctx->r10 = lo;
    // 0x15085B34: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x15085B38: jal         0x15085710
    // 0x15085B3C: lbu         $a2, 0x1CA($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X1CA);
    func_15085710(rdram, ctx);
        goto after_0;
    // 0x15085B3C: lbu         $a2, 0x1CA($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X1CA);
    after_0:
    // 0x15085B40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15085B44:
    // 0x15085B44: bnel        $s0, $s3, L_15085B0C
    if (ctx->r16 != ctx->r19) {
        // 0x15085B48: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_15085B0C;
    }
    goto skip_1;
    // 0x15085B48: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    skip_1:
L_15085B4C:
    // 0x15085B4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15085B50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15085B54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15085B58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15085B5C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15085B60: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15085B64: jr          $ra
    // 0x15085B68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15085B68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_151DDC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DDC20: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x151DDC24: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151DDC28: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151DDC2C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151DDC30: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x151DDC34: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DDC38: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151DDC3C: lbu         $t6, -0x248($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X248);
    // 0x151DDC40: sb          $zero, 0xB96($at)
    MEM_B(0XB96, ctx->r1) = 0;
    // 0x151DDC44: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x151DDC48: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x151DDC4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151DDC50: bne         $v0, $at, L_151DDC60
    if (ctx->r2 != ctx->r1) {
        // 0x151DDC54: sb          $t6, 0x94($sp)
        MEM_B(0X94, ctx->r29) = ctx->r14;
            goto L_151DDC60;
    }
    // 0x151DDC54: sb          $t6, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r14;
    // 0x151DDC58: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DDC5C: sb          $t7, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r15;
L_151DDC60:
    // 0x151DDC60: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x151DDC64: addiu       $s0, $s0, 0x35EA
    ctx->r16 = ADD32(ctx->r16, 0X35EA);
    // 0x151DDC68: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x151DDC6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151DDC70: bne         $t8, $at, L_151DDC90
    if (ctx->r24 != ctx->r1) {
        // 0x151DDC74: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_151DDC90;
    }
    // 0x151DDC74: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x151DDC78: bne         $v0, $at, L_151DDC90
    if (ctx->r2 != ctx->r1) {
        // 0x151DDC7C: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_151DDC90;
    }
    // 0x151DDC7C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151DDC80: lbu         $t9, 0x35E8($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X35E8);
    // 0x151DDC84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151DDC88: beql        $t9, $at, L_151DDCA8
    if (ctx->r25 == ctx->r1) {
        // 0x151DDC8C: lbu         $t6, 0x0($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X0);
            goto L_151DDCA8;
    }
    goto skip_0;
    // 0x151DDC8C: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
    skip_0:
L_151DDC90:
    // 0x151DDC90: jal         0x1517EFDC
    // 0x151DDC94: sb          $a0, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r4;
    func_1517EFDC(rdram, ctx);
        goto after_0;
    // 0x151DDC94: sb          $a0, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r4;
    after_0:
    // 0x151DDC98: beq         $v0, $zero, L_151DDCA4
    if (ctx->r2 == 0) {
        // 0x151DDC9C: lbu         $a0, 0x95($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X95);
            goto L_151DDCA4;
    }
    // 0x151DDC9C: lbu         $a0, 0x95($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X95);
    // 0x151DDCA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_151DDCA4:
    // 0x151DDCA4: lbu         $t6, 0x0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X0);
L_151DDCA8:
    // 0x151DDCA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151DDCAC: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151DDCB0: bne         $t6, $at, L_151DDCCC
    if (ctx->r14 != ctx->r1) {
        // 0x151DDCB4: addiu       $t5, $t5, -0x114
        ctx->r13 = ADD32(ctx->r13, -0X114);
            goto L_151DDCCC;
    }
    // 0x151DDCB4: addiu       $t5, $t5, -0x114
    ctx->r13 = ADD32(ctx->r13, -0X114);
    // 0x151DDCB8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151DDCBC: lbu         $t7, 0x3683($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X3683);
    // 0x151DDCC0: beql        $t7, $zero, L_151DDCD0
    if (ctx->r15 == 0) {
        // 0x151DDCC4: lb          $v0, 0x0($t5)
        ctx->r2 = MEM_B(ctx->r13, 0X0);
            goto L_151DDCD0;
    }
    goto skip_1;
    // 0x151DDCC4: lb          $v0, 0x0($t5)
    ctx->r2 = MEM_B(ctx->r13, 0X0);
    skip_1:
    // 0x151DDCC8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_151DDCCC:
    // 0x151DDCCC: lb          $v0, 0x0($t5)
    ctx->r2 = MEM_B(ctx->r13, 0X0);
L_151DDCD0:
    // 0x151DDCD0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x151DDCD4: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x151DDCD8: blez        $v0, L_151DDCE4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151DDCDC: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_151DDCE4;
    }
    // 0x151DDCDC: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x151DDCE0: sb          $t8, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r24;
L_151DDCE4:
    // 0x151DDCE4: lbu         $t4, -0x1540($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X1540);
    // 0x151DDCE8: addiu       $s0, $s0, -0x153F
    ctx->r16 = ADD32(ctx->r16, -0X153F);
    // 0x151DDCEC: bne         $t4, $zero, L_151DDDE0
    if (ctx->r12 != 0) {
        // 0x151DDCF0: nop
    
            goto L_151DDDE0;
    }
    // 0x151DDCF0: nop

    // 0x151DDCF4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x151DDCF8: bne         $v1, $zero, L_151DDDE0
    if (ctx->r3 != 0) {
        // 0x151DDCFC: nop
    
            goto L_151DDDE0;
    }
    // 0x151DDCFC: nop

    // 0x151DDD00: bne         $a0, $zero, L_151DDDE0
    if (ctx->r4 != 0) {
        // 0x151DDD04: nop
    
            goto L_151DDDE0;
    }
    // 0x151DDD04: nop

    // 0x151DDD08: lb          $t9, 0x0($t5)
    ctx->r25 = MEM_B(ctx->r13, 0X0);
    // 0x151DDD0C: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x151DDD10: bne         $t9, $zero, L_151DDDE0
    if (ctx->r25 != 0) {
        // 0x151DDD14: nop
    
            goto L_151DDDE0;
    }
    // 0x151DDD14: nop

    // 0x151DDD18: lw          $t0, 0x2FA0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2FA0);
    // 0x151DDD1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151DDD20: bltz        $t0, L_151DDDE0
    if (SIGNED(ctx->r8) < 0) {
        // 0x151DDD24: nop
    
            goto L_151DDDE0;
    }
    // 0x151DDD24: nop

    // 0x151DDD28: bne         $v1, $zero, L_151DDDE0
    if (ctx->r3 != 0) {
        // 0x151DDD2C: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_151DDDE0;
    }
    // 0x151DDD2C: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x151DDD30: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x151DDD34: addiu       $t7, $t7, -0x16D0
    ctx->r15 = ADD32(ctx->r15, -0X16D0);
    // 0x151DDD38: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DDD3C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151DDD40: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151DDD44: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x151DDD48: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151DDD4C: addiu       $a1, $a1, 0x18A0
    ctx->r5 = ADD32(ctx->r5, 0X18A0);
    // 0x151DDD50: addiu       $a2, $a2, -0x153D
    ctx->r6 = ADD32(ctx->r6, -0X153D);
    // 0x151DDD54: addiu       $t1, $t1, 0xA98
    ctx->r9 = ADD32(ctx->r9, 0XA98);
    // 0x151DDD58: addiu       $t2, $t2, -0x16E8
    ctx->r10 = ADD32(ctx->r10, -0X16E8);
    // 0x151DDD5C: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DDD60: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x151DDD64: addiu       $ra, $zero, 0xA
    ctx->r31 = ADD32(0, 0XA);
    // 0x151DDD68: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x151DDD6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x151DDD70: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
L_151DDD74:
    // 0x151DDD74: andi        $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 & 0X1000;
    // 0x151DDD78: beql        $t9, $zero, L_151DDDC8
    if (ctx->r25 == 0) {
        // 0x151DDD7C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151DDDC8;
    }
    goto skip_2;
    // 0x151DDD7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x151DDD80: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x151DDD84: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DDD88: sllv        $t8, $t7, $v0
    ctx->r24 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x151DDD8C: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x151DDD90: bnel        $t9, $zero, L_151DDDC8
    if (ctx->r25 != 0) {
        // 0x151DDD94: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_151DDDC8;
    }
    goto skip_3;
    // 0x151DDD94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_3:
    // 0x151DDD98: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DDD9C: sb          $a0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r4;
    // 0x151DDDA0: sb          $a0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r4;
    // 0x151DDDA4: sb          $v0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r2;
    // 0x151DDDA8: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x151DDDAC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DDDB0: mflo        $t7
    ctx->r15 = lo;
    // 0x151DDDB4: addu        $t6, $t2, $t7
    ctx->r14 = ADD32(ctx->r10, ctx->r15);
    // 0x151DDDB8: lb          $t8, 0x3($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X3);
    // 0x151DDDBC: sb          $t8, -0x10C($at)
    MEM_B(-0X10C, ctx->r1) = ctx->r24;
    // 0x151DDDC0: sb          $ra, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r31;
    // 0x151DDDC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_151DDDC8:
    // 0x151DDDC8: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151DDDCC: bne         $at, $zero, L_151DDDE0
    if (ctx->r1 != 0) {
        // 0x151DDDD0: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_151DDDE0;
    }
    // 0x151DDDD0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x151DDDD4: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x151DDDD8: beql        $t9, $zero, L_151DDD74
    if (ctx->r25 == 0) {
        // 0x151DDDDC: lhu         $t8, 0x0($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X0);
            goto L_151DDD74;
    }
    goto skip_4;
    // 0x151DDDDC: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    skip_4:
L_151DDDE0:
    // 0x151DDDE0: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151DDDE4: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151DDDE8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DDDEC: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x151DDDF0: addiu       $s0, $s0, -0x153F
    ctx->r16 = ADD32(ctx->r16, -0X153F);
    // 0x151DDDF4: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DDDF8: addiu       $t2, $t2, -0x16E8
    ctx->r10 = ADD32(ctx->r10, -0X16E8);
    // 0x151DDDFC: bne         $t4, $zero, L_151DDE5C
    if (ctx->r12 != 0) {
        // 0x151DDE00: addiu       $t1, $t1, 0xA98
        ctx->r9 = ADD32(ctx->r9, 0XA98);
            goto L_151DDE5C;
    }
    // 0x151DDE00: addiu       $t1, $t1, 0xA98
    ctx->r9 = ADD32(ctx->r9, 0XA98);
    // 0x151DDE04: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x151DDE08: lw          $t7, 0x2E48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2E48);
    // 0x151DDE0C: addiu       $at, $zero, 0xC7
    ctx->r1 = ADD32(0, 0XC7);
    // 0x151DDE10: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x151DDE14: beq         $t7, $at, L_151DDE5C
    if (ctx->r15 == ctx->r1) {
        // 0x151DDE18: addiu       $v1, $v1, 0xA99
        ctx->r3 = ADD32(ctx->r3, 0XA99);
            goto L_151DDE5C;
    }
    // 0x151DDE18: addiu       $v1, $v1, 0xA99
    ctx->r3 = ADD32(ctx->r3, 0XA99);
    // 0x151DDE1C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151DDE20: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151DDE24: lb          $t6, 0x0($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X0);
    // 0x151DDE28: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x151DDE2C: addiu       $a0, $a0, -0x1C18
    ctx->r4 = ADD32(ctx->r4, -0X1C18);
    // 0x151DDE30: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x151DDE34: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x151DDE38: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x151DDE3C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x151DDE40: bne         $at, $zero, L_151DDE5C
    if (ctx->r1 != 0) {
        // 0x151DDE44: nop
    
            goto L_151DDE5C;
    }
    // 0x151DDE44: nop

    // 0x151DDE48: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x151DDE4C: addiu       $t7, $v0, -0x3C
    ctx->r15 = ADD32(ctx->r2, -0X3C);
    // 0x151DDE50: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x151DDE54: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x151DDE58: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_151DDE5C:
    // 0x151DDE5C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151DDE60: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x151DDE64: beq         $t9, $zero, L_151DDF90
    if (ctx->r25 == 0) {
        // 0x151DDE68: nop
    
            goto L_151DDF90;
    }
    // 0x151DDE68: nop

    // 0x151DDE6C: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    // 0x151DDE70: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151DDE74: bne         $t7, $zero, L_151DDF90
    if (ctx->r15 != 0) {
        // 0x151DDE78: nop
    
            goto L_151DDF90;
    }
    // 0x151DDE78: nop

    // 0x151DDE7C: lb          $t6, 0xBE3($t6)
    ctx->r14 = MEM_B(ctx->r14, 0XBE3);
    // 0x151DDE80: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151DDE84: addiu       $v1, $v1, -0x288
    ctx->r3 = ADD32(ctx->r3, -0X288);
    // 0x151DDE88: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x151DDE8C: bne         $at, $zero, L_151DDF90
    if (ctx->r1 != 0) {
        // 0x151DDE90: lui         $t8, 0x8008
        ctx->r24 = S32(0X8008 << 16);
            goto L_151DDF90;
    }
    // 0x151DDE90: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x151DDE94: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x151DDE98: addiu       $t0, $zero, 0xC6
    ctx->r8 = ADD32(0, 0XC6);
    // 0x151DDE9C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x151DDEA0: blez        $t8, L_151DDEAC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x151DDEA4: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_151DDEAC;
    }
    // 0x151DDEA4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151DDEA8: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
L_151DDEAC:
    // 0x151DDEAC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151DDEB0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151DDEB4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151DDEB8: blezl       $v0, L_151DDED4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151DDEBC: sw          $zero, 0x0($v1)
        MEM_W(0X0, ctx->r3) = 0;
            goto L_151DDED4;
    }
    goto skip_5;
    // 0x151DDEBC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    skip_5:
    // 0x151DDEC0: lw          $t9, -0x15F8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X15F8);
    // 0x151DDEC4: subu        $t7, $v0, $t9
    ctx->r15 = SUB32(ctx->r2, ctx->r25);
    // 0x151DDEC8: b           L_151DDED4
    // 0x151DDECC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_151DDED4;
    // 0x151DDECC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x151DDED0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_151DDED4:
    // 0x151DDED4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151DDED8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151DDEDC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151DDEE0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x151DDEE4: mflo        $t6
    ctx->r14 = lo;
    // 0x151DDEE8: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x151DDEEC: jal         0x1504332C
    // 0x151DDEF0: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    func_1504332C(rdram, ctx);
        goto after_1;
    // 0x151DDEF0: sw          $t0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r8;
    after_1:
    // 0x151DDEF4: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x151DDEF8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x151DDEFC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151DDF00: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x151DDF04: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151DDF08: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DDF0C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151DDF10: mfhi        $t9
    ctx->r25 = hi;
    // 0x151DDF14: mflo        $t8
    ctx->r24 = lo;
    // 0x151DDF18: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151DDF1C: addiu       $t5, $t5, -0x114
    ctx->r13 = ADD32(ctx->r13, -0X114);
    // 0x151DDF20: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DDF24: addiu       $t2, $t2, -0x16E8
    ctx->r10 = ADD32(ctx->r10, -0X16E8);
    // 0x151DDF28: addiu       $t1, $t1, 0xA98
    ctx->r9 = ADD32(ctx->r9, 0XA98);
    // 0x151DDF2C: addiu       $a3, $a3, -0x482C
    ctx->r7 = ADD32(ctx->r7, -0X482C);
    // 0x151DDF30: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151DDF34: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151DDF38: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    // 0x151DDF3C: lw          $a1, 0x74($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X74);
    // 0x151DDF40: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x151DDF44: bne         $v1, $zero, L_151DDF50
    if (ctx->r3 != 0) {
        // 0x151DDF48: nop
    
            goto L_151DDF50;
    }
    // 0x151DDF48: nop

    // 0x151DDF4C: break       7
    do_break(354279244);
L_151DDF50:
    // 0x151DDF50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151DDF54: bne         $v1, $at, L_151DDF68
    if (ctx->r3 != ctx->r1) {
        // 0x151DDF58: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151DDF68;
    }
    // 0x151DDF58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151DDF5C: bne         $v0, $at, L_151DDF68
    if (ctx->r2 != ctx->r1) {
        // 0x151DDF60: nop
    
            goto L_151DDF68;
    }
    // 0x151DDF60: nop

    // 0x151DDF64: break       6
    do_break(354279268);
L_151DDF68:
    // 0x151DDF68: jal         0x15042D94
    // 0x151DDF6C: nop

    func_15042D94(rdram, ctx);
        goto after_2;
    // 0x151DDF6C: nop

    after_2:
    // 0x151DDF70: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x151DDF74: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x151DDF78: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DDF7C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151DDF80: addiu       $t5, $t5, -0x114
    ctx->r13 = ADD32(ctx->r13, -0X114);
    // 0x151DDF84: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DDF88: addiu       $t2, $t2, -0x16E8
    ctx->r10 = ADD32(ctx->r10, -0X16E8);
    // 0x151DDF8C: addiu       $t1, $t1, 0xA98
    ctx->r9 = ADD32(ctx->r9, 0XA98);
L_151DDF90:
    // 0x151DDF90: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x151DDF94: addiu       $t4, $t4, -0x110
    ctx->r12 = ADD32(ctx->r12, -0X110);
    // 0x151DDF98: lb          $v0, 0x0($t4)
    ctx->r2 = MEM_B(ctx->r12, 0X0);
    // 0x151DDF9C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151DDFA0: blez        $v0, L_151DDFC4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x151DDFA4: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_151DDFC4;
    }
    // 0x151DDFA4: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x151DDFA8: sb          $t7, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r15;
    // 0x151DDFAC: lb          $t6, 0x0($t4)
    ctx->r14 = MEM_B(ctx->r12, 0X0);
    // 0x151DDFB0: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x151DDFB4: beql        $at, $zero, L_151DE6BC
    if (ctx->r1 == 0) {
        // 0x151DDFB8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_151DE6BC;
    }
    goto skip_6;
    // 0x151DDFB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_6:
    // 0x151DDFBC: b           L_151DE6B8
    // 0x151DDFC0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_151DE6B8;
    // 0x151DDFC0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_151DDFC4:
    // 0x151DDFC4: lbu         $t8, -0x1540($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1540);
    // 0x151DDFC8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151DDFCC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151DDFD0: beq         $t8, $zero, L_151DE6B8
    if (ctx->r24 == 0) {
        // 0x151DDFD4: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_151DE6B8;
    }
    // 0x151DDFD4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151DDFD8: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x151DDFDC: lb          $v0, 0x0($t5)
    ctx->r2 = MEM_B(ctx->r13, 0X0);
    // 0x151DDFE0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151DDFE4: beq         $t9, $zero, L_151DE000
    if (ctx->r25 == 0) {
        // 0x151DDFE8: lui         $a3, 0x8009
        ctx->r7 = S32(0X8009 << 16);
            goto L_151DE000;
    }
    // 0x151DDFE8: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x151DDFEC: addiu       $t7, $zero, -0x24
    ctx->r15 = ADD32(0, -0X24);
    // 0x151DDFF0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151DDFF4: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x151DDFF8: b           L_151DE00C
    // 0x151DDFFC: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
        goto L_151DE00C;
    // 0x151DDFFC: sw          $t6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r14;
L_151DE000:
    // 0x151DE000: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x151DE004: sw          $t8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r24;
    // 0x151DE008: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
L_151DE00C:
    // 0x151DE00C: lbu         $a0, 0x0($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X0);
    // 0x151DE010: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151DE014: lui         $ra, 0x800E
    ctx->r31 = S32(0X800E << 16);
    // 0x151DE018: sll         $t7, $a0, 1
    ctx->r15 = S32(ctx->r4 << 1);
    // 0x151DE01C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x151DE020: lhu         $t6, -0x16D0($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X16D0);
    // 0x151DE024: addiu       $ra, $ra, 0xB9A
    ctx->r31 = ADD32(ctx->r31, 0XB9A);
    // 0x151DE028: beq         $v0, $zero, L_151DE034
    if (ctx->r2 == 0) {
        // 0x151DE02C: sh          $t6, 0x0($ra)
        MEM_H(0X0, ctx->r31) = ctx->r14;
            goto L_151DE034;
    }
    // 0x151DE02C: sh          $t6, 0x0($ra)
    MEM_H(0X0, ctx->r31) = ctx->r14;
    // 0x151DE030: sh          $zero, 0x0($ra)
    MEM_H(0X0, ctx->r31) = 0;
L_151DE034:
    // 0x151DE034: lb          $v1, 0x0($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X0);
    // 0x151DE038: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x151DE03C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x151DE040: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x151DE044: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x151DE048: addu        $v0, $t2, $t8
    ctx->r2 = ADD32(ctx->r10, ctx->r24);
    // 0x151DE04C: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x151DE050: lb          $t0, 0x2($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X2);
    // 0x151DE054: beq         $at, $zero, L_151DE118
    if (ctx->r1 == 0) {
        // 0x151DE058: lb          $t1, 0x3($v0)
        ctx->r9 = MEM_B(ctx->r2, 0X3);
            goto L_151DE118;
    }
    // 0x151DE058: lb          $t1, 0x3($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X3);
    // 0x151DE05C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151DE060: lb          $t7, -0x10C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X10C);
    // 0x151DE064: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151DE068: slti        $at, $t7, 0x1F
    ctx->r1 = SIGNED(ctx->r15) < 0X1F ? 1 : 0;
    // 0x151DE06C: beq         $at, $zero, L_151DE07C
    if (ctx->r1 == 0) {
        // 0x151DE070: slti        $at, $t0, 0x1F
        ctx->r1 = SIGNED(ctx->r8) < 0X1F ? 1 : 0;
            goto L_151DE07C;
    }
    // 0x151DE070: slti        $at, $t0, 0x1F
    ctx->r1 = SIGNED(ctx->r8) < 0X1F ? 1 : 0;
    // 0x151DE074: beql        $at, $zero, L_151DE094
    if (ctx->r1 == 0) {
        // 0x151DE078: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151DE094;
    }
    goto skip_7;
    // 0x151DE078: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_7:
L_151DE07C:
    // 0x151DE07C: lb          $t6, -0x10C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X10C);
    // 0x151DE080: slti        $at, $t6, -0x1E
    ctx->r1 = SIGNED(ctx->r14) < -0X1E ? 1 : 0;
    // 0x151DE084: bne         $at, $zero, L_151DE0B8
    if (ctx->r1 != 0) {
        // 0x151DE088: slti        $at, $t0, -0x1E
        ctx->r1 = SIGNED(ctx->r8) < -0X1E ? 1 : 0;
            goto L_151DE0B8;
    }
    // 0x151DE088: slti        $at, $t0, -0x1E
    ctx->r1 = SIGNED(ctx->r8) < -0X1E ? 1 : 0;
    // 0x151DE08C: beq         $at, $zero, L_151DE0B8
    if (ctx->r1 == 0) {
        // 0x151DE090: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_151DE0B8;
    }
    // 0x151DE090: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_151DE094:
    // 0x151DE094: bne         $v1, $at, L_151DE0A4
    if (ctx->r3 != ctx->r1) {
        // 0x151DE098: addiu       $t7, $zero, 0x62D
        ctx->r15 = ADD32(0, 0X62D);
            goto L_151DE0A4;
    }
    // 0x151DE098: addiu       $t7, $zero, 0x62D
    ctx->r15 = ADD32(0, 0X62D);
    // 0x151DE09C: b           L_151DE0B0
    // 0x151DE0A0: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
        goto L_151DE0B0;
    // 0x151DE0A0: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
L_151DE0A4:
    // 0x151DE0A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151DE0A8: subu        $t9, $t8, $v1
    ctx->r25 = SUB32(ctx->r24, ctx->r3);
    // 0x151DE0AC: sb          $t9, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r25;
L_151DE0B0:
    // 0x151DE0B0: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
    // 0x151DE0B4: lb          $v1, 0x0($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X0);
L_151DE0B8:
    // 0x151DE0B8: beq         $v1, $zero, L_151DE16C
    if (ctx->r3 == 0) {
        // 0x151DE0BC: lw          $t6, 0x88($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X88);
            goto L_151DE16C;
    }
    // 0x151DE0BC: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x151DE0C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151DE0C4: bne         $t6, $at, L_151DE16C
    if (ctx->r14 != ctx->r1) {
        // 0x151DE0C8: lui         $v0, 0x800E
        ctx->r2 = S32(0X800E << 16);
            goto L_151DE16C;
    }
    // 0x151DE0C8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151DE0CC: lb          $v0, 0xA85($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XA85);
    // 0x151DE0D0: slti        $at, $v0, -0x1E
    ctx->r1 = SIGNED(ctx->r2) < -0X1E ? 1 : 0;
    // 0x151DE0D4: bne         $at, $zero, L_151DE0E0
    if (ctx->r1 != 0) {
        // 0x151DE0D8: slti        $at, $t1, -0x1E
        ctx->r1 = SIGNED(ctx->r9) < -0X1E ? 1 : 0;
            goto L_151DE0E0;
    }
    // 0x151DE0D8: slti        $at, $t1, -0x1E
    ctx->r1 = SIGNED(ctx->r9) < -0X1E ? 1 : 0;
    // 0x151DE0DC: bne         $at, $zero, L_151DE0F0
    if (ctx->r1 != 0) {
        // 0x151DE0E0: slti        $at, $v0, 0x1F
        ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
            goto L_151DE0F0;
    }
L_151DE0E0:
    // 0x151DE0E0: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x151DE0E4: beq         $at, $zero, L_151DE16C
    if (ctx->r1 == 0) {
        // 0x151DE0E8: slti        $at, $t1, 0x1F
        ctx->r1 = SIGNED(ctx->r9) < 0X1F ? 1 : 0;
            goto L_151DE16C;
    }
    // 0x151DE0E8: slti        $at, $t1, 0x1F
    ctx->r1 = SIGNED(ctx->r9) < 0X1F ? 1 : 0;
    // 0x151DE0EC: bne         $at, $zero, L_151DE16C
    if (ctx->r1 != 0) {
        // 0x151DE0F0: addiu       $t8, $zero, 0x62D
        ctx->r24 = ADD32(0, 0X62D);
            goto L_151DE16C;
    }
L_151DE0F0:
    // 0x151DE0F0: addiu       $t8, $zero, 0x62D
    ctx->r24 = ADD32(0, 0X62D);
    // 0x151DE0F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151DE0F8: bne         $v1, $at, L_151DE10C
    if (ctx->r3 != ctx->r1) {
        // 0x151DE0FC: sw          $t8, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r24;
            goto L_151DE10C;
    }
    // 0x151DE0FC: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x151DE100: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151DE104: b           L_151DE16C
    // 0x151DE108: sb          $t9, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r25;
        goto L_151DE16C;
    // 0x151DE108: sb          $t9, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r25;
L_151DE10C:
    // 0x151DE10C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151DE110: b           L_151DE16C
    // 0x151DE114: sb          $t7, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r15;
        goto L_151DE16C;
    // 0x151DE114: sb          $t7, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r15;
L_151DE118:
    // 0x151DE118: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151DE11C: lb          $t6, -0x10C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X10C);
    // 0x151DE120: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151DE124: slti        $at, $t6, -0x1E
    ctx->r1 = SIGNED(ctx->r14) < -0X1E ? 1 : 0;
    // 0x151DE128: bne         $at, $zero, L_151DE138
    if (ctx->r1 != 0) {
        // 0x151DE12C: slti        $at, $t0, -0x1E
        ctx->r1 = SIGNED(ctx->r8) < -0X1E ? 1 : 0;
            goto L_151DE138;
    }
    // 0x151DE12C: slti        $at, $t0, -0x1E
    ctx->r1 = SIGNED(ctx->r8) < -0X1E ? 1 : 0;
    // 0x151DE130: bne         $at, $zero, L_151DE14C
    if (ctx->r1 != 0) {
        // 0x151DE134: nop
    
            goto L_151DE14C;
    }
    // 0x151DE134: nop

L_151DE138:
    // 0x151DE138: lb          $t8, -0x10C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X10C);
    // 0x151DE13C: slti        $at, $t8, 0x1F
    ctx->r1 = SIGNED(ctx->r24) < 0X1F ? 1 : 0;
    // 0x151DE140: beq         $at, $zero, L_151DE16C
    if (ctx->r1 == 0) {
        // 0x151DE144: slti        $at, $t0, 0x1F
        ctx->r1 = SIGNED(ctx->r8) < 0X1F ? 1 : 0;
            goto L_151DE16C;
    }
    // 0x151DE144: slti        $at, $t0, 0x1F
    ctx->r1 = SIGNED(ctx->r8) < 0X1F ? 1 : 0;
    // 0x151DE148: bne         $at, $zero, L_151DE16C
    if (ctx->r1 != 0) {
        // 0x151DE14C: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_151DE16C;
    }
L_151DE14C:
    // 0x151DE14C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151DE150: lb          $t9, -0x268($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X268);
    // 0x151DE154: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151DE158: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE15C: addiu       $t8, $zero, 0x62D
    ctx->r24 = ADD32(0, 0X62D);
    // 0x151DE160: subu        $t6, $t7, $t9
    ctx->r14 = SUB32(ctx->r15, ctx->r25);
    // 0x151DE164: sb          $t6, -0x268($at)
    MEM_B(-0X268, ctx->r1) = ctx->r14;
    // 0x151DE168: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
L_151DE16C:
    // 0x151DE16C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE170: sb          $t0, -0x10C($at)
    MEM_B(-0X10C, ctx->r1) = ctx->r8;
    // 0x151DE174: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE178: sb          $t1, 0xA85($at)
    MEM_B(0XA85, ctx->r1) = ctx->r9;
    // 0x151DE17C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151DE180: jal         0x1504332C
    // 0x151DE184: lbu         $a3, -0x233($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X233);
    func_1504332C(rdram, ctx);
        goto after_3;
    // 0x151DE184: lbu         $a3, -0x233($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X233);
    after_3:
    // 0x151DE188: lbu         $t9, 0x94($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X94);
    // 0x151DE18C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE190: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE194: beq         $t9, $zero, L_151DE1D0
    if (ctx->r25 == 0) {
        // 0x151DE198: addiu       $a0, $zero, 0x94
        ctx->r4 = ADD32(0, 0X94);
            goto L_151DE1D0;
    }
    // 0x151DE198: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151DE19C: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
    // 0x151DE1A0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151DE1A4: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x151DE1A8: addiu       $s0, $s0, 0x73
    ctx->r16 = ADD32(ctx->r16, 0X73);
    // 0x151DE1AC: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    // 0x151DE1B0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151DE1B4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151DE1B8: addiu       $a3, $a3, -0x4824
    ctx->r7 = ADD32(ctx->r7, -0X4824);
    // 0x151DE1BC: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151DE1C0: jal         0x15042D94
    // 0x151DE1C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_4;
    // 0x151DE1C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x151DE1C8: b           L_151DE294
    // 0x151DE1CC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
        goto L_151DE294;
    // 0x151DE1CC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
L_151DE1D0:
    // 0x151DE1D0: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
    // 0x151DE1D4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151DE1D8: addiu       $t8, $zero, 0x1A
    ctx->r24 = ADD32(0, 0X1A);
    // 0x151DE1DC: addiu       $s0, $s0, 0x73
    ctx->r16 = ADD32(ctx->r16, 0X73);
    // 0x151DE1E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151DE1E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151DE1E8: addiu       $a3, $a3, -0x4820
    ctx->r7 = ADD32(ctx->r7, -0X4820);
    // 0x151DE1EC: jal         0x15042D94
    // 0x151DE1F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_5;
    // 0x151DE1F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x151DE1F4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE1F8: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE1FC: lb          $v1, 0x0($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X0);
    // 0x151DE200: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x151DE204: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x151DE208: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151DE20C: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x151DE210: beq         $at, $zero, L_151DE230
    if (ctx->r1 == 0) {
        // 0x151DE214: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_151DE230;
    }
    // 0x151DE214: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151DE218: sltiu       $t9, $v1, 0x1
    ctx->r25 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x151DE21C: addiu       $t6, $t9, 0xC
    ctx->r14 = ADD32(ctx->r25, 0XC);
    // 0x151DE220: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151DE224: addiu       $a3, $a3, -0x481C
    ctx->r7 = ADD32(ctx->r7, -0X481C);
    // 0x151DE228: jal         0x15042D94
    // 0x151DE22C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15042D94(rdram, ctx);
        goto after_6;
    // 0x151DE22C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_6:
L_151DE230:
    // 0x151DE230: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x151DE234: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151DE238: addiu       $a1, $a1, 0x55
    ctx->r5 = ADD32(ctx->r5, 0X55);
    // 0x151DE23C: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x151DE240: jal         0x150432FC
    // 0x151DE244: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    func_150432FC(rdram, ctx);
        goto after_7;
    // 0x151DE244: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    after_7:
    // 0x151DE248: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE24C: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE250: lb          $v1, 0x0($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X0);
    // 0x151DE254: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x151DE258: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x151DE25C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151DE260: bne         $t9, $v1, L_151DE27C
    if (ctx->r25 != ctx->r3) {
        // 0x151DE264: slt         $at, $t6, $v1
        ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_151DE27C;
    }
    // 0x151DE264: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x151DE268: addiu       $a0, $a0, -0x4818
    ctx->r4 = ADD32(ctx->r4, -0X4818);
    // 0x151DE26C: jal         0x15042E3C
    // 0x151DE270: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_15042E3C(rdram, ctx);
        goto after_8;
    // 0x151DE270: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_8:
    // 0x151DE274: b           L_151DE294
    // 0x151DE278: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
        goto L_151DE294;
    // 0x151DE278: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
L_151DE27C:
    // 0x151DE27C: beq         $at, $zero, L_151DE290
    if (ctx->r1 == 0) {
        // 0x151DE280: lui         $a0, 0x800B
        ctx->r4 = S32(0X800B << 16);
            goto L_151DE290;
    }
    // 0x151DE280: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151DE284: addiu       $a0, $a0, -0x4814
    ctx->r4 = ADD32(ctx->r4, -0X4814);
    // 0x151DE288: jal         0x15042E3C
    // 0x151DE28C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_15042E3C(rdram, ctx);
        goto after_9;
    // 0x151DE28C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_9:
L_151DE290:
    // 0x151DE290: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
L_151DE294:
    // 0x151DE294: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151DE298: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x151DE29C: jal         0x150432FC
    // 0x151DE2A0: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    func_150432FC(rdram, ctx);
        goto after_10;
    // 0x151DE2A0: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    after_10:
    // 0x151DE2A4: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE2A8: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE2AC: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x151DE2B0: lb          $v1, 0x0($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X0);
    // 0x151DE2B4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151DE2B8: addiu       $t5, $t5, -0x114
    ctx->r13 = ADD32(ctx->r13, -0X114);
    // 0x151DE2BC: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x151DE2C0: beq         $at, $zero, L_151DE414
    if (ctx->r1 == 0) {
        // 0x151DE2C4: addiu       $a0, $zero, 0x6C
        ctx->r4 = ADD32(0, 0X6C);
            goto L_151DE414;
    }
    // 0x151DE2C4: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    // 0x151DE2C8: lbu         $t7, 0x94($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X94);
    // 0x151DE2CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151DE2D0: bne         $t7, $zero, L_151DE378
    if (ctx->r15 != 0) {
        // 0x151DE2D4: nop
    
            goto L_151DE378;
    }
    // 0x151DE2D4: nop

    // 0x151DE2D8: bne         $t0, $at, L_151DE34C
    if (ctx->r8 != ctx->r1) {
        // 0x151DE2DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151DE34C;
    }
    // 0x151DE2DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151DE2E0: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x151DE2E4: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    // 0x151DE2E8: addiu       $a1, $a1, 0x63
    ctx->r5 = ADD32(ctx->r5, 0X63);
    // 0x151DE2EC: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x151DE2F0: jal         0x150432FC
    // 0x151DE2F4: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    func_150432FC(rdram, ctx);
        goto after_11;
    // 0x151DE2F4: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    after_11:
    // 0x151DE2F8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE2FC: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE300: lb          $a1, 0x0($t3)
    ctx->r5 = MEM_B(ctx->r11, 0X0);
    // 0x151DE304: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151DE308: addiu       $a0, $a0, -0x4810
    ctx->r4 = ADD32(ctx->r4, -0X4810);
    // 0x151DE30C: xori        $t8, $a1, 0x1
    ctx->r24 = ctx->r5 ^ 0X1;
    // 0x151DE310: sltiu       $t8, $t8, 0x1
    ctx->r24 = ctx->r24 < 0X1 ? 1 : 0;
    // 0x151DE314: jal         0x15042E3C
    // 0x151DE318: addiu       $a1, $t8, 0x21
    ctx->r5 = ADD32(ctx->r24, 0X21);
    func_15042E3C(rdram, ctx);
        goto after_12;
    // 0x151DE318: addiu       $a1, $t8, 0x21
    ctx->r5 = ADD32(ctx->r24, 0X21);
    after_12:
    // 0x151DE31C: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x151DE320: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x151DE324: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x151DE328: addiu       $a1, $a1, 0x82
    ctx->r5 = ADD32(ctx->r5, 0X82);
    // 0x151DE32C: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x151DE330: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151DE334: jal         0x150432FC
    // 0x151DE338: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    func_150432FC(rdram, ctx);
        goto after_13;
    // 0x151DE338: addiu       $a0, $zero, 0x53
    ctx->r4 = ADD32(0, 0X53);
    after_13:
    // 0x151DE33C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE340: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE344: lb          $v1, 0x0($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X0);
    // 0x151DE348: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
L_151DE34C:
    // 0x151DE34C: xor         $a1, $v0, $v1
    ctx->r5 = ctx->r2 ^ ctx->r3;
    // 0x151DE350: sltiu       $a1, $a1, 0x1
    ctx->r5 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x151DE354: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x151DE358: addiu       $a0, $a0, -0x480C
    ctx->r4 = ADD32(ctx->r4, -0X480C);
    // 0x151DE35C: jal         0x15042E3C
    // 0x151DE360: addiu       $a1, $a1, 0xE
    ctx->r5 = ADD32(ctx->r5, 0XE);
    func_15042E3C(rdram, ctx);
        goto after_14;
    // 0x151DE360: addiu       $a1, $a1, 0xE
    ctx->r5 = ADD32(ctx->r5, 0XE);
    after_14:
    // 0x151DE364: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE368: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151DE36C: addiu       $t5, $t5, -0x114
    ctx->r13 = ADD32(ctx->r13, -0X114);
    // 0x151DE370: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE374: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
L_151DE378:
    // 0x151DE378: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151DE37C: lh          $v0, 0xB9A($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XB9A);
    // 0x151DE380: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151DE384: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE388: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x151DE38C: beq         $t6, $zero, L_151DE3A0
    if (ctx->r14 == 0) {
        // 0x151DE390: addiu       $t7, $zero, 0xA
        ctx->r15 = ADD32(0, 0XA);
            goto L_151DE3A0;
    }
    // 0x151DE390: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x151DE394: sb          $t8, -0x110($at)
    MEM_B(-0X110, ctx->r1) = ctx->r24;
    // 0x151DE398: b           L_151DE698
    // 0x151DE39C: sb          $t7, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r15;
        goto L_151DE698;
    // 0x151DE39C: sb          $t7, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r15;
L_151DE3A0:
    // 0x151DE3A0: lb          $v1, 0x0($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X0);
    // 0x151DE3A4: andi        $t9, $v0, 0x4000
    ctx->r25 = ctx->r2 & 0X4000;
    // 0x151DE3A8: andi        $t6, $v0, 0xC000
    ctx->r14 = ctx->r2 & 0XC000;
    // 0x151DE3AC: beq         $v1, $zero, L_151DE3BC
    if (ctx->r3 == 0) {
        // 0x151DE3B0: nop
    
            goto L_151DE3BC;
    }
    // 0x151DE3B0: nop

    // 0x151DE3B4: beql        $t9, $zero, L_151DE3DC
    if (ctx->r25 == 0) {
        // 0x151DE3B8: andi        $t9, $v0, 0x8000
        ctx->r25 = ctx->r2 & 0X8000;
            goto L_151DE3DC;
    }
    goto skip_8;
    // 0x151DE3B8: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    skip_8:
L_151DE3BC:
    // 0x151DE3BC: beq         $t6, $zero, L_151DE698
    if (ctx->r14 == 0) {
        // 0x151DE3C0: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_151DE698;
    }
    // 0x151DE3C0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151DE3C4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE3C8: sb          $t8, -0x110($at)
    MEM_B(-0X110, ctx->r1) = ctx->r24;
    // 0x151DE3CC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x151DE3D0: b           L_151DE698
    // 0x151DE3D4: sb          $t7, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r15;
        goto L_151DE698;
    // 0x151DE3D4: sb          $t7, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r15;
    // 0x151DE3D8: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
L_151DE3DC:
    // 0x151DE3DC: beq         $t9, $zero, L_151DE698
    if (ctx->r25 == 0) {
        // 0x151DE3E0: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_151DE698;
    }
    // 0x151DE3E0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE3E4: sb          $zero, -0x268($at)
    MEM_B(-0X268, ctx->r1) = 0;
    // 0x151DE3E8: addu        $t6, $v1, $t0
    ctx->r14 = ADD32(ctx->r3, ctx->r8);
    // 0x151DE3EC: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x151DE3F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151DE3F4: bne         $t0, $at, L_151DE408
    if (ctx->r8 != ctx->r1) {
        // 0x151DE3F8: sb          $t8, 0x0($t3)
        MEM_B(0X0, ctx->r11) = ctx->r24;
            goto L_151DE408;
    }
    // 0x151DE3F8: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
    // 0x151DE3FC: lb          $t7, 0x0($t3)
    ctx->r15 = MEM_B(ctx->r11, 0X0);
    // 0x151DE400: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x151DE404: sb          $t9, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r25;
L_151DE408:
    // 0x151DE408: addiu       $t6, $zero, 0x500
    ctx->r14 = ADD32(0, 0X500);
    // 0x151DE40C: b           L_151DE698
    // 0x151DE410: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
        goto L_151DE698;
    // 0x151DE410: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
L_151DE414:
    // 0x151DE414: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151DE418: lb          $t8, -0x268($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X268);
    // 0x151DE41C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151DE420: addiu       $a3, $a3, -0x4808
    ctx->r7 = ADD32(ctx->r7, -0X4808);
    // 0x151DE424: addiu       $t7, $t8, 0x1F
    ctx->r15 = ADD32(ctx->r24, 0X1F);
    // 0x151DE428: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151DE42C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151DE430: jal         0x15042D94
    // 0x151DE434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_15;
    // 0x151DE434: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x151DE438: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151DE43C: lb          $t9, -0x268($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X268);
    // 0x151DE440: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x151DE444: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x151DE448: subu        $t8, $t6, $t9
    ctx->r24 = SUB32(ctx->r14, ctx->r25);
    // 0x151DE44C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151DE450: addiu       $a3, $a3, -0x4804
    ctx->r7 = ADD32(ctx->r7, -0X4804);
    // 0x151DE454: addiu       $a0, $zero, 0xBC
    ctx->r4 = ADD32(0, 0XBC);
    // 0x151DE458: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x151DE45C: jal         0x15042D94
    // 0x151DE460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15042D94(rdram, ctx);
        goto after_16;
    // 0x151DE460: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x151DE464: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151DE468: lh          $v0, 0xB9A($v0)
    ctx->r2 = MEM_H(ctx->r2, 0XB9A);
    // 0x151DE46C: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE470: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE474: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x151DE478: beq         $t7, $zero, L_151DE684
    if (ctx->r15 == 0) {
        // 0x151DE47C: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_151DE684;
    }
    // 0x151DE47C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x151DE480: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151DE484: lb          $t6, -0x268($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X268);
    // 0x151DE488: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x151DE48C: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x151DE490: beq         $t6, $zero, L_151DE538
    if (ctx->r14 == 0) {
        // 0x151DE494: nop
    
            goto L_151DE538;
    }
    // 0x151DE494: nop

    // 0x151DE498: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151DE49C: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x151DE4A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DE4A4: lui         $t8, 0x151E
    ctx->r24 = S32(0X151E << 16);
    // 0x151DE4A8: addiu       $v0, $v0, 0xA88
    ctx->r2 = ADD32(ctx->r2, 0XA88);
    // 0x151DE4AC: sb          $t9, 0xB94($at)
    MEM_B(0XB94, ctx->r1) = ctx->r25;
    // 0x151DE4B0: addiu       $t8, $t8, -0x2460
    ctx->r24 = ADD32(ctx->r24, -0X2460);
    // 0x151DE4B4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x151DE4B8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151DE4BC: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x151DE4C0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE4C4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x151DE4C8: beq         $t6, $zero, L_151DE508
    if (ctx->r14 == 0) {
        // 0x151DE4CC: sb          $t7, -0x28C($at)
        MEM_B(-0X28C, ctx->r1) = ctx->r15;
            goto L_151DE508;
    }
    // 0x151DE4CC: sb          $t7, -0x28C($at)
    MEM_B(-0X28C, ctx->r1) = ctx->r15;
    // 0x151DE4D0: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151DE4D4: lw          $t8, -0x22C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X22C);
    // 0x151DE4D8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x151DE4DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151DE4E0: sb          $t9, 0x3F($t8)
    MEM_B(0X3F, ctx->r24) = ctx->r25;
    // 0x151DE4E4: lb          $t6, 0x0($t3)
    ctx->r14 = MEM_B(ctx->r11, 0X0);
    // 0x151DE4E8: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x151DE4EC: lui         $t8, 0x151E
    ctx->r24 = S32(0X151E << 16);
    // 0x151DE4F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151DE4F4: bne         $t7, $t6, L_151DE528
    if (ctx->r15 != ctx->r14) {
        // 0x151DE4F8: addiu       $t8, $t8, 0x2834
        ctx->r24 = ADD32(ctx->r24, 0X2834);
            goto L_151DE528;
    }
    // 0x151DE4F8: addiu       $t8, $t8, 0x2834
    ctx->r24 = ADD32(ctx->r24, 0X2834);
    // 0x151DE4FC: sb          $t9, -0x264($at)
    MEM_B(-0X264, ctx->r1) = ctx->r25;
    // 0x151DE500: b           L_151DE528
    // 0x151DE504: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_151DE528;
    // 0x151DE504: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_151DE508:
    // 0x151DE508: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x151DE50C: lb          $a0, -0x258($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X258);
    // 0x151DE510: bltzl       $a0, L_151DE52C
    if (SIGNED(ctx->r4) < 0) {
        // 0x151DE514: sb          $zero, 0x0($t3)
        MEM_B(0X0, ctx->r11) = 0;
            goto L_151DE52C;
    }
    goto skip_9;
    // 0x151DE514: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
    skip_9:
    // 0x151DE518: jal         0x15007718
    // 0x151DE51C: nop

    func_15007718(rdram, ctx);
        goto after_17;
    // 0x151DE51C: nop

    after_17:
    // 0x151DE520: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE524: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
L_151DE528:
    // 0x151DE528: sb          $zero, 0x0($t3)
    MEM_B(0X0, ctx->r11) = 0;
L_151DE52C:
    // 0x151DE52C: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x151DE530: b           L_151DE678
    // 0x151DE534: sb          $zero, 0x7270($at)
    MEM_B(0X7270, ctx->r1) = 0;
        goto L_151DE678;
    // 0x151DE534: sb          $zero, 0x7270($at)
    MEM_B(0X7270, ctx->r1) = 0;
L_151DE538:
    // 0x151DE538: beq         $t7, $zero, L_151DE550
    if (ctx->r15 == 0) {
        // 0x151DE53C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151DE550;
    }
    // 0x151DE53C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151DE540: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_151DE544:
    // 0x151DE544: andi        $t6, $s0, 0xF
    ctx->r14 = ctx->r16 & 0XF;
    // 0x151DE548: bnel        $t6, $zero, L_151DE544
    if (ctx->r14 != 0) {
        // 0x151DE54C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_151DE544;
    }
    goto skip_10;
    // 0x151DE54C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_10:
L_151DE550:
    // 0x151DE550: jal         0x151DDB94
    // 0x151DE554: addiu       $a0, $zero, -0xF81
    ctx->r4 = ADD32(0, -0XF81);
    func_151DDB94(rdram, ctx);
        goto after_18;
    // 0x151DE554: addiu       $a0, $zero, -0xF81
    ctx->r4 = ADD32(0, -0XF81);
    after_18:
    // 0x151DE558: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x151DE55C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151DE560: jal         0x10023D20
    // 0x151DE564: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_19;
    // 0x151DE564: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_19:
    // 0x151DE568: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x151DE56C: addiu       $t8, $t8, -0x76F8
    ctx->r24 = ADD32(ctx->r24, -0X76F8);
    // 0x151DE570: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x151DE574: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x151DE578: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151DE57C: addiu       $a0, $a0, -0x7720
    ctx->r4 = ADD32(ctx->r4, -0X7720);
    // 0x151DE580: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151DE584: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DE588: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DE58C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x151DE590: jal         0x10024920
    // 0x151DE594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    osPiStartDma_recomp(rdram, ctx);
        goto after_20;
    // 0x151DE594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_20:
    // 0x151DE598: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x151DE59C: addiu       $a0, $a0, -0x76F8
    ctx->r4 = ADD32(ctx->r4, -0X76F8);
    // 0x151DE5A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DE5A4: jal         0x10023440
    // 0x151DE5A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_21;
    // 0x151DE5A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_21:
    // 0x151DE5AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151DE5B0: jal         0x10022D10
    // 0x151DE5B4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    osInvalDCache_recomp(rdram, ctx);
        goto after_22;
    // 0x151DE5B4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_22:
    // 0x151DE5B8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x151DE5BC: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x151DE5C0: lui         $v0, 0x3E0E
    ctx->r2 = S32(0X3E0E << 16);
    // 0x151DE5C4: ori         $v0, $v0, 0xF0F0
    ctx->r2 = ctx->r2 | 0XF0F0;
    // 0x151DE5C8: lui         $at, 0x3050
    ctx->r1 = S32(0X3050 << 16);
    // 0x151DE5CC: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE5D0: ori         $at, $at, 0xA14A
    ctx->r1 = ctx->r1 | 0XA14A;
    // 0x151DE5D4: subu        $t6, $t7, $v0
    ctx->r14 = SUB32(ctx->r15, ctx->r2);
    // 0x151DE5D8: subu        $t8, $t9, $v0
    ctx->r24 = SUB32(ctx->r25, ctx->r2);
    // 0x151DE5DC: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE5E0: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x151DE5E4: bne         $t6, $at, L_151DE5FC
    if (ctx->r14 != ctx->r1) {
        // 0x151DE5E8: sw          $t8, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r24;
            goto L_151DE5FC;
    }
    // 0x151DE5E8: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x151DE5EC: lui         $at, 0xBCFC
    ctx->r1 = S32(0XBCFC << 16);
    // 0x151DE5F0: ori         $at, $at, 0xF506
    ctx->r1 = ctx->r1 | 0XF506;
    // 0x151DE5F4: beql        $t8, $at, L_151DE670
    if (ctx->r24 == ctx->r1) {
        // 0x151DE5F8: lb          $t9, 0x0($t3)
        ctx->r25 = MEM_B(ctx->r11, 0X0);
            goto L_151DE670;
    }
    goto skip_11;
    // 0x151DE5F8: lb          $t9, 0x0($t3)
    ctx->r25 = MEM_B(ctx->r11, 0X0);
    skip_11:
L_151DE5FC:
    // 0x151DE5FC: jal         0x150ADA20
    // 0x151DE600: nop

    func_150ADA20(rdram, ctx);
        goto after_23;
    // 0x151DE600: nop

    after_23:
    // 0x151DE604: jal         0x150ADA20
    // 0x151DE608: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_24;
    // 0x151DE608: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_24:
    // 0x151DE60C: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x151DE610: ori         $at, $at, 0xFFFE
    ctx->r1 = ctx->r1 | 0XFFFE;
    // 0x151DE614: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x151DE618: lui         $at, 0x8030
    ctx->r1 = S32(0X8030 << 16);
    // 0x151DE61C: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x151DE620: addiu       $t6, $t6, -0x76F8
    ctx->r14 = ADD32(ctx->r14, -0X76F8);
    // 0x151DE624: addu        $t8, $t9, $at
    ctx->r24 = ADD32(ctx->r25, ctx->r1);
    // 0x151DE628: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x151DE62C: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x151DE630: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151DE634: addiu       $a0, $a0, -0x7720
    ctx->r4 = ADD32(ctx->r4, -0X7720);
    // 0x151DE638: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151DE63C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151DE640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DE644: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151DE648: jal         0x10024920
    // 0x151DE64C: andi        $a3, $s0, 0xFFFF
    ctx->r7 = ctx->r16 & 0XFFFF;
    osPiStartDma_recomp(rdram, ctx);
        goto after_25;
    // 0x151DE64C: andi        $a3, $s0, 0xFFFF
    ctx->r7 = ctx->r16 & 0XFFFF;
    after_25:
    // 0x151DE650: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x151DE654: addiu       $a0, $a0, -0x76F8
    ctx->r4 = ADD32(ctx->r4, -0X76F8);
    // 0x151DE658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151DE65C: jal         0x10023440
    // 0x151DE660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_26;
    // 0x151DE660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_26:
    // 0x151DE664: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x151DE668: addiu       $t3, $t3, -0x1D4
    ctx->r11 = ADD32(ctx->r11, -0X1D4);
    // 0x151DE66C: lb          $t9, 0x0($t3)
    ctx->r25 = MEM_B(ctx->r11, 0X0);
L_151DE670:
    // 0x151DE670: addiu       $t8, $t9, -0x2
    ctx->r24 = ADD32(ctx->r25, -0X2);
    // 0x151DE674: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
L_151DE678:
    // 0x151DE678: addiu       $t7, $zero, 0x500
    ctx->r15 = ADD32(0, 0X500);
    // 0x151DE67C: b           L_151DE698
    // 0x151DE680: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
        goto L_151DE698;
    // 0x151DE680: sw          $t7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r15;
L_151DE684:
    // 0x151DE684: beql        $t6, $zero, L_151DE69C
    if (ctx->r14 == 0) {
        // 0x151DE688: lw          $t7, 0x84($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X84);
            goto L_151DE69C;
    }
    goto skip_12;
    // 0x151DE688: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    skip_12:
    // 0x151DE68C: lb          $t9, 0x0($t3)
    ctx->r25 = MEM_B(ctx->r11, 0X0);
    // 0x151DE690: addiu       $t8, $t9, -0x2
    ctx->r24 = ADD32(ctx->r25, -0X2);
    // 0x151DE694: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
L_151DE698:
    // 0x151DE698: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
L_151DE69C:
    // 0x151DE69C: addiu       $a1, $zero, 0x5DC0
    ctx->r5 = ADD32(0, 0X5DC0);
    // 0x151DE6A0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151DE6A4: beq         $t7, $zero, L_151DE6B8
    if (ctx->r15 == 0) {
        // 0x151DE6A8: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_151DE6B8;
    }
    // 0x151DE6A8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x151DE6AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151DE6B0: jal         0x10010F30
    // 0x151DE6B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_27;
    // 0x151DE6B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_27:
L_151DE6B8:
    // 0x151DE6B8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_151DE6BC:
    // 0x151DE6BC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151DE6C0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x151DE6C4: jr          $ra
    // 0x151DE6C8: nop

    return;
    return;
    // 0x151DE6C8: nop

    // 0x151DE6CC: jr          $ra
    // 0x151DE6D0: nop

    return;
    return;
    // 0x151DE6D0: nop

;}
RECOMP_FUNC void func_1500A490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500A490: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1500A494: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1500A498: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1500A49C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1500A4A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1500A4A4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x1500A4A8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1500A4AC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x1500A4B0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x1500A4B4: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    // 0x1500A4B8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1500A4BC: jal         0x15163604
    // 0x1500A4C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_15163604(rdram, ctx);
        goto after_0;
    // 0x1500A4C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x1500A4C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1500A4C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1500A4CC: jr          $ra
    // 0x1500A4D0: nop

    return;
    return;
    // 0x1500A4D0: nop

;}
RECOMP_FUNC void func_151B0050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B0050: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x151B0054: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x151B0058: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x151B005C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151B0060: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x151B0064: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x151B0068: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151B006C: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    // 0x151B0070: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    // 0x151B0074: jal         0x150ADA68
    // 0x151B0078: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151B0078: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151B007C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B0080: lwc1        $f6, -0x5D74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5D74);
    // 0x151B0084: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B0088: lwc1        $f10, -0x5D70($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5D70);
    // 0x151B008C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151B0090: lh          $a0, 0xA6($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XA6);
    // 0x151B0094: lh          $a1, 0xA2($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XA2);
    // 0x151B0098: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x151B009C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151B00A0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151B00A4: jal         0x15143794
    // 0x151B00A8: nop

    func_15143794(rdram, ctx);
        goto after_1;
    // 0x151B00A8: nop

    after_1:
    // 0x151B00AC: jal         0x150ADA68
    // 0x151B00B0: nop

    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151B00B0: nop

    after_2:
    // 0x151B00B4: jal         0x150ADA20
    // 0x151B00B8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151B00B8: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x151B00BC: jal         0x150ADA20
    // 0x151B00C0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151B00C0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_4:
    // 0x151B00C4: jal         0x150ADA68
    // 0x151B00C8: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x151B00C8: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_5:
    // 0x151B00CC: jal         0x150ADA20
    // 0x151B00D0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151B00D0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x151B00D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151B00D8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151B00DC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x151B00E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B00E4: lwc1        $f8, -0x5D6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5D6C);
    // 0x151B00E8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x151B00EC: divu        $zero, $a3, $at
    lo = S32(U32(ctx->r7) / U32(ctx->r1)); hi = S32(U32(ctx->r7) % U32(ctx->r1));
    // 0x151B00F0: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151B00F4: mfhi        $t6
    ctx->r14 = hi;
    // 0x151B00F8: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x151B00FC: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151B0100: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151B0104: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x151B0108: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151B010C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B0110: lwc1        $f18, -0x5D68($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5D68);
    // 0x151B0114: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151B0118: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B011C: addiu       $a3, $t6, 0x1F
    ctx->r7 = ADD32(ctx->r14, 0X1F);
    // 0x151B0120: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151B0124: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151B0128: lwc1        $f6, -0x5D64($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5D64);
    // 0x151B012C: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x151B0130: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151B0134: lbu         $t7, 0xBB($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XBB);
    // 0x151B0138: mfhi        $t0
    ctx->r8 = hi;
    // 0x151B013C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151B0140: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x151B0144: addiu       $t3, $t2, 0x3
    ctx->r11 = ADD32(ctx->r10, 0X3);
    // 0x151B0148: addiu       $t1, $t0, 0x9B
    ctx->r9 = ADD32(ctx->r8, 0X9B);
    // 0x151B014C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x151B0150: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x151B0154: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151B0158: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x151B015C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151B0160: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x151B0164: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x151B0168: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151B016C: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x151B0170: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151B0174: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151B0178: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x151B017C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x151B0180: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x151B0184: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151B0188: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151B018C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151B0190: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151B0194: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151B0198: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151B019C: jal         0x151DA6F8
    // 0x151B01A0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    func_151DA6F8(rdram, ctx);
        goto after_7;
    // 0x151B01A0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    after_7:
    // 0x151B01A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B01A8: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151B01AC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x151B01B0: jr          $ra
    // 0x151B01B4: nop

    return;
    return;
    // 0x151B01B4: nop

;}
RECOMP_FUNC void func_15103800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15103800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15103804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15103808: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1510380C: addiu       $a0, $a0, -0x6550
    ctx->r4 = ADD32(ctx->r4, -0X6550);
    // 0x15103810: jal         0x100226F0
    // 0x15103814: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15103814: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x15103818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510381C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15103820: jr          $ra
    // 0x15103824: nop

    return;
    return;
    // 0x15103824: nop

;}
RECOMP_FUNC void func_151B6928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B6928: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x151B692C: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x151B6930: sll         $s2, $a2, 16
    ctx->r18 = S32(ctx->r6 << 16);
    // 0x151B6934: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x151B6938: sw          $s1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r17;
    // 0x151B693C: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x151B6940: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151B6944: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151B6948: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x151B694C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151B6950: sw          $s3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r19;
    // 0x151B6954: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x151B6958: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x151B695C: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x151B6960: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x151B6964: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x151B6968: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x151B696C: sw          $a2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r6;
    // 0x151B6970: lb          $t7, 0x2C($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2C);
    // 0x151B6974: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x151B6978: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151B697C: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x151B6980: bne         $at, $zero, L_151B707C
    if (ctx->r1 != 0) {
        // 0x151B6984: addiu       $a0, $s1, 0x84
        ctx->r4 = ADD32(ctx->r17, 0X84);
            goto L_151B707C;
    }
    // 0x151B6984: addiu       $a0, $s1, 0x84
    ctx->r4 = ADD32(ctx->r17, 0X84);
    // 0x151B6988: lbu         $t9, 0x25($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X25);
    // 0x151B698C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B6990: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x151B6994: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x151B6998: addiu       $a2, $t6, 0xA0
    ctx->r6 = ADD32(ctx->r14, 0XA0);
    // 0x151B699C: jal         0x151D5D60
    // 0x151B69A0: addiu       $a3, $sp, 0xFC
    ctx->r7 = ADD32(ctx->r29, 0XFC);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151B69A0: addiu       $a3, $sp, 0xFC
    ctx->r7 = ADD32(ctx->r29, 0XFC);
    after_0:
    // 0x151B69A4: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B69A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151B69AC: beql        $t7, $zero, L_151B7080
    if (ctx->r15 == 0) {
        // 0x151B69B0: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_151B7080;
    }
    goto skip_0;
    // 0x151B69B0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_0:
    // 0x151B69B4: jal         0x15144B34
    // 0x151B69B8: lw          $s3, 0x94($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X94);
    func_15144B34(rdram, ctx);
        goto after_1;
    // 0x151B69B8: lw          $s3, 0x94($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X94);
    after_1:
    // 0x151B69BC: addiu       $s2, $sp, 0xF3
    ctx->r18 = ADD32(ctx->r29, 0XF3);
    // 0x151B69C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151B69C4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151B69C8: addiu       $t9, $zero, 0x1F
    ctx->r25 = ADD32(0, 0X1F);
    // 0x151B69CC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151B69D0: sb          $t8, 0xF3($sp)
    MEM_B(0XF3, ctx->r29) = ctx->r24;
    // 0x151B69D4: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151B69D8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151B69DC: addiu       $a1, $a1, 0xCD4
    ctx->r5 = ADD32(ctx->r5, 0XCD4);
    // 0x151B69E0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x151B69E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151B69E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151B69EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B69F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151B69F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151B69F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151B69FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151B6A00: jal         0x15142E24
    // 0x151B6A04: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    func_15142E24(rdram, ctx);
        goto after_2;
    // 0x151B6A04: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    after_2:
    // 0x151B6A08: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151B6A0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151B6A10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B6A14: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151B6A18: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151B6A1C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151B6A20: jal         0x15142C10
    // 0x151B6A24: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_15142C10(rdram, ctx);
        goto after_3;
    // 0x151B6A24: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_3:
    // 0x151B6A28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B6A2C: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x151B6A30: jal         0x1513F4E4
    // 0x151B6A34: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_4;
    // 0x151B6A34: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x151B6A38: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x151B6A3C: lui         $a2, 0x1F
    ctx->r6 = S32(0X1F << 16);
    // 0x151B6A40: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x151B6A44: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x151B6A48: jal         0x15142B7C
    // 0x151B6A4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15142B7C(rdram, ctx);
        goto after_5;
    // 0x151B6A4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x151B6A50: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151B6A54: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151B6A58: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x151B6A5C: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x151B6A60: lw          $t9, 0x1C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1C);
    // 0x151B6A64: lw          $t6, 0x18($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X18);
    // 0x151B6A68: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151B6A6C: or          $t7, $a1, $at
    ctx->r15 = ctx->r5 | ctx->r1;
    // 0x151B6A70: ori         $a1, $t7, 0x2CA0
    ctx->r5 = ctx->r15 | 0X2CA0;
    // 0x151B6A74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151B6A78: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x151B6A7C: jal         0x15142FBC
    // 0x151B6A80: or          $a2, $t9, $t6
    ctx->r6 = ctx->r25 | ctx->r14;
    func_15142FBC(rdram, ctx);
        goto after_6;
    // 0x151B6A80: or          $a2, $t9, $t6
    ctx->r6 = ctx->r25 | ctx->r14;
    after_6:
    // 0x151B6A84: lhu         $t7, 0x1E($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X1E);
    // 0x151B6A88: lw          $t1, 0xF4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF4);
    // 0x151B6A8C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151B6A90: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x151B6A94: beql        $t8, $zero, L_151B6AE8
    if (ctx->r24 == 0) {
        // 0x151B6A98: lb          $a2, 0x2E($s1)
        ctx->r6 = MEM_B(ctx->r17, 0X2E);
            goto L_151B6AE8;
    }
    goto skip_1;
    // 0x151B6A98: lb          $a2, 0x2E($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X2E);
    skip_1:
    // 0x151B6A9C: lb          $a1, 0x2E($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X2E);
    // 0x151B6AA0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x151B6AA4: bgezl       $a1, L_151B6AB8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151B6AA8: lw          $at, 0x10($s1)
        ctx->r1 = MEM_W(ctx->r17, 0X10);
            goto L_151B6AB8;
    }
    goto skip_2;
    // 0x151B6AA8: lw          $at, 0x10($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X10);
    skip_2:
    // 0x151B6AAC: lbu         $a1, 0x25($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X25);
    // 0x151B6AB0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x151B6AB4: lw          $at, 0x10($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X10);
L_151B6AB8:
    // 0x151B6AB8: addiu       $s2, $sp, 0xD8
    ctx->r18 = ADD32(ctx->r29, 0XD8);
    // 0x151B6ABC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151B6AC0: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151B6AC4: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x151B6AC8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x151B6ACC: addiu       $ra, $zero, 0x1C
    ctx->r31 = ADD32(0, 0X1C);
    // 0x151B6AD0: sw          $t6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r14;
    // 0x151B6AD4: lw          $at, 0x18($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X18);
    // 0x151B6AD8: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151B6ADC: b           L_151B6B48
    // 0x151B6AE0: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
        goto L_151B6B48;
    // 0x151B6AE0: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x151B6AE4: lb          $a2, 0x2E($s1)
    ctx->r6 = MEM_B(ctx->r17, 0X2E);
L_151B6AE8:
    // 0x151B6AE8: addiu       $ra, $zero, 0x1C
    ctx->r31 = ADD32(0, 0X1C);
    // 0x151B6AEC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x151B6AF0: bgezl       $a2, L_151B6B04
    if (SIGNED(ctx->r6) >= 0) {
        // 0x151B6AF4: addiu       $a1, $a2, -0x1
        ctx->r5 = ADD32(ctx->r6, -0X1);
            goto L_151B6B04;
    }
    goto skip_3;
    // 0x151B6AF4: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
    skip_3:
    // 0x151B6AF8: lbu         $a2, 0x25($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X25);
    // 0x151B6AFC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x151B6B00: addiu       $a1, $a2, -0x1
    ctx->r5 = ADD32(ctx->r6, -0X1);
L_151B6B04:
    // 0x151B6B04: bgez        $a1, L_151B6B14
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151B6B08: nop
    
            goto L_151B6B14;
    }
    // 0x151B6B08: nop

    // 0x151B6B0C: lbu         $a1, 0x25($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X25);
    // 0x151B6B10: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_151B6B14:
    // 0x151B6B14: multu       $a2, $ra
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B6B18: addiu       $s2, $sp, 0xD8
    ctx->r18 = ADD32(ctx->r29, 0XD8);
    // 0x151B6B1C: mflo        $t7
    ctx->r15 = lo;
    // 0x151B6B20: addu        $v0, $s3, $t7
    ctx->r2 = ADD32(ctx->r19, ctx->r15);
    // 0x151B6B24: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B6B28: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151B6B2C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151B6B30: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x151B6B34: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B6B38: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151B6B3C: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151B6B40: lbu         $v1, 0x10($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X10);
    // 0x151B6B44: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
L_151B6B48:
    // 0x151B6B48: multu       $a1, $ra
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B6B4C: addiu       $t0, $sp, 0xE4
    ctx->r8 = ADD32(ctx->r29, 0XE4);
    // 0x151B6B50: mflo        $t6
    ctx->r14 = lo;
    // 0x151B6B54: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x151B6B58: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B6B5C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151B6B60: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x151B6B64: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x151B6B68: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B6B6C: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151B6B70: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151B6B74: lbu         $a3, 0x10($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X10);
    // 0x151B6B78: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151B6B7C: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x151B6B80: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x151B6B84: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x151B6B88: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151B6B8C: sub.s       $f22, $f10, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B6B90: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151B6B94: sub.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151B6B98: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x151B6B9C: sub.s       $f26, $f4, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x151B6BA0: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x151B6BA4: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151B6BA8: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151B6BAC: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B6BB0: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x151B6BB4: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x151B6BB8: mul.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x151B6BBC: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B6BC0: sub.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x151B6BC4: mul.s       $f8, $f20, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x151B6BC8: nop

    // 0x151B6BCC: mul.s       $f4, $f26, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x151B6BD0: nop

    // 0x151B6BD4: mul.s       $f10, $f16, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x151B6BD8: nop

    // 0x151B6BDC: mul.s       $f6, $f22, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x151B6BE0: sub.s       $f28, $f8, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x151B6BE4: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151B6BE8: nop

    // 0x151B6BEC: mul.s       $f4, $f28, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x151B6BF0: sub.s       $f30, $f10, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x151B6BF4: mul.s       $f6, $f30, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x151B6BF8: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151B6BFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151B6C00: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x151B6C04: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151B6C08: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x151B6C0C: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x151B6C10: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151B6C14: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151B6C18: bc1f        L_151B6C34
    if (!c1cs) {
        // 0x151B6C1C: nop
    
            goto L_151B6C34;
    }
    // 0x151B6C1C: nop

    // 0x151B6C20: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x151B6C24: nop

    // 0x151B6C28: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
    // 0x151B6C2C: b           L_151B6C60
    // 0x151B6C30: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
        goto L_151B6C60;
    // 0x151B6C30: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
L_151B6C34:
    // 0x151B6C34: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151B6C38: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151B6C3C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B6C40: nop

    // 0x151B6C44: div.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151B6C48: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x151B6C4C: nop

    // 0x151B6C50: mul.s       $f28, $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f12.fl);
    // 0x151B6C54: nop

    // 0x151B6C58: mul.s       $f30, $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f12.fl);
    // 0x151B6C5C: nop

L_151B6C60:
    // 0x151B6C60: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x151B6C64: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6C68: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151B6C6C: addiu       $t2, $zero, 0x7FF
    ctx->r10 = ADD32(0, 0X7FF);
    // 0x151B6C70: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B6C74: lui         $t5, 0x502
    ctx->r13 = S32(0X502 << 16);
    // 0x151B6C78: lui         $t4, 0x500
    ctx->r12 = S32(0X500 << 16);
    // 0x151B6C7C: lui         $t3, 0x100
    ctx->r11 = S32(0X100 << 16);
    // 0x151B6C80: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x151B6C84: ori         $t3, $t3, 0x4008
    ctx->r11 = ctx->r11 | 0X4008;
    // 0x151B6C88: ori         $t4, $t4, 0x204
    ctx->r12 = ctx->r12 | 0X204;
    // 0x151B6C8C: sh          $t8, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r24;
    // 0x151B6C90: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151B6C94: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6C98: ori         $t5, $t5, 0x604
    ctx->r13 = ctx->r13 | 0X604;
    // 0x151B6C9C: add.s       $f6, $f10, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x151B6CA0: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B6CA4: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151B6CA8: nop

    // 0x151B6CAC: sh          $t6, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r14;
    // 0x151B6CB0: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151B6CB4: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6CB8: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x151B6CBC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B6CC0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151B6CC4: nop

    // 0x151B6CC8: sh          $t9, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r25;
    // 0x151B6CCC: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151B6CD0: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6CD4: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B6CD8: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x151B6CDC: nop

    // 0x151B6CE0: sh          $v0, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r2;
    // 0x151B6CE4: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6CE8: sh          $zero, 0xA($t9)
    MEM_H(0XA, ctx->r25) = 0;
    // 0x151B6CEC: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6CF0: sb          $a0, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r4;
    // 0x151B6CF4: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6CF8: sb          $a0, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r4;
    // 0x151B6CFC: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D00: sb          $a0, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r4;
    // 0x151B6D04: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D08: sb          $v1, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r3;
    // 0x151B6D0C: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D10: sh          $zero, 0x6($t6)
    MEM_H(0X6, ctx->r14) = 0;
    // 0x151B6D14: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151B6D18: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D1C: sub.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x151B6D20: addiu       $t7, $t8, 0x10
    ctx->r15 = ADD32(ctx->r24, 0X10);
    // 0x151B6D24: sw          $t7, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r15;
    // 0x151B6D28: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B6D2C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x151B6D30: nop

    // 0x151B6D34: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x151B6D38: lwc1        $f8, 0xDC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151B6D3C: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D40: sub.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f28.fl;
    // 0x151B6D44: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B6D48: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x151B6D4C: nop

    // 0x151B6D50: sh          $t9, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r25;
    // 0x151B6D54: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151B6D58: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D5C: sub.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f30.fl;
    // 0x151B6D60: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B6D64: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x151B6D68: nop

    // 0x151B6D6C: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x151B6D70: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D74: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x151B6D78: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D7C: sh          $t2, 0xA($t7)
    MEM_H(0XA, ctx->r15) = ctx->r10;
    // 0x151B6D80: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D84: sb          $a0, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r4;
    // 0x151B6D88: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D8C: sb          $a0, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r4;
    // 0x151B6D90: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D94: sb          $a0, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r4;
    // 0x151B6D98: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6D9C: sb          $v1, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r3;
    // 0x151B6DA0: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6DA4: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151B6DA8: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6DAC: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x151B6DB0: sw          $t6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r14;
    // 0x151B6DB4: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
L_151B6DB8:
    // 0x151B6DB8: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x151B6DBC: lwc1        $f8, 0xE8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x151B6DC0: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x151B6DC4: sub.s       $f22, $f6, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151B6DC8: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151B6DCC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x151B6DD0: sub.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B6DD4: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x151B6DD8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151B6DDC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x151B6DE0: sub.s       $f26, $f4, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x151B6DE4: lwc1        $f10, 0xDC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151B6DE8: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x151B6DEC: lwc1        $f10, 0xE0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151B6DF0: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B6DF4: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x151B6DF8: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x151B6DFC: mul.s       $f10, $f24, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x151B6E00: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B6E04: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B6E08: mul.s       $f8, $f20, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x151B6E0C: nop

    // 0x151B6E10: mul.s       $f10, $f26, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x151B6E14: nop

    // 0x151B6E18: mul.s       $f4, $f16, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x151B6E1C: nop

    // 0x151B6E20: mul.s       $f6, $f22, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x151B6E24: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151B6E28: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x151B6E2C: nop

    // 0x151B6E30: mul.s       $f10, $f28, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x151B6E34: sub.s       $f30, $f4, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f30.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151B6E38: mul.s       $f6, $f30, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x151B6E3C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151B6E40: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x151B6E44: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151B6E48: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151B6E4C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B6E50: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x151B6E54: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x151B6E58: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x151B6E5C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x151B6E60: lwc1        $f0, 0xA8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151B6E64: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x151B6E68: bc1f        L_151B6E84
    if (!c1cs) {
        // 0x151B6E6C: nop
    
            goto L_151B6E84;
    }
    // 0x151B6E6C: nop

    // 0x151B6E70: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x151B6E74: nop

    // 0x151B6E78: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
    // 0x151B6E7C: b           L_151B6EB0
    // 0x151B6E80: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
        goto L_151B6EB0;
    // 0x151B6E80: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
L_151B6E84:
    // 0x151B6E84: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x151B6E88: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151B6E8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151B6E90: nop

    // 0x151B6E94: div.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151B6E98: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x151B6E9C: nop

    // 0x151B6EA0: mul.s       $f28, $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f12.fl);
    // 0x151B6EA4: nop

    // 0x151B6EA8: mul.s       $f30, $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f12.fl);
    // 0x151B6EAC: nop

L_151B6EB0:
    // 0x151B6EB0: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x151B6EB4: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6EB8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B6EBC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x151B6EC0: nop

    // 0x151B6EC4: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x151B6EC8: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x151B6ECC: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6ED0: add.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x151B6ED4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B6ED8: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151B6EDC: nop

    // 0x151B6EE0: sh          $t8, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r24;
    // 0x151B6EE4: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151B6EE8: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6EEC: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x151B6EF0: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151B6EF4: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x151B6EF8: nop

    // 0x151B6EFC: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x151B6F00: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F04: sh          $v1, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r3;
    // 0x151B6F08: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F0C: sh          $zero, 0xA($t6)
    MEM_H(0XA, ctx->r14) = 0;
    // 0x151B6F10: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F14: sb          $a0, 0xC($t7)
    MEM_B(0XC, ctx->r15) = ctx->r4;
    // 0x151B6F18: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F1C: sb          $a0, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r4;
    // 0x151B6F20: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F24: sb          $a0, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r4;
    // 0x151B6F28: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F2C: sb          $a3, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r7;
    // 0x151B6F30: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F34: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x151B6F38: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x151B6F3C: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F40: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x151B6F44: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x151B6F48: sw          $t9, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r25;
    // 0x151B6F4C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B6F50: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x151B6F54: nop

    // 0x151B6F58: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x151B6F5C: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x151B6F60: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F64: sub.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f28.fl;
    // 0x151B6F68: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151B6F6C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x151B6F70: nop

    // 0x151B6F74: sh          $t6, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r14;
    // 0x151B6F78: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x151B6F7C: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F80: sub.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f30.fl;
    // 0x151B6F84: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B6F88: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151B6F8C: nop

    // 0x151B6F90: sh          $t8, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r24;
    // 0x151B6F94: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6F98: sh          $v1, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r3;
    // 0x151B6F9C: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6FA0: sh          $t2, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r10;
    // 0x151B6FA4: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6FA8: sb          $a0, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r4;
    // 0x151B6FAC: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6FB0: sb          $a0, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r4;
    // 0x151B6FB4: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6FB8: sb          $a0, 0xE($t7)
    MEM_B(0XE, ctx->r15) = ctx->r4;
    // 0x151B6FBC: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6FC0: sb          $a3, 0xF($t9)
    MEM_B(0XF, ctx->r25) = ctx->r7;
    // 0x151B6FC4: lw          $t8, 0xFC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6FC8: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151B6FCC: lw          $t6, 0xFC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6FD0: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x151B6FD4: sw          $t7, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r15;
    // 0x151B6FD8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x151B6FDC: lw          $t9, 0xFC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XFC);
    // 0x151B6FE0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B6FE4: addiu       $t8, $t9, -0x40
    ctx->r24 = ADD32(ctx->r25, -0X40);
    // 0x151B6FE8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151B6FEC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151B6FF0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151B6FF4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151B6FF8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B6FFC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151B7000: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x151B7004: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151B7008: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151B700C: bgezl       $a1, L_151B7020
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151B7010: lb          $v1, 0x2D($s1)
        ctx->r3 = MEM_B(ctx->r17, 0X2D);
            goto L_151B7020;
    }
    goto skip_4;
    // 0x151B7010: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
    skip_4:
    // 0x151B7014: lbu         $a1, 0x25($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X25);
    // 0x151B7018: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x151B701C: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
L_151B7020:
    // 0x151B7020: beq         $a2, $v1, L_151B7074
    if (ctx->r6 == ctx->r3) {
        // 0x151B7024: nop
    
            goto L_151B7074;
    }
    // 0x151B7024: nop

    // 0x151B7028: multu       $a1, $ra
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151B702C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x151B7030: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x151B7034: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151B7038: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x151B703C: sw          $t7, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r15;
    // 0x151B7040: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151B7044: mflo        $t9
    ctx->r25 = lo;
    // 0x151B7048: addu        $v0, $s3, $t9
    ctx->r2 = ADD32(ctx->r19, ctx->r25);
    // 0x151B704C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151B7050: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x151B7054: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x151B7058: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x151B705C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151B7060: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x151B7064: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151B7068: lbu         $a3, 0x10($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X10);
    // 0x151B706C: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x151B7070: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
L_151B7074:
    // 0x151B7074: bnel        $a2, $v1, L_151B6DB8
    if (ctx->r6 != ctx->r3) {
        // 0x151B7078: lwc1        $f6, 0xE4($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
            goto L_151B6DB8;
    }
    goto skip_5;
    // 0x151B7078: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    skip_5:
L_151B707C:
    // 0x151B707C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151B7080:
    // 0x151B7080: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x151B7084: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x151B7088: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x151B708C: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x151B7090: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x151B7094: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x151B7098: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x151B709C: lw          $s0, 0x64($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X64);
    // 0x151B70A0: lw          $s1, 0x68($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X68);
    // 0x151B70A4: lw          $s2, 0x6C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X6C);
    // 0x151B70A8: lw          $s3, 0x70($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X70);
    // 0x151B70AC: jr          $ra
    // 0x151B70B0: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    return;
    // 0x151B70B0: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_15113C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15113C88: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15113C8C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15113C90: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x15113C94: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x15113C98: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15113C9C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15113CA0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15113CA4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15113CA8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15113CAC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15113CB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15113CB4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15113CB8: lw          $t6, -0x4110($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4110);
    // 0x15113CBC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x15113CC0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x15113CC4: blez        $t6, L_15113E24
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15113CC8: lui         $fp, 0x800C
        ctx->r30 = S32(0X800C << 16);
            goto L_15113E24;
    }
    // 0x15113CC8: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x15113CCC: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x15113CD0: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x15113CD4: addiu       $s2, $s2, 0x2FA0
    ctx->r18 = ADD32(ctx->r18, 0X2FA0);
    // 0x15113CD8: addiu       $s6, $s6, -0x410C
    ctx->r22 = ADD32(ctx->r22, -0X410C);
    // 0x15113CDC: addiu       $fp, $fp, 0x3658
    ctx->r30 = ADD32(ctx->r30, 0X3658);
    // 0x15113CE0: addiu       $s7, $zero, 0x10
    ctx->r23 = ADD32(0, 0X10);
    // 0x15113CE4: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
L_15113CE8:
    // 0x15113CE8: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x15113CEC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x15113CF0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15113CF4: blez        $t8, L_15113D40
    if (SIGNED(ctx->r24) <= 0) {
        // 0x15113CF8: addu        $s1, $s5, $t7
        ctx->r17 = ADD32(ctx->r21, ctx->r15);
            goto L_15113D40;
    }
    // 0x15113CF8: addu        $s1, $s5, $t7
    ctx->r17 = ADD32(ctx->r21, ctx->r15);
    // 0x15113CFC: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
L_15113D00:
    // 0x15113D00: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15113D04: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x15113D08: jal         0x150859AC
    // 0x15113D0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150859AC(rdram, ctx);
        goto after_0;
    // 0x15113D0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x15113D10: beq         $v0, $zero, L_15113D2C
    if (ctx->r2 == 0) {
        // 0x15113D14: addu        $t0, $s1, $s0
        ctx->r8 = ADD32(ctx->r17, ctx->r16);
            goto L_15113D2C;
    }
    // 0x15113D14: addu        $t0, $s1, $s0
    ctx->r8 = ADD32(ctx->r17, ctx->r16);
    // 0x15113D18: lbu         $t1, 0x8B($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X8B);
    // 0x15113D1C: bnel        $t1, $zero, L_15113D30
    if (ctx->r9 != 0) {
        // 0x15113D20: lw          $t2, 0x0($s2)
        ctx->r10 = MEM_W(ctx->r18, 0X0);
            goto L_15113D30;
    }
    goto skip_0;
    // 0x15113D20: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    skip_0:
    // 0x15113D24: b           L_15113D40
    // 0x15113D28: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_15113D40;
    // 0x15113D28: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_15113D2C:
    // 0x15113D2C: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
L_15113D30:
    // 0x15113D30: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x15113D34: slt         $at, $s0, $t2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x15113D38: bnel        $at, $zero, L_15113D00
    if (ctx->r1 != 0) {
        // 0x15113D3C: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_15113D00;
    }
    goto skip_1;
    // 0x15113D3C: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    skip_1:
L_15113D40:
    // 0x15113D40: lbu         $t3, 0x70($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X70);
    // 0x15113D44: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x15113D48: bne         $t4, $zero, L_15113DB8
    if (ctx->r12 != 0) {
        // 0x15113D4C: nop
    
            goto L_15113DB8;
    }
    // 0x15113D4C: nop

    // 0x15113D50: lbu         $t5, 0x4C($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X4C);
    // 0x15113D54: beq         $t5, $zero, L_15113DB8
    if (ctx->r13 == 0) {
        // 0x15113D58: nop
    
            goto L_15113DB8;
    }
    // 0x15113D58: nop

    // 0x15113D5C: lbu         $v0, 0x4F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4F);
    // 0x15113D60: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x15113D64: beq         $s7, $t6, L_15113DB8
    if (ctx->r23 == ctx->r14) {
        // 0x15113D68: nop
    
            goto L_15113DB8;
    }
    // 0x15113D68: nop

    // 0x15113D6C: bne         $s3, $zero, L_15113DB8
    if (ctx->r19 != 0) {
        // 0x15113D70: nop
    
            goto L_15113DB8;
    }
    // 0x15113D70: nop

    // 0x15113D74: lbu         $t7, 0x0($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X0);
    // 0x15113D78: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15113D7C: bnel        $t7, $zero, L_15113DB0
    if (ctx->r15 != 0) {
        // 0x15113D80: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_15113DB0;
    }
    goto skip_2;
    // 0x15113D80: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    skip_2:
    // 0x15113D84: lbu         $t8, 0x35EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X35EA);
    // 0x15113D88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15113D8C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15113D90: bnel        $t8, $at, L_15113DB0
    if (ctx->r24 != ctx->r1) {
        // 0x15113D94: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_15113DB0;
    }
    goto skip_3;
    // 0x15113D94: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    skip_3:
    // 0x15113D98: jal         0x15022B08
    // 0x15113D9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_15022B08(rdram, ctx);
        goto after_1;
    // 0x15113D9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x15113DA0: beq         $v0, $zero, L_15113DB8
    if (ctx->r2 == 0) {
        // 0x15113DA4: nop
    
            goto L_15113DB8;
    }
    // 0x15113DA4: nop

    // 0x15113DA8: lbu         $v0, 0x4F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4F);
    // 0x15113DAC: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
L_15113DB0:
    // 0x15113DB0: bne         $t9, $zero, L_15113DC0
    if (ctx->r25 != 0) {
        // 0x15113DB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15113DC0;
    }
    // 0x15113DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15113DB8:
    // 0x15113DB8: b           L_15113DC0
    // 0x15113DBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15113DC0;
    // 0x15113DBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15113DC0:
    // 0x15113DC0: beql        $v0, $zero, L_15113DF4
    if (ctx->r2 == 0) {
        // 0x15113DC4: lw          $a0, 0x94($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X94);
            goto L_15113DF4;
    }
    goto skip_4;
    // 0x15113DC4: lw          $a0, 0x94($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X94);
    skip_4:
    // 0x15113DC8: lw          $t0, 0x94($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X94);
    // 0x15113DCC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x15113DD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15113DD4: bne         $t0, $zero, L_15113E08
    if (ctx->r8 != 0) {
        // 0x15113DD8: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15113E08;
    }
    // 0x15113DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15113DDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15113DE0: jal         0x1510D970
    // 0x15113DE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1510D970(rdram, ctx);
        goto after_2;
    // 0x15113DE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x15113DE8: b           L_15113E08
    // 0x15113DEC: sw          $v0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r2;
        goto L_15113E08;
    // 0x15113DEC: sw          $v0, 0x94($s1)
    MEM_W(0X94, ctx->r17) = ctx->r2;
    // 0x15113DF0: lw          $a0, 0x94($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X94);
L_15113DF4:
    // 0x15113DF4: beq         $a0, $zero, L_15113E08
    if (ctx->r4 == 0) {
        // 0x15113DF8: nop
    
            goto L_15113E08;
    }
    // 0x15113DF8: nop

    // 0x15113DFC: jal         0x1516972C
    // 0x15113E00: nop

    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x15113E00: nop

    after_3:
    // 0x15113E04: sw          $zero, 0x94($s1)
    MEM_W(0X94, ctx->r17) = 0;
L_15113E08:
    // 0x15113E08: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x15113E0C: lw          $t1, -0x4110($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4110);
    // 0x15113E10: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x15113E14: addiu       $s5, $s5, 0xA0
    ctx->r21 = ADD32(ctx->r21, 0XA0);
    // 0x15113E18: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15113E1C: bnel        $at, $zero, L_15113CE8
    if (ctx->r1 != 0) {
        // 0x15113E20: lw          $t8, 0x0($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X0);
            goto L_15113CE8;
    }
    goto skip_5;
    // 0x15113E20: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    skip_5:
L_15113E24:
    // 0x15113E24: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x15113E28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15113E2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15113E30: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15113E34: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15113E38: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15113E3C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15113E40: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15113E44: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x15113E48: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x15113E4C: jr          $ra
    // 0x15113E50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x15113E50: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_10009FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10009FFC: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000A000: addiu       $v0, $v0, 0x6A0
    ctx->r2 = ADD32(ctx->r2, 0X6A0);
    // 0x1000A004: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x1000A008: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x1000A00C: addiu       $t7, $t7, 0xAC8
    ctx->r15 = ADD32(ctx->r15, 0XAC8);
    // 0x1000A010: bne         $t6, $zero, L_1000A02C
    if (ctx->r14 != 0) {
        // 0x1000A014: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_1000A02C;
    }
    // 0x1000A014: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1000A018: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1000A01C: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x1000A020: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x1000A024: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x1000A028: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_1000A02C:
    // 0x1000A02C: lui         $v0, 0x1001
    ctx->r2 = S32(0X1001 << 16);
    // 0x1000A030: addiu       $v0, $v0, -0x6344
    ctx->r2 = ADD32(ctx->r2, -0X6344);
    // 0x1000A034: jr          $ra
    // 0x1000A038: nop

    return;
    return;
    // 0x1000A038: nop

;}
RECOMP_FUNC void func_15054F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15054F74: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15054F78: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x15054F7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15054F80: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15054F84: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x15054F88: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15054F8C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15054F90: bnel        $v0, $at, L_15055070
    if (ctx->r2 != ctx->r1) {
        // 0x15054F94: addiu       $at, $zero, 0x4B
        ctx->r1 = ADD32(0, 0X4B);
            goto L_15055070;
    }
    goto skip_0;
    // 0x15054F94: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    skip_0:
    // 0x15054F98: lbu         $t8, 0x124($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X124);
    // 0x15054F9C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15054FA0: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x15054FA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15054FA8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15054FAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15054FB0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15054FB4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15054FB8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15054FBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15054FC0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x15054FC4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15054FC8: lbu         $t6, 0x3E78($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E78);
    // 0x15054FCC: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x15054FD0: lbu         $t1, 0x65($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X65);
    // 0x15054FD4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x15054FD8: beql        $t7, $t1, L_15055250
    if (ctx->r15 == ctx->r9) {
        // 0x15054FDC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15055250;
    }
    goto skip_1;
    // 0x15054FDC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_1:
    // 0x15054FE0: lbu         $t2, 0x232($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X232);
    // 0x15054FE4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15054FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15054FEC: bne         $t2, $at, L_1505502C
    if (ctx->r10 != ctx->r1) {
        // 0x15054FF0: lui         $t5, 0x800D
        ctx->r13 = S32(0X800D << 16);
            goto L_1505502C;
    }
    // 0x15054FF0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15054FF4: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x15054FF8: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x15054FFC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x15055000: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15055004: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x15055008: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1505500C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x15055010: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15055014: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15055018: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1505501C: jal         0x15052F9C
    // 0x15055020: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_15052F9C(rdram, ctx);
        goto after_0;
    // 0x15055020: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x15055024: b           L_15055250
    // 0x15055028: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15055250;
    // 0x15055028: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_1505502C:
    // 0x1505502C: lw          $t5, -0x3D98($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3D98);
    // 0x15055030: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x15055034: beql        $t6, $zero, L_15055250
    if (ctx->r14 == 0) {
        // 0x15055038: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15055250;
    }
    goto skip_2;
    // 0x15055038: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
    // 0x1505503C: lw          $t8, 0x25C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X25C);
    // 0x15055040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15055044: lui         $a1, 0x421C
    ctx->r5 = S32(0X421C << 16);
    // 0x15055048: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x1505504C: beq         $t9, $zero, L_1505524C
    if (ctx->r25 == 0) {
        // 0x15055050: lui         $a2, 0x4040
        ctx->r6 = S32(0X4040 << 16);
            goto L_1505524C;
    }
    // 0x15055050: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x15055054: sb          $zero, 0x124($s0)
    MEM_B(0X124, ctx->r16) = 0;
    // 0x15055058: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1505505C: jal         0x1505327C
    // 0x15055060: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    func_1505327C(rdram, ctx);
        goto after_1;
    // 0x15055060: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_1:
    // 0x15055064: b           L_15055250
    // 0x15055068: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15055250;
    // 0x15055068: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1505506C: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
L_15055070:
    // 0x15055070: bne         $v0, $at, L_150551A0
    if (ctx->r2 != ctx->r1) {
        // 0x15055074: lui         $a1, 0x43FA
        ctx->r5 = S32(0X43FA << 16);
            goto L_150551A0;
    }
    // 0x15055074: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x15055078: lhu         $a0, 0x7A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X7A);
    // 0x1505507C: addiu       $t1, $sp, 0x48
    ctx->r9 = ADD32(ctx->r29, 0X48);
    // 0x15055080: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x15055084: xori        $t0, $a0, 0x8000
    ctx->r8 = ctx->r4 ^ 0X8000;
    // 0x15055088: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x1505508C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15055090: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15055094: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15055098: jal         0x1505A184
    // 0x1505509C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_1505A184(rdram, ctx);
        goto after_2;
    // 0x1505509C: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x150550A0: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150550A4: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150550A8: lwc1        $f10, 0x50($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150550AC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150550B0: lhu         $t7, 0x84($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X84);
    // 0x150550B4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150550B8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150550BC: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x150550C0: trunc.w.s   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x150550C4: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x150550C8: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x150550CC: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150550D0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x150550D4: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150550D8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150550DC: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x150550E0: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150550E4: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x150550E8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150550EC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150550F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150550F4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150550F8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150550FC: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x15055100: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15055104: sll         $t8, $t0, 16
    ctx->r24 = S32(ctx->r8 << 16);
    // 0x15055108: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x1505510C: nop

    // 0x15055110: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x15055114: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x15055118: beq         $t7, $at, L_1505514C
    if (ctx->r15 == ctx->r1) {
        // 0x1505511C: sw          $t0, 0x2EC($s0)
        MEM_W(0X2EC, ctx->r16) = ctx->r8;
            goto L_1505514C;
    }
    // 0x1505511C: sw          $t0, 0x2EC($s0)
    MEM_W(0X2EC, ctx->r16) = ctx->r8;
    // 0x15055120: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15055124: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15055128: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1505512C: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x15055130: jal         0x1505A630
    // 0x15055134: sub.s       $f14, $f2, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f6.fl;
    func_1505A630(rdram, ctx);
        goto after_3;
    // 0x15055134: sub.s       $f14, $f2, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f2.fl - ctx->f6.fl;
    after_3:
    // 0x15055138: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x1505513C: sra         $t1, $v1, 16
    ctx->r9 = S32(SIGNED(ctx->r3) >> 16);
    // 0x15055140: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x15055144: b           L_1505515C
    // 0x15055148: lhu         $a0, 0x7A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X7A);
        goto L_1505515C;
    // 0x15055148: lhu         $a0, 0x7A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X7A);
L_1505514C:
    // 0x1505514C: lhu         $a0, 0x7A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X7A);
    // 0x15055150: addiu       $v1, $a0, -0x800
    ctx->r3 = ADD32(ctx->r4, -0X800);
    // 0x15055154: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x15055158: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
L_1505515C:
    // 0x1505515C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x15055160: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15055164: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x15055168: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1505516C: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x15055170: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15055174: div         $zero, $t5, $at
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r1)));
    // 0x15055178: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x1505517C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15055180: mflo        $t9
    ctx->r25 = lo;
    // 0x15055184: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x15055188: sh          $t0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r8;
    // 0x1505518C: swc1        $f0, 0x14C($s0)
    MEM_W(0X14C, ctx->r16) = ctx->f0.u32l;
    // 0x15055190: swc1        $f0, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->f0.u32l;
    // 0x15055194: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    // 0x15055198: b           L_15055250
    // 0x1505519C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15055250;
    // 0x1505519C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150551A0:
    // 0x150551A0: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x150551A4: beq         $v0, $at, L_150551B4
    if (ctx->r2 == ctx->r1) {
        // 0x150551A8: addiu       $at, $zero, 0x7E
        ctx->r1 = ADD32(0, 0X7E);
            goto L_150551B4;
    }
    // 0x150551A8: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x150551AC: bnel        $v0, $at, L_15055250
    if (ctx->r2 != ctx->r1) {
        // 0x150551B0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15055250;
    }
    goto skip_3;
    // 0x150551B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_3:
L_150551B4:
    // 0x150551B4: lw          $v1, 0x2E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2E4);
    // 0x150551B8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150551BC: beql        $v1, $zero, L_15055250
    if (ctx->r3 == 0) {
        // 0x150551C0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15055250;
    }
    goto skip_4;
    // 0x150551C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_4:
    // 0x150551C4: lbu         $t7, -0x19EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X19EA);
    // 0x150551C8: lui         $a3, 0x4461
    ctx->r7 = S32(0X4461 << 16);
    // 0x150551CC: beq         $t7, $zero, L_150551E8
    if (ctx->r15 == 0) {
        // 0x150551D0: nop
    
            goto L_150551E8;
    }
    // 0x150551D0: nop

    // 0x150551D4: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150551D8: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150551DC: jal         0x1508B20C
    // 0x150551E0: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    func_1508B20C(rdram, ctx);
        goto after_4;
    // 0x150551E0: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    after_4:
    // 0x150551E4: lw          $v1, 0x2E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2E4);
L_150551E8:
    // 0x150551E8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150551EC: lw          $a0, -0x161C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X161C);
    // 0x150551F0: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150551F4: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x150551F8: beq         $at, $zero, L_15055244
    if (ctx->r1 == 0) {
        // 0x150551FC: slti        $at, $v1, 0x78
        ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
            goto L_15055244;
    }
    // 0x150551FC: slti        $at, $v1, 0x78
    ctx->r1 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
    // 0x15055200: bne         $at, $zero, L_15055238
    if (ctx->r1 != 0) {
        // 0x15055204: addiu       $t1, $a0, 0x78
        ctx->r9 = ADD32(ctx->r4, 0X78);
            goto L_15055238;
    }
    // 0x15055204: addiu       $t1, $a0, 0x78
    ctx->r9 = ADD32(ctx->r4, 0X78);
    // 0x15055208: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1505520C: beq         $at, $zero, L_15055238
    if (ctx->r1 == 0) {
        // 0x15055210: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_15055238;
    }
    // 0x15055210: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15055214: addiu       $t2, $zero, 0x3E8
    ctx->r10 = ADD32(0, 0X3E8);
    // 0x15055218: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x1505521C: addiu       $a0, $zero, 0x3A1
    ctx->r4 = ADD32(0, 0X3A1);
    // 0x15055220: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x15055224: jal         0x10010154
    // 0x15055228: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    func_10010154(rdram, ctx);
        goto after_5;
    // 0x15055228: addiu       $a3, $zero, 0x1F4
    ctx->r7 = ADD32(0, 0X1F4);
    after_5:
    // 0x1505522C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15055230: lw          $a0, -0x161C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X161C);
    // 0x15055234: lw          $v1, 0x2E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2E4);
L_15055238:
    // 0x15055238: subu        $t3, $v1, $a0
    ctx->r11 = SUB32(ctx->r3, ctx->r4);
    // 0x1505523C: b           L_1505524C
    // 0x15055240: sw          $t3, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = ctx->r11;
        goto L_1505524C;
    // 0x15055240: sw          $t3, 0x2E4($s0)
    MEM_W(0X2E4, ctx->r16) = ctx->r11;
L_15055244:
    // 0x15055244: sb          $t4, 0x232($s0)
    MEM_B(0X232, ctx->r16) = ctx->r12;
    // 0x15055248: sw          $zero, 0x218($s0)
    MEM_W(0X218, ctx->r16) = 0;
L_1505524C:
    // 0x1505524C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15055250:
    // 0x15055250: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15055254: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15055258: jr          $ra
    // 0x1505525C: nop

    return;
    return;
    // 0x1505525C: nop

;}
RECOMP_FUNC void func_150229E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150229E4: bne         $a0, $zero, L_150229F4
    if (ctx->r4 != 0) {
        // 0x150229E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150229F4;
    }
    // 0x150229E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150229EC: jr          $ra
    // 0x150229F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150229F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150229F4:
    // 0x150229F4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x150229F8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150229FC: bne         $t6, $zero, L_15022A0C
    if (ctx->r14 != 0) {
        // 0x15022A00: nop
    
            goto L_15022A0C;
    }
    // 0x15022A00: nop

    // 0x15022A04: jr          $ra
    // 0x15022A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15022A08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15022A0C:
    // 0x15022A0C: lw          $t7, 0x35C8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X35C8);
    // 0x15022A10: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x15022A14: bnel        $t7, $zero, L_15022A28
    if (ctx->r15 != 0) {
        // 0x15022A18: lbu         $t8, 0x5($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X5);
            goto L_15022A28;
    }
    goto skip_0;
    // 0x15022A18: lbu         $t8, 0x5($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5);
    skip_0:
    // 0x15022A1C: jr          $ra
    // 0x15022A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15022A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15022A24: lbu         $t8, 0x5($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5);
L_15022A28:
    // 0x15022A28: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15022A2C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15022A30: bne         $t8, $at, L_15022A3C
    if (ctx->r24 != ctx->r1) {
        // 0x15022A34: lui         $t0, 0x800C
        ctx->r8 = S32(0X800C << 16);
            goto L_15022A3C;
    }
    // 0x15022A34: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15022A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15022A3C:
    // 0x15022A3C: lbu         $a1, 0x65($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X65);
    // 0x15022A40: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x15022A44: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x15022A48: beq         $a1, $zero, L_15022A7C
    if (ctx->r5 == 0) {
        // 0x15022A4C: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_15022A7C;
    }
    // 0x15022A4C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x15022A50: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x15022A54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15022A58: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x15022A5C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15022A60: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x15022A64: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15022A68: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x15022A6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15022A70: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x15022A74: b           L_15022A80
    // 0x15022A78: lbu         $a2, -0x4021($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X4021);
        goto L_15022A80;
    // 0x15022A78: lbu         $a2, -0x4021($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X4021);
L_15022A7C:
    // 0x15022A7C: lbu         $a2, 0x3B($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X3B);
L_15022A80:
    // 0x15022A80: lbu         $a3, 0x363A($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X363A);
    // 0x15022A84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15022A88: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x15022A8C: blez        $a3, L_15022AFC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x15022A90: lui         $t2, 0x800C
        ctx->r10 = S32(0X800C << 16);
            goto L_15022AFC;
    }
    // 0x15022A90: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15022A94: lw          $t0, 0x35C8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X35C8);
    // 0x15022A98: addiu       $t2, $t2, 0x35F0
    ctx->r10 = ADD32(ctx->r10, 0X35F0);
    // 0x15022A9C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
L_15022AA0:
    // 0x15022AA0: lhu         $t3, 0x0($t0)
    ctx->r11 = MEM_HU(ctx->r8, 0X0);
    // 0x15022AA4: addu        $t4, $t2, $v1
    ctx->r12 = ADD32(ctx->r10, ctx->r3);
    // 0x15022AA8: beql        $t3, $zero, L_15022AF0
    if (ctx->r11 == 0) {
        // 0x15022AAC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15022AF0;
    }
    goto skip_1;
    // 0x15022AAC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x15022AB0: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x15022AB4: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x15022AB8: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x15022ABC: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x15022AC0: bnel        $t1, $t7, L_15022AF0
    if (ctx->r9 != ctx->r15) {
        // 0x15022AC4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15022AF0;
    }
    goto skip_2;
    // 0x15022AC4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x15022AC8: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x15022ACC: bnel        $a2, $t8, L_15022AF0
    if (ctx->r6 != ctx->r24) {
        // 0x15022AD0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_15022AF0;
    }
    goto skip_3;
    // 0x15022AD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_3:
    // 0x15022AD4: bne         $a1, $zero, L_15022AE4
    if (ctx->r5 != 0) {
        // 0x15022AD8: nop
    
            goto L_15022AE4;
    }
    // 0x15022AD8: nop

    // 0x15022ADC: jr          $ra
    // 0x15022AE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15022AE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15022AE4:
    // 0x15022AE4: jr          $ra
    // 0x15022AE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    return;
    // 0x15022AE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x15022AEC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_15022AF0:
    // 0x15022AF0: slt         $at, $a0, $a3
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x15022AF4: bne         $at, $zero, L_15022AA0
    if (ctx->r1 != 0) {
        // 0x15022AF8: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_15022AA0;
    }
    // 0x15022AF8: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
L_15022AFC:
    // 0x15022AFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15022B00: jr          $ra
    // 0x15022B04: nop

    return;
    return;
    // 0x15022B04: nop

;}
RECOMP_FUNC void func_1001001C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001001C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x10010020: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x10010024: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x10010028: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1001002C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x10010030: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x10010034: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x10010038: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x1001003C: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x10010040: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x10010044: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x10010048: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1001004C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10010050: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10010054: lw          $v0, 0x2760($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2760);
    // 0x10010058: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x1001005C: addiu       $s0, $s0, 0x1FE0
    ctx->r16 = ADD32(ctx->r16, 0X1FE0);
    // 0x10010060: blez        $v0, L_100100B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x10010064: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_100100B8;
    }
    // 0x10010064: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x10010068: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
L_1001006C:
    // 0x1001006C: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x10010070: bnel        $s2, $t6, L_100100AC
    if (ctx->r18 != ctx->r14) {
        // 0x10010074: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_100100AC;
    }
    goto skip_0;
    // 0x10010074: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x10010078: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x1001007C: bnel        $s3, $t7, L_100100AC
    if (ctx->r19 != ctx->r15) {
        // 0x10010080: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_100100AC;
    }
    goto skip_1;
    // 0x10010080: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x10010084: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x10010088: bnel        $s4, $t8, L_100100AC
    if (ctx->r20 != ctx->r24) {
        // 0x1001008C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_100100AC;
    }
    goto skip_2;
    // 0x1001008C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x10010090: jal         0x10019AB0
    // 0x10010094: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    alCents2Ratio(rdram, ctx);
        goto after_0;
    // 0x10010094: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
    // 0x10010098: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x1001009C: sw          $s6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r22;
    // 0x100100A0: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x100100A4: lw          $v0, 0x2760($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2760);
    // 0x100100A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_100100AC:
    // 0x100100AC: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x100100B0: bne         $at, $zero, L_1001006C
    if (ctx->r1 != 0) {
        // 0x100100B4: addiu       $s0, $s0, 0x30
        ctx->r16 = ADD32(ctx->r16, 0X30);
            goto L_1001006C;
    }
    // 0x100100B4: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
L_100100B8:
    // 0x100100B8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x100100BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x100100C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x100100C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x100100C8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x100100CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x100100D0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x100100D4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x100100D8: jr          $ra
    // 0x100100DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x100100DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_15005B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005B60: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15005B64: jr          $ra
    // 0x15005B68: nop

    return;
    return;
    // 0x15005B68: nop

;}
RECOMP_FUNC void func_151406AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151406AC: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x151406B0: sw          $a3, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r7;
    // 0x151406B4: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x151406B8: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151406BC: beq         $a3, $zero, L_151406CC
    if (ctx->r7 == 0) {
        // 0x151406C0: sll         $t8, $a2, 2
        ctx->r24 = S32(ctx->r6 << 2);
            goto L_151406CC;
    }
    // 0x151406C0: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x151406C4: b           L_151407C4
    // 0x151406C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_151407C4;
    // 0x151406C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151406CC:
    // 0x151406CC: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x151406D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151406D4: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x151406D8: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x151406DC: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x151406E0: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151406E4: addiu       $t4, $t4, -0x31B0
    ctx->r12 = ADD32(ctx->r12, -0X31B0);
    // 0x151406E8: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x151406EC: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x151406F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x151406F4: sb          $zero, 0x40($sp)
    MEM_B(0X40, ctx->r29) = 0;
    // 0x151406F8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x151406FC: addiu       $t5, $sp, 0x28
    ctx->r13 = ADD32(ctx->r29, 0X28);
    // 0x15140700: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x15140704: beq         $v0, $zero, L_151407B0
    if (ctx->r2 == 0) {
        // 0x15140708: sw          $t5, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r13;
            goto L_151407B0;
    }
    // 0x15140708: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x1514070C: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x15140710: beql        $a1, $zero, L_151407B4
    if (ctx->r5 == 0) {
        // 0x15140714: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_151407B4;
    }
    goto skip_0;
    // 0x15140714: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    skip_0:
L_15140718:
    // 0x15140718: lbu         $t6, 0x18($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X18);
    // 0x1514071C: lw          $t8, 0x20($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X20);
    // 0x15140720: lw          $a2, 0x4($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X4);
    // 0x15140724: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x15140728: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x1514072C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15140730: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x15140734: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x15140738: beq         $a2, $zero, L_151407A8
    if (ctx->r6 == 0) {
        // 0x1514073C: or          $a3, $t0, $zero
        ctx->r7 = ctx->r8 | 0;
            goto L_151407A8;
    }
    // 0x1514073C: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x15140740: lbu         $t3, 0x18($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X18);
L_15140744:
    // 0x15140744: lw          $t5, 0x20($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X20);
    // 0x15140748: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x1514074C: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x15140750: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x15140754: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x15140758: bnel        $at, $zero, L_151407A0
    if (ctx->r1 != 0) {
        // 0x1514075C: lw          $v0, 0x4($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X4);
            goto L_151407A0;
    }
    goto skip_1;
    // 0x1514075C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x15140760: beq         $v0, $a2, L_151407A8
    if (ctx->r2 == ctx->r6) {
        // 0x15140764: nop
    
            goto L_151407A8;
    }
    // 0x15140764: nop

    // 0x15140768: sw          $t0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r8;
    // 0x1514076C: lw          $t0, 0x8($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X8);
    // 0x15140770: beql        $t0, $zero, L_15140784
    if (ctx->r8 == 0) {
        // 0x15140774: lw          $t7, 0x8($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X8);
            goto L_15140784;
    }
    goto skip_2;
    // 0x15140774: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    skip_2:
    // 0x15140778: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x1514077C: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x15140780: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
L_15140784:
    // 0x15140784: beq         $t7, $zero, L_15140790
    if (ctx->r15 == 0) {
        // 0x15140788: sw          $t7, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->r15;
            goto L_15140790;
    }
    // 0x15140788: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    // 0x1514078C: sw          $a1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r5;
L_15140790:
    // 0x15140790: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x15140794: b           L_151407A8
    // 0x15140798: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
        goto L_151407A8;
    // 0x15140798: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    // 0x1514079C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
L_151407A0:
    // 0x151407A0: bnel        $v0, $zero, L_15140744
    if (ctx->r2 != 0) {
        // 0x151407A4: lbu         $t3, 0x18($v0)
        ctx->r11 = MEM_BU(ctx->r2, 0X18);
            goto L_15140744;
    }
    goto skip_3;
    // 0x151407A4: lbu         $t3, 0x18($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X18);
    skip_3:
L_151407A8:
    // 0x151407A8: bne         $a3, $zero, L_15140718
    if (ctx->r7 != 0) {
        // 0x151407AC: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_15140718;
    }
    // 0x151407AC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
L_151407B0:
    // 0x151407B0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
L_151407B4:
    // 0x151407B4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x151407B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151407BC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x151407C0: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
L_151407C4:
    // 0x151407C4: jr          $ra
    // 0x151407C8: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    return;
    // 0x151407C8: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    // 0x151407CC: nop

;}
RECOMP_FUNC void func_151B5BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B5BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B5BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B5BA8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x151B5BAC: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x151B5BB0: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x151B5BB4: bnel        $t6, $at, L_151B5BDC
    if (ctx->r14 != ctx->r1) {
        // 0x151B5BB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151B5BDC;
    }
    goto skip_0;
    // 0x151B5BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x151B5BBC: lbu         $t7, 0x4($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X4);
    // 0x151B5BC0: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x151B5BC4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x151B5BC8: bne         $t7, $at, L_151B5BD8
    if (ctx->r15 != ctx->r1) {
        // 0x151B5BCC: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_151B5BD8;
    }
    // 0x151B5BCC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151B5BD0: jal         0x151B4FE0
    // 0x151B5BD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151B4FE0(rdram, ctx);
        goto after_0;
    // 0x151B5BD4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_151B5BD8:
    // 0x151B5BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151B5BDC:
    // 0x151B5BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B5BE0: jr          $ra
    // 0x151B5BE4: nop

    return;
    return;
    // 0x151B5BE4: nop

;}
RECOMP_FUNC void func_150F7F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F7F8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150F7F90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150F7F94: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x150F7F98: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x150F7F9C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x150F7FA0: jal         0x150ADA68
    // 0x150F7FA4: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150F7FA4: nop

    after_0:
    // 0x150F7FA8: jal         0x150ADA68
    // 0x150F7FAC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150F7FAC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x150F7FB0: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150F7FB4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x150F7FB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150F7FBC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150F7FC0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150F7FC4: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150F7FC8: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x150F7FCC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150F7FD0: mul.s       $f14, $f18, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x150F7FD4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x150F7FD8: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x150F7FDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150F7FE0: lui         $a2, 0x3F03
    ctx->r6 = S32(0X3F03 << 16);
    // 0x150F7FE4: add.s       $f16, $f12, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f12.fl + ctx->f16.fl;
    // 0x150F7FE8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x150F7FEC: ori         $a2, $a2, 0xC35
    ctx->r6 = ctx->r6 | 0XC35;
    // 0x150F7FF0: add.s       $f18, $f14, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x150F7FF4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150F7FF8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x150F7FFC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150F8000: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x150F8004: jal         0x151541B8
    // 0x150F8008: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_151541B8(rdram, ctx);
        goto after_2;
    // 0x150F8008: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_2:
    // 0x150F800C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x150F8010: lbu         $a1, 0x37($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X37);
    // 0x150F8014: jal         0x151D3F14
    // 0x150F8018: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_151D3F14(rdram, ctx);
        goto after_3;
    // 0x150F8018: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x150F801C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150F8020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150F8024: jr          $ra
    // 0x150F8028: nop

    return;
    return;
    // 0x150F8028: nop

;}
RECOMP_FUNC void func_10017F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017F10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10017F14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10017F18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10017F1C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10017F20: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x10017F24: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x10017F28: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x10017F2C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x10017F30: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x10017F34: sb          $t7, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r15;
    // 0x10017F38: lbu         $t8, 0x33($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X33);
    // 0x10017F3C: sb          $t8, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r24;
    // 0x10017F40: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x10017F44: sb          $t9, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r25;
    // 0x10017F48: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x10017F4C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x10017F50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10017F54: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10017F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10017F5C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10017F60: jal         0x1001C224
    // 0x10017F64: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10017F64: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x10017F68: b           L_10017F70
    // 0x10017F6C: nop

        goto L_10017F70;
    // 0x10017F6C: nop

L_10017F70:
    // 0x10017F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10017F74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10017F78: jr          $ra
    // 0x10017F7C: nop

    return;
    return;
    // 0x10017F7C: nop

;}
RECOMP_FUNC void __n_resetPerfChanState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001B620: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x1001B624: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x1001B628: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1001B62C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001B630: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1001B634: sb          $zero, 0xA($t8)
    MEM_B(0XA, ctx->r24) = 0;
    // 0x1001B638: lw          $t0, 0x60($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X60);
    // 0x1001B63C: sll         $t1, $a1, 4
    ctx->r9 = S32(ctx->r5 << 4);
    // 0x1001B640: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x1001B644: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1001B648: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x1001B64C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1001B650: sb          $t9, 0x6($t2)
    MEM_B(0X6, ctx->r10) = ctx->r25;
    // 0x1001B654: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x1001B658: sll         $t5, $a1, 4
    ctx->r13 = S32(ctx->r5 << 4);
    // 0x1001B65C: subu        $t5, $t5, $a1
    ctx->r13 = SUB32(ctx->r13, ctx->r5);
    // 0x1001B660: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1001B664: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x1001B668: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1001B66C: sb          $t3, 0x9($t6)
    MEM_B(0X9, ctx->r14) = ctx->r11;
    // 0x1001B670: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x1001B674: sll         $t0, $a1, 4
    ctx->r8 = S32(ctx->r5 << 4);
    // 0x1001B678: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x1001B67C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x1001B680: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x1001B684: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x1001B688: sb          $t7, 0x7($t1)
    MEM_B(0X7, ctx->r9) = ctx->r15;
    // 0x1001B68C: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x1001B690: sll         $t2, $a1, 4
    ctx->r10 = S32(ctx->r5 << 4);
    // 0x1001B694: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x1001B698: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1001B69C: addu        $t4, $t9, $t2
    ctx->r12 = ADD32(ctx->r25, ctx->r10);
    // 0x1001B6A0: sb          $zero, 0xC($t4)
    MEM_B(0XC, ctx->r12) = 0;
    // 0x1001B6A4: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x1001B6A8: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x1001B6AC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x1001B6B0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1001B6B4: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x1001B6B8: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x1001B6BC: sh          $t5, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r13;
    // 0x1001B6C0: lw          $t0, 0x60($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X60);
    // 0x1001B6C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1001B6C8: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x1001B6CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1001B6D0: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1001B6D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001B6D8: addu        $t1, $t0, $t7
    ctx->r9 = ADD32(ctx->r8, ctx->r15);
    // 0x1001B6DC: swc1        $f4, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f4.u32l;
    // 0x1001B6E0: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x1001B6E4: sll         $t2, $a1, 4
    ctx->r10 = S32(ctx->r5 << 4);
    // 0x1001B6E8: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x1001B6EC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1001B6F0: addu        $t4, $t9, $t2
    ctx->r12 = ADD32(ctx->r25, ctx->r10);
    // 0x1001B6F4: sb          $zero, 0x17($t4)
    MEM_B(0X17, ctx->r12) = 0;
    // 0x1001B6F8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x1001B6FC: sll         $t5, $a1, 4
    ctx->r13 = S32(ctx->r5 << 4);
    // 0x1001B700: subu        $t5, $t5, $a1
    ctx->r13 = SUB32(ctx->r13, ctx->r5);
    // 0x1001B704: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1001B708: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1001B70C: addu        $t8, $t6, $t5
    ctx->r24 = ADD32(ctx->r14, ctx->r13);
    // 0x1001B710: sb          $t3, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r11;
    // 0x1001B714: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x1001B718: sll         $t1, $a1, 4
    ctx->r9 = S32(ctx->r5 << 4);
    // 0x1001B71C: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x1001B720: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1001B724: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x1001B728: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x1001B72C: sb          $t0, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r8;
    // 0x1001B730: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x1001B734: sll         $t4, $a1, 4
    ctx->r12 = S32(ctx->r5 << 4);
    // 0x1001B738: subu        $t4, $t4, $a1
    ctx->r12 = SUB32(ctx->r12, ctx->r5);
    // 0x1001B73C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1001B740: addu        $t6, $t2, $t4
    ctx->r14 = ADD32(ctx->r10, ctx->r12);
    // 0x1001B744: sb          $zero, 0xF($t6)
    MEM_B(0XF, ctx->r14) = 0;
    // 0x1001B748: lw          $t5, 0x60($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X60);
    // 0x1001B74C: sll         $t3, $a1, 4
    ctx->r11 = S32(ctx->r5 << 4);
    // 0x1001B750: subu        $t3, $t3, $a1
    ctx->r11 = SUB32(ctx->r11, ctx->r5);
    // 0x1001B754: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1001B758: addu        $t8, $t5, $t3
    ctx->r24 = ADD32(ctx->r13, ctx->r11);
    // 0x1001B75C: sb          $zero, 0xB($t8)
    MEM_B(0XB, ctx->r24) = 0;
    // 0x1001B760: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x1001B764: sll         $t1, $a1, 4
    ctx->r9 = S32(ctx->r5 << 4);
    // 0x1001B768: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x1001B76C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1001B770: addu        $t0, $t7, $t1
    ctx->r8 = ADD32(ctx->r15, ctx->r9);
    // 0x1001B774: sb          $zero, 0x16($t0)
    MEM_B(0X16, ctx->r8) = 0;
    // 0x1001B778: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x1001B77C: sll         $t2, $a1, 4
    ctx->r10 = S32(ctx->r5 << 4);
    // 0x1001B780: subu        $t2, $t2, $a1
    ctx->r10 = SUB32(ctx->r10, ctx->r5);
    // 0x1001B784: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x1001B788: addu        $t4, $t9, $t2
    ctx->r12 = ADD32(ctx->r25, ctx->r10);
    // 0x1001B78C: sb          $zero, 0x15($t4)
    MEM_B(0X15, ctx->r12) = 0;
    // 0x1001B790: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x1001B794: sll         $t5, $a1, 4
    ctx->r13 = S32(ctx->r5 << 4);
    // 0x1001B798: subu        $t5, $t5, $a1
    ctx->r13 = SUB32(ctx->r13, ctx->r5);
    // 0x1001B79C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1001B7A0: addu        $t3, $t6, $t5
    ctx->r11 = ADD32(ctx->r14, ctx->r13);
    // 0x1001B7A4: sb          $zero, 0x14($t3)
    MEM_B(0X14, ctx->r11) = 0;
    // 0x1001B7A8: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x1001B7AC: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x1001B7B0: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1001B7B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001B7B8: addu        $t1, $t8, $t7
    ctx->r9 = ADD32(ctx->r24, ctx->r15);
    // 0x1001B7BC: sb          $zero, 0x8($t1)
    MEM_B(0X8, ctx->r9) = 0;
    // 0x1001B7C0: jr          $ra
    // 0x1001B7C4: nop

    return;
    return;
    // 0x1001B7C4: nop

    // 0x1001B7C8: jr          $ra
    // 0x1001B7CC: nop

    return;
    return;
    // 0x1001B7CC: nop

;}
RECOMP_FUNC void func_10001444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10001444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10001448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000144C: jal         0x10022DC0
    // 0x10001450: nop

    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x10001450: nop

    after_0:
    // 0x10001454: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x10001458: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1000145C: jal         0x100061F8
    // 0x10001460: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_100061F8(rdram, ctx);
        goto after_1;
    // 0x10001460: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_1:
    // 0x10001464: jal         0x10001420
    // 0x10001468: nop

    func_10001420(rdram, ctx);
        goto after_2;
    // 0x10001468: nop

    after_2:
    // 0x1000146C: jal         0x10005BE0
    // 0x10001470: nop

    func_10005BE0(rdram, ctx);
        goto after_3;
    // 0x10001470: nop

    after_3:
    // 0x10001474: lui         $a0, 0x1003
    ctx->r4 = S32(0X1003 << 16);
    // 0x10001478: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x1000147C: lui         $t6, 0x8040
    ctx->r14 = S32(0X8040 << 16);
    // 0x10001480: jal         0x10022C90
    // 0x10001484: subu        $a1, $t6, $a0
    ctx->r5 = SUB32(ctx->r14, ctx->r4);
    osInvalICache_recomp(rdram, ctx);
        goto after_4;
    // 0x10001484: subu        $a1, $t6, $a0
    ctx->r5 = SUB32(ctx->r14, ctx->r4);
    after_4:
    // 0x10001488: jal         0x10022DE0
    // 0x1000148C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    __osRestoreInt_recomp(rdram, ctx);
        goto after_5;
    // 0x1000148C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_5:
    // 0x10001490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10001494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x10001498: jr          $ra
    // 0x1000149C: nop

    return;
    return;
    // 0x1000149C: nop

;}
RECOMP_FUNC void func_151D57F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D57F8: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x151D57FC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151D5800: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D5804: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151D5808: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x151D580C: lbu         $v0, 0xBF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XBF);
    // 0x151D5810: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151D5814: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151D5818: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x151D581C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x151D5820: lw          $t8, -0x374($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X374);
    // 0x151D5824: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x151D5828: lw          $t9, -0x36C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X36C);
    // 0x151D582C: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x151D5830: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151D5834: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151D5838: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x151D583C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x151D5840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D5844: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x151D5848: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x151D584C: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    // 0x151D5850: jal         0x151D5A18
    // 0x151D5854: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_151D5A18(rdram, ctx);
        goto after_0;
    // 0x151D5854: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_0:
    // 0x151D5858: addiu       $t1, $sp, 0x88
    ctx->r9 = ADD32(ctx->r29, 0X88);
    // 0x151D585C: addiu       $t2, $sp, 0x7C
    ctx->r10 = ADD32(ctx->r29, 0X7C);
    // 0x151D5860: addiu       $t3, $sp, 0x70
    ctx->r11 = ADD32(ctx->r29, 0X70);
    // 0x151D5864: addiu       $t4, $sp, 0x6C
    ctx->r12 = ADD32(ctx->r29, 0X6C);
    // 0x151D5868: addiu       $t5, $sp, 0x68
    ctx->r13 = ADD32(ctx->r29, 0X68);
    // 0x151D586C: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151D5870: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151D5874: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151D5878: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151D587C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151D5880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D5884: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x151D5888: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x151D588C: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    // 0x151D5890: jal         0x151D5174
    // 0x151D5894: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_151D5174(rdram, ctx);
        goto after_1;
    // 0x151D5894: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_1:
    // 0x151D5898: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    // 0x151D589C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151D58A0: addiu       $t9, $sp, 0xAC
    ctx->r25 = ADD32(ctx->r29, 0XAC);
    // 0x151D58A4: sb          $t6, 0x109($t7)
    MEM_B(0X109, ctx->r15) = ctx->r14;
    // 0x151D58A8: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x151D58AC: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x151D58B0: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x151D58B4: bnel        $t8, $zero, L_151D58C4
    if (ctx->r24 != 0) {
        // 0x151D58B8: lw          $t0, 0x68($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X68);
            goto L_151D58C4;
    }
    goto skip_0;
    // 0x151D58B8: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    skip_0:
    // 0x151D58BC: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x151D58C0: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
L_151D58C4:
    // 0x151D58C4: bnel        $t0, $zero, L_151D58D4
    if (ctx->r8 != 0) {
        // 0x151D58C8: lw          $t3, 0x68($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X68);
            goto L_151D58D4;
    }
    goto skip_1;
    // 0x151D58C8: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    skip_1:
    // 0x151D58CC: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x151D58D0: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
L_151D58D4:
    // 0x151D58D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D58D8: lwc1        $f0, -0x4DC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4DC8);
    // 0x151D58DC: lwc1        $f6, 0x0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X0);
    // 0x151D58E0: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x151D58E4: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x151D58E8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151D58EC: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x151D58F0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x151D58F4: swc1        $f10, 0xB8($t4)
    MEM_W(0XB8, ctx->r12) = ctx->f10.u32l;
    // 0x151D58F8: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x151D58FC: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x151D5900: lw          $t7, 0x31C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X31C);
    // 0x151D5904: lwc1        $f18, 0x4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X4);
    // 0x151D5908: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x151D590C: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151D5910: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x151D5914: swc1        $f4, 0xBC($t7)
    MEM_W(0XBC, ctx->r15) = ctx->f4.u32l;
    // 0x151D5918: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x151D591C: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x151D5920: lw          $t0, 0x31C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X31C);
    // 0x151D5924: lwc1        $f10, 0x8($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X8);
    // 0x151D5928: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x151D592C: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151D5930: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x151D5934: swc1        $f16, 0xC0($t0)
    MEM_W(0XC0, ctx->r8) = ctx->f16.u32l;
    // 0x151D5938: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151D593C: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151D5940: lbu         $t1, 0x109($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X109);
    // 0x151D5944: beq         $t1, $zero, L_151D59FC
    if (ctx->r9 == 0) {
        // 0x151D5948: nop
    
            goto L_151D59FC;
    }
    // 0x151D5948: nop

    // 0x151D594C: lwc1        $f6, 0xB8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XB8);
    // 0x151D5950: lwc1        $f18, 0xB0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151D5954: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D5958: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151D595C: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x151D5960: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x151D5964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151D5968: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x151D596C: lw          $t2, 0x31C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X31C);
    // 0x151D5970: lwc1        $f8, 0xBC($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0XBC);
    // 0x151D5974: sub.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x151D5978: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x151D597C: lw          $t3, 0x31C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X31C);
    // 0x151D5980: lwc1        $f6, 0xC0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XC0);
    // 0x151D5984: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151D5988: jal         0x15145128
    // 0x151D598C: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    func_15145128(rdram, ctx);
        goto after_2;
    // 0x151D598C: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x151D5990: beq         $v0, $zero, L_151D59FC
    if (ctx->r2 == 0) {
        // 0x151D5994: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_151D59FC;
    }
    // 0x151D5994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151D5998: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151D599C: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151D59A0: lwc1        $f16, 0x64($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151D59A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D59A8: lwc1        $f4, -0x4DC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4DC4);
    // 0x151D59AC: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151D59B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x151D59B4: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x151D59B8: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x151D59BC: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x151D59C0: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151D59C4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151D59C8: addiu       $t5, $t4, 0xB0
    ctx->r13 = ADD32(ctx->r12, 0XB0);
    // 0x151D59CC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x151D59D0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x151D59D4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x151D59D8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151D59DC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x151D59E0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151D59E4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151D59E8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151D59EC: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x151D59F0: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    // 0x151D59F4: jal         0x15081690
    // 0x151D59F8: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    func_15081690(rdram, ctx);
        goto after_3;
    // 0x151D59F8: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    after_3:
L_151D59FC:
    // 0x151D59FC: jal         0x150636A4
    // 0x151D5A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150636A4(rdram, ctx);
        goto after_4;
    // 0x151D5A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x151D5A04: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151D5A08: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x151D5A0C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x151D5A10: jr          $ra
    // 0x151D5A14: nop

    return;
    return;
    // 0x151D5A14: nop

;}
RECOMP_FUNC void func_1500AD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500AD84: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1500AD88: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1500AD8C: beq         $a1, $at, L_1500AEC4
    if (ctx->r5 == ctx->r1) {
        // 0x1500AD90: lui         $t6, 0x800E
        ctx->r14 = S32(0X800E << 16);
            goto L_1500AEC4;
    }
    // 0x1500AD90: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1500AD94: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x1500AD98: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x1500AD9C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x1500ADA0: addiu       $t8, $t8, 0x5CE0
    ctx->r24 = ADD32(ctx->r24, 0X5CE0);
    // 0x1500ADA4: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x1500ADA8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x1500ADAC: lbu         $a2, 0x0($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X0);
    // 0x1500ADB0: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x1500ADB4: addiu       $t6, $t6, -0x2430
    ctx->r14 = ADD32(ctx->r14, -0X2430);
    // 0x1500ADB8: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x1500ADBC: andi        $t0, $a2, 0x10
    ctx->r8 = ctx->r6 & 0X10;
    // 0x1500ADC0: beq         $t0, $zero, L_1500ADE0
    if (ctx->r8 == 0) {
        // 0x1500ADC4: sb          $t9, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r25;
            goto L_1500ADE0;
    }
    // 0x1500ADC4: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x1500ADC8: addiu       $t3, $t9, -0x1
    ctx->r11 = ADD32(ctx->r25, -0X1);
    // 0x1500ADCC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500ADD0: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x1500ADD4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x1500ADD8: b           L_1500ADEC
    // 0x1500ADDC: sb          $t3, -0x2420($at)
    MEM_B(-0X2420, ctx->r1) = ctx->r11;
        goto L_1500ADEC;
    // 0x1500ADDC: sb          $t3, -0x2420($at)
    MEM_B(-0X2420, ctx->r1) = ctx->r11;
L_1500ADE0:
    // 0x1500ADE0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500ADE4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x1500ADE8: sb          $zero, -0x2420($at)
    MEM_B(-0X2420, ctx->r1) = 0;
L_1500ADEC:
    // 0x1500ADEC: andi        $t4, $a2, 0x80
    ctx->r12 = ctx->r6 & 0X80;
    // 0x1500ADF0: beq         $t4, $zero, L_1500AE0C
    if (ctx->r12 == 0) {
        // 0x1500ADF4: sll         $t7, $a0, 2
        ctx->r15 = S32(ctx->r4 << 2);
            goto L_1500AE0C;
    }
    // 0x1500ADF4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x1500ADF8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500ADFC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x1500AE00: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x1500AE04: b           L_1500AE1C
    // 0x1500AE08: sb          $t5, -0x2410($at)
    MEM_B(-0X2410, ctx->r1) = ctx->r13;
        goto L_1500AE1C;
    // 0x1500AE08: sb          $t5, -0x2410($at)
    MEM_B(-0X2410, ctx->r1) = ctx->r13;
L_1500AE0C:
    // 0x1500AE0C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500AE10: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x1500AE14: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1500AE18: sb          $t6, -0x2410($at)
    MEM_B(-0X2410, ctx->r1) = ctx->r14;
L_1500AE1C:
    // 0x1500AE1C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1500AE20: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x1500AE24: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x1500AE28: addiu       $t8, $t8, -0x1BC8
    ctx->r24 = ADD32(ctx->r24, -0X1BC8);
    // 0x1500AE2C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x1500AE30: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500AE34: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x1500AE38: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x1500AE3C: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x1500AE40: sb          $a1, -0x2440($at)
    MEM_B(-0X2440, ctx->r1) = ctx->r5;
    // 0x1500AE44: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500AE48: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x1500AE4C: andi        $t1, $a3, 0xFF7F
    ctx->r9 = ctx->r7 & 0XFF7F;
    // 0x1500AE50: andi        $t2, $a3, 0x80
    ctx->r10 = ctx->r7 & 0X80;
    // 0x1500AE54: beq         $t2, $zero, L_1500AE78
    if (ctx->r10 == 0) {
        // 0x1500AE58: sb          $t1, -0x2380($at)
        MEM_B(-0X2380, ctx->r1) = ctx->r9;
            goto L_1500AE78;
    }
    // 0x1500AE58: sb          $t1, -0x2380($at)
    MEM_B(-0X2380, ctx->r1) = ctx->r9;
    // 0x1500AE5C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500AE60: addiu       $v0, $v0, -0x2400
    ctx->r2 = ADD32(ctx->r2, -0X2400);
    // 0x1500AE64: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x1500AE68: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x1500AE6C: sllv        $t5, $t4, $a0
    ctx->r13 = S32(ctx->r12 << (ctx->r4 & 31));
    // 0x1500AE70: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x1500AE74: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_1500AE78:
    // 0x1500AE78: andi        $t7, $a2, 0x1
    ctx->r15 = ctx->r6 & 0X1;
    // 0x1500AE7C: beq         $t7, $zero, L_1500AEA0
    if (ctx->r15 == 0) {
        // 0x1500AE80: andi        $t2, $a2, 0x8
        ctx->r10 = ctx->r6 & 0X8;
            goto L_1500AEA0;
    }
    // 0x1500AE80: andi        $t2, $a2, 0x8
    ctx->r10 = ctx->r6 & 0X8;
    // 0x1500AE84: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500AE88: addiu       $v0, $v0, -0x23FC
    ctx->r2 = ADD32(ctx->r2, -0X23FC);
    // 0x1500AE8C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x1500AE90: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1500AE94: sllv        $t0, $t9, $a0
    ctx->r8 = S32(ctx->r25 << (ctx->r4 & 31));
    // 0x1500AE98: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x1500AE9C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_1500AEA0:
    // 0x1500AEA0: beq         $t2, $zero, L_1500AED0
    if (ctx->r10 == 0) {
        // 0x1500AEA4: lui         $v0, 0x800E
        ctx->r2 = S32(0X800E << 16);
            goto L_1500AED0;
    }
    // 0x1500AEA4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500AEA8: addiu       $v0, $v0, -0x23F8
    ctx->r2 = ADD32(ctx->r2, -0X23F8);
    // 0x1500AEAC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x1500AEB0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x1500AEB4: sllv        $t5, $t3, $a0
    ctx->r13 = S32(ctx->r11 << (ctx->r4 & 31));
    // 0x1500AEB8: or          $t6, $t4, $t5
    ctx->r14 = ctx->r12 | ctx->r13;
    // 0x1500AEBC: b           L_1500AED0
    // 0x1500AEC0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_1500AED0;
    // 0x1500AEC0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_1500AEC4:
    // 0x1500AEC4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500AEC8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x1500AECC: sb          $zero, -0x2430($at)
    MEM_B(-0X2430, ctx->r1) = 0;
L_1500AED0:
    // 0x1500AED0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1500AED4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x1500AED8: lbu         $a1, 0x5CC4($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X5CC4);
    // 0x1500AEDC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x1500AEE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1500AEE4: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1500AEE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1500AEEC: addiu       $t7, $t7, -0x23E0
    ctx->r15 = ADD32(ctx->r15, -0X23E0);
    // 0x1500AEF0: sh          $zero, -0x1B88($at)
    MEM_H(-0X1B88, ctx->r1) = 0;
    // 0x1500AEF4: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x1500AEF8: sb          $a1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r5;
    // 0x1500AEFC: sb          $a1, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r5;
    // 0x1500AF00: jr          $ra
    // 0x1500AF04: nop

    return;
    return;
    // 0x1500AF04: nop

;}
RECOMP_FUNC void func_15195984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15195984: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15195988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519598C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15195990: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15195994: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15195998: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1519599C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151959A0: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151959A4: addiu       $a2, $a2, 0x8EC
    ctx->r6 = ADD32(ctx->r6, 0X8EC);
    // 0x151959A8: addiu       $a1, $a1, 0x8E8
    ctx->r5 = ADD32(ctx->r5, 0X8E8);
    // 0x151959AC: jal         0x151957B0
    // 0x151959B0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_151957B0(rdram, ctx);
        goto after_0;
    // 0x151959B0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x151959B4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x151959B8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x151959BC: beq         $v0, $zero, L_15195A70
    if (ctx->r2 == 0) {
        // 0x151959C0: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_15195A70;
    }
    // 0x151959C0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x151959C4: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x151959C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151959CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151959D0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_151959D4:
    // 0x151959D4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x151959D8: slti        $at, $a1, 0x5
    ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x151959DC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x151959E0: bne         $at, $zero, L_151959D4
    if (ctx->r1 != 0) {
        // 0x151959E4: sh          $a0, 0x1A($v1)
        MEM_H(0X1A, ctx->r3) = ctx->r4;
            goto L_151959D4;
    }
    // 0x151959E4: sh          $a0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r4;
    // 0x151959E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151959EC: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x151959F0: sh          $a0, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r4;
    // 0x151959F4: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x151959F8: sh          $a0, 0x28($v1)
    MEM_H(0X28, ctx->r3) = ctx->r4;
    // 0x151959FC: sh          $a0, 0x2A($v1)
    MEM_H(0X2A, ctx->r3) = ctx->r4;
    // 0x15195A00: sh          $a0, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = ctx->r4;
    // 0x15195A04: sh          $a0, 0x26($v1)
    MEM_H(0X26, ctx->r3) = ctx->r4;
    // 0x15195A08: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x15195A0C: sra         $a0, $t0, 12
    ctx->r4 = S32(SIGNED(ctx->r8) >> 12);
    // 0x15195A10: andi        $t8, $a0, 0xFFF
    ctx->r24 = ctx->r4 & 0XFFF;
    // 0x15195A14: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x15195A18: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x15195A1C: andi        $a2, $t0, 0xFFF
    ctx->r6 = ctx->r8 & 0XFFF;
    // 0x15195A20: addiu       $a0, $t8, 0x2
    ctx->r4 = ADD32(ctx->r24, 0X2);
    // 0x15195A24: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x15195A28: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15195A2C: beq         $t9, $zero, L_15195A3C
    if (ctx->r25 == 0) {
        // 0x15195A30: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_15195A3C;
    }
    // 0x15195A30: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x15195A34: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x15195A38: sll         $a1, $a2, 1
    ctx->r5 = S32(ctx->r6 << 1);
L_15195A3C:
    // 0x15195A3C: sra         $t2, $t1, 12
    ctx->r10 = S32(SIGNED(ctx->r9) >> 12);
    // 0x15195A40: andi        $t5, $t2, 0xFFF
    ctx->r13 = ctx->r10 & 0XFFF;
    // 0x15195A44: andi        $t7, $t1, 0xFFF
    ctx->r15 = ctx->r9 & 0XFFF;
    // 0x15195A48: sh          $t5, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r13;
    // 0x15195A4C: sh          $t7, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r15;
    // 0x15195A50: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x15195A54: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x15195A58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15195A5C: sh          $v1, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r3;
    // 0x15195A60: sh          $a1, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r5;
    // 0x15195A64: sh          $t6, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r14;
    // 0x15195A68: sh          $t8, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r24;
    // 0x15195A6C: sb          $t9, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r25;
L_15195A70:
    // 0x15195A70: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x15195A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15195A78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15195A7C: jr          $ra
    // 0x15195A80: nop

    return;
    return;
    // 0x15195A80: nop

;}
RECOMP_FUNC void func_15007750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15007750: bltz        $a0, L_15007770
    if (SIGNED(ctx->r4) < 0) {
        // 0x15007754: slti        $at, $a0, 0x3
        ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
            goto L_15007770;
    }
    // 0x15007754: slti        $at, $a0, 0x3
    ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x15007758: beq         $at, $zero, L_15007770
    if (ctx->r1 == 0) {
        // 0x1500775C: addiu       $t6, $zero, 0x3
        ctx->r14 = ADD32(0, 0X3);
            goto L_15007770;
    }
    // 0x1500775C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15007760: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15007764: sb          $t6, 0x2BB4($at)
    MEM_B(0X2BB4, ctx->r1) = ctx->r14;
    // 0x15007768: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1500776C: sb          $a0, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = ctx->r4;
L_15007770:
    // 0x15007770: jr          $ra
    // 0x15007774: nop

    return;
    return;
    // 0x15007774: nop

;}
RECOMP_FUNC void func_15005A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005A60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15005A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15005A68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15005A6C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x15005A70: lw          $t6, 0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XDF0);
    // 0x15005A74: lui         $t9, 0x8008
    ctx->r25 = S32(0X8008 << 16);
    // 0x15005A78: lbu         $v0, 0xE($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XE);
    // 0x15005A7C: beq         $v0, $zero, L_15005A94
    if (ctx->r2 == 0) {
        // 0x15005A80: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15005A94;
    }
    // 0x15005A80: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15005A84: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15005A88: lw          $t9, 0x2B40($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2B40);
    // 0x15005A8C: jalr        $t9
    // 0x15005A90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15005A90: nop

    after_0:
L_15005A94:
    // 0x15005A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15005A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15005A9C: jr          $ra
    // 0x15005AA0: nop

    return;
    return;
    // 0x15005AA0: nop

;}
RECOMP_FUNC void func_1516D0CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516D0CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1516D0D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1516D0D4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x1516D0D8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x1516D0DC: lhu         $t6, 0x562($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X562);
    // 0x1516D0E0: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1516D0E4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x1516D0E8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1516D0EC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1516D0F0: bgez        $t6, L_1516D104
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1516D0F4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1516D104;
    }
    // 0x1516D0F4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1516D0F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1516D0FC: nop

    // 0x1516D100: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1516D104:
    // 0x1516D104: lhu         $t7, 0x582($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X582);
    // 0x1516D108: div.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1516D10C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1516D110: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x1516D114: bgez        $t7, L_1516D128
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1516D118: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1516D128;
    }
    // 0x1516D118: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1516D11C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1516D120: nop

    // 0x1516D124: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_1516D128:
    // 0x1516D128: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1516D12C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1516D130: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1516D134: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x1516D138: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516D13C: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1516D140: nop

    // 0x1516D144: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x1516D148: lwc1        $f6, 0x6DE4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6DE4);
    // 0x1516D14C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x1516D150: lwc1        $f8, 0x58($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X58);
    // 0x1516D154: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1516D158: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1516D15C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1516D160: jal         0x15047C00
    // 0x1516D164: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x1516D164: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    after_0:
    // 0x1516D168: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1516D16C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1516D170: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1516D174: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1516D178: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516D17C: lwc1        $f6, 0x6DE8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6DE8);
    // 0x1516D180: mul.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1516D184: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x1516D188: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1516D18C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x1516D190: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1516D194: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1516D198: lwc1        $f14, 0x0($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X0);
    // 0x1516D19C: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1516D1A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1516D1A4: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x1516D1A8: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1516D1AC: nop

    // 0x1516D1B0: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1516D1B4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1516D1B8: sub.s       $f10, $f14, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f18.fl;
    // 0x1516D1BC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x1516D1C0: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1516D1C4: sub.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x1516D1C8: sub.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x1516D1CC: add.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x1516D1D0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x1516D1D4: beq         $a0, $zero, L_1516D2C8
    if (ctx->r4 == 0) {
        // 0x1516D1D8: swc1        $f6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
            goto L_1516D2C8;
    }
    // 0x1516D1D8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x1516D1DC: lw          $v0, -0x19D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19D8);
    // 0x1516D1E0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1516D1E4: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1516D1E8: lwc1        $f0, 0x24($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X24);
    // 0x1516D1EC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x1516D1F0: nop

    // 0x1516D1F4: bc1fl       L_1516D218
    if (!c1cs) {
        // 0x1516D1F8: lwc1        $f0, 0x28($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
            goto L_1516D218;
    }
    goto skip_0;
    // 0x1516D1F8: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    skip_0:
    // 0x1516D1FC: add.s       $f10, $f0, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x1516D200: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1516D204: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x1516D208: lw          $v0, -0x19D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19D8);
    // 0x1516D20C: b           L_1516D238
    // 0x1516D210: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
        goto L_1516D238;
    // 0x1516D210: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1516D214: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
L_1516D218:
    // 0x1516D218: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1516D21C: nop

    // 0x1516D220: bc1fl       L_1516D23C
    if (!c1cs) {
        // 0x1516D224: lwc1        $f0, 0x2C($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
            goto L_1516D23C;
    }
    goto skip_1;
    // 0x1516D224: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
    skip_1:
    // 0x1516D228: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x1516D22C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1516D230: lw          $v0, -0x19D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19D8);
    // 0x1516D234: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
L_1516D238:
    // 0x1516D238: lwc1        $f0, 0x2C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X2C);
L_1516D23C:
    // 0x1516D23C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1516D240: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1516D244: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x1516D248: nop

    // 0x1516D24C: bc1fl       L_1516D26C
    if (!c1cs) {
        // 0x1516D250: lwc1        $f0, 0x30($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
            goto L_1516D26C;
    }
    goto skip_2;
    // 0x1516D250: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    skip_2:
    // 0x1516D254: sub.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1516D258: sub.s       $f10, $f16, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x1516D25C: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x1516D260: b           L_1516D28C
    // 0x1516D264: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
        goto L_1516D28C;
    // 0x1516D264: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1516D268: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
L_1516D26C:
    // 0x1516D26C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x1516D270: nop

    // 0x1516D274: bc1fl       L_1516D290
    if (!c1cs) {
        // 0x1516D278: trunc.w.s   $f10, $f16
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
            goto L_1516D290;
    }
    goto skip_3;
    // 0x1516D278: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
    skip_3:
    // 0x1516D27C: sub.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x1516D280: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1516D284: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x1516D288: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
L_1516D28C:
    // 0x1516D28C: trunc.w.s   $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.u32l = TRUNC_W_S(ctx->f16.fl);
L_1516D290:
    // 0x1516D290: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1516D294: nop

    // 0x1516D298: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1516D29C: nop

    // 0x1516D2A0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1516D2A4: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x1516D2A8: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x1516D2AC: trunc.w.s   $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1516D2B0: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1516D2B4: nop

    // 0x1516D2B8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x1516D2BC: nop

    // 0x1516D2C0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1516D2C4: swc1        $f6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f6.u32l;
L_1516D2C8:
    // 0x1516D2C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1516D2CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1516D2D0: jr          $ra
    // 0x1516D2D4: nop

    return;
    return;
    // 0x1516D2D4: nop

    // 0x1516D2D8: jr          $ra
    // 0x1516D2DC: nop

    return;
    return;
    // 0x1516D2DC: nop

;}
RECOMP_FUNC void func_150BEAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BEAA8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150BEAAC: beq         $a0, $zero, L_150BEABC
    if (ctx->r4 == 0) {
        // 0x150BEAB0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_150BEABC;
    }
    // 0x150BEAB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150BEAB4: bne         $a0, $at, L_150BEAC4
    if (ctx->r4 != ctx->r1) {
        // 0x150BEAB8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_150BEAC4;
    }
    // 0x150BEAB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150BEABC:
    // 0x150BEABC: jr          $ra
    // 0x150BEAC0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    return;
    return;
    // 0x150BEAC0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_150BEAC4:
    // 0x150BEAC4: jr          $ra
    // 0x150BEAC8: nop

    return;
    return;
    // 0x150BEAC8: nop

;}
RECOMP_FUNC void bzero_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100226F0: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x100226F4: bne         $at, $zero, L_1002276C
    if (ctx->r1 != 0) {
        // 0x100226F8: negu        $v1, $a0
        ctx->r3 = SUB32(0, ctx->r4);
            goto L_1002276C;
    }
    // 0x100226F8: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x100226FC: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x10022700: beq         $v1, $zero, L_10022710
    if (ctx->r3 == 0) {
        // 0x10022704: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_10022710;
    }
    // 0x10022704: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x10022708: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x1002270C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_10022710:
    // 0x10022710: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x10022714: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x10022718: beq         $a3, $zero, L_1002274C
    if (ctx->r7 == 0) {
        // 0x1002271C: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_1002274C;
    }
    // 0x1002271C: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x10022720: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_10022724:
    // 0x10022724: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x10022728: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x1002272C: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x10022730: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x10022734: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x10022738: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x1002273C: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x10022740: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x10022744: bne         $a0, $a3, L_10022724
    if (ctx->r4 != ctx->r7) {
        // 0x10022748: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_10022724;
    }
    // 0x10022748: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_1002274C:
    // 0x1002274C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x10022750: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x10022754: beq         $a3, $zero, L_1002276C
    if (ctx->r7 == 0) {
        // 0x10022758: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_1002276C;
    }
    // 0x10022758: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x1002275C: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_10022760:
    // 0x10022760: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x10022764: bne         $a0, $a3, L_10022760
    if (ctx->r4 != ctx->r7) {
        // 0x10022768: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_10022760;
    }
    // 0x10022768: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_1002276C:
    // 0x1002276C: blez        $a1, L_10022784
    if (SIGNED(ctx->r5) <= 0) {
        // 0x10022770: nop
    
            goto L_10022784;
    }
    // 0x10022770: nop

    // 0x10022774: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_10022778:
    // 0x10022778: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1002277C: bne         $a0, $a1, L_10022778
    if (ctx->r4 != ctx->r5) {
        // 0x10022780: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_10022778;
    }
    // 0x10022780: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_10022784:
    // 0x10022784: jr          $ra
    // 0x10022788: nop

    return;
    return;
    // 0x10022788: nop

;}
RECOMP_FUNC void func_1514DE2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DE2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1514DE30: jr          $ra
    // 0x1514DE34: nop

    return;
    return;
    // 0x1514DE34: nop

;}

#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_151F2890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2890: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x151F2894: sb          $zero, 0xF($sp)
    MEM_B(0XF, ctx->r29) = 0;
    // 0x151F2898: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
L_151F289C:
    // 0x151F289C: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x151F28A0: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_151F28A4:
    // 0x151F28A4: lbu         $t7, 0xF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XF);
    // 0x151F28A8: andi        $t8, $t7, 0x80
    ctx->r24 = ctx->r15 & 0X80;
    // 0x151F28AC: beq         $t8, $zero, L_151F28C0
    if (ctx->r24 == 0) {
        // 0x151F28B0: nop
    
            goto L_151F28C0;
    }
    // 0x151F28B0: nop

    // 0x151F28B4: addiu       $t9, $zero, 0x85
    ctx->r25 = ADD32(0, 0X85);
    // 0x151F28B8: b           L_151F28C4
    // 0x151F28BC: sb          $t9, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r25;
        goto L_151F28C4;
    // 0x151F28BC: sb          $t9, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r25;
L_151F28C0:
    // 0x151F28C0: sb          $zero, 0xE($sp)
    MEM_B(0XE, ctx->r29) = 0;
L_151F28C4:
    // 0x151F28C4: lbu         $t0, 0xF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XF);
    // 0x151F28C8: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x151F28CC: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x151F28D0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x151F28D4: bne         $t2, $at, L_151F28E8
    if (ctx->r10 != ctx->r1) {
        // 0x151F28D8: sb          $t1, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r9;
            goto L_151F28E8;
    }
    // 0x151F28D8: sb          $t1, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r9;
    // 0x151F28DC: andi        $t3, $t1, 0xFF
    ctx->r11 = ctx->r9 & 0XFF;
    // 0x151F28E0: b           L_151F291C
    // 0x151F28E4: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
        goto L_151F291C;
    // 0x151F28E4: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
L_151F28E8:
    // 0x151F28E8: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x151F28EC: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x151F28F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151F28F4: sllv        $t7, $t6, $t5
    ctx->r15 = S32(ctx->r14 << (ctx->r13 & 31));
    // 0x151F28F8: and         $t8, $t4, $t7
    ctx->r24 = ctx->r12 & ctx->r15;
    // 0x151F28FC: beq         $t8, $zero, L_151F290C
    if (ctx->r24 == 0) {
        // 0x151F2900: nop
    
            goto L_151F290C;
    }
    // 0x151F2900: nop

    // 0x151F2904: b           L_151F2910
    // 0x151F2908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_151F2910;
    // 0x151F2908: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_151F290C:
    // 0x151F290C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_151F2910:
    // 0x151F2910: lbu         $t9, 0xF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XF);
    // 0x151F2914: or          $t0, $t9, $a1
    ctx->r8 = ctx->r25 | ctx->r5;
    // 0x151F2918: sb          $t0, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r8;
L_151F291C:
    // 0x151F291C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x151F2920: lbu         $t2, 0xF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF);
    // 0x151F2924: lbu         $t1, 0xE($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XE);
    // 0x151F2928: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x151F292C: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x151F2930: xor         $t3, $t2, $t1
    ctx->r11 = ctx->r10 ^ ctx->r9;
    // 0x151F2934: bgez        $t5, L_151F28A4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x151F2938: sb          $t3, 0xF($sp)
        MEM_B(0XF, ctx->r29) = ctx->r11;
            goto L_151F28A4;
    }
    // 0x151F2938: sb          $t3, 0xF($sp)
    MEM_B(0XF, ctx->r29) = ctx->r11;
    // 0x151F293C: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x151F2940: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x151F2944: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x151F2948: slti        $at, $t7, 0x21
    ctx->r1 = SIGNED(ctx->r15) < 0X21 ? 1 : 0;
    // 0x151F294C: bne         $at, $zero, L_151F289C
    if (ctx->r1 != 0) {
        // 0x151F2950: sw          $t7, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r15;
            goto L_151F289C;
    }
    // 0x151F2950: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    // 0x151F2954: lbu         $v0, 0xF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF);
    // 0x151F2958: jr          $ra
    // 0x151F295C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x151F295C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_15087FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15087FEC: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x15087FF0: lw          $v0, 0x72A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X72A0);
    // 0x15087FF4: beq         $v0, $zero, L_15088024
    if (ctx->r2 == 0) {
        // 0x15087FF8: nop
    
            goto L_15088024;
    }
    // 0x15087FF8: nop

    // 0x15087FFC: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x15088000: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x15088004: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15088008: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1508800C: sll         $t6, $a0, 5
    ctx->r14 = S32(ctx->r4 << 5);
    // 0x15088010: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x15088014: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15088018: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x1508801C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15088020: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
L_15088024:
    // 0x15088024: jr          $ra
    // 0x15088028: nop

    return;
    return;
    // 0x15088028: nop

;}
RECOMP_FUNC void func_151C9B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C9B64: lw          $v0, 0x188($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X188);
    // 0x151C9B68: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151C9B6C: lbu         $t6, 0x6F($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X6F);
    // 0x151C9B70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151C9B74: bnel        $t6, $zero, L_151C9B88
    if (ctx->r14 != 0) {
        // 0x151C9B78: lw          $t8, 0x58($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X58);
            goto L_151C9B88;
    }
    goto skip_0;
    // 0x151C9B78: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
    skip_0:
    // 0x151C9B7C: b           L_151C9B98
    // 0x151C9B80: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
        goto L_151C9B98;
    // 0x151C9B80: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x151C9B84: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
L_151C9B88:
    // 0x151C9B88: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x151C9B8C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x151C9B90: sw          $t9, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r25;
    // 0x151C9B94: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_151C9B98:
    // 0x151C9B98: jr          $ra
    // 0x151C9B9C: nop

    return;
    return;
    // 0x151C9B9C: nop

;}
RECOMP_FUNC void func_1507EB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507EB2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507EB30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507EB34: jal         0x1507EB4C
    // 0x1507EB38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1507EB4C(rdram, ctx);
        goto after_0;
    // 0x1507EB38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1507EB3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1507EB40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507EB44: jr          $ra
    // 0x1507EB48: nop

    return;
    return;
    // 0x1507EB48: nop

;}
RECOMP_FUNC void func_1506AC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506AC8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506AC90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506AC94: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1506AC98: bltz        $a1, L_1506AD14
    if (SIGNED(ctx->r5) < 0) {
        // 0x1506AC9C: slti        $at, $a1, 0xF
        ctx->r1 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
            goto L_1506AD14;
    }
    // 0x1506AC9C: slti        $at, $a1, 0xF
    ctx->r1 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x1506ACA0: beql        $at, $zero, L_1506AD18
    if (ctx->r1 == 0) {
        // 0x1506ACA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506AD18;
    }
    goto skip_0;
    // 0x1506ACA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1506ACA8: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x1506ACAC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506ACB0: addiu       $v0, $v0, 0x1560
    ctx->r2 = ADD32(ctx->r2, 0X1560);
    // 0x1506ACB4: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1506ACB8: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x1506ACBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506ACC0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506ACC4: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x1506ACC8: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1506ACCC: addiu       $v1, $v1, 0x1570
    ctx->r3 = ADD32(ctx->r3, 0X1570);
    // 0x1506ACD0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x1506ACD4: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x1506ACD8: lwc1        $f10, -0x3DAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3DAC);
    // 0x1506ACDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506ACE0: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x1506ACE4: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1506ACE8: lwc1        $f16, -0x3DA8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3DA8);
    // 0x1506ACEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1506ACF0: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x1506ACF4: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x1506ACF8: lwc1        $f18, -0x3DA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3DA4);
    // 0x1506ACFC: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x1506AD00: lw          $a2, 0x6110($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6110);
    // 0x1506AD04: beql        $a2, $zero, L_1506AD18
    if (ctx->r6 == 0) {
        // 0x1506AD08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1506AD18;
    }
    goto skip_1;
    // 0x1506AD08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1506AD0C: jalr        $a2
    // 0x1506AD10: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x1506AD10: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
L_1506AD14:
    // 0x1506AD14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1506AD18:
    // 0x1506AD18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506AD1C: jr          $ra
    // 0x1506AD20: nop

    return;
    return;
    // 0x1506AD20: nop

;}
RECOMP_FUNC void func_150C5568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5568: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150C556C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C5570: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x150C5574: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x150C5578: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150C557C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150C5580: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150C5584: beql        $t7, $zero, L_150C5698
    if (ctx->r15 == 0) {
        // 0x150C5588: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150C5698;
    }
    goto skip_0;
    // 0x150C5588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150C558C: lb          $v0, 0x30($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X30);
    // 0x150C5590: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x150C5594: lwc1        $f6, 0x24($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X24);
    // 0x150C5598: lwc1        $f8, 0x1C($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x150C559C: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x150C55A0: lwc1        $f16, 0x20($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X20);
    // 0x150C55A4: lwc1        $f18, 0x2C($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x150C55A8: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C55AC: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150C55B0: beq         $v0, $at, L_150C5600
    if (ctx->r2 == ctx->r1) {
        // 0x150C55B4: sub.s       $f12, $f16, $f18
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
            goto L_150C5600;
    }
    // 0x150C55B4: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150C55B8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x150C55BC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150C55C0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x150C55C4: lw          $t9, -0x78A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X78A0);
    // 0x150C55C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x150C55CC: sb          $zero, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = 0;
    // 0x150C55D0: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x150C55D4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150C55D8: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x150C55DC: jalr        $t9
    // 0x150C55E0: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x150C55E0: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x150C55E4: lbu         $v1, 0x3B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3B);
    // 0x150C55E8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x150C55EC: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150C55F0: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x150C55F4: bne         $v0, $zero, L_150C5600
    if (ctx->r2 != 0) {
        // 0x150C55F8: lwc1        $f12, 0x34($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
            goto L_150C5600;
    }
    // 0x150C55F8: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150C55FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_150C5600:
    // 0x150C5600: bne         $v1, $zero, L_150C5684
    if (ctx->r3 != 0) {
        // 0x150C5604: nop
    
            goto L_150C5684;
    }
    // 0x150C5604: nop

    // 0x150C5608: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x150C560C: lwc1        $f6, 0x24($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X24);
    // 0x150C5610: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150C5614: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C5618: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x150C561C: lwc1        $f16, 0x28($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X28);
    // 0x150C5620: lwc1        $f10, 0x1C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x150C5624: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150C5628: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x150C562C: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x150C5630: lwc1        $f6, 0x2C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X2C);
    // 0x150C5634: lwc1        $f4, 0x20($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X20);
    // 0x150C5638: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x150C563C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150C5640: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150C5644: bc1f        L_150C566C
    if (!c1cs) {
        // 0x150C5648: swc1        $f8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
            goto L_150C566C;
    }
    // 0x150C5648: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x150C564C: c.eq.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl == ctx->f2.fl;
    // 0x150C5650: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150C5654: bc1fl       L_150C5670
    if (!c1cs) {
        // 0x150C5658: sb          $v1, 0x3B($sp)
        MEM_B(0X3B, ctx->r29) = ctx->r3;
            goto L_150C5670;
    }
    goto skip_1;
    // 0x150C5658: sb          $v1, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r3;
    skip_1:
    // 0x150C565C: c.eq.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl == ctx->f12.fl;
    // 0x150C5660: nop

    // 0x150C5664: bc1t        L_150C5684
    if (c1cs) {
        // 0x150C5668: nop
    
            goto L_150C5684;
    }
    // 0x150C5668: nop

L_150C566C:
    // 0x150C566C: sb          $v1, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r3;
L_150C5670:
    // 0x150C5670: jal         0x15143E64
    // 0x150C5674: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    func_15143E64(rdram, ctx);
        goto after_1;
    // 0x150C5674: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    after_1:
    // 0x150C5678: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x150C567C: lbu         $v1, 0x3B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3B);
    // 0x150C5680: swc1        $f0, 0xC0($a1)
    MEM_W(0XC0, ctx->r5) = ctx->f0.u32l;
L_150C5684:
    // 0x150C5684: beql        $v1, $zero, L_150C5698
    if (ctx->r3 == 0) {
        // 0x150C5688: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150C5698;
    }
    goto skip_2;
    // 0x150C5688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x150C568C: jal         0x1516972C
    // 0x150C5690: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x150C5690: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x150C5694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C5698:
    // 0x150C5698: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150C569C: jr          $ra
    // 0x150C56A0: nop

    return;
    return;
    // 0x150C56A0: nop

;}
RECOMP_FUNC void func_150E42F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E42F8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150E42FC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150E4300: addiu       $v0, $v0, -0x6610
    ctx->r2 = ADD32(ctx->r2, -0X6610);
    // 0x150E4304: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150E4308: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x150E430C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x150E4310: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x150E4314: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x150E4318: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x150E431C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x150E4320: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x150E4324: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x150E4328: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150E432C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x150E4330: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x150E4334: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x150E4338: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x150E433C: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x150E4340: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x150E4344: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x150E4348: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x150E434C: blez        $t8, L_150E44E0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x150E4350: sw          $t7, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->r15;
            goto L_150E44E0;
    }
    // 0x150E4350: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x150E4354: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E4358: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x150E435C: lui         $s6, 0x800E
    ctx->r22 = S32(0X800E << 16);
    // 0x150E4360: addiu       $s6, $s6, -0x41C4
    ctx->r22 = ADD32(ctx->r22, -0X41C4);
    // 0x150E4364: addiu       $fp, $fp, -0x41B4
    ctx->r30 = ADD32(ctx->r30, -0X41B4);
    // 0x150E4368: lwc1        $f20, 0x1060($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X1060);
    // 0x150E436C: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x150E4370: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x150E4374: addiu       $s4, $zero, 0x1F4
    ctx->r20 = ADD32(0, 0X1F4);
L_150E4378:
    // 0x150E4378: jal         0x150ADA20
    // 0x150E437C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150E437C: nop

    after_0:
    // 0x150E4380: div         $zero, $v0, $s4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r20)));
    // 0x150E4384: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x150E4388: mfhi        $t9
    ctx->r25 = hi;
    // 0x150E438C: bne         $s4, $zero, L_150E4398
    if (ctx->r20 != 0) {
        // 0x150E4390: nop
    
            goto L_150E4398;
    }
    // 0x150E4390: nop

    // 0x150E4394: break       7
    do_break(353256340);
L_150E4398:
    // 0x150E4398: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150E439C: bne         $s4, $at, L_150E43B0
    if (ctx->r20 != ctx->r1) {
        // 0x150E43A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150E43B0;
    }
    // 0x150E43A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E43A4: bne         $v0, $at, L_150E43B0
    if (ctx->r2 != ctx->r1) {
        // 0x150E43A8: nop
    
            goto L_150E43B0;
    }
    // 0x150E43A8: nop

    // 0x150E43AC: break       6
    do_break(353256364);
L_150E43B0:
    // 0x150E43B0: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x150E43B4: jal         0x150ADA20
    // 0x150E43B8: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150E43B8: nop

    after_1:
    // 0x150E43BC: div         $zero, $v0, $s4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r20)));
    // 0x150E43C0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x150E43C4: mfhi        $t1
    ctx->r9 = hi;
    // 0x150E43C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150E43CC: bne         $s4, $zero, L_150E43D8
    if (ctx->r20 != 0) {
        // 0x150E43D0: nop
    
            goto L_150E43D8;
    }
    // 0x150E43D0: nop

    // 0x150E43D4: break       7
    do_break(353256404);
L_150E43D8:
    // 0x150E43D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150E43DC: bne         $s4, $at, L_150E43F0
    if (ctx->r20 != ctx->r1) {
        // 0x150E43E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150E43F0;
    }
    // 0x150E43E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E43E4: bne         $v0, $at, L_150E43F0
    if (ctx->r2 != ctx->r1) {
        // 0x150E43E8: nop
    
            goto L_150E43F0;
    }
    // 0x150E43E8: nop

    // 0x150E43EC: break       6
    do_break(353256428);
L_150E43F0:
    // 0x150E43F0: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    // 0x150E43F4: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x150E43F8: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    // 0x150E43FC: jal         0x1510F8D8
    // 0x150E4400: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_1510F8D8(rdram, ctx);
        goto after_2;
    // 0x150E4400: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_2:
    // 0x150E4404: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x150E4408: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x150E440C: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x150E4410: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150E4414: c.eq.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl == ctx->f6.fl;
    // 0x150E4418: nop

    // 0x150E441C: bc1tl       L_150E44D4
    if (c1cs) {
        // 0x150E4420: lw          $t2, 0x80($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X80);
            goto L_150E44D4;
    }
    goto skip_0;
    // 0x150E4420: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    skip_0:
    // 0x150E4424: beql        $t3, $zero, L_150E44D4
    if (ctx->r11 == 0) {
        // 0x150E4428: lw          $t2, 0x80($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X80);
            goto L_150E44D4;
    }
    goto skip_1;
    // 0x150E4428: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    skip_1:
    // 0x150E442C: lw          $t4, 0x0($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X0);
    // 0x150E4430: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x150E4434: div         $zero, $t5, $s7
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r23))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r23)));
    // 0x150E4438: mflo        $v0
    ctx->r2 = lo;
    // 0x150E443C: bne         $s7, $zero, L_150E4448
    if (ctx->r23 != 0) {
        // 0x150E4440: nop
    
            goto L_150E4448;
    }
    // 0x150E4440: nop

    // 0x150E4444: break       7
    do_break(353256516);
L_150E4448:
    // 0x150E4448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150E444C: bne         $s7, $at, L_150E4460
    if (ctx->r23 != ctx->r1) {
        // 0x150E4450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150E4460;
    }
    // 0x150E4450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E4454: bne         $t5, $at, L_150E4460
    if (ctx->r13 != ctx->r1) {
        // 0x150E4458: nop
    
            goto L_150E4460;
    }
    // 0x150E4458: nop

    // 0x150E445C: break       6
    do_break(353256540);
L_150E4460:
    // 0x150E4460: bltzl       $v0, L_150E44D4
    if (SIGNED(ctx->r2) < 0) {
        // 0x150E4464: lw          $t2, 0x80($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X80);
            goto L_150E44D4;
    }
    goto skip_2;
    // 0x150E4464: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    skip_2:
    // 0x150E4468: lw          $t6, 0x0($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X0);
    // 0x150E446C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150E4470: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x150E4474: beql        $at, $zero, L_150E44D4
    if (ctx->r1 == 0) {
        // 0x150E4478: lw          $t2, 0x80($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X80);
            goto L_150E44D4;
    }
    goto skip_3;
    // 0x150E4478: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    skip_3:
    // 0x150E447C: lw          $t7, -0x41A4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X41A4);
    // 0x150E4480: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x150E4484: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x150E4488: jal         0x1510F8CC
    // 0x150E448C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_1510F8CC(rdram, ctx);
        goto after_3;
    // 0x150E448C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_3:
    // 0x150E4490: beql        $v0, $zero, L_150E44D4
    if (ctx->r2 == 0) {
        // 0x150E4494: lw          $t2, 0x80($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X80);
            goto L_150E44D4;
    }
    goto skip_4;
    // 0x150E4494: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    skip_4:
    // 0x150E4498: mtc1        $s2, $f18
    ctx->f18.u32l = ctx->r18;
    // 0x150E449C: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x150E44A0: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x150E44A4: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E44A8: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x150E44AC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150E44B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E44B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x150E44B8: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150E44BC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150E44C0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150E44C4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150E44C8: jal         0x150E4550
    // 0x150E44CC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    func_150E4550(rdram, ctx);
        goto after_4;
    // 0x150E44CC: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_4:
    // 0x150E44D0: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
L_150E44D4:
    // 0x150E44D4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x150E44D8: bne         $s3, $t2, L_150E4378
    if (ctx->r19 != ctx->r10) {
        // 0x150E44DC: nop
    
            goto L_150E4378;
    }
    // 0x150E44DC: nop

L_150E44E0:
    // 0x150E44E0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x150E44E4: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x150E44E8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150E44EC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x150E44F0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x150E44F4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x150E44F8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x150E44FC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x150E4500: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x150E4504: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x150E4508: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x150E450C: jr          $ra
    // 0x150E4510: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x150E4510: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_150A104C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A104C: addiu       $sp, $sp, -0x378
    ctx->r29 = ADD32(ctx->r29, -0X378);
    // 0x150A1050: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150A1054: lui         $s3, 0xFFFB
    ctx->r19 = S32(0XFFFB << 16);
    // 0x150A1058: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150A105C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150A1060: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150A1064: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150A1068: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x150A106C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x150A1070: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x150A1074: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150A1078: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x150A107C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x150A1080: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x150A1084: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x150A1088: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150A108C: lwc1        $f4, 0x2F8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x150A1090: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150A1094: lui         $fp, 0x4
    ctx->r30 = S32(0X4 << 16);
    // 0x150A1098: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x150A109C: lwc1        $f6, 0x2FC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x150A10A0: addiu       $s7, $zero, 0x6
    ctx->r23 = ADD32(0, 0X6);
    // 0x150A10A4: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x150A10A8: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x150A10AC: lwc1        $f8, 0x300($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X300);
    // 0x150A10B0: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x150A10B4: lwc1        $f6, -0xA54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XA54);
    // 0x150A10B8: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x150A10BC: swc1        $f10, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f10.u32l;
    // 0x150A10C0: lwc1        $f16, 0x304($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X304);
    // 0x150A10C4: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x150A10C8: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x150A10CC: swc1        $f16, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f16.u32l;
    // 0x150A10D0: lwc1        $f18, 0x308($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X308);
    // 0x150A10D4: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x150A10D8: lwc1        $f4, 0x30C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30C);
    // 0x150A10DC: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x150A10E0: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150A10E4: swc1        $f6, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->f6.u32l;
    // 0x150A10E8: and         $t7, $t6, $s3
    ctx->r15 = ctx->r14 & ctx->r19;
    // 0x150A10EC: beq         $s2, $zero, L_150A1194
    if (ctx->r18 == 0) {
        // 0x150A10F0: sw          $t7, 0x84($s0)
        MEM_W(0X84, ctx->r16) = ctx->r15;
            goto L_150A1194;
    }
    // 0x150A10F0: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
L_150A10F4:
    // 0x150A10F4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x150A10F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x150A10FC: beql        $a1, $zero, L_150A118C
    if (ctx->r5 == 0) {
        // 0x150A1100: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_150A118C;
    }
    goto skip_0;
    // 0x150A1100: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    skip_0:
    // 0x150A1104: jal         0x150A1DA0
    // 0x150A1108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_150A1DA0(rdram, ctx);
        goto after_0;
    // 0x150A1108: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x150A110C: bnel        $v0, $zero, L_150A118C
    if (ctx->r2 != 0) {
        // 0x150A1110: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_150A118C;
    }
    goto skip_1;
    // 0x150A1110: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    skip_1:
    // 0x150A1114: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x150A1118: lbu         $t8, 0x15($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X15);
    // 0x150A111C: sra         $t9, $t8, 2
    ctx->r25 = S32(SIGNED(ctx->r24) >> 2);
    // 0x150A1120: bnel        $s5, $t9, L_150A118C
    if (ctx->r21 != ctx->r25) {
        // 0x150A1124: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_150A118C;
    }
    goto skip_2;
    // 0x150A1124: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    skip_2:
    // 0x150A1128: lbu         $v0, 0x17($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X17);
    // 0x150A112C: beql        $v0, $zero, L_150A1170
    if (ctx->r2 == 0) {
        // 0x150A1130: lw          $t3, 0x84($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X84);
            goto L_150A1170;
    }
    goto skip_3;
    // 0x150A1130: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
    skip_3:
    // 0x150A1134: beql        $v0, $s6, L_150A1150
    if (ctx->r2 == ctx->r22) {
        // 0x150A1138: lh          $t0, 0x8($a1)
        ctx->r8 = MEM_H(ctx->r5, 0X8);
            goto L_150A1150;
    }
    goto skip_4;
    // 0x150A1138: lh          $t0, 0x8($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X8);
    skip_4:
    // 0x150A113C: beql        $v0, $s7, L_150A1180
    if (ctx->r2 == ctx->r23) {
        // 0x150A1140: lw          $t5, 0x84($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X84);
            goto L_150A1180;
    }
    goto skip_5;
    // 0x150A1140: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
    skip_5:
    // 0x150A1144: b           L_150A118C
    // 0x150A1148: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
        goto L_150A118C;
    // 0x150A1148: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150A114C: lh          $t0, 0x8($a1)
    ctx->r8 = MEM_H(ctx->r5, 0X8);
L_150A1150:
    // 0x150A1150: lh          $t1, 0x2($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X2);
    // 0x150A1154: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x150A1158: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x150A115C: nop

    // 0x150A1160: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150A1164: b           L_150A1188
    // 0x150A1168: swc1        $f10, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->f10.u32l;
        goto L_150A1188;
    // 0x150A1168: swc1        $f10, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->f10.u32l;
    // 0x150A116C: lw          $t3, 0x84($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X84);
L_150A1170:
    // 0x150A1170: or          $t4, $t3, $fp
    ctx->r12 = ctx->r11 | ctx->r30;
    // 0x150A1174: b           L_150A1188
    // 0x150A1178: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
        goto L_150A1188;
    // 0x150A1178: sw          $t4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r12;
    // 0x150A117C: lw          $t5, 0x84($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X84);
L_150A1180:
    // 0x150A1180: and         $t6, $t5, $s3
    ctx->r14 = ctx->r13 & ctx->r19;
    // 0x150A1184: sw          $t6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r14;
L_150A1188:
    // 0x150A1188: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_150A118C:
    // 0x150A118C: bne         $s2, $zero, L_150A10F4
    if (ctx->r18 != 0) {
        // 0x150A1190: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_150A10F4;
    }
    // 0x150A1190: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_150A1194:
    // 0x150A1194: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150A1198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x150A119C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x150A11A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x150A11A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x150A11A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x150A11AC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x150A11B0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x150A11B4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x150A11B8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x150A11BC: jr          $ra
    // 0x150A11C0: addiu       $sp, $sp, 0x378
    ctx->r29 = ADD32(ctx->r29, 0X378);
    return;
    return;
    // 0x150A11C0: addiu       $sp, $sp, 0x378
    ctx->r29 = ADD32(ctx->r29, 0X378);
;}
RECOMP_FUNC void func_151BD750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BD750: lh          $v0, 0x80($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X80);
    // 0x151BD754: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151BD758: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BD75C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x151BD760: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD764: lwc1        $f16, -0x57A0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X57A0);
    // 0x151BD768: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151BD76C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD770: lwc1        $f4, -0x579C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X579C);
    // 0x151BD774: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151BD778: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x151BD77C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151BD780: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x151BD784: sh          $t7, 0x80($a0)
    MEM_H(0X80, ctx->r4) = ctx->r15;
    // 0x151BD788: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151BD78C: add.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151BD790: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x151BD794: jr          $ra
    // 0x151BD798: nop

    return;
    return;
    // 0x151BD798: nop

;}
RECOMP_FUNC void func_1000A348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000A348: lui         $a3, 0x8004
    ctx->r7 = S32(0X8004 << 16);
    // 0x1000A34C: addiu       $a3, $a3, 0x6A0
    ctx->r7 = ADD32(ctx->r7, 0X6A0);
    // 0x1000A350: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x1000A354: beq         $v0, $zero, L_1000A40C
    if (ctx->r2 == 0) {
        // 0x1000A358: nop
    
            goto L_1000A40C;
    }
    // 0x1000A358: nop

L_1000A35C:
    // 0x1000A35C: lb          $t6, 0x14($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X14);
    // 0x1000A360: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1000A364: bne         $t6, $zero, L_1000A404
    if (ctx->r14 != 0) {
        // 0x1000A368: nop
    
            goto L_1000A404;
    }
    // 0x1000A368: nop

    // 0x1000A36C: lbu         $t7, 0x16($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X16);
    // 0x1000A370: bne         $t7, $zero, L_1000A404
    if (ctx->r15 != 0) {
        // 0x1000A374: nop
    
            goto L_1000A404;
    }
    // 0x1000A374: nop

    // 0x1000A378: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x1000A37C: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x1000A380: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x1000A384: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x1000A388: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x1000A38C: bnel        $v0, $t9, L_1000A39C
    if (ctx->r2 != ctx->r25) {
        // 0x1000A390: lw          $a0, 0x0($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X0);
            goto L_1000A39C;
    }
    goto skip_0;
    // 0x1000A390: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x1000A394: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x1000A398: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
L_1000A39C:
    // 0x1000A39C: beql        $a0, $zero, L_1000A3B0
    if (ctx->r4 == 0) {
        // 0x1000A3A0: lw          $a0, 0x4($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X4);
            goto L_1000A3B0;
    }
    goto skip_1;
    // 0x1000A3A0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x1000A3A4: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x1000A3A8: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
    // 0x1000A3AC: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
L_1000A3B0:
    // 0x1000A3B0: beql        $a0, $zero, L_1000A3C4
    if (ctx->r4 == 0) {
        // 0x1000A3B4: lw          $a0, 0x10($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X10);
            goto L_1000A3C4;
    }
    goto skip_2;
    // 0x1000A3B4: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    skip_2:
    // 0x1000A3B8: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x1000A3BC: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x1000A3C0: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
L_1000A3C4:
    // 0x1000A3C4: beql        $a0, $zero, L_1000A3FC
    if (ctx->r4 == 0) {
        // 0x1000A3C8: sw          $v0, 0x10($a3)
        MEM_W(0X10, ctx->r7) = ctx->r2;
            goto L_1000A3FC;
    }
    goto skip_3;
    // 0x1000A3C8: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    skip_3:
    // 0x1000A3CC: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x1000A3D0: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x1000A3D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1000A3D8: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x1000A3DC: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x1000A3E0: beql        $a2, $zero, L_1000A3F0
    if (ctx->r6 == 0) {
        // 0x1000A3E4: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_1000A3F0;
    }
    goto skip_4;
    // 0x1000A3E4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    skip_4:
    // 0x1000A3E8: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x1000A3EC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_1000A3F0:
    // 0x1000A3F0: b           L_1000A404
    // 0x1000A3F4: nop

        goto L_1000A404;
    // 0x1000A3F4: nop

    // 0x1000A3F8: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
L_1000A3FC:
    // 0x1000A3FC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x1000A400: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_1000A404:
    // 0x1000A404: bne         $v1, $zero, L_1000A35C
    if (ctx->r3 != 0) {
        // 0x1000A408: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_1000A35C;
    }
    // 0x1000A408: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1000A40C:
    // 0x1000A40C: jr          $ra
    // 0x1000A410: nop

    return;
    return;
    // 0x1000A410: nop

    // 0x1000A414: nop

    // 0x1000A418: nop

    // 0x1000A41C: nop

;}
RECOMP_FUNC void func_151B48DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B48DC: lwc1        $f0, 0x14($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X14);
    // 0x151B48E0: lwc1        $f2, 0x20($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X20);
    // 0x151B48E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151B48E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B48EC: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x151B48F0: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x151B48F4: swc1        $f16, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f16.u32l;
    // 0x151B48F8: swc1        $f16, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f16.u32l;
    // 0x151B48FC: lwc1        $f8, -0x5C3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5C3C);
    // 0x151B4900: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x151B4904: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x151B4908: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151B490C: addiu       $v1, $a0, 0x30
    ctx->r3 = ADD32(ctx->r4, 0X30);
    // 0x151B4910: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x151B4914: swc1        $f16, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f16.u32l;
    // 0x151B4918: swc1        $f16, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f16.u32l;
    // 0x151B491C: add.s       $f14, $f0, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x151B4920: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x151B4924: add.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
L_151B4928:
    // 0x151B4928: swc1        $f14, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f14.u32l;
    // 0x151B492C: swc1        $f16, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->f16.u32l;
    // 0x151B4930: swc1        $f16, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->f16.u32l;
    // 0x151B4934: add.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x151B4938: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x151B493C: swc1        $f16, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->f16.u32l;
    // 0x151B4940: swc1        $f16, 0x68($v1)
    MEM_W(0X68, ctx->r3) = ctx->f16.u32l;
    // 0x151B4944: swc1        $f14, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->f14.u32l;
    // 0x151B4948: add.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x151B494C: swc1        $f16, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->f16.u32l;
    // 0x151B4950: swc1        $f16, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f16.u32l;
    // 0x151B4954: swc1        $f16, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->f16.u32l;
    // 0x151B4958: swc1        $f14, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->f14.u32l;
    // 0x151B495C: add.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x151B4960: swc1        $f16, 0x98($v1)
    MEM_W(0X98, ctx->r3) = ctx->f16.u32l;
    // 0x151B4964: addiu       $v1, $v1, 0x60
    ctx->r3 = ADD32(ctx->r3, 0X60);
    // 0x151B4968: swc1        $f14, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->f14.u32l;
    // 0x151B496C: bne         $v0, $a1, L_151B4928
    if (ctx->r2 != ctx->r5) {
        // 0x151B4970: add.s       $f14, $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
            goto L_151B4928;
    }
    // 0x151B4970: add.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x151B4974: lbu         $t6, 0x10($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X10);
    // 0x151B4978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151B497C: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x151B4980: sb          $t7, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r15;
    // 0x151B4984: jr          $ra
    // 0x151B4988: nop

    return;
    return;
    // 0x151B4988: nop

;}
RECOMP_FUNC void func_150C2FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C2FCC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150C2FD0: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x150C2FD4: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x150C2FD8: lwc1        $f2, 0x150($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X150);
    // 0x150C2FDC: lwc1        $f12, 0x30($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150C2FE0: lwc1        $f14, 0x50($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X50);
    // 0x150C2FE4: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150C2FE8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150C2FEC: lwc1        $f18, 0x4C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4C);
    // 0x150C2FF0: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x150C2FF4: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x150C2FF8: sub.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x150C2FFC: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x150C3000: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C3004: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150C3008: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x150C300C: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150C3010: mul.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x150C3014: nop

    // 0x150C3018: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x150C301C: nop

    // 0x150C3020: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150C3024: nop

    // 0x150C3028: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150C302C: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x150C3030: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C3034: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150C3038: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x150C303C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150C3040: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x150C3044: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x150C3048: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C304C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150C3050: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150C3054: add.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x150C3058: bc1t        L_150C307C
    if (c1cs) {
        // 0x150C305C: swc1        $f8, 0x50($a0)
        MEM_W(0X50, ctx->r4) = ctx->f8.u32l;
            goto L_150C307C;
    }
    // 0x150C305C: swc1        $f8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f8.u32l;
    // 0x150C3060: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150C3064: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C3068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C306C: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x150C3070: nop

    // 0x150C3074: bc1f        L_150C3084
    if (!c1cs) {
        // 0x150C3078: nop
    
            goto L_150C3084;
    }
    // 0x150C3078: nop

L_150C307C:
    // 0x150C307C: jr          $ra
    // 0x150C3080: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150C3080: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C3084:
    // 0x150C3084: jr          $ra
    // 0x150C3088: nop

    return;
    return;
    // 0x150C3088: nop

;}
RECOMP_FUNC void func_150C7E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7E00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x150C7E04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150C7E08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C7E0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150C7E10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C7E14: addiu       $a1, $zero, 0x2010
    ctx->r5 = ADD32(0, 0X2010);
    // 0x150C7E18: jal         0x1509BE40
    // 0x150C7E1C: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    func_1509BE40(rdram, ctx);
        goto after_0;
    // 0x150C7E1C: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    after_0:
    // 0x150C7E20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C7E24: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    // 0x150C7E28: jal         0x1509BE40
    // 0x150C7E2C: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    func_1509BE40(rdram, ctx);
        goto after_1;
    // 0x150C7E2C: addiu       $a2, $zero, 0xBC
    ctx->r6 = ADD32(0, 0XBC);
    after_1:
    // 0x150C7E30: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x150C7E34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C7E38: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150C7E3C: jal         0x1509BE40
    // 0x150C7E40: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    func_1509BE40(rdram, ctx);
        goto after_2;
    // 0x150C7E40: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    after_2:
    // 0x150C7E44: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x150C7E48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C7E4C: addiu       $a1, $zero, 0x2010
    ctx->r5 = ADD32(0, 0X2010);
    // 0x150C7E50: jal         0x1509BE40
    // 0x150C7E54: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    func_1509BE40(rdram, ctx);
        goto after_3;
    // 0x150C7E54: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    after_3:
    // 0x150C7E58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C7E5C: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    // 0x150C7E60: jal         0x1509BE40
    // 0x150C7E64: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    func_1509BE40(rdram, ctx);
        goto after_4;
    // 0x150C7E64: addiu       $a2, $zero, 0xBB
    ctx->r6 = ADD32(0, 0XBB);
    after_4:
    // 0x150C7E68: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x150C7E6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C7E70: addiu       $a1, $zero, 0x5071
    ctx->r5 = ADD32(0, 0X5071);
    // 0x150C7E74: jal         0x1509BE40
    // 0x150C7E78: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_1509BE40(rdram, ctx);
        goto after_5;
    // 0x150C7E78: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_5:
    // 0x150C7E7C: bne         $v0, $zero, L_150C7FF0
    if (ctx->r2 != 0) {
        // 0x150C7E80: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_150C7FF0;
    }
    // 0x150C7E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C7E84: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x150C7E88: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x150C7E8C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x150C7E90: beq         $v0, $v1, L_150C7EF0
    if (ctx->r2 == ctx->r3) {
        // 0x150C7E94: nop
    
            goto L_150C7EF0;
    }
    // 0x150C7E94: nop

    // 0x150C7E98: bne         $t6, $zero, L_150C7EF0
    if (ctx->r14 != 0) {
        // 0x150C7E9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150C7EF0;
    }
    // 0x150C7E9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C7EA0: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x150C7EA4: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x150C7EA8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150C7EAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150C7EB0: jal         0x15123934
    // 0x150C7EB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_6;
    // 0x150C7EB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x150C7EB8: beql        $v0, $zero, L_150C8334
    if (ctx->r2 == 0) {
        // 0x150C7EBC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150C8334;
    }
    goto skip_0;
    // 0x150C7EBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x150C7EC0: lw          $t8, 0x84($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X84);
    // 0x150C7EC4: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x150C7EC8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150C7ECC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x150C7ED0: sw          $t9, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r25;
    // 0x150C7ED4: lbu         $a1, -0x3CCB($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3CCB);
    // 0x150C7ED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C7EDC: jal         0x151254F4
    // 0x150C7EE0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_151254F4(rdram, ctx);
        goto after_7;
    // 0x150C7EE0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_7:
    // 0x150C7EE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150C7EE8: b           L_150C8330
    // 0x150C7EEC: swc1        $f4, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f4.u32l;
        goto L_150C8330;
    // 0x150C7EEC: swc1        $f4, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f4.u32l;
L_150C7EF0:
    // 0x150C7EF0: beq         $v0, $v1, L_150C7F88
    if (ctx->r2 == ctx->r3) {
        // 0x150C7EF4: lw          $t0, 0x34($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X34);
            goto L_150C7F88;
    }
    // 0x150C7EF4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x150C7EF8: beq         $t0, $zero, L_150C7F88
    if (ctx->r8 == 0) {
        // 0x150C7EFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150C7F88;
    }
    // 0x150C7EFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C7F00: jal         0x151239CC
    // 0x150C7F04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_151239CC(rdram, ctx);
        goto after_8;
    // 0x150C7F04: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x150C7F08: lw          $a3, 0x134($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X134);
    // 0x150C7F0C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150C7F10: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150C7F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C7F18: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x150C7F1C: jal         0x15123934
    // 0x150C7F20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_15123934(rdram, ctx);
        goto after_9;
    // 0x150C7F20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x150C7F24: beq         $v0, $zero, L_150C7F5C
    if (ctx->r2 == 0) {
        // 0x150C7F28: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_150C7F5C;
    }
    // 0x150C7F28: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150C7F2C: lbu         $a1, -0x3CCB($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3CCB);
    // 0x150C7F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C7F34: jal         0x151254F4
    // 0x150C7F38: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_151254F4(rdram, ctx);
        goto after_10;
    // 0x150C7F38: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_10:
    // 0x150C7F3C: lw          $t2, 0x84($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X84);
    // 0x150C7F40: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150C7F44: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x150C7F48: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x150C7F4C: sw          $t3, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r11;
    // 0x150C7F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C7F54: jal         0x15123070
    // 0x150C7F58: swc1        $f6, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f6.u32l;
    func_15123070(rdram, ctx);
        goto after_11;
    // 0x150C7F58: swc1        $f6, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f6.u32l;
    after_11:
L_150C7F5C:
    // 0x150C7F5C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150C7F60: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C7F64: lw          $t4, 0x5F0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5F0);
    // 0x150C7F68: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x150C7F6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C7F70: ori         $t5, $t4, 0x200
    ctx->r13 = ctx->r12 | 0X200;
    // 0x150C7F74: sw          $t5, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r13;
    // 0x150C7F78: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150C7F7C: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150C7F80: b           L_150C8330
    // 0x150C7F84: swc1        $f8, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f8.u32l;
        goto L_150C8330;
    // 0x150C7F84: swc1        $f8, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f8.u32l;
L_150C7F88:
    // 0x150C7F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C7F8C: jal         0x151239CC
    // 0x150C7F90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151239CC(rdram, ctx);
        goto after_12;
    // 0x150C7F90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x150C7F94: beq         $v0, $zero, L_150C7FDC
    if (ctx->r2 == 0) {
        // 0x150C7F98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150C7FDC;
    }
    // 0x150C7F98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C7F9C: jal         0x151254F4
    // 0x150C7FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151254F4(rdram, ctx);
        goto after_13;
    // 0x150C7FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x150C7FA4: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150C7FA8: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x150C7FAC: lw          $t8, 0x3D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D4);
    // 0x150C7FB0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150C7FB4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x150C7FB8: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x150C7FBC: sb          $zero, 0x198($t8)
    MEM_B(0X198, ctx->r24) = 0;
    // 0x150C7FC0: lw          $t9, 0x6C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C8);
    // 0x150C7FC4: sh          $zero, 0x73C($s0)
    MEM_H(0X73C, ctx->r16) = 0;
    // 0x150C7FC8: bnel        $t9, $zero, L_150C7FE0
    if (ctx->r25 != 0) {
        // 0x150C7FCC: lw          $t0, 0x5F0($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X5F0);
            goto L_150C7FE0;
    }
    goto skip_1;
    // 0x150C7FCC: lw          $t0, 0x5F0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5F0);
    skip_1:
    // 0x150C7FD0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150C7FD4: nop

    // 0x150C7FD8: swc1        $f10, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f10.u32l;
L_150C7FDC:
    // 0x150C7FDC: lw          $t0, 0x5F0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X5F0);
L_150C7FE0:
    // 0x150C7FE0: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x150C7FE4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x150C7FE8: b           L_150C8330
    // 0x150C7FEC: sw          $t1, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r9;
        goto L_150C8330;
    // 0x150C7FEC: sw          $t1, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r9;
L_150C7FF0:
    // 0x150C7FF0: addiu       $a1, $zero, 0x5072
    ctx->r5 = ADD32(0, 0X5072);
    // 0x150C7FF4: jal         0x1509BE40
    // 0x150C7FF8: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    func_1509BE40(rdram, ctx);
        goto after_14;
    // 0x150C7FF8: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_14:
    // 0x150C7FFC: bne         $v0, $zero, L_150C8298
    if (ctx->r2 != 0) {
        // 0x150C8000: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150C8298;
    }
    // 0x150C8000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C8004: lw          $t2, 0x36C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X36C);
    // 0x150C8008: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150C800C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C8010: lhu         $t3, 0x0($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X0);
    // 0x150C8014: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x150C8018: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    // 0x150C801C: beq         $t4, $zero, L_150C8030
    if (ctx->r12 == 0) {
        // 0x150C8020: nop
    
            goto L_150C8030;
    }
    // 0x150C8020: nop

    // 0x150C8024: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C8028: nop

    // 0x150C802C: swc1        $f16, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f16.u32l;
L_150C8030:
    // 0x150C8030: jal         0x1509BE40
    // 0x150C8034: addiu       $a2, $zero, 0x93
    ctx->r6 = ADD32(0, 0X93);
    func_1509BE40(rdram, ctx);
        goto after_15;
    // 0x150C8034: addiu       $a2, $zero, 0x93
    ctx->r6 = ADD32(0, 0X93);
    after_15:
    // 0x150C8038: bne         $v0, $zero, L_150C804C
    if (ctx->r2 != 0) {
        // 0x150C803C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_150C804C;
    }
    // 0x150C803C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C8040: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150C8044: b           L_150C8330
    // 0x150C8048: swc1        $f18, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f18.u32l;
        goto L_150C8330;
    // 0x150C8048: swc1        $f18, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f18.u32l;
L_150C804C:
    // 0x150C804C: addiu       $a1, $zero, 0x2011
    ctx->r5 = ADD32(0, 0X2011);
    // 0x150C8050: jal         0x1509BE40
    // 0x150C8054: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    func_1509BE40(rdram, ctx);
        goto after_16;
    // 0x150C8054: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    after_16:
    // 0x150C8058: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150C805C: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    // 0x150C8060: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    // 0x150C8064: jal         0x1509BE40
    // 0x150C8068: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_17;
    // 0x150C8068: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_17:
    // 0x150C806C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150C8070: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150C8074: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x150C8078: jal         0x1509BFB0
    // 0x150C807C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_18;
    // 0x150C807C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_18:
    // 0x150C8080: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C8084: addiu       $a1, $zero, 0x2011
    ctx->r5 = ADD32(0, 0X2011);
    // 0x150C8088: jal         0x1509BE40
    // 0x150C808C: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    func_1509BE40(rdram, ctx);
        goto after_19;
    // 0x150C808C: addiu       $a2, $zero, 0xB7
    ctx->r6 = ADD32(0, 0XB7);
    after_19:
    // 0x150C8090: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150C8094: ori         $a1, $v0, 0x2000
    ctx->r5 = ctx->r2 | 0X2000;
    // 0x150C8098: addiu       $a2, $zero, 0x9A
    ctx->r6 = ADD32(0, 0X9A);
    // 0x150C809C: jal         0x1509BE40
    // 0x150C80A0: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    func_1509BE40(rdram, ctx);
        goto after_20;
    // 0x150C80A0: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    after_20:
    // 0x150C80A4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x150C80A8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150C80AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C80B0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150C80B4: lui         $at, 0x4461
    ctx->r1 = S32(0X4461 << 16);
    // 0x150C80B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C80BC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x150C80C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C80C4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x150C80C8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150C80CC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150C80D0: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150C80D4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150C80D8: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150C80DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150C80E0: lui         $t6, 0x2
    ctx->r14 = S32(0X2 << 16);
    // 0x150C80E4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x150C80E8: nop

    // 0x150C80EC: bc1fl       L_150C8100
    if (!c1cs) {
        // 0x150C80F0: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150C8100;
    }
    goto skip_2;
    // 0x150C80F0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_2:
    // 0x150C80F4: b           L_150C8124
    // 0x150C80F8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_150C8124;
    // 0x150C80F8: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x150C80FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150C8100:
    // 0x150C8100: nop

    // 0x150C8104: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150C8108: nop

    // 0x150C810C: bc1fl       L_150C8120
    if (!c1cs) {
        // 0x150C8110: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_150C8120;
    }
    goto skip_3;
    // 0x150C8110: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_3:
    // 0x150C8114: b           L_150C8120
    // 0x150C8118: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_150C8120;
    // 0x150C8118: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x150C811C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_150C8120:
    // 0x150C8120: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_150C8124:
    // 0x150C8124: bne         $t5, $zero, L_150C814C
    if (ctx->r13 != 0) {
        // 0x150C8128: lui         $at, 0x42CE
        ctx->r1 = S32(0X42CE << 16);
            goto L_150C814C;
    }
    // 0x150C8128: lui         $at, 0x42CE
    ctx->r1 = S32(0X42CE << 16);
    // 0x150C812C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150C8130: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C8134: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150C8138: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C813C: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150C8140: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
    // 0x150C8144: b           L_150C8194
    // 0x150C8148: swc1        $f18, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f18.u32l;
        goto L_150C8194;
    // 0x150C8148: swc1        $f18, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f18.u32l;
L_150C814C:
    // 0x150C814C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C8150: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C8154: lwc1        $f8, 0x4E0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4E0);
    // 0x150C8158: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150C815C: lui         $at, 0x4360
    ctx->r1 = S32(0X4360 << 16);
    // 0x150C8160: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C8164: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C8168: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150C816C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150C8170: swc1        $f10, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f10.u32l;
    // 0x150C8174: lwc1        $f4, 0x4E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4E4);
    // 0x150C8178: lui         $at, 0x4367
    ctx->r1 = S32(0X4367 << 16);
    // 0x150C817C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C8180: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150C8184: mul.s       $f0, $f8, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x150C8188: swc1        $f6, 0x374($s0)
    MEM_W(0X374, ctx->r16) = ctx->f6.u32l;
    // 0x150C818C: swc1        $f0, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = ctx->f0.u32l;
    // 0x150C8190: swc1        $f0, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->f0.u32l;
L_150C8194:
    // 0x150C8194: jal         0x1509BFB0
    // 0x150C8198: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1509BFB0(rdram, ctx);
        goto after_21;
    // 0x150C8198: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_21:
    // 0x150C819C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x150C81A0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150C81A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150C81A8: ori         $a1, $zero, 0x9000
    ctx->r5 = 0 | 0X9000;
    // 0x150C81AC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150C81B0: jal         0x1509BFB0
    // 0x150C81B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1509BFB0(rdram, ctx);
        goto after_22;
    // 0x150C81B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_22:
    // 0x150C81B8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x150C81BC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x150C81C0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150C81C4: beq         $t8, $v1, L_150C81D8
    if (ctx->r24 == ctx->r3) {
        // 0x150C81C8: nop
    
            goto L_150C81D8;
    }
    // 0x150C81C8: nop

    // 0x150C81CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150C81D0: nop

    // 0x150C81D4: swc1        $f10, 0x670($s0)
    MEM_W(0X670, ctx->r16) = ctx->f10.u32l;
L_150C81D8:
    // 0x150C81D8: sw          $zero, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = 0;
    // 0x150C81DC: lw          $t9, 0x5F0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5F0);
    // 0x150C81E0: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x150C81E4: beql        $t0, $zero, L_150C8230
    if (ctx->r8 == 0) {
        // 0x150C81E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150C8230;
    }
    goto skip_4;
    // 0x150C81E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x150C81EC: jal         0x15083E90
    // 0x150C81F0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_15083E90(rdram, ctx);
        goto after_23;
    // 0x150C81F0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_23:
    // 0x150C81F4: beql        $v0, $zero, L_150C8230
    if (ctx->r2 == 0) {
        // 0x150C81F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150C8230;
    }
    goto skip_5;
    // 0x150C81F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x150C81FC: lw          $v1, 0x3D0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3D0);
    // 0x150C8200: lbu         $t1, 0x65($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X65);
    // 0x150C8204: beql        $t1, $zero, L_150C8230
    if (ctx->r9 == 0) {
        // 0x150C8208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150C8230;
    }
    goto skip_6;
    // 0x150C8208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_6:
    // 0x150C820C: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150C8210: swc1        $f16, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f16.u32l;
    // 0x150C8214: lw          $t2, 0x3D0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X3D0);
    // 0x150C8218: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150C821C: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
    // 0x150C8220: lw          $t3, 0x3D0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X3D0);
    // 0x150C8224: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x150C8228: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x150C822C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_150C8230:
    // 0x150C8230: jal         0x151239CC
    // 0x150C8234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151239CC(rdram, ctx);
        goto after_24;
    // 0x150C8234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_24:
    // 0x150C8238: beq         $v0, $zero, L_150C8310
    if (ctx->r2 == 0) {
        // 0x150C823C: addiu       $at, $zero, -0x201
        ctx->r1 = ADD32(0, -0X201);
            goto L_150C8310;
    }
    // 0x150C823C: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x150C8240: lw          $t4, 0x5F0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X5F0);
    // 0x150C8244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C8248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C824C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x150C8250: jal         0x151254F4
    // 0x150C8254: sw          $t5, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r13;
    func_151254F4(rdram, ctx);
        goto after_25;
    // 0x150C8254: sw          $t5, 0x5F0($s0)
    MEM_W(0X5F0, ctx->r16) = ctx->r13;
    after_25:
    // 0x150C8258: lw          $t6, 0x84($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X84);
    // 0x150C825C: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x150C8260: lw          $t8, 0x3D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D4);
    // 0x150C8264: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150C8268: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x150C826C: sw          $t7, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r15;
    // 0x150C8270: sb          $zero, 0x198($t8)
    MEM_B(0X198, ctx->r24) = 0;
    // 0x150C8274: lw          $t9, 0x6C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X6C8);
    // 0x150C8278: sh          $zero, 0x73C($s0)
    MEM_H(0X73C, ctx->r16) = 0;
    // 0x150C827C: bnel        $t9, $zero, L_150C8314
    if (ctx->r25 != 0) {
        // 0x150C8280: lw          $t7, 0x36C($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X36C);
            goto L_150C8314;
    }
    goto skip_7;
    // 0x150C8280: lw          $t7, 0x36C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X36C);
    skip_7:
    // 0x150C8284: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150C8288: nop

    // 0x150C828C: swc1        $f6, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f6.u32l;
    // 0x150C8290: b           L_150C8314
    // 0x150C8294: lw          $t7, 0x36C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X36C);
        goto L_150C8314;
    // 0x150C8294: lw          $t7, 0x36C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X36C);
L_150C8298:
    // 0x150C8298: jal         0x151239CC
    // 0x150C829C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_151239CC(rdram, ctx);
        goto after_26;
    // 0x150C829C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_26:
    // 0x150C82A0: bne         $v0, $zero, L_150C82B4
    if (ctx->r2 != 0) {
        // 0x150C82A4: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_150C82B4;
    }
    // 0x150C82A4: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150C82A8: lw          $t0, -0x7800($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X7800);
    // 0x150C82AC: bnel        $t0, $zero, L_150C8314
    if (ctx->r8 != 0) {
        // 0x150C82B0: lw          $t7, 0x36C($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X36C);
            goto L_150C8314;
    }
    goto skip_8;
    // 0x150C82B0: lw          $t7, 0x36C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X36C);
    skip_8:
L_150C82B4:
    // 0x150C82B4: lw          $t1, 0x84($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X84);
    // 0x150C82B8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150C82BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150C82C0: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x150C82C4: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x150C82C8: sw          $t3, -0x7800($at)
    MEM_W(-0X7800, ctx->r1) = ctx->r11;
    // 0x150C82CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C82D0: jal         0x151254F4
    // 0x150C82D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151254F4(rdram, ctx);
        goto after_27;
    // 0x150C82D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_27:
    // 0x150C82D8: lw          $t4, 0x3D4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3D4);
    // 0x150C82DC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x150C82E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C82E4: sb          $zero, 0x198($t4)
    MEM_B(0X198, ctx->r12) = 0;
    // 0x150C82E8: sh          $zero, 0x73C($s0)
    MEM_H(0X73C, ctx->r16) = 0;
    // 0x150C82EC: jal         0x15124B18
    // 0x150C82F0: sh          $t5, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r13;
    func_15124B18(rdram, ctx);
        goto after_28;
    // 0x150C82F0: sh          $t5, 0x1B4($s0)
    MEM_H(0X1B4, ctx->r16) = ctx->r13;
    after_28:
    // 0x150C82F4: lw          $t6, 0x6C8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X6C8);
    // 0x150C82F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150C82FC: bne         $t6, $zero, L_150C8310
    if (ctx->r14 != 0) {
        // 0x150C8300: swc1        $f8, 0x190($s0)
        MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
            goto L_150C8310;
    }
    // 0x150C8300: swc1        $f8, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f8.u32l;
    // 0x150C8304: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150C8308: nop

    // 0x150C830C: swc1        $f10, 0x674($s0)
    MEM_W(0X674, ctx->r16) = ctx->f10.u32l;
L_150C8310:
    // 0x150C8310: lw          $t7, 0x36C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X36C);
L_150C8314:
    // 0x150C8314: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x150C8318: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x150C831C: beql        $t9, $zero, L_150C8334
    if (ctx->r25 == 0) {
        // 0x150C8320: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150C8334;
    }
    goto skip_9;
    // 0x150C8320: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_9:
    // 0x150C8324: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150C8328: nop

    // 0x150C832C: swc1        $f16, 0x190($s0)
    MEM_W(0X190, ctx->r16) = ctx->f16.u32l;
L_150C8330:
    // 0x150C8330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150C8334:
    // 0x150C8334: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150C8338: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x150C833C: jr          $ra
    // 0x150C8340: nop

    return;
    return;
    // 0x150C8340: nop

;}
RECOMP_FUNC void func_1519BE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519BE1C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x1519BE20: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x1519BE24: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x1519BE28: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x1519BE2C: addiu       $t6, $sp, 0x4
    ctx->r14 = ADD32(ctx->r29, 0X4);
    // 0x1519BE30: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x1519BE34: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1519BE38: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x1519BE3C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x1519BE40: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x1519BE44: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1519BE48: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1519BE4C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1519BE50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1519BE54: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x1519BE58: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x1519BE5C: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x1519BE60: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x1519BE64: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1519BE68: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1519BE6C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x1519BE70: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x1519BE74: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x1519BE78: nop

    // 0x1519BE7C: mul.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1519BE80: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x1519BE84: mul.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x1519BE88: nop

    // 0x1519BE8C: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1519BE90: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1519BE94: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519BE98: add.s       $f10, $f16, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x1519BE9C: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x1519BEA0: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x1519BEA4: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x1519BEA8: add.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1519BEAC: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x1519BEB0: jr          $ra
    // 0x1519BEB4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x1519BEB4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_15008E10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15008E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15008E14: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15008E18: addiu       $t0, $t0, -0x21B0
    ctx->r8 = ADD32(ctx->r8, -0X21B0);
    // 0x15008E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15008E20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15008E24: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x15008E28: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x15008E2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15008E30: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15008E34: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    // 0x15008E38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15008E3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15008E40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15008E44: jal         0x10003C40
    // 0x15008E48: sb          $t6, -0x21AC($at)
    MEM_B(-0X21AC, ctx->r1) = ctx->r14;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15008E48: sb          $t6, -0x21AC($at)
    MEM_B(-0X21AC, ctx->r1) = ctx->r14;
    after_0:
    // 0x15008E4C: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15008E50: addiu       $t0, $t0, -0x21B0
    ctx->r8 = ADD32(ctx->r8, -0X21B0);
    // 0x15008E54: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x15008E58: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x15008E5C: addiu       $a0, $a0, -0x21A0
    ctx->r4 = ADD32(ctx->r4, -0X21A0);
    // 0x15008E60: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15008E64: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x15008E68: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15008E6C: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x15008E70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15008E74: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    // 0x15008E78: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x15008E7C: addiu       $a1, $a1, -0x30
    ctx->r5 = ADD32(ctx->r5, -0X30);
    // 0x15008E80: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15008E84: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x15008E88: beq         $v1, $a1, L_15008FC8
    if (ctx->r3 == ctx->r5) {
        // 0x15008E8C: lw          $t5, 0x0($t4)
        ctx->r13 = MEM_W(ctx->r12, 0X0);
            goto L_15008FC8;
    }
    // 0x15008E8C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
L_15008E90:
    // 0x15008E90: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x15008E94: swc1        $f2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f2.u32l;
    // 0x15008E98: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x15008E9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15008EA0: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x15008EA4: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x15008EA8: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x15008EAC: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15008EB0: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x15008EB4: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x15008EB8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15008EBC: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x15008EC0: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x15008EC4: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x15008EC8: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x15008ECC: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x15008ED0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15008ED4: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x15008ED8: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x15008EDC: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x15008EE0: swc1        $f2, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f2.u32l;
    // 0x15008EE4: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x15008EE8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15008EEC: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x15008EF0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15008EF4: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x15008EF8: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15008EFC: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x15008F00: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x15008F04: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15008F08: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x15008F0C: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x15008F10: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x15008F14: swc1        $f18, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f18.u32l;
    // 0x15008F18: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x15008F1C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15008F20: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x15008F24: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15008F28: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15008F2C: swc1        $f2, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f2.u32l;
    // 0x15008F30: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x15008F34: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15008F38: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x15008F3C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x15008F40: addu        $v0, $t2, $v1
    ctx->r2 = ADD32(ctx->r10, ctx->r3);
    // 0x15008F44: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15008F48: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x15008F4C: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x15008F50: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15008F54: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x15008F58: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15008F5C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15008F60: swc1        $f18, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f18.u32l;
    // 0x15008F64: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x15008F68: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15008F6C: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x15008F70: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x15008F74: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x15008F78: swc1        $f2, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f2.u32l;
    // 0x15008F7C: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x15008F80: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15008F84: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x15008F88: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15008F8C: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x15008F90: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15008F94: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x15008F98: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x15008F9C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15008FA0: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x15008FA4: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x15008FA8: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x15008FAC: swc1        $f18, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f18.u32l;
    // 0x15008FB0: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x15008FB4: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x15008FB8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15008FBC: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x15008FC0: bne         $v1, $a1, L_15008E90
    if (ctx->r3 != ctx->r5) {
        // 0x15008FC4: lw          $t5, 0x0($t4)
        ctx->r13 = MEM_W(ctx->r12, 0X0);
            goto L_15008E90;
    }
    // 0x15008FC4: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
L_15008FC8:
    // 0x15008FC8: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x15008FCC: swc1        $f2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f2.u32l;
    // 0x15008FD0: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x15008FD4: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x15008FD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15008FDC: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x15008FE0: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x15008FE4: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x15008FE8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15008FEC: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x15008FF0: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x15008FF4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15008FF8: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x15008FFC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x15009000: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x15009004: swc1        $f18, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f18.u32l;
    // 0x15009008: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x1500900C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15009010: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x15009014: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x15009018: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x1500901C: swc1        $f2, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f2.u32l;
    // 0x15009020: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x15009024: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15009028: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x1500902C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15009030: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x15009034: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15009038: swc1        $f18, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f18.u32l;
    // 0x1500903C: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x15009040: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15009044: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x15009048: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x1500904C: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x15009050: swc1        $f18, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f18.u32l;
    // 0x15009054: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x15009058: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1500905C: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x15009060: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15009064: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15009068: swc1        $f2, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f2.u32l;
    // 0x1500906C: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x15009070: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15009074: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x15009078: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x1500907C: addu        $v0, $t2, $v1
    ctx->r2 = ADD32(ctx->r10, ctx->r3);
    // 0x15009080: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15009084: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x15009088: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x1500908C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x15009090: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x15009094: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x15009098: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1500909C: swc1        $f18, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f18.u32l;
    // 0x150090A0: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x150090A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150090A8: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x150090AC: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x150090B0: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x150090B4: swc1        $f2, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f2.u32l;
    // 0x150090B8: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x150090BC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x150090C0: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x150090C4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x150090C8: addu        $v0, $t7, $v1
    ctx->r2 = ADD32(ctx->r15, ctx->r3);
    // 0x150090CC: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x150090D0: swc1        $f18, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f18.u32l;
    // 0x150090D4: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x150090D8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x150090DC: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x150090E0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x150090E4: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x150090E8: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x150090EC: swc1        $f18, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f18.u32l;
    // 0x150090F0: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x150090F4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150090F8: addiu       $t6, $t6, -0x2FB0
    ctx->r14 = ADD32(ctx->r14, -0X2FB0);
    // 0x150090FC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15009100: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x15009104: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x15009108: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x1500910C: lh          $t7, 0x14($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X14);
    // 0x15009110: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x15009114: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x15009118: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1500911C: addu        $t1, $a0, $t9
    ctx->r9 = ADD32(ctx->r4, ctx->r25);
    // 0x15009120: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15009124: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x15009128: swc1        $f6, 0x1DC($t2)
    MEM_W(0X1DC, ctx->r10) = ctx->f6.u32l;
    // 0x1500912C: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x15009130: sb          $zero, 0x17($v0)
    MEM_B(0X17, ctx->r2) = 0;
    // 0x15009134: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15009138: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
    // 0x1500913C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15009140: jr          $ra
    // 0x15009144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15009144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15009148: nop

    // 0x1500914C: nop

;}
RECOMP_FUNC void func_150A34B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A34B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150A34B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150A34B8: lbu         $t6, 0x14($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X14);
    // 0x150A34BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150A34C0: bnel        $t6, $at, L_150A34D4
    if (ctx->r14 != ctx->r1) {
        // 0x150A34C4: lbu         $t7, 0x15($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X15);
            goto L_150A34D4;
    }
    goto skip_0;
    // 0x150A34C4: lbu         $t7, 0x15($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X15);
    skip_0:
    // 0x150A34C8: b           L_150A34F4
    // 0x150A34CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150A34F4;
    // 0x150A34CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A34D0: lbu         $t7, 0x15($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X15);
L_150A34D4:
    // 0x150A34D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A34D8: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x150A34DC: bne         $t8, $zero, L_150A34F4
    if (ctx->r24 != 0) {
        // 0x150A34E0: nop
    
            goto L_150A34F4;
    }
    // 0x150A34E0: nop

    // 0x150A34E4: jal         0x150A3504
    // 0x150A34E8: nop

    func_150A3504(rdram, ctx);
        goto after_0;
    // 0x150A34E8: nop

    after_0:
    // 0x150A34EC: b           L_150A34F8
    // 0x150A34F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150A34F8;
    // 0x150A34F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150A34F4:
    // 0x150A34F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150A34F8:
    // 0x150A34F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150A34FC: jr          $ra
    // 0x150A3500: nop

    return;
    return;
    // 0x150A3500: nop

;}
RECOMP_FUNC void func_151DA6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DA6A8: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x151DA6AC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x151DA6B0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151DA6B4: beql        $t7, $zero, L_151DA6F0
    if (ctx->r15 == 0) {
        // 0x151DA6B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151DA6F0;
    }
    goto skip_0;
    // 0x151DA6B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x151DA6BC: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x151DA6C0: addiu       $v0, $a0, 0x128
    ctx->r2 = ADD32(ctx->r4, 0X128);
    // 0x151DA6C4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x151DA6C8: beq         $v1, $zero, L_151DA6EC
    if (ctx->r3 == 0) {
        // 0x151DA6CC: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_151DA6EC;
    }
    // 0x151DA6CC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x151DA6D0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
L_151DA6D4:
    // 0x151DA6D4: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151DA6D8: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x151DA6DC: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151DA6E0: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x151DA6E4: bne         $v1, $zero, L_151DA6D4
    if (ctx->r3 != 0) {
        // 0x151DA6E8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_151DA6D4;
    }
    // 0x151DA6E8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_151DA6EC:
    // 0x151DA6EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151DA6F0:
    // 0x151DA6F0: jr          $ra
    // 0x151DA6F4: nop

    return;
    return;
    // 0x151DA6F4: nop

;}
RECOMP_FUNC void func_151C329C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C329C: addiu       $sp, $sp, -0x140
    ctx->r29 = ADD32(ctx->r29, -0X140);
    // 0x151C32A0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151C32A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C32A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151C32AC: sw          $a1, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->r5;
    // 0x151C32B0: sw          $a2, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r6;
    // 0x151C32B4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x151C32B8: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x151C32BC: sw          $t6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r14;
    // 0x151C32C0: sw          $t7, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r15;
    // 0x151C32C4: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151C32C8: addiu       $t8, $sp, 0xD4
    ctx->r24 = ADD32(ctx->r29, 0XD4);
    // 0x151C32CC: addiu       $t4, $zero, 0x50
    ctx->r12 = ADD32(0, 0X50);
    // 0x151C32D0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151C32D4: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x151C32D8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151C32DC: addiu       $t3, $zero, -0x40
    ctx->r11 = ADD32(0, -0X40);
    // 0x151C32E0: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x151C32E4: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151C32E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151C32EC: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x151C32F0: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x151C32F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C32F8: lwc1        $f4, -0x55BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X55BC);
    // 0x151C32FC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C3300: lwc1        $f6, -0x55B8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X55B8);
    // 0x151C3304: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C3308: lwc1        $f8, -0x55B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X55B4);
    // 0x151C330C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C3310: lwc1        $f10, -0x55B0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X55B0);
    // 0x151C3314: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x151C3318: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C331C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x151C3320: sh          $t4, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r12;
    // 0x151C3324: sw          $t5, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r13;
    // 0x151C3328: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x151C332C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151C3330: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x151C3334: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x151C3338: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C333C: sh          $t3, 0xFC($sp)
    MEM_H(0XFC, ctx->r29) = ctx->r11;
    // 0x151C3340: sw          $t6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r14;
    // 0x151C3344: sh          $t7, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r15;
    // 0x151C3348: sh          $t0, 0x10A($sp)
    MEM_H(0X10A, ctx->r29) = ctx->r8;
    // 0x151C334C: sh          $t9, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r25;
    // 0x151C3350: sb          $t8, 0x10E($sp)
    MEM_B(0X10E, ctx->r29) = ctx->r24;
    // 0x151C3354: sb          $t1, 0x10F($sp)
    MEM_B(0X10F, ctx->r29) = ctx->r9;
    // 0x151C3358: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C335C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151C3360: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151C3364: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C3368: sb          $t4, 0x112($sp)
    MEM_B(0X112, ctx->r29) = ctx->r12;
    // 0x151C336C: sb          $t5, 0x113($sp)
    MEM_B(0X113, ctx->r29) = ctx->r13;
    // 0x151C3370: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151C3374: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C3378: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151C337C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C3380: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C3384: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151C3388: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C338C: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x151C3390: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C3394: sh          $t2, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r10;
    // 0x151C3398: sb          $t3, 0x111($sp)
    MEM_B(0X111, ctx->r29) = ctx->r11;
    // 0x151C339C: sb          $t6, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r14;
    // 0x151C33A0: sb          $t7, 0x119($sp)
    MEM_B(0X119, ctx->r29) = ctx->r15;
    // 0x151C33A4: sb          $t0, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = ctx->r8;
    // 0x151C33A8: sb          $t9, 0x11B($sp)
    MEM_B(0X11B, ctx->r29) = ctx->r25;
    // 0x151C33AC: sb          $t8, 0x11C($sp)
    MEM_B(0X11C, ctx->r29) = ctx->r24;
    // 0x151C33B0: sb          $t1, 0x121($sp)
    MEM_B(0X121, ctx->r29) = ctx->r9;
    // 0x151C33B4: lui         $t4, 0x20
    ctx->r12 = S32(0X20 << 16);
    // 0x151C33B8: lui         $t5, 0x6
    ctx->r13 = S32(0X6 << 16);
    // 0x151C33BC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x151C33C0: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x151C33C4: ori         $t4, $t4, 0x5
    ctx->r12 = ctx->r12 | 0X5;
    // 0x151C33C8: ori         $t5, $t5, 0x600
    ctx->r13 = ctx->r13 | 0X600;
    // 0x151C33CC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x151C33D0: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x151C33D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151C33D8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x151C33DC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151C33E0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x151C33E4: sh          $zero, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = 0;
    // 0x151C33E8: sb          $t2, 0x110($sp)
    MEM_B(0X110, ctx->r29) = ctx->r10;
    // 0x151C33EC: sb          $zero, 0x115($sp)
    MEM_B(0X115, ctx->r29) = 0;
    // 0x151C33F0: sb          $zero, 0x116($sp)
    MEM_B(0X116, ctx->r29) = 0;
    // 0x151C33F4: sb          $zero, 0x117($sp)
    MEM_B(0X117, ctx->r29) = 0;
    // 0x151C33F8: sb          $zero, 0x118($sp)
    MEM_B(0X118, ctx->r29) = 0;
    // 0x151C33FC: sb          $zero, 0x11D($sp)
    MEM_B(0X11D, ctx->r29) = 0;
    // 0x151C3400: sb          $zero, 0x11E($sp)
    MEM_B(0X11E, ctx->r29) = 0;
    // 0x151C3404: sb          $zero, 0x11F($sp)
    MEM_B(0X11F, ctx->r29) = 0;
    // 0x151C3408: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x151C340C: sb          $zero, 0x122($sp)
    MEM_B(0X122, ctx->r29) = 0;
    // 0x151C3410: sb          $t2, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r10;
    // 0x151C3414: sb          $t3, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r11;
    // 0x151C3418: sw          $t4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r12;
    // 0x151C341C: sw          $t5, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r13;
    // 0x151C3420: sh          $t6, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r14;
    // 0x151C3424: sh          $t7, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r15;
    // 0x151C3428: sh          $t0, 0x134($sp)
    MEM_H(0X134, ctx->r29) = ctx->r8;
    // 0x151C342C: sb          $zero, 0x136($sp)
    MEM_B(0X136, ctx->r29) = 0;
    // 0x151C3430: sb          $t9, 0x13C($sp)
    MEM_B(0X13C, ctx->r29) = ctx->r25;
    // 0x151C3434: sb          $zero, 0x13D($sp)
    MEM_B(0X13D, ctx->r29) = 0;
    // 0x151C3438: sb          $t8, 0x13E($sp)
    MEM_B(0X13E, ctx->r29) = ctx->r24;
    // 0x151C343C: sb          $t1, 0x13F($sp)
    MEM_B(0X13F, ctx->r29) = ctx->r9;
    // 0x151C3440: lw          $a2, 0x148($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X148);
    // 0x151C3444: lbu         $a1, 0x147($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X147);
    // 0x151C3448: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x151C344C: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x151C3450: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
    // 0x151C3454: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x151C3458: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x151C345C: swc1        $f18, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f18.u32l;
    // 0x151C3460: jal         0x15152B38
    // 0x151C3464: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
    func_15152B38(rdram, ctx);
        goto after_0;
    // 0x151C3464: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151C3468: lui         $t4, 0x20
    ctx->r12 = S32(0X20 << 16);
    // 0x151C346C: addiu       $t2, $zero, 0x2B
    ctx->r10 = ADD32(0, 0X2B);
    // 0x151C3470: addiu       $t3, $zero, 0x4403
    ctx->r11 = ADD32(0, 0X4403);
    // 0x151C3474: ori         $t4, $t4, 0x5
    ctx->r12 = ctx->r12 | 0X5;
    // 0x151C3478: lui         $t5, 0x2
    ctx->r13 = S32(0X2 << 16);
    // 0x151C347C: sb          $t2, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r10;
    // 0x151C3480: sh          $t3, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r11;
    // 0x151C3484: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x151C3488: jal         0x150ADA20
    // 0x151C348C: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151C348C: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    after_1:
    // 0x151C3490: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151C3494: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C3498: mfhi        $t6
    ctx->r14 = hi;
    // 0x151C349C: addiu       $t7, $t6, 0x6
    ctx->r15 = ADD32(ctx->r14, 0X6);
    // 0x151C34A0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151C34A4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C34A8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C34AC: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151C34B0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151C34B4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C34B8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C34BC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151C34C0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x151C34C4: sh          $t7, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r15;
    // 0x151C34C8: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x151C34CC: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x151C34D0: sb          $t0, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r8;
    // 0x151C34D4: sb          $t9, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r25;
    // 0x151C34D8: sb          $t8, 0x72($sp)
    MEM_B(0X72, ctx->r29) = ctx->r24;
    // 0x151C34DC: sb          $t1, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r9;
    // 0x151C34E0: sb          $t2, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r10;
    // 0x151C34E4: sb          $t3, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r11;
    // 0x151C34E8: sb          $t4, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r12;
    // 0x151C34EC: sb          $t5, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r13;
    // 0x151C34F0: jal         0x150ADA68
    // 0x151C34F4: sb          $t6, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r14;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151C34F4: sb          $t6, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r14;
    after_2:
    // 0x151C34F8: lui         $at, 0x4344
    ctx->r1 = S32(0X4344 << 16);
    // 0x151C34FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C3500: lui         $at, 0x42D4
    ctx->r1 = S32(0X42D4 << 16);
    // 0x151C3504: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C3508: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151C350C: addiu       $t7, $sp, 0x8C
    ctx->r15 = ADD32(ctx->r29, 0X8C);
    // 0x151C3510: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151C3514: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151C3518: addiu       $t2, $zero, 0x55
    ctx->r10 = ADD32(0, 0X55);
    // 0x151C351C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151C3520: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151C3524: swc1        $f16, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f16.u32l;
    // 0x151C3528: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    // 0x151C352C: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x151C3530: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151C3534: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x151C3538: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
    // 0x151C353C: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x151C3540: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151C3544: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C3548: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C354C: sh          $t1, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r9;
    // 0x151C3550: sh          $t2, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r10;
    // 0x151C3554: sh          $t3, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r11;
    // 0x151C3558: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x151C355C: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    // 0x151C3560: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x151C3564: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    // 0x151C3568: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x151C356C: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x151C3570: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x151C3574: jal         0x150ADA20
    // 0x151C3578: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151C3578: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x151C357C: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x151C3580: beq         $t4, $zero, L_151C3590
    if (ctx->r12 == 0) {
        // 0x151C3584: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_151C3590;
    }
    // 0x151C3584: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151C3588: b           L_151C3590
    // 0x151C358C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_151C3590;
    // 0x151C358C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_151C3590:
    // 0x151C3590: jal         0x150ADA20
    // 0x151C3594: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151C3594: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_4:
    // 0x151C3598: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x151C359C: beq         $t5, $zero, L_151C35AC
    if (ctx->r13 == 0) {
        // 0x151C35A0: lw          $v1, 0x40($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X40);
            goto L_151C35AC;
    }
    // 0x151C35A0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x151C35A4: b           L_151C35B0
    // 0x151C35A8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_151C35B0;
    // 0x151C35A8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_151C35AC:
    // 0x151C35AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151C35B0:
    // 0x151C35B0: ori         $t6, $v0, 0x1
    ctx->r14 = ctx->r2 | 0X1;
    // 0x151C35B4: or          $t7, $t6, $v1
    ctx->r15 = ctx->r14 | ctx->r3;
    // 0x151C35B8: lbu         $t9, 0x147($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X147);
    // 0x151C35BC: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x151C35C0: ori         $t8, $t7, 0xC200
    ctx->r24 = ctx->r15 | 0XC200;
    // 0x151C35C4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x151C35C8: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x151C35CC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151C35D0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151C35D4: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151C35D8: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x151C35DC: sw          $t8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r24;
    // 0x151C35E0: sb          $t1, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r9;
    // 0x151C35E4: sb          $t2, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r10;
    // 0x151C35E8: sb          $t3, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r11;
    // 0x151C35EC: sb          $t4, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r12;
    // 0x151C35F0: sb          $t5, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r13;
    // 0x151C35F4: sb          $t6, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r14;
    // 0x151C35F8: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x151C35FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151C3600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C3604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C3608: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151C360C: jal         0x15130280
    // 0x151C3610: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_15130280(rdram, ctx);
        goto after_5;
    // 0x151C3610: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_5:
    // 0x151C3614: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x151C3618: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x151C361C: sb          $t7, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r15;
    // 0x151C3620: jal         0x150ADA20
    // 0x151C3624: sb          $t8, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151C3624: sb          $t8, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r24;
    after_6:
    // 0x151C3628: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151C362C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C3630: mfhi        $t1
    ctx->r9 = hi;
    // 0x151C3634: addiu       $t2, $t1, 0x6
    ctx->r10 = ADD32(ctx->r9, 0X6);
    // 0x151C3638: sh          $t2, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r10;
    // 0x151C363C: sb          $zero, 0x58($sp)
    MEM_B(0X58, ctx->r29) = 0;
    // 0x151C3640: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151C3644: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C3648: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x151C364C: nop

    // 0x151C3650: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x151C3654: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151C3658: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151C365C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151C3660: nop

    // 0x151C3664: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x151C3668: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151C366C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151C3670: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x151C3674: jal         0x150ADA20
    // 0x151C3678: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151C3678: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    after_7:
    // 0x151C367C: lbu         $t2, 0x147($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X147);
    // 0x151C3680: lw          $t3, 0x148($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X148);
    // 0x151C3684: andi        $a2, $v0, 0x1
    ctx->r6 = ctx->r2 & 0X1;
    // 0x151C3688: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C368C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151C3690: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151C3694: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151C3698: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151C369C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151C36A0: addiu       $a2, $a2, 0x5
    ctx->r6 = ADD32(ctx->r6, 0X5);
    // 0x151C36A4: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151C36A8: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x151C36AC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C36B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C36B4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C36B8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x151C36BC: jal         0x151602C0
    // 0x151C36C0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    func_151602C0(rdram, ctx);
        goto after_8;
    // 0x151C36C0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    after_8:
    // 0x151C36C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151C36C8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151C36CC: addiu       $sp, $sp, 0x140
    ctx->r29 = ADD32(ctx->r29, 0X140);
    // 0x151C36D0: jr          $ra
    // 0x151C36D4: nop

    return;
    return;
    // 0x151C36D4: nop

;}
RECOMP_FUNC void func_150E114C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E114C: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x150E1150: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x150E1154: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150E1158: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150E115C: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x150E1160: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x150E1164: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x150E1168: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x150E116C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x150E1170: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150E1174: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x150E1178: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150E117C: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150E1180: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150E1184: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150E1188: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150E118C: jal         0x150ADA68
    // 0x150E1190: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150E1190: nop

    after_0:
    // 0x150E1194: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E1198: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x150E119C: lui         $at, 0x434C
    ctx->r1 = S32(0X434C << 16);
    // 0x150E11A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E11A4: lui         $at, 0x431F
    ctx->r1 = S32(0X431F << 16);
    // 0x150E11A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E11AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E11B0: lwc1        $f16, 0x1014($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1014);
    // 0x150E11B4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150E11B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150E11BC: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150E11C0: addiu       $s1, $s2, 0x28
    ctx->r17 = ADD32(ctx->r18, 0X28);
    // 0x150E11C4: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x150E11C8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150E11CC: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E11D0: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150E11D4: nop

    // 0x150E11D8: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x150E11DC: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150E11E0: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x150E11E4: lwc1        $f2, 0xC($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E11E8: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x150E11EC: nop

    // 0x150E11F0: bc1f        L_150E1528
    if (!c1cs) {
        // 0x150E11F4: nop
    
            goto L_150E1528;
    }
    // 0x150E11F4: nop

    // 0x150E11F8: lw          $a0, 0x2FA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA0);
    // 0x150E11FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150E1200: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150E1204: bltz        $a0, L_150E122C
    if (SIGNED(ctx->r4) < 0) {
        // 0x150E1208: addiu       $t3, $zero, 0x29
        ctx->r11 = ADD32(0, 0X29);
            goto L_150E122C;
    }
    // 0x150E1208: addiu       $t3, $zero, 0x29
    ctx->r11 = ADD32(0, 0X29);
L_150E120C:
    // 0x150E120C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150E1210: sllv        $t7, $t6, $v0
    ctx->r15 = S32(ctx->r14 << (ctx->r2 & 31));
    // 0x150E1214: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x150E1218: or          $v1, $v1, $t7
    ctx->r3 = ctx->r3 | ctx->r15;
    // 0x150E121C: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150E1220: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x150E1224: beq         $at, $zero, L_150E120C
    if (ctx->r1 == 0) {
        // 0x150E1228: sra         $v1, $t8, 16
        ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
            goto L_150E120C;
    }
    // 0x150E1228: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
L_150E122C:
    // 0x150E122C: lw          $t0, 0x8($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X8);
    // 0x150E1230: lui         $t5, 0x20
    ctx->r13 = S32(0X20 << 16);
    // 0x150E1234: addiu       $t4, $zero, 0x4403
    ctx->r12 = ADD32(0, 0X4403);
    // 0x150E1238: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x150E123C: ori         $t5, $t5, 0x5
    ctx->r13 = ctx->r13 | 0X5;
    // 0x150E1240: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x150E1244: and         $t2, $t1, $v1
    ctx->r10 = ctx->r9 & ctx->r3;
    // 0x150E1248: bne         $t2, $zero, L_150E1274
    if (ctx->r10 != 0) {
        // 0x150E124C: addiu       $t7, $zero, 0x7
        ctx->r15 = ADD32(0, 0X7);
            goto L_150E1274;
    }
    // 0x150E124C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x150E1250: sub.s       $f16, $f2, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f20.fl;
L_150E1254:
    // 0x150E1254: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x150E1258: lwc1        $f2, 0xC($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E125C: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x150E1260: nop

    // 0x150E1264: bc1tl       L_150E1254
    if (c1cs) {
        // 0x150E1268: sub.s       $f16, $f2, $f20
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f20.fl;
            goto L_150E1254;
    }
    goto skip_0;
    // 0x150E1268: sub.s       $f16, $f2, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f20.fl;
    skip_0:
    // 0x150E126C: b           L_150E152C
    // 0x150E1270: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
        goto L_150E152C;
    // 0x150E1270: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_150E1274:
    // 0x150E1274: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x150E1278: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x150E127C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E1280: lwc1        $f18, 0x1018($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1018);
    // 0x150E1284: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E1288: lwc1        $f6, 0x101C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X101C);
    // 0x150E128C: ori         $t8, $t8, 0xCE05
    ctx->r24 = ctx->r24 | 0XCE05;
    // 0x150E1290: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x150E1294: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x150E1298: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x150E129C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150E12A0: sb          $t3, 0xD1($sp)
    MEM_B(0XD1, ctx->r29) = ctx->r11;
    // 0x150E12A4: sh          $t4, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r12;
    // 0x150E12A8: sw          $t5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r13;
    // 0x150E12AC: sh          $t6, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r14;
    // 0x150E12B0: sh          $t7, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r15;
    // 0x150E12B4: sw          $t8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r24;
    // 0x150E12B8: sb          $t9, 0x114($sp)
    MEM_B(0X114, ctx->r29) = ctx->r25;
    // 0x150E12BC: sb          $t0, 0x115($sp)
    MEM_B(0X115, ctx->r29) = ctx->r8;
    // 0x150E12C0: sb          $t1, 0x116($sp)
    MEM_B(0X116, ctx->r29) = ctx->r9;
    // 0x150E12C4: sb          $t2, 0x117($sp)
    MEM_B(0X117, ctx->r29) = ctx->r10;
    // 0x150E12C8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150E12CC: addiu       $t4, $zero, 0x27
    ctx->r12 = ADD32(0, 0X27);
    // 0x150E12D0: addiu       $t5, $zero, 0xDD
    ctx->r13 = ADD32(0, 0XDD);
    // 0x150E12D4: addiu       $t6, $zero, 0xD3
    ctx->r14 = ADD32(0, 0XD3);
    // 0x150E12D8: addiu       $t7, $zero, 0xCD
    ctx->r15 = ADD32(0, 0XCD);
    // 0x150E12DC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150E12E0: addiu       $t9, $zero, 0x57
    ctx->r25 = ADD32(0, 0X57);
    // 0x150E12E4: addiu       $t0, $zero, 0x55
    ctx->r8 = ADD32(0, 0X55);
    // 0x150E12E8: addiu       $t1, $zero, 0x5A
    ctx->r9 = ADD32(0, 0X5A);
    // 0x150E12EC: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150E12F0: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x150E12F4: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x150E12F8: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x150E12FC: swc1        $f22, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f22.u32l;
    // 0x150E1300: sb          $t3, 0x118($sp)
    MEM_B(0X118, ctx->r29) = ctx->r11;
    // 0x150E1304: sb          $zero, 0x119($sp)
    MEM_B(0X119, ctx->r29) = 0;
    // 0x150E1308: sh          $t4, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r12;
    // 0x150E130C: sb          $t5, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r13;
    // 0x150E1310: sb          $t6, 0xC9($sp)
    MEM_B(0XC9, ctx->r29) = ctx->r14;
    // 0x150E1314: sb          $t7, 0xCA($sp)
    MEM_B(0XCA, ctx->r29) = ctx->r15;
    // 0x150E1318: sb          $t8, 0xCB($sp)
    MEM_B(0XCB, ctx->r29) = ctx->r24;
    // 0x150E131C: sb          $t9, 0xCC($sp)
    MEM_B(0XCC, ctx->r29) = ctx->r25;
    // 0x150E1320: sb          $t0, 0xCD($sp)
    MEM_B(0XCD, ctx->r29) = ctx->r8;
    // 0x150E1324: sb          $t1, 0xCE($sp)
    MEM_B(0XCE, ctx->r29) = ctx->r9;
    // 0x150E1328: sb          $t2, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = ctx->r10;
    // 0x150E132C: swc1        $f18, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f18.u32l;
    // 0x150E1330: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
    // 0x150E1334: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x150E1338: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150E133C: addiu       $t5, $t5, 0xFE4
    ctx->r13 = ADD32(ctx->r13, 0XFE4);
    // 0x150E1340: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150E1344: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150E1348: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150E134C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150E1350: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    // 0x150E1354: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x150E1358: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150E135C: addiu       $t9, $t9, 0xFFC
    ctx->r25 = ADD32(ctx->r25, 0XFFC);
    // 0x150E1360: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150E1364: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150E1368: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150E136C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x150E1370: addiu       $t1, $sp, 0xE4
    ctx->r9 = ADD32(ctx->r29, 0XE4);
    // 0x150E1374: addiu       $t2, $sp, 0xA4
    ctx->r10 = ADD32(ctx->r29, 0XA4);
    // 0x150E1378: sw          $t0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r8;
    // 0x150E137C: sw          $t1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r9;
    // 0x150E1380: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
    // 0x150E1384: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x150E1388: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x150E138C: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x150E1390: jal         0x15145CD0
    // 0x150E1394: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_15145CD0(rdram, ctx);
        goto after_1;
    // 0x150E1394: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x150E1398: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x150E139C: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x150E13A0: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150E13A4: lwc1        $f18, 0xE8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x150E13A8: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150E13AC: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x150E13B0: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150E13B4: sub.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150E13B8: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x150E13BC: lui         $at, 0x43B2
    ctx->r1 = S32(0X43B2 << 16);
    // 0x150E13C0: sub.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150E13C4: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150E13C8: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x150E13CC: lui         $at, 0x4343
    ctx->r1 = S32(0X4343 << 16);
    // 0x150E13D0: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x150E13D4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150E13D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E13DC: lwc1        $f26, 0x1020($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X1020);
    // 0x150E13E0: lui         $at, 0x4325
    ctx->r1 = S32(0X4325 << 16);
    // 0x150E13E4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150E13E8: addiu       $s6, $sp, 0xB0
    ctx->r22 = ADD32(ctx->r29, 0XB0);
    // 0x150E13EC: addiu       $s5, $sp, 0xB4
    ctx->r21 = ADD32(ctx->r29, 0XB4);
    // 0x150E13F0: addiu       $s4, $zero, 0x11
    ctx->r20 = ADD32(0, 0X11);
    // 0x150E13F4: addiu       $s3, $zero, -0xC1
    ctx->r19 = ADD32(0, -0XC1);
    // 0x150E13F8: lw          $t3, 0x10C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10C);
L_150E13FC:
    // 0x150E13FC: and         $t4, $t3, $s3
    ctx->r12 = ctx->r11 & ctx->r19;
    // 0x150E1400: jal         0x150ADA20
    // 0x150E1404: sw          $t4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150E1404: sw          $t4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r12;
    after_2:
    // 0x150E1408: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x150E140C: beq         $t5, $zero, L_150E141C
    if (ctx->r13 == 0) {
        // 0x150E1410: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150E141C;
    }
    // 0x150E1410: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150E1414: b           L_150E141C
    // 0x150E1418: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
        goto L_150E141C;
    // 0x150E1418: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
L_150E141C:
    // 0x150E141C: jal         0x150ADA20
    // 0x150E1420: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150E1420: nop

    after_3:
    // 0x150E1424: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x150E1428: beq         $t6, $zero, L_150E1438
    if (ctx->r14 == 0) {
        // 0x150E142C: lw          $t7, 0x10C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X10C);
            goto L_150E1438;
    }
    // 0x150E142C: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
    // 0x150E1430: b           L_150E143C
    // 0x150E1434: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_150E143C;
    // 0x150E1434: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_150E1438:
    // 0x150E1438: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E143C:
    // 0x150E143C: or          $t8, $v0, $s0
    ctx->r24 = ctx->r2 | ctx->r16;
    // 0x150E1440: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x150E1444: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150E1448: sw          $t9, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r25;
    // 0x150E144C: swc1        $f22, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f22.u32l;
    // 0x150E1450: swc1        $f22, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f22.u32l;
    // 0x150E1454: swc1        $f22, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f22.u32l;
    // 0x150E1458: jal         0x150ADA20
    // 0x150E145C: sb          $t0, 0xCF($sp)
    MEM_B(0XCF, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150E145C: sb          $t0, 0xCF($sp)
    MEM_B(0XCF, ctx->r29) = ctx->r8;
    after_4:
    // 0x150E1460: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x150E1464: mfhi        $t1
    ctx->r9 = hi;
    // 0x150E1468: addiu       $t2, $t1, 0x32
    ctx->r10 = ADD32(ctx->r9, 0X32);
    // 0x150E146C: bne         $s4, $zero, L_150E1478
    if (ctx->r20 != 0) {
        // 0x150E1470: nop
    
            goto L_150E1478;
    }
    // 0x150E1470: nop

    // 0x150E1474: break       7
    do_break(353244276);
L_150E1478:
    // 0x150E1478: sh          $t2, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r10;
    // 0x150E147C: jal         0x150ADA68
    // 0x150E1480: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150E1480: nop

    after_5:
    // 0x150E1484: mul.s       $f16, $f0, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150E1488: add.s       $f2, $f16, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x150E148C: swc1        $f2, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f2.u32l;
    // 0x150E1490: jal         0x150ADA68
    // 0x150E1494: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150E1494: swc1        $f2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x150E1498: mul.s       $f18, $f0, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150E149C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E14A0: lwc1        $f8, 0x1024($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1024);
    // 0x150E14A4: lwc1        $f4, 0xA4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x150E14A8: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150E14AC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x150E14B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150E14B4: add.s       $f6, $f18, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f30.fl;
    // 0x150E14B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150E14BC: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150E14C0: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x150E14C4: mul.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150E14C8: nop

    // 0x150E14CC: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x150E14D0: nop

    // 0x150E14D4: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x150E14D8: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x150E14DC: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    // 0x150E14E0: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x150E14E4: lbu         $t3, 0x1($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X1);
    // 0x150E14E8: lbu         $a3, 0xC($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0XC);
    // 0x150E14EC: jal         0x15130374
    // 0x150E14F0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_15130374(rdram, ctx);
        goto after_7;
    // 0x150E14F0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_7:
    // 0x150E14F4: beq         $v0, $zero, L_150E1508
    if (ctx->r2 == 0) {
        // 0x150E14F8: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150E1508;
    }
    // 0x150E14F8: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150E14FC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x150E1500: jal         0x10022EC0
    // 0x150E1504: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x150E1504: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_8:
L_150E1508:
    // 0x150E1508: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E150C: sub.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x150E1510: swc1        $f10, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f10.u32l;
    // 0x150E1514: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x150E1518: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x150E151C: nop

    // 0x150E1520: bc1tl       L_150E13FC
    if (c1cs) {
        // 0x150E1524: lw          $t3, 0x10C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X10C);
            goto L_150E13FC;
    }
    goto skip_1;
    // 0x150E1524: lw          $t3, 0x10C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10C);
    skip_1:
L_150E1528:
    // 0x150E1528: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
L_150E152C:
    // 0x150E152C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150E1530: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150E1534: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150E1538: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150E153C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x150E1540: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x150E1544: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x150E1548: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x150E154C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x150E1550: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x150E1554: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x150E1558: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x150E155C: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x150E1560: jr          $ra
    // 0x150E1564: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    return;
    return;
    // 0x150E1564: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
;}
RECOMP_FUNC void func_1506F05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506F05C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506F060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506F064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506F068: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506F06C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506F070: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x1506F074: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1506F078: jal         0x151925C4
    // 0x1506F07C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_151925C4(rdram, ctx);
        goto after_0;
    // 0x1506F07C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1506F080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506F084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506F088: jr          $ra
    // 0x1506F08C: nop

    return;
    return;
    // 0x1506F08C: nop

;}
RECOMP_FUNC void func_150081E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150081E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150081E8: sw          $zero, 0x3668($at)
    MEM_W(0X3668, ctx->r1) = 0;
    // 0x150081EC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150081F0: sw          $zero, -0x4200($at)
    MEM_W(-0X4200, ctx->r1) = 0;
    // 0x150081F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150081F8: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150081FC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x15008200: sw          $zero, -0x229C($at)
    MEM_W(-0X229C, ctx->r1) = 0;
    // 0x15008204: addiu       $v0, $v0, -0x830
    ctx->r2 = ADD32(ctx->r2, -0X830);
    // 0x15008208: addiu       $v1, $v1, -0x838
    ctx->r3 = ADD32(ctx->r3, -0X838);
L_1500820C:
    // 0x1500820C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15008210: bne         $v1, $v0, L_1500820C
    if (ctx->r3 != ctx->r2) {
        // 0x15008214: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_1500820C;
    }
    // 0x15008214: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x15008218: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1500821C: sw          $zero, 0x245C($at)
    MEM_W(0X245C, ctx->r1) = 0;
    // 0x15008220: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15008224: sw          $zero, 0x2548($at)
    MEM_W(0X2548, ctx->r1) = 0;
    // 0x15008228: jr          $ra
    // 0x1500822C: nop

    return;
    return;
    // 0x1500822C: nop

;}
RECOMP_FUNC void func_150832AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150832AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x150832B0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x150832B4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x150832B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150832BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x150832C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x150832C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x150832C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150832CC: lw          $v1, 0x144($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X144);
    // 0x150832D0: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x150832D4: addiu       $s2, $s2, 0x2FA0
    ctx->r18 = ADD32(ctx->r18, 0X2FA0);
    // 0x150832D8: beql        $v1, $zero, L_15083368
    if (ctx->r3 == 0) {
        // 0x150832DC: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_15083368;
    }
    goto skip_0;
    // 0x150832DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x150832E0: lbu         $a0, 0x2F($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2F);
    // 0x150832E4: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x150832E8: bne         $a0, $zero, L_1508330C
    if (ctx->r4 != 0) {
        // 0x150832EC: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_1508330C;
    }
    // 0x150832EC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150832F0: lbu         $t6, 0x127($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X127);
    // 0x150832F4: bne         $t6, $zero, L_15083304
    if (ctx->r14 != 0) {
        // 0x150832F8: nop
    
            goto L_15083304;
    }
    // 0x150832F8: nop

    // 0x150832FC: b           L_1508330C
    // 0x15083300: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
        goto L_1508330C;
    // 0x15083300: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
L_15083304:
    // 0x15083304: b           L_1508330C
    // 0x15083308: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
        goto L_1508330C;
    // 0x15083308: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_1508330C:
    // 0x1508330C: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x15083310: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x15083314: bltzl       $t7, L_15083344
    if (SIGNED(ctx->r15) < 0) {
        // 0x15083318: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_15083344;
    }
    goto skip_1;
    // 0x15083318: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    skip_1:
L_1508331C:
    // 0x1508331C: jal         0x1515D480
    // 0x15083320: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_1515D480(rdram, ctx);
        goto after_0;
    // 0x15083320: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x15083324: sw          $v0, 0x304($s0)
    MEM_W(0X304, ctx->r16) = ctx->r2;
    // 0x15083328: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x1508332C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x15083330: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x15083334: slt         $at, $t8, $s1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x15083338: beq         $at, $zero, L_1508331C
    if (ctx->r1 == 0) {
        // 0x1508333C: nop
    
            goto L_1508331C;
    }
    // 0x1508333C: nop

    // 0x15083340: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
L_15083344:
    // 0x15083344: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x15083348: lw          $t1, 0x300($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X300);
    // 0x1508334C: beq         $t1, $zero, L_15083358
    if (ctx->r9 == 0) {
        // 0x15083350: nop
    
            goto L_15083358;
    }
    // 0x15083350: nop

    // 0x15083354: sb          $s3, 0x301($s4)
    MEM_B(0X301, ctx->r20) = ctx->r19;
L_15083358:
    // 0x15083358: jal         0x1515D440
    // 0x1508335C: nop

    func_1515D440(rdram, ctx);
        goto after_1;
    // 0x1508335C: nop

    after_1:
    // 0x15083360: sw          $v0, 0x314($s4)
    MEM_W(0X314, ctx->r20) = ctx->r2;
    // 0x15083364: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_15083368:
    // 0x15083368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1508336C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15083370: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15083374: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15083378: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1508337C: jr          $ra
    // 0x15083380: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15083380: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15141F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141F78: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15141F7C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x15141F80: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15141F84: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15141F88: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x15141F8C: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x15141F90: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x15141F94: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x15141F98: lui         $t7, 0x6
    ctx->r15 = S32(0X6 << 16);
    // 0x15141F9C: ori         $t7, $t7, 0xF701
    ctx->r15 = ctx->r15 | 0XF701;
    // 0x15141FA0: sb          $a0, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r4;
    // 0x15141FA4: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x15141FA8: jal         0x150ADA20
    // 0x15141FAC: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15141FAC: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    after_0:
    // 0x15141FB0: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x15141FB4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15141FB8: mfhi        $t8
    ctx->r24 = hi;
    // 0x15141FBC: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x15141FC0: sh          $t9, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r25;
    // 0x15141FC4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x15141FC8: jal         0x150ADA20
    // 0x15141FCC: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15141FCC: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    after_1:
    // 0x15141FD0: andi        $t0, $v0, 0x7F
    ctx->r8 = ctx->r2 & 0X7F;
    // 0x15141FD4: addiu       $t1, $t0, 0x80
    ctx->r9 = ADD32(ctx->r8, 0X80);
    // 0x15141FD8: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x15141FDC: lui         $t7, 0x3B
    ctx->r15 = S32(0X3B << 16);
    // 0x15141FE0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15141FE4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15141FE8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15141FEC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15141FF0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15141FF4: ori         $t7, $t7, 0x2
    ctx->r15 = ctx->r15 | 0X2;
    // 0x15141FF8: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x15141FFC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15142000: sb          $t1, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r9;
    // 0x15142004: sb          $t2, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r10;
    // 0x15142008: sb          $t3, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r11;
    // 0x1514200C: sb          $t4, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r12;
    // 0x15142010: sb          $t5, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r13;
    // 0x15142014: sb          $t6, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r14;
    // 0x15142018: sw          $t7, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r15;
    // 0x1514201C: sb          $zero, 0x66($sp)
    MEM_B(0X66, ctx->r29) = 0;
    // 0x15142020: sb          $t8, 0x67($sp)
    MEM_B(0X67, ctx->r29) = ctx->r24;
    // 0x15142024: sb          $t9, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r25;
    // 0x15142028: lw          $t1, 0x18($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X18);
    // 0x1514202C: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x15142030: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x15142034: sh          $t2, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r10;
    // 0x15142038: sh          $t3, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r11;
    // 0x1514203C: jal         0x150ADA68
    // 0x15142040: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x15142040: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    after_2:
    // 0x15142044: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x15142048: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514204C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x15142050: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15142054: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15142058: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1514205C: lbu         $t4, 0x8F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X8F);
    // 0x15142060: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x15142064: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15142068: lw          $v1, 0x88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X88);
    // 0x1514206C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x15142070: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15142074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15142078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1514207C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x15142080: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15142084: bne         $t4, $at, L_15142094
    if (ctx->r12 != ctx->r1) {
        // 0x15142088: addiu       $a3, $t5, 0x4
        ctx->r7 = ADD32(ctx->r13, 0X4);
            goto L_15142094;
    }
    // 0x15142088: addiu       $a3, $t5, 0x4
    ctx->r7 = ADD32(ctx->r13, 0X4);
    // 0x1514208C: b           L_15142098
    // 0x15142090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15142098;
    // 0x15142090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15142094:
    // 0x15142094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15142098:
    // 0x15142098: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1514209C: lbu         $t6, 0x87($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X87);
    // 0x151420A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151420A4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x151420A8: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x151420AC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151420B0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151420B4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x151420B8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151420BC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x151420C0: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x151420C4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151420C8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x151420CC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x151420D0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x151420D4: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x151420D8: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x151420DC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x151420E0: jal         0x1513C650
    // 0x151420E4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_1513C650(rdram, ctx);
        goto after_3;
    // 0x151420E4: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x151420E8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151420EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x151420F0: jr          $ra
    // 0x151420F4: nop

    return;
    return;
    // 0x151420F4: nop

;}
RECOMP_FUNC void func_150D4CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D4CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150D4CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150D4CCC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150D4CD0: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x150D4CD4: lh          $t6, 0x170($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X170);
    // 0x150D4CD8: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x150D4CDC: sh          $t8, 0x170($a0)
    MEM_H(0X170, ctx->r4) = ctx->r24;
    // 0x150D4CE0: lh          $t9, 0x170($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X170);
    // 0x150D4CE4: bgezl       $t9, L_150D4D28
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150D4CE8: addiu       $v1, $a0, 0x110
        ctx->r3 = ADD32(ctx->r4, 0X110);
            goto L_150D4D28;
    }
    goto skip_0;
    // 0x150D4CE8: addiu       $v1, $a0, 0x110
    ctx->r3 = ADD32(ctx->r4, 0X110);
    skip_0:
    // 0x150D4CEC: jal         0x150ADA20
    // 0x150D4CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150D4CF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150D4CF4: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x150D4CF8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x150D4CFC: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x150D4D00: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x150D4D04: lw          $t2, 0x9C0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X9C0);
    // 0x150D4D08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150D4D0C: jal         0x150ADA20
    // 0x150D4D10: sb          $t2, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150D4D10: sb          $t2, 0x18($a0)
    MEM_B(0X18, ctx->r4) = ctx->r10;
    after_1:
    // 0x150D4D14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150D4D18: andi        $t3, $v0, 0x7
    ctx->r11 = ctx->r2 & 0X7;
    // 0x150D4D1C: addiu       $t4, $t3, 0x3
    ctx->r12 = ADD32(ctx->r11, 0X3);
    // 0x150D4D20: sh          $t4, 0x170($a0)
    MEM_H(0X170, ctx->r4) = ctx->r12;
    // 0x150D4D24: addiu       $v1, $a0, 0x110
    ctx->r3 = ADD32(ctx->r4, 0X110);
L_150D4D28:
    // 0x150D4D28: lwc1        $f0, 0x48($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X48);
    // 0x150D4D2C: lwc1        $f4, 0x174($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X174);
    // 0x150D4D30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D4D34: lwc1        $f8, 0xA14($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XA14);
    // 0x150D4D38: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x150D4D3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150D4D40: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150D4D44: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150D4D48: swc1        $f16, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f16.u32l;
    // 0x150D4D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150D4D50: jr          $ra
    // 0x150D4D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x150D4D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1513F4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513F4E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513F4E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513F4EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1513F4F0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1513F4F4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1513F4F8: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x1513F4FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1513F500: jal         0x15143044
    // 0x1513F504: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_15143044(rdram, ctx);
        goto after_0;
    // 0x1513F504: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x1513F508: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1513F50C: lh          $t6, -0x2E42($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2E42);
    // 0x1513F510: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1513F514: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x1513F518: beq         $v0, $t6, L_1513F66C
    if (ctx->r2 == ctx->r14) {
        // 0x1513F51C: lui         $t1, 0x800A
        ctx->r9 = S32(0X800A << 16);
            goto L_1513F66C;
    }
    // 0x1513F51C: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x1513F520: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x1513F524: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1513F528: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x1513F52C: bne         $t7, $at, L_1513F548
    if (ctx->r15 != ctx->r1) {
        // 0x1513F530: addiu       $t1, $t1, 0x4BA8
        ctx->r9 = ADD32(ctx->r9, 0X4BA8);
            goto L_1513F548;
    }
    // 0x1513F530: addiu       $t1, $t1, 0x4BA8
    ctx->r9 = ADD32(ctx->r9, 0X4BA8);
    // 0x1513F534: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x1513F538: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x1513F53C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x1513F540: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1513F544: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_1513F548:
    // 0x1513F548: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x1513F54C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x1513F550: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1513F554: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x1513F558: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x1513F55C: lbu         $t4, 0x8($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X8);
    // 0x1513F560: lbu         $t2, 0xA($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XA);
    // 0x1513F564: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x1513F568: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x1513F56C: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x1513F570: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x1513F574: or          $t7, $t3, $t6
    ctx->r15 = ctx->r11 | ctx->r14;
    // 0x1513F578: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x1513F57C: lbu         $t2, 0x2($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X2);
    // 0x1513F580: sll         $t0, $t9, 20
    ctx->r8 = S32(ctx->r25 << 20);
    // 0x1513F584: lbu         $t6, 0x4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X4);
    // 0x1513F588: or          $t1, $t7, $t0
    ctx->r9 = ctx->r15 | ctx->r8;
    // 0x1513F58C: lbu         $t0, 0x6($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X6);
    // 0x1513F590: andi        $t4, $t2, 0x1F
    ctx->r12 = ctx->r10 & 0X1F;
    // 0x1513F594: sll         $t5, $t4, 15
    ctx->r13 = S32(ctx->r12 << 15);
    // 0x1513F598: andi        $t8, $t6, 0x7
    ctx->r24 = ctx->r14 & 0X7;
    // 0x1513F59C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x1513F5A0: or          $t3, $t1, $t5
    ctx->r11 = ctx->r9 | ctx->r13;
    // 0x1513F5A4: andi        $t2, $t0, 0x7
    ctx->r10 = ctx->r8 & 0X7;
    // 0x1513F5A8: sll         $t4, $t2, 9
    ctx->r12 = S32(ctx->r10 << 9);
    // 0x1513F5AC: or          $t7, $t3, $t9
    ctx->r15 = ctx->r11 | ctx->r25;
    // 0x1513F5B0: or          $t1, $t7, $t4
    ctx->r9 = ctx->r15 | ctx->r12;
    // 0x1513F5B4: and         $t5, $t1, $at
    ctx->r13 = ctx->r9 & ctx->r1;
    // 0x1513F5B8: lui         $at, 0xFC00
    ctx->r1 = S32(0XFC00 << 16);
    // 0x1513F5BC: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x1513F5C0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1513F5C4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x1513F5C8: lbu         $t9, 0x9($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X9);
    // 0x1513F5CC: lbu         $t8, 0xF($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XF);
    // 0x1513F5D0: lbu         $t4, 0xC($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XC);
    // 0x1513F5D4: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x1513F5D8: sll         $t2, $t0, 24
    ctx->r10 = S32(ctx->r8 << 24);
    // 0x1513F5DC: andi        $t3, $t8, 0x7
    ctx->r11 = ctx->r24 & 0X7;
    // 0x1513F5E0: or          $t7, $t3, $t2
    ctx->r15 = ctx->r11 | ctx->r10;
    // 0x1513F5E4: andi        $t1, $t4, 0x7
    ctx->r9 = ctx->r12 & 0X7;
    // 0x1513F5E8: lbu         $t2, 0xB($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XB);
    // 0x1513F5EC: lbu         $t8, 0xE($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XE);
    // 0x1513F5F0: sll         $t5, $t1, 21
    ctx->r13 = S32(ctx->r9 << 21);
    // 0x1513F5F4: or          $t6, $t7, $t5
    ctx->r14 = ctx->r15 | ctx->r13;
    // 0x1513F5F8: lbu         $t5, 0xD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XD);
    // 0x1513F5FC: andi        $t4, $t2, 0x7
    ctx->r12 = ctx->r10 & 0X7;
    // 0x1513F600: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x1513F604: sll         $t0, $t9, 18
    ctx->r8 = S32(ctx->r25 << 18);
    // 0x1513F608: lbu         $t2, 0x1($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1);
    // 0x1513F60C: or          $t3, $t6, $t0
    ctx->r11 = ctx->r14 | ctx->r8;
    // 0x1513F610: sll         $t1, $t4, 6
    ctx->r9 = S32(ctx->r12 << 6);
    // 0x1513F614: andi        $t8, $t5, 0x7
    ctx->r24 = ctx->r13 & 0X7;
    // 0x1513F618: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x1513F61C: or          $t7, $t3, $t1
    ctx->r15 = ctx->r11 | ctx->r9;
    // 0x1513F620: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x1513F624: lbu         $t1, 0x3($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X3);
    // 0x1513F628: sll         $t4, $t2, 28
    ctx->r12 = S32(ctx->r10 << 28);
    // 0x1513F62C: lbu         $t9, 0x5($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X5);
    // 0x1513F630: or          $t3, $t6, $t4
    ctx->r11 = ctx->r14 | ctx->r12;
    // 0x1513F634: lbu         $t4, 0x7($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X7);
    // 0x1513F638: andi        $t5, $t1, 0x7
    ctx->r13 = ctx->r9 & 0X7;
    // 0x1513F63C: sll         $t8, $t5, 15
    ctx->r24 = S32(ctx->r13 << 15);
    // 0x1513F640: andi        $t0, $t9, 0x7
    ctx->r8 = ctx->r25 & 0X7;
    // 0x1513F644: sll         $t2, $t0, 12
    ctx->r10 = S32(ctx->r8 << 12);
    // 0x1513F648: or          $t7, $t3, $t8
    ctx->r15 = ctx->r11 | ctx->r24;
    // 0x1513F64C: andi        $t1, $t4, 0x7
    ctx->r9 = ctx->r12 & 0X7;
    // 0x1513F650: sll         $t5, $t1, 9
    ctx->r13 = S32(ctx->r9 << 9);
    // 0x1513F654: or          $t6, $t7, $t2
    ctx->r14 = ctx->r15 | ctx->r10;
    // 0x1513F658: or          $t3, $t6, $t5
    ctx->r11 = ctx->r14 | ctx->r13;
    // 0x1513F65C: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x1513F660: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x1513F664: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1513F668: sh          $v0, -0x2E42($at)
    MEM_H(-0X2E42, ctx->r1) = ctx->r2;
L_1513F66C:
    // 0x1513F66C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x1513F670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513F674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1513F678: jr          $ra
    // 0x1513F67C: nop

    return;
    return;
    // 0x1513F67C: nop

;}
RECOMP_FUNC void func_1509F33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509F33C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1509F340: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1509F344: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1509F348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1509F34C: jr          $ra
    // 0x1509F350: nop

    return;
    return;
    // 0x1509F350: nop

;}
RECOMP_FUNC void func_150D9C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D9C7C: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x150D9C80: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x150D9C84: sll         $s0, $a2, 16
    ctx->r16 = S32(ctx->r6 << 16);
    // 0x150D9C88: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x150D9C8C: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x150D9C90: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x150D9C94: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x150D9C98: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x150D9C9C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x150D9CA0: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x150D9CA4: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x150D9CA8: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x150D9CAC: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x150D9CB0: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x150D9CB4: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x150D9CB8: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x150D9CBC: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x150D9CC0: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x150D9CC4: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x150D9CC8: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x150D9CCC: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x150D9CD0: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x150D9CD4: sw          $a2, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r6;
    // 0x150D9CD8: lb          $t7, 0x2C($s5)
    ctx->r15 = MEM_B(ctx->r21, 0X2C);
    // 0x150D9CDC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x150D9CE0: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150D9CE4: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x150D9CE8: beq         $at, $zero, L_150D9CF8
    if (ctx->r1 == 0) {
        // 0x150D9CEC: addiu       $a0, $s5, 0x84
        ctx->r4 = ADD32(ctx->r21, 0X84);
            goto L_150D9CF8;
    }
    // 0x150D9CEC: addiu       $a0, $s5, 0x84
    ctx->r4 = ADD32(ctx->r21, 0X84);
    // 0x150D9CF0: b           L_150DA43C
    // 0x150D9CF4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_150DA43C;
    // 0x150D9CF4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_150D9CF8:
    // 0x150D9CF8: lbu         $t9, 0x25($s5)
    ctx->r25 = MEM_BU(ctx->r21, 0X25);
    // 0x150D9CFC: lw          $s1, 0x98($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X98);
    // 0x150D9D00: lw          $s6, 0x94($s5)
    ctx->r22 = MEM_W(ctx->r21, 0X94);
    // 0x150D9D04: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x150D9D08: addiu       $a2, $t0, 0xA0
    ctx->r6 = ADD32(ctx->r8, 0XA0);
    // 0x150D9D0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150D9D10: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x150D9D14: jal         0x151D5D60
    // 0x150D9D18: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x150D9D18: addiu       $a3, $sp, 0xBC
    ctx->r7 = ADD32(ctx->r29, 0XBC);
    after_0:
    // 0x150D9D1C: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
    // 0x150D9D20: bne         $a0, $zero, L_150D9D30
    if (ctx->r4 != 0) {
        // 0x150D9D24: nop
    
            goto L_150D9D30;
    }
    // 0x150D9D24: nop

    // 0x150D9D28: b           L_150DA43C
    // 0x150D9D2C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_150DA43C;
    // 0x150D9D2C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_150D9D30:
    // 0x150D9D30: jal         0x15144B34
    // 0x150D9D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15144B34(rdram, ctx);
        goto after_1;
    // 0x150D9D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x150D9D38: addiu       $s0, $sp, 0xCB
    ctx->r16 = ADD32(ctx->r29, 0XCB);
    // 0x150D9D3C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150D9D40: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x150D9D44: addiu       $t2, $zero, 0x92
    ctx->r10 = ADD32(0, 0X92);
    // 0x150D9D48: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150D9D4C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x150D9D50: sb          $t1, 0xCB($sp)
    MEM_B(0XCB, ctx->r29) = ctx->r9;
    // 0x150D9D54: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x150D9D58: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150D9D5C: addiu       $a1, $a1, 0x1238
    ctx->r5 = ADD32(ctx->r5, 0X1238);
    // 0x150D9D60: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x150D9D64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150D9D68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150D9D6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D9D70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150D9D74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150D9D78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150D9D7C: jal         0x15142E24
    // 0x150D9D80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15142E24(rdram, ctx);
        goto after_2;
    // 0x150D9D80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_2:
    // 0x150D9D84: lui         $a1, 0x22
    ctx->r5 = S32(0X22 << 16);
    // 0x150D9D88: lui         $a2, 0x1D
    ctx->r6 = S32(0X1D << 16);
    // 0x150D9D8C: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x150D9D90: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x150D9D94: jal         0x15142B7C
    // 0x150D9D98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15142B7C(rdram, ctx);
        goto after_3;
    // 0x150D9D98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x150D9D9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150D9DA0: addiu       $a1, $zero, 0x4E
    ctx->r5 = ADD32(0, 0X4E);
    // 0x150D9DA4: jal         0x1513F4E4
    // 0x150D9DA8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_4;
    // 0x150D9DA8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x150D9DAC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x150D9DB0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150D9DB4: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x150D9DB8: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x150D9DBC: lw          $t9, 0x1C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1C);
    // 0x150D9DC0: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x150D9DC4: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x150D9DC8: or          $t7, $a1, $at
    ctx->r15 = ctx->r5 | ctx->r1;
    // 0x150D9DCC: ori         $a1, $t7, 0x2CA0
    ctx->r5 = ctx->r15 | 0X2CA0;
    // 0x150D9DD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150D9DD4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x150D9DD8: jal         0x15142FBC
    // 0x150D9DDC: or          $a2, $t9, $t0
    ctx->r6 = ctx->r25 | ctx->r8;
    func_15142FBC(rdram, ctx);
        goto after_5;
    // 0x150D9DDC: or          $a2, $t9, $t0
    ctx->r6 = ctx->r25 | ctx->r8;
    after_5:
    // 0x150D9DE0: lhu         $t1, 0x1E($s5)
    ctx->r9 = MEM_HU(ctx->r21, 0X1E);
    // 0x150D9DE4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x150D9DE8: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x150D9DEC: beql        $t2, $zero, L_150D9E38
    if (ctx->r10 == 0) {
        // 0x150D9DF0: lb          $v1, 0x2E($s5)
        ctx->r3 = MEM_B(ctx->r21, 0X2E);
            goto L_150D9E38;
    }
    goto skip_0;
    // 0x150D9DF0: lb          $v1, 0x2E($s5)
    ctx->r3 = MEM_B(ctx->r21, 0X2E);
    skip_0:
    // 0x150D9DF4: lb          $s3, 0x2E($s5)
    ctx->r19 = MEM_B(ctx->r21, 0X2E);
    // 0x150D9DF8: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x150D9DFC: bgezl       $s3, L_150D9E10
    if (SIGNED(ctx->r19) >= 0) {
        // 0x150D9E00: lw          $at, 0x10($s5)
        ctx->r1 = MEM_W(ctx->r21, 0X10);
            goto L_150D9E10;
    }
    goto skip_1;
    // 0x150D9E00: lw          $at, 0x10($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X10);
    skip_1:
    // 0x150D9E04: lbu         $s3, 0x25($s5)
    ctx->r19 = MEM_BU(ctx->r21, 0X25);
    // 0x150D9E08: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x150D9E0C: lw          $at, 0x10($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X10);
L_150D9E10:
    // 0x150D9E10: addiu       $t3, $sp, 0x104
    ctx->r11 = ADD32(ctx->r29, 0X104);
    // 0x150D9E14: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150D9E18: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
    // 0x150D9E1C: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x150D9E20: lw          $at, 0x18($s5)
    ctx->r1 = MEM_W(ctx->r21, 0X18);
    // 0x150D9E24: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150D9E28: lwc1        $f4, 0x38($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X38);
    // 0x150D9E2C: b           L_150D9E90
    // 0x150D9E30: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
        goto L_150D9E90;
    // 0x150D9E30: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x150D9E34: lb          $v1, 0x2E($s5)
    ctx->r3 = MEM_B(ctx->r21, 0X2E);
L_150D9E38:
    // 0x150D9E38: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150D9E3C: bgezl       $v1, L_150D9E50
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150D9E40: addiu       $s3, $v1, -0x1
        ctx->r19 = ADD32(ctx->r3, -0X1);
            goto L_150D9E50;
    }
    goto skip_2;
    // 0x150D9E40: addiu       $s3, $v1, -0x1
    ctx->r19 = ADD32(ctx->r3, -0X1);
    skip_2:
    // 0x150D9E44: lbu         $v1, 0x25($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X25);
    // 0x150D9E48: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150D9E4C: addiu       $s3, $v1, -0x1
    ctx->r19 = ADD32(ctx->r3, -0X1);
L_150D9E50:
    // 0x150D9E50: bgez        $s3, L_150D9E60
    if (SIGNED(ctx->r19) >= 0) {
        // 0x150D9E54: sll         $t6, $v1, 3
        ctx->r14 = S32(ctx->r3 << 3);
            goto L_150D9E60;
    }
    // 0x150D9E54: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x150D9E58: lbu         $s3, 0x25($s5)
    ctx->r19 = MEM_BU(ctx->r21, 0X25);
    // 0x150D9E5C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
L_150D9E60:
    // 0x150D9E60: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x150D9E64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150D9E68: addu        $v0, $s6, $t6
    ctx->r2 = ADD32(ctx->r22, ctx->r14);
    // 0x150D9E6C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x150D9E70: addiu       $t7, $sp, 0x104
    ctx->r15 = ADD32(ctx->r29, 0X104);
    // 0x150D9E74: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150D9E78: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x150D9E7C: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x150D9E80: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x150D9E84: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150D9E88: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x150D9E8C: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
L_150D9E90:
    // 0x150D9E90: sll         $t0, $s3, 3
    ctx->r8 = S32(ctx->r19 << 3);
    // 0x150D9E94: addu        $t0, $t0, $s3
    ctx->r8 = ADD32(ctx->r8, ctx->r19);
    // 0x150D9E98: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150D9E9C: addu        $s1, $s6, $t0
    ctx->r17 = ADD32(ctx->r22, ctx->r8);
    // 0x150D9EA0: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150D9EA4: addiu       $t1, $sp, 0x110
    ctx->r9 = ADD32(ctx->r29, 0X110);
    // 0x150D9EA8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150D9EAC: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x150D9EB0: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x150D9EB4: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150D9EB8: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150D9EBC: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x150D9EC0: lbu         $a0, 0x1C($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1C);
    // 0x150D9EC4: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x150D9EC8: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x150D9ECC: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x150D9ED0: lwc1        $f8, 0x4($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X4);
    // 0x150D9ED4: lwc1        $f6, 0x108($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150D9ED8: sub.s       $f22, $f10, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150D9EDC: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150D9EE0: sub.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150D9EE4: lwc1        $f8, 0x8($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X8);
    // 0x150D9EE8: sub.s       $f26, $f4, $f8
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150D9EEC: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x150D9EF0: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150D9EF4: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150D9EF8: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150D9EFC: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x150D9F00: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150D9F04: mul.s       $f4, $f24, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x150D9F08: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x150D9F0C: sub.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150D9F10: mul.s       $f8, $f20, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x150D9F14: nop

    // 0x150D9F18: mul.s       $f4, $f26, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x150D9F1C: nop

    // 0x150D9F20: mul.s       $f10, $f16, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x150D9F24: nop

    // 0x150D9F28: mul.s       $f6, $f22, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x150D9F2C: sub.s       $f28, $f8, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x150D9F30: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150D9F34: nop

    // 0x150D9F38: mul.s       $f4, $f28, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x150D9F3C: sub.s       $f14, $f10, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x150D9F40: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150D9F44: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x150D9F48: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150D9F4C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150D9F50: lwc1        $f6, 0x104($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X104);
    // 0x150D9F54: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x150D9F58: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x150D9F5C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x150D9F60: bc1t        L_150D9F9C
    if (c1cs) {
        // 0x150D9F64: nop
    
            goto L_150D9F9C;
    }
    // 0x150D9F64: nop

    // 0x150D9F68: sqrt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = sqrtf(ctx->f8.fl);
    // 0x150D9F6C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150D9F70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D9F74: nop

    // 0x150D9F78: div.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150D9F7C: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x150D9F80: nop

    // 0x150D9F84: mul.s       $f28, $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f12.fl);
    // 0x150D9F88: nop

    // 0x150D9F8C: mul.s       $f30, $f14, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f30.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x150D9F90: nop

    // 0x150D9F94: b           L_150D9FB0
    // 0x150D9F98: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
        goto L_150D9FB0;
    // 0x150D9F98: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
L_150D9F9C:
    // 0x150D9F9C: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x150D9FA0: nop

    // 0x150D9FA4: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
    // 0x150D9FA8: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
    // 0x150D9FAC: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
L_150D9FB0:
    // 0x150D9FB0: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150D9FB4: addiu       $s7, $zero, 0x400
    ctx->r23 = ADD32(0, 0X400);
    // 0x150D9FB8: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    // 0x150D9FBC: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D9FC0: lui         $fp, 0x100
    ctx->r30 = S32(0X100 << 16);
    // 0x150D9FC4: ori         $fp, $fp, 0x4008
    ctx->r30 = ctx->r30 | 0X4008;
    // 0x150D9FC8: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150D9FCC: nop

    // 0x150D9FD0: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x150D9FD4: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150D9FD8: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x150D9FDC: add.s       $f6, $f10, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x150D9FE0: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150D9FE4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x150D9FE8: nop

    // 0x150D9FEC: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x150D9FF0: lwc1        $f8, 0x10C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150D9FF4: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x150D9FF8: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x150D9FFC: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DA000: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x150DA004: nop

    // 0x150DA008: sh          $t2, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r10;
    // 0x150DA00C: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150DA010: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA014: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150DA018: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x150DA01C: nop

    // 0x150DA020: sh          $v0, 0x8($t5)
    MEM_H(0X8, ctx->r13) = ctx->r2;
    // 0x150DA024: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA028: sh          $s7, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r23;
    // 0x150DA02C: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA030: sb          $s0, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r16;
    // 0x150DA034: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA038: sb          $s0, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r16;
    // 0x150DA03C: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA040: sb          $s0, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r16;
    // 0x150DA044: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA048: sb          $a0, 0xF($t0)
    MEM_B(0XF, ctx->r8) = ctx->r4;
    // 0x150DA04C: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA050: sh          $zero, 0x6($t4)
    MEM_H(0X6, ctx->r12) = 0;
    // 0x150DA054: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x150DA058: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA05C: sub.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x150DA060: addiu       $t1, $t2, 0x10
    ctx->r9 = ADD32(ctx->r10, 0X10);
    // 0x150DA064: sw          $t1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r9;
    // 0x150DA068: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150DA06C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x150DA070: nop

    // 0x150DA074: sh          $t5, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r13;
    // 0x150DA078: lwc1        $f8, 0x108($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150DA07C: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA080: sub.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f28.fl;
    // 0x150DA084: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DA088: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x150DA08C: nop

    // 0x150DA090: sh          $t8, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r24;
    // 0x150DA094: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150DA098: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA09C: sub.s       $f8, $f4, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f30.fl;
    // 0x150DA0A0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DA0A4: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x150DA0A8: nop

    // 0x150DA0AC: sh          $t0, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r8;
    // 0x150DA0B0: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA0B4: sh          $v0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r2;
    // 0x150DA0B8: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA0BC: sh          $zero, 0xA($t3)
    MEM_H(0XA, ctx->r11) = 0;
    // 0x150DA0C0: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA0C4: sb          $s0, 0xC($t5)
    MEM_B(0XC, ctx->r13) = ctx->r16;
    // 0x150DA0C8: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA0CC: sb          $s0, 0xD($t1)
    MEM_B(0XD, ctx->r9) = ctx->r16;
    // 0x150DA0D0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA0D4: sb          $s0, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r16;
    // 0x150DA0D8: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA0DC: sb          $a0, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r4;
    // 0x150DA0E0: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA0E4: sh          $zero, 0x6($t7)
    MEM_H(0X6, ctx->r15) = 0;
    // 0x150DA0E8: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA0EC: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x150DA0F0: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    // 0x150DA0F4: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
L_150DA0F8:
    // 0x150DA0F8: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x150DA0FC: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x150DA100: lwc1        $f10, 0x4($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X4);
    // 0x150DA104: sub.s       $f22, $f6, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x150DA108: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150DA10C: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x150DA110: sub.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150DA114: lwc1        $f10, 0x8($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X8);
    // 0x150DA118: sub.s       $f26, $f4, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150DA11C: lwc1        $f10, 0x108($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X108);
    // 0x150DA120: sub.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x150DA124: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x150DA128: sub.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150DA12C: mul.s       $f8, $f18, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x150DA130: lwc1        $f4, 0x104($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X104);
    // 0x150DA134: mul.s       $f10, $f24, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f24.fl, ctx->f20.fl);
    // 0x150DA138: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150DA13C: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150DA140: mul.s       $f8, $f20, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x150DA144: nop

    // 0x150DA148: mul.s       $f10, $f26, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f26.fl, ctx->f16.fl);
    // 0x150DA14C: nop

    // 0x150DA150: mul.s       $f4, $f16, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x150DA154: nop

    // 0x150DA158: mul.s       $f6, $f22, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f18.fl);
    // 0x150DA15C: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150DA160: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150DA164: nop

    // 0x150DA168: mul.s       $f10, $f28, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x150DA16C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150DA170: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150DA174: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150DA178: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150DA17C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150DA180: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150DA184: c.eq.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl == ctx->f8.fl;
    // 0x150DA188: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x150DA18C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x150DA190: bc1t        L_150DA1CC
    if (c1cs) {
        // 0x150DA194: nop
    
            goto L_150DA1CC;
    }
    // 0x150DA194: nop

    // 0x150DA198: sqrt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = sqrtf(ctx->f8.fl);
    // 0x150DA19C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150DA1A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DA1A4: nop

    // 0x150DA1A8: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x150DA1AC: mul.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x150DA1B0: nop

    // 0x150DA1B4: mul.s       $f28, $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f12.fl);
    // 0x150DA1B8: nop

    // 0x150DA1BC: mul.s       $f30, $f14, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f30.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x150DA1C0: nop

    // 0x150DA1C4: b           L_150DA1E0
    // 0x150DA1C8: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
        goto L_150DA1E0;
    // 0x150DA1C8: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
L_150DA1CC:
    // 0x150DA1CC: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x150DA1D0: nop

    // 0x150DA1D4: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
    // 0x150DA1D8: mov.s       $f28, $f30
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 30);
    ctx->f28.fl = ctx->f30.fl;
    // 0x150DA1DC: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
L_150DA1E0:
    // 0x150DA1E0: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA1E4: lwc1        $f0, 0xC4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150DA1E8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DA1EC: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x150DA1F0: nop

    // 0x150DA1F4: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x150DA1F8: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x150DA1FC: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA200: add.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x150DA204: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150DA208: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x150DA20C: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150DA210: sh          $t1, 0x2($t6)
    MEM_H(0X2, ctx->r14) = ctx->r9;
    // 0x150DA214: lwc1        $f8, 0x118($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150DA218: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA21C: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x150DA220: add.s       $f4, $f8, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x150DA224: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150DA228: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x150DA22C: nop

    // 0x150DA230: sh          $t7, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r15;
    // 0x150DA234: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA238: sh          $v1, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r3;
    // 0x150DA23C: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA240: sh          $s7, 0xA($t2)
    MEM_H(0XA, ctx->r10) = ctx->r23;
    // 0x150DA244: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA248: sb          $s0, 0xC($t3)
    MEM_B(0XC, ctx->r11) = ctx->r16;
    // 0x150DA24C: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA250: sb          $s0, 0xD($t5)
    MEM_B(0XD, ctx->r13) = ctx->r16;
    // 0x150DA254: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA258: sb          $s0, 0xE($t1)
    MEM_B(0XE, ctx->r9) = ctx->r16;
    // 0x150DA25C: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA260: sb          $a0, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r4;
    // 0x150DA264: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA268: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x150DA26C: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x150DA270: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA274: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x150DA278: addiu       $t9, $t7, 0x10
    ctx->r25 = ADD32(ctx->r15, 0X10);
    // 0x150DA27C: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x150DA280: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150DA284: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x150DA288: nop

    // 0x150DA28C: sh          $t4, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r12;
    // 0x150DA290: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x150DA294: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA298: sub.s       $f8, $f10, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f28.fl;
    // 0x150DA29C: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150DA2A0: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x150DA2A4: nop

    // 0x150DA2A8: sh          $t3, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r11;
    // 0x150DA2AC: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x150DA2B0: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA2B4: sub.s       $f10, $f6, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f30.fl;
    // 0x150DA2B8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150DA2BC: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150DA2C0: nop

    // 0x150DA2C4: sh          $t6, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r14;
    // 0x150DA2C8: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA2CC: sh          $v1, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r3;
    // 0x150DA2D0: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA2D4: sh          $zero, 0xA($t0)
    MEM_H(0XA, ctx->r8) = 0;
    // 0x150DA2D8: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA2DC: lui         $t0, 0x500
    ctx->r8 = S32(0X500 << 16);
    // 0x150DA2E0: ori         $t0, $t0, 0x204
    ctx->r8 = ctx->r8 | 0X204;
    // 0x150DA2E4: sb          $s0, 0xC($t4)
    MEM_B(0XC, ctx->r12) = ctx->r16;
    // 0x150DA2E8: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA2EC: lui         $t4, 0x502
    ctx->r12 = S32(0X502 << 16);
    // 0x150DA2F0: ori         $t4, $t4, 0x604
    ctx->r12 = ctx->r12 | 0X604;
    // 0x150DA2F4: sb          $s0, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r16;
    // 0x150DA2F8: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA2FC: sb          $s0, 0xE($t2)
    MEM_B(0XE, ctx->r10) = ctx->r16;
    // 0x150DA300: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA304: sb          $a0, 0xF($t3)
    MEM_B(0XF, ctx->r11) = ctx->r4;
    // 0x150DA308: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA30C: sh          $zero, 0x6($t5)
    MEM_H(0X6, ctx->r13) = 0;
    // 0x150DA310: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA314: addiu       $t6, $t1, 0x10
    ctx->r14 = ADD32(ctx->r9, 0X10);
    // 0x150DA318: sw          $t6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r14;
    // 0x150DA31C: sw          $fp, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r30;
    // 0x150DA320: lw          $t8, 0xBC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA324: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150DA328: addiu       $t7, $t8, -0x40
    ctx->r15 = ADD32(ctx->r24, -0X40);
    // 0x150DA32C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x150DA330: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x150DA334: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x150DA338: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x150DA33C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150DA340: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x150DA344: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x150DA348: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x150DA34C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150DA350: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x150DA354: lw          $a0, 0xBC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA358: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x150DA35C: addiu       $a1, $a0, -0x20
    ctx->r5 = ADD32(ctx->r4, -0X20);
    // 0x150DA360: bc1fl       L_150DA3AC
    if (!c1cs) {
        // 0x150DA364: or          $v1, $s3, $zero
        ctx->r3 = ctx->r19 | 0;
            goto L_150DA3AC;
    }
    goto skip_3;
    // 0x150DA364: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    skip_3:
    // 0x150DA368: jal         0x10022EC0
    // 0x150DA36C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x150DA36C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_6:
    // 0x150DA370: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA374: addiu       $at, $zero, -0x8000
    ctx->r1 = ADD32(0, -0X8000);
    // 0x150DA378: lh          $t2, -0x18($t9)
    ctx->r10 = MEM_H(ctx->r25, -0X18);
    // 0x150DA37C: addu        $t3, $t2, $at
    ctx->r11 = ADD32(ctx->r10, ctx->r1);
    // 0x150DA380: sh          $t3, -0x18($t9)
    MEM_H(-0X18, ctx->r25) = ctx->r11;
    // 0x150DA384: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA388: addiu       $t1, $t5, 0x10
    ctx->r9 = ADD32(ctx->r13, 0X10);
    // 0x150DA38C: sw          $t1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r9;
    // 0x150DA390: lh          $t6, -0x18($t1)
    ctx->r14 = MEM_H(ctx->r9, -0X18);
    // 0x150DA394: addu        $t8, $t6, $at
    ctx->r24 = ADD32(ctx->r14, ctx->r1);
    // 0x150DA398: sh          $t8, -0x18($t1)
    MEM_H(-0X18, ctx->r9) = ctx->r24;
    // 0x150DA39C: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x150DA3A0: addiu       $t0, $t7, 0x10
    ctx->r8 = ADD32(ctx->r15, 0X10);
    // 0x150DA3A4: sw          $t0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r8;
    // 0x150DA3A8: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
L_150DA3AC:
    // 0x150DA3AC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x150DA3B0: bgez        $s3, L_150DA3D0
    if (SIGNED(ctx->r19) >= 0) {
        // 0x150DA3B4: addiu       $s1, $s1, -0x24
        ctx->r17 = ADD32(ctx->r17, -0X24);
            goto L_150DA3D0;
    }
    // 0x150DA3B4: addiu       $s1, $s1, -0x24
    ctx->r17 = ADD32(ctx->r17, -0X24);
    // 0x150DA3B8: lbu         $s3, 0x25($s5)
    ctx->r19 = MEM_BU(ctx->r21, 0X25);
    // 0x150DA3BC: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x150DA3C0: sll         $t4, $s3, 3
    ctx->r12 = S32(ctx->r19 << 3);
    // 0x150DA3C4: addu        $t4, $t4, $s3
    ctx->r12 = ADD32(ctx->r12, ctx->r19);
    // 0x150DA3C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150DA3CC: addu        $s1, $s6, $t4
    ctx->r17 = ADD32(ctx->r22, ctx->r12);
L_150DA3D0:
    // 0x150DA3D0: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x150DA3D4: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x150DA3D8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150DA3DC: addu        $v0, $s6, $t2
    ctx->r2 = ADD32(ctx->r22, ctx->r10);
    // 0x150DA3E0: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x150DA3E4: addiu       $t3, $sp, 0x104
    ctx->r11 = ADD32(ctx->r29, 0X104);
    // 0x150DA3E8: addiu       $t6, $sp, 0x110
    ctx->r14 = ADD32(ctx->r29, 0X110);
    // 0x150DA3EC: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150DA3F0: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x150DA3F4: sw          $t5, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r13;
    // 0x150DA3F8: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x150DA3FC: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150DA400: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150DA404: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150DA408: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x150DA40C: sw          $t1, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r9;
    // 0x150DA410: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150DA414: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150DA418: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x150DA41C: lbu         $a0, 0x1C($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1C);
    // 0x150DA420: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x150DA424: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x150DA428: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x150DA42C: lb          $t7, 0x2D($s5)
    ctx->r15 = MEM_B(ctx->r21, 0X2D);
    // 0x150DA430: bnel        $v1, $t7, L_150DA0F8
    if (ctx->r3 != ctx->r15) {
        // 0x150DA434: lwc1        $f6, 0x110($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
            goto L_150DA0F8;
    }
    goto skip_4;
    // 0x150DA434: lwc1        $f6, 0x110($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X110);
    skip_4:
    // 0x150DA438: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_150DA43C:
    // 0x150DA43C: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x150DA440: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x150DA444: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x150DA448: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x150DA44C: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x150DA450: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x150DA454: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x150DA458: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x150DA45C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x150DA460: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x150DA464: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x150DA468: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x150DA46C: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x150DA470: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x150DA474: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x150DA478: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x150DA47C: jr          $ra
    // 0x150DA480: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x150DA480: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_150F5590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F5590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F5594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F5598: lh          $t6, 0x24($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X24);
    // 0x150F559C: addiu       $t8, $zero, 0x1000
    ctx->r24 = ADD32(0, 0X1000);
    // 0x150F55A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150F55A4: subu        $v0, $t8, $t7
    ctx->r2 = SUB32(ctx->r24, ctx->r15);
    // 0x150F55A8: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x150F55AC: lh          $t9, 0x38($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X38);
    // 0x150F55B0: jal         0x150F55C8
    // 0x150F55B4: sh          $t9, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r25;
    func_150F55C8(rdram, ctx);
        goto after_0;
    // 0x150F55B4: sh          $t9, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r25;
    after_0:
    // 0x150F55B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F55BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F55C0: jr          $ra
    // 0x150F55C4: nop

    return;
    return;
    // 0x150F55C4: nop

;}
RECOMP_FUNC void func_150FEC28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FEC28: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150FEC2C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150FEC30: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x150FEC34: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x150FEC38: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x150FEC3C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x150FEC40: jal         0x150ADA68
    // 0x150FEC44: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150FEC44: nop

    after_0:
    // 0x150FEC48: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FEC4C: lwc1        $f4, 0x203C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X203C);
    // 0x150FEC50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FEC54: lwc1        $f8, 0x2040($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2040);
    // 0x150FEC58: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150FEC5C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FEC60: jal         0x150ADA68
    // 0x150FEC64: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150FEC64: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x150FEC68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FEC6C: lwc1        $f16, 0x2044($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2044);
    // 0x150FEC70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FEC74: lwc1        $f4, 0x2048($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2048);
    // 0x150FEC78: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150FEC7C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150FEC80: jal         0x150ADA20
    // 0x150FEC84: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150FEC84: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x150FEC88: jal         0x150ADA20
    // 0x150FEC8C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150FEC8C: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_3:
    // 0x150FEC90: jal         0x150ADA68
    // 0x150FEC94: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150FEC94: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_4:
    // 0x150FEC98: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x150FEC9C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FECA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FECA4: lwc1        $f16, 0x204C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X204C);
    // 0x150FECA8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150FECAC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x150FECB0: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x150FECB4: lbu         $t4, 0x6F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X6F);
    // 0x150FECB8: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x150FECBC: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x150FECC0: addiu       $t9, $t8, 0x6
    ctx->r25 = ADD32(ctx->r24, 0X6);
    // 0x150FECC4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150FECC8: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x150FECCC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150FECD0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150FECD4: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150FECD8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x150FECDC: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150FECE0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150FECE4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FECE8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x150FECEC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150FECF0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x150FECF4: lbu         $a1, 0x5F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5F);
    // 0x150FECF8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x150FECFC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x150FED00: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FED04: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x150FED08: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x150FED0C: jal         0x15102B38
    // 0x150FED10: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    func_15102B38(rdram, ctx);
        goto after_5;
    // 0x150FED10: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    after_5:
    // 0x150FED14: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x150FED18: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150FED1C: jr          $ra
    // 0x150FED20: nop

    return;
    return;
    // 0x150FED20: nop

;}
RECOMP_FUNC void func_15011D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15011D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15011D44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15011D48: jal         0x15103800
    // 0x15011D4C: nop

    func_15103800(rdram, ctx);
        goto after_0;
    // 0x15011D4C: nop

    after_0:
    // 0x15011D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15011D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15011D58: jr          $ra
    // 0x15011D5C: nop

    return;
    return;
    // 0x15011D5C: nop

;}
RECOMP_FUNC void func_15136A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15136A1C: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x15136A20: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x15136A24: beql        $at, $zero, L_15136A48
    if (ctx->r1 == 0) {
        // 0x15136A28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15136A48;
    }
    goto skip_0;
    // 0x15136A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15136A2C: lbu         $t6, 0x28($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X28);
    // 0x15136A30: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x15136A34: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15136A38: beql        $at, $zero, L_15136A48
    if (ctx->r1 == 0) {
        // 0x15136A3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15136A48;
    }
    goto skip_1;
    // 0x15136A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x15136A40: sb          $v1, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r3;
    // 0x15136A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15136A48:
    // 0x15136A48: jr          $ra
    // 0x15136A4C: nop

    return;
    return;
    // 0x15136A4C: nop

;}
RECOMP_FUNC void func_1507A47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A47C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507A480: lbu         $t7, 0x1890($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1890);
    // 0x1507A484: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1507A488: lbu         $t0, 0x1891($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1891);
    // 0x1507A48C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1507A490: lbu         $t4, 0x1892($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X1892);
    // 0x1507A494: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507A498: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x1507A49C: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x1507A4A0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507A4A4: lbu         $t9, 0x1893($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X1893);
    // 0x1507A4A8: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x1507A4AC: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x1507A4B0: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x1507A4B4: lw          $t0, 0x94($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X94);
    // 0x1507A4B8: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x1507A4BC: or          $v0, $t6, $t9
    ctx->r2 = ctx->r14 | ctx->r25;
    // 0x1507A4C0: nor         $t8, $v0, $zero
    ctx->r24 = ~(ctx->r2 | 0);
    // 0x1507A4C4: and         $t1, $t0, $t8
    ctx->r9 = ctx->r8 & ctx->r24;
    // 0x1507A4C8: sw          $t1, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->r9;
    // 0x1507A4CC: jr          $ra
    // 0x1507A4D0: nop

    return;
    return;
    // 0x1507A4D0: nop

;}
RECOMP_FUNC void func_1502C408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502C408: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x1502C40C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x1502C410: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1502C414: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1502C418: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1502C41C: lbu         $t6, -0x1540($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1540);
    // 0x1502C420: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x1502C424: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1502C428: beq         $t6, $zero, L_1502C438
    if (ctx->r14 == 0) {
        // 0x1502C42C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_1502C438;
    }
    // 0x1502C42C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502C430: b           L_1502C5F4
    // 0x1502C434: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1502C5F4;
    // 0x1502C434: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502C438:
    // 0x1502C438: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x1502C43C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502C440: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1502C444: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502C448: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x1502C44C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1502C450: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x1502C454: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1502C458: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x1502C45C: lbu         $t2, 0x7($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X7);
    // 0x1502C460: lbu         $v1, 0x122($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X122);
    // 0x1502C464: lh          $a2, 0x60($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X60);
    // 0x1502C468: bne         $t2, $zero, L_1502C478
    if (ctx->r10 != 0) {
        // 0x1502C46C: or          $t1, $v1, $zero
        ctx->r9 = ctx->r3 | 0;
            goto L_1502C478;
    }
    // 0x1502C46C: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
    // 0x1502C470: b           L_1502C5F4
    // 0x1502C474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1502C5F4;
    // 0x1502C474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1502C478:
    // 0x1502C478: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x1502C47C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x1502C480: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x1502C484: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x1502C488: subu        $t4, $v0, $v1
    ctx->r12 = SUB32(ctx->r2, ctx->r3);
    // 0x1502C48C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1502C490: bne         $t9, $at, L_1502C4A4
    if (ctx->r25 != ctx->r1) {
        // 0x1502C494: or          $t3, $t4, $zero
        ctx->r11 = ctx->r12 | 0;
            goto L_1502C4A4;
    }
    // 0x1502C494: or          $t3, $t4, $zero
    ctx->r11 = ctx->r12 | 0;
    // 0x1502C498: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x1502C49C: subu        $t4, $v0, $v1
    ctx->r12 = SUB32(ctx->r2, ctx->r3);
    // 0x1502C4A0: or          $t3, $t4, $zero
    ctx->r11 = ctx->r12 | 0;
L_1502C4A4:
    // 0x1502C4A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x1502C4A8: sh          $a2, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r6;
    // 0x1502C4AC: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x1502C4B0: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x1502C4B4: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x1502C4B8: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x1502C4BC: jal         0x1502C3BC
    // 0x1502C4C0: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    func_1502C3BC(rdram, ctx);
        goto after_0;
    // 0x1502C4C0: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    after_0:
    // 0x1502C4C4: lh          $a2, 0x5C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X5C);
    // 0x1502C4C8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x1502C4CC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x1502C4D0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x1502C4D4: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x1502C4D8: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x1502C4DC: or          $t5, $v0, $zero
    ctx->r13 = ctx->r2 | 0;
    // 0x1502C4E0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x1502C4E4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1502C4E8: addiu       $t7, $t7, 0x73D0
    ctx->r15 = ADD32(ctx->r15, 0X73D0);
    // 0x1502C4EC: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x1502C4F0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x1502C4F4: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x1502C4F8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502C4FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502C500: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x1502C504: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x1502C508: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x1502C50C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1502C510: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x1502C514: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x1502C518: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x1502C51C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x1502C520: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1502C524: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1502C528: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x1502C52C: lw          $a1, -0x35B4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X35B4);
    // 0x1502C530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1502C534: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x1502C538: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1502C53C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1502C540: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1502C544: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x1502C548: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x1502C54C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x1502C550: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x1502C554: jal         0x15094F70
    // 0x1502C558: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    func_15094F70(rdram, ctx);
        goto after_1;
    // 0x1502C558: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    after_1:
    // 0x1502C55C: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x1502C560: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x1502C564: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x1502C568: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x1502C56C: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
    // 0x1502C570: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x1502C574: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x1502C578: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1502C57C: sb          $zero, 0x79($sp)
    MEM_B(0X79, ctx->r29) = 0;
    // 0x1502C580: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1502C584: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x1502C588: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1502C58C: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x1502C590: sb          $t2, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r10;
    // 0x1502C594: sh          $t3, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r11;
    // 0x1502C598: sh          $t4, 0x74($sp)
    MEM_H(0X74, ctx->r29) = ctx->r12;
    // 0x1502C59C: sh          $t9, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r25;
    // 0x1502C5A0: bgez        $t1, L_1502C5B0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x1502C5A4: sra         $t6, $t1, 1
        ctx->r14 = S32(SIGNED(ctx->r9) >> 1);
            goto L_1502C5B0;
    }
    // 0x1502C5A4: sra         $t6, $t1, 1
    ctx->r14 = S32(SIGNED(ctx->r9) >> 1);
    // 0x1502C5A8: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x1502C5AC: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_1502C5B0:
    // 0x1502C5B0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x1502C5B4: nop

    // 0x1502C5B8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1502C5BC: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1502C5C0: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1502C5C4: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1502C5C8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1502C5CC: sh          $t6, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r14;
    // 0x1502C5D0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x1502C5D4: jal         0x15095760
    // 0x1502C5D8: sh          $t8, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r24;
    func_15095760(rdram, ctx);
        goto after_2;
    // 0x1502C5D8: sh          $t8, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r24;
    after_2:
    // 0x1502C5DC: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x1502C5E0: addiu       $t8, $t8, 0x7408
    ctx->r24 = ADD32(ctx->r24, 0X7408);
    // 0x1502C5E4: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x1502C5E8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1502C5EC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x1502C5F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_1502C5F4:
    // 0x1502C5F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1502C5F8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x1502C5FC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x1502C600: jr          $ra
    // 0x1502C604: nop

    return;
    return;
    // 0x1502C604: nop

;}
RECOMP_FUNC void func_151592B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151592B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151592BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x151592C0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x151592C4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x151592C8: bne         $a1, $zero, L_1515931C
    if (ctx->r5 != 0) {
        // 0x151592CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1515931C;
    }
    // 0x151592CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151592D0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151592D4: lhu         $t7, -0x4FC0($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X4FC0);
    // 0x151592D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151592DC: addiu       $a2, $sp, 0xD
    ctx->r6 = ADD32(ctx->r29, 0XD);
    // 0x151592E0: sh          $t7, 0xC($sp)
    MEM_H(0XC, ctx->r29) = ctx->r15;
    // 0x151592E4: lhu         $a1, 0x84($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X84);
    // 0x151592E8: addiu       $a3, $sp, 0xC
    ctx->r7 = ADD32(ctx->r29, 0XC);
    // 0x151592EC: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
L_151592F0:
    // 0x151592F0: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x151592F4: sltu        $at, $a2, $a3
    ctx->r1 = ctx->r6 < ctx->r7 ? 1 : 0;
    // 0x151592F8: bne         $a1, $t8, L_15159304
    if (ctx->r5 != ctx->r24) {
        // 0x151592FC: nop
    
            goto L_15159304;
    }
    // 0x151592FC: nop

    // 0x15159300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15159304:
    // 0x15159304: bne         $v0, $zero, L_1515931C
    if (ctx->r2 != 0) {
        // 0x15159308: nop
    
            goto L_1515931C;
    }
    // 0x15159308: nop

    // 0x1515930C: beql        $at, $zero, L_151592F0
    if (ctx->r1 == 0) {
        // 0x15159310: lbu         $t8, 0x0($a2)
        ctx->r24 = MEM_BU(ctx->r6, 0X0);
            goto L_151592F0;
    }
    goto skip_0;
    // 0x15159310: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    skip_0:
    // 0x15159314: b           L_1515931C
    // 0x15159318: nop

        goto L_1515931C;
    // 0x15159318: nop

L_1515931C:
    // 0x1515931C: beql        $v0, $zero, L_15159330
    if (ctx->r2 == 0) {
        // 0x15159320: lbu         $t9, 0xAD($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0XAD);
            goto L_15159330;
    }
    goto skip_1;
    // 0x15159320: lbu         $t9, 0xAD($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XAD);
    skip_1:
    // 0x15159324: b           L_15159364
    // 0x15159328: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_15159364;
    // 0x15159328: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x1515932C: lbu         $t9, 0xAD($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XAD);
L_15159330:
    // 0x15159330: beql        $t9, $zero, L_15159344
    if (ctx->r25 == 0) {
        // 0x15159334: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_15159344;
    }
    goto skip_2;
    // 0x15159334: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_2:
    // 0x15159338: b           L_15159364
    // 0x1515933C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_15159364;
    // 0x1515933C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x15159340: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_15159344:
    // 0x15159344: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x15159348: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x1515934C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x15159350: nop

    // 0x15159354: bc1t        L_15159364
    if (c1cs) {
        // 0x15159358: nop
    
            goto L_15159364;
    }
    // 0x15159358: nop

    // 0x1515935C: b           L_15159364
    // 0x15159360: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_15159364;
    // 0x15159360: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15159364:
    // 0x15159364: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15159368: jr          $ra
    // 0x1515936C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1515936C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_150EFA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EFA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150EFA50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150EFA54: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150EFA58: lw          $v0, 0x60($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X60);
    // 0x150EFA5C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x150EFA60: lbu         $t6, 0x128($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X128);
    // 0x150EFA64: addiu       $t0, $v1, 0x110
    ctx->r8 = ADD32(ctx->r3, 0X110);
    // 0x150EFA68: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150EFA6C: beql        $t7, $zero, L_150EFB64
    if (ctx->r15 == 0) {
        // 0x150EFA70: lbu         $t8, 0x1C($a3)
        ctx->r24 = MEM_BU(ctx->r7, 0X1C);
            goto L_150EFB64;
    }
    goto skip_0;
    // 0x150EFA70: lbu         $t8, 0x1C($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X1C);
    skip_0:
    // 0x150EFA74: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x150EFA78: lw          $t8, 0x1D4($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X1D4);
    // 0x150EFA7C: beql        $t8, $zero, L_150EFB50
    if (ctx->r24 == 0) {
        // 0x150EFA80: lbu         $t6, 0x1C($a3)
        ctx->r14 = MEM_BU(ctx->r7, 0X1C);
            goto L_150EFB50;
    }
    goto skip_1;
    // 0x150EFA80: lbu         $t6, 0x1C($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1C);
    skip_1:
    // 0x150EFA84: lw          $at, 0x34($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X34);
    // 0x150EFA88: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x150EFA8C: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x150EFA90: sw          $at, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r1;
    // 0x150EFA94: lw          $t3, 0x38($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X38);
    // 0x150EFA98: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x150EFA9C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150EFAA0: sw          $t3, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->r11;
    // 0x150EFAA4: lw          $at, 0x3C($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X3C);
    // 0x150EFAA8: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150EFAAC: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150EFAB0: sw          $at, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r1;
    // 0x150EFAB4: lw          $at, 0x40($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X40);
    // 0x150EFAB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150EFABC: addiu       $t8, $t8, 0x1620
    ctx->r24 = ADD32(ctx->r24, 0X1620);
    // 0x150EFAC0: sw          $at, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r1;
    // 0x150EFAC4: lw          $t6, 0x44($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X44);
    // 0x150EFAC8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x150EFACC: addiu       $a1, $a3, 0x48
    ctx->r5 = ADD32(ctx->r7, 0X48);
    // 0x150EFAD0: sw          $t6, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r14;
    // 0x150EFAD4: lw          $at, 0x48($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X48);
    // 0x150EFAD8: sw          $at, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r1;
    // 0x150EFADC: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x150EFAE0: swc1        $f4, 0x54($a3)
    MEM_W(0X54, ctx->r7) = ctx->f4.u32l;
    // 0x150EFAE4: lwc1        $f6, 0x40($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X40);
    // 0x150EFAE8: swc1        $f6, 0x58($a3)
    MEM_W(0X58, ctx->r7) = ctx->f6.u32l;
    // 0x150EFAEC: lbu         $t2, 0x1638($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X1638);
    // 0x150EFAF0: lw          $t3, 0x1D4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X1D4);
    // 0x150EFAF4: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x150EFAF8: sll         $t9, $t2, 6
    ctx->r25 = S32(ctx->r10 << 6);
    // 0x150EFAFC: jal         0x15143134
    // 0x150EFB00: addu        $a2, $t9, $t3
    ctx->r6 = ADD32(ctx->r25, ctx->r11);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150EFB00: addu        $a2, $t9, $t3
    ctx->r6 = ADD32(ctx->r25, ctx->r11);
    after_0:
    // 0x150EFB04: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x150EFB08: lwc1        $f8, 0x48($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X48);
    // 0x150EFB0C: lwc1        $f10, 0x30($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X30);
    // 0x150EFB10: lwc1        $f18, 0x4C($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X4C);
    // 0x150EFB14: lwc1        $f4, 0x34($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X34);
    // 0x150EFB18: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150EFB1C: lwc1        $f10, 0x38($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X38);
    // 0x150EFB20: lwc1        $f8, 0x50($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X50);
    // 0x150EFB24: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150EFB28: swc1        $f16, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->f16.u32l;
    // 0x150EFB2C: lbu         $t5, 0x1C($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X1C);
    // 0x150EFB30: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150EFB34: swc1        $f6, 0x4C($a3)
    MEM_W(0X4C, ctx->r7) = ctx->f6.u32l;
    // 0x150EFB38: ori         $t4, $t5, 0x2
    ctx->r12 = ctx->r13 | 0X2;
    // 0x150EFB3C: sb          $t4, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r12;
    // 0x150EFB40: swc1        $f16, 0x50($a3)
    MEM_W(0X50, ctx->r7) = ctx->f16.u32l;
    // 0x150EFB44: b           L_150EFB70
    // 0x150EFB48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150EFB70;
    // 0x150EFB48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150EFB4C: lbu         $t6, 0x1C($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1C);
L_150EFB50:
    // 0x150EFB50: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x150EFB54: sb          $t7, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r15;
    // 0x150EFB58: b           L_150EFB70
    // 0x150EFB5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150EFB70;
    // 0x150EFB5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150EFB60: lbu         $t8, 0x1C($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X1C);
L_150EFB64:
    // 0x150EFB64: andi        $t2, $t8, 0xFFFD
    ctx->r10 = ctx->r24 & 0XFFFD;
    // 0x150EFB68: sb          $t2, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r10;
    // 0x150EFB6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150EFB70:
    // 0x150EFB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150EFB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150EFB78: jr          $ra
    // 0x150EFB7C: nop

    return;
    return;
    // 0x150EFB7C: nop

;}
RECOMP_FUNC void func_151BC104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BC104: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x151BC108: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x151BC10C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151BC110: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x151BC114: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x151BC118: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x151BC11C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x151BC120: lw          $t6, 0x2FA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2FA0);
    // 0x151BC124: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x151BC128: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x151BC12C: beql        $at, $zero, L_151BC1D8
    if (ctx->r1 == 0) {
        // 0x151BC130: lui         $at, 0xC680
        ctx->r1 = S32(0XC680 << 16);
            goto L_151BC1D8;
    }
    goto skip_0;
    // 0x151BC130: lui         $at, 0xC680
    ctx->r1 = S32(0XC680 << 16);
    skip_0:
    // 0x151BC134: lb          $t7, -0x274($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X274);
    // 0x151BC138: addiu       $t8, $s0, 0x14
    ctx->r24 = ADD32(ctx->r16, 0X14);
    // 0x151BC13C: addiu       $t9, $s0, 0x18
    ctx->r25 = ADD32(ctx->r16, 0X18);
    // 0x151BC140: slti        $at, $t7, 0x5
    ctx->r1 = SIGNED(ctx->r15) < 0X5 ? 1 : 0;
    // 0x151BC144: beq         $at, $zero, L_151BC1D4
    if (ctx->r1 == 0) {
        // 0x151BC148: addiu       $t0, $s0, 0x1C
        ctx->r8 = ADD32(ctx->r16, 0X1C);
            goto L_151BC1D4;
    }
    // 0x151BC148: addiu       $t0, $s0, 0x1C
    ctx->r8 = ADD32(ctx->r16, 0X1C);
    // 0x151BC14C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x151BC150: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BC154: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BC158: lwc1        $f6, -0x57D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X57D0);
    // 0x151BC15C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151BC160: lwc1        $f8, -0x35DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X35DC);
    // 0x151BC164: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x151BC168: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x151BC16C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151BC170: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x151BC174: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151BC178: sw          $t8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r24;
    // 0x151BC17C: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
    // 0x151BC180: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    // 0x151BC184: sh          $t1, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r9;
    // 0x151BC188: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x151BC18C: sb          $t2, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r10;
    // 0x151BC190: sb          $t3, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r11;
    // 0x151BC194: sb          $t4, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r12;
    // 0x151BC198: sb          $zero, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = 0;
    // 0x151BC19C: sw          $s0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r16;
    // 0x151BC1A0: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x151BC1A4: lbu         $t5, 0x3B($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X3B);
    // 0x151BC1A8: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    // 0x151BC1AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x151BC1B0: lbu         $a2, 0xE7($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XE7);
    // 0x151BC1B4: lw          $a3, 0xE8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE8);
    // 0x151BC1B8: jal         0x15134908
    // 0x151BC1BC: sb          $t5, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r13;
    func_15134908(rdram, ctx);
        goto after_0;
    // 0x151BC1BC: sb          $t5, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r13;
    after_0:
    // 0x151BC1C0: beq         $v0, $zero, L_151BC1D4
    if (ctx->r2 == 0) {
        // 0x151BC1C4: addiu       $a0, $v0, 0x40
        ctx->r4 = ADD32(ctx->r2, 0X40);
            goto L_151BC1D4;
    }
    // 0x151BC1C4: addiu       $a0, $v0, 0x40
    ctx->r4 = ADD32(ctx->r2, 0X40);
    // 0x151BC1C8: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x151BC1CC: jal         0x10022EC0
    // 0x151BC1D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151BC1D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_151BC1D4:
    // 0x151BC1D4: lui         $at, 0xC680
    ctx->r1 = S32(0XC680 << 16);
L_151BC1D8:
    // 0x151BC1D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151BC1DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151BC1E0: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x151BC1E4: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x151BC1E8: sb          $t6, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r14;
    // 0x151BC1EC: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151BC1F0: addiu       $t7, $zero, 0x12C
    ctx->r15 = ADD32(0, 0X12C);
    // 0x151BC1F4: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x151BC1F8: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    // 0x151BC1FC: lwc1        $f18, 0x18($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151BC200: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x151BC204: addiu       $t1, $sp, 0x7C
    ctx->r9 = ADD32(ctx->r29, 0X7C);
    // 0x151BC208: swc1        $f18, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f18.u32l;
    // 0x151BC20C: lwc1        $f4, 0x1C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151BC210: sh          $t7, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r15;
    // 0x151BC214: sh          $t8, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r24;
    // 0x151BC218: sw          $t9, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r25;
    // 0x151BC21C: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x151BC220: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x151BC224: lbu         $t0, 0x3B($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X3B);
    // 0x151BC228: addiu       $t9, $s0, 0x14
    ctx->r25 = ADD32(ctx->r16, 0X14);
    // 0x151BC22C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x151BC230: sb          $t0, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r8;
    // 0x151BC234: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x151BC238: addiu       $t0, $s0, 0x18
    ctx->r8 = ADD32(ctx->r16, 0X18);
    // 0x151BC23C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x151BC240: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151BC244: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x151BC248: addiu       $t3, $s0, 0x1C
    ctx->r11 = ADD32(ctx->r16, 0X1C);
    // 0x151BC24C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x151BC250: sw          $t4, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r12;
    // 0x151BC254: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x151BC258: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x151BC25C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x151BC260: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x151BC264: lw          $t8, 0xE8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE8);
    // 0x151BC268: lbu         $t7, 0xE7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XE7);
    // 0x151BC26C: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x151BC270: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151BC274: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
    // 0x151BC278: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x151BC27C: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x151BC280: sw          $t0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r8;
    // 0x151BC284: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x151BC288: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151BC28C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151BC290: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151BC294: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151BC298: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151BC29C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151BC2A0: jal         0x15147A80
    // 0x151BC2A4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_15147A80(rdram, ctx);
        goto after_2;
    // 0x151BC2A4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_2:
    // 0x151BC2A8: beq         $v0, $zero, L_151BC2BC
    if (ctx->r2 == 0) {
        // 0x151BC2AC: addiu       $a1, $sp, 0x74
        ctx->r5 = ADD32(ctx->r29, 0X74);
            goto L_151BC2BC;
    }
    // 0x151BC2AC: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x151BC2B0: lw          $a0, 0x98($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X98);
    // 0x151BC2B4: jal         0x10022EC0
    // 0x151BC2B8: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151BC2B8: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_3:
L_151BC2BC:
    // 0x151BC2BC: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x151BC2C0: lbu         $t2, 0x3B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3B);
    // 0x151BC2C4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x151BC2C8: addiu       $t4, $zero, 0xE
    ctx->r12 = ADD32(0, 0XE);
    // 0x151BC2CC: sb          $t1, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r9;
    // 0x151BC2D0: sb          $t4, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r12;
    // 0x151BC2D4: lw          $t4, 0xE8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE8);
    // 0x151BC2D8: lbu         $t1, 0xE7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XE7);
    // 0x151BC2DC: sb          $t2, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r10;
    // 0x151BC2E0: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x151BC2E4: addiu       $t6, $zero, 0x1F
    ctx->r14 = ADD32(0, 0X1F);
    // 0x151BC2E8: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151BC2EC: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x151BC2F0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151BC2F4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151BC2F8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151BC2FC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151BC300: sh          $t5, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r13;
    // 0x151BC304: sb          $t6, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r14;
    // 0x151BC308: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x151BC30C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x151BC310: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x151BC314: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x151BC318: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151BC31C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x151BC320: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151BC324: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151BC328: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151BC32C: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x151BC330: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x151BC334: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x151BC338: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x151BC33C: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x151BC340: jal         0x15163414
    // 0x151BC344: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    func_15163414(rdram, ctx);
        goto after_4;
    // 0x151BC344: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    after_4:
    // 0x151BC348: beq         $v0, $zero, L_151BC35C
    if (ctx->r2 == 0) {
        // 0x151BC34C: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151BC35C;
    }
    // 0x151BC34C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151BC350: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x151BC354: jal         0x10022EC0
    // 0x151BC358: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151BC358: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
L_151BC35C:
    // 0x151BC35C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x151BC360: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x151BC364: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x151BC368: jr          $ra
    // 0x151BC36C: nop

    return;
    return;
    // 0x151BC36C: nop

;}
RECOMP_FUNC void func_151DAE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DAE28: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151DAE2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151DAE30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151DAE34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151DAE38: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x151DAE3C: addiu       $t6, $sp, 0x37
    ctx->r14 = ADD32(ctx->r29, 0X37);
    // 0x151DAE40: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151DAE44: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x151DAE48: lh          $a1, 0x56($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X56);
    // 0x151DAE4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151DAE50: jal         0x151D5D60
    // 0x151DAE54: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151DAE54: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x151DAE58: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAE5C: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x151DAE60: beq         $v0, $zero, L_151DAEC0
    if (ctx->r2 == 0) {
        // 0x151DAE64: sw          $v0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r2;
            goto L_151DAEC0;
    }
    // 0x151DAE64: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x151DAE68: beq         $t7, $zero, L_151DAEA8
    if (ctx->r15 == 0) {
        // 0x151DAE6C: lh          $t8, 0x56($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X56);
            goto L_151DAEA8;
    }
    // 0x151DAE6C: lh          $t8, 0x56($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X56);
    // 0x151DAE70: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151DAE74: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x151DAE78: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x151DAE7C: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x151DAE80: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x151DAE84: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x151DAE88: jal         0x10022EC0
    // 0x151DAE8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151DAE8C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x151DAE90: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x151DAE94: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x151DAE98: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151DAE9C: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x151DAEA0: jal         0x10022EC0
    // 0x151DAEA4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151DAEA4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
L_151DAEA8:
    // 0x151DAEA8: lh          $v0, 0x56($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X56);
    // 0x151DAEAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DAEB0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAEB4: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x151DAEB8: b           L_151DAEC8
    // 0x151DAEBC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_151DAEC8;
    // 0x151DAEBC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_151DAEC0:
    // 0x151DAEC0: b           L_151DAFF0
    // 0x151DAEC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151DAFF0;
    // 0x151DAEC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151DAEC8:
    // 0x151DAEC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151DAECC: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151DAED0: lwc1        $f6, 0x4C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x151DAED4: lwc1        $f16, -0x2E28($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X2E28);
    // 0x151DAED8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151DAEDC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x151DAEE0: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151DAEE4: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151DAEE8: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x151DAEEC: lwc1        $f18, -0x2E18($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x151DAEF0: sh          $zero, 0x6($t1)
    MEM_H(0X6, ctx->r9) = 0;
    // 0x151DAEF4: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAEF8: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151DAEFC: sh          $zero, 0x16($t2)
    MEM_H(0X16, ctx->r10) = 0;
    // 0x151DAF00: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF04: mul.s       $f2, $f16, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151DAF08: sh          $zero, 0x26($t3)
    MEM_H(0X26, ctx->r11) = 0;
    // 0x151DAF0C: mul.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151DAF10: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF14: sh          $zero, 0x36($t4)
    MEM_H(0X36, ctx->r12) = 0;
    // 0x151DAF18: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151DAF1C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF20: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x151DAF24: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151DAF28: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151DAF2C: nop

    // 0x151DAF30: sh          $t7, 0x30($t8)
    MEM_H(0X30, ctx->r24) = ctx->r15;
    // 0x151DAF34: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF38: sh          $t7, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r15;
    // 0x151DAF3C: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151DAF40: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF44: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151DAF48: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x151DAF4C: nop

    // 0x151DAF50: sh          $t2, 0x12($t3)
    MEM_H(0X12, ctx->r11) = ctx->r10;
    // 0x151DAF54: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF58: sh          $t2, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r10;
    // 0x151DAF5C: lwc1        $f18, 0x3C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151DAF60: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF64: sub.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x151DAF68: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151DAF6C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x151DAF70: nop

    // 0x151DAF74: sh          $t7, 0x34($t8)
    MEM_H(0X34, ctx->r24) = ctx->r15;
    // 0x151DAF78: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF7C: sh          $t7, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r15;
    // 0x151DAF80: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151DAF84: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAF88: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x151DAF8C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151DAF90: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x151DAF94: nop

    // 0x151DAF98: sh          $t2, 0x20($t3)
    MEM_H(0X20, ctx->r11) = ctx->r10;
    // 0x151DAF9C: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAFA0: sh          $t2, 0x10($t4)
    MEM_H(0X10, ctx->r12) = ctx->r10;
    // 0x151DAFA4: lwc1        $f18, 0x38($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151DAFA8: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAFAC: add.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x151DAFB0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151DAFB4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x151DAFB8: nop

    // 0x151DAFBC: sh          $t7, 0x32($t8)
    MEM_H(0X32, ctx->r24) = ctx->r15;
    // 0x151DAFC0: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAFC4: sh          $t7, 0x22($t9)
    MEM_H(0X22, ctx->r25) = ctx->r15;
    // 0x151DAFC8: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151DAFCC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAFD0: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x151DAFD4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151DAFD8: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x151DAFDC: nop

    // 0x151DAFE0: sh          $t2, 0x24($t3)
    MEM_H(0X24, ctx->r11) = ctx->r10;
    // 0x151DAFE4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x151DAFE8: sh          $t2, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r10;
    // 0x151DAFEC: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_151DAFF0:
    // 0x151DAFF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151DAFF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151DAFF8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x151DAFFC: jr          $ra
    // 0x151DB000: nop

    return;
    return;
    // 0x151DB000: nop

;}
RECOMP_FUNC void func_1518E298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518E298: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1518E29C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1518E2A0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x1518E2A4: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x1518E2A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518E2AC: beq         $v1, $zero, L_1518E300
    if (ctx->r3 == 0) {
        // 0x1518E2B0: nop
    
            goto L_1518E300;
    }
    // 0x1518E2B0: nop

    // 0x1518E2B4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1518E2B8: beq         $t6, $zero, L_1518E300
    if (ctx->r14 == 0) {
        // 0x1518E2BC: nop
    
            goto L_1518E300;
    }
    // 0x1518E2BC: nop

    // 0x1518E2C0: lwc1        $f4, 0x14($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1518E2C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1518E2C8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518E2CC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1518E2D0: nop

    // 0x1518E2D4: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x1518E2D8: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1518E2DC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518E2E0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x1518E2E4: nop

    // 0x1518E2E8: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x1518E2EC: lwc1        $f16, 0x1C($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1518E2F0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1518E2F4: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x1518E2F8: jr          $ra
    // 0x1518E2FC: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
    return;
    return;
    // 0x1518E2FC: sh          $t2, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r10;
L_1518E300:
    // 0x1518E300: jr          $ra
    // 0x1518E304: nop

    return;
    return;
    // 0x1518E304: nop

;}
RECOMP_FUNC void func_151D8BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D8BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D8BE8: jal         0x151D8C00
    // 0x151D8BEC: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    func_151D8C00(rdram, ctx);
        goto after_0;
    // 0x151D8BEC: addiu       $a1, $a0, 0x18
    ctx->r5 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x151D8BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D8BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D8BF8: jr          $ra
    // 0x151D8BFC: nop

    return;
    return;
    // 0x151D8BFC: nop

;}
RECOMP_FUNC void func_15009A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009A38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15009A3C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15009A40: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15009A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15009A48: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15009A4C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x15009A50: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x15009A54: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x15009A58: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x15009A5C: lbu         $t0, 0x5B27($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X5B27);
    // 0x15009A60: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x15009A64: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x15009A68: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15009A6C: sb          $t6, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r14;
    // 0x15009A70: sb          $t7, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r15;
    // 0x15009A74: sh          $t8, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r24;
    // 0x15009A78: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15009A7C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15009A80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15009A84: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15009A88: jal         0x1516037C
    // 0x15009A8C: sb          $t0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r8;
    func_1516037C(rdram, ctx);
        goto after_0;
    // 0x15009A8C: sb          $t0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x15009A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15009A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15009A98: jr          $ra
    // 0x15009A9C: nop

    return;
    return;
    // 0x15009A9C: nop

;}
RECOMP_FUNC void func_150948C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150948C0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x150948C4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x150948C8: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x150948CC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150948D0: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x150948D4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x150948D8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x150948DC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x150948E0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x150948E4: jal         0x1509499C
    // 0x150948E8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_1509499C(rdram, ctx);
        goto after_0;
    // 0x150948E8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x150948EC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x150948F0: addiu       $s2, $s2, 0x2C20
    ctx->r18 = ADD32(ctx->r18, 0X2C20);
    // 0x150948F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150948F8: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x150948FC: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x15094900: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_15094904:
    // 0x15094904: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x15094908: beql        $v1, $zero, L_15094970
    if (ctx->r3 == 0) {
        // 0x1509490C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_15094970;
    }
    goto skip_0;
    // 0x1509490C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x15094910: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15094914: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x15094918: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x1509491C: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x15094920: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15094924: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x15094928: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1509492C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15094930: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x15094934: mflo        $t9
    ctx->r25 = lo;
    // 0x15094938: addu        $v0, $t9, $s5
    ctx->r2 = ADD32(ctx->r25, ctx->r21);
    // 0x1509493C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15094940: addiu       $t0, $v0, 0x4
    ctx->r8 = ADD32(ctx->r2, 0X4);
    // 0x15094944: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x15094948: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x1509494C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15094950: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15094954: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15094958: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x1509495C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x15094960: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15094964: jal         0x150A7960
    // 0x15094968: nop

    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15094968: nop

    after_1:
    // 0x1509496C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_15094970:
    // 0x15094970: bne         $s0, $s4, L_15094904
    if (ctx->r16 != ctx->r20) {
        // 0x15094974: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_15094904;
    }
    // 0x15094974: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x15094978: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x1509497C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15094980: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15094984: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x15094988: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x1509498C: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x15094990: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15094994: jr          $ra
    // 0x15094998: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x15094998: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_150F03F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F03F8: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x150F03FC: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x150F0400: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150F0404: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150F0408: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x150F040C: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x150F0410: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x150F0414: bne         $s0, $zero, L_150F0424
    if (ctx->r16 != 0) {
        // 0x150F0418: lbu         $t6, 0xE7($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0XE7);
            goto L_150F0424;
    }
    // 0x150F0418: lbu         $t6, 0xE7($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XE7);
    // 0x150F041C: b           L_150F07D0
    // 0x150F0420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F07D0;
    // 0x150F0420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F0424:
    // 0x150F0424: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x150F0428: bnel        $at, $zero, L_150F043C
    if (ctx->r1 != 0) {
        // 0x150F042C: lw          $t7, 0x1D4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X1D4);
            goto L_150F043C;
    }
    goto skip_0;
    // 0x150F042C: lw          $t7, 0x1D4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1D4);
    skip_0:
    // 0x150F0430: b           L_150F07D0
    // 0x150F0434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F07D0;
    // 0x150F0434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F0438: lw          $t7, 0x1D4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1D4);
L_150F043C:
    // 0x150F043C: bnel        $t7, $zero, L_150F0450
    if (ctx->r15 != 0) {
        // 0x150F0440: lw          $t8, 0x2EC($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X2EC);
            goto L_150F0450;
    }
    goto skip_1;
    // 0x150F0440: lw          $t8, 0x2EC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2EC);
    skip_1:
    // 0x150F0444: b           L_150F07D0
    // 0x150F0448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F07D0;
    // 0x150F0448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150F044C: lw          $t8, 0x2EC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2EC);
L_150F0450:
    // 0x150F0450: lbu         $t9, 0xE7($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE7);
    // 0x150F0454: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150F0458: slti        $at, $t8, 0x5A
    ctx->r1 = SIGNED(ctx->r24) < 0X5A ? 1 : 0;
    // 0x150F045C: beq         $at, $zero, L_150F046C
    if (ctx->r1 == 0) {
        // 0x150F0460: sll         $t0, $t9, 2
        ctx->r8 = S32(ctx->r25 << 2);
            goto L_150F046C;
    }
    // 0x150F0460: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x150F0464: b           L_150F07D0
    // 0x150F0468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F07D0;
    // 0x150F0468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F046C:
    // 0x150F046C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x150F0470: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150F0474: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150F0478: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x150F047C: addiu       $t7, $t7, 0x1670
    ctx->r15 = ADD32(ctx->r15, 0X1670);
    // 0x150F0480: addiu       $t1, $t1, 0x1640
    ctx->r9 = ADD32(ctx->r9, 0X1640);
    // 0x150F0484: addiu       $t3, $t3, 0x1658
    ctx->r11 = ADD32(ctx->r11, 0X1658);
    // 0x150F0488: addu        $v0, $t9, $t7
    ctx->r2 = ADD32(ctx->r25, ctx->r15);
    // 0x150F048C: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x150F0490: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x150F0494: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x150F0498: addiu       $t5, $sp, 0xD0
    ctx->r13 = ADD32(ctx->r29, 0XD0);
    // 0x150F049C: addiu       $t6, $sp, 0xC4
    ctx->r14 = ADD32(ctx->r29, 0XC4);
    // 0x150F04A0: sw          $t2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r10;
    // 0x150F04A4: sw          $t4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r12;
    // 0x150F04A8: sw          $t5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r13;
    // 0x150F04AC: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
    // 0x150F04B0: lw          $t2, 0x1D4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1D4);
    // 0x150F04B4: sll         $t1, $t8, 6
    ctx->r9 = S32(ctx->r24 << 6);
    // 0x150F04B8: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x150F04BC: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x150F04C0: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x150F04C4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150F04C8: jal         0x15145EA4
    // 0x150F04CC: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x150F04CC: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    after_0:
    // 0x150F04D0: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x150F04D4: lwc1        $f6, 0xD0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x150F04D8: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x150F04DC: lwc1        $f16, 0xD4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x150F04E0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F04E4: lwc1        $f6, 0xD8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x150F04E8: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x150F04EC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150F04F0: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    // 0x150F04F4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150F04F8: swc1        $f18, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f18.u32l;
    // 0x150F04FC: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x150F0500: jal         0x150ADA68
    // 0x150F0504: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150F0504: nop

    after_1:
    // 0x150F0508: jal         0x150ADA68
    // 0x150F050C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150F050C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x150F0510: jal         0x150ADA20
    // 0x150F0514: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150F0514: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x150F0518: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150F051C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F0520: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F0524: lwc1        $f16, 0x1838($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1838);
    // 0x150F0528: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x150F052C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F0530: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x150F0534: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x150F0538: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150F053C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150F0540: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F0544: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x150F0548: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150F054C: lwc1        $f18, 0x183C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X183C);
    // 0x150F0550: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x150F0554: lui         $at, 0x4315
    ctx->r1 = S32(0X4315 << 16);
    // 0x150F0558: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150F055C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150F0560: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F0564: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150F0568: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150F056C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x150F0570: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150F0574: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150F0578: lbu         $t1, 0xEB($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XEB);
    // 0x150F057C: lw          $t2, 0xEC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XEC);
    // 0x150F0580: lui         $t9, 0xA
    ctx->r25 = S32(0XA << 16);
    // 0x150F0584: ori         $t9, $t9, 0x38
    ctx->r25 = ctx->r25 | 0X38;
    // 0x150F0588: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F058C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150F0590: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150F0594: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x150F0598: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150F059C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150F05A0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x150F05A4: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x150F05A8: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x150F05AC: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x150F05B0: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x150F05B4: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x150F05B8: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x150F05BC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150F05C0: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x150F05C4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x150F05C8: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x150F05CC: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    // 0x150F05D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150F05D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150F05D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150F05DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150F05E0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150F05E4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x150F05E8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150F05EC: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x150F05F0: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150F05F4: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x150F05F8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x150F05FC: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x150F0600: jal         0x151C229C
    // 0x150F0604: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    func_151C229C(rdram, ctx);
        goto after_4;
    // 0x150F0604: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    after_4:
    // 0x150F0608: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    // 0x150F060C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150F0610: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x150F0614: sb          $t0, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r8;
    // 0x150F0618: jal         0x150ADA20
    // 0x150F061C: sb          $t3, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150F061C: sb          $t3, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r11;
    after_5:
    // 0x150F0620: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150F0624: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F0628: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x150F062C: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x150F0630: lwc1        $f10, 0xD8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x150F0634: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150F0638: mfhi        $t4
    ctx->r12 = hi;
    // 0x150F063C: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x150F0640: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150F0644: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x150F0648: sh          $t5, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r13;
    // 0x150F064C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150F0650: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x150F0654: sb          $zero, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = 0;
    // 0x150F0658: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
    // 0x150F065C: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x150F0660: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x150F0664: jal         0x150ADA20
    // 0x150F0668: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150F0668: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    after_6:
    // 0x150F066C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x150F0670: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150F0674: lbu         $t5, 0xEB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XEB);
    // 0x150F0678: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x150F067C: mfhi        $a2
    ctx->r6 = hi;
    // 0x150F0680: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150F0684: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150F0688: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150F068C: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150F0690: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150F0694: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150F0698: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    // 0x150F069C: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x150F06A0: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x150F06A4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150F06A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150F06AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150F06B0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150F06B4: jal         0x151602C0
    // 0x150F06B8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_151602C0(rdram, ctx);
        goto after_7;
    // 0x150F06B8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_7:
    // 0x150F06BC: jal         0x150ADA68
    // 0x150F06C0: nop

    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150F06C0: nop

    after_8:
    // 0x150F06C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F06C8: lwc1        $f18, 0x1840($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1840);
    // 0x150F06CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F06D0: lwc1        $f6, 0x1844($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1844);
    // 0x150F06D4: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150F06D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F06DC: lwc1        $f10, 0x1848($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1848);
    // 0x150F06E0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150F06E4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150F06E8: jal         0x150ADA68
    // 0x150F06EC: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150F06EC: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x150F06F0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F06F4: lwc1        $f18, 0x184C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X184C);
    // 0x150F06F8: lui         $at, 0x441D
    ctx->r1 = S32(0X441D << 16);
    // 0x150F06FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150F0700: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150F0704: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150F0708: lwc1        $f10, 0x1850($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1850);
    // 0x150F070C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150F0710: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150F0714: jal         0x150ADA20
    // 0x150F0718: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150F0718: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    after_10:
    // 0x150F071C: jal         0x150ADA20
    // 0x150F0720: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150F0720: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    after_11:
    // 0x150F0724: jal         0x150ADA68
    // 0x150F0728: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150F0728: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    after_12:
    // 0x150F072C: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x150F0730: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x150F0734: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150F0738: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150F073C: divu        $zero, $t0, $at
    lo = S32(U32(ctx->r8) / U32(ctx->r1)); hi = S32(U32(ctx->r8) % U32(ctx->r1));
    // 0x150F0740: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x150F0744: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150F0748: lbu         $v0, 0xE7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XE7);
    // 0x150F074C: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x150F0750: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150F0754: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150F0758: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x150F075C: sll         $v0, $t7, 2
    ctx->r2 = S32(ctx->r15 << 2);
    // 0x150F0760: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150F0764: addiu       $t1, $t1, 0x1658
    ctx->r9 = ADD32(ctx->r9, 0X1658);
    // 0x150F0768: addiu       $t8, $t8, 0x1640
    ctx->r24 = ADD32(ctx->r24, 0X1640);
    // 0x150F076C: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x150F0770: addu        $a2, $v0, $t8
    ctx->r6 = ADD32(ctx->r2, ctx->r24);
    // 0x150F0774: addu        $a3, $v0, $t1
    ctx->r7 = ADD32(ctx->r2, ctx->r9);
    // 0x150F0778: lw          $t1, 0xEC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XEC);
    // 0x150F077C: lbu         $t8, 0xEB($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XEB);
    // 0x150F0780: mfhi        $t3
    ctx->r11 = hi;
    // 0x150F0784: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x150F0788: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150F078C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150F0790: addiu       $t2, $sp, 0x98
    ctx->r10 = ADD32(ctx->r29, 0X98);
    // 0x150F0794: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150F0798: addiu       $t6, $sp, 0xD0
    ctx->r14 = ADD32(ctx->r29, 0XD0);
    // 0x150F079C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x150F07A0: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x150F07A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150F07A8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x150F07AC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x150F07B0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150F07B4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x150F07B8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150F07BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150F07C0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x150F07C4: jal         0x15102B38
    // 0x150F07C8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    func_15102B38(rdram, ctx);
        goto after_13;
    // 0x150F07C8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    after_13:
    // 0x150F07CC: lw          $v0, 0xDC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XDC);
L_150F07D0:
    // 0x150F07D0: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x150F07D4: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x150F07D8: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x150F07DC: jr          $ra
    // 0x150F07E0: nop

    return;
    return;
    // 0x150F07E0: nop

;}
RECOMP_FUNC void func_15159230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15159230: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15159234: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15159238: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1515923C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15159240: lwc1        $f6, 0x14($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14);
    // 0x15159244: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15159248: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x1515924C: nop

    // 0x15159250: bc1f        L_1515928C
    if (!c1cs) {
        // 0x15159254: nop
    
            goto L_1515928C;
    }
    // 0x15159254: nop

    // 0x15159258: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x1515925C: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15159260: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x15159264: nop

    // 0x15159268: bc1f        L_1515928C
    if (!c1cs) {
        // 0x1515926C: nop
    
            goto L_1515928C;
    }
    // 0x1515926C: nop

    // 0x15159270: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x15159274: lwc1        $f18, 0x1C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x15159278: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1515927C: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x15159280: nop

    // 0x15159284: bc1t        L_151592AC
    if (c1cs) {
        // 0x15159288: nop
    
            goto L_151592AC;
    }
    // 0x15159288: nop

L_1515928C:
    // 0x1515928C: beq         $a2, $at, L_1515929C
    if (ctx->r6 == ctx->r1) {
        // 0x15159290: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1515929C;
    }
    // 0x15159290: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15159294: bne         $a2, $at, L_151592A4
    if (ctx->r6 != ctx->r1) {
        // 0x15159298: nop
    
            goto L_151592A4;
    }
    // 0x15159298: nop

L_1515929C:
    // 0x1515929C: b           L_151592AC
    // 0x151592A0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_151592AC;
    // 0x151592A0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_151592A4:
    // 0x151592A4: b           L_151592AC
    // 0x151592A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_151592AC;
    // 0x151592A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151592AC:
    // 0x151592AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151592B0: jr          $ra
    // 0x151592B4: nop

    return;
    return;
    // 0x151592B4: nop

;}
RECOMP_FUNC void func_150859AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150859AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x150859B0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x150859B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150859B8: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150859BC: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150859C0: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150859C4: slti        $at, $a0, 0xFF
    ctx->r1 = SIGNED(ctx->r4) < 0XFF ? 1 : 0;
    // 0x150859C8: bnel        $at, $zero, L_150859DC
    if (ctx->r1 != 0) {
        // 0x150859CC: sltiu       $at, $a1, 0x7
        ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
            goto L_150859DC;
    }
    goto skip_0;
    // 0x150859CC: sltiu       $at, $a1, 0x7
    ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
    skip_0:
    // 0x150859D0: jr          $ra
    // 0x150859D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150859D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150859D8: sltiu       $at, $a1, 0x7
    ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
L_150859DC:
    // 0x150859DC: beq         $at, $zero, L_15085AB4
    if (ctx->r1 == 0) {
        // 0x150859E0: sll         $t0, $a1, 2
        ctx->r8 = S32(ctx->r5 << 2);
            goto L_15085AB4;
    }
    // 0x150859E0: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x150859E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150859E8: addu        $at, $at, $t0
    gpr jr_addend_150859F0 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x150859EC: lw          $t0, -0x2660($at)
    ctx->r8 = ADD32(ctx->r1, -0X2660);
    // 0x150859F0: jr          $t0
    // 0x150859F4: nop

    switch (jr_addend_150859F0 >> 2) {
        case 0: goto L_150859F8; break;
        case 1: goto L_15085A10; break;
        case 2: goto L_15085A2C; break;
        case 3: goto L_15085A48; break;
        case 4: goto L_15085A64; break;
        case 5: goto L_15085A80; break;
        case 6: goto L_15085A9C; break;
        default: switch_error(__func__, 0x150859F0, 0x8009D9A0);
    }
    // 0x150859F4: nop

L_150859F8:
    // 0x150859F8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150859FC: lhu         $t1, 0x2340($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X2340);
    // 0x15085A00: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15085A04: sllv        $t3, $t2, $a0
    ctx->r11 = S32(ctx->r10 << (ctx->r4 & 31));
    // 0x15085A08: jr          $ra
    // 0x15085A0C: and         $v0, $t1, $t3
    ctx->r2 = ctx->r9 & ctx->r11;
    return;
    return;
    // 0x15085A0C: and         $v0, $t1, $t3
    ctx->r2 = ctx->r9 & ctx->r11;
L_15085A10:
    // 0x15085A10: sll         $t4, $a0, 3
    ctx->r12 = S32(ctx->r4 << 3);
    // 0x15085A14: subu        $t4, $t4, $a0
    ctx->r12 = SUB32(ctx->r12, ctx->r4);
    // 0x15085A18: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x15085A1C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15085A20: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x15085A24: jr          $ra
    // 0x15085A28: lw          $v0, 0x213C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X213C);
    return;
    return;
    // 0x15085A28: lw          $v0, 0x213C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X213C);
L_15085A2C:
    // 0x15085A2C: sll         $t5, $a0, 3
    ctx->r13 = S32(ctx->r4 << 3);
    // 0x15085A30: subu        $t5, $t5, $a0
    ctx->r13 = SUB32(ctx->r13, ctx->r4);
    // 0x15085A34: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15085A38: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15085A3C: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x15085A40: jr          $ra
    // 0x15085A44: lw          $v0, 0x2140($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2140);
    return;
    return;
    // 0x15085A44: lw          $v0, 0x2140($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2140);
L_15085A48:
    // 0x15085A48: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x15085A4C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x15085A50: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15085A54: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15085A58: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x15085A5C: jr          $ra
    // 0x15085A60: lb          $v0, 0x2144($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2144);
    return;
    return;
    // 0x15085A60: lb          $v0, 0x2144($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2144);
L_15085A64:
    // 0x15085A64: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x15085A68: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x15085A6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15085A70: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15085A74: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x15085A78: jr          $ra
    // 0x15085A7C: lb          $v0, 0x2145($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2145);
    return;
    return;
    // 0x15085A7C: lb          $v0, 0x2145($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X2145);
L_15085A80:
    // 0x15085A80: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x15085A84: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x15085A88: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15085A8C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15085A90: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x15085A94: jr          $ra
    // 0x15085A98: lbu         $v0, 0x2146($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2146);
    return;
    return;
    // 0x15085A98: lbu         $v0, 0x2146($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2146);
L_15085A9C:
    // 0x15085A9C: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x15085AA0: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x15085AA4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x15085AA8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15085AAC: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x15085AB0: lw          $v0, 0x2148($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2148);
L_15085AB4:
    // 0x15085AB4: jr          $ra
    // 0x15085AB8: nop

    return;
    return;
    // 0x15085AB8: nop

;}
RECOMP_FUNC void func_1506DD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506DD6C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1506DD70: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x1506DD74: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1506DD78: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1506DD7C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1506DD80: lw          $v0, 0x31C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X31C);
    // 0x1506DD84: beq         $v0, $zero, L_1506DD98
    if (ctx->r2 == 0) {
        // 0x1506DD88: nop
    
            goto L_1506DD98;
    }
    // 0x1506DD88: nop

    // 0x1506DD8C: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x1506DD90: andi        $t8, $t7, 0x7F
    ctx->r24 = ctx->r15 & 0X7F;
    // 0x1506DD94: sb          $t8, 0x7D($v0)
    MEM_B(0X7D, ctx->r2) = ctx->r24;
L_1506DD98:
    // 0x1506DD98: lw          $t9, 0x1580($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1580);
    // 0x1506DD9C: bne         $t9, $zero, L_1506DDB0
    if (ctx->r25 != 0) {
        // 0x1506DDA0: nop
    
            goto L_1506DDB0;
    }
    // 0x1506DDA0: nop

    // 0x1506DDA4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1506DDA8: lhu         $t0, 0x7A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X7A);
    // 0x1506DDAC: sh          $t0, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r8;
L_1506DDB0:
    // 0x1506DDB0: jr          $ra
    // 0x1506DDB4: nop

    return;
    return;
    // 0x1506DDB4: nop

;}
RECOMP_FUNC void func_15073F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15073F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15073F24: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15073F28: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15073F2C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x15073F30: jal         0x1503195C
    // 0x15073F34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1503195C(rdram, ctx);
        goto after_0;
    // 0x15073F34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x15073F38: beq         $v0, $zero, L_15073F44
    if (ctx->r2 == 0) {
        // 0x15073F3C: addiu       $t6, $zero, 0x960
        ctx->r14 = ADD32(0, 0X960);
            goto L_15073F44;
    }
    // 0x15073F3C: addiu       $t6, $zero, 0x960
    ctx->r14 = ADD32(0, 0X960);
    // 0x15073F40: sw          $t6, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r14;
L_15073F44:
    // 0x15073F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15073F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15073F4C: jr          $ra
    // 0x15073F50: nop

    return;
    return;
    // 0x15073F50: nop

;}
RECOMP_FUNC void func_151618BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151618BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151618C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151618C4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x151618C8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x151618CC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x151618D0: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x151618D4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x151618D8: addiu       $t7, $t7, 0x66E4
    ctx->r15 = ADD32(ctx->r15, 0X66E4);
    // 0x151618DC: addiu       $t0, $t7, 0x24
    ctx->r8 = ADD32(ctx->r15, 0X24);
    // 0x151618E0: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
L_151618E4:
    // 0x151618E4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151618E8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x151618EC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x151618F0: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x151618F4: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x151618F8: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x151618FC: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x15161900: bne         $t7, $t0, L_151618E4
    if (ctx->r15 != ctx->r8) {
        // 0x15161904: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_151618E4;
    }
    // 0x15161904: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x15161908: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1516190C: jal         0x150ADA20
    // 0x15161910: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15161910: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    after_0:
    // 0x15161914: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15161918: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1516191C: mfhi        $t1
    ctx->r9 = hi;
    // 0x15161920: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x15161924: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x15161928: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x1516192C: addu        $a0, $sp, $t2
    ctx->r4 = ADD32(ctx->r29, ctx->r10);
    // 0x15161930: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    // 0x15161934: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15161938: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1516193C: lh          $t1, 0x7A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X7A);
    // 0x15161940: lh          $t6, 0x76($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X76);
    // 0x15161944: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15161948: lhu         $a1, 0x62($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X62);
    // 0x1516194C: lh          $a2, 0x66($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X66);
    // 0x15161950: lbu         $a3, 0x6B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X6B);
    // 0x15161954: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x15161958: nop

    // 0x1516195C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15161960: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15161964: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15161968: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1516196C: nop

    // 0x15161970: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15161974: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15161978: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x1516197C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15161980: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15161984: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x15161988: jal         0x10010F88
    // 0x1516198C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_10010F88(rdram, ctx);
        goto after_1;
    // 0x1516198C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_1:
    // 0x15161990: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15161994: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x15161998: jr          $ra
    // 0x1516199C: nop

    return;
    return;
    // 0x1516199C: nop

;}
RECOMP_FUNC void func_15088D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15088D58: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x15088D5C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x15088D60: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x15088D64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15088D68: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x15088D6C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x15088D70: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15088D74: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x15088D78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15088D7C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15088D80: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15088D84: jal         0x1508855C
    // 0x15088D88: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_1508855C(rdram, ctx);
        goto after_0;
    // 0x15088D88: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_0:
    // 0x15088D8C: bltz        $v0, L_15088F04
    if (SIGNED(ctx->r2) < 0) {
        // 0x15088D90: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_15088F04;
    }
    // 0x15088D90: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15088D94: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x15088D98: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15088D9C: lw          $t7, 0x72A0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X72A0);
    // 0x15088DA0: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x15088DA4: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x15088DA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15088DAC: addu        $s4, $t6, $t7
    ctx->r20 = ADD32(ctx->r14, ctx->r15);
    // 0x15088DB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15088DB4: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x15088DB8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x15088DBC: addiu       $s5, $s5, 0x2350
    ctx->r21 = ADD32(ctx->r21, 0X2350);
    // 0x15088DC0: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x15088DC4: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x15088DC8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x15088DCC: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x15088DD0: swc1        $f0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f0.u32l;
    // 0x15088DD4: swc1        $f0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f0.u32l;
    // 0x15088DD8: lbu         $t8, 0x2C($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X2C);
L_15088DDC:
    // 0x15088DDC: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x15088DE0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15088DE4: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x15088DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15088DEC: addu        $v1, $t9, $a2
    ctx->r3 = ADD32(ctx->r25, ctx->r6);
L_15088DF0:
    // 0x15088DF0: lbu         $a0, 0x9($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X9);
    // 0x15088DF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15088DF8: beq         $s1, $a0, L_15088E14
    if (ctx->r17 == ctx->r4) {
        // 0x15088DFC: sll         $t0, $a0, 4
        ctx->r8 = S32(ctx->r4 << 4);
            goto L_15088E14;
    }
    // 0x15088DFC: sll         $t0, $a0, 4
    ctx->r8 = S32(ctx->r4 << 4);
    // 0x15088E00: addu        $a1, $t0, $a2
    ctx->r5 = ADD32(ctx->r8, ctx->r6);
    // 0x15088E04: lbu         $t1, 0xE($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0XE);
    // 0x15088E08: bne         $s2, $t1, L_15088E14
    if (ctx->r18 != ctx->r9) {
        // 0x15088E0C: nop
    
            goto L_15088E14;
    }
    // 0x15088E0C: nop

    // 0x15088E10: lbu         $s0, 0xF($a1)
    ctx->r16 = MEM_BU(ctx->r5, 0XF);
L_15088E14:
    // 0x15088E14: bne         $v0, $s3, L_15088DF0
    if (ctx->r2 != ctx->r19) {
        // 0x15088E18: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_15088DF0;
    }
    // 0x15088E18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x15088E1C: beq         $s0, $zero, L_15088E30
    if (ctx->r16 == 0) {
        // 0x15088E20: nop
    
            goto L_15088E30;
    }
    // 0x15088E20: nop

    // 0x15088E24: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x15088E28: jal         0x15088A08
    // 0x15088E2C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_15088A08(rdram, ctx);
        goto after_1;
    // 0x15088E2C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
L_15088E30:
    // 0x15088E30: bnel        $s0, $zero, L_15088DDC
    if (ctx->r16 != 0) {
        // 0x15088E34: lbu         $t8, 0x2C($s4)
        ctx->r24 = MEM_BU(ctx->r20, 0X2C);
            goto L_15088DDC;
    }
    goto skip_0;
    // 0x15088E34: lbu         $t8, 0x2C($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X2C);
    skip_0:
    // 0x15088E38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15088E3C: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
    // 0x15088E40: addiu       $s1, $sp, 0x78
    ctx->r17 = ADD32(ctx->r29, 0X78);
    // 0x15088E44: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x15088E48: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x15088E4C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15088E50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15088E54: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15088E58: jal         0x15088F30
    // 0x15088E5C: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    func_15088F30(rdram, ctx);
        goto after_2;
    // 0x15088E5C: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    after_2:
    // 0x15088E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15088E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15088E68: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x15088E6C: jal         0x150498A4
    // 0x15088E70: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    func_150498A4(rdram, ctx);
        goto after_3;
    // 0x15088E70: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    after_3:
    // 0x15088E74: swc1        $f0, 0x14($s6)
    MEM_W(0X14, ctx->r22) = ctx->f0.u32l;
    // 0x15088E78: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x15088E7C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15088E80: jal         0x150497E0
    // 0x15088E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_150497E0(rdram, ctx);
        goto after_4;
    // 0x15088E84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x15088E88: swc1        $f0, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->f0.u32l;
    // 0x15088E8C: lw          $a2, 0x8($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X8);
    // 0x15088E90: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15088E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15088E98: jal         0x150498A4
    // 0x15088E9C: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    func_150498A4(rdram, ctx);
        goto after_5;
    // 0x15088E9C: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    after_5:
    // 0x15088EA0: swc1        $f0, 0x1C($s6)
    MEM_W(0X1C, ctx->r22) = ctx->f0.u32l;
    // 0x15088EA4: lwc1        $f14, 0xC($s4)
    ctx->f14.u32l = MEM_W(ctx->r20, 0XC);
    // 0x15088EA8: lwc1        $f12, 0x10($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X10);
    // 0x15088EAC: jal         0x1505A630
    // 0x15088EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1505A630(rdram, ctx);
        goto after_6;
    // 0x15088EB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x15088EB4: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x15088EB8: addu        $t2, $v0, $at
    ctx->r10 = ADD32(ctx->r2, ctx->r1);
    // 0x15088EBC: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x15088EC0: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15088EC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15088EC8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15088ECC: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15088ED0: jal         0x15144BC8
    // 0x15088ED4: nop

    func_15144BC8(rdram, ctx);
        goto after_7;
    // 0x15088ED4: nop

    after_7:
    // 0x15088ED8: swc1        $f0, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->f0.u32l;
    // 0x15088EDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15088EE0: lwc1        $f16, -0x25FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X25FC);
    // 0x15088EE4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15088EE8: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15088EEC: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x15088EF0: nop

    // 0x15088EF4: addiu       $v0, $t5, -0x4000
    ctx->r2 = ADD32(ctx->r13, -0X4000);
    // 0x15088EF8: sh          $v0, 0x7A($s6)
    MEM_H(0X7A, ctx->r22) = ctx->r2;
    // 0x15088EFC: sh          $v0, 0x78($s6)
    MEM_H(0X78, ctx->r22) = ctx->r2;
    // 0x15088F00: sh          $v0, 0x76($s6)
    MEM_H(0X76, ctx->r22) = ctx->r2;
L_15088F04:
    // 0x15088F04: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15088F08: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15088F0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15088F10: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x15088F14: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x15088F18: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x15088F1C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x15088F20: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x15088F24: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x15088F28: jr          $ra
    // 0x15088F2C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    return;
    // 0x15088F2C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_100079D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100079D8: or          $t9, $a0, $zero
    ctx->r25 = ctx->r4 | 0;
    // 0x100079DC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x100079E0: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x100079E4: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x100079E8: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x100079EC: bne         $at, $zero, L_10007A0C
    if (ctx->r1 != 0) {
        // 0x100079F0: nop
    
            goto L_10007A0C;
    }
    // 0x100079F0: nop

L_100079F4:
    // 0x100079F4: or          $t9, $t8, $zero
    ctx->r25 = ctx->r24 | 0;
    // 0x100079F8: lw          $t8, 0x0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X0);
    // 0x100079FC: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x10007A00: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x10007A04: beq         $at, $zero, L_100079F4
    if (ctx->r1 == 0) {
        // 0x10007A08: nop
    
            goto L_100079F4;
    }
    // 0x10007A08: nop

L_10007A0C:
    // 0x10007A0C: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x10007A10: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x10007A14: sw          $a1, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r5;
    // 0x10007A18: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x10007A1C: jr          $ra
    // 0x10007A20: nop

    return;
    return;
    // 0x10007A20: nop

;}
RECOMP_FUNC void func_150F739C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F739C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150F73A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150F73A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150F73A8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150F73AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150F73B0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x150F73B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150F73B8: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
L_150F73BC:
    // 0x150F73BC: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x150F73C0: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x150F73C4: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x150F73C8: beql        $a0, $zero, L_150F73DC
    if (ctx->r4 == 0) {
        // 0x150F73CC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_150F73DC;
    }
    goto skip_0;
    // 0x150F73CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x150F73D0: jal         0x1516972C
    // 0x150F73D4: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150F73D4: nop

    after_0:
    // 0x150F73D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_150F73DC:
    // 0x150F73DC: andi        $t8, $s0, 0xFF
    ctx->r24 = ctx->r16 & 0XFF;
    // 0x150F73E0: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x150F73E4: bne         $at, $zero, L_150F73BC
    if (ctx->r1 != 0) {
        // 0x150F73E8: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_150F73BC;
    }
    // 0x150F73E8: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x150F73EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x150F73F0: jal         0x1514EDF0
    // 0x150F73F4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_1514EDF0(rdram, ctx);
        goto after_1;
    // 0x150F73F4: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_1:
    // 0x150F73F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150F73FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150F7400: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150F7404: jr          $ra
    // 0x150F7408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x150F7408: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_1510B070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510B070: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1510B074: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1510B078: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1510B07C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1510B080: addiu       $v1, $v1, -0x64E4
    ctx->r3 = ADD32(ctx->r3, -0X64E4);
    // 0x1510B084: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1510B088: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1510B08C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x1510B090: lh          $t6, -0x2D0E($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2D0E);
    // 0x1510B094: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1510B098: lh          $t7, -0x2D0C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2D0C);
    // 0x1510B09C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1510B0A0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510B0A4: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1510B0A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510B0AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1510B0B0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x1510B0B4: addiu       $a0, $a0, -0x64D8
    ctx->r4 = ADD32(ctx->r4, -0X64D8);
    // 0x1510B0B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1510B0BC: swc1        $f6, -0x64E0($at)
    MEM_W(-0X64E0, ctx->r1) = ctx->f6.u32l;
    // 0x1510B0C0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1510B0C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1510B0C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1510B0CC: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1510B0D0: lwc1        $f18, 0x0($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1510B0D4: lw          $v0, -0x19D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19D8);
    // 0x1510B0D8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1510B0DC: swc1        $f4, 0x3670($at)
    MEM_W(0X3670, ctx->r1) = ctx->f4.u32l;
    // 0x1510B0E0: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1510B0E4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1510B0E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510B0EC: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x1510B0F0: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x1510B0F4: lwc1        $f10, 0x2C20($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2C20);
    // 0x1510B0F8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x1510B0FC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x1510B100: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1510B104: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x1510B108: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x1510B10C: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x1510B110: jal         0x151EF954
    // 0x1510B114: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_151EF954(rdram, ctx);
        goto after_0;
    // 0x1510B114: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x1510B118: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1510B11C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1510B120: jr          $ra
    // 0x1510B124: nop

    return;
    return;
    // 0x1510B124: nop

;}
RECOMP_FUNC void func_150A6860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A6860: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150A6864: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150A6868: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x150A686C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x150A6870: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x150A6874: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x150A6878: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x150A687C: swc1        $f21, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150A6880: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x150A6884: swc1        $f23, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150A6888: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150A688C: addiu       $s1, $a1, 0x10
    ctx->r17 = ADD32(ctx->r5, 0X10);
    // 0x150A6890: lhu         $t7, 0x98($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X98);
    // 0x150A6894: andi        $t0, $t7, 0x8000
    ctx->r8 = ctx->r15 & 0X8000;
    // 0x150A6898: beq         $t0, $zero, L_150A68C4
    if (ctx->r8 == 0) {
        // 0x150A689C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_150A68C4;
    }
    // 0x150A689C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150A68A0: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x150A68A4: addiu       $t0, $t0, -0x4010
    ctx->r8 = ADD32(ctx->r8, -0X4010);
    // 0x150A68A8: addiu       $t1, $zero, 0x9A0
    ctx->r9 = ADD32(0, 0X9A0);
    // 0x150A68AC: mult        $t1, $a2
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150A68B0: mflo        $t1
    ctx->r9 = lo;
    // 0x150A68B4: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x150A68B8: lw          $t0, 0x5F0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5F0);
    // 0x150A68BC: andi        $t0, $t0, 0x1
    ctx->r8 = ctx->r8 & 0X1;
    // 0x150A68C0: bne         $t0, $zero, L_150A6F60
    if (ctx->r8 != 0) {
        // 0x150A68C4: lbu         $t1, 0xA0($s1)
        ctx->r9 = MEM_BU(ctx->r17, 0XA0);
            goto L_150A6F60;
    }
L_150A68C4:
    // 0x150A68C4: lbu         $t1, 0xA0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XA0);
    // 0x150A68C8: lh          $t0, 0x88($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X88);
    // 0x150A68CC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x150A68D0: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x150A68D4: addiu       $t2, $t2, -0x35B4
    ctx->r10 = ADD32(ctx->r10, -0X35B4);
    // 0x150A68D8: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x150A68DC: lw          $t1, 0x0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X0);
    // 0x150A68E0: srl         $t0, $t0, 8
    ctx->r8 = S32(U32(ctx->r8) >> 8);
    // 0x150A68E4: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x150A68E8: lui         $t2, 0x1000
    ctx->r10 = S32(0X1000 << 16);
    // 0x150A68EC: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x150A68F0: bne         $at, $zero, L_150A6908
    if (ctx->r1 != 0) {
        // 0x150A68F4: nop
    
            goto L_150A6908;
    }
    // 0x150A68F4: nop

    // 0x150A68F8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x150A68FC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x150A6900: lw          $t3, 0x0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X0);
    // 0x150A6904: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
L_150A6908:
    // 0x150A6908: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150A690C: lh          $t2, -0x2E4C($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X2E4C);
    // 0x150A6910: bne         $t3, $t2, L_150A6928
    if (ctx->r11 != ctx->r10) {
        // 0x150A6914: nop
    
            goto L_150A6928;
    }
    // 0x150A6914: nop

    // 0x150A6918: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150A691C: lh          $t2, -0x2E48($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X2E48);
    // 0x150A6920: beq         $t0, $t2, L_150A696C
    if (ctx->r8 == ctx->r10) {
        // 0x150A6924: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_150A696C;
    }
    // 0x150A6924: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_150A6928:
    // 0x150A6928: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150A692C: sh          $t3, -0x2E4C($at)
    MEM_H(-0X2E4C, ctx->r1) = ctx->r11;
    // 0x150A6930: addiu       $s2, $zero, 0x0
    ctx->r18 = ADD32(0, 0X0);
    // 0x150A6934: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150A6938: sh          $t0, -0x2E48($at)
    MEM_H(-0X2E48, ctx->r1) = ctx->r8;
    // 0x150A693C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150A6940: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x150A6944: lh          $a2, 0x88($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X88);
    // 0x150A6948: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150A694C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x150A6950: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x150A6954: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150A6958: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150A695C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x150A6960: jal         0x15094F70
    // 0x150A6964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15094F70(rdram, ctx);
        goto after_0;
    // 0x150A6964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150A6968: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_150A696C:
    // 0x150A696C: lhu         $s3, 0x9C($s1)
    ctx->r19 = MEM_HU(ctx->r17, 0X9C);
    // 0x150A6970: lhu         $s4, 0x9E($s1)
    ctx->r20 = MEM_HU(ctx->r17, 0X9E);
    // 0x150A6974: srl         $s3, $s3, 8
    ctx->r19 = S32(U32(ctx->r19) >> 8);
    // 0x150A6978: beq         $s3, $zero, L_150A6998
    if (ctx->r19 == 0) {
        // 0x150A697C: srl         $s4, $s4, 8
        ctx->r20 = S32(U32(ctx->r20) >> 8);
            goto L_150A6998;
    }
    // 0x150A697C: srl         $s4, $s4, 8
    ctx->r20 = S32(U32(ctx->r20) >> 8);
    // 0x150A6980: jal         0x15048A40
    // 0x150A6984: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_15048A40(rdram, ctx);
        goto after_1;
    // 0x150A6984: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x150A6988: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150A698C: jal         0x150489B0
    // 0x150A6990: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_150489B0(rdram, ctx);
        goto after_2;
    // 0x150A6990: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x150A6994: mov.s       $f21, $f0
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 0);
    ctx->f21.fl = ctx->f0.fl;
L_150A6998:
    // 0x150A6998: beq         $s4, $zero, L_150A69B8
    if (ctx->r20 == 0) {
        // 0x150A699C: nop
    
            goto L_150A69B8;
    }
    // 0x150A699C: nop

    // 0x150A69A0: jal         0x15048A40
    // 0x150A69A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_15048A40(rdram, ctx);
        goto after_3;
    // 0x150A69A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_3:
    // 0x150A69A8: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x150A69AC: jal         0x150489B0
    // 0x150A69B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_150489B0(rdram, ctx);
        goto after_4;
    // 0x150A69B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x150A69B4: mov.s       $f23, $f0
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 0);
    ctx->f23.fl = ctx->f0.fl;
L_150A69B8:
    // 0x150A69B8: lh          $t0, 0x92($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X92);
    // 0x150A69BC: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A69C0: addiu       $t1, $t1, -0x2E30
    ctx->r9 = ADD32(ctx->r9, -0X2E30);
    // 0x150A69C4: mtc1        $t0, $f12
    ctx->f12.u32l = ctx->r8;
    // 0x150A69C8: lwc1        $f14, 0x0($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X0);
    // 0x150A69CC: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x150A69D0: lwc1        $f13, 0x4($t1)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r9, 0X4);
    // 0x150A69D4: mul.s       $f0, $f12, $f13
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f13.fl);
    // 0x150A69D8: lh          $t0, 0x94($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X94);
    // 0x150A69DC: mov.s       $f9, $f0
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 0);
    ctx->f9.fl = ctx->f0.fl;
    // 0x150A69E0: neg.s       $f3, $f0
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f3.fl = -ctx->f0.fl;
    // 0x150A69E4: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x150A69E8: mul.s       $f5, $f12, $f14
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f5.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150A69EC: mtc1        $t0, $f12
    ctx->f12.u32l = ctx->r8;
    // 0x150A69F0: mov.s       $f8, $f5
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 5);
    ctx->f8.fl = ctx->f5.fl;
    // 0x150A69F4: neg.s       $f2, $f5
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f2.fl = -ctx->f5.fl;
    // 0x150A69F8: neg.s       $f11, $f5
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 5);
    NAN_CHECK(ctx->f5.fl); 
    ctx->f11.fl = -ctx->f5.fl;
    // 0x150A69FC: lhu         $t7, 0x98($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X98);
    // 0x150A6A00: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x150A6A04: andi        $t0, $t7, 0x200
    ctx->r8 = ctx->r15 & 0X200;
    // 0x150A6A08: beq         $t0, $zero, L_150A6A28
    if (ctx->r8 == 0) {
        // 0x150A6A0C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_150A6A28;
    }
    // 0x150A6A0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x150A6A10: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x150A6A14: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x150A6A18: mul.s       $f7, $f12, $f13
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f7.fl = MUL_S(ctx->f12.fl, ctx->f13.fl);
    // 0x150A6A1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150A6A20: j           L_150A6A5C
    // 0x150A6A24: mov.s       $f10, $f7
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    ctx->f10.fl = ctx->f7.fl;
        goto L_150A6A5C;
    // 0x150A6A24: mov.s       $f10, $f7
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 7);
    ctx->f10.fl = ctx->f7.fl;
L_150A6A28:
    // 0x150A6A28: andi        $t0, $t7, 0x4000
    ctx->r8 = ctx->r15 & 0X4000;
    // 0x150A6A2C: beq         $t0, $zero, L_150A6A4C
    if (ctx->r8 == 0) {
        // 0x150A6A30: lui         $at, 0xC000
        ctx->r1 = S32(0XC000 << 16);
            goto L_150A6A4C;
    }
    // 0x150A6A30: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x150A6A34: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x150A6A38: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x150A6A3C: mul.s       $f1, $f12, $f13
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f1.fl = MUL_S(ctx->f12.fl, ctx->f13.fl);
    // 0x150A6A40: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x150A6A44: j           L_150A6A5C
    // 0x150A6A48: mov.s       $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.fl = ctx->f1.fl;
        goto L_150A6A5C;
    // 0x150A6A48: mov.s       $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.fl = ctx->f1.fl;
L_150A6A4C:
    // 0x150A6A4C: neg.s       $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f1.fl = -ctx->f12.fl;
    // 0x150A6A50: mov.s       $f7, $f12
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 12);
    ctx->f7.fl = ctx->f12.fl;
    // 0x150A6A54: mov.s       $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.fl = ctx->f12.fl;
    // 0x150A6A58: mov.s       $f4, $f1
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 1);
    ctx->f4.fl = ctx->f1.fl;
L_150A6A5C:
    // 0x150A6A5C: beq         $s3, $zero, L_150A6AE8
    if (ctx->r19 == 0) {
        // 0x150A6A60: nop
    
            goto L_150A6AE8;
    }
    // 0x150A6A60: nop

    // 0x150A6A64: mul.s       $f12, $f1, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f21.fl);
    // 0x150A6A68: nop

    // 0x150A6A6C: mul.s       $f13, $f2, $f20
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f13.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150A6A70: nop

    // 0x150A6A74: mul.s       $f2, $f2, $f21
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f21.fl);
    // 0x150A6A78: add.s       $f12, $f12, $f13
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f13.fl;
    // 0x150A6A7C: mul.s       $f1, $f1, $f20
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f20.fl);
    // 0x150A6A80: nop

    // 0x150A6A84: mul.s       $f14, $f4, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f21.fl);
    // 0x150A6A88: sub.s       $f2, $f2, $f1
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f1.fl;
    // 0x150A6A8C: mul.s       $f15, $f5, $f20
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f15.fl = MUL_S(ctx->f5.fl, ctx->f20.fl);
    // 0x150A6A90: mov.s       $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    ctx->f1.fl = ctx->f12.fl;
    // 0x150A6A94: mul.s       $f5, $f5, $f21
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f5.fl = MUL_S(ctx->f5.fl, ctx->f21.fl);
    // 0x150A6A98: add.s       $f14, $f14, $f15
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f15.fl;
    // 0x150A6A9C: mul.s       $f4, $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x150A6AA0: nop

    // 0x150A6AA4: mul.s       $f12, $f7, $f21
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f12.fl = MUL_S(ctx->f7.fl, ctx->f21.fl);
    // 0x150A6AA8: sub.s       $f5, $f5, $f4
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f5.fl = ctx->f5.fl - ctx->f4.fl;
    // 0x150A6AAC: mul.s       $f13, $f8, $f20
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f13.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x150A6AB0: mov.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.fl = ctx->f14.fl;
    // 0x150A6AB4: mul.s       $f8, $f8, $f21
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f21.fl);
    // 0x150A6AB8: add.s       $f12, $f12, $f13
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f13.fl;
    // 0x150A6ABC: mul.s       $f7, $f7, $f20
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f20.fl);
    // 0x150A6AC0: nop

    // 0x150A6AC4: mul.s       $f14, $f10, $f21
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f21.fl);
    // 0x150A6AC8: sub.s       $f8, $f8, $f7
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f7.fl;
    // 0x150A6ACC: mul.s       $f15, $f11, $f20
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f15.fl = MUL_S(ctx->f11.fl, ctx->f20.fl);
    // 0x150A6AD0: mov.s       $f7, $f12
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 12);
    ctx->f7.fl = ctx->f12.fl;
    // 0x150A6AD4: mul.s       $f11, $f11, $f21
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 21);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f21.fl); 
    ctx->f11.fl = MUL_S(ctx->f11.fl, ctx->f21.fl);
    // 0x150A6AD8: add.s       $f14, $f14, $f15
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f15.fl;
    // 0x150A6ADC: mul.s       $f10, $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x150A6AE0: sub.s       $f11, $f11, $f10
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f11.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f11.fl = ctx->f11.fl - ctx->f10.fl;
    // 0x150A6AE4: mov.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    ctx->f10.fl = ctx->f14.fl;
L_150A6AE8:
    // 0x150A6AE8: beq         $s4, $zero, L_150A6B74
    if (ctx->r20 == 0) {
        // 0x150A6AEC: nop
    
            goto L_150A6B74;
    }
    // 0x150A6AEC: nop

    // 0x150A6AF0: mul.s       $f12, $f1, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = MUL_S(ctx->f1.fl, ctx->f23.fl);
    // 0x150A6AF4: nop

    // 0x150A6AF8: mul.s       $f13, $f0, $f22
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f13.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150A6AFC: nop

    // 0x150A6B00: mul.s       $f0, $f0, $f23
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f23.fl);
    // 0x150A6B04: add.s       $f12, $f12, $f13
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f13.fl;
    // 0x150A6B08: mul.s       $f1, $f1, $f22
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f1.fl = MUL_S(ctx->f1.fl, ctx->f22.fl);
    // 0x150A6B0C: nop

    // 0x150A6B10: mul.s       $f14, $f4, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f23.fl);
    // 0x150A6B14: sub.s       $f0, $f0, $f1
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 1);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f1.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f1.fl;
    // 0x150A6B18: mul.s       $f15, $f3, $f22
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f15.fl = MUL_S(ctx->f3.fl, ctx->f22.fl);
    // 0x150A6B1C: mov.s       $f1, $f12
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    ctx->f1.fl = ctx->f12.fl;
    // 0x150A6B20: mul.s       $f3, $f3, $f23
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f23.fl);
    // 0x150A6B24: add.s       $f14, $f14, $f15
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f15.fl;
    // 0x150A6B28: mul.s       $f4, $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x150A6B2C: nop

    // 0x150A6B30: mul.s       $f12, $f7, $f23
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f12.fl = MUL_S(ctx->f7.fl, ctx->f23.fl);
    // 0x150A6B34: sub.s       $f3, $f3, $f4
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f3.fl = ctx->f3.fl - ctx->f4.fl;
    // 0x150A6B38: mul.s       $f13, $f6, $f22
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f13.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x150A6B3C: mov.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.fl = ctx->f14.fl;
    // 0x150A6B40: mul.s       $f6, $f6, $f23
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f23.fl);
    // 0x150A6B44: add.s       $f12, $f12, $f13
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f13.fl;
    // 0x150A6B48: mul.s       $f7, $f7, $f22
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f7.fl = MUL_S(ctx->f7.fl, ctx->f22.fl);
    // 0x150A6B4C: nop

    // 0x150A6B50: mul.s       $f14, $f10, $f23
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f23.fl);
    // 0x150A6B54: sub.s       $f6, $f6, $f7
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 7);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f7.fl); 
    ctx->f6.fl = ctx->f6.fl - ctx->f7.fl;
    // 0x150A6B58: mul.s       $f15, $f9, $f22
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f15.fl = MUL_S(ctx->f9.fl, ctx->f22.fl);
    // 0x150A6B5C: mov.s       $f7, $f12
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 12);
    ctx->f7.fl = ctx->f12.fl;
    // 0x150A6B60: mul.s       $f9, $f9, $f23
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f9.fl = MUL_S(ctx->f9.fl, ctx->f23.fl);
    // 0x150A6B64: add.s       $f14, $f14, $f15
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 15);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f15.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f15.fl;
    // 0x150A6B68: mul.s       $f10, $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x150A6B6C: sub.s       $f9, $f9, $f10
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f9.fl = ctx->f9.fl - ctx->f10.fl;
    // 0x150A6B70: mov.s       $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    ctx->f10.fl = ctx->f14.fl;
L_150A6B74:
    // 0x150A6B74: lh          $t4, 0x8C($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X8C);
    // 0x150A6B78: lh          $t5, 0x8E($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X8E);
    // 0x150A6B7C: lh          $t6, 0x90($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X90);
    // 0x150A6B80: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150A6B84: lb          $t0, -0x1640($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1640);
    // 0x150A6B88: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x150A6B8C: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x150A6B90: lui         $t1, 0xA000
    ctx->r9 = S32(0XA000 << 16);
    // 0x150A6B94: or          $t0, $t0, $t1
    ctx->r8 = ctx->r8 | ctx->r9;
    // 0x150A6B98: cvt.w.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.u32l = CVT_W_S(ctx->f0.fl);
    // 0x150A6B9C: cvt.w.s     $f1, $f1
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 1);
    ctx->f_odd[(1 - 1) * 2] = CVT_W_S(ctx->f1.fl);
    // 0x150A6BA0: cvt.w.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.u32l = CVT_W_S(ctx->f2.fl);
    // 0x150A6BA4: cvt.w.s     $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    ctx->f_odd[(3 - 1) * 2] = CVT_W_S(ctx->f3.fl);
    // 0x150A6BA8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150A6BAC: cvt.w.s     $f5, $f5
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 5);
    ctx->f_odd[(5 - 1) * 2] = CVT_W_S(ctx->f5.fl);
    // 0x150A6BB0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x150A6BB4: cvt.w.s     $f7, $f7
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 7);
    ctx->f_odd[(7 - 1) * 2] = CVT_W_S(ctx->f7.fl);
    // 0x150A6BB8: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150A6BBC: cvt.w.s     $f9, $f9
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 9);
    ctx->f_odd[(9 - 1) * 2] = CVT_W_S(ctx->f9.fl);
    // 0x150A6BC0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150A6BC4: cvt.w.s     $f11, $f11
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 11);
    ctx->f_odd[(11 - 1) * 2] = CVT_W_S(ctx->f11.fl);
    // 0x150A6BC8: mfc1        $t1, $f0
    ctx->r9 = (int32_t)ctx->f0.u32l;
    // 0x150A6BCC: mfc1        $t2, $f1
    ctx->r10 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x150A6BD0: mfc1        $t3, $f2
    ctx->r11 = (int32_t)ctx->f2.u32l;
    // 0x150A6BD4: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x150A6BD8: dsll32      $t1, $t1, 16
    ctx->r9 = ctx->r9 << (16 + 32);
    // 0x150A6BDC: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x150A6BE0: andi        $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 & 0XFFFF;
    // 0x150A6BE4: dsll32      $t2, $t2, 0
    ctx->r10 = ctx->r10 << (0 + 32);
    // 0x150A6BE8: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x150A6BEC: andi        $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 & 0XFFFF;
    // 0x150A6BF0: dsll        $t3, $t3, 16
    ctx->r11 = ctx->r11 << 16;
    // 0x150A6BF4: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x150A6BF8: or          $t1, $t1, $t3
    ctx->r9 = ctx->r9 | ctx->r11;
    // 0x150A6BFC: sd          $t1, 0x0($t0)
    SD(ctx->r9, 0X0, ctx->r8);
    // 0x150A6C00: mfc1        $t1, $f3
    ctx->r9 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x150A6C04: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x150A6C08: mfc1        $t3, $f5
    ctx->r11 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x150A6C0C: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x150A6C10: dsll32      $t1, $t1, 16
    ctx->r9 = ctx->r9 << (16 + 32);
    // 0x150A6C14: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x150A6C18: andi        $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 & 0XFFFF;
    // 0x150A6C1C: dsll32      $t2, $t2, 0
    ctx->r10 = ctx->r10 << (0 + 32);
    // 0x150A6C20: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x150A6C24: andi        $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 & 0XFFFF;
    // 0x150A6C28: dsll        $t3, $t3, 16
    ctx->r11 = ctx->r11 << 16;
    // 0x150A6C2C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x150A6C30: or          $t1, $t1, $t3
    ctx->r9 = ctx->r9 | ctx->r11;
    // 0x150A6C34: sd          $t1, 0x10($t0)
    SD(ctx->r9, 0X10, ctx->r8);
    // 0x150A6C38: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x150A6C3C: mfc1        $t2, $f7
    ctx->r10 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x150A6C40: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x150A6C44: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x150A6C48: dsll32      $t1, $t1, 16
    ctx->r9 = ctx->r9 << (16 + 32);
    // 0x150A6C4C: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x150A6C50: andi        $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 & 0XFFFF;
    // 0x150A6C54: dsll32      $t2, $t2, 0
    ctx->r10 = ctx->r10 << (0 + 32);
    // 0x150A6C58: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x150A6C5C: andi        $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 & 0XFFFF;
    // 0x150A6C60: dsll        $t3, $t3, 16
    ctx->r11 = ctx->r11 << 16;
    // 0x150A6C64: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x150A6C68: or          $t1, $t1, $t3
    ctx->r9 = ctx->r9 | ctx->r11;
    // 0x150A6C6C: sd          $t1, 0x20($t0)
    SD(ctx->r9, 0X20, ctx->r8);
    // 0x150A6C70: mfc1        $t1, $f9
    ctx->r9 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x150A6C74: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x150A6C78: mfc1        $t3, $f11
    ctx->r11 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x150A6C7C: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x150A6C80: dsll32      $t1, $t1, 16
    ctx->r9 = ctx->r9 << (16 + 32);
    // 0x150A6C84: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x150A6C88: andi        $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 & 0XFFFF;
    // 0x150A6C8C: dsll32      $t2, $t2, 0
    ctx->r10 = ctx->r10 << (0 + 32);
    // 0x150A6C90: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x150A6C94: andi        $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 & 0XFFFF;
    // 0x150A6C98: dsll        $t3, $t3, 16
    ctx->r11 = ctx->r11 << 16;
    // 0x150A6C9C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x150A6CA0: or          $t1, $t1, $t3
    ctx->r9 = ctx->r9 | ctx->r11;
    // 0x150A6CA4: sd          $t1, 0x30($t0)
    SD(ctx->r9, 0X30, ctx->r8);
    // 0x150A6CA8: andi        $t1, $t7, 0x8
    ctx->r9 = ctx->r15 & 0X8;
    // 0x150A6CAC: bnel        $t1, $zero, L_150A6CE4
    if (ctx->r9 != 0) {
        // 0x150A6CB0: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_150A6CE4;
    }
    goto skip_0;
    // 0x150A6CB0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    skip_0:
    // 0x150A6CB4: andi        $t1, $t7, 0x10
    ctx->r9 = ctx->r15 & 0X10;
    // 0x150A6CB8: bnel        $t1, $zero, L_150A6CE4
    if (ctx->r9 != 0) {
        // 0x150A6CBC: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_150A6CE4;
    }
    goto skip_1;
    // 0x150A6CBC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    skip_1:
    // 0x150A6CC0: andi        $t1, $t7, 0x400
    ctx->r9 = ctx->r15 & 0X400;
    // 0x150A6CC4: bnel        $t1, $zero, L_150A6CE4
    if (ctx->r9 != 0) {
        // 0x150A6CC8: addiu       $t2, $zero, 0x4
        ctx->r10 = ADD32(0, 0X4);
            goto L_150A6CE4;
    }
    goto skip_2;
    // 0x150A6CC8: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    skip_2:
    // 0x150A6CCC: andi        $t1, $t7, 0x1000
    ctx->r9 = ctx->r15 & 0X1000;
    // 0x150A6CD0: bnel        $t1, $zero, L_150A6CE4
    if (ctx->r9 != 0) {
        // 0x150A6CD4: addiu       $t2, $zero, 0x5
        ctx->r10 = ADD32(0, 0X5);
            goto L_150A6CE4;
    }
    goto skip_3;
    // 0x150A6CD4: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    skip_3:
    // 0x150A6CD8: andi        $t1, $t7, 0x2000
    ctx->r9 = ctx->r15 & 0X2000;
    // 0x150A6CDC: bnel        $t1, $zero, L_150A6CE4
    if (ctx->r9 != 0) {
        // 0x150A6CE0: addiu       $t2, $zero, 0x6
        ctx->r10 = ADD32(0, 0X6);
            goto L_150A6CE4;
    }
    goto skip_4;
    // 0x150A6CE0: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    skip_4:
L_150A6CE4:
    // 0x150A6CE4: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A6CE8: lh          $t1, -0x2E42($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X2E42);
    // 0x150A6CEC: beq         $t1, $t2, L_150A6E3C
    if (ctx->r9 == ctx->r10) {
        // 0x150A6CF0: nop
    
            goto L_150A6E3C;
    }
    // 0x150A6CF0: nop

    // 0x150A6CF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150A6CF8: sh          $t2, -0x2E42($at)
    MEM_H(-0X2E42, ctx->r1) = ctx->r10;
    // 0x150A6CFC: beq         $s2, $zero, L_150A6D14
    if (ctx->r18 == 0) {
        // 0x150A6D00: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_150A6D14;
    }
    // 0x150A6D00: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150A6D04: lui         $at, 0xE700
    ctx->r1 = S32(0XE700 << 16);
    // 0x150A6D08: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6D0C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x150A6D10: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_150A6D14:
    // 0x150A6D14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150A6D18: bne         $t2, $at, L_150A6D44
    if (ctx->r10 != ctx->r1) {
        // 0x150A6D1C: nop
    
            goto L_150A6D44;
    }
    // 0x150A6D1C: nop

    // 0x150A6D20: lui         $at, 0xFC12
    ctx->r1 = S32(0XFC12 << 16);
    // 0x150A6D24: ori         $at, $at, 0x1824
    ctx->r1 = ctx->r1 | 0X1824;
    // 0x150A6D28: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6D2C: lui         $at, 0xFF33
    ctx->r1 = S32(0XFF33 << 16);
    // 0x150A6D30: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150A6D34: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6D38: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150A6D3C: j           L_150A6E3C
    // 0x150A6D40: nop

        goto L_150A6E3C;
    // 0x150A6D40: nop

L_150A6D44:
    // 0x150A6D44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150A6D48: bne         $t2, $at, L_150A6D74
    if (ctx->r10 != ctx->r1) {
        // 0x150A6D4C: nop
    
            goto L_150A6D74;
    }
    // 0x150A6D4C: nop

    // 0x150A6D50: lui         $at, 0xFCFF
    ctx->r1 = S32(0XFCFF << 16);
    // 0x150A6D54: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150A6D58: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6D5C: lui         $at, 0xFFFC
    ctx->r1 = S32(0XFFFC << 16);
    // 0x150A6D60: ori         $at, $at, 0xF279
    ctx->r1 = ctx->r1 | 0XF279;
    // 0x150A6D64: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6D68: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150A6D6C: j           L_150A6E3C
    // 0x150A6D70: nop

        goto L_150A6E3C;
    // 0x150A6D70: nop

L_150A6D74:
    // 0x150A6D74: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150A6D78: bne         $t2, $at, L_150A6DA4
    if (ctx->r10 != ctx->r1) {
        // 0x150A6D7C: nop
    
            goto L_150A6DA4;
    }
    // 0x150A6D7C: nop

    // 0x150A6D80: lui         $at, 0xFC12
    ctx->r1 = S32(0XFC12 << 16);
    // 0x150A6D84: ori         $at, $at, 0x3224
    ctx->r1 = ctx->r1 | 0X3224;
    // 0x150A6D88: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6D8C: lui         $at, 0xFF67
    ctx->r1 = S32(0XFF67 << 16);
    // 0x150A6D90: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x150A6D94: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6D98: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150A6D9C: j           L_150A6E3C
    // 0x150A6DA0: nop

        goto L_150A6E3C;
    // 0x150A6DA0: nop

L_150A6DA4:
    // 0x150A6DA4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150A6DA8: bne         $t2, $at, L_150A6DD4
    if (ctx->r10 != ctx->r1) {
        // 0x150A6DAC: nop
    
            goto L_150A6DD4;
    }
    // 0x150A6DAC: nop

    // 0x150A6DB0: lui         $at, 0xFCFF
    ctx->r1 = S32(0XFCFF << 16);
    // 0x150A6DB4: ori         $at, $at, 0xB3FF
    ctx->r1 = ctx->r1 | 0XB3FF;
    // 0x150A6DB8: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6DBC: lui         $at, 0xFF66
    ctx->r1 = S32(0XFF66 << 16);
    // 0x150A6DC0: ori         $at, $at, 0x7F3F
    ctx->r1 = ctx->r1 | 0X7F3F;
    // 0x150A6DC4: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6DC8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150A6DCC: j           L_150A6E3C
    // 0x150A6DD0: nop

        goto L_150A6E3C;
    // 0x150A6DD0: nop

L_150A6DD4:
    // 0x150A6DD4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x150A6DD8: bne         $t2, $at, L_150A6E20
    if (ctx->r10 != ctx->r1) {
        // 0x150A6DDC: nop
    
            goto L_150A6E20;
    }
    // 0x150A6DDC: nop

    // 0x150A6DE0: lui         $at, 0xEF18
    ctx->r1 = S32(0XEF18 << 16);
    // 0x150A6DE4: ori         $at, $at, 0x2C0F
    ctx->r1 = ctx->r1 | 0X2C0F;
    // 0x150A6DE8: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6DEC: lui         $at, 0xC18
    ctx->r1 = S32(0XC18 << 16);
    // 0x150A6DF0: ori         $at, $at, 0x4B50
    ctx->r1 = ctx->r1 | 0X4B50;
    // 0x150A6DF4: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6DF8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150A6DFC: lui         $at, 0xFC12
    ctx->r1 = S32(0XFC12 << 16);
    // 0x150A6E00: ori         $at, $at, 0x35FF
    ctx->r1 = ctx->r1 | 0X35FF;
    // 0x150A6E04: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6E08: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x150A6E0C: ori         $at, $at, 0xFE38
    ctx->r1 = ctx->r1 | 0XFE38;
    // 0x150A6E10: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6E14: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150A6E18: j           L_150A6E3C
    // 0x150A6E1C: nop

        goto L_150A6E3C;
    // 0x150A6E1C: nop

L_150A6E20:
    // 0x150A6E20: lui         $at, 0xFCFF
    ctx->r1 = S32(0XFCFF << 16);
    // 0x150A6E24: ori         $at, $at, 0x99FF
    ctx->r1 = ctx->r1 | 0X99FF;
    // 0x150A6E28: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6E2C: lui         $at, 0xFF32
    ctx->r1 = S32(0XFF32 << 16);
    // 0x150A6E30: ori         $at, $at, 0x7F3F
    ctx->r1 = ctx->r1 | 0X7F3F;
    // 0x150A6E34: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6E38: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_150A6E3C:
    // 0x150A6E3C: andi        $t1, $t7, 0x800
    ctx->r9 = ctx->r15 & 0X800;
    // 0x150A6E40: beq         $t1, $zero, L_150A6E78
    if (ctx->r9 == 0) {
        // 0x150A6E44: nop
    
            goto L_150A6E78;
    }
    // 0x150A6E44: nop

    // 0x150A6E48: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A6E4C: lh          $t1, -0x2E3A($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X2E3A);
    // 0x150A6E50: lbu         $t3, 0xA4($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0XA4);
    // 0x150A6E54: beq         $t1, $t3, L_150A6E78
    if (ctx->r9 == ctx->r11) {
        // 0x150A6E58: nop
    
            goto L_150A6E78;
    }
    // 0x150A6E58: nop

    // 0x150A6E5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150A6E60: sh          $t3, -0x2E3A($at)
    MEM_H(-0X2E3A, ctx->r1) = ctx->r11;
    // 0x150A6E64: lui         $t1, 0xFA00
    ctx->r9 = S32(0XFA00 << 16);
    // 0x150A6E68: ori         $t1, $t1, 0x0
    ctx->r9 = ctx->r9 | 0X0;
    // 0x150A6E6C: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x150A6E70: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150A6E74: sw          $t3, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r11;
L_150A6E78:
    // 0x150A6E78: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x150A6E7C: lw          $t3, 0x2C9C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2C9C);
    // 0x150A6E80: andi        $t1, $t7, 0x20
    ctx->r9 = ctx->r15 & 0X20;
    // 0x150A6E84: bnel        $t1, $zero, L_150A6E9C
    if (ctx->r9 != 0) {
        // 0x150A6E88: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_150A6E9C;
    }
    goto skip_5;
    // 0x150A6E88: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    skip_5:
    // 0x150A6E8C: andi        $t1, $t7, 0x2000
    ctx->r9 = ctx->r15 & 0X2000;
    // 0x150A6E90: bnel        $t1, $zero, L_150A6E9C
    if (ctx->r9 != 0) {
        // 0x150A6E94: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_150A6E9C;
    }
    goto skip_6;
    // 0x150A6E94: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_6:
    // 0x150A6E98: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
L_150A6E9C:
    // 0x150A6E9C: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A6EA0: lh          $t1, -0x2E44($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X2E44);
    // 0x150A6EA4: beq         $t1, $t2, L_150A6F2C
    if (ctx->r9 == ctx->r10) {
        // 0x150A6EA8: nop
    
            goto L_150A6F2C;
    }
    // 0x150A6EA8: nop

    // 0x150A6EAC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x150A6EB0: sh          $t2, -0x2E44($at)
    MEM_H(-0X2E44, ctx->r1) = ctx->r10;
    // 0x150A6EB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150A6EB8: beq         $t2, $at, L_150A6F2C
    if (ctx->r10 == ctx->r1) {
        // 0x150A6EBC: nop
    
            goto L_150A6F2C;
    }
    // 0x150A6EBC: nop

    // 0x150A6EC0: beq         $s2, $zero, L_150A6ED8
    if (ctx->r18 == 0) {
        // 0x150A6EC4: nop
    
            goto L_150A6ED8;
    }
    // 0x150A6EC4: nop

    // 0x150A6EC8: lui         $at, 0xE700
    ctx->r1 = S32(0XE700 << 16);
    // 0x150A6ECC: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6ED0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x150A6ED4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_150A6ED8:
    // 0x150A6ED8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150A6EDC: bne         $t2, $at, L_150A6F0C
    if (ctx->r10 != ctx->r1) {
        // 0x150A6EE0: nop
    
            goto L_150A6F0C;
    }
    // 0x150A6EE0: nop

    // 0x150A6EE4: lui         $at, 0xEF08
    ctx->r1 = S32(0XEF08 << 16);
    // 0x150A6EE8: ori         $at, $at, 0x2C0F
    ctx->r1 = ctx->r1 | 0X2C0F;
    // 0x150A6EEC: or          $at, $at, $t3
    ctx->r1 = ctx->r1 | ctx->r11;
    // 0x150A6EF0: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6EF4: lui         $at, 0xF0A
    ctx->r1 = S32(0XF0A << 16);
    // 0x150A6EF8: ori         $at, $at, 0x3238
    ctx->r1 = ctx->r1 | 0X3238;
    // 0x150A6EFC: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6F00: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x150A6F04: j           L_150A6F2C
    // 0x150A6F08: nop

        goto L_150A6F2C;
    // 0x150A6F08: nop

L_150A6F0C:
    // 0x150A6F0C: lui         $at, 0xEF08
    ctx->r1 = S32(0XEF08 << 16);
    // 0x150A6F10: ori         $at, $at, 0x2C0F
    ctx->r1 = ctx->r1 | 0X2C0F;
    // 0x150A6F14: or          $at, $at, $t3
    ctx->r1 = ctx->r1 | ctx->r11;
    // 0x150A6F18: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6F1C: lui         $at, 0x50
    ctx->r1 = S32(0X50 << 16);
    // 0x150A6F20: ori         $at, $at, 0x4B50
    ctx->r1 = ctx->r1 | 0X4B50;
    // 0x150A6F24: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x150A6F28: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_150A6F2C:
    // 0x150A6F2C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x150A6F30: ori         $at, $at, 0x4008
    ctx->r1 = ctx->r1 | 0X4008;
    // 0x150A6F34: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150A6F38: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x150A6F3C: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x150A6F40: ori         $at, $at, 0x402
    ctx->r1 = ctx->r1 | 0X402;
    // 0x150A6F44: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x150A6F48: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x150A6F4C: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x150A6F50: ori         $at, $at, 0x604
    ctx->r1 = ctx->r1 | 0X604;
    // 0x150A6F54: sw          $at, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r1;
    // 0x150A6F58: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x150A6F5C: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
L_150A6F60:
    // 0x150A6F60: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150A6F64: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150A6F68: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x150A6F6C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x150A6F70: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x150A6F74: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x150A6F78: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150A6F7C: lwc1        $f21, 0x38($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x150A6F80: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x150A6F84: lwc1        $f23, 0x40($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x150A6F88: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150A6F8C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150A6F90: jr          $ra
    // 0x150A6F94: nop

    return;
    return;
    // 0x150A6F94: nop

;}
RECOMP_FUNC void func_15036148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15036148: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x1503614C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x15036150: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x15036154: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x15036158: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x1503615C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x15036160: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x15036164: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x15036168: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x1503616C: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x15036170: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x15036174: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x15036178: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x1503617C: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x15036180: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x15036184: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15036188: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x1503618C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15036190: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x15036194: lw          $t7, 0x5F0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5F0);
    // 0x15036198: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1503619C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x150361A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x150361A4: bne         $t8, $zero, L_150362C8
    if (ctx->r24 != 0) {
        // 0x150361A8: addiu       $s6, $zero, 0x19
        ctx->r22 = ADD32(0, 0X19);
            goto L_150362C8;
    }
    // 0x150361A8: addiu       $s6, $zero, 0x19
    ctx->r22 = ADD32(0, 0X19);
    // 0x150361AC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x150361B0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150361B4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150361B8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150361BC: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150361C0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x150361C4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150361C8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150361CC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x150361D0: lwc1        $f22, 0x7D74($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X7D74);
    // 0x150361D4: addiu       $s5, $sp, 0x8E
    ctx->r21 = ADD32(ctx->r29, 0X8E);
    // 0x150361D8: addiu       $s4, $sp, 0x90
    ctx->r20 = ADD32(ctx->r29, 0X90);
    // 0x150361DC: addiu       $s3, $sp, 0x92
    ctx->r19 = ADD32(ctx->r29, 0X92);
    // 0x150361E0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_150361E4:
    // 0x150361E4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x150361E8: beql        $t9, $zero, L_150362C0
    if (ctx->r25 == 0) {
        // 0x150361EC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150362C0;
    }
    goto skip_0;
    // 0x150361EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x150361F0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x150361F4: beql        $v0, $zero, L_15036208
    if (ctx->r2 == 0) {
        // 0x150361F8: lwc1        $f0, 0x118($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
            goto L_15036208;
    }
    goto skip_1;
    // 0x150361F8: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
    skip_1:
    // 0x150361FC: bnel        $s2, $v0, L_150362C0
    if (ctx->r18 != ctx->r2) {
        // 0x15036200: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150362C0;
    }
    goto skip_2;
    // 0x15036200: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x15036204: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
L_15036208:
    // 0x15036208: c.eq.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
    // 0x1503620C: nop

    // 0x15036210: bc1tl       L_150362C0
    if (c1cs) {
        // 0x15036214: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150362C0;
    }
    goto skip_3;
    // 0x15036214: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x15036218: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1503621C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15036220: nop

    // 0x15036224: bc1fl       L_150362C0
    if (!c1cs) {
        // 0x15036228: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150362C0;
    }
    goto skip_4;
    // 0x15036228: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x1503622C: lwc1        $f6, 0x180($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X180);
    // 0x15036230: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15036234: nop

    // 0x15036238: bc1fl       L_150362C0
    if (!c1cs) {
        // 0x1503623C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150362C0;
    }
    goto skip_5;
    // 0x1503623C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x15036240: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15036244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15036248: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x1503624C: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x15036250: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x15036254: bc1fl       L_150362C0
    if (!c1cs) {
        // 0x15036258: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150362C0;
    }
    goto skip_6;
    // 0x15036258: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x1503625C: jal         0x1507C3E0
    // 0x15036260: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_1507C3E0(rdram, ctx);
        goto after_0;
    // 0x15036260: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_0:
    // 0x15036264: lh          $t0, 0x92($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X92);
    // 0x15036268: lwc1        $f0, 0x118($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X118);
    // 0x1503626C: lwc1        $f18, 0x180($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X180);
    // 0x15036270: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x15036274: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15036278: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x1503627C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x15036280: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15036284: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x15036288: nop

    // 0x1503628C: bc1fl       L_150362C0
    if (!c1cs) {
        // 0x15036290: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_150362C0;
    }
    goto skip_7;
    // 0x15036290: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x15036294: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15036298: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1503629C: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x150362A0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x150362A4: swc1        $f20, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f20.u32l;
    // 0x150362A8: swc1        $f26, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f26.u32l;
    // 0x150362AC: swc1        $f28, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f28.u32l;
    // 0x150362B0: swc1        $f30, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f30.u32l;
    // 0x150362B4: jal         0x15035808
    // 0x150362B8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_15035808(rdram, ctx);
        goto after_1;
    // 0x150362B8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x150362BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_150362C0:
    // 0x150362C0: bne         $s1, $s6, L_150361E4
    if (ctx->r17 != ctx->r22) {
        // 0x150362C4: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_150361E4;
    }
    // 0x150362C4: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_150362C8:
    // 0x150362C8: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x150362CC: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x150362D0: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x150362D4: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x150362D8: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x150362DC: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x150362E0: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x150362E4: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x150362E8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x150362EC: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x150362F0: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x150362F4: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x150362F8: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x150362FC: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x15036300: jr          $ra
    // 0x15036304: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x15036304: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_15004E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15004E80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15004E84: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15004E88: addiu       $v0, $v0, 0x3E7C
    ctx->r2 = ADD32(ctx->r2, 0X3E7C);
    // 0x15004E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15004E90: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x15004E94: lw          $t6, 0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XDF0);
    // 0x15004E98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15004E9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15004EA0: lhu         $t7, 0x1A($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1A);
    // 0x15004EA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15004EA8: andi        $a0, $t7, 0xFFFF
    ctx->r4 = ctx->r15 & 0XFFFF;
    // 0x15004EAC: sll         $t8, $a0, 6
    ctx->r24 = S32(ctx->r4 << 6);
    // 0x15004EB0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x15004EB4: jal         0x10003C40
    // 0x15004EB8: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x15004EB8: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    after_0:
    // 0x15004EBC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15004EC0: lhu         $a0, 0x3E7C($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3E7C);
    // 0x15004EC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15004EC8: sw          $v0, 0x3E80($at)
    MEM_W(0X3E80, ctx->r1) = ctx->r2;
    // 0x15004ECC: sll         $t9, $a0, 6
    ctx->r25 = S32(ctx->r4 << 6);
    // 0x15004ED0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x15004ED4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15004ED8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x15004EDC: jal         0x10003C40
    // 0x15004EE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x15004EE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x15004EE4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15004EE8: sw          $v0, 0x3E84($at)
    MEM_W(0X3E84, ctx->r1) = ctx->r2;
    // 0x15004EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15004EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15004EF4: jr          $ra
    // 0x15004EF8: nop

    return;
    return;
    // 0x15004EF8: nop

;}
RECOMP_FUNC void func_151193F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151193F4: lw          $t6, 0x84($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X84);
    // 0x151193F8: bnel        $t6, $zero, L_15119414
    if (ctx->r14 != 0) {
        // 0x151193FC: lw          $v1, 0x7C($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X7C);
            goto L_15119414;
    }
    goto skip_0;
    // 0x151193FC: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    skip_0:
    // 0x15119400: lh          $t7, 0x12($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X12);
    // 0x15119404: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15119408: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x1511940C: sw          $t8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r24;
    // 0x15119410: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
L_15119414:
    // 0x15119414: beq         $v1, $zero, L_151194CC
    if (ctx->r3 == 0) {
        // 0x15119418: nop
    
            goto L_151194CC;
    }
    // 0x15119418: nop

    // 0x1511941C: lw          $a3, 0x3C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X3C);
    // 0x15119420: lw          $a1, 0x80($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X80);
    // 0x15119424: lw          $t9, 0x84($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X84);
    // 0x15119428: sra         $t3, $a3, 16
    ctx->r11 = S32(SIGNED(ctx->r7) >> 16);
    // 0x1511942C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x15119430: multu       $t4, $a1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15119434: lbu         $t5, 0x73($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X73);
    // 0x15119438: sll         $t1, $t9, 16
    ctx->r9 = S32(ctx->r25 << 16);
    // 0x1511943C: lh          $v0, 0x12($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X12);
    // 0x15119440: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x15119444: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x15119448: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x1511944C: andi        $t6, $t5, 0xFFFC
    ctx->r14 = ctx->r13 & 0XFFFC;
    // 0x15119450: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x15119454: sb          $t6, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r14;
    // 0x15119458: mflo        $t7
    ctx->r15 = lo;
    // 0x1511945C: bgez        $t7, L_1511946C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x15119460: sra         $t8, $t7, 8
        ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
            goto L_1511946C;
    }
    // 0x15119460: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x15119464: addiu       $at, $t7, 0xFF
    ctx->r1 = ADD32(ctx->r15, 0XFF);
    // 0x15119468: sra         $t8, $at, 8
    ctx->r24 = S32(SIGNED(ctx->r1) >> 8);
L_1511946C:
    // 0x1511946C: addu        $t0, $t8, $a2
    ctx->r8 = ADD32(ctx->r24, ctx->r6);
    // 0x15119470: beq         $t0, $v0, L_151194C0
    if (ctx->r8 == ctx->r2) {
        // 0x15119474: subu        $a1, $v0, $t0
        ctx->r5 = SUB32(ctx->r2, ctx->r8);
            goto L_151194C0;
    }
    // 0x15119474: subu        $a1, $v0, $t0
    ctx->r5 = SUB32(ctx->r2, ctx->r8);
    // 0x15119478: bgez        $a1, L_151194A0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1511947C: slt         $at, $a1, $v1
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_151194A0;
    }
    // 0x1511947C: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15119480: negu        $t9, $a1
    ctx->r25 = SUB32(0, ctx->r5);
    // 0x15119484: slt         $at, $t9, $v1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x15119488: beq         $at, $zero, L_15119498
    if (ctx->r1 == 0) {
        // 0x1511948C: addu        $t1, $v0, $v1
        ctx->r9 = ADD32(ctx->r2, ctx->r3);
            goto L_15119498;
    }
    // 0x1511948C: addu        $t1, $v0, $v1
    ctx->r9 = ADD32(ctx->r2, ctx->r3);
    // 0x15119490: b           L_151194B4
    // 0x15119494: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
        goto L_151194B4;
    // 0x15119494: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
L_15119498:
    // 0x15119498: b           L_151194B4
    // 0x1511949C: sh          $t1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r9;
        goto L_151194B4;
    // 0x1511949C: sh          $t1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r9;
L_151194A0:
    // 0x151194A0: beq         $at, $zero, L_151194B0
    if (ctx->r1 == 0) {
        // 0x151194A4: subu        $t2, $v0, $v1
        ctx->r10 = SUB32(ctx->r2, ctx->r3);
            goto L_151194B0;
    }
    // 0x151194A4: subu        $t2, $v0, $v1
    ctx->r10 = SUB32(ctx->r2, ctx->r3);
    // 0x151194A8: b           L_151194B4
    // 0x151194AC: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
        goto L_151194B4;
    // 0x151194AC: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
L_151194B0:
    // 0x151194B0: sh          $t2, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r10;
L_151194B4:
    // 0x151194B4: lbu         $t3, 0x73($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X73);
    // 0x151194B8: jr          $ra
    // 0x151194BC: sb          $t3, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r11;
    return;
    return;
    // 0x151194BC: sb          $t3, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r11;
L_151194C0:
    // 0x151194C0: lbu         $t4, 0x73($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X73);
    // 0x151194C4: ori         $t5, $t4, 0x3
    ctx->r13 = ctx->r12 | 0X3;
    // 0x151194C8: sb          $t5, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r13;
L_151194CC:
    // 0x151194CC: jr          $ra
    // 0x151194D0: nop

    return;
    return;
    // 0x151194D0: nop

;}
RECOMP_FUNC void func_1511A7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511A7C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1511A7C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1511A7C8: lw          $v0, 0x80($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X80);
    // 0x1511A7CC: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x1511A7D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511A7D4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1511A7D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511A7DC: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x1511A7E0: sb          $t6, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r14;
    // 0x1511A7E4: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x1511A7E8: sb          $zero, 0x1C($v0)
    MEM_B(0X1C, ctx->r2) = 0;
    // 0x1511A7EC: sb          $t7, 0x1D($v0)
    MEM_B(0X1D, ctx->r2) = ctx->r15;
    // 0x1511A7F0: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x1511A7F4: swc1        $f6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f6.u32l;
    // 0x1511A7F8: lhu         $t8, 0x16($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X16);
    // 0x1511A7FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1511A800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1511A804: blez        $t8, L_1511A830
    if (SIGNED(ctx->r24) <= 0) {
        // 0x1511A808: nop
    
            goto L_1511A830;
    }
    // 0x1511A808: nop

    // 0x1511A80C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
L_1511A810:
    // 0x1511A810: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1511A814: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x1511A818: swc1        $f0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f0.u32l;
    // 0x1511A81C: lhu         $t1, 0x16($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X16);
    // 0x1511A820: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1511A824: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x1511A828: bnel        $at, $zero, L_1511A810
    if (ctx->r1 != 0) {
        // 0x1511A82C: lw          $t9, 0x4($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X4);
            goto L_1511A810;
    }
    goto skip_0;
    // 0x1511A82C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    skip_0:
L_1511A830:
    // 0x1511A830: jr          $ra
    // 0x1511A834: nop

    return;
    return;
    // 0x1511A834: nop

;}
RECOMP_FUNC void func_150AEDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150AEDF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150AEDFC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150AEE00: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150AEE04: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150AEE08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150AEE0C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150AEE10: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150AEE14: bne         $a2, $at, L_150AEE64
    if (ctx->r6 != ctx->r1) {
        // 0x150AEE18: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_150AEE64;
    }
    // 0x150AEE18: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x150AEE1C: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x150AEE20: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x150AEE24: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150AEE28: bnel        $v1, $a0, L_150AEE48
    if (ctx->r3 != ctx->r4) {
        // 0x150AEE2C: lw          $t9, 0x4($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X4);
            goto L_150AEE48;
    }
    goto skip_0;
    // 0x150AEE2C: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    skip_0:
    // 0x150AEE30: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x150AEE34: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x150AEE38: lbu         $t8, 0x9($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X9);
    // 0x150AEE3C: b           L_150AEE94
    // 0x150AEE40: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
        goto L_150AEE94;
    // 0x150AEE40: sb          $t8, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r24;
    // 0x150AEE44: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
L_150AEE48:
    // 0x150AEE48: bnel        $t9, $a0, L_150AEE98
    if (ctx->r25 != ctx->r4) {
        // 0x150AEE4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150AEE98;
    }
    goto skip_1;
    // 0x150AEE4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150AEE50: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x150AEE54: lbu         $t0, 0x8($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X8);
    // 0x150AEE58: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x150AEE5C: b           L_150AEE98
    // 0x150AEE60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150AEE98;
    // 0x150AEE60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150AEE64:
    // 0x150AEE64: bne         $v0, $zero, L_150AEE94
    if (ctx->r2 != 0) {
        // 0x150AEE68: addiu       $v0, $a3, 0x28
        ctx->r2 = ADD32(ctx->r7, 0X28);
            goto L_150AEE94;
    }
    // 0x150AEE68: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x150AEE6C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150AEE70: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150AEE74: beq         $v1, $t1, L_150AEE8C
    if (ctx->r3 == ctx->r9) {
        // 0x150AEE78: nop
    
            goto L_150AEE8C;
    }
    // 0x150AEE78: nop

    // 0x150AEE7C: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x150AEE80: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x150AEE84: bnel        $t2, $t3, L_150AEE98
    if (ctx->r10 != ctx->r11) {
        // 0x150AEE88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150AEE98;
    }
    goto skip_2;
    // 0x150AEE88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_150AEE8C:
    // 0x150AEE8C: jal         0x1516972C
    // 0x150AEE90: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150AEE90: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
L_150AEE94:
    // 0x150AEE94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150AEE98:
    // 0x150AEE98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150AEE9C: jr          $ra
    // 0x150AEEA0: nop

    return;
    return;
    // 0x150AEEA0: nop

    // 0x150AEEA4: nop

    // 0x150AEEA8: nop

    // 0x150AEEAC: nop

;}
RECOMP_FUNC void func_1513416C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513416C: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x15134170: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x15134174: beq         $at, $zero, L_15134180
    if (ctx->r1 == 0) {
        // 0x15134178: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_15134180;
    }
    // 0x15134178: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x1513417C: sb          $t6, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r14;
L_15134180:
    // 0x15134180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15134184: jr          $ra
    // 0x15134188: nop

    return;
    return;
    // 0x15134188: nop

;}
RECOMP_FUNC void func_150E9FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E9FE0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150E9FE4: lui         $at, 0xC160
    ctx->r1 = S32(0XC160 << 16);
    // 0x150E9FE8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x150E9FEC: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x150E9FF0: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x150E9FF4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150E9FF8: lh          $a3, 0x6E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X6E);
    // 0x150E9FFC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150EA000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150EA004: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x150EA008: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x150EA00C: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x150EA010: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150EA014: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x150EA018: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150EA01C: lui         $at, 0xC1A8
    ctx->r1 = S32(0XC1A8 << 16);
    // 0x150EA020: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150EA024: lui         $at, 0x4224
    ctx->r1 = S32(0X4224 << 16);
    // 0x150EA028: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150EA02C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150EA030: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150EA034: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA038: lwc1        $f18, 0x1410($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1410);
    // 0x150EA03C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EA040: sb          $t6, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r14;
    // 0x150EA044: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x150EA048: lwc1        $f4, 0x1414($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1414);
    // 0x150EA04C: lui         $t6, 0x1
    ctx->r14 = S32(0X1 << 16);
    // 0x150EA050: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x150EA054: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150EA058: addiu       $t9, $zero, 0x3C
    ctx->r25 = ADD32(0, 0X3C);
    // 0x150EA05C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x150EA060: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150EA064: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x150EA068: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150EA06C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x150EA070: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150EA074: ori         $t6, $t6, 0x1111
    ctx->r14 = ctx->r14 | 0X1111;
    // 0x150EA078: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x150EA07C: sb          $t7, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r15;
    // 0x150EA080: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x150EA084: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x150EA088: sb          $t8, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r24;
    // 0x150EA08C: sh          $t9, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r25;
    // 0x150EA090: sh          $t0, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r8;
    // 0x150EA094: sh          $a3, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r7;
    // 0x150EA098: sb          $t1, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r9;
    // 0x150EA09C: sb          $t2, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r10;
    // 0x150EA0A0: sb          $t3, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r11;
    // 0x150EA0A4: sb          $t4, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r12;
    // 0x150EA0A8: sb          $t5, 0x65($sp)
    MEM_B(0X65, ctx->r29) = ctx->r13;
    // 0x150EA0AC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150EA0B0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x150EA0B4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x150EA0B8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x150EA0BC: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x150EA0C0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x150EA0C4: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x150EA0C8: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x150EA0CC: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x150EA0D0: jal         0x15134DAC
    // 0x150EA0D4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_15134DAC(rdram, ctx);
        goto after_0;
    // 0x150EA0D4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150EA0D8: beq         $v0, $zero, L_150EA0F8
    if (ctx->r2 == 0) {
        // 0x150EA0DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150EA0F8;
    }
    // 0x150EA0DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150EA0E0: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x150EA0E4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x150EA0E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x150EA0EC: jal         0x10022EC0
    // 0x150EA0F0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150EA0F0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_1:
    // 0x150EA0F4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_150EA0F8:
    // 0x150EA0F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150EA0FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150EA100: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x150EA104: jr          $ra
    // 0x150EA108: nop

    return;
    return;
    // 0x150EA108: nop

;}
RECOMP_FUNC void func_151938E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151938E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151938E8: lwc1        $f4, -0x7E18($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7E18);
    // 0x151938EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151938F0: swc1        $f4, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f4.u32l;
    // 0x151938F4: jr          $ra
    // 0x151938F8: nop

    return;
    return;
    // 0x151938F8: nop

;}
RECOMP_FUNC void func_15011C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15011C40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15011C44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15011C48: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15011C4C: addiu       $a0, $a0, -0x1B00
    ctx->r4 = ADD32(ctx->r4, -0X1B00);
    // 0x15011C50: jal         0x100226F0
    // 0x15011C54: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15011C54: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x15011C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15011C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15011C60: jr          $ra
    // 0x15011C64: nop

    return;
    return;
    // 0x15011C64: nop

;}
RECOMP_FUNC void func_1509759C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509759C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150975A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150975A4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150975A8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150975AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150975B0: lui         $t8, 0x8008
    ctx->r24 = S32(0X8008 << 16);
    // 0x150975B4: lw          $t8, 0x2FA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2FA0);
    // 0x150975B8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150975BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150975C0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150975C4: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x150975C8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150975CC: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x150975D0: slt         $at, $t8, $a0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x150975D4: beq         $at, $zero, L_150975E4
    if (ctx->r1 == 0) {
        // 0x150975D8: addu        $a3, $t6, $t7
        ctx->r7 = ADD32(ctx->r14, ctx->r15);
            goto L_150975E4;
    }
    // 0x150975D8: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x150975DC: b           L_15097788
    // 0x150975E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15097788;
    // 0x150975E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150975E4:
    // 0x150975E4: addiu       $t9, $a1, -0x1D
    ctx->r25 = ADD32(ctx->r5, -0X1D);
    // 0x150975E8: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x150975EC: beq         $at, $zero, L_15097784
    if (ctx->r1 == 0) {
        // 0x150975F0: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_15097784;
    }
    // 0x150975F0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150975F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150975F8: addu        $at, $at, $t9
    gpr jr_addend_15097600 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x150975FC: lw          $t9, -0x20C8($at)
    ctx->r25 = ADD32(ctx->r1, -0X20C8);
    // 0x15097600: jr          $t9
    // 0x15097604: nop

    switch (jr_addend_15097600 >> 2) {
        case 0: goto L_15097648; break;
        case 1: goto L_15097628; break;
        case 2: goto L_15097608; break;
        case 3: goto L_15097668; break;
        case 4: goto L_150976D4; break;
        default: switch_error(__func__, 0x15097600, 0x8009DF38);
    }
    // 0x15097604: nop

L_15097608:
    // 0x15097608: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x1509760C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15097610: lwc1        $f4, 0x390($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X390);
    // 0x15097614: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15097618: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1509761C: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x15097620: b           L_1509778C
    // 0x15097624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509778C;
    // 0x15097624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15097628:
    // 0x15097628: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x1509762C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15097630: lwc1        $f16, 0x37C($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X37C);
    // 0x15097634: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15097638: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1509763C: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x15097640: b           L_1509778C
    // 0x15097644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509778C;
    // 0x15097644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15097648:
    // 0x15097648: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x1509764C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15097650: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x15097654: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15097658: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1509765C: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x15097660: b           L_15097788
    // 0x15097664: lbu         $v0, 0x2DC0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DC0);
        goto L_15097788;
    // 0x15097664: lbu         $v0, 0x2DC0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2DC0);
L_15097668:
    // 0x15097668: lw          $t4, 0x8($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X8);
    // 0x1509766C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15097670: lw          $v1, -0x3FE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3FE0);
    // 0x15097674: andi        $t5, $t4, 0xFFF
    ctx->r13 = ctx->r12 & 0XFFF;
    // 0x15097678: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1509767C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x15097680: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x15097684: addu        $v1, $t6, $v1
    ctx->r3 = ADD32(ctx->r14, ctx->r3);
    // 0x15097688: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x1509768C: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x15097690: lwc1        $f8, 0x2F8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X2F8);
    // 0x15097694: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15097698: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1509769C: lwc1        $f18, 0x300($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X300);
    // 0x150976A0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150976A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150976A8: sub.s       $f2, $f8, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x150976AC: sub.s       $f12, $f18, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x150976B0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150976B4: nop

    // 0x150976B8: mul.s       $f8, $f12, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150976BC: add.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150976C0: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150976C4: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x150976C8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x150976CC: b           L_15097788
    // 0x150976D0: nop

        goto L_15097788;
    // 0x150976D0: nop

L_150976D4:
    // 0x150976D4: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x150976D8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x150976DC: andi        $t0, $a0, 0xFFF
    ctx->r8 = ctx->r4 & 0XFFF;
    // 0x150976E0: jal         0x1505EEF4
    // 0x150976E4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_1505EEF4(rdram, ctx);
        goto after_0;
    // 0x150976E4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_0:
    // 0x150976E8: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x150976EC: bne         $v0, $zero, L_150976FC
    if (ctx->r2 != 0) {
        // 0x150976F0: sw          $v0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r2;
            goto L_150976FC;
    }
    // 0x150976F0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x150976F4: b           L_15097788
    // 0x150976F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15097788;
    // 0x150976F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150976FC:
    // 0x150976FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15097700: lwc1        $f18, -0x20B4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X20B4);
    // 0x15097704: lwc1        $f4, 0x39C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X39C);
    // 0x15097708: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x1509770C: add.s       $f12, $f4, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x15097710: jal         0x15047D60
    // 0x15097714: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x15097714: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x15097718: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1509771C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15097720: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x15097724: jal         0x15047C00
    // 0x15097728: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x15097728: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x1509772C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x15097730: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x15097734: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x15097738: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x1509773C: addiu       $a0, $a3, 0x2F8
    ctx->r4 = ADD32(ctx->r7, 0X2F8);
    // 0x15097740: jal         0x15048F90
    // 0x15097744: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_15048F90(rdram, ctx);
        goto after_3;
    // 0x15097744: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_3:
    // 0x15097748: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1509774C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x15097750: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x15097754: jal         0x150AD900
    // 0x15097758: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    func_150AD900(rdram, ctx);
        goto after_4;
    // 0x15097758: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x1509775C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15097760: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15097764: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x15097768: nop

    // 0x1509776C: bc1f        L_1509777C
    if (!c1cs) {
        // 0x15097770: nop
    
            goto L_1509777C;
    }
    // 0x15097770: nop

    // 0x15097774: b           L_15097788
    // 0x15097778: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_15097788;
    // 0x15097778: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1509777C:
    // 0x1509777C: b           L_15097788
    // 0x15097780: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_15097788;
    // 0x15097780: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_15097784:
    // 0x15097784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15097788:
    // 0x15097788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509778C:
    // 0x1509778C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15097790: jr          $ra
    // 0x15097794: nop

    return;
    return;
    // 0x15097794: nop

;}
RECOMP_FUNC void func_15015F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15015F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15015F44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15015F48: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15015F4C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15015F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15015F54: addiu       $t8, $a1, -0x1A
    ctx->r24 = ADD32(ctx->r5, -0X1A);
    // 0x15015F58: sltiu       $at, $t8, 0x26
    ctx->r1 = ctx->r24 < 0X26 ? 1 : 0;
    // 0x15015F5C: beq         $at, $zero, L_15015F98
    if (ctx->r1 == 0) {
        // 0x15015F60: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15015F98;
    }
    // 0x15015F60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15015F64: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15015F68: addu        $at, $at, $t8
    gpr jr_addend_15015F70 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x15015F6C: lw          $t8, 0x66C0($at)
    ctx->r24 = ADD32(ctx->r1, 0X66C0);
    // 0x15015F70: jr          $t8
    // 0x15015F74: nop

    switch (jr_addend_15015F70 >> 2) {
        case 0: goto L_15015F78; break;
        case 1: goto L_15015F98; break;
        case 2: goto L_15015F98; break;
        case 3: goto L_15015F98; break;
        case 4: goto L_15015F98; break;
        case 5: goto L_15015F98; break;
        case 6: goto L_15015F98; break;
        case 7: goto L_15015F98; break;
        case 8: goto L_15015F98; break;
        case 9: goto L_15015F98; break;
        case 10: goto L_15015F78; break;
        case 11: goto L_15015F98; break;
        case 12: goto L_15015F98; break;
        case 13: goto L_15015F98; break;
        case 14: goto L_15015F98; break;
        case 15: goto L_15015F98; break;
        case 16: goto L_15015F98; break;
        case 17: goto L_15015F78; break;
        case 18: goto L_15015F98; break;
        case 19: goto L_15015F78; break;
        case 20: goto L_15015F98; break;
        case 21: goto L_15015F98; break;
        case 22: goto L_15015F78; break;
        case 23: goto L_15015F98; break;
        case 24: goto L_15015F98; break;
        case 25: goto L_15015F78; break;
        case 26: goto L_15015F78; break;
        case 27: goto L_15015F98; break;
        case 28: goto L_15015F98; break;
        case 29: goto L_15015F98; break;
        case 30: goto L_15015F98; break;
        case 31: goto L_15015F98; break;
        case 32: goto L_15015F98; break;
        case 33: goto L_15015F98; break;
        case 34: goto L_15015F98; break;
        case 35: goto L_15015F98; break;
        case 36: goto L_15015F98; break;
        case 37: goto L_15015F78; break;
        default: switch_error(__func__, 0x15015F70, 0x800966C0);
    }
    // 0x15015F74: nop

L_15015F78:
    // 0x15015F78: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15015F7C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15015F80: jal         0x151E5FAC
    // 0x15015F84: sb          $t9, -0x19EA($at)
    MEM_B(-0X19EA, ctx->r1) = ctx->r25;
    func_151E5FAC(rdram, ctx);
        goto after_0;
    // 0x15015F84: sb          $t9, -0x19EA($at)
    MEM_B(-0X19EA, ctx->r1) = ctx->r25;
    after_0:
    // 0x15015F88: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x15015F8C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15015F90: b           L_15015FAC
    // 0x15015F94: sw          $t0, -0x1618($at)
    MEM_W(-0X1618, ctx->r1) = ctx->r8;
        goto L_15015FAC;
    // 0x15015F94: sw          $t0, -0x1618($at)
    MEM_W(-0X1618, ctx->r1) = ctx->r8;
L_15015F98:
    // 0x15015F98: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15015F9C: sb          $zero, -0x19EA($at)
    MEM_B(-0X19EA, ctx->r1) = 0;
    // 0x15015FA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15015FA4: addiu       $t1, $a0, -0x1
    ctx->r9 = ADD32(ctx->r4, -0X1);
    // 0x15015FA8: sw          $t1, -0x1618($at)
    MEM_W(-0X1618, ctx->r1) = ctx->r9;
L_15015FAC:
    // 0x15015FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15015FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15015FB4: jr          $ra
    // 0x15015FB8: nop

    return;
    return;
    // 0x15015FB8: nop

;}
RECOMP_FUNC void func_150BB260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BB260: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150BB264: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150BB268: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x150BB26C: beq         $v1, $zero, L_150BB3FC
    if (ctx->r3 == 0) {
        // 0x150BB270: andi        $a2, $v1, 0x3
        ctx->r6 = ctx->r3 & 0X3;
            goto L_150BB3FC;
    }
    // 0x150BB270: andi        $a2, $v1, 0x3
    ctx->r6 = ctx->r3 & 0X3;
    // 0x150BB274: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x150BB278: beq         $a2, $zero, L_150BB2E0
    if (ctx->r6 == 0) {
        // 0x150BB27C: addu        $a1, $a2, $v1
        ctx->r5 = ADD32(ctx->r6, ctx->r3);
            goto L_150BB2E0;
    }
    // 0x150BB27C: addu        $a1, $a2, $v1
    ctx->r5 = ADD32(ctx->r6, ctx->r3);
    // 0x150BB280: addiu       $v0, $a0, 0xA8
    ctx->r2 = ADD32(ctx->r4, 0XA8);
    // 0x150BB284: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB288: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB28C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150BB290: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB294: beql        $a1, $v1, L_150BB2CC
    if (ctx->r5 == ctx->r3) {
        // 0x150BB298: swc1        $f18, 0x58($a0)
        MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
            goto L_150BB2CC;
    }
    goto skip_0;
    // 0x150BB298: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    skip_0:
    // 0x150BB29C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
L_150BB2A0:
    // 0x150BB2A0: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    // 0x150BB2A4: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB2A8: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB2AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x150BB2B0: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB2B4: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB2B8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB2BC: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB2C0: bnel        $a1, $v1, L_150BB2A0
    if (ctx->r5 != ctx->r3) {
        // 0x150BB2C4: lwc1        $f16, 0x60($a0)
        ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
            goto L_150BB2A0;
    }
    goto skip_1;
    // 0x150BB2C4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    skip_1:
    // 0x150BB2C8: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
L_150BB2CC:
    // 0x150BB2CC: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB2D0: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150BB2D4: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB2D8: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB2DC: beq         $v1, $zero, L_150BB3FC
    if (ctx->r3 == 0) {
        // 0x150BB2E0: addiu       $v0, $a0, 0xA8
        ctx->r2 = ADD32(ctx->r4, 0XA8);
            goto L_150BB3FC;
    }
L_150BB2E0:
    // 0x150BB2E0: addiu       $v0, $a0, 0xA8
    ctx->r2 = ADD32(ctx->r4, 0XA8);
    // 0x150BB2E4: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB2E8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB2EC: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x150BB2F0: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB2F4: beql        $v1, $zero, L_150BB38C
    if (ctx->r3 == 0) {
        // 0x150BB2F8: swc1        $f18, 0x58($a0)
        MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
            goto L_150BB38C;
    }
    goto skip_2;
    // 0x150BB2F8: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    skip_2:
    // 0x150BB2FC: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
L_150BB300:
    // 0x150BB300: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
    // 0x150BB304: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB308: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB30C: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x150BB310: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB314: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB318: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB31C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150BB320: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB324: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150BB328: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB32C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB330: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB334: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB338: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB33C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150BB340: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB344: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150BB348: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB34C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB350: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB354: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB358: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB35C: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150BB360: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB364: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150BB368: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB36C: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB370: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB374: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB378: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB37C: mul.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB380: bnel        $v1, $zero, L_150BB300
    if (ctx->r3 != 0) {
        // 0x150BB384: lwc1        $f16, 0x60($a0)
        ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
            goto L_150BB300;
    }
    goto skip_3;
    // 0x150BB384: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    skip_3:
    // 0x150BB388: swc1        $f18, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f18.u32l;
L_150BB38C:
    // 0x150BB38C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB390: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150BB394: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB398: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB39C: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB3A0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB3A4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150BB3A8: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB3AC: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150BB3B0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB3B4: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB3B8: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB3BC: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB3C0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB3C4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150BB3C8: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB3CC: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150BB3D0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB3D4: lwc1        $f12, 0x58($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X58);
    // 0x150BB3D8: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB3DC: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
    // 0x150BB3E0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB3E4: lwc1        $f16, 0x60($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150BB3E8: mul.s       $f14, $f12, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x150BB3EC: swc1        $f14, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f14.u32l;
    // 0x150BB3F0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150BB3F4: mul.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x150BB3F8: swc1        $f14, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f14.u32l;
L_150BB3FC:
    // 0x150BB3FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150BB400: jr          $ra
    // 0x150BB404: nop

    return;
    return;
    // 0x150BB404: nop

;}
RECOMP_FUNC void func_15053694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15053694: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15053698: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1505369C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x150536A0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x150536A4: sh          $zero, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = 0;
    // 0x150536A8: sh          $zero, 0xE6($a0)
    MEM_H(0XE6, ctx->r4) = 0;
    // 0x150536AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150536B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x150536B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150536B8: jal         0x1506160C
    // 0x150536BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1506160C(rdram, ctx);
        goto after_0;
    // 0x150536BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x150536C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150536C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150536C8: jr          $ra
    // 0x150536CC: nop

    return;
    return;
    // 0x150536CC: nop

;}
RECOMP_FUNC void func_150C9DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C9DC4: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x150C9DC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150C9DCC: sw          $a0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r4;
    // 0x150C9DD0: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x150C9DD4: sw          $a2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r6;
    // 0x150C9DD8: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x150C9DDC: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x150C9DE0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x150C9DE4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x150C9DE8: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x150C9DEC: jal         0x150CCD90
    // 0x150C9DF0: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    func_150CCD90(rdram, ctx);
        goto after_0;
    // 0x150C9DF0: lwc1        $f12, 0x8($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X8);
    after_0:
    // 0x150C9DF4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C9DF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150C9DFC: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x150C9E00: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150C9E04: addiu       $t7, $sp, 0x5C
    ctx->r15 = ADD32(ctx->r29, 0X5C);
    // 0x150C9E08: addiu       $t2, $zero, 0x29E8
    ctx->r10 = ADD32(0, 0X29E8);
    // 0x150C9E0C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150C9E10: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x150C9E14: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x150C9E18: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150C9E1C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150C9E20: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x150C9E24: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x150C9E28: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x150C9E2C: jal         0x150ADA68
    // 0x150C9E30: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150C9E30: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    after_1:
    // 0x150C9E34: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150C9E38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C9E3C: nop

    // 0x150C9E40: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150C9E44: jal         0x150ADA68
    // 0x150C9E48: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150C9E48: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x150C9E4C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150C9E50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C9E54: nop

    // 0x150C9E58: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150C9E5C: jal         0x150ADA68
    // 0x150C9E60: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150C9E60: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x150C9E64: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150C9E68: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C9E6C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C9E70: lwc1        $f4, 0x580($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X580);
    // 0x150C9E74: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150C9E78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C9E7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150C9E80: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150C9E84: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x150C9E88: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x150C9E8C: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x150C9E90: swc1        $f18, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f18.u32l;
    // 0x150C9E94: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x150C9E98: jal         0x150ADA20
    // 0x150C9E9C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150C9E9C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x150C9EA0: jal         0x150ADA68
    // 0x150C9EA4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150C9EA4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_5:
    // 0x150C9EA8: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150C9EAC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x150C9EB0: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x150C9EB4: lbu         $a0, 0xBB($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XBB);
    // 0x150C9EB8: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x150C9EBC: lui         $at, 0x42A2
    ctx->r1 = S32(0X42A2 << 16);
    // 0x150C9EC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C9EC4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x150C9EC8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C9ECC: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150C9ED0: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x150C9ED4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C9ED8: lwc1        $f10, 0x584($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X584);
    // 0x150C9EDC: mfhi        $t4
    ctx->r12 = hi;
    // 0x150C9EE0: addiu       $a1, $t4, -0x2D
    ctx->r5 = ADD32(ctx->r12, -0X2D);
    // 0x150C9EE4: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x150C9EE8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150C9EEC: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x150C9EF0: addiu       $a3, $sp, 0x68
    ctx->r7 = ADD32(ctx->r29, 0X68);
    // 0x150C9EF4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C9EF8: nop

    // 0x150C9EFC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C9F00: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x150C9F04: jal         0x15143794
    // 0x150C9F08: nop

    func_15143794(rdram, ctx);
        goto after_6;
    // 0x150C9F08: nop

    after_6:
    // 0x150C9F0C: jal         0x150ADA68
    // 0x150C9F10: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150C9F10: nop

    after_7:
    // 0x150C9F14: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x150C9F18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C9F1C: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x150C9F20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C9F24: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C9F28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C9F2C: lwc1        $f10, 0x588($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X588);
    // 0x150C9F30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C9F34: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C9F38: jal         0x150ADA68
    // 0x150C9F3C: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150C9F3C: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x150C9F40: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x150C9F44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C9F48: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x150C9F4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C9F50: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C9F54: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C9F58: lwc1        $f10, 0x58C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X58C);
    // 0x150C9F5C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C9F60: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C9F64: jal         0x150ADA20
    // 0x150C9F68: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150C9F68: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x150C9F6C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x150C9F70: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C9F74: mfhi        $t9
    ctx->r25 = hi;
    // 0x150C9F78: addiu       $t7, $t9, 0x28
    ctx->r15 = ADD32(ctx->r25, 0X28);
    // 0x150C9F7C: jal         0x150ADA68
    // 0x150C9F80: sh          $t7, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150C9F80: sh          $t7, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r15;
    after_10:
    // 0x150C9F84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C9F88: lwc1        $f18, 0x590($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X590);
    // 0x150C9F8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C9F90: lwc1        $f6, 0x594($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X594);
    // 0x150C9F94: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C9F98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C9F9C: lwc1        $f10, 0x598($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X598);
    // 0x150C9FA0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C9FA4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C9FA8: jal         0x150ADA68
    // 0x150C9FAC: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150C9FAC: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    after_11:
    // 0x150C9FB0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x150C9FB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C9FB8: lui         $at, 0x4347
    ctx->r1 = S32(0X4347 << 16);
    // 0x150C9FBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150C9FC0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150C9FC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C9FC8: lwc1        $f10, 0x59C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X59C);
    // 0x150C9FCC: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x150C9FD0: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x150C9FD4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C9FD8: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150C9FDC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150C9FE0: jal         0x150ADA20
    // 0x150C9FE4: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150C9FE4: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    after_12:
    // 0x150C9FE8: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150C9FEC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C9FF0: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x150C9FF4: mfhi        $t8
    ctx->r24 = hi;
    // 0x150C9FF8: addiu       $t1, $t8, 0x9B
    ctx->r9 = ADD32(ctx->r24, 0X9B);
    // 0x150C9FFC: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x150CA000: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x150CA004: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x150CA008: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x150CA00C: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    // 0x150CA010: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    // 0x150CA014: sb          $zero, 0x96($sp)
    MEM_B(0X96, ctx->r29) = 0;
    // 0x150CA018: sb          $zero, 0x97($sp)
    MEM_B(0X97, ctx->r29) = 0;
    // 0x150CA01C: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x150CA020: sb          $zero, 0x99($sp)
    MEM_B(0X99, ctx->r29) = 0;
    // 0x150CA024: sb          $zero, 0x9A($sp)
    MEM_B(0X9A, ctx->r29) = 0;
    // 0x150CA028: sb          $zero, 0x9B($sp)
    MEM_B(0X9B, ctx->r29) = 0;
    // 0x150CA02C: sb          $zero, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = 0;
    // 0x150CA030: sb          $t3, 0x9E($sp)
    MEM_B(0X9E, ctx->r29) = ctx->r11;
    // 0x150CA034: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150CA038: sb          $zero, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = 0;
    // 0x150CA03C: sh          $t4, 0xA6($sp)
    MEM_H(0XA6, ctx->r29) = ctx->r12;
    // 0x150CA040: sh          $t5, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r13;
    // 0x150CA044: lbu         $t0, 0xC($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0XC);
    // 0x150CA048: lw          $t9, 0xB0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB0);
    // 0x150CA04C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x150CA050: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x150CA054: lbu         $t7, 0x1($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X1);
    // 0x150CA058: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150CA05C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150CA060: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CA064: jal         0x15132A4C
    // 0x150CA068: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_15132A4C(rdram, ctx);
        goto after_13;
    // 0x150CA068: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_13:
    // 0x150CA06C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CA070: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x150CA074: jr          $ra
    // 0x150CA078: nop

    return;
    return;
    // 0x150CA078: nop

;}
RECOMP_FUNC void func_15093818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15093818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1509381C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15093820: beq         $a0, $zero, L_1509384C
    if (ctx->r4 == 0) {
        // 0x15093824: lui         $v0, 0x800D
        ctx->r2 = S32(0X800D << 16);
            goto L_1509384C;
    }
    // 0x15093824: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15093828: addiu       $v0, $v0, 0x2458
    ctx->r2 = ADD32(ctx->r2, 0X2458);
    // 0x1509382C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x15093830: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15093834: bne         $t6, $zero, L_1509384C
    if (ctx->r14 != 0) {
        // 0x15093838: nop
    
            goto L_1509384C;
    }
    // 0x15093838: nop

    // 0x1509383C: jal         0x15093878
    // 0x15093840: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    func_15093878(rdram, ctx);
        goto after_0;
    // 0x15093840: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    after_0:
    // 0x15093844: b           L_1509386C
    // 0x15093848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1509386C;
    // 0x15093848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509384C:
    // 0x1509384C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15093850: bne         $a0, $zero, L_15093868
    if (ctx->r4 != 0) {
        // 0x15093854: addiu       $v0, $v0, 0x2458
        ctx->r2 = ADD32(ctx->r2, 0X2458);
            goto L_15093868;
    }
    // 0x15093854: addiu       $v0, $v0, 0x2458
    ctx->r2 = ADD32(ctx->r2, 0X2458);
    // 0x15093858: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x1509385C: beql        $t8, $zero, L_1509386C
    if (ctx->r24 == 0) {
        // 0x15093860: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1509386C;
    }
    goto skip_0;
    // 0x15093860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15093864: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_15093868:
    // 0x15093868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1509386C:
    // 0x1509386C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15093870: jr          $ra
    // 0x15093874: nop

    return;
    return;
    // 0x15093874: nop

;}
RECOMP_FUNC void func_1512B1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512B1B8: addiu       $sp, $sp, -0xA78
    ctx->r29 = ADD32(ctx->r29, -0XA78);
    // 0x1512B1BC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1512B1C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1512B1C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512B1C8: lwc1        $f12, 0x3678($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3678);
    // 0x1512B1CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1512B1D0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x1512B1D4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1512B1D8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x1512B1DC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x1512B1E0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x1512B1E4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x1512B1E8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1512B1EC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1512B1F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1512B1F4: sw          $a2, 0xA80($sp)
    MEM_W(0XA80, ctx->r29) = ctx->r6;
    // 0x1512B1F8: sw          $a3, 0xA84($sp)
    MEM_W(0XA84, ctx->r29) = ctx->r7;
    // 0x1512B1FC: lbu         $t6, 0x23D($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X23D);
    // 0x1512B200: lh          $t8, 0x1B4($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X1B4);
    // 0x1512B204: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1512B208: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x1512B20C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x1512B210: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x1512B214: addiu       $t2, $t2, -0x3E00
    ctx->r10 = ADD32(ctx->r10, -0X3E00);
    // 0x1512B218: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x1512B21C: lh          $s2, 0x0($v0)
    ctx->r18 = MEM_H(ctx->r2, 0X0);
    // 0x1512B220: lwc1        $f0, 0x60C($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X60C);
    // 0x1512B224: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x1512B228: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x1512B22C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1512B230: lwc1        $f2, 0x610($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X610);
    // 0x1512B234: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512B238: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x1512B23C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x1512B240: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1512B244: addiu       $s4, $s4, -0x19D8
    ctx->r20 = ADD32(ctx->r20, -0X19D8);
    // 0x1512B248: addiu       $s7, $s7, -0x69D0
    ctx->r23 = ADD32(ctx->r23, -0X69D0);
    // 0x1512B24C: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x1512B250: addiu       $fp, $fp, -0x3F40
    ctx->r30 = ADD32(ctx->r30, -0X3F40);
    // 0x1512B254: addiu       $s6, $sp, 0x74
    ctx->r22 = ADD32(ctx->r29, 0X74);
    // 0x1512B258: addiu       $s5, $zero, 0x180
    ctx->r21 = ADD32(0, 0X180);
    // 0x1512B25C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1512B260: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x1512B264: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1512B268: swc1        $f16, 0x60C($s1)
    MEM_W(0X60C, ctx->r17) = ctx->f16.u32l;
    // 0x1512B26C: lwc1        $f18, 0x60C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X60C);
    // 0x1512B270: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x1512B274: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x1512B278: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1512B27C: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x1512B280: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x1512B284: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1512B288: nop

    // 0x1512B28C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512B290: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512B294: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1512B298: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x1512B29C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1512B2A0: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1512B2A4: mfc1        $s2, $f18
    ctx->r18 = (int32_t)ctx->f18.u32l;
    // 0x1512B2A8: nop

    // 0x1512B2AC: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x1512B2B0: sra         $t9, $t7, 16
    ctx->r25 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1512B2B4: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x1512B2B8: add.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x1512B2BC: swc1        $f16, 0x610($s1)
    MEM_W(0X610, ctx->r17) = ctx->f16.u32l;
    // 0x1512B2C0: bgez        $s2, L_1512B2D0
    if (SIGNED(ctx->r18) >= 0) {
        // 0x1512B2C4: sra         $t1, $s2, 2
        ctx->r9 = S32(SIGNED(ctx->r18) >> 2);
            goto L_1512B2D0;
    }
    // 0x1512B2C4: sra         $t1, $s2, 2
    ctx->r9 = S32(SIGNED(ctx->r18) >> 2);
    // 0x1512B2C8: addiu       $at, $s2, 0x3
    ctx->r1 = ADD32(ctx->r18, 0X3);
    // 0x1512B2CC: sra         $t1, $at, 2
    ctx->r9 = S32(SIGNED(ctx->r1) >> 2);
L_1512B2D0:
    // 0x1512B2D0: slt         $at, $t1, $s2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x1512B2D4: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x1512B2D8: beq         $at, $zero, L_1512B3E4
    if (ctx->r1 == 0) {
        // 0x1512B2DC: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_1512B3E4;
    }
    // 0x1512B2DC: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x1512B2E0: lbu         $t4, 0x23D($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X23D);
L_1512B2E4:
    // 0x1512B2E4: subu        $t8, $s3, $s0
    ctx->r24 = SUB32(ctx->r19, ctx->r16);
    // 0x1512B2E8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1512B2EC: multu       $t4, $s5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512B2F0: lw          $t3, 0x0($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X0);
    // 0x1512B2F4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1512B2F8: sll         $t9, $s3, 1
    ctx->r25 = S32(ctx->r19 << 1);
    // 0x1512B2FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1512B300: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x1512B304: mflo        $t5
    ctx->r13 = lo;
    // 0x1512B308: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1512B30C: lwc1        $f18, 0x2C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x1512B310: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x1512B314: nop

    // 0x1512B318: bc1fl       L_1512B3D4
    if (!c1cs) {
        // 0x1512B31C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1512B3D4;
    }
    goto skip_0;
    // 0x1512B31C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x1512B320: lw          $t7, 0x8BC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8BC);
    // 0x1512B324: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x1512B328: negu        $t4, $t2
    ctx->r12 = SUB32(0, ctx->r10);
    // 0x1512B32C: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x1512B330: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x1512B334: lhu         $t0, 0x0($t3)
    ctx->r8 = MEM_HU(ctx->r11, 0X0);
    // 0x1512B338: sra         $t5, $t0, 13
    ctx->r13 = S32(SIGNED(ctx->r8) >> 13);
    // 0x1512B33C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x1512B340: addu        $v1, $s7, $t6
    ctx->r3 = ADD32(ctx->r23, ctx->r14);
    // 0x1512B344: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x1512B348: sra         $t8, $t0, 2
    ctx->r24 = S32(SIGNED(ctx->r8) >> 2);
    // 0x1512B34C: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x1512B350: andi        $t7, $t8, 0x7FF
    ctx->r15 = ctx->r24 & 0X7FF;
    // 0x1512B354: sllv        $t2, $t7, $t9
    ctx->r10 = S32(ctx->r15 << (ctx->r25 & 31));
    // 0x1512B358: lw          $t5, 0xA84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA84);
    // 0x1512B35C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x1512B360: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x1512B364: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x1512B368: srl         $t3, $t4, 3
    ctx->r11 = S32(U32(ctx->r12) >> 3);
    // 0x1512B36C: addu        $t8, $s6, $t6
    ctx->r24 = ADD32(ctx->r22, ctx->r14);
    // 0x1512B370: negu        $t9, $t7
    ctx->r25 = SUB32(0, ctx->r15);
    // 0x1512B374: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x1512B378: subu        $a2, $t5, $t3
    ctx->r6 = SUB32(ctx->r13, ctx->r11);
    // 0x1512B37C: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x1512B380: lbu         $t2, 0x23D($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X23D);
    // 0x1512B384: sll         $t5, $s2, 2
    ctx->r13 = S32(ctx->r18 << 2);
    // 0x1512B388: subu        $t5, $t5, $s2
    ctx->r13 = SUB32(ctx->r13, ctx->r18);
    // 0x1512B38C: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x1512B390: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x1512B394: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1512B398: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x1512B39C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x1512B3A0: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1512B3A4: addu        $a1, $fp, $t4
    ctx->r5 = ADD32(ctx->r30, ctx->r12);
    // 0x1512B3A8: bgez        $t5, L_1512B3B8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1512B3AC: sra         $t3, $t5, 2
        ctx->r11 = S32(SIGNED(ctx->r13) >> 2);
            goto L_1512B3B8;
    }
    // 0x1512B3AC: sra         $t3, $t5, 2
    ctx->r11 = S32(SIGNED(ctx->r13) >> 2);
    // 0x1512B3B0: addiu       $at, $t5, 0x3
    ctx->r1 = ADD32(ctx->r13, 0X3);
    // 0x1512B3B4: sra         $t3, $at, 2
    ctx->r11 = S32(SIGNED(ctx->r1) >> 2);
L_1512B3B8:
    // 0x1512B3B8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1512B3BC: jal         0x1512B630
    // 0x1512B3C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1512B630(rdram, ctx);
        goto after_0;
    // 0x1512B3C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x1512B3C4: beql        $v0, $zero, L_1512B3D4
    if (ctx->r2 == 0) {
        // 0x1512B3C8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1512B3D4;
    }
    goto skip_1;
    // 0x1512B3C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x1512B3CC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x1512B3D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1512B3D4:
    // 0x1512B3D4: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x1512B3D8: bnel        $at, $zero, L_1512B2E4
    if (ctx->r1 != 0) {
        // 0x1512B3DC: lbu         $t4, 0x23D($s1)
        ctx->r12 = MEM_BU(ctx->r17, 0X23D);
            goto L_1512B2E4;
    }
    goto skip_2;
    // 0x1512B3DC: lbu         $t4, 0x23D($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X23D);
    skip_2:
    // 0x1512B3E0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
L_1512B3E4:
    // 0x1512B3E4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x1512B3E8: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x1512B3EC: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x1512B3F0: lui         $fp, 0x800E
    ctx->r30 = S32(0X800E << 16);
    // 0x1512B3F4: slt         $at, $t6, $s2
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x1512B3F8: addiu       $fp, $fp, -0x3F40
    ctx->r30 = ADD32(ctx->r30, -0X3F40);
    // 0x1512B3FC: addiu       $s7, $s7, -0x69D0
    ctx->r23 = ADD32(ctx->r23, -0X69D0);
    // 0x1512B400: addiu       $s4, $s4, -0x19D8
    ctx->r20 = ADD32(ctx->r20, -0X19D8);
    // 0x1512B404: addiu       $s5, $zero, 0x180
    ctx->r21 = ADD32(0, 0X180);
    // 0x1512B408: beq         $at, $zero, L_1512B50C
    if (ctx->r1 == 0) {
        // 0x1512B40C: addiu       $s6, $sp, 0x74
        ctx->r22 = ADD32(ctx->r29, 0X74);
            goto L_1512B50C;
    }
    // 0x1512B40C: addiu       $s6, $sp, 0x74
    ctx->r22 = ADD32(ctx->r29, 0X74);
    // 0x1512B410: lbu         $t9, 0x23D($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X23D);
L_1512B414:
    // 0x1512B414: addu        $t7, $s3, $s0
    ctx->r15 = ADD32(ctx->r19, ctx->r16);
    // 0x1512B418: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x1512B41C: multu       $t9, $s5
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1512B420: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x1512B424: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1512B428: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1512B42C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x1512B430: mflo        $t1
    ctx->r9 = lo;
    // 0x1512B434: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x1512B438: lwc1        $f16, 0x30($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X30);
    // 0x1512B43C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x1512B440: nop

    // 0x1512B444: bc1fl       L_1512B500
    if (!c1cs) {
        // 0x1512B448: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1512B500;
    }
    goto skip_3;
    // 0x1512B448: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
    // 0x1512B44C: lw          $t4, 0x8BC($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X8BC);
    // 0x1512B450: sll         $t5, $s3, 1
    ctx->r13 = S32(ctx->r19 << 1);
    // 0x1512B454: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x1512B458: addu        $t3, $t4, $t5
    ctx->r11 = ADD32(ctx->r12, ctx->r13);
    // 0x1512B45C: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x1512B460: lhu         $t0, 0x0($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X0);
    // 0x1512B464: sra         $t9, $t0, 13
    ctx->r25 = S32(SIGNED(ctx->r8) >> 13);
    // 0x1512B468: sll         $t8, $t9, 3
    ctx->r24 = S32(ctx->r25 << 3);
    // 0x1512B46C: addu        $v1, $s7, $t8
    ctx->r3 = ADD32(ctx->r23, ctx->r24);
    // 0x1512B470: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x1512B474: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x1512B478: sra         $t1, $t0, 2
    ctx->r9 = S32(SIGNED(ctx->r8) >> 2);
    // 0x1512B47C: andi        $t2, $t1, 0x7FF
    ctx->r10 = ctx->r9 & 0X7FF;
    // 0x1512B480: lw          $t9, 0xA84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA84);
    // 0x1512B484: sllv        $t5, $t2, $t4
    ctx->r13 = S32(ctx->r10 << (ctx->r12 & 31));
    // 0x1512B488: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x1512B48C: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x1512B490: srl         $t7, $t6, 3
    ctx->r15 = S32(U32(ctx->r14) >> 3);
    // 0x1512B494: addu        $t1, $s6, $t8
    ctx->r9 = ADD32(ctx->r22, ctx->r24);
    // 0x1512B498: sll         $t2, $s2, 2
    ctx->r10 = S32(ctx->r18 << 2);
    // 0x1512B49C: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x1512B4A0: subu        $a2, $t9, $t7
    ctx->r6 = SUB32(ctx->r25, ctx->r15);
    // 0x1512B4A4: sw          $a2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r6;
    // 0x1512B4A8: lbu         $t3, 0x23D($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X23D);
    // 0x1512B4AC: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x1512B4B0: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x1512B4B4: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x1512B4B8: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x1512B4BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1512B4C0: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x1512B4C4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1512B4C8: addu        $a1, $fp, $t5
    ctx->r5 = ADD32(ctx->r30, ctx->r13);
    // 0x1512B4CC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x1512B4D0: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x1512B4D4: bgez        $t6, L_1512B4E4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1512B4D8: sra         $t9, $t6, 2
        ctx->r25 = S32(SIGNED(ctx->r14) >> 2);
            goto L_1512B4E4;
    }
    // 0x1512B4D8: sra         $t9, $t6, 2
    ctx->r25 = S32(SIGNED(ctx->r14) >> 2);
    // 0x1512B4DC: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x1512B4E0: sra         $t9, $at, 2
    ctx->r25 = S32(SIGNED(ctx->r1) >> 2);
L_1512B4E4:
    // 0x1512B4E4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1512B4E8: jal         0x1512B630
    // 0x1512B4EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1512B630(rdram, ctx);
        goto after_1;
    // 0x1512B4EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x1512B4F0: beql        $v0, $zero, L_1512B500
    if (ctx->r2 == 0) {
        // 0x1512B4F4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_1512B500;
    }
    goto skip_4;
    // 0x1512B4F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x1512B4F8: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x1512B4FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_1512B500:
    // 0x1512B500: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x1512B504: bnel        $at, $zero, L_1512B414
    if (ctx->r1 != 0) {
        // 0x1512B508: lbu         $t9, 0x23D($s1)
        ctx->r25 = MEM_BU(ctx->r17, 0X23D);
            goto L_1512B414;
    }
    goto skip_5;
    // 0x1512B508: lbu         $t9, 0x23D($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X23D);
    skip_5:
L_1512B50C:
    // 0x1512B50C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1512B510: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1512B514: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1512B518: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1512B51C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x1512B520: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1512B524: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x1512B528: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x1512B52C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x1512B530: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x1512B534: jr          $ra
    // 0x1512B538: addiu       $sp, $sp, 0xA78
    ctx->r29 = ADD32(ctx->r29, 0XA78);
    return;
    return;
    // 0x1512B538: addiu       $sp, $sp, 0xA78
    ctx->r29 = ADD32(ctx->r29, 0XA78);
;}
RECOMP_FUNC void func_15195AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15195AA8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x15195AAC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x15195AB0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x15195AB4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x15195AB8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x15195ABC: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x15195AC0: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x15195AC4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15195AC8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x15195ACC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x15195AD0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x15195AD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x15195AD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x15195ADC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x15195AE0: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x15195AE4: or          $s5, $s7, $zero
    ctx->r21 = ctx->r23 | 0;
    // 0x15195AE8: bne         $fp, $zero, L_15195AF8
    if (ctx->r30 != 0) {
        // 0x15195AEC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15195AF8;
    }
    // 0x15195AEC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x15195AF0: b           L_15195CD0
    // 0x15195AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15195CD0;
    // 0x15195AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15195AF8:
    // 0x15195AF8: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x15195AFC: bne         $s7, $s1, L_15195B08
    if (ctx->r23 != ctx->r17) {
        // 0x15195B00: lw          $s6, 0x70($sp)
        ctx->r22 = MEM_W(ctx->r29, 0X70);
            goto L_15195B08;
    }
    // 0x15195B00: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x15195B04: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_15195B08:
    // 0x15195B08: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
L_15195B0C:
    // 0x15195B0C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x15195B10: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x15195B14: jal         0x15195868
    // 0x15195B18: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    func_15195868(rdram, ctx);
        goto after_0;
    // 0x15195B18: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x15195B1C: bne         $v0, $s1, L_15195B2C
    if (ctx->r2 != ctx->r17) {
        // 0x15195B20: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_15195B2C;
    }
    // 0x15195B20: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x15195B24: b           L_15195CA8
    // 0x15195B28: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
        goto L_15195CA8;
    // 0x15195B28: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_15195B2C:
    // 0x15195B2C: bne         $s4, $zero, L_15195B3C
    if (ctx->r20 != 0) {
        // 0x15195B30: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_15195B3C;
    }
    // 0x15195B30: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x15195B34: lui         $s4, 0x800E
    ctx->r20 = S32(0X800E << 16);
    // 0x15195B38: lw          $s4, 0x8F0($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X8F0);
L_15195B3C:
    // 0x15195B3C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x15195B40: lw          $s0, 0x8E8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X8E8);
    // 0x15195B44: addu        $v1, $fp, $t6
    ctx->r3 = ADD32(ctx->r30, ctx->r14);
    // 0x15195B48: lw          $s2, 0x4($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X4);
    // 0x15195B4C: beq         $s0, $zero, L_15195B78
    if (ctx->r16 == 0) {
        // 0x15195B50: lw          $a2, 0x0($v1)
        ctx->r6 = MEM_W(ctx->r3, 0X0);
            goto L_15195B78;
    }
    // 0x15195B50: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x15195B54: lh          $t7, 0x8($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X8);
    // 0x15195B58: beq         $t7, $zero, L_15195B78
    if (ctx->r15 == 0) {
        // 0x15195B5C: nop
    
            goto L_15195B78;
    }
    // 0x15195B5C: nop

    // 0x15195B60: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
L_15195B64:
    // 0x15195B64: beq         $s0, $zero, L_15195B78
    if (ctx->r16 == 0) {
        // 0x15195B68: nop
    
            goto L_15195B78;
    }
    // 0x15195B68: nop

    // 0x15195B6C: lh          $t8, 0x8($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8);
    // 0x15195B70: bnel        $t8, $zero, L_15195B64
    if (ctx->r24 != 0) {
        // 0x15195B74: lw          $s0, 0x4($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X4);
            goto L_15195B64;
    }
    goto skip_0;
    // 0x15195B74: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    skip_0:
L_15195B78:
    // 0x15195B78: bne         $s0, $zero, L_15195BB8
    if (ctx->r16 != 0) {
        // 0x15195B7C: sll         $a0, $s3, 16
        ctx->r4 = S32(ctx->r19 << 16);
            goto L_15195BB8;
    }
    // 0x15195B7C: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x15195B80: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15195B84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15195B88: jal         0x15195984
    // 0x15195B8C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    func_15195984(rdram, ctx);
        goto after_1;
    // 0x15195B8C: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x15195B90: beq         $v0, $zero, L_15195BB0
    if (ctx->r2 == 0) {
        // 0x15195B94: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15195BB0;
    }
    // 0x15195B94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15195B98: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x15195B9C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x15195BA0: sb          $t9, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r25;
    // 0x15195BA4: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x15195BA8: b           L_15195BD8
    // 0x15195BAC: sb          $t0, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r8;
        goto L_15195BD8;
    // 0x15195BAC: sb          $t0, 0x13($v0)
    MEM_B(0X13, ctx->r2) = ctx->r8;
L_15195BB0:
    // 0x15195BB0: b           L_15195CD0
    // 0x15195BB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15195CD0;
    // 0x15195BB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15195BB8:
    // 0x15195BB8: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15195BBC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x15195BC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15195BC4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x15195BC8: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    // 0x15195BCC: jal         0x15195A84
    // 0x15195BD0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    func_15195A84(rdram, ctx);
        goto after_2;
    // 0x15195BD0: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_2:
    // 0x15195BD4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_15195BD8:
    // 0x15195BD8: lbu         $t2, 0x14($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X14);
    // 0x15195BDC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x15195BE0: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x15195BE4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x15195BE8: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15195BEC: beql        $at, $zero, L_15195BFC
    if (ctx->r1 == 0) {
        // 0x15195BF0: lw          $t5, 0x74($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X74);
            goto L_15195BFC;
    }
    goto skip_1;
    // 0x15195BF0: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x15195BF4: sb          $t4, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r12;
    // 0x15195BF8: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
L_15195BFC:
    // 0x15195BFC: bnel        $t5, $zero, L_15195C5C
    if (ctx->r13 != 0) {
        // 0x15195C00: lh          $t4, 0x26($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X26);
            goto L_15195C5C;
    }
    goto skip_2;
    // 0x15195C00: lh          $t4, 0x26($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X26);
    skip_2:
    // 0x15195C04: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x15195C08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15195C0C: beql        $s1, $t6, L_15195C38
    if (ctx->r17 == ctx->r14) {
        // 0x15195C10: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_15195C38;
    }
    goto skip_3;
    // 0x15195C10: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    skip_3:
    // 0x15195C14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_15195C18:
    // 0x15195C18: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x15195C1C: beq         $at, $zero, L_15195C34
    if (ctx->r1 == 0) {
        // 0x15195C20: sll         $t7, $v0, 1
        ctx->r15 = S32(ctx->r2 << 1);
            goto L_15195C34;
    }
    // 0x15195C20: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x15195C24: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x15195C28: lh          $t9, 0x1C($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X1C);
    // 0x15195C2C: bnel        $s1, $t9, L_15195C18
    if (ctx->r17 != ctx->r25) {
        // 0x15195C30: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15195C18;
    }
    goto skip_4;
    // 0x15195C30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_4:
L_15195C34:
    // 0x15195C34: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
L_15195C38:
    // 0x15195C38: beq         $at, $zero, L_15195CA8
    if (ctx->r1 == 0) {
        // 0x15195C3C: sll         $t0, $v0, 1
        ctx->r8 = S32(ctx->r2 << 1);
            goto L_15195CA8;
    }
    // 0x15195C3C: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x15195C40: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x15195C44: sh          $s3, 0x1C($t1)
    MEM_H(0X1C, ctx->r9) = ctx->r19;
    // 0x15195C48: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x15195C4C: addu        $t3, $s0, $v0
    ctx->r11 = ADD32(ctx->r16, ctx->r2);
    // 0x15195C50: b           L_15195CA8
    // 0x15195C54: sb          $t2, 0x30($t3)
    MEM_B(0X30, ctx->r11) = ctx->r10;
        goto L_15195CA8;
    // 0x15195C54: sb          $t2, 0x30($t3)
    MEM_B(0X30, ctx->r11) = ctx->r10;
    // 0x15195C58: lh          $t4, 0x26($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X26);
L_15195C5C:
    // 0x15195C5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15195C60: beql        $s1, $t4, L_15195C8C
    if (ctx->r17 == ctx->r12) {
        // 0x15195C64: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_15195C8C;
    }
    goto skip_5;
    // 0x15195C64: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    skip_5:
    // 0x15195C68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_15195C6C:
    // 0x15195C6C: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x15195C70: beq         $at, $zero, L_15195C88
    if (ctx->r1 == 0) {
        // 0x15195C74: sll         $t5, $v0, 1
        ctx->r13 = S32(ctx->r2 << 1);
            goto L_15195C88;
    }
    // 0x15195C74: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x15195C78: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x15195C7C: lh          $t7, 0x26($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X26);
    // 0x15195C80: bnel        $s1, $t7, L_15195C6C
    if (ctx->r17 != ctx->r15) {
        // 0x15195C84: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15195C6C;
    }
    goto skip_6;
    // 0x15195C84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_6:
L_15195C88:
    // 0x15195C88: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
L_15195C8C:
    // 0x15195C8C: beq         $at, $zero, L_15195CA8
    if (ctx->r1 == 0) {
        // 0x15195C90: sll         $t8, $v0, 1
        ctx->r24 = S32(ctx->r2 << 1);
            goto L_15195CA8;
    }
    // 0x15195C90: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x15195C94: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x15195C98: sh          $s3, 0x26($t9)
    MEM_H(0X26, ctx->r25) = ctx->r19;
    // 0x15195C9C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x15195CA0: addu        $t1, $s0, $v0
    ctx->r9 = ADD32(ctx->r16, ctx->r2);
    // 0x15195CA4: sb          $t0, 0x35($t1)
    MEM_B(0X35, ctx->r9) = ctx->r8;
L_15195CA8:
    // 0x15195CA8: beql        $s7, $s1, L_15195B0C
    if (ctx->r23 == ctx->r17) {
        // 0x15195CAC: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_15195B0C;
    }
    goto skip_7;
    // 0x15195CAC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    skip_7:
    // 0x15195CB0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x15195CB4: addiu       $v1, $v1, 0x8F0
    ctx->r3 = ADD32(ctx->r3, 0X8F0);
    // 0x15195CB8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15195CBC: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x15195CC0: bne         $s4, $v0, L_15195CCC
    if (ctx->r20 != ctx->r2) {
        // 0x15195CC4: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_15195CCC;
    }
    // 0x15195CC4: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x15195CC8: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_15195CCC:
    // 0x15195CCC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15195CD0:
    // 0x15195CD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15195CD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15195CD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15195CDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x15195CE0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x15195CE4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x15195CE8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x15195CEC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x15195CF0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x15195CF4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x15195CF8: jr          $ra
    // 0x15195CFC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x15195CFC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_10003920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10003920: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10003924: jr          $ra
    // 0x10003928: sb          $zero, -0x7F80($at)
    MEM_B(-0X7F80, ctx->r1) = 0;
    return;
    return;
    // 0x10003928: sb          $zero, -0x7F80($at)
    MEM_B(-0X7F80, ctx->r1) = 0;
;}
RECOMP_FUNC void func_15193CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15193CA0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x15193CA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15193CA8: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x15193CAC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x15193CB0: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x15193CB4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x15193CB8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x15193CBC: jal         0x1504715C
    // 0x15193CC0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    func_1504715C(rdram, ctx);
        goto after_0;
    // 0x15193CC0: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    after_0:
    // 0x15193CC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15193CC8: lwc1        $f4, -0x3D40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3D40);
    // 0x15193CCC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15193CD0: lwc1        $f6, -0x3D3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3D3C);
    // 0x15193CD4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15193CD8: lwc1        $f8, -0x3D38($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D38);
    // 0x15193CDC: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x15193CE0: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x15193CE4: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x15193CE8: lui         $a1, 0x150A
    ctx->r5 = S32(0X150A << 16);
    // 0x15193CEC: lui         $a2, 0x150A
    ctx->r6 = S32(0X150A << 16);
    // 0x15193CF0: addiu       $v1, $a1, 0x11C4
    ctx->r3 = ADD32(ctx->r5, 0X11C4);
    // 0x15193CF4: addiu       $a0, $a2, 0x1DA0
    ctx->r4 = ADD32(ctx->r6, 0X1DA0);
    // 0x15193CF8: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x15193CFC: beq         $at, $zero, L_15193D18
    if (ctx->r1 == 0) {
        // 0x15193D00: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15193D18;
    }
    // 0x15193D00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15193D04:
    // 0x15193D04: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15193D08: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15193D0C: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x15193D10: bne         $at, $zero, L_15193D04
    if (ctx->r1 != 0) {
        // 0x15193D14: xor         $v0, $v0, $t6
        ctx->r2 = ctx->r2 ^ ctx->r14;
            goto L_15193D04;
    }
    // 0x15193D14: xor         $v0, $v0, $t6
    ctx->r2 = ctx->r2 ^ ctx->r14;
L_15193D18:
    // 0x15193D18: lui         $at, 0xA3C3
    ctx->r1 = S32(0XA3C3 << 16);
    // 0x15193D1C: ori         $at, $at, 0x5D52
    ctx->r1 = ctx->r1 | 0X5D52;
    // 0x15193D20: beql        $v0, $at, L_15193D64
    if (ctx->r2 == ctx->r1) {
        // 0x15193D24: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_15193D64;
    }
    goto skip_0;
    // 0x15193D24: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    skip_0:
    // 0x15193D28: jal         0x10024770
    // 0x15193D2C: nop

    osGetCount_recomp(rdram, ctx);
        goto after_1;
    // 0x15193D2C: nop

    after_1:
    // 0x15193D30: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x15193D34: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x15193D38: addiu       $t0, $t0, 0x3B40
    ctx->r8 = ADD32(ctx->r8, 0X3B40);
    // 0x15193D3C: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x15193D40: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x15193D44: jal         0x10024770
    // 0x15193D48: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    osGetCount_recomp(rdram, ctx);
        goto after_2;
    // 0x15193D48: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_2:
    // 0x15193D4C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x15193D50: lui         $at, 0x3F
    ctx->r1 = S32(0X3F << 16);
    // 0x15193D54: ori         $at, $at, 0xFFF7
    ctx->r1 = ctx->r1 | 0XFFF7;
    // 0x15193D58: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x15193D5C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x15193D60: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_15193D64:
    // 0x15193D64: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x15193D68: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x15193D6C: lbu         $a1, 0x7B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X7B);
    // 0x15193D70: lbu         $v0, 0x4($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X4);
    // 0x15193D74: beq         $v1, $v0, L_15193FA4
    if (ctx->r3 == ctx->r2) {
        // 0x15193D78: nop
    
            goto L_15193FA4;
    }
    // 0x15193D78: nop

    // 0x15193D7C: beq         $v1, $v0, L_15193FA4
    if (ctx->r3 == ctx->r2) {
        // 0x15193D80: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_15193FA4;
    }
    // 0x15193D80: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x15193D84: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193D88: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_15193FA4;
    }
    // 0x15193D88: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15193D8C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193D90: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_15193FA4;
    }
    // 0x15193D90: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15193D94: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193D98: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_15193FA4;
    }
    // 0x15193D98: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x15193D9C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DA0: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_15193FA4;
    }
    // 0x15193DA0: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x15193DA4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DA8: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_15193FA4;
    }
    // 0x15193DA8: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x15193DAC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DB0: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_15193FA4;
    }
    // 0x15193DB0: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x15193DB4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DB8: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_15193FA4;
    }
    // 0x15193DB8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x15193DBC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DC0: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_15193FA4;
    }
    // 0x15193DC0: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x15193DC4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DC8: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_15193FA4;
    }
    // 0x15193DC8: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x15193DCC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DD0: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_15193FA4;
    }
    // 0x15193DD0: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x15193DD4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DD8: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_15193FA4;
    }
    // 0x15193DD8: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x15193DDC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DE0: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_15193FA4;
    }
    // 0x15193DE0: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x15193DE4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DE8: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_15193FA4;
    }
    // 0x15193DE8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x15193DEC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DF0: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_15193FA4;
    }
    // 0x15193DF0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x15193DF4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193DF8: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_15193FA4;
    }
    // 0x15193DF8: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x15193DFC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E00: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_15193FA4;
    }
    // 0x15193E00: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x15193E04: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E08: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_15193FA4;
    }
    // 0x15193E08: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x15193E0C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E10: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_15193FA4;
    }
    // 0x15193E10: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x15193E14: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E18: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_15193FA4;
    }
    // 0x15193E18: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x15193E1C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E20: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_15193FA4;
    }
    // 0x15193E20: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x15193E24: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E28: addiu       $at, $zero, 0x4B
        ctx->r1 = ADD32(0, 0X4B);
            goto L_15193FA4;
    }
    // 0x15193E28: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x15193E2C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E30: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_15193FA4;
    }
    // 0x15193E30: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x15193E34: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E38: addiu       $at, $zero, 0x47
        ctx->r1 = ADD32(0, 0X47);
            goto L_15193FA4;
    }
    // 0x15193E38: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x15193E3C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E40: addiu       $at, $zero, 0x49
        ctx->r1 = ADD32(0, 0X49);
            goto L_15193FA4;
    }
    // 0x15193E40: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
    // 0x15193E44: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E48: addiu       $at, $zero, 0x4A
        ctx->r1 = ADD32(0, 0X4A);
            goto L_15193FA4;
    }
    // 0x15193E48: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x15193E4C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E50: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_15193FA4;
    }
    // 0x15193E50: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x15193E54: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E58: addiu       $at, $zero, 0x4D
        ctx->r1 = ADD32(0, 0X4D);
            goto L_15193FA4;
    }
    // 0x15193E58: addiu       $at, $zero, 0x4D
    ctx->r1 = ADD32(0, 0X4D);
    // 0x15193E5C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E60: addiu       $at, $zero, 0x4E
        ctx->r1 = ADD32(0, 0X4E);
            goto L_15193FA4;
    }
    // 0x15193E60: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x15193E64: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E68: addiu       $at, $zero, 0x4F
        ctx->r1 = ADD32(0, 0X4F);
            goto L_15193FA4;
    }
    // 0x15193E68: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x15193E6C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E70: addiu       $at, $zero, 0x51
        ctx->r1 = ADD32(0, 0X51);
            goto L_15193FA4;
    }
    // 0x15193E70: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x15193E74: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E78: addiu       $at, $zero, 0x52
        ctx->r1 = ADD32(0, 0X52);
            goto L_15193FA4;
    }
    // 0x15193E78: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x15193E7C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E80: addiu       $at, $zero, 0x55
        ctx->r1 = ADD32(0, 0X55);
            goto L_15193FA4;
    }
    // 0x15193E80: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x15193E84: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E88: addiu       $at, $zero, 0x56
        ctx->r1 = ADD32(0, 0X56);
            goto L_15193FA4;
    }
    // 0x15193E88: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
    // 0x15193E8C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E90: addiu       $at, $zero, 0x5D
        ctx->r1 = ADD32(0, 0X5D);
            goto L_15193FA4;
    }
    // 0x15193E90: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x15193E94: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193E98: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_15193FA4;
    }
    // 0x15193E98: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x15193E9C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EA0: addiu       $at, $zero, 0x61
        ctx->r1 = ADD32(0, 0X61);
            goto L_15193FA4;
    }
    // 0x15193EA0: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x15193EA4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EA8: addiu       $at, $zero, 0x62
        ctx->r1 = ADD32(0, 0X62);
            goto L_15193FA4;
    }
    // 0x15193EA8: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x15193EAC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EB0: addiu       $at, $zero, 0x63
        ctx->r1 = ADD32(0, 0X63);
            goto L_15193FA4;
    }
    // 0x15193EB0: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x15193EB4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EB8: addiu       $at, $zero, 0x66
        ctx->r1 = ADD32(0, 0X66);
            goto L_15193FA4;
    }
    // 0x15193EB8: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x15193EBC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EC0: addiu       $at, $zero, 0x67
        ctx->r1 = ADD32(0, 0X67);
            goto L_15193FA4;
    }
    // 0x15193EC0: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x15193EC4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EC8: addiu       $at, $zero, 0x6F
        ctx->r1 = ADD32(0, 0X6F);
            goto L_15193FA4;
    }
    // 0x15193EC8: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x15193ECC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193ED0: addiu       $at, $zero, 0x70
        ctx->r1 = ADD32(0, 0X70);
            goto L_15193FA4;
    }
    // 0x15193ED0: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x15193ED4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193ED8: addiu       $at, $zero, 0x73
        ctx->r1 = ADD32(0, 0X73);
            goto L_15193FA4;
    }
    // 0x15193ED8: addiu       $at, $zero, 0x73
    ctx->r1 = ADD32(0, 0X73);
    // 0x15193EDC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EE0: addiu       $at, $zero, 0x77
        ctx->r1 = ADD32(0, 0X77);
            goto L_15193FA4;
    }
    // 0x15193EE0: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x15193EE4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EE8: addiu       $at, $zero, 0x7B
        ctx->r1 = ADD32(0, 0X7B);
            goto L_15193FA4;
    }
    // 0x15193EE8: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
    // 0x15193EEC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EF0: addiu       $at, $zero, 0x7D
        ctx->r1 = ADD32(0, 0X7D);
            goto L_15193FA4;
    }
    // 0x15193EF0: addiu       $at, $zero, 0x7D
    ctx->r1 = ADD32(0, 0X7D);
    // 0x15193EF4: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193EF8: addiu       $at, $zero, 0x7E
        ctx->r1 = ADD32(0, 0X7E);
            goto L_15193FA4;
    }
    // 0x15193EF8: addiu       $at, $zero, 0x7E
    ctx->r1 = ADD32(0, 0X7E);
    // 0x15193EFC: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F00: addiu       $at, $zero, 0x7F
        ctx->r1 = ADD32(0, 0X7F);
            goto L_15193FA4;
    }
    // 0x15193F00: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x15193F04: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F08: addiu       $at, $zero, 0x82
        ctx->r1 = ADD32(0, 0X82);
            goto L_15193FA4;
    }
    // 0x15193F08: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x15193F0C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F10: addiu       $at, $zero, 0x83
        ctx->r1 = ADD32(0, 0X83);
            goto L_15193FA4;
    }
    // 0x15193F10: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x15193F14: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F18: addiu       $at, $zero, 0x84
        ctx->r1 = ADD32(0, 0X84);
            goto L_15193FA4;
    }
    // 0x15193F18: addiu       $at, $zero, 0x84
    ctx->r1 = ADD32(0, 0X84);
    // 0x15193F1C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F20: addiu       $at, $zero, 0x89
        ctx->r1 = ADD32(0, 0X89);
            goto L_15193FA4;
    }
    // 0x15193F20: addiu       $at, $zero, 0x89
    ctx->r1 = ADD32(0, 0X89);
    // 0x15193F24: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F28: addiu       $at, $zero, 0x8C
        ctx->r1 = ADD32(0, 0X8C);
            goto L_15193FA4;
    }
    // 0x15193F28: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x15193F2C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F30: addiu       $at, $zero, 0x8E
        ctx->r1 = ADD32(0, 0X8E);
            goto L_15193FA4;
    }
    // 0x15193F30: addiu       $at, $zero, 0x8E
    ctx->r1 = ADD32(0, 0X8E);
    // 0x15193F34: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F38: addiu       $at, $zero, 0x8F
        ctx->r1 = ADD32(0, 0X8F);
            goto L_15193FA4;
    }
    // 0x15193F38: addiu       $at, $zero, 0x8F
    ctx->r1 = ADD32(0, 0X8F);
    // 0x15193F3C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F40: addiu       $at, $zero, 0x91
        ctx->r1 = ADD32(0, 0X91);
            goto L_15193FA4;
    }
    // 0x15193F40: addiu       $at, $zero, 0x91
    ctx->r1 = ADD32(0, 0X91);
    // 0x15193F44: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F48: addiu       $at, $zero, 0x94
        ctx->r1 = ADD32(0, 0X94);
            goto L_15193FA4;
    }
    // 0x15193F48: addiu       $at, $zero, 0x94
    ctx->r1 = ADD32(0, 0X94);
    // 0x15193F4C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F50: addiu       $at, $zero, 0x9E
        ctx->r1 = ADD32(0, 0X9E);
            goto L_15193FA4;
    }
    // 0x15193F50: addiu       $at, $zero, 0x9E
    ctx->r1 = ADD32(0, 0X9E);
    // 0x15193F54: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F58: addiu       $at, $zero, 0xA1
        ctx->r1 = ADD32(0, 0XA1);
            goto L_15193FA4;
    }
    // 0x15193F58: addiu       $at, $zero, 0xA1
    ctx->r1 = ADD32(0, 0XA1);
    // 0x15193F5C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F60: addiu       $at, $zero, 0xA6
        ctx->r1 = ADD32(0, 0XA6);
            goto L_15193FA4;
    }
    // 0x15193F60: addiu       $at, $zero, 0xA6
    ctx->r1 = ADD32(0, 0XA6);
    // 0x15193F64: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F68: addiu       $at, $zero, 0xAB
        ctx->r1 = ADD32(0, 0XAB);
            goto L_15193FA4;
    }
    // 0x15193F68: addiu       $at, $zero, 0xAB
    ctx->r1 = ADD32(0, 0XAB);
    // 0x15193F6C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F70: addiu       $at, $zero, 0xAC
        ctx->r1 = ADD32(0, 0XAC);
            goto L_15193FA4;
    }
    // 0x15193F70: addiu       $at, $zero, 0xAC
    ctx->r1 = ADD32(0, 0XAC);
    // 0x15193F74: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F78: addiu       $at, $zero, 0xB2
        ctx->r1 = ADD32(0, 0XB2);
            goto L_15193FA4;
    }
    // 0x15193F78: addiu       $at, $zero, 0xB2
    ctx->r1 = ADD32(0, 0XB2);
    // 0x15193F7C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F80: addiu       $at, $zero, 0xB4
        ctx->r1 = ADD32(0, 0XB4);
            goto L_15193FA4;
    }
    // 0x15193F80: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x15193F84: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F88: addiu       $at, $zero, 0xB7
        ctx->r1 = ADD32(0, 0XB7);
            goto L_15193FA4;
    }
    // 0x15193F88: addiu       $at, $zero, 0xB7
    ctx->r1 = ADD32(0, 0XB7);
    // 0x15193F8C: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F90: addiu       $at, $zero, 0xB8
        ctx->r1 = ADD32(0, 0XB8);
            goto L_15193FA4;
    }
    // 0x15193F90: addiu       $at, $zero, 0xB8
    ctx->r1 = ADD32(0, 0XB8);
    // 0x15193F94: beq         $v0, $at, L_15193FA4
    if (ctx->r2 == ctx->r1) {
        // 0x15193F98: addiu       $at, $zero, 0xB9
        ctx->r1 = ADD32(0, 0XB9);
            goto L_15193FA4;
    }
    // 0x15193F98: addiu       $at, $zero, 0xB9
    ctx->r1 = ADD32(0, 0XB9);
    // 0x15193F9C: bne         $v0, $at, L_15193FB4
    if (ctx->r2 != ctx->r1) {
        // 0x15193FA0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_15193FB4;
    }
    // 0x15193FA0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_15193FA4:
    // 0x15193FA4: jal         0x151C329C
    // 0x15193FA8: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    func_151C329C(rdram, ctx);
        goto after_3;
    // 0x15193FA8: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    after_3:
    // 0x15193FAC: b           L_151942A4
    // 0x15193FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151942A4;
    // 0x15193FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15193FB4:
    // 0x15193FB4: beq         $v1, $v0, L_15194064
    if (ctx->r3 == ctx->r2) {
        // 0x15193FB8: lbu         $t3, 0x77($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X77);
            goto L_15194064;
    }
    // 0x15193FB8: lbu         $t3, 0x77($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X77);
    // 0x15193FBC: beq         $v1, $v0, L_15194064
    if (ctx->r3 == ctx->r2) {
        // 0x15193FC0: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_15194064;
    }
    // 0x15193FC0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x15193FC4: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15193FC8: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_15194064;
    }
    // 0x15193FC8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x15193FCC: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15193FD0: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_15194064;
    }
    // 0x15193FD0: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x15193FD4: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15193FD8: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_15194064;
    }
    // 0x15193FD8: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x15193FDC: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15193FE0: addiu       $at, $zero, 0x44
        ctx->r1 = ADD32(0, 0X44);
            goto L_15194064;
    }
    // 0x15193FE0: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x15193FE4: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15193FE8: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_15194064;
    }
    // 0x15193FE8: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x15193FEC: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15193FF0: addiu       $at, $zero, 0x5C
        ctx->r1 = ADD32(0, 0X5C);
            goto L_15194064;
    }
    // 0x15193FF0: addiu       $at, $zero, 0x5C
    ctx->r1 = ADD32(0, 0X5C);
    // 0x15193FF4: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15193FF8: addiu       $at, $zero, 0x5E
        ctx->r1 = ADD32(0, 0X5E);
            goto L_15194064;
    }
    // 0x15193FF8: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
    // 0x15193FFC: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194000: addiu       $at, $zero, 0x5F
        ctx->r1 = ADD32(0, 0X5F);
            goto L_15194064;
    }
    // 0x15194000: addiu       $at, $zero, 0x5F
    ctx->r1 = ADD32(0, 0X5F);
    // 0x15194004: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194008: addiu       $at, $zero, 0x6D
        ctx->r1 = ADD32(0, 0X6D);
            goto L_15194064;
    }
    // 0x15194008: addiu       $at, $zero, 0x6D
    ctx->r1 = ADD32(0, 0X6D);
    // 0x1519400C: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194010: addiu       $at, $zero, 0x74
        ctx->r1 = ADD32(0, 0X74);
            goto L_15194064;
    }
    // 0x15194010: addiu       $at, $zero, 0x74
    ctx->r1 = ADD32(0, 0X74);
    // 0x15194014: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194018: addiu       $at, $zero, 0x75
        ctx->r1 = ADD32(0, 0X75);
            goto L_15194064;
    }
    // 0x15194018: addiu       $at, $zero, 0x75
    ctx->r1 = ADD32(0, 0X75);
    // 0x1519401C: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194020: addiu       $at, $zero, 0x78
        ctx->r1 = ADD32(0, 0X78);
            goto L_15194064;
    }
    // 0x15194020: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x15194024: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194028: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_15194064;
    }
    // 0x15194028: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x1519402C: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194030: addiu       $at, $zero, 0x8A
        ctx->r1 = ADD32(0, 0X8A);
            goto L_15194064;
    }
    // 0x15194030: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
    // 0x15194034: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194038: addiu       $at, $zero, 0x8D
        ctx->r1 = ADD32(0, 0X8D);
            goto L_15194064;
    }
    // 0x15194038: addiu       $at, $zero, 0x8D
    ctx->r1 = ADD32(0, 0X8D);
    // 0x1519403C: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194040: addiu       $at, $zero, 0xAD
        ctx->r1 = ADD32(0, 0XAD);
            goto L_15194064;
    }
    // 0x15194040: addiu       $at, $zero, 0xAD
    ctx->r1 = ADD32(0, 0XAD);
    // 0x15194044: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194048: addiu       $at, $zero, 0xAE
        ctx->r1 = ADD32(0, 0XAE);
            goto L_15194064;
    }
    // 0x15194048: addiu       $at, $zero, 0xAE
    ctx->r1 = ADD32(0, 0XAE);
    // 0x1519404C: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194050: addiu       $at, $zero, 0xAF
        ctx->r1 = ADD32(0, 0XAF);
            goto L_15194064;
    }
    // 0x15194050: addiu       $at, $zero, 0xAF
    ctx->r1 = ADD32(0, 0XAF);
    // 0x15194054: beq         $v0, $at, L_15194064
    if (ctx->r2 == ctx->r1) {
        // 0x15194058: addiu       $at, $zero, 0xB1
        ctx->r1 = ADD32(0, 0XB1);
            goto L_15194064;
    }
    // 0x15194058: addiu       $at, $zero, 0xB1
    ctx->r1 = ADD32(0, 0XB1);
    // 0x1519405C: bne         $v0, $at, L_1519406C
    if (ctx->r2 != ctx->r1) {
        // 0x15194060: nop
    
            goto L_1519406C;
    }
    // 0x15194060: nop

L_15194064:
    // 0x15194064: b           L_15194264
    // 0x15194068: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15194264;
    // 0x15194068: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_1519406C:
    // 0x1519406C: beq         $v0, $zero, L_15194214
    if (ctx->r2 == 0) {
        // 0x15194070: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_15194214;
    }
    // 0x15194070: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15194074: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194078: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15194214;
    }
    // 0x15194078: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1519407C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194080: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15194214;
    }
    // 0x15194080: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15194084: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194088: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_15194214;
    }
    // 0x15194088: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1519408C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194090: addiu       $at, $zero, 0x96
        ctx->r1 = ADD32(0, 0X96);
            goto L_15194214;
    }
    // 0x15194090: addiu       $at, $zero, 0x96
    ctx->r1 = ADD32(0, 0X96);
    // 0x15194094: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194098: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_15194214;
    }
    // 0x15194098: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1519409C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940A0: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_15194214;
    }
    // 0x151940A0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x151940A4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940A8: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_15194214;
    }
    // 0x151940A8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x151940AC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940B0: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_15194214;
    }
    // 0x151940B0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x151940B4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940B8: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_15194214;
    }
    // 0x151940B8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x151940BC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940C0: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_15194214;
    }
    // 0x151940C0: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x151940C4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940C8: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_15194214;
    }
    // 0x151940C8: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x151940CC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940D0: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_15194214;
    }
    // 0x151940D0: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x151940D4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940D8: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_15194214;
    }
    // 0x151940D8: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x151940DC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940E0: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_15194214;
    }
    // 0x151940E0: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x151940E4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940E8: addiu       $at, $zero, 0x31
        ctx->r1 = ADD32(0, 0X31);
            goto L_15194214;
    }
    // 0x151940E8: addiu       $at, $zero, 0x31
    ctx->r1 = ADD32(0, 0X31);
    // 0x151940EC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940F0: addiu       $at, $zero, 0x36
        ctx->r1 = ADD32(0, 0X36);
            goto L_15194214;
    }
    // 0x151940F0: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x151940F4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151940F8: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_15194214;
    }
    // 0x151940F8: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x151940FC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194100: addiu       $at, $zero, 0x3E
        ctx->r1 = ADD32(0, 0X3E);
            goto L_15194214;
    }
    // 0x15194100: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x15194104: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194108: addiu       $at, $zero, 0x50
        ctx->r1 = ADD32(0, 0X50);
            goto L_15194214;
    }
    // 0x15194108: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x1519410C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194110: addiu       $at, $zero, 0x53
        ctx->r1 = ADD32(0, 0X53);
            goto L_15194214;
    }
    // 0x15194110: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x15194114: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194118: addiu       $at, $zero, 0x54
        ctx->r1 = ADD32(0, 0X54);
            goto L_15194214;
    }
    // 0x15194118: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x1519411C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194120: addiu       $at, $zero, 0x58
        ctx->r1 = ADD32(0, 0X58);
            goto L_15194214;
    }
    // 0x15194120: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x15194124: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194128: addiu       $at, $zero, 0x5B
        ctx->r1 = ADD32(0, 0X5B);
            goto L_15194214;
    }
    // 0x15194128: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x1519412C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194130: addiu       $at, $zero, 0x64
        ctx->r1 = ADD32(0, 0X64);
            goto L_15194214;
    }
    // 0x15194130: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x15194134: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194138: addiu       $at, $zero, 0x69
        ctx->r1 = ADD32(0, 0X69);
            goto L_15194214;
    }
    // 0x15194138: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x1519413C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194140: addiu       $at, $zero, 0x71
        ctx->r1 = ADD32(0, 0X71);
            goto L_15194214;
    }
    // 0x15194140: addiu       $at, $zero, 0x71
    ctx->r1 = ADD32(0, 0X71);
    // 0x15194144: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194148: addiu       $at, $zero, 0x6B
        ctx->r1 = ADD32(0, 0X6B);
            goto L_15194214;
    }
    // 0x15194148: addiu       $at, $zero, 0x6B
    ctx->r1 = ADD32(0, 0X6B);
    // 0x1519414C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194150: addiu       $at, $zero, 0x72
        ctx->r1 = ADD32(0, 0X72);
            goto L_15194214;
    }
    // 0x15194150: addiu       $at, $zero, 0x72
    ctx->r1 = ADD32(0, 0X72);
    // 0x15194154: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194158: addiu       $at, $zero, 0x76
        ctx->r1 = ADD32(0, 0X76);
            goto L_15194214;
    }
    // 0x15194158: addiu       $at, $zero, 0x76
    ctx->r1 = ADD32(0, 0X76);
    // 0x1519415C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194160: addiu       $at, $zero, 0x79
        ctx->r1 = ADD32(0, 0X79);
            goto L_15194214;
    }
    // 0x15194160: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x15194164: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194168: addiu       $at, $zero, 0x80
        ctx->r1 = ADD32(0, 0X80);
            goto L_15194214;
    }
    // 0x15194168: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x1519416C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194170: addiu       $at, $zero, 0x86
        ctx->r1 = ADD32(0, 0X86);
            goto L_15194214;
    }
    // 0x15194170: addiu       $at, $zero, 0x86
    ctx->r1 = ADD32(0, 0X86);
    // 0x15194174: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194178: addiu       $at, $zero, 0x87
        ctx->r1 = ADD32(0, 0X87);
            goto L_15194214;
    }
    // 0x15194178: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
    // 0x1519417C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194180: addiu       $at, $zero, 0x88
        ctx->r1 = ADD32(0, 0X88);
            goto L_15194214;
    }
    // 0x15194180: addiu       $at, $zero, 0x88
    ctx->r1 = ADD32(0, 0X88);
    // 0x15194184: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194188: addiu       $at, $zero, 0x90
        ctx->r1 = ADD32(0, 0X90);
            goto L_15194214;
    }
    // 0x15194188: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x1519418C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194190: addiu       $at, $zero, 0x97
        ctx->r1 = ADD32(0, 0X97);
            goto L_15194214;
    }
    // 0x15194190: addiu       $at, $zero, 0x97
    ctx->r1 = ADD32(0, 0X97);
    // 0x15194194: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194198: addiu       $at, $zero, 0x98
        ctx->r1 = ADD32(0, 0X98);
            goto L_15194214;
    }
    // 0x15194198: addiu       $at, $zero, 0x98
    ctx->r1 = ADD32(0, 0X98);
    // 0x1519419C: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941A0: addiu       $at, $zero, 0x9A
        ctx->r1 = ADD32(0, 0X9A);
            goto L_15194214;
    }
    // 0x151941A0: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x151941A4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941A8: addiu       $at, $zero, 0x9B
        ctx->r1 = ADD32(0, 0X9B);
            goto L_15194214;
    }
    // 0x151941A8: addiu       $at, $zero, 0x9B
    ctx->r1 = ADD32(0, 0X9B);
    // 0x151941AC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941B0: addiu       $at, $zero, 0x9C
        ctx->r1 = ADD32(0, 0X9C);
            goto L_15194214;
    }
    // 0x151941B0: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x151941B4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941B8: addiu       $at, $zero, 0x9D
        ctx->r1 = ADD32(0, 0X9D);
            goto L_15194214;
    }
    // 0x151941B8: addiu       $at, $zero, 0x9D
    ctx->r1 = ADD32(0, 0X9D);
    // 0x151941BC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941C0: addiu       $at, $zero, 0x9F
        ctx->r1 = ADD32(0, 0X9F);
            goto L_15194214;
    }
    // 0x151941C0: addiu       $at, $zero, 0x9F
    ctx->r1 = ADD32(0, 0X9F);
    // 0x151941C4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941C8: addiu       $at, $zero, 0xA0
        ctx->r1 = ADD32(0, 0XA0);
            goto L_15194214;
    }
    // 0x151941C8: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x151941CC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941D0: addiu       $at, $zero, 0xA2
        ctx->r1 = ADD32(0, 0XA2);
            goto L_15194214;
    }
    // 0x151941D0: addiu       $at, $zero, 0xA2
    ctx->r1 = ADD32(0, 0XA2);
    // 0x151941D4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941D8: addiu       $at, $zero, 0xA4
        ctx->r1 = ADD32(0, 0XA4);
            goto L_15194214;
    }
    // 0x151941D8: addiu       $at, $zero, 0xA4
    ctx->r1 = ADD32(0, 0XA4);
    // 0x151941DC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941E0: addiu       $at, $zero, 0xA5
        ctx->r1 = ADD32(0, 0XA5);
            goto L_15194214;
    }
    // 0x151941E0: addiu       $at, $zero, 0xA5
    ctx->r1 = ADD32(0, 0XA5);
    // 0x151941E4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941E8: addiu       $at, $zero, 0xA7
        ctx->r1 = ADD32(0, 0XA7);
            goto L_15194214;
    }
    // 0x151941E8: addiu       $at, $zero, 0xA7
    ctx->r1 = ADD32(0, 0XA7);
    // 0x151941EC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941F0: addiu       $at, $zero, 0xB0
        ctx->r1 = ADD32(0, 0XB0);
            goto L_15194214;
    }
    // 0x151941F0: addiu       $at, $zero, 0xB0
    ctx->r1 = ADD32(0, 0XB0);
    // 0x151941F4: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x151941F8: addiu       $at, $zero, 0xB3
        ctx->r1 = ADD32(0, 0XB3);
            goto L_15194214;
    }
    // 0x151941F8: addiu       $at, $zero, 0xB3
    ctx->r1 = ADD32(0, 0XB3);
    // 0x151941FC: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194200: addiu       $at, $zero, 0xB5
        ctx->r1 = ADD32(0, 0XB5);
            goto L_15194214;
    }
    // 0x15194200: addiu       $at, $zero, 0xB5
    ctx->r1 = ADD32(0, 0XB5);
    // 0x15194204: beq         $v0, $at, L_15194214
    if (ctx->r2 == ctx->r1) {
        // 0x15194208: addiu       $at, $zero, 0xB6
        ctx->r1 = ADD32(0, 0XB6);
            goto L_15194214;
    }
    // 0x15194208: addiu       $at, $zero, 0xB6
    ctx->r1 = ADD32(0, 0XB6);
    // 0x1519420C: bne         $v0, $at, L_1519421C
    if (ctx->r2 != ctx->r1) {
        // 0x15194210: addiu       $v1, $zero, 0x25
        ctx->r3 = ADD32(0, 0X25);
            goto L_1519421C;
    }
    // 0x15194210: addiu       $v1, $zero, 0x25
    ctx->r3 = ADD32(0, 0X25);
L_15194214:
    // 0x15194214: b           L_15194264
    // 0x15194218: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_15194264;
    // 0x15194218: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_1519421C:
    // 0x1519421C: beq         $v1, $v0, L_1519423C
    if (ctx->r3 == ctx->r2) {
        // 0x15194220: nop
    
            goto L_1519423C;
    }
    // 0x15194220: nop

    // 0x15194224: beq         $v1, $v0, L_1519423C
    if (ctx->r3 == ctx->r2) {
        // 0x15194228: addiu       $at, $zero, 0x92
        ctx->r1 = ADD32(0, 0X92);
            goto L_1519423C;
    }
    // 0x15194228: addiu       $at, $zero, 0x92
    ctx->r1 = ADD32(0, 0X92);
    // 0x1519422C: beq         $v0, $at, L_1519423C
    if (ctx->r2 == ctx->r1) {
        // 0x15194230: addiu       $at, $zero, 0x95
        ctx->r1 = ADD32(0, 0X95);
            goto L_1519423C;
    }
    // 0x15194230: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x15194234: bnel        $v0, $at, L_15194248
    if (ctx->r2 != ctx->r1) {
        // 0x15194238: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_15194248;
    }
    goto skip_1;
    // 0x15194238: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    skip_1:
L_1519423C:
    // 0x1519423C: b           L_15194264
    // 0x15194240: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_15194264;
    // 0x15194240: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15194244: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
L_15194248:
    // 0x15194248: bnel        $v0, $at, L_1519425C
    if (ctx->r2 != ctx->r1) {
        // 0x1519424C: addiu       $at, $zero, 0x93
        ctx->r1 = ADD32(0, 0X93);
            goto L_1519425C;
    }
    goto skip_2;
    // 0x1519424C: addiu       $at, $zero, 0x93
    ctx->r1 = ADD32(0, 0X93);
    skip_2:
    // 0x15194250: b           L_15194264
    // 0x15194254: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_15194264;
    // 0x15194254: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x15194258: addiu       $at, $zero, 0x93
    ctx->r1 = ADD32(0, 0X93);
L_1519425C:
    // 0x1519425C: bne         $v0, $at, L_151942A0
    if (ctx->r2 != ctx->r1) {
        // 0x15194260: addiu       $a2, $zero, 0x5
        ctx->r6 = ADD32(0, 0X5);
            goto L_151942A0;
    }
    // 0x15194260: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_15194264:
    // 0x15194264: beq         $t3, $zero, L_1519428C
    if (ctx->r11 == 0) {
        // 0x15194268: addiu       $a0, $sp, 0x64
        ctx->r4 = ADD32(ctx->r29, 0X64);
            goto L_1519428C;
    }
    // 0x15194268: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x1519426C: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x15194270: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x15194274: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x15194278: lbu         $a3, 0x7B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X7B);
    // 0x1519427C: jal         0x151DC484
    // 0x15194280: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_151DC484(rdram, ctx);
        goto after_4;
    // 0x15194280: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_4:
    // 0x15194284: b           L_151942A4
    // 0x15194288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_151942A4;
    // 0x15194288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1519428C:
    // 0x1519428C: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x15194290: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x15194294: lbu         $a3, 0x7B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X7B);
    // 0x15194298: jal         0x151DC260
    // 0x1519429C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_151DC260(rdram, ctx);
        goto after_5;
    // 0x1519429C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_5:
L_151942A0:
    // 0x151942A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_151942A4:
    // 0x151942A4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x151942A8: jr          $ra
    // 0x151942AC: nop

    return;
    return;
    // 0x151942AC: nop

;}
RECOMP_FUNC void func_15080828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15080828: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1508082C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15080830: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x15080834: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x15080838: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1508083C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15080840: bne         $t6, $zero, L_15080870
    if (ctx->r14 != 0) {
        // 0x15080844: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15080870;
    }
    // 0x15080844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15080848: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1508084C: lbu         $t7, 0x2E68($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2E68);
    // 0x15080850: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15080854: andi        $t8, $t7, 0x10
    ctx->r24 = ctx->r15 & 0X10;
    // 0x15080858: bne         $t8, $zero, L_15080868
    if (ctx->r24 != 0) {
        // 0x1508085C: nop
    
            goto L_15080868;
    }
    // 0x1508085C: nop

    // 0x15080860: b           L_15080874
    // 0x15080864: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
        goto L_15080874;
    // 0x15080864: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
L_15080868:
    // 0x15080868: b           L_15080874
    // 0x1508086C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
        goto L_15080874;
    // 0x1508086C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_15080870:
    // 0x15080870: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_15080874:
    // 0x15080874: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15080878: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1508087C: lbu         $t7, 0x1940($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1940);
    // 0x15080880: lbu         $t6, -0x1555($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1555);
    // 0x15080884: addiu       $t5, $zero, 0x1A
    ctx->r13 = ADD32(0, 0X1A);
    // 0x15080888: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1508088C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x15080890: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15080894: jal         0x1502B6BC
    // 0x15080898: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    func_1502B6BC(rdram, ctx);
        goto after_0;
    // 0x15080898: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x1508089C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150808A0: addiu       $t0, $t0, 0x1944
    ctx->r8 = ADD32(ctx->r8, 0X1944);
    // 0x150808A4: beq         $v0, $zero, L_15080BD8
    if (ctx->r2 == 0) {
        // 0x150808A8: sw          $v0, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r2;
            goto L_15080BD8;
    }
    // 0x150808A8: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x150808AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150808B0: sb          $zero, 0x1994($at)
    MEM_B(0X1994, ctx->r1) = 0;
    // 0x150808B4: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x150808B8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150808BC: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x150808C0: sw          $t8, 0x1998($at)
    MEM_W(0X1998, ctx->r1) = ctx->r24;
    // 0x150808C4: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x150808C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150808CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150808D0: srl         $t5, $t9, 1
    ctx->r13 = S32(U32(ctx->r25) >> 1);
    // 0x150808D4: beq         $t1, $zero, L_15080A78
    if (ctx->r9 == 0) {
        // 0x150808D8: sb          $t5, 0x1995($at)
        MEM_B(0X1995, ctx->r1) = ctx->r13;
            goto L_15080A78;
    }
    // 0x150808D8: sb          $t5, 0x1995($at)
    MEM_B(0X1995, ctx->r1) = ctx->r13;
    // 0x150808DC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150808E0: lbu         $t7, -0x1555($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1555);
    // 0x150808E4: addiu       $t6, $zero, 0x1A
    ctx->r14 = ADD32(0, 0X1A);
    // 0x150808E8: addiu       $t8, $zero, 0x43
    ctx->r24 = ADD32(0, 0X43);
    // 0x150808EC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150808F0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150808F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150808F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150808FC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x15080900: jal         0x1502B6BC
    // 0x15080904: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_1502B6BC(rdram, ctx);
        goto after_1;
    // 0x15080904: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_1:
    // 0x15080908: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1508090C: addiu       $v1, $v1, 0x1948
    ctx->r3 = ADD32(ctx->r3, 0X1948);
    // 0x15080910: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15080914: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15080918: lw          $t9, 0x1944($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1944);
    // 0x1508091C: beql        $t9, $zero, L_15080BDC
    if (ctx->r25 == 0) {
        // 0x15080920: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15080BDC;
    }
    goto skip_0;
    // 0x15080920: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x15080924: jal         0x10022EEC
    // 0x15080928: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    strlen_recomp(rdram, ctx);
        goto after_2;
    // 0x15080928: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_2:
    // 0x1508092C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15080930: lw          $t7, 0x1944($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1944);
    // 0x15080934: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x15080938: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x1508093C: jal         0x10022EEC
    // 0x15080940: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    strlen_recomp(rdram, ctx);
        goto after_3;
    // 0x15080940: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_3:
    // 0x15080944: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x15080948: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x1508094C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x15080950: addu        $a0, $t9, $v0
    ctx->r4 = ADD32(ctx->r25, ctx->r2);
    // 0x15080954: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x15080958: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1508095C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15080960: jal         0x10003C40
    // 0x15080964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x15080964: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x15080968: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1508096C: addiu       $v1, $v1, 0x194C
    ctx->r3 = ADD32(ctx->r3, 0X194C);
    // 0x15080970: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15080974: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15080978: lw          $t5, 0x1948($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1948);
    // 0x1508097C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15080980: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x15080984: jal         0x10023A10
    // 0x15080988: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    bcopy_recomp(rdram, ctx);
        goto after_5;
    // 0x15080988: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    after_5:
    // 0x1508098C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15080990: addiu       $v1, $v1, 0x194C
    ctx->r3 = ADD32(ctx->r3, 0X194C);
    // 0x15080994: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x15080998: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x1508099C: addiu       $t6, $zero, 0xBD
    ctx->r14 = ADD32(0, 0XBD);
    // 0x150809A0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150809A4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x150809A8: sb          $t6, -0x1($t8)
    MEM_B(-0X1, ctx->r24) = ctx->r14;
    // 0x150809AC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x150809B0: lw          $t9, 0x1944($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1944);
    // 0x150809B4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x150809B8: addu        $a1, $t5, $v0
    ctx->r5 = ADD32(ctx->r13, ctx->r2);
    // 0x150809BC: jal         0x10023A10
    // 0x150809C0: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    bcopy_recomp(rdram, ctx);
        goto after_6;
    // 0x150809C0: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_6:
    // 0x150809C4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150809C8: lw          $t7, 0x1948($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1948);
    // 0x150809CC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150809D0: lbu         $t8, 0x1995($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1995);
    // 0x150809D4: lw          $v0, 0xC($t7)
    ctx->r2 = MEM_W(ctx->r15, 0XC);
    // 0x150809D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150809DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150809E0: srl         $t6, $v0, 1
    ctx->r14 = S32(U32(ctx->r2) >> 1);
    // 0x150809E4: addu        $v1, $t8, $t6
    ctx->r3 = ADD32(ctx->r24, ctx->r14);
    // 0x150809E8: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x150809EC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x150809F0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x150809F4: jal         0x10003C40
    // 0x150809F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_7;
    // 0x150809F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x150809FC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15080A00: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x15080A04: addiu       $v1, $v1, 0x1998
    ctx->r3 = ADD32(ctx->r3, 0X1998);
    // 0x15080A08: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15080A0C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15080A10: lw          $t9, 0x1948($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1948);
    // 0x15080A14: sll         $t5, $a2, 1
    ctx->r13 = S32(ctx->r6 << 1);
    // 0x15080A18: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x15080A1C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15080A20: jal         0x10023A10
    // 0x15080A24: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    bcopy_recomp(rdram, ctx);
        goto after_8;
    // 0x15080A24: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    after_8:
    // 0x15080A28: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x15080A2C: lbu         $a2, 0x1995($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1995);
    // 0x15080A30: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x15080A34: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15080A38: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15080A3C: lw          $t9, 0x1998($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1998);
    // 0x15080A40: lw          $t7, 0x1944($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1944);
    // 0x15080A44: sll         $t5, $a2, 1
    ctx->r13 = S32(ctx->r6 << 1);
    // 0x15080A48: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x15080A4C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x15080A50: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x15080A54: jal         0x10023A10
    // 0x15080A58: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    bcopy_recomp(rdram, ctx);
        goto after_9;
    // 0x15080A58: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_9:
    // 0x15080A5C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x15080A60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15080A64: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x15080A68: sb          $t7, 0x1995($at)
    MEM_B(0X1995, ctx->r1) = ctx->r15;
    // 0x15080A6C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15080A70: b           L_15080A80
    // 0x15080A74: addiu       $t0, $t0, 0x1944
    ctx->r8 = ADD32(ctx->r8, 0X1944);
        goto L_15080A80;
    // 0x15080A74: addiu       $t0, $t0, 0x1944
    ctx->r8 = ADD32(ctx->r8, 0X1944);
L_15080A78:
    // 0x15080A78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15080A7C: sw          $zero, 0x1948($at)
    MEM_W(0X1948, ctx->r1) = 0;
L_15080A80:
    // 0x15080A80: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15080A84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15080A88: beq         $t1, $zero, L_15080A9C
    if (ctx->r9 == 0) {
        // 0x15080A8C: sb          $t4, 0x1941($at)
        MEM_B(0X1941, ctx->r1) = ctx->r12;
            goto L_15080A9C;
    }
    // 0x15080A8C: sb          $t4, 0x1941($at)
    MEM_B(0X1941, ctx->r1) = ctx->r12;
    // 0x15080A90: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x15080A94: b           L_15080AA4
    // 0x15080A98: lw          $t3, 0x194C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X194C);
        goto L_15080AA4;
    // 0x15080A98: lw          $t3, 0x194C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X194C);
L_15080A9C:
    // 0x15080A9C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x15080AA0: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
L_15080AA4:
    // 0x15080AA4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15080AA8: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x15080AAC: addiu       $v0, $v0, 0x1958
    ctx->r2 = ADD32(ctx->r2, 0X1958);
    // 0x15080AB0: ori         $t8, $t8, 0x8013
    ctx->r24 = ctx->r24 | 0X8013;
    // 0x15080AB4: bne         $t1, $zero, L_15080AF4
    if (ctx->r9 != 0) {
        // 0x15080AB8: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_15080AF4;
    }
    // 0x15080AB8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15080ABC: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x15080AC0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15080AC4: bne         $t9, $zero, L_15080AF4
    if (ctx->r25 != 0) {
        // 0x15080AC8: nop
    
            goto L_15080AF4;
    }
    // 0x15080AC8: nop

    // 0x15080ACC: lbu         $v1, 0x1940($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1940);
    // 0x15080AD0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15080AD4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15080AD8: sra         $t5, $v1, 3
    ctx->r13 = S32(SIGNED(ctx->r3) >> 3);
    // 0x15080ADC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x15080AE0: lbu         $t7, 0x2E60($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X2E60);
    // 0x15080AE4: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x15080AE8: sllv        $t9, $t8, $t6
    ctx->r25 = S32(ctx->r24 << (ctx->r14 & 31));
    // 0x15080AEC: and         $t5, $t7, $t9
    ctx->r13 = ctx->r15 & ctx->r25;
    // 0x15080AF0: bne         $t5, $zero, L_15080B10
    if (ctx->r13 != 0) {
        // 0x15080AF4: lui         $t8, 0x800D
        ctx->r24 = S32(0X800D << 16);
            goto L_15080B10;
    }
L_15080AF4:
    // 0x15080AF4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15080AF8: lbu         $t8, 0x2E40($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X2E40);
    // 0x15080AFC: bnel        $t8, $zero, L_15080B14
    if (ctx->r24 != 0) {
        // 0x15080B00: lw          $t9, 0x48($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X48);
            goto L_15080B14;
    }
    goto skip_1;
    // 0x15080B00: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    skip_1:
    // 0x15080B04: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x15080B08: ori         $t7, $t6, 0x60
    ctx->r15 = ctx->r14 | 0X60;
    // 0x15080B0C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_15080B10:
    // 0x15080B10: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
L_15080B14:
    // 0x15080B14: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x15080B18: addiu       $t0, $t0, 0x1988
    ctx->r8 = ADD32(ctx->r8, 0X1988);
    // 0x15080B1C: bne         $t9, $zero, L_15080B38
    if (ctx->r25 != 0) {
        // 0x15080B20: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_15080B38;
    }
    // 0x15080B20: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x15080B24: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x15080B28: lbu         $t5, 0x1940($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1940);
    // 0x15080B2C: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x15080B30: bnel        $t5, $at, L_15080B48
    if (ctx->r13 != ctx->r1) {
        // 0x15080B34: lui         $at, 0x429C
        ctx->r1 = S32(0X429C << 16);
            goto L_15080B48;
    }
    goto skip_2;
    // 0x15080B34: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
    skip_2:
L_15080B38:
    // 0x15080B38: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15080B3C: ori         $t6, $t8, 0x80
    ctx->r14 = ctx->r24 | 0X80;
    // 0x15080B40: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x15080B44: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
L_15080B48:
    // 0x15080B48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15080B4C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x15080B50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15080B54: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x15080B58: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15080B5C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15080B60: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x15080B64: addiu       $t2, $t2, 0x1990
    ctx->r10 = ADD32(ctx->r10, 0X1990);
    // 0x15080B68: addiu       $t1, $t1, 0x198C
    ctx->r9 = ADD32(ctx->r9, 0X198C);
    // 0x15080B6C: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x15080B70: lui         $a3, 0x1508
    ctx->r7 = S32(0X1508 << 16);
    // 0x15080B74: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15080B78: sh          $t7, 0x26($v0)
    MEM_H(0X26, ctx->r2) = ctx->r15;
    // 0x15080B7C: sb          $t4, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r12;
    // 0x15080B80: sh          $zero, 0x24($v0)
    MEM_H(0X24, ctx->r2) = 0;
    // 0x15080B84: sb          $zero, 0x2B($v0)
    MEM_B(0X2B, ctx->r2) = 0;
    // 0x15080B88: sw          $t0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r8;
    // 0x15080B8C: sw          $t1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r9;
    // 0x15080B90: sw          $t2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r10;
    // 0x15080B94: sb          $v1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r3;
    // 0x15080B98: sb          $v1, 0x29($v0)
    MEM_B(0X29, ctx->r2) = ctx->r3;
    // 0x15080B9C: sb          $v1, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r3;
    // 0x15080BA0: addiu       $a3, $a3, 0x7F4
    ctx->r7 = ADD32(ctx->r7, 0X7F4);
    // 0x15080BA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15080BA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15080BAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15080BB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x15080BB4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15080BB8: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x15080BBC: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x15080BC0: jal         0x1516A7B0
    // 0x15080BC4: swc1        $f8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f8.u32l;
    func_1516A7B0(rdram, ctx);
        goto after_10;
    // 0x15080BC4: swc1        $f8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f8.u32l;
    after_10:
    // 0x15080BC8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15080BCC: addiu       $v1, $v1, 0x1950
    ctx->r3 = ADD32(ctx->r3, 0X1950);
    // 0x15080BD0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15080BD4: sb          $zero, 0x14($v0)
    MEM_B(0X14, ctx->r2) = 0;
L_15080BD8:
    // 0x15080BD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15080BDC:
    // 0x15080BDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15080BE0: jr          $ra
    // 0x15080BE4: nop

    return;
    return;
    // 0x15080BE4: nop

;}
RECOMP_FUNC void func_150FA520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FA520: addiu       $sp, $sp, -0x178
    ctx->r29 = ADD32(ctx->r29, -0X178);
    // 0x150FA524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150FA528: sw          $a0, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->r4;
    // 0x150FA52C: sw          $a1, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r5;
    // 0x150FA530: sw          $a2, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->r6;
    // 0x150FA534: sw          $a3, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r7;
    // 0x150FA538: lw          $t6, 0x178($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X178);
    // 0x150FA53C: lbu         $t7, 0x17F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X17F);
    // 0x150FA540: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150FA544: lw          $v0, 0x1D4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D4);
    // 0x150FA548: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150FA54C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150FA550: beq         $v0, $zero, L_150FAA30
    if (ctx->r2 == 0) {
        // 0x150FA554: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_150FAA30;
    }
    // 0x150FA554: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150FA558: addiu       $t9, $t9, 0x1CFC
    ctx->r25 = ADD32(ctx->r25, 0X1CFC);
    // 0x150FA55C: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x150FA560: addiu       $a1, $sp, 0x16C
    ctx->r5 = ADD32(ctx->r29, 0X16C);
    // 0x150FA564: jal         0x15143134
    // 0x150FA568: addiu       $a2, $v0, 0x140
    ctx->r6 = ADD32(ctx->r2, 0X140);
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150FA568: addiu       $a2, $v0, 0x140
    ctx->r6 = ADD32(ctx->r2, 0X140);
    after_0:
    // 0x150FA56C: addiu       $a0, $sp, 0x148
    ctx->r4 = ADD32(ctx->r29, 0X148);
    // 0x150FA570: jal         0x1504715C
    // 0x150FA574: lw          $a1, 0x178($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X178);
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x150FA574: lw          $a1, 0x178($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X178);
    after_1:
    // 0x150FA578: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x150FA57C: addiu       $t0, $sp, 0x16C
    ctx->r8 = ADD32(ctx->r29, 0X16C);
    // 0x150FA580: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x150FA584: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x150FA588: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x150FA58C: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x150FA590: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x150FA594: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x150FA598: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FA59C: sw          $t3, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r11;
    // 0x150FA5A0: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x150FA5A4: addiu       $t7, $zero, -0x28
    ctx->r15 = ADD32(0, -0X28);
    // 0x150FA5A8: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x150FA5AC: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x150FA5B0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150FA5B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FA5B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA5BC: lwc1        $f6, 0x1D98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1D98);
    // 0x150FA5C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA5C4: lwc1        $f8, 0x1D9C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1D9C);
    // 0x150FA5C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA5CC: lwc1        $f10, 0x1DA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1DA0);
    // 0x150FA5D0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150FA5D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150FA5D8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA5DC: lwc1        $f18, 0x1DA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X1DA4);
    // 0x150FA5E0: sh          $t8, 0x102($sp)
    MEM_H(0X102, ctx->r29) = ctx->r24;
    // 0x150FA5E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FA5E8: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x150FA5EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FA5F0: lw          $t8, 0x184($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X184);
    // 0x150FA5F4: sh          $t4, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r12;
    // 0x150FA5F8: sh          $t5, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r13;
    // 0x150FA5FC: sh          $t6, 0xFE($sp)
    MEM_H(0XFE, ctx->r29) = ctx->r14;
    // 0x150FA600: sh          $t7, 0x100($sp)
    MEM_H(0X100, ctx->r29) = ctx->r15;
    // 0x150FA604: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150FA608: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x150FA60C: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x150FA610: addiu       $t3, $zero, 0x64
    ctx->r11 = ADD32(0, 0X64);
    // 0x150FA614: addiu       $t4, $zero, 0x64
    ctx->r12 = ADD32(0, 0X64);
    // 0x150FA618: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x150FA61C: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x150FA620: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150FA624: sh          $zero, 0xFC($sp)
    MEM_H(0XFC, ctx->r29) = 0;
    // 0x150FA628: sh          $t9, 0x12C($sp)
    MEM_H(0X12C, ctx->r29) = ctx->r25;
    // 0x150FA62C: sh          $t2, 0x12E($sp)
    MEM_H(0X12E, ctx->r29) = ctx->r10;
    // 0x150FA630: sh          $t1, 0x130($sp)
    MEM_H(0X130, ctx->r29) = ctx->r9;
    // 0x150FA634: sh          $t0, 0x132($sp)
    MEM_H(0X132, ctx->r29) = ctx->r8;
    // 0x150FA638: sh          $t3, 0x134($sp)
    MEM_H(0X134, ctx->r29) = ctx->r11;
    // 0x150FA63C: sh          $t4, 0x136($sp)
    MEM_H(0X136, ctx->r29) = ctx->r12;
    // 0x150FA640: sh          $t5, 0x140($sp)
    MEM_H(0X140, ctx->r29) = ctx->r13;
    // 0x150FA644: sh          $t6, 0x142($sp)
    MEM_H(0X142, ctx->r29) = ctx->r14;
    // 0x150FA648: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x150FA64C: sb          $t7, 0x138($sp)
    MEM_B(0X138, ctx->r29) = ctx->r15;
    // 0x150FA650: lbu         $a3, 0x183($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X183);
    // 0x150FA654: addiu       $a0, $sp, 0xFC
    ctx->r4 = ADD32(ctx->r29, 0XFC);
    // 0x150FA658: addiu       $a2, $sp, 0x148
    ctx->r6 = ADD32(ctx->r29, 0X148);
    // 0x150FA65C: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x150FA660: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
    // 0x150FA664: swc1        $f10, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f10.u32l;
    // 0x150FA668: swc1        $f16, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f16.u32l;
    // 0x150FA66C: swc1        $f18, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f18.u32l;
    // 0x150FA670: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    // 0x150FA674: jal         0x15153F18
    // 0x150FA678: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15153F18(rdram, ctx);
        goto after_2;
    // 0x150FA678: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x150FA67C: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x150FA680: addiu       $t9, $sp, 0x16C
    ctx->r25 = ADD32(ctx->r29, 0X16C);
    // 0x150FA684: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x150FA688: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FA68C: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150FA690: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x150FA694: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x150FA698: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150FA69C: addiu       $t6, $zero, -0x3F
    ctx->r14 = ADD32(0, -0X3F);
    // 0x150FA6A0: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x150FA6A4: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x150FA6A8: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x150FA6AC: addiu       $t8, $zero, 0x23
    ctx->r24 = ADD32(0, 0X23);
    // 0x150FA6B0: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x150FA6B4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x150FA6B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FA6BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150FA6C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FA6C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA6C8: lwc1        $f10, 0x1DA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1DA8);
    // 0x150FA6CC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA6D0: lwc1        $f16, 0x1DAC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1DAC);
    // 0x150FA6D4: lui         $at, 0x42F6
    ctx->r1 = S32(0X42F6 << 16);
    // 0x150FA6D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150FA6DC: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x150FA6E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FA6E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FA6E8: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x150FA6EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FA6F0: sh          $t5, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r13;
    // 0x150FA6F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA6F8: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x150FA6FC: lwc1        $f8, 0x1DB0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1DB0);
    // 0x150FA700: lw          $t5, 0x184($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X184);
    // 0x150FA704: sh          $t3, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r11;
    // 0x150FA708: sh          $t4, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r12;
    // 0x150FA70C: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x150FA710: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x150FA714: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x150FA718: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150FA71C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150FA720: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150FA724: sh          $zero, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = 0;
    // 0x150FA728: sh          $t6, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r14;
    // 0x150FA72C: sh          $t7, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r15;
    // 0x150FA730: sh          $t8, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r24;
    // 0x150FA734: sh          $t1, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r9;
    // 0x150FA738: sb          $t2, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r10;
    // 0x150FA73C: sb          $t9, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r25;
    // 0x150FA740: sb          $t0, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r8;
    // 0x150FA744: sb          $t3, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r11;
    // 0x150FA748: sb          $t4, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r12;
    // 0x150FA74C: lbu         $a3, 0x183($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X183);
    // 0x150FA750: addiu       $a0, $sp, 0xB4
    ctx->r4 = ADD32(ctx->r29, 0XB4);
    // 0x150FA754: addiu       $a2, $sp, 0x148
    ctx->r6 = ADD32(ctx->r29, 0X148);
    // 0x150FA758: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x150FA75C: swc1        $f16, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f16.u32l;
    // 0x150FA760: swc1        $f18, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f18.u32l;
    // 0x150FA764: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x150FA768: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    // 0x150FA76C: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x150FA770: jal         0x15150178
    // 0x150FA774: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15150178(rdram, ctx);
        goto after_3;
    // 0x150FA774: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x150FA778: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150FA77C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FA780: lwc1        $f16, 0x1DB4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1DB4);
    // 0x150FA784: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x150FA788: jal         0x150ADA68
    // 0x150FA78C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150FA78C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x150FA790: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150FA794: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150FA798: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150FA79C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FA7A0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150FA7A4: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150FA7A8: jal         0x150ADA68
    // 0x150FA7AC: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150FA7AC: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    after_5:
    // 0x150FA7B0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150FA7B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x150FA7B8: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x150FA7BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150FA7C0: mul.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150FA7C4: lui         $t2, 0x20
    ctx->r10 = S32(0X20 << 16);
    // 0x150FA7C8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150FA7CC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x150FA7D0: addiu       $t8, $zero, 0x79
    ctx->r24 = ADD32(0, 0X79);
    // 0x150FA7D4: addiu       $t1, $zero, 0x4403
    ctx->r9 = ADD32(0, 0X4403);
    // 0x150FA7D8: ori         $t2, $t2, 0x5
    ctx->r10 = ctx->r10 | 0X5;
    // 0x150FA7DC: addiu       $t9, $zero, 0xDC
    ctx->r25 = ADD32(0, 0XDC);
    // 0x150FA7E0: add.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x150FA7E4: addiu       $t0, $zero, 0xDC
    ctx->r8 = ADD32(0, 0XDC);
    // 0x150FA7E8: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150FA7EC: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150FA7F0: div.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f2.fl, ctx->f10.fl);
    // 0x150FA7F4: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FA7F8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x150FA7FC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150FA800: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x150FA804: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x150FA808: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150FA80C: nop

    // 0x150FA810: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x150FA814: beql        $t7, $zero, L_150FA864
    if (ctx->r15 == 0) {
        // 0x150FA818: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_150FA864;
    }
    goto skip_0;
    // 0x150FA818: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_0:
    // 0x150FA81C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150FA820: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150FA824: sub.s       $f18, $f2, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x150FA828: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x150FA82C: nop

    // 0x150FA830: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150FA834: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x150FA838: nop

    // 0x150FA83C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x150FA840: bne         $t7, $zero, L_150FA858
    if (ctx->r15 != 0) {
        // 0x150FA844: nop
    
            goto L_150FA858;
    }
    // 0x150FA844: nop

    // 0x150FA848: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x150FA84C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150FA850: b           L_150FA870
    // 0x150FA854: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_150FA870;
    // 0x150FA854: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_150FA858:
    // 0x150FA858: b           L_150FA870
    // 0x150FA85C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_150FA870;
    // 0x150FA85C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150FA860: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_150FA864:
    // 0x150FA864: nop

    // 0x150FA868: bltz        $t7, L_150FA858
    if (SIGNED(ctx->r15) < 0) {
        // 0x150FA86C: nop
    
            goto L_150FA858;
    }
    // 0x150FA86C: nop

L_150FA870:
    // 0x150FA870: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x150FA874: sb          $t7, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r15;
    // 0x150FA878: sb          $t8, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r24;
    // 0x150FA87C: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x150FA880: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FA884: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150FA888: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150FA88C: sh          $t1, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r9;
    // 0x150FA890: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x150FA894: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x150FA898: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x150FA89C: sb          $t9, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r25;
    // 0x150FA8A0: sb          $t0, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r8;
    // 0x150FA8A4: sb          $t3, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r11;
    // 0x150FA8A8: sb          $t4, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r12;
    // 0x150FA8AC: sb          $t5, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r13;
    // 0x150FA8B0: sb          $t6, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r14;
    // 0x150FA8B4: sb          $t7, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r15;
    // 0x150FA8B8: sb          $t8, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r24;
    // 0x150FA8BC: addiu       $t2, $sp, 0x16C
    ctx->r10 = ADD32(ctx->r29, 0X16C);
    // 0x150FA8C0: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150FA8C4: addiu       $t1, $sp, 0x74
    ctx->r9 = ADD32(ctx->r29, 0X74);
    // 0x150FA8C8: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150FA8CC: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150FA8D0: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x150FA8D4: addiu       $t5, $t5, 0x5480
    ctx->r13 = ADD32(ctx->r13, 0X5480);
    // 0x150FA8D8: addiu       $t4, $sp, 0x80
    ctx->r12 = ADD32(ctx->r29, 0X80);
    // 0x150FA8DC: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x150FA8E0: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x150FA8E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150FA8E8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150FA8EC: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150FA8F0: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x150FA8F4: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x150FA8F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150FA8FC: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150FA900: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x150FA904: sw          $t8, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r24;
    // 0x150FA908: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150FA90C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FA910: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FA914: sh          $t0, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r8;
    // 0x150FA918: sh          $t9, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r25;
    // 0x150FA91C: sh          $t1, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r9;
    // 0x150FA920: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150FA924: jal         0x150ADA20
    // 0x150FA928: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150FA928: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x150FA92C: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x150FA930: beq         $t2, $zero, L_150FA940
    if (ctx->r10 == 0) {
        // 0x150FA934: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_150FA940;
    }
    // 0x150FA934: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150FA938: b           L_150FA940
    // 0x150FA93C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
        goto L_150FA940;
    // 0x150FA93C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
L_150FA940:
    // 0x150FA940: jal         0x150ADA20
    // 0x150FA944: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150FA944: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_7:
    // 0x150FA948: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x150FA94C: beq         $t3, $zero, L_150FA95C
    if (ctx->r11 == 0) {
        // 0x150FA950: lw          $v1, 0x24($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X24);
            goto L_150FA95C;
    }
    // 0x150FA950: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x150FA954: b           L_150FA960
    // 0x150FA958: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_150FA960;
    // 0x150FA958: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_150FA95C:
    // 0x150FA95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150FA960:
    // 0x150FA960: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x150FA964: ori         $at, $at, 0xC000
    ctx->r1 = ctx->r1 | 0XC000;
    // 0x150FA968: or          $t7, $v0, $at
    ctx->r15 = ctx->r2 | ctx->r1;
    // 0x150FA96C: or          $t6, $t7, $v1
    ctx->r14 = ctx->r15 | ctx->r3;
    // 0x150FA970: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150FA974: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x150FA978: addiu       $t8, $zero, 0x27
    ctx->r24 = ADD32(0, 0X27);
    // 0x150FA97C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150FA980: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150FA984: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150FA988: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x150FA98C: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    // 0x150FA990: sb          $t4, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r12;
    // 0x150FA994: sb          $t5, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r13;
    // 0x150FA998: sb          $t8, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r24;
    // 0x150FA99C: sb          $t0, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r8;
    // 0x150FA9A0: sb          $t9, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r25;
    // 0x150FA9A4: sb          $zero, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = 0;
    // 0x150FA9A8: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150FA9AC: sb          $t1, 0xAA($sp)
    MEM_B(0XAA, ctx->r29) = ctx->r9;
    // 0x150FA9B0: addiu       $t3, $t3, 0x5480
    ctx->r11 = ADD32(ctx->r11, 0X5480);
    // 0x150FA9B4: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x150FA9B8: addiu       $t2, $sp, 0x8C
    ctx->r10 = ADD32(ctx->r29, 0X8C);
    // 0x150FA9BC: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x150FA9C0: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x150FA9C4: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x150FA9C8: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x150FA9CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150FA9D0: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x150FA9D4: lw          $t0, 0x184($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X184);
    // 0x150FA9D8: lbu         $t8, 0x183($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X183);
    // 0x150FA9DC: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x150FA9E0: sh          $t5, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r13;
    // 0x150FA9E4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x150FA9E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150FA9EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150FA9F0: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x150FA9F4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x150FA9F8: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x150FA9FC: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x150FAA00: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x150FAA04: jal         0x15130280
    // 0x150FAA08: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15130280(rdram, ctx);
        goto after_8;
    // 0x150FAA08: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_8:
    // 0x150FAA0C: beq         $v0, $zero, L_150FAA20
    if (ctx->r2 == 0) {
        // 0x150FAA10: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150FAA20;
    }
    // 0x150FAA10: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150FAA14: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x150FAA18: jal         0x10022EC0
    // 0x150FAA1C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x150FAA1C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_9:
L_150FAA20:
    // 0x150FAA20: addiu       $a0, $sp, 0x16C
    ctx->r4 = ADD32(ctx->r29, 0X16C);
    // 0x150FAA24: lbu         $a1, 0x183($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X183);
    // 0x150FAA28: jal         0x151C329C
    // 0x150FAA2C: lw          $a2, 0x184($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X184);
    func_151C329C(rdram, ctx);
        goto after_10;
    // 0x150FAA2C: lw          $a2, 0x184($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X184);
    after_10:
L_150FAA30:
    // 0x150FAA30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150FAA34: addiu       $sp, $sp, 0x178
    ctx->r29 = ADD32(ctx->r29, 0X178);
    // 0x150FAA38: jr          $ra
    // 0x150FAA3C: nop

    return;
    return;
    // 0x150FAA3C: nop

;}
RECOMP_FUNC void func_1000CAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000CAE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1000CAE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1000CAEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1000CAF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1000CAF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1000CAF8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1000CAFC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x1000CB00: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1000CB04: lw          $t8, -0x1610($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1610);
    // 0x1000CB08: andi        $t6, $s0, 0x2
    ctx->r14 = ctx->r16 & 0X2;
    // 0x1000CB0C: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x1000CB10: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x1000CB14: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x1000CB18: bne         $t8, $at, L_1000CB48
    if (ctx->r24 != ctx->r1) {
        // 0x1000CB1C: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_1000CB48;
    }
    // 0x1000CB1C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x1000CB20: jal         0x10011FA0
    // 0x1000CB24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_10011FA0(rdram, ctx);
        goto after_0;
    // 0x1000CB24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x1000CB28: bne         $s0, $zero, L_1000CB6C
    if (ctx->r16 != 0) {
        // 0x1000CB2C: addiu       $a0, $zero, 0x58
        ctx->r4 = ADD32(0, 0X58);
            goto L_1000CB6C;
    }
    // 0x1000CB2C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x1000CB30: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x1000CB34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1000CB38: jal         0x1000E704
    // 0x1000CB3C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    func_1000E704(rdram, ctx);
        goto after_1;
    // 0x1000CB3C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_1:
    // 0x1000CB40: b           L_1000CB70
    // 0x1000CB44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_1000CB70;
    // 0x1000CB44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_1000CB48:
    // 0x1000CB48: beq         $s0, $zero, L_1000CB6C
    if (ctx->r16 == 0) {
        // 0x1000CB4C: addiu       $a0, $zero, 0x58
        ctx->r4 = ADD32(0, 0X58);
            goto L_1000CB6C;
    }
    // 0x1000CB4C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x1000CB50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000CB54: jal         0x1000E704
    // 0x1000CB58: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    func_1000E704(rdram, ctx);
        goto after_2;
    // 0x1000CB58: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_2:
    // 0x1000CB5C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x1000CB60: jal         0x1000E40C
    // 0x1000CB64: addiu       $a1, $zero, 0x3E80
    ctx->r5 = ADD32(0, 0X3E80);
    func_1000E40C(rdram, ctx);
        goto after_3;
    // 0x1000CB64: addiu       $a1, $zero, 0x3E80
    ctx->r5 = ADD32(0, 0X3E80);
    after_3:
    // 0x1000CB68: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_1000CB6C:
    // 0x1000CB6C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_1000CB70:
    // 0x1000CB70: lbu         $a0, 0x2F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2F);
    // 0x1000CB74: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x1000CB78: bne         $t9, $zero, L_1000CB90
    if (ctx->r25 != 0) {
        // 0x1000CB7C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_1000CB90;
    }
    // 0x1000CB7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1000CB80: jal         0x10008790
    // 0x1000CB84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_10008790(rdram, ctx);
        goto after_4;
    // 0x1000CB84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x1000CB88: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1000CB8C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_1000CB90:
    // 0x1000CB90: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1000CB94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1000CB98: or          $v0, $t1, $s0
    ctx->r2 = ctx->r9 | ctx->r16;
    // 0x1000CB9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1000CBA0: jr          $ra
    // 0x1000CBA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1000CBA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1510B958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510B958: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1510B95C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1510B960: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x1510B964: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1510B968: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1510B96C: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x1510B970: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x1510B974: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x1510B978: sll         $t7, $t7, 7
    ctx->r15 = S32(ctx->r15 << 7);
    // 0x1510B97C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1510B980: lwc1        $f4, 0x74($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X74);
    // 0x1510B984: lwc1        $f6, 0x6C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x1510B988: lwc1        $f18, 0x64($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X64);
    // 0x1510B98C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1510B990: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1510B994: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x1510B998: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1510B99C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x1510B9A0: swc1        $f4, 0x35E0($at)
    MEM_W(0X35E0, ctx->r1) = ctx->f4.u32l;
    // 0x1510B9A4: lwc1        $f8, 0x70($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X70);
    // 0x1510B9A8: lwc1        $f6, 0x78($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X78);
    // 0x1510B9AC: lwc1        $f4, 0x68($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X68);
    // 0x1510B9B0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1510B9B4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1510B9B8: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x1510B9BC: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1510B9C0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1510B9C4: swc1        $f6, 0x35E4($at)
    MEM_W(0X35E4, ctx->r1) = ctx->f6.u32l;
    // 0x1510B9C8: jr          $ra
    // 0x1510B9CC: nop

    return;
    return;
    // 0x1510B9CC: nop

;}
RECOMP_FUNC void func_15114F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114F04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15114F08: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x15114F0C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15114F10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15114F14: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15114F18: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15114F1C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15114F20: lui         $a0, 0x1511
    ctx->r4 = S32(0X1511 << 16);
    // 0x15114F24: addiu       $a0, $a0, 0x4CC4
    ctx->r4 = ADD32(ctx->r4, 0X4CC4);
    // 0x15114F28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15114F2C: jal         0x1001001C
    // 0x15114F30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1001001C(rdram, ctx);
        goto after_0;
    // 0x15114F30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15114F34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15114F38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15114F3C: jr          $ra
    // 0x15114F40: nop

    return;
    return;
    // 0x15114F40: nop

;}
RECOMP_FUNC void func_151AA17C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AA17C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151AA180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AA184: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151AA188: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x151AA18C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x151AA190: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x151AA194: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x151AA198: lbu         $t6, 0x1C($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X1C);
    // 0x151AA19C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151AA1A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151AA1A4: jal         0x15147D64
    // 0x151AA1A8: sb          $t6, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r14;
    func_15147D64(rdram, ctx);
        goto after_0;
    // 0x151AA1A8: sb          $t6, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x151AA1AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151AA1B0: jal         0x151494E0
    // 0x151AA1B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_151494E0(rdram, ctx);
        goto after_1;
    // 0x151AA1B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x151AA1B8: jal         0x1519F3B8
    // 0x151AA1BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_1519F3B8(rdram, ctx);
        goto after_2;
    // 0x151AA1BC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x151AA1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AA1C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151AA1C8: jr          $ra
    // 0x151AA1CC: nop

    return;
    return;
    // 0x151AA1CC: nop

;}
RECOMP_FUNC void func_151D3308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D3308: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x151D330C: beq         $v0, $zero, L_151D334C
    if (ctx->r2 == 0) {
        // 0x151D3310: nop
    
            goto L_151D334C;
    }
    // 0x151D3310: nop

    // 0x151D3314: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x151D3318: sw          $t6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r14;
    // 0x151D331C: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x151D3320: beql        $v1, $zero, L_151D3334
    if (ctx->r3 == 0) {
        // 0x151D3324: sw          $a0, 0x28($v0)
        MEM_W(0X28, ctx->r2) = ctx->r4;
            goto L_151D3334;
    }
    goto skip_0;
    // 0x151D3324: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
    skip_0:
    // 0x151D3328: b           L_151D3334
    // 0x151D332C: sw          $a0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r4;
        goto L_151D3334;
    // 0x151D332C: sw          $a0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r4;
    // 0x151D3330: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
L_151D3334:
    // 0x151D3334: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x151D3338: lh          $t7, 0x20($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X20);
    // 0x151D333C: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x151D3340: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x151D3344: sh          $t8, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r24;
    // 0x151D3348: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
L_151D334C:
    // 0x151D334C: jr          $ra
    // 0x151D3350: nop

    return;
    return;
    // 0x151D3350: nop

;}
RECOMP_FUNC void func_10008C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x10008C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10008C74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x10008C78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x10008C7C: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x10008C80: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x10008C84: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x10008C88: sll         $t9, $a3, 4
    ctx->r25 = S32(ctx->r7 << 4);
    // 0x10008C8C: subu        $t9, $t9, $a3
    ctx->r25 = SUB32(ctx->r25, ctx->r7);
    // 0x10008C90: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x10008C94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x10008C98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x10008C9C: subu        $t9, $t9, $a3
    ctx->r25 = SUB32(ctx->r25, ctx->r7);
    // 0x10008CA0: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x10008CA4: sll         $t6, $a2, 5
    ctx->r14 = S32(ctx->r6 << 5);
    // 0x10008CA8: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x10008CAC: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x10008CB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x10008CB4: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x10008CB8: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x10008CBC: addiu       $t1, $t1, -0x32B8
    ctx->r9 = ADD32(ctx->r9, -0X32B8);
    // 0x10008CC0: addiu       $t7, $t7, -0x35A8
    ctx->r15 = ADD32(ctx->r15, -0X35A8);
    // 0x10008CC4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x10008CC8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x10008CCC: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x10008CD0: jal         0x100186DC
    // 0x10008CD4: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    func_100186DC(rdram, ctx);
        goto after_0;
    // 0x10008CD4: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    after_0:
    // 0x10008CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10008CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x10008CE0: jr          $ra
    // 0x10008CE4: nop

    return;
    return;
    // 0x10008CE4: nop

;}
RECOMP_FUNC void func_151DB97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151DB97C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151DB980: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151DB984: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151DB988: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151DB98C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151DB990: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x151DB994: lbu         $t6, 0xA8($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0XA8);
    // 0x151DB998: addiu       $a0, $s1, 0x58
    ctx->r4 = ADD32(ctx->r17, 0X58);
    // 0x151DB99C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x151DB9A0: beql        $t7, $zero, L_151DB9B4
    if (ctx->r15 == 0) {
        // 0x151DB9A4: addiu       $s0, $s1, 0xA8
        ctx->r16 = ADD32(ctx->r17, 0XA8);
            goto L_151DB9B4;
    }
    goto skip_0;
    // 0x151DB9A4: addiu       $s0, $s1, 0xA8
    ctx->r16 = ADD32(ctx->r17, 0XA8);
    skip_0:
    // 0x151DB9A8: jal         0x15131918
    // 0x151DB9AC: lw          $a1, 0xAC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XAC);
    func_15131918(rdram, ctx);
        goto after_0;
    // 0x151DB9AC: lw          $a1, 0xAC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XAC);
    after_0:
    // 0x151DB9B0: addiu       $s0, $s1, 0xA8
    ctx->r16 = ADD32(ctx->r17, 0XA8);
L_151DB9B4:
    // 0x151DB9B4: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x151DB9B8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151DB9BC: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x151DB9C0: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x151DB9C4: beql        $t9, $zero, L_151DBA94
    if (ctx->r25 == 0) {
        // 0x151DB9C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151DBA94;
    }
    goto skip_1;
    // 0x151DB9C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x151DB9CC: lbu         $t0, 0xB($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XB);
    // 0x151DB9D0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x151DB9D4: lbu         $t3, 0x8($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X8);
    // 0x151DB9D8: lbu         $t5, 0xC($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XC);
    // 0x151DB9DC: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DB9E0: lbu         $t8, 0x9($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X9);
    // 0x151DB9E4: lbu         $t0, 0xD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XD);
    // 0x151DB9E8: mflo        $t2
    ctx->r10 = lo;
    // 0x151DB9EC: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x151DB9F0: sb          $t4, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r12;
    // 0x151DB9F4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151DB9F8: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x151DB9FC: lbu         $t2, 0xA($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XA);
    // 0x151DBA00: multu       $t5, $t6
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DBA04: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151DBA08: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x151DBA0C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x151DBA10: mflo        $t7
    ctx->r15 = lo;
    // 0x151DBA14: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x151DBA18: sb          $t9, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r25;
    // 0x151DBA1C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x151DBA20: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151DBA24: mflo        $t3
    ctx->r11 = lo;
    // 0x151DBA28: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x151DBA2C: jal         0x151423D8
    // 0x151DBA30: sb          $t4, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r12;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x151DBA30: sb          $t4, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r12;
    after_1:
    // 0x151DBA34: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151DBA38: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x151DBA3C: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151DBA40: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151DBA44: jal         0x151423D8
    // 0x151DBA48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151DBA48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
    // 0x151DBA4C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151DBA50: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x151DBA54: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151DBA58: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x151DBA5C: jal         0x151423D8
    // 0x151DBA60: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x151DBA60: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_3:
    // 0x151DBA64: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151DBA68: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151DBA6C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151DBA70: swc1        $f8, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f8.u32l;
    // 0x151DBA74: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x151DBA78: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151DBA7C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151DBA80: swc1        $f18, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f18.u32l;
    // 0x151DBA84: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151DBA88: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151DBA8C: swc1        $f6, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f6.u32l;
    // 0x151DBA90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151DBA94:
    // 0x151DBA94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151DBA98: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151DBA9C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151DBAA0: jr          $ra
    // 0x151DBAA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151DBAA4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_10018D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10018D50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10018D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10018D58: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10018D5C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x10018D60: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x10018D64: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10018D68: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10018D6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10018D70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10018D74: jal         0x1001C224
    // 0x10018D78: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10018D78: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x10018D7C: b           L_10018D84
    // 0x10018D80: nop

        goto L_10018D84;
    // 0x10018D80: nop

L_10018D84:
    // 0x10018D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10018D88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10018D8C: jr          $ra
    // 0x10018D90: nop

    return;
    return;
    // 0x10018D90: nop

;}
RECOMP_FUNC void func_150D54C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D54C8: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x150D54CC: sw          $s3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r19;
    // 0x150D54D0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x150D54D4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x150D54D8: sw          $s2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r18;
    // 0x150D54DC: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x150D54E0: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x150D54E4: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x150D54E8: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x150D54EC: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x150D54F0: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x150D54F4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x150D54F8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x150D54FC: lw          $s2, 0x28($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X28);
    // 0x150D5500: addiu       $s1, $s3, 0x28
    ctx->r17 = ADD32(ctx->r19, 0X28);
    // 0x150D5504: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150D5508: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x150D550C: beq         $t6, $zero, L_150D5528
    if (ctx->r14 == 0) {
        // 0x150D5510: nop
    
            goto L_150D5528;
    }
    // 0x150D5510: nop

    // 0x150D5514: lbu         $t7, 0x4($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X4);
    // 0x150D5518: lbu         $t8, 0x3B($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X3B);
    // 0x150D551C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x150D5520: beql        $t7, $t8, L_150D5534
    if (ctx->r15 == ctx->r24) {
        // 0x150D5524: lwc1        $f4, 0x28($s2)
        ctx->f4.u32l = MEM_W(ctx->r18, 0X28);
            goto L_150D5534;
    }
    goto skip_0;
    // 0x150D5524: lwc1        $f4, 0x28($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X28);
    skip_0:
L_150D5528:
    // 0x150D5528: b           L_150D5938
    // 0x150D552C: sh          $t9, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r25;
        goto L_150D5938;
    // 0x150D552C: sh          $t9, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r25;
    // 0x150D5530: lwc1        $f4, 0x28($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X28);
L_150D5534:
    // 0x150D5534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D5538: nop

    // 0x150D553C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150D5540: nop

    // 0x150D5544: bc1fl       L_150D593C
    if (!c1cs) {
        // 0x150D5548: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_150D593C;
    }
    goto skip_1;
    // 0x150D5548: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_1:
    // 0x150D554C: lw          $t0, 0x184($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X184);
    // 0x150D5550: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x150D5554: andi        $t1, $t0, 0x1F
    ctx->r9 = ctx->r8 & 0X1F;
    // 0x150D5558: bnel        $t1, $at, L_150D593C
    if (ctx->r9 != ctx->r1) {
        // 0x150D555C: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_150D593C;
    }
    goto skip_2;
    // 0x150D555C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_2:
    // 0x150D5560: jal         0x150ADA68
    // 0x150D5564: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x150D5564: nop

    after_0:
    // 0x150D5568: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D556C: lwc1        $f8, 0xA3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XA3C);
    // 0x150D5570: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D5574: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D5578: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150D557C: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150D5580: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150D5584: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150D5588: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D558C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150D5590: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x150D5594: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D5598: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150D559C: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150D55A0: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x150D55A4: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150D55A8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x150D55AC: nop

    // 0x150D55B0: bc1fl       L_150D593C
    if (!c1cs) {
        // 0x150D55B4: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_150D593C;
    }
    goto skip_3;
    // 0x150D55B4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    skip_3:
    // 0x150D55B8: jal         0x1515C0F8
    // 0x150D55BC: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    func_1515C0F8(rdram, ctx);
        goto after_1;
    // 0x150D55BC: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    after_1:
    // 0x150D55C0: bne         $v0, $zero, L_150D55D4
    if (ctx->r2 != 0) {
        // 0x150D55C4: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150D55D4;
    }
    // 0x150D55C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D55C8: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x150D55CC: addiu       $t2, $t2, 0x5480
    ctx->r10 = ADD32(ctx->r10, 0X5480);
    // 0x150D55D0: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
L_150D55D4:
    // 0x150D55D4: lwc1        $f4, 0x40($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X40);
    // 0x150D55D8: lwc1        $f10, 0xA40($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XA40);
    // 0x150D55DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D55E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150D55E4: mul.s       $f12, $f4, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x150D55E8: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x150D55EC: jal         0x1514373C
    // 0x150D55F0: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    func_1514373C(rdram, ctx);
        goto after_2;
    // 0x150D55F0: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    after_2:
    // 0x150D55F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D55F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D55FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D5600: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150D5604: lwc1        $f30, 0xA44($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0XA44);
    // 0x150D5608: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x150D560C: lui         $t5, 0x20
    ctx->r13 = S32(0X20 << 16);
    // 0x150D5610: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150D5614: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150D5618: lwc1        $f24, 0x90($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150D561C: sb          $t3, 0xB5($sp)
    MEM_B(0XB5, ctx->r29) = ctx->r11;
    // 0x150D5620: addiu       $t4, $zero, 0x2203
    ctx->r12 = ADD32(0, 0X2203);
    // 0x150D5624: ori         $t5, $t5, 0x5
    ctx->r13 = ctx->r13 | 0X5;
    // 0x150D5628: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150D562C: sb          $t7, 0xAD($sp)
    MEM_B(0XAD, ctx->r29) = ctx->r15;
    // 0x150D5630: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150D5634: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150D5638: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150D563C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150D5640: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150D5644: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x150D5648: sh          $t4, 0xA0($sp)
    MEM_H(0XA0, ctx->r29) = ctx->r12;
    // 0x150D564C: sw          $t5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r13;
    // 0x150D5650: sb          $t6, 0xAC($sp)
    MEM_B(0XAC, ctx->r29) = ctx->r14;
    // 0x150D5654: sb          $t8, 0xAE($sp)
    MEM_B(0XAE, ctx->r29) = ctx->r24;
    // 0x150D5658: sb          $t9, 0xAF($sp)
    MEM_B(0XAF, ctx->r29) = ctx->r25;
    // 0x150D565C: sb          $t0, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r8;
    // 0x150D5660: sb          $t1, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r9;
    // 0x150D5664: sb          $t2, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = ctx->r10;
    // 0x150D5668: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150D566C: lui         $t7, 0x84
    ctx->r15 = S32(0X84 << 16);
    // 0x150D5670: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150D5674: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x150D5678: addiu       $t5, $zero, 0x33
    ctx->r13 = ADD32(0, 0X33);
    // 0x150D567C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150D5680: ori         $t7, $t7, 0xC207
    ctx->r15 = ctx->r15 | 0XC207;
    // 0x150D5684: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x150D5688: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x150D568C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150D5690: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x150D5694: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150D5698: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150D569C: lwc1        $f22, 0x94($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150D56A0: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x150D56A4: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x150D56A8: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x150D56AC: sb          $t3, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r11;
    // 0x150D56B0: sh          $t4, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r12;
    // 0x150D56B4: sh          $t5, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r13;
    // 0x150D56B8: sh          $t6, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r14;
    // 0x150D56BC: sw          $t7, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r15;
    // 0x150D56C0: sb          $t8, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = ctx->r24;
    // 0x150D56C4: sb          $t9, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = ctx->r25;
    // 0x150D56C8: sb          $t0, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = ctx->r8;
    // 0x150D56CC: sb          $t1, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = ctx->r9;
    // 0x150D56D0: sb          $t2, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r10;
    // 0x150D56D4: sb          $zero, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = 0;
    // 0x150D56D8: sw          $zero, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = 0;
    // 0x150D56DC: sb          $t3, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r11;
    // 0x150D56E0: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x150D56E4: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x150D56E8: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x150D56EC: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x150D56F0: neg.s       $f24, $f24
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f24.fl = -ctx->f24.fl;
L_150D56F4:
    // 0x150D56F4: jal         0x150ADA20
    // 0x150D56F8: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150D56F8: nop

    after_3:
    // 0x150D56FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150D5700: andi        $t4, $s0, 0x1
    ctx->r12 = ctx->r16 & 0X1;
    // 0x150D5704: jal         0x150ADA68
    // 0x150D5708: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150D5708: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    after_4:
    // 0x150D570C: jal         0x150ADA68
    // 0x150D5710: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150D5710: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_5:
    // 0x150D5714: beq         $s0, $zero, L_150D572C
    if (ctx->r16 == 0) {
        // 0x150D5718: lwc1        $f8, 0x90($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
            goto L_150D572C;
    }
    // 0x150D5718: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x150D571C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x150D5720: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150D5724: b           L_150D5738
    // 0x150D5728: nop

        goto L_150D5738;
    // 0x150D5728: nop

L_150D572C:
    // 0x150D572C: lui         $at, 0xC20C
    ctx->r1 = S32(0XC20C << 16);
    // 0x150D5730: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150D5734: nop

L_150D5738:
    // 0x150D5738: mul.s       $f2, $f8, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x150D573C: lwc1        $f16, 0x14($s2)
    ctx->f16.u32l = MEM_W(ctx->r18, 0X14);
    // 0x150D5740: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x150D5744: mul.s       $f18, $f22, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x150D5748: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D574C: mul.s       $f10, $f2, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f28.fl);
    // 0x150D5750: nop

    // 0x150D5754: mul.s       $f8, $f2, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150D5758: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150D575C: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150D5760: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x150D5764: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150D5768: mul.s       $f12, $f4, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x150D576C: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x150D5770: mul.s       $f6, $f24, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f14.fl);
    // 0x150D5774: lwc1        $f18, 0x180($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X180);
    // 0x150D5778: mul.s       $f16, $f12, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f28.fl);
    // 0x150D577C: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    // 0x150D5780: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x150D5784: mul.s       $f4, $f12, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x150D5788: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x150D578C: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x150D5790: add.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150D5794: beq         $s0, $zero, L_150D57B4
    if (ctx->r16 == 0) {
        // 0x150D5798: swc1        $f10, 0xD0($sp)
        MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
            goto L_150D57B4;
    }
    // 0x150D5798: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x150D579C: mul.s       $f6, $f0, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150D57A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D57A4: lwc1        $f8, 0xA48($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XA48);
    // 0x150D57A8: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150D57AC: b           L_150D57C4
    // 0x150D57B0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_150D57C4;
    // 0x150D57B0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_150D57B4:
    // 0x150D57B4: mul.s       $f16, $f0, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150D57B8: lwc1        $f18, 0xA4C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XA4C);
    // 0x150D57BC: add.s       $f2, $f16, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150D57C0: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
L_150D57C4:
    // 0x150D57C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D57C8: lwc1        $f10, 0xA50($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XA50);
    // 0x150D57CC: lwc1        $f4, 0x0($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X0);
    // 0x150D57D0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D57D4: lwc1        $f18, 0xA54($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XA54);
    // 0x150D57D8: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x150D57DC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D57E0: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x150D57E4: mul.s       $f8, $f12, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x150D57E8: sub.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x150D57EC: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150D57F0: swc1        $f16, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f16.u32l;
    // 0x150D57F4: beq         $s0, $zero, L_150D5804
    if (ctx->r16 == 0) {
        // 0x150D57F8: swc1        $f4, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
            goto L_150D5804;
    }
    // 0x150D57F8: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x150D57FC: b           L_150D5808
    // 0x150D5800: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_150D5808;
    // 0x150D5800: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_150D5804:
    // 0x150D5804: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
L_150D5808:
    // 0x150D5808: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x150D580C: lwc1        $f8, 0xA58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XA58);
    // 0x150D5810: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x150D5814: nop

    // 0x150D5818: mul.s       $f16, $f12, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x150D581C: sub.s       $f18, $f16, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x150D5820: jal         0x150ADA20
    // 0x150D5824: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150D5824: swc1        $f18, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x150D5828: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x150D582C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150D5830: mfhi        $t7
    ctx->r15 = hi;
    // 0x150D5834: addiu       $t8, $t7, 0x1F
    ctx->r24 = ADD32(ctx->r15, 0X1F);
    // 0x150D5838: jal         0x150ADA20
    // 0x150D583C: sh          $t8, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r24;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150D583C: sh          $t8, 0xA2($sp)
    MEM_H(0XA2, ctx->r29) = ctx->r24;
    after_7:
    // 0x150D5840: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x150D5844: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150D5848: mfhi        $t9
    ctx->r25 = hi;
    // 0x150D584C: addiu       $t0, $t9, 0xB4
    ctx->r8 = ADD32(ctx->r25, 0XB4);
    // 0x150D5850: jal         0x150ADA68
    // 0x150D5854: sb          $t0, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r8;
    func_150ADA68(rdram, ctx);
        goto after_8;
    // 0x150D5854: sb          $t0, 0xB3($sp)
    MEM_B(0XB3, ctx->r29) = ctx->r8;
    after_8:
    // 0x150D5858: lui         $at, 0x43B6
    ctx->r1 = S32(0X43B6 << 16);
    // 0x150D585C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D5860: lui         $at, 0x42DE
    ctx->r1 = S32(0X42DE << 16);
    // 0x150D5864: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D5868: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150D586C: add.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x150D5870: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    // 0x150D5874: jal         0x150ADA68
    // 0x150D5878: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x150D5878: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    after_9:
    // 0x150D587C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D5880: lwc1        $f16, 0xA5C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XA5C);
    // 0x150D5884: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D5888: lwc1        $f18, 0xA60($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XA60);
    // 0x150D588C: mul.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x150D5890: lw          $t1, 0xF0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF0);
    // 0x150D5894: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x150D5898: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x150D589C: sw          $t2, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r10;
    // 0x150D58A0: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x150D58A4: jal         0x150ADA20
    // 0x150D58A8: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150D58A8: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x150D58AC: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x150D58B0: beq         $t3, $zero, L_150D58C0
    if (ctx->r11 == 0) {
        // 0x150D58B4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_150D58C0;
    }
    // 0x150D58B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150D58B8: b           L_150D58C0
    // 0x150D58BC: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
        goto L_150D58C0;
    // 0x150D58BC: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
L_150D58C0:
    // 0x150D58C0: jal         0x150ADA20
    // 0x150D58C4: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x150D58C4: nop

    after_11:
    // 0x150D58C8: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x150D58CC: beq         $t4, $zero, L_150D58DC
    if (ctx->r12 == 0) {
        // 0x150D58D0: lw          $t5, 0xF0($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XF0);
            goto L_150D58DC;
    }
    // 0x150D58D0: lw          $t5, 0xF0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XF0);
    // 0x150D58D4: b           L_150D58E0
    // 0x150D58D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_150D58E0;
    // 0x150D58D8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_150D58DC:
    // 0x150D58DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150D58E0:
    // 0x150D58E0: or          $t6, $v0, $s0
    ctx->r14 = ctx->r2 | ctx->r16;
    // 0x150D58E4: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x150D58E8: sw          $t7, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r15;
    // 0x150D58EC: lbu         $t8, 0xC($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0XC);
    // 0x150D58F0: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x150D58F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150D58F8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150D58FC: lbu         $t9, 0x1($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X1);
    // 0x150D5900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150D5904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D5908: jal         0x15130280
    // 0x150D590C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    func_15130280(rdram, ctx);
        goto after_12;
    // 0x150D590C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_12:
    // 0x150D5910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150D5914: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150D5918: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150D591C: sub.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x150D5920: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    // 0x150D5924: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150D5928: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x150D592C: nop

    // 0x150D5930: bc1t        L_150D56F4
    if (c1cs) {
        // 0x150D5934: nop
    
            goto L_150D56F4;
    }
    // 0x150D5934: nop

L_150D5938:
    // 0x150D5938: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_150D593C:
    // 0x150D593C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x150D5940: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x150D5944: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x150D5948: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x150D594C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x150D5950: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x150D5954: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x150D5958: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x150D595C: lw          $s2, 0x54($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X54);
    // 0x150D5960: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x150D5964: jr          $ra
    // 0x150D5968: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x150D5968: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_150A8918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A8918: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x150A891C: srl         $t2, $t7, 6
    ctx->r10 = S32(U32(ctx->r15) >> 6);
    // 0x150A8920: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150A8924: and         $s3, $t2, $t3
    ctx->r19 = ctx->r10 & ctx->r11;
    // 0x150A8928: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A892C: bltz        $t7, L_150A8944
    if (SIGNED(ctx->r15) < 0) {
        // 0x150A8930: subu        $s3, $s6, $s3
        ctx->r19 = SUB32(ctx->r22, ctx->r19);
            goto L_150A8944;
    }
    // 0x150A8930: subu        $s3, $s6, $s3
    ctx->r19 = SUB32(ctx->r22, ctx->r19);
    // 0x150A8934: lwc1        $f1, 0x0($t6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A8938: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A893C: j           L_150A8954
    // 0x150A8940: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
        goto L_150A8954;
    // 0x150A8940: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
L_150A8944:
    // 0x150A8944: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A8948: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A894C: lwc1        $f1, 0x0($t6)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A8950: sub.s       $f0, $f30, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f0.fl;
L_150A8954:
    // 0x150A8954: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x150A8958: srl         $t2, $t7, 6
    ctx->r10 = S32(U32(ctx->r15) >> 6);
    // 0x150A895C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150A8960: and         $s3, $t2, $t3
    ctx->r19 = ctx->r10 & ctx->r11;
    // 0x150A8964: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A8968: bltz        $t7, L_150A8980
    if (SIGNED(ctx->r15) < 0) {
        // 0x150A896C: subu        $s3, $s6, $s3
        ctx->r19 = SUB32(ctx->r22, ctx->r19);
            goto L_150A8980;
    }
    // 0x150A896C: subu        $s3, $s6, $s3
    ctx->r19 = SUB32(ctx->r22, ctx->r19);
    // 0x150A8970: lwc1        $f3, 0x0($t6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A8974: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A8978: j           L_150A8990
    // 0x150A897C: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
        goto L_150A8990;
    // 0x150A897C: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
L_150A8980:
    // 0x150A8980: lwc1        $f2, 0x0($t6)
    ctx->f2.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A8984: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A8988: lwc1        $f3, 0x0($t6)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A898C: sub.s       $f2, $f30, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = ctx->f30.fl - ctx->f2.fl;
L_150A8990:
    // 0x150A8990: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    // 0x150A8994: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150A8998: srl         $t2, $t7, 6
    ctx->r10 = S32(U32(ctx->r15) >> 6);
    // 0x150A899C: mul.s       $f7, $f0, $f3
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f7.fl = MUL_S(ctx->f0.fl, ctx->f3.fl);
    // 0x150A89A0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x150A89A4: mul.s       $f8, $f1, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f1.fl, ctx->f2.fl);
    // 0x150A89A8: and         $s3, $t2, $t3
    ctx->r19 = ctx->r10 & ctx->r11;
    // 0x150A89AC: mul.s       $f9, $f1, $f3
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f9.fl = MUL_S(ctx->f1.fl, ctx->f3.fl);
    // 0x150A89B0: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A89B4: bltz        $t7, L_150A89CC
    if (SIGNED(ctx->r15) < 0) {
        // 0x150A89B8: subu        $s3, $s6, $s3
        ctx->r19 = SUB32(ctx->r22, ctx->r19);
            goto L_150A89CC;
    }
    // 0x150A89B8: subu        $s3, $s6, $s3
    ctx->r19 = SUB32(ctx->r22, ctx->r19);
    // 0x150A89BC: lwc1        $f19, 0x0($t6)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A89C0: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A89C4: j           L_150A89DC
    // 0x150A89C8: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
        goto L_150A89DC;
    // 0x150A89C8: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
L_150A89CC:
    // 0x150A89CC: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150A89D0: addu        $t6, $s3, $s2
    ctx->r14 = ADD32(ctx->r19, ctx->r18);
    // 0x150A89D4: lwc1        $f19, 0x0($t6)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r14, 0X0);
    // 0x150A89D8: sub.s       $f18, $f30, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f30.fl - ctx->f18.fl;
L_150A89DC:
    // 0x150A89DC: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x150A89E0: nop

    // 0x150A89E4: mul.s       $f11, $f9, $f19
    CHECK_FR(ctx, 11);
    CHECK_FR(ctx, 9);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f9.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f11.fl = MUL_S(ctx->f9.fl, ctx->f19.fl);
    // 0x150A89E8: nop

    // 0x150A89EC: mul.s       $f12, $f8, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x150A89F0: nop

    // 0x150A89F4: mul.s       $f13, $f7, $f19
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 19);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f19.fl); 
    ctx->f13.fl = MUL_S(ctx->f7.fl, ctx->f19.fl);
    // 0x150A89F8: jr          $ra
    // 0x150A89FC: addu        $s0, $s1, $t4
    ctx->r16 = ADD32(ctx->r17, ctx->r12);
    return;
    return;
    // 0x150A89FC: addu        $s0, $s1, $t4
    ctx->r16 = ADD32(ctx->r17, ctx->r12);
    // 0x150A8A00: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150A8A04: sw          $t9, -0x7A80($at)
    MEM_W(-0X7A80, ctx->r1) = ctx->r25;
    // 0x150A8A08: or          $s4, $t4, $zero
    ctx->r20 = ctx->r12 | 0;
    // 0x150A8A0C: or          $t9, $zero, $zero
    ctx->r25 = 0 | 0;
    // 0x150A8A10: j           L_150A8B00
    // 0x150A8A14: nop

    static_5_150A8B00(rdram, ctx);
    return;
    // 0x150A8A14: nop

;}
RECOMP_FUNC void func_1514DE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DE88: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1514DE8C: jr          $ra
    // 0x1514DE90: nop

    return;
    return;
    // 0x1514DE90: nop

;}
RECOMP_FUNC void func_15141990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15141990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15141994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15141998: jal         0x15141970
    // 0x1514199C: nop

    func_15141970(rdram, ctx);
        goto after_0;
    // 0x1514199C: nop

    after_0:
    // 0x151419A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151419A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151419A8: jr          $ra
    // 0x151419AC: nop

    return;
    return;
    // 0x151419AC: nop

;}
RECOMP_FUNC void func_150A6760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A6760: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150A6764: lw          $t0, -0x1A30($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1A30);
    // 0x150A6768: beq         $t0, $zero, L_150A6850
    if (ctx->r8 == 0) {
        // 0x150A676C: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_150A6850;
    }
    // 0x150A676C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150A6770: sllv        $a2, $a2, $a0
    ctx->r6 = S32(ctx->r6 << (ctx->r4 & 31));
    // 0x150A6774: nor         $a2, $a2, $zero
    ctx->r6 = ~(ctx->r6 | 0);
    // 0x150A6778: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x150A677C: lw          $t1, -0x41B8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X41B8);
    // 0x150A6780: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x150A6784: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150A6788: addiu       $v0, $v0, -0x41D0
    ctx->r2 = ADD32(ctx->r2, -0X41D0);
    // 0x150A678C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x150A6790: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x150A6794: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x150A6798: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150A679C: lw          $a1, -0x1A2C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1A2C);
    // 0x150A67A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x150A67A4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x150A67A8: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x150A67AC: lh          $t5, 0x2($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X2);
    // 0x150A67B0: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x150A67B4: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x150A67B8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150A67BC: lw          $t7, -0x1A28($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1A28);
    // 0x150A67C0: beq         $t1, $zero, L_150A6850
    if (ctx->r9 == 0) {
        // 0x150A67C4: addiu       $t9, $zero, 0x7
        ctx->r25 = ADD32(0, 0X7);
            goto L_150A6850;
    }
    // 0x150A67C4: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
L_150A67C8:
    // 0x150A67C8: bne         $t3, $zero, L_150A680C
    if (ctx->r11 != 0) {
        // 0x150A67CC: or          $t6, $t7, $zero
        ctx->r14 = ctx->r15 | 0;
            goto L_150A680C;
    }
    // 0x150A67CC: or          $t6, $t7, $zero
    ctx->r14 = ctx->r15 | 0;
L_150A67D0:
    // 0x150A67D0: lh          $t2, 0x0($t6)
    ctx->r10 = MEM_H(ctx->r14, 0X0);
    // 0x150A67D4: bgez        $t2, L_150A680C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x150A67D8: nop
    
            goto L_150A680C;
    }
    // 0x150A67D8: nop

    // 0x150A67DC: bne         $t5, $zero, L_150A67F0
    if (ctx->r13 != 0) {
        // 0x150A67E0: addiu       $t5, $t5, -0x1
        ctx->r13 = ADD32(ctx->r13, -0X1);
            goto L_150A67F0;
    }
    // 0x150A67E0: addiu       $t5, $t5, -0x1
    ctx->r13 = ADD32(ctx->r13, -0X1);
    // 0x150A67E4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x150A67E8: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x150A67EC: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
L_150A67F0:
    // 0x150A67F0: srlv        $v0, $t4, $t5
    ctx->r2 = S32(U32(ctx->r12) >> (ctx->r13 & 31));
    // 0x150A67F4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x150A67F8: bnel        $v0, $zero, L_150A6804
    if (ctx->r2 != 0) {
        // 0x150A67FC: lh          $v0, 0x4($t6)
        ctx->r2 = MEM_H(ctx->r14, 0X4);
            goto L_150A6804;
    }
    goto skip_0;
    // 0x150A67FC: lh          $v0, 0x4($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X4);
    skip_0:
    // 0x150A6800: lh          $v0, 0x2($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X2);
L_150A6804:
    // 0x150A6804: j           L_150A67D0
    // 0x150A6808: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
        goto L_150A67D0;
    // 0x150A6808: addu        $t6, $v0, $t7
    ctx->r14 = ADD32(ctx->r2, ctx->r15);
L_150A680C:
    // 0x150A680C: lh          $v0, 0x0($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X0);
    // 0x150A6810: srlv        $a1, $t2, $t3
    ctx->r5 = S32(U32(ctx->r10) >> (ctx->r11 & 31));
    // 0x150A6814: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x150A6818: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    // 0x150A681C: sllv        $a1, $a1, $a0
    ctx->r5 = S32(ctx->r5 << (ctx->r4 & 31));
    // 0x150A6820: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x150A6824: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
    // 0x150A6828: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x150A682C: bnel        $at, $zero, L_150A6838
    if (ctx->r1 != 0) {
        // 0x150A6830: addiu       $t3, $t3, 0x1
        ctx->r11 = ADD32(ctx->r11, 0X1);
            goto L_150A6838;
    }
    goto skip_1;
    // 0x150A6830: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    skip_1:
    // 0x150A6834: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
L_150A6838:
    // 0x150A6838: lh          $v0, 0xC($t1)
    ctx->r2 = MEM_H(ctx->r9, 0XC);
    // 0x150A683C: lh          $a1, 0x4($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X4);
    // 0x150A6840: bnel        $v0, $zero, L_150A67C8
    if (ctx->r2 != 0) {
        // 0x150A6844: addu        $t1, $t1, $v0
        ctx->r9 = ADD32(ctx->r9, ctx->r2);
            goto L_150A67C8;
    }
    goto skip_2;
    // 0x150A6844: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    skip_2:
    // 0x150A6848: bnel        $a1, $zero, L_150A67C8
    if (ctx->r5 != 0) {
        // 0x150A684C: addu        $t1, $t1, $a1
        ctx->r9 = ADD32(ctx->r9, ctx->r5);
            goto L_150A67C8;
    }
    goto skip_3;
    // 0x150A684C: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    skip_3:
L_150A6850:
    // 0x150A6850: jr          $ra
    // 0x150A6854: nop

    return;
    return;
    // 0x150A6854: nop

;}
RECOMP_FUNC void func_150A7B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A7B80: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150A7B84: sd          $zero, 0x0($a0)
    SD(0, 0X0, ctx->r4);
    // 0x150A7B88: sd          $zero, 0x8($a0)
    SD(0, 0X8, ctx->r4);
    // 0x150A7B8C: sd          $zero, 0x10($a0)
    SD(0, 0X10, ctx->r4);
    // 0x150A7B90: sd          $zero, 0x18($a0)
    SD(0, 0X18, ctx->r4);
    // 0x150A7B94: sd          $zero, 0x20($a0)
    SD(0, 0X20, ctx->r4);
    // 0x150A7B98: sd          $zero, 0x28($a0)
    SD(0, 0X28, ctx->r4);
    // 0x150A7B9C: sd          $zero, 0x30($a0)
    SD(0, 0X30, ctx->r4);
    // 0x150A7BA0: sd          $zero, 0x38($a0)
    SD(0, 0X38, ctx->r4);
    // 0x150A7BA4: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x150A7BA8: sh          $t0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r8;
    // 0x150A7BAC: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x150A7BB0: jr          $ra
    // 0x150A7BB4: sh          $t0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r8;
    return;
    return;
    // 0x150A7BB4: sh          $t0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r8;
    // 0x150A7BB8: nop

    // 0x150A7BBC: nop

;}
RECOMP_FUNC void func_150EA10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EA10C: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x150EA110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150EA114: jr          $ra
    // 0x150EA118: nop

    return;
    return;
    // 0x150EA118: nop

;}
RECOMP_FUNC void func_15071FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071FDC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15071FE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15071FE4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15071FE8: lw          $t6, 0x1580($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1580);
    // 0x15071FEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15071FF0: addiu       $t0, $zero, 0x194
    ctx->r8 = ADD32(0, 0X194);
    // 0x15071FF4: bne         $t6, $zero, L_15072080
    if (ctx->r14 != 0) {
        // 0x15071FF8: lui         $v1, 0x800D
        ctx->r3 = S32(0X800D << 16);
            goto L_15072080;
    }
    // 0x15071FF8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15071FFC: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15072000: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    // 0x15072004: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15072008: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x1507200C: addiu       $v1, $v1, -0x3D30
    ctx->r3 = ADD32(ctx->r3, -0X3D30);
    // 0x15072010: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15072014: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x15072018: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_1507201C:
    // 0x1507201C: lbu         $t7, 0x65($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X65);
    // 0x15072020: bnel        $a0, $t7, L_15072034
    if (ctx->r4 != ctx->r15) {
        // 0x15072024: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_15072034;
    }
    goto skip_0;
    // 0x15072024: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x15072028: b           L_1507203C
    // 0x1507202C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_1507203C;
    // 0x1507202C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x15072030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_15072034:
    // 0x15072034: bne         $v0, $a1, L_1507201C
    if (ctx->r2 != ctx->r5) {
        // 0x15072038: addiu       $v1, $v1, 0x32C
        ctx->r3 = ADD32(ctx->r3, 0X32C);
            goto L_1507201C;
    }
    // 0x15072038: addiu       $v1, $v1, 0x32C
    ctx->r3 = ADD32(ctx->r3, 0X32C);
L_1507203C:
    // 0x1507203C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15072040: lbu         $t9, -0x3ABC($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3ABC);
    // 0x15072044: addiu       $t8, $a2, 0x1
    ctx->r24 = ADD32(ctx->r6, 0X1);
    // 0x15072048: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x1507204C: bne         $t8, $t9, L_15072194
    if (ctx->r24 != ctx->r25) {
        // 0x15072050: addiu       $v1, $v1, 0x154C
        ctx->r3 = ADD32(ctx->r3, 0X154C);
            goto L_15072194;
    }
    // 0x15072050: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x15072054: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15072058: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x1507205C: lhu         $t3, 0x76($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X76);
    // 0x15072060: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x15072064: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15072068: sh          $t4, -0x3CBA($at)
    MEM_H(-0X3CBA, ctx->r1) = ctx->r12;
    // 0x1507206C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15072070: lwc1        $f4, -0x60B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X60B8);
    // 0x15072074: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15072078: b           L_150720F8
    // 0x1507207C: swc1        $f4, -0x3B64($at)
    MEM_W(-0X3B64, ctx->r1) = ctx->f4.u32l;
        goto L_150720F8;
    // 0x1507207C: swc1        $f4, -0x3B64($at)
    MEM_W(-0X3B64, ctx->r1) = ctx->f4.u32l;
L_15072080:
    // 0x15072080: addiu       $v1, $v1, 0x154C
    ctx->r3 = ADD32(ctx->r3, 0X154C);
    // 0x15072084: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x15072088: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x1507208C: lw          $t5, 0x2E8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X2E8);
    // 0x15072090: slti        $at, $t5, 0x71
    ctx->r1 = SIGNED(ctx->r13) < 0X71 ? 1 : 0;
    // 0x15072094: bnel        $at, $zero, L_150720B4
    if (ctx->r1 != 0) {
        // 0x15072098: lhu         $t6, 0x76($v0)
        ctx->r14 = MEM_HU(ctx->r2, 0X76);
            goto L_150720B4;
    }
    goto skip_1;
    // 0x15072098: lhu         $t6, 0x76($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X76);
    skip_1:
    // 0x1507209C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150720A0: addiu       $t0, $zero, 0x2E5
    ctx->r8 = ADD32(0, 0X2E5);
    // 0x150720A4: swc1        $f6, 0x2E0($v0)
    MEM_W(0X2E0, ctx->r2) = ctx->f6.u32l;
    // 0x150720A8: b           L_150720F4
    // 0x150720AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
        goto L_150720F4;
    // 0x150720AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x150720B0: lhu         $t6, 0x76($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X76);
L_150720B4:
    // 0x150720B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150720B8: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x150720BC: sh          $t6, -0x3CBA($at)
    MEM_H(-0X3CBA, ctx->r1) = ctx->r14;
    // 0x150720C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x150720C4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150720C8: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x150720CC: lbu         $t7, 0x251($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X251);
    // 0x150720D0: beq         $t7, $zero, L_150720F4
    if (ctx->r15 == 0) {
        // 0x150720D4: nop
    
            goto L_150720F4;
    }
    // 0x150720D4: nop

    // 0x150720D8: lwc1        $f8, -0x3D18($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3D18);
    // 0x150720DC: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x150720E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150720E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150720E8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150720EC: swc1        $f16, -0x3B64($at)
    MEM_W(-0X3B64, ctx->r1) = ctx->f16.u32l;
    // 0x150720F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_150720F4:
    // 0x150720F4: sw          $t8, 0x2E4($v0)
    MEM_W(0X2E4, ctx->r2) = ctx->r24;
L_150720F8:
    // 0x150720F8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150720FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15072100: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15072104: lwc1        $f18, 0x2D8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2D8);
    // 0x15072108: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1507210C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15072110: swc1        $f18, -0x3D10($at)
    MEM_W(-0X3D10, ctx->r1) = ctx->f18.u32l;
    // 0x15072114: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x15072118: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1507211C: addiu       $a0, $a0, -0x3D30
    ctx->r4 = ADD32(ctx->r4, -0X3D30);
    // 0x15072120: lwc1        $f4, 0x2DC($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X2DC);
    // 0x15072124: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x15072128: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1507212C: swc1        $f4, -0x3D0C($at)
    MEM_W(-0X3D0C, ctx->r1) = ctx->f4.u32l;
    // 0x15072130: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15072134: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15072138: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x1507213C: lwc1        $f6, 0x2E0($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X2E0);
    // 0x15072140: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x15072144: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15072148: swc1        $f6, -0x3CF4($at)
    MEM_W(-0X3CF4, ctx->r1) = ctx->f6.u32l;
    // 0x1507214C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15072150: sb          $t4, -0x3CAF($at)
    MEM_B(-0X3CAF, ctx->r1) = ctx->r12;
    // 0x15072154: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x15072158: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1507215C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x15072160: jal         0x1505E650
    // 0x15072164: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x15072164: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x15072168: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x1507216C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x15072170: lw          $t5, -0x3A14($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3A14);
    // 0x15072174: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15072178: sb          $t1, 0x31($t5)
    MEM_B(0X31, ctx->r13) = ctx->r9;
    // 0x1507217C: lw          $t6, -0x3A18($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3A18);
    // 0x15072180: beql        $t6, $zero, L_15072198
    if (ctx->r14 == 0) {
        // 0x15072184: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15072198;
    }
    goto skip_2;
    // 0x15072184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x15072188: lw          $t7, 0x5F0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X5F0);
    // 0x1507218C: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x15072190: sw          $t8, 0x5F0($t6)
    MEM_W(0X5F0, ctx->r14) = ctx->r24;
L_15072194:
    // 0x15072194: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15072198:
    // 0x15072198: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1507219C: jr          $ra
    // 0x150721A0: nop

    return;
    return;
    // 0x150721A0: nop

;}
RECOMP_FUNC void func_150C5B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C5B88: lw          $t6, 0xC8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC8);
    // 0x150C5B8C: addiu       $v1, $a0, 0xC8
    ctx->r3 = ADD32(ctx->r4, 0XC8);
    // 0x150C5B90: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x150C5B94: bnel        $t7, $zero, L_150C5BA8
    if (ctx->r15 != 0) {
        // 0x150C5B98: lw          $t8, 0x0($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X0);
            goto L_150C5BA8;
    }
    goto skip_0;
    // 0x150C5B98: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x150C5B9C: jr          $ra
    // 0x150C5BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x150C5BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150C5BA4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
L_150C5BA8:
    // 0x150C5BA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C5BAC: lwc1        $f4, 0x14($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X14);
    // 0x150C5BB0: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x150C5BB4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x150C5BB8: lwc1        $f6, 0x18($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X18);
    // 0x150C5BBC: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
    // 0x150C5BC0: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x150C5BC4: lwc1        $f8, 0x1C($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x150C5BC8: swc1        $f8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f8.u32l;
    // 0x150C5BCC: jr          $ra
    // 0x150C5BD0: nop

    return;
    return;
    // 0x150C5BD0: nop

;}
RECOMP_FUNC void func_150A2EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A2EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150A2EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150A2EEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150A2EF0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x150A2EF4: lw          $t7, 0x3094($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X3094);
    // 0x150A2EF8: andi        $t6, $a1, 0xFFF
    ctx->r14 = ctx->r5 & 0XFFF;
    // 0x150A2EFC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150A2F00: sltu        $at, $t7, $t6
    ctx->r1 = ctx->r15 < ctx->r14 ? 1 : 0;
    // 0x150A2F04: beq         $at, $zero, L_150A2F14
    if (ctx->r1 == 0) {
        // 0x150A2F08: lui         $v1, 0x800D
        ctx->r3 = S32(0X800D << 16);
            goto L_150A2F14;
    }
    // 0x150A2F08: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150A2F0C: b           L_150A2F94
    // 0x150A2F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150A2F94;
    // 0x150A2F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150A2F14:
    // 0x150A2F14: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x150A2F18: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x150A2F1C: lw          $v1, 0x3098($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3098);
    // 0x150A2F20: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150A2F24: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x150A2F28: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150A2F2C: addu        $t8, $v1, $t0
    ctx->r24 = ADD32(ctx->r3, ctx->r8);
    // 0x150A2F30: lbu         $t9, 0x15($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X15);
    // 0x150A2F34: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150A2F38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150A2F3C: andi        $t1, $t9, 0x3
    ctx->r9 = ctx->r25 & 0X3;
    // 0x150A2F40: bne         $t1, $at, L_150A2F94
    if (ctx->r9 != ctx->r1) {
        // 0x150A2F44: addu        $a0, $t0, $v1
        ctx->r4 = ADD32(ctx->r8, ctx->r3);
            goto L_150A2F94;
    }
    // 0x150A2F44: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    // 0x150A2F48: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x150A2F4C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150A2F50: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x150A2F54: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x150A2F58: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x150A2F5C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150A2F60: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x150A2F64: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150A2F68: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x150A2F6C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150A2F70: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x150A2F74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150A2F78: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x150A2F7C: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x150A2F80: lw          $a2, 0x18($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X18);
    // 0x150A2F84: jal         0x150A2E4C
    // 0x150A2F88: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    func_150A2E4C(rdram, ctx);
        goto after_0;
    // 0x150A2F88: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    after_0:
    // 0x150A2F8C: b           L_150A2F98
    // 0x150A2F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150A2F98;
    // 0x150A2F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150A2F94:
    // 0x150A2F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150A2F98:
    // 0x150A2F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150A2F9C: jr          $ra
    // 0x150A2FA0: nop

    return;
    return;
    // 0x150A2FA0: nop

;}
RECOMP_FUNC void func_151D97A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D97A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151D97AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D97B0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D97B4: addiu       $t7, $t7, -0x4CB0
    ctx->r15 = ADD32(ctx->r15, -0X4CB0);
    // 0x151D97B8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D97BC: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x151D97C0: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151D97C4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D97C8: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151D97CC: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x151D97D0: lw          $t0, 0xC($t7)
    ctx->r8 = MEM_W(ctx->r15, 0XC);
    // 0x151D97D4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151D97D8: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x151D97DC: sw          $t0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r8;
    // 0x151D97E0: lw          $t0, 0x14($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X14);
    // 0x151D97E4: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x151D97E8: lw          $at, 0x18($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X18);
    // 0x151D97EC: sw          $t0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r8;
    // 0x151D97F0: jal         0x150ADA20
    // 0x151D97F4: sw          $at, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D97F4: sw          $at, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->r1;
    after_0:
    // 0x151D97F8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151D97FC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D9800: mfhi        $t1
    ctx->r9 = hi;
    // 0x151D9804: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151D9808: addu        $v0, $sp, $t2
    ctx->r2 = ADD32(ctx->r29, ctx->r10);
    // 0x151D980C: lbu         $v0, 0x1F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1F);
    // 0x151D9810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D9814: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x151D9818: jr          $ra
    // 0x151D981C: nop

    return;
    return;
    // 0x151D981C: nop

;}
RECOMP_FUNC void func_1501396C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501396C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15013970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15013974: lbu         $v0, 0x17($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X17);
    // 0x15013978: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1501397C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15013980: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x15013984: lw          $v1, 0x2ECC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2ECC);
    // 0x15013988: beql        $v1, $zero, L_1501399C
    if (ctx->r3 == 0) {
        // 0x1501398C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1501399C;
    }
    goto skip_0;
    // 0x1501398C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15013990: jalr        $v1
    // 0x15013994: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x15013994: nop

    after_0:
    // 0x15013998: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1501399C:
    // 0x1501399C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150139A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150139A4: jr          $ra
    // 0x150139A8: nop

    return;
    return;
    // 0x150139A8: nop

;}
RECOMP_FUNC void func_1510DA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510DA84: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x1510DA88: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x1510DA8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1510DA90: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1510DA94: lbu         $v0, 0x120($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X120);
    // 0x1510DA98: sb          $zero, 0x123($s0)
    MEM_B(0X123, ctx->r16) = 0;
    // 0x1510DA9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1510DAA0: beql        $v0, $zero, L_1510DABC
    if (ctx->r2 == 0) {
        // 0x1510DAA4: lw          $v0, 0x110($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X110);
            goto L_1510DABC;
    }
    goto skip_0;
    // 0x1510DAA4: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
    skip_0:
    // 0x1510DAA8: beq         $v0, $a0, L_1510DB38
    if (ctx->r2 == ctx->r4) {
        // 0x1510DAAC: lwc1        $f16, 0x74($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
            goto L_1510DB38;
    }
    // 0x1510DAAC: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1510DAB0: b           L_1510DC60
    // 0x1510DAB4: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
        goto L_1510DC60;
    // 0x1510DAB4: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1510DAB8: lw          $v0, 0x110($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X110);
L_1510DABC:
    // 0x1510DABC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x1510DAC0: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1510DAC4: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x1510DAC8: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1510DACC: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x1510DAD0: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x1510DAD4: lwc1        $f8, 0x180($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X180);
    // 0x1510DAD8: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x1510DADC: lbu         $t6, 0x4($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X4);
    // 0x1510DAE0: bnel        $t6, $at, L_1510DAF0
    if (ctx->r14 != ctx->r1) {
        // 0x1510DAE4: lw          $t7, 0x188($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X188);
            goto L_1510DAF0;
    }
    goto skip_1;
    // 0x1510DAE4: lw          $t7, 0x188($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X188);
    skip_1:
    // 0x1510DAE8: lwc1        $f12, 0x78($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1510DAEC: lw          $t7, 0x188($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X188);
L_1510DAF0:
    // 0x1510DAF0: addiu       $t8, $v0, 0x18C
    ctx->r24 = ADD32(ctx->r2, 0X18C);
    // 0x1510DAF4: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x1510DAF8: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x1510DAFC: lhu         $t9, 0x160($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X160);
    // 0x1510DB00: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1510DB04: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1510DB08: bgez        $t9, L_1510DB1C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1510DB0C: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_1510DB1C;
    }
    // 0x1510DB0C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1510DB10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1510DB14: nop

    // 0x1510DB18: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_1510DB1C:
    // 0x1510DB1C: lhu         $t0, 0x7A($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X7A);
    // 0x1510DB20: lwc1        $f8, 0x14C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14C);
    // 0x1510DB24: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x1510DB28: addiu       $t2, $t1, 0x20
    ctx->r10 = ADD32(ctx->r9, 0X20);
    // 0x1510DB2C: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1510DB30: b           L_1510DC60
    // 0x1510DB34: sb          $t2, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r10;
        goto L_1510DC60;
    // 0x1510DB34: sb          $t2, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = ctx->r10;
L_1510DB38:
    // 0x1510DB38: lw          $v1, 0x110($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X110);
    // 0x1510DB3C: lbu         $t3, 0x6E($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X6E);
    // 0x1510DB40: beql        $a0, $t3, L_1510E110
    if (ctx->r4 == ctx->r11) {
        // 0x1510DB44: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_1510E110;
    }
    goto skip_2;
    // 0x1510DB44: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x1510DB48: lh          $t4, 0x10($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X10);
    // 0x1510DB4C: lw          $a3, 0x94($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X94);
    // 0x1510DB50: lh          $t5, 0x14($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X14);
    // 0x1510DB54: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x1510DB58: addiu       $a3, $a3, 0x128
    ctx->r7 = ADD32(ctx->r7, 0X128);
    // 0x1510DB5C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x1510DB60: cvt.s.w     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1510DB64: addiu       $t6, $sp, 0x78
    ctx->r14 = ADD32(ctx->r29, 0X78);
    // 0x1510DB68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510DB6C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1510DB70: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x1510DB74: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1510DB78: jal         0x150A3FC4
    // 0x1510DB7C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    func_150A3FC4(rdram, ctx);
        goto after_0;
    // 0x1510DB7C: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    after_0:
    // 0x1510DB80: bne         $v0, $zero, L_1510DC08
    if (ctx->r2 != 0) {
        // 0x1510DB84: lw          $v1, 0x58($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X58);
            goto L_1510DC08;
    }
    // 0x1510DB84: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x1510DB88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1510DB8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x1510DB90: lh          $t7, 0x10($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X10);
    // 0x1510DB94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DB98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1510DB9C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1510DBA0: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x1510DBA4: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    // 0x1510DBA8: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510DBAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1510DBB0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x1510DBB4: lh          $t8, 0x12($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X12);
    // 0x1510DBB8: lwc1        $f8, 0x2D20($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2D20);
    // 0x1510DBBC: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1510DBC0: nop

    // 0x1510DBC4: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1510DBC8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x1510DBCC: lh          $t9, 0x14($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X14);
    // 0x1510DBD0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x1510DBD4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1510DBD8: nop

    // 0x1510DBDC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1510DBE0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x1510DBE4: lbu         $t0, 0x71($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X71);
    // 0x1510DBE8: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x1510DBEC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x1510DBF0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x1510DBF4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x1510DBF8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x1510DBFC: jal         0x1510E7A4
    // 0x1510DC00: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_1510E7A4(rdram, ctx);
        goto after_1;
    // 0x1510DC00: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x1510DC04: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
L_1510DC08:
    // 0x1510DC08: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x1510DC0C: lh          $t2, 0x10($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X10);
    // 0x1510DC10: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x1510DC14: nop

    // 0x1510DC18: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1510DC1C: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x1510DC20: lh          $t4, 0x14($v1)
    ctx->r12 = MEM_H(ctx->r3, 0X14);
    // 0x1510DC24: lh          $t3, 0x12($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X12);
    // 0x1510DC28: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x1510DC2C: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x1510DC30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1510DC34: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510DC38: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x1510DC3C: lbu         $t5, 0x4D($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X4D);
    // 0x1510DC40: lwc1        $f8, 0x2C($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x1510DC44: sb          $zero, 0x6B($sp)
    MEM_B(0X6B, ctx->r29) = 0;
    // 0x1510DC48: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x1510DC4C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1510DC50: nop

    // 0x1510DC54: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1510DC58: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1510DC5C: nop

L_1510DC60:
    // 0x1510DC60: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x1510DC64: swc1        $f10, 0x114($s0)
    MEM_W(0X114, ctx->r16) = ctx->f10.u32l;
    // 0x1510DC68: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1510DC6C: swc1        $f6, 0x118($s0)
    MEM_W(0X118, ctx->r16) = ctx->f6.u32l;
    // 0x1510DC70: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1510DC74: swc1        $f4, 0x11C($s0)
    MEM_W(0X11C, ctx->r16) = ctx->f4.u32l;
    // 0x1510DC78: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1510DC7C: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x1510DC80: nop

    // 0x1510DC84: bc1tl       L_1510E110
    if (c1cs) {
        // 0x1510DC88: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_1510E110;
    }
    goto skip_3;
    // 0x1510DC88: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x1510DC8C: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x1510DC90: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x1510DC94: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x1510DC98: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    // 0x1510DC9C: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
    // 0x1510DCA0: jal         0x1510E388
    // 0x1510DCA4: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    func_1510E388(rdram, ctx);
        goto after_2;
    // 0x1510DCA4: swc1        $f16, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x1510DCA8: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
    // 0x1510DCAC: beq         $v0, $zero, L_1510E10C
    if (ctx->r2 == 0) {
        // 0x1510DCB0: lwc1        $f16, 0x74($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
            goto L_1510E10C;
    }
    // 0x1510DCB0: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1510DCB4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1510DCB8: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1510DCBC: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    // 0x1510DCC0: c.eq.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl == ctx->f14.fl;
    // 0x1510DCC4: sub.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x1510DCC8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1510DCCC: bc1f        L_1510DCE0
    if (!c1cs) {
        // 0x1510DCD0: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_1510DCE0;
    }
    // 0x1510DCD0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1510DCD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1510DCD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1510DCDC: nop

L_1510DCE0:
    // 0x1510DCE0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x1510DCE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1510DCE8: nop

    // 0x1510DCEC: add.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1510DCF0: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x1510DCF4: nop

    // 0x1510DCF8: bc1f        L_1510DD04
    if (!c1cs) {
        // 0x1510DCFC: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1510DD04;
    }
    // 0x1510DCFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DD00: lwc1        $f2, 0x2D24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2D24);
L_1510DD04:
    // 0x1510DD04: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x1510DD08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1510DD0C: nop

    // 0x1510DD10: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x1510DD14: nop

    // 0x1510DD18: bc1fl       L_1510DD28
    if (!c1cs) {
        // 0x1510DD1C: lbu         $t7, 0x124($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X124);
            goto L_1510DD28;
    }
    goto skip_4;
    // 0x1510DD1C: lbu         $t7, 0x124($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X124);
    skip_4:
    // 0x1510DD20: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1510DD24: lbu         $t7, 0x124($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X124);
L_1510DD28:
    // 0x1510DD28: div.s       $f14, $f16, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1510DD2C: lui         $at, 0x46FA
    ctx->r1 = S32(0X46FA << 16);
    // 0x1510DD30: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x1510DD34: beql        $t8, $zero, L_1510DD78
    if (ctx->r24 == 0) {
        // 0x1510DD38: mtc1        $at, $f8
        ctx->f8.u32l = ctx->r1;
            goto L_1510DD78;
    }
    goto skip_5;
    // 0x1510DD38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    skip_5:
    // 0x1510DD3C: lbu         $v0, 0x122($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X122);
    // 0x1510DD40: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1510DD44: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1510DD48: beql        $v0, $at, L_1510DDA0
    if (ctx->r2 == ctx->r1) {
        // 0x1510DD4C: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_1510DDA0;
    }
    goto skip_6;
    // 0x1510DD4C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    skip_6:
    // 0x1510DD50: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1510DD54: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1510DD58: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1510DD5C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x1510DD60: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x1510DD64: bnel        $at, $zero, L_1510DDA0
    if (ctx->r1 != 0) {
        // 0x1510DD68: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_1510DDA0;
    }
    goto skip_7;
    // 0x1510DD68: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    skip_7:
    // 0x1510DD6C: b           L_1510DD9C
    // 0x1510DD70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_1510DD9C;
    // 0x1510DD70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x1510DD74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
L_1510DD78:
    // 0x1510DD78: nop

    // 0x1510DD7C: div.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x1510DD80: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1510DD84: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x1510DD88: nop

    // 0x1510DD8C: slti        $at, $v0, 0xA1
    ctx->r1 = SIGNED(ctx->r2) < 0XA1 ? 1 : 0;
    // 0x1510DD90: bnel        $at, $zero, L_1510DDA0
    if (ctx->r1 != 0) {
        // 0x1510DD94: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_1510DDA0;
    }
    goto skip_8;
    // 0x1510DD94: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    skip_8:
    // 0x1510DD98: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
L_1510DD9C:
    // 0x1510DD9C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
L_1510DDA0:
    // 0x1510DDA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1510DDA4: sb          $v0, 0x122($s0)
    MEM_B(0X122, ctx->r16) = ctx->r2;
    // 0x1510DDA8: swc1        $f12, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f12.u32l;
    // 0x1510DDAC: beq         $a0, $zero, L_1510DE10
    if (ctx->r4 == 0) {
        // 0x1510DDB0: swc1        $f4, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
            goto L_1510DE10;
    }
    // 0x1510DDB0: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x1510DDB4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1510DDB8: swc1        $f12, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f12.u32l;
    // 0x1510DDBC: jal         0x15048A40
    // 0x1510DDC0: swc1        $f14, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f14.u32l;
    func_15048A40(rdram, ctx);
        goto after_3;
    // 0x1510DDC0: swc1        $f14, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f14.u32l;
    after_3:
    // 0x1510DDC4: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x1510DDC8: jal         0x150489B0
    // 0x1510DDCC: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    func_150489B0(rdram, ctx);
        goto after_4;
    // 0x1510DDCC: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    after_4:
    // 0x1510DDD0: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1510DDD4: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1510DDD8: lwc1        $f4, 0xAC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1510DDDC: lwc1        $f2, 0x94($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X94);
    // 0x1510DDE0: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1510DDE4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x1510DDE8: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x1510DDEC: mul.s       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1510DDF0: lwc1        $f14, 0xA0($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x1510DDF4: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x1510DDF8: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1510DDFC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1510DE00: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x1510DE04: mul.s       $f4, $f2, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x1510DE08: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1510DE0C: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
L_1510DE10:
    // 0x1510DE10: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1510DE14: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x1510DE18: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x1510DE1C: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x1510DE20: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x1510DE24: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1510DE28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1510DE2C: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1510DE30: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1510DE34: mov.s       $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.fl = ctx->f12.fl;
    // 0x1510DE38: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x1510DE3C: addiu       $a0, $a0, -0x1640
    ctx->r4 = ADD32(ctx->r4, -0X1640);
    // 0x1510DE40: addiu       $v0, $sp, 0xAC
    ctx->r2 = ADD32(ctx->r29, 0XAC);
    // 0x1510DE44: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1510DE48: beq         $v1, $zero, L_1510DE74
    if (ctx->r3 == 0) {
        // 0x1510DE4C: add.s       $f0, $f4, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
            goto L_1510DE74;
    }
    // 0x1510DE4C: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1510DE50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1510DE54: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1510DE58: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1510DE5C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1510DE60: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1510DE64: nop

    // 0x1510DE68: mul.s       $f8, $f2, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x1510DE6C: add.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x1510DE70: sub.s       $f18, $f12, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f8.fl;
L_1510DE74:
    // 0x1510DE74: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x1510DE78: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x1510DE7C: lwc1        $f2, 0xB4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1510DE80: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1510DE84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DE88: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x1510DE8C: mul.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1510DE90: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1510DE94: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1510DE98: mul.s       $f4, $f10, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1510DE9C: nop

    // 0x1510DEA0: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1510DEA4: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x1510DEA8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1510DEAC: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1510DEB0: lwc1        $f4, 0x2D28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D28);
    // 0x1510DEB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DEB8: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1510DEBC: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x1510DEC0: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x1510DEC4: bc1f        L_1510DED0
    if (!c1cs) {
        // 0x1510DEC8: nop
    
            goto L_1510DED0;
    }
    // 0x1510DEC8: nop

    // 0x1510DECC: lwc1        $f12, 0x2D2C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X2D2C);
L_1510DED0:
    // 0x1510DED0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DED4: lwc1        $f8, 0x2D30($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2D30);
    // 0x1510DED8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DEDC: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x1510DEE0: nop

    // 0x1510DEE4: bc1fl       L_1510DEF4
    if (!c1cs) {
        // 0x1510DEE8: sqrt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
            goto L_1510DEF4;
    }
    goto skip_9;
    // 0x1510DEE8: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    skip_9:
    // 0x1510DEEC: lwc1        $f12, 0x2D34($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X2D34);
    // 0x1510DEF0: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
L_1510DEF4:
    // 0x1510DEF4: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1510DEF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DEFC: swc1        $f16, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f16.u32l;
    // 0x1510DF00: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x1510DF04: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x1510DF08: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1510DF0C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x1510DF10: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1510DF14: lwc1        $f4, 0x2D38($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D38);
    // 0x1510DF18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DF1C: add.s       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1510DF20: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x1510DF24: nop

    // 0x1510DF28: bc1f        L_1510DF34
    if (!c1cs) {
        // 0x1510DF2C: nop
    
            goto L_1510DF34;
    }
    // 0x1510DF2C: nop

    // 0x1510DF30: lwc1        $f2, 0x2D3C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2D3C);
L_1510DF34:
    // 0x1510DF34: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DF38: lwc1        $f6, 0x2D40($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2D40);
    // 0x1510DF3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1510DF40: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x1510DF44: nop

    // 0x1510DF48: bc1fl       L_1510DF58
    if (!c1cs) {
        // 0x1510DF4C: sqrt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
            goto L_1510DF58;
    }
    goto skip_10;
    // 0x1510DF4C: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
    skip_10:
    // 0x1510DF50: lwc1        $f2, 0x2D44($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2D44);
    // 0x1510DF54: sqrt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = sqrtf(ctx->f2.fl);
L_1510DF58:
    // 0x1510DF58: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1510DF5C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x1510DF60: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1510DF64: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1510DF68: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    // 0x1510DF6C: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1510DF70: beq         $v1, $a1, L_1510E044
    if (ctx->r3 == ctx->r5) {
        // 0x1510DF74: nop
    
            goto L_1510E044;
    }
    // 0x1510DF74: nop

L_1510DF78:
    // 0x1510DF78: mul.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1510DF7C: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1510DF80: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x1510DF84: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1510DF88: mul.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1510DF8C: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x1510DF90: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x1510DF94: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1510DF98: div.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1510DF9C: mul.s       $f10, $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x1510DFA0: div.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1510DFA4: swc1        $f16, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f16.u32l;
    // 0x1510DFA8: lwc1        $f16, -0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X4);
    // 0x1510DFAC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1510DFB0: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x1510DFB4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x1510DFB8: sh          $t3, 0x90($t7)
    MEM_H(0X90, ctx->r15) = ctx->r11;
    // 0x1510DFBC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1510DFC0: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x1510DFC4: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1510DFC8: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x1510DFCC: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x1510DFD0: addu        $t4, $t2, $v1
    ctx->r12 = ADD32(ctx->r10, ctx->r3);
    // 0x1510DFD4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1510DFD8: nop

    // 0x1510DFDC: sh          $t9, 0xA0($t4)
    MEM_H(0XA0, ctx->r12) = ctx->r25;
    // 0x1510DFE0: lwc1        $f10, -0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X4);
    // 0x1510DFE4: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x1510DFE8: neg.s       $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = -ctx->f10.fl;
    // 0x1510DFEC: sll         $t7, $t3, 6
    ctx->r15 = S32(ctx->r11 << 6);
    // 0x1510DFF0: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1510DFF4: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x1510DFF8: addu        $t0, $t8, $v1
    ctx->r8 = ADD32(ctx->r24, ctx->r3);
    // 0x1510DFFC: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1510E000: nop

    // 0x1510E004: sh          $t6, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r14;
    // 0x1510E008: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1510E00C: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x1510E010: neg.s       $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = -ctx->f10.fl;
    // 0x1510E014: sll         $t4, $t9, 6
    ctx->r12 = S32(ctx->r25 << 6);
    // 0x1510E018: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1510E01C: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x1510E020: addu        $t3, $t5, $v1
    ctx->r11 = ADD32(ctx->r13, ctx->r3);
    // 0x1510E024: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1510E028: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x1510E02C: nop

    // 0x1510E030: sh          $t2, 0xC0($t3)
    MEM_H(0XC0, ctx->r11) = ctx->r10;
    // 0x1510E034: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1510E038: mul.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1510E03C: bne         $v1, $a1, L_1510DF78
    if (ctx->r3 != ctx->r5) {
        // 0x1510E040: nop
    
            goto L_1510DF78;
    }
    // 0x1510E040: nop

L_1510E044:
    // 0x1510E044: mul.s       $f16, $f18, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1510E048: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1510E04C: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x1510E050: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x1510E054: mul.s       $f10, $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x1510E058: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x1510E05C: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x1510E060: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1510E064: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1510E068: div.s       $f16, $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f12.fl);
    // 0x1510E06C: mul.s       $f10, $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x1510E070: div.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1510E074: swc1        $f16, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f16.u32l;
    // 0x1510E078: lwc1        $f16, -0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0X4);
    // 0x1510E07C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1510E080: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x1510E084: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x1510E088: sh          $t3, 0x90($t7)
    MEM_H(0X90, ctx->r15) = ctx->r11;
    // 0x1510E08C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1510E090: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x1510E094: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1510E098: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x1510E09C: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x1510E0A0: addu        $t4, $t2, $v1
    ctx->r12 = ADD32(ctx->r10, ctx->r3);
    // 0x1510E0A4: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1510E0A8: nop

    // 0x1510E0AC: sh          $t9, 0xA0($t4)
    MEM_H(0XA0, ctx->r12) = ctx->r25;
    // 0x1510E0B0: lwc1        $f10, -0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, -0X4);
    // 0x1510E0B4: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x1510E0B8: neg.s       $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = -ctx->f10.fl;
    // 0x1510E0BC: sll         $t7, $t3, 6
    ctx->r15 = S32(ctx->r11 << 6);
    // 0x1510E0C0: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1510E0C4: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x1510E0C8: addu        $t0, $t8, $v1
    ctx->r8 = ADD32(ctx->r24, ctx->r3);
    // 0x1510E0CC: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x1510E0D0: nop

    // 0x1510E0D4: sh          $t6, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r14;
    // 0x1510E0D8: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1510E0DC: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x1510E0E0: neg.s       $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = -ctx->f10.fl;
    // 0x1510E0E4: sll         $t4, $t9, 6
    ctx->r12 = S32(ctx->r25 << 6);
    // 0x1510E0E8: trunc.w.s   $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1510E0EC: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x1510E0F0: addu        $t3, $t5, $v1
    ctx->r11 = ADD32(ctx->r13, ctx->r3);
    // 0x1510E0F4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x1510E0F8: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x1510E0FC: nop

    // 0x1510E100: sh          $t2, 0xC0($t3)
    MEM_H(0XC0, ctx->r11) = ctx->r10;
    // 0x1510E104: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1510E108: sb          $t7, 0x123($s0)
    MEM_B(0X123, ctx->r16) = ctx->r15;
L_1510E10C:
    // 0x1510E10C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_1510E110:
    // 0x1510E110: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x1510E114: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x1510E118: jr          $ra
    // 0x1510E11C: nop

    return;
    return;
    // 0x1510E11C: nop

;}
RECOMP_FUNC void func_1505E874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505E874: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x1505E878: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1505E87C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1505E880: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1505E884: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x1505E888: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x1505E88C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1505E890: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1505E894: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1505E898: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    // 0x1505E89C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x1505E8A0: beq         $v1, $at, L_1505ED20
    if (ctx->r3 == ctx->r1) {
        // 0x1505E8A4: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_1505ED20;
    }
    // 0x1505E8A4: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x1505E8A8: lbu         $t6, 0x106($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X106);
    // 0x1505E8AC: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x1505E8B0: lw          $v0, 0x1588($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1588);
    // 0x1505E8B4: sh          $t6, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r14;
    // 0x1505E8B8: lw          $t1, -0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, -0X8);
    // 0x1505E8BC: beql        $t1, $zero, L_1505ED24
    if (ctx->r9 == 0) {
        // 0x1505E8C0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_1505ED24;
    }
    goto skip_0;
    // 0x1505E8C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x1505E8C4: lbu         $t8, 0x105($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X105);
    // 0x1505E8C8: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x1505E8CC: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x1505E8D0: bne         $t8, $zero, L_1505E97C
    if (ctx->r24 != 0) {
        // 0x1505E8D4: subu        $t3, $t3, $t9
        ctx->r11 = SUB32(ctx->r11, ctx->r25);
            goto L_1505E97C;
    }
    // 0x1505E8D4: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x1505E8D8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1505E8DC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x1505E8E0: addu        $v1, $t1, $t3
    ctx->r3 = ADD32(ctx->r9, ctx->r11);
    // 0x1505E8E4: lbu         $t4, 0x8($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X8);
    // 0x1505E8E8: sb          $zero, 0x8A($s0)
    MEM_B(0X8A, ctx->r16) = 0;
    // 0x1505E8EC: beq         $v0, $zero, L_1505E8F8
    if (ctx->r2 == 0) {
        // 0x1505E8F0: sb          $t4, 0x10F($s0)
        MEM_B(0X10F, ctx->r16) = ctx->r12;
            goto L_1505E8F8;
    }
    // 0x1505E8F0: sb          $t4, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r12;
    // 0x1505E8F4: sb          $zero, 0x26($v0)
    MEM_B(0X26, ctx->r2) = 0;
L_1505E8F8:
    // 0x1505E8F8: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
    // 0x1505E8FC: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
    // 0x1505E900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505E904: bne         $t5, $at, L_1505E924
    if (ctx->r13 != ctx->r1) {
        // 0x1505E908: addiu       $a1, $sp, 0x54
        ctx->r5 = ADD32(ctx->r29, 0X54);
            goto L_1505E924;
    }
    // 0x1505E908: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x1505E90C: lbu         $t6, 0x13D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13D);
    // 0x1505E910: beql        $t6, $zero, L_1505E928
    if (ctx->r14 == 0) {
        // 0x1505E914: lw          $v0, 0x4($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X4);
            goto L_1505E928;
    }
    goto skip_1;
    // 0x1505E914: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    skip_1:
    // 0x1505E918: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1505E91C: nop

    // 0x1505E920: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
L_1505E924:
    // 0x1505E924: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
L_1505E928:
    // 0x1505E928: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1505E92C: beql        $v0, $zero, L_1505E980
    if (ctx->r2 == 0) {
        // 0x1505E930: lw          $t7, 0xF4($s0)
        ctx->r15 = MEM_W(ctx->r16, 0XF4);
            goto L_1505E980;
    }
    goto skip_2;
    // 0x1505E930: lw          $t7, 0xF4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XF4);
    skip_2:
    // 0x1505E934: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x1505E938: jal         0x1506E46C
    // 0x1505E93C: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1505E93C: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    after_0:
    // 0x1505E940: beq         $v0, $zero, L_1505E97C
    if (ctx->r2 == 0) {
        // 0x1505E944: lw          $t1, 0x68($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X68);
            goto L_1505E97C;
    }
    // 0x1505E944: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x1505E948: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x1505E94C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1505E950: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1505E954: beq         $a0, $at, L_1505E970
    if (ctx->r4 == ctx->r1) {
        // 0x1505E958: addiu       $a2, $zero, 0x5DC0
        ctx->r6 = ADD32(0, 0X5DC0);
            goto L_1505E970;
    }
    // 0x1505E958: addiu       $a2, $zero, 0x5DC0
    ctx->r6 = ADD32(0, 0X5DC0);
    // 0x1505E95C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1505E960: jal         0x15060A30
    // 0x1505E964: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    func_15060A30(rdram, ctx);
        goto after_1;
    // 0x1505E964: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    after_1:
    // 0x1505E968: b           L_1505E97C
    // 0x1505E96C: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
        goto L_1505E97C;
    // 0x1505E96C: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
L_1505E970:
    // 0x1505E970: jal         0x15060B04
    // 0x1505E974: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    func_15060B04(rdram, ctx);
        goto after_2;
    // 0x1505E974: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    after_2:
    // 0x1505E978: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
L_1505E97C:
    // 0x1505E97C: lw          $t7, 0xF4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XF4);
L_1505E980:
    // 0x1505E980: lbu         $v0, 0x105($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X105);
    // 0x1505E984: lui         $at, 0xFFF3
    ctx->r1 = S32(0XFFF3 << 16);
    // 0x1505E988: ori         $at, $at, 0xFEB1
    ctx->r1 = ctx->r1 | 0XFEB1;
    // 0x1505E98C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x1505E990: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x1505E994: beq         $at, $zero, L_1505EC90
    if (ctx->r1 == 0) {
        // 0x1505E998: sw          $t8, 0xF4($s0)
        MEM_W(0XF4, ctx->r16) = ctx->r24;
            goto L_1505EC90;
    }
    // 0x1505E998: sw          $t8, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r24;
    // 0x1505E99C: lhu         $t9, 0x5A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X5A);
    // 0x1505E9A0: lbu         $t7, 0x10B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X10B);
    // 0x1505E9A4: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x1505E9A8: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x1505E9AC: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x1505E9B0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1505E9B4: addu        $t0, $t1, $t3
    ctx->r8 = ADD32(ctx->r9, ctx->r11);
    // 0x1505E9B8: addu        $v1, $t0, $t4
    ctx->r3 = ADD32(ctx->r8, ctx->r12);
    // 0x1505E9BC: lbu         $t5, 0xD($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XD);
    // 0x1505E9C0: andi        $t9, $t7, 0xFFFE
    ctx->r25 = ctx->r15 & 0XFFFE;
    // 0x1505E9C4: sb          $t9, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r25;
    // 0x1505E9C8: lbu         $t3, 0xD($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0XD);
    // 0x1505E9CC: lbu         $a1, 0x127($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X127);
    // 0x1505E9D0: andi        $t2, $t5, 0xFE
    ctx->r10 = ctx->r13 & 0XFE;
    // 0x1505E9D4: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x1505E9D8: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x1505E9DC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1505E9E0: beq         $a1, $at, L_1505EA50
    if (ctx->r5 == ctx->r1) {
        // 0x1505E9E4: sb          $t5, 0x10B($s0)
        MEM_B(0X10B, ctx->r16) = ctx->r13;
            goto L_1505EA50;
    }
    // 0x1505E9E4: sb          $t5, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r13;
    // 0x1505E9E8: bnel        $v0, $zero, L_1505EA54
    if (ctx->r2 != 0) {
        // 0x1505E9EC: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_1505EA54;
    }
    goto skip_3;
    // 0x1505E9EC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    skip_3:
    // 0x1505E9F0: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x1505E9F4: beql        $v0, $zero, L_1505EA54
    if (ctx->r2 == 0) {
        // 0x1505E9F8: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_1505EA54;
    }
    goto skip_4;
    // 0x1505E9F8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    skip_4:
    // 0x1505E9FC: lw          $v1, 0x318($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X318);
    // 0x1505EA00: beql        $v1, $zero, L_1505EA54
    if (ctx->r3 == 0) {
        // 0x1505EA04: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_1505EA54;
    }
    goto skip_5;
    // 0x1505EA04: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    skip_5:
    // 0x1505EA08: lbu         $t6, 0x197($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X197);
    // 0x1505EA0C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x1505EA10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1505EA14: beq         $t6, $zero, L_1505EA50
    if (ctx->r14 == 0) {
        // 0x1505EA18: addiu       $a3, $zero, 0xB4
        ctx->r7 = ADD32(0, 0XB4);
            goto L_1505EA50;
    }
    // 0x1505EA18: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    // 0x1505EA1C: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x1505EA20: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1505EA24: lbu         $t8, 0x23D($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X23D);
    // 0x1505EA28: sb          $t2, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r10;
    // 0x1505EA2C: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x1505EA30: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x1505EA34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1505EA38: jal         0x1517F488
    // 0x1505EA3C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_1517F488(rdram, ctx);
        goto after_3;
    // 0x1505EA3C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_3:
    // 0x1505EA40: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x1505EA44: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x1505EA48: lbu         $t2, 0x53($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X53);
    // 0x1505EA4C: lbu         $a1, 0x127($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X127);
L_1505EA50:
    // 0x1505EA50: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
L_1505EA54:
    // 0x1505EA54: beql        $a1, $at, L_1505EBE4
    if (ctx->r5 == ctx->r1) {
        // 0x1505EA58: addiu       $at, $zero, 0xC8
        ctx->r1 = ADD32(0, 0XC8);
            goto L_1505EBE4;
    }
    goto skip_6;
    // 0x1505EA58: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    skip_6:
    // 0x1505EA5C: lbu         $t3, 0x1CA($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1CA);
    // 0x1505EA60: bnel        $t3, $zero, L_1505EBE4
    if (ctx->r11 != 0) {
        // 0x1505EA64: addiu       $at, $zero, 0xC8
        ctx->r1 = ADD32(0, 0XC8);
            goto L_1505EBE4;
    }
    goto skip_7;
    // 0x1505EA64: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    skip_7:
    // 0x1505EA68: lbu         $a0, 0x105($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X105);
    // 0x1505EA6C: lhu         $t7, 0x5A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X5A);
    // 0x1505EA70: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x1505EA74: addu        $v0, $t0, $t9
    ctx->r2 = ADD32(ctx->r8, ctx->r25);
    // 0x1505EA78: lhu         $t4, 0xA($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XA);
    // 0x1505EA7C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1505EA80: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x1505EA84: beq         $t4, $zero, L_1505EAA0
    if (ctx->r12 == 0) {
        // 0x1505EA88: sll         $t8, $t7, 2
        ctx->r24 = S32(ctx->r15 << 2);
            goto L_1505EAA0;
    }
    // 0x1505EA88: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1505EA8C: lhu         $t5, 0xE($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE);
L_1505EA90:
    // 0x1505EA90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1505EA94: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1505EA98: bnel        $t5, $zero, L_1505EA90
    if (ctx->r13 != 0) {
        // 0x1505EA9C: lhu         $t5, 0xE($v0)
        ctx->r13 = MEM_HU(ctx->r2, 0XE);
            goto L_1505EA90;
    }
    goto skip_8;
    // 0x1505EA9C: lhu         $t5, 0xE($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XE);
    skip_8:
L_1505EAA0:
    // 0x1505EAA0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x1505EAA4: beq         $at, $zero, L_1505EAB0
    if (ctx->r1 == 0) {
        // 0x1505EAA8: subu        $t8, $t8, $t7
        ctx->r24 = SUB32(ctx->r24, ctx->r15);
            goto L_1505EAB0;
    }
    // 0x1505EAA8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x1505EAAC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_1505EAB0:
    // 0x1505EAB0: bne         $v1, $t6, L_1505EBE0
    if (ctx->r3 != ctx->r14) {
        // 0x1505EAB4: sll         $t8, $t8, 3
        ctx->r24 = S32(ctx->r24 << 3);
            goto L_1505EBE0;
    }
    // 0x1505EAB4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x1505EAB8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x1505EABC: addu        $t3, $t1, $t8
    ctx->r11 = ADD32(ctx->r9, ctx->r24);
    // 0x1505EAC0: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x1505EAC4: bne         $v0, $at, L_1505EAD4
    if (ctx->r2 != ctx->r1) {
        // 0x1505EAC8: lbu         $v1, 0x0($t3)
        ctx->r3 = MEM_BU(ctx->r11, 0X0);
            goto L_1505EAD4;
    }
    // 0x1505EAC8: lbu         $v1, 0x0($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X0);
    // 0x1505EACC: b           L_1505EBCC
    // 0x1505EAD0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
        goto L_1505EBCC;
    // 0x1505EAD0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
L_1505EAD4:
    // 0x1505EAD4: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x1505EAD8: bnel        $v0, $at, L_1505EAEC
    if (ctx->r2 != ctx->r1) {
        // 0x1505EADC: lbu         $t9, 0xAD($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0XAD);
            goto L_1505EAEC;
    }
    goto skip_9;
    // 0x1505EADC: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
    skip_9:
    // 0x1505EAE0: b           L_1505EBCC
    // 0x1505EAE4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
        goto L_1505EBCC;
    // 0x1505EAE4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x1505EAE8: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
L_1505EAEC:
    // 0x1505EAEC: beql        $t9, $zero, L_1505EB00
    if (ctx->r25 == 0) {
        // 0x1505EAF0: lw          $v0, 0x184($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X184);
            goto L_1505EB00;
    }
    goto skip_10;
    // 0x1505EAF0: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    skip_10:
    // 0x1505EAF4: b           L_1505EBCC
    // 0x1505EAF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_1505EBCC;
    // 0x1505EAF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x1505EAFC: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
L_1505EB00:
    // 0x1505EB00: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x1505EB04: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1505EB08: andi        $t4, $v0, 0x1F
    ctx->r12 = ctx->r2 & 0X1F;
    // 0x1505EB0C: beq         $t4, $at, L_1505EB1C
    if (ctx->r12 == ctx->r1) {
        // 0x1505EB10: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_1505EB1C;
    }
    // 0x1505EB10: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x1505EB14: bnel        $t4, $at, L_1505EB38
    if (ctx->r12 != ctx->r1) {
        // 0x1505EB18: addiu       $t6, $v1, -0xE
        ctx->r14 = ADD32(ctx->r3, -0XE);
            goto L_1505EB38;
    }
    goto skip_11;
    // 0x1505EB18: addiu       $t6, $v1, -0xE
    ctx->r14 = ADD32(ctx->r3, -0XE);
    skip_11:
L_1505EB1C:
    // 0x1505EB1C: lw          $t5, -0x1610($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1610);
    // 0x1505EB20: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x1505EB24: beql        $t5, $at, L_1505EB38
    if (ctx->r13 == ctx->r1) {
        // 0x1505EB28: addiu       $t6, $v1, -0xE
        ctx->r14 = ADD32(ctx->r3, -0XE);
            goto L_1505EB38;
    }
    goto skip_12;
    // 0x1505EB28: addiu       $t6, $v1, -0xE
    ctx->r14 = ADD32(ctx->r3, -0XE);
    skip_12:
    // 0x1505EB2C: b           L_1505EBCC
    // 0x1505EB30: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
        goto L_1505EBCC;
    // 0x1505EB30: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x1505EB34: addiu       $t6, $v1, -0xE
    ctx->r14 = ADD32(ctx->r3, -0XE);
L_1505EB38:
    // 0x1505EB38: sltiu       $at, $t6, 0x3B
    ctx->r1 = ctx->r14 < 0X3B ? 1 : 0;
    // 0x1505EB3C: beq         $at, $zero, L_1505EBC8
    if (ctx->r1 == 0) {
        // 0x1505EB40: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1505EBC8;
    }
    // 0x1505EB40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1505EB44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505EB48: addu        $at, $at, $t6
    gpr jr_addend_1505EB50 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x1505EB4C: lw          $t6, -0x6AC0($at)
    ctx->r14 = ADD32(ctx->r1, -0X6AC0);
    // 0x1505EB50: jr          $t6
    // 0x1505EB54: nop

    switch (jr_addend_1505EB50 >> 2) {
        case 0: goto L_1505EB80; break;
        case 1: goto L_1505EB80; break;
        case 2: goto L_1505EB88; break;
        case 3: goto L_1505EBC8; break;
        case 4: goto L_1505EBC8; break;
        case 5: goto L_1505EBC8; break;
        case 6: goto L_1505EBC8; break;
        case 7: goto L_1505EBC8; break;
        case 8: goto L_1505EBC8; break;
        case 9: goto L_1505EBC8; break;
        case 10: goto L_1505EBC8; break;
        case 11: goto L_1505EBC8; break;
        case 12: goto L_1505EBC8; break;
        case 13: goto L_1505EBC8; break;
        case 14: goto L_1505EBC8; break;
        case 15: goto L_1505EBC8; break;
        case 16: goto L_1505EBC8; break;
        case 17: goto L_1505EBC8; break;
        case 18: goto L_1505EB58; break;
        case 19: goto L_1505EB58; break;
        case 20: goto L_1505EBC8; break;
        case 21: goto L_1505EBC8; break;
        case 22: goto L_1505EBC8; break;
        case 23: goto L_1505EB58; break;
        case 24: goto L_1505EB58; break;
        case 25: goto L_1505EBC8; break;
        case 26: goto L_1505EBC8; break;
        case 27: goto L_1505EBC8; break;
        case 28: goto L_1505EBC8; break;
        case 29: goto L_1505EBC8; break;
        case 30: goto L_1505EB68; break;
        case 31: goto L_1505EB60; break;
        case 32: goto L_1505EB60; break;
        case 33: goto L_1505EB60; break;
        case 34: goto L_1505EBC8; break;
        case 35: goto L_1505EBC8; break;
        case 36: goto L_1505EBC8; break;
        case 37: goto L_1505EB58; break;
        case 38: goto L_1505EB58; break;
        case 39: goto L_1505EBC8; break;
        case 40: goto L_1505EBC8; break;
        case 41: goto L_1505EBC8; break;
        case 42: goto L_1505EBC8; break;
        case 43: goto L_1505EBC8; break;
        case 44: goto L_1505EBC8; break;
        case 45: goto L_1505EBC8; break;
        case 46: goto L_1505EBC8; break;
        case 47: goto L_1505EBC8; break;
        case 48: goto L_1505EBC8; break;
        case 49: goto L_1505EBC8; break;
        case 50: goto L_1505EBC8; break;
        case 51: goto L_1505EBC8; break;
        case 52: goto L_1505EB70; break;
        case 53: goto L_1505EB78; break;
        case 54: goto L_1505EBC8; break;
        case 55: goto L_1505EBC8; break;
        case 56: goto L_1505EBC8; break;
        case 57: goto L_1505EBC8; break;
        case 58: goto L_1505EB58; break;
        default: switch_error(__func__, 0x1505EB50, 0x80099540);
    }
    // 0x1505EB54: nop

L_1505EB58:
    // 0x1505EB58: b           L_1505EBCC
    // 0x1505EB5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_1505EBCC;
    // 0x1505EB5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1505EB60:
    // 0x1505EB60: b           L_1505EBCC
    // 0x1505EB64: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_1505EBCC;
    // 0x1505EB64: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_1505EB68:
    // 0x1505EB68: b           L_1505EBCC
    // 0x1505EB6C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_1505EBCC;
    // 0x1505EB6C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_1505EB70:
    // 0x1505EB70: b           L_1505EBCC
    // 0x1505EB74: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
        goto L_1505EBCC;
    // 0x1505EB74: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_1505EB78:
    // 0x1505EB78: b           L_1505EBCC
    // 0x1505EB7C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
        goto L_1505EBCC;
    // 0x1505EB7C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_1505EB80:
    // 0x1505EB80: b           L_1505EBCC
    // 0x1505EB84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
        goto L_1505EBCC;
    // 0x1505EB84: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
L_1505EB88:
    // 0x1505EB88: lw          $t8, 0x31C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X31C);
    // 0x1505EB8C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1505EB90: lui         $t3, 0xFF01
    ctx->r11 = S32(0XFF01 << 16);
    // 0x1505EB94: ori         $t3, $t3, 0x434
    ctx->r11 = ctx->r11 | 0X434;
    // 0x1505EB98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505EB9C: sb          $t7, 0x1AC($t8)
    MEM_B(0X1AC, ctx->r24) = ctx->r15;
    // 0x1505EBA0: sw          $t3, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r11;
    // 0x1505EBA4: jal         0x1506E5FC
    // 0x1505EBA8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    func_1506E5FC(rdram, ctx);
        goto after_4;
    // 0x1505EBA8: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    after_4:
    // 0x1505EBAC: lui         $t9, 0xFF07
    ctx->r25 = S32(0XFF07 << 16);
    // 0x1505EBB0: ori         $t9, $t9, 0x169
    ctx->r25 = ctx->r25 | 0X169;
    // 0x1505EBB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505EBB8: jal         0x1506E8D8
    // 0x1505EBBC: sw          $t9, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r25;
    func_1506E8D8(rdram, ctx);
        goto after_5;
    // 0x1505EBBC: sw          $t9, 0x1580($at)
    MEM_W(0X1580, ctx->r1) = ctx->r25;
    after_5:
    // 0x1505EBC0: b           L_1505EBCC
    // 0x1505EBC4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
        goto L_1505EBCC;
    // 0x1505EBC4: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
L_1505EBC8:
    // 0x1505EBC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_1505EBCC:
    // 0x1505EBCC: jal         0x1507CD64
    // 0x1505EBD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1507CD64(rdram, ctx);
        goto after_6;
    // 0x1505EBD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x1505EBD4: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x1505EBD8: b           L_1505ED20
    // 0x1505EBDC: sb          $t4, 0x105($s0)
    MEM_B(0X105, ctx->r16) = ctx->r12;
        goto L_1505ED20;
    // 0x1505EBDC: sb          $t4, 0x105($s0)
    MEM_B(0X105, ctx->r16) = ctx->r12;
L_1505EBE0:
    // 0x1505EBE0: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
L_1505EBE4:
    // 0x1505EBE4: bne         $t2, $at, L_1505EC04
    if (ctx->r10 != ctx->r1) {
        // 0x1505EBE8: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_1505EC04;
    }
    // 0x1505EBE8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x1505EBEC: lw          $t5, 0xF4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XF4);
    // 0x1505EBF0: lbu         $t7, 0x10B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X10B);
    // 0x1505EBF4: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x1505EBF8: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x1505EBFC: sw          $t6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r14;
    // 0x1505EC00: sb          $t8, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r24;
L_1505EC04:
    // 0x1505EC04: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x1505EC08: lbu         $v0, 0x105($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X105);
    // 0x1505EC0C: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x1505EC10: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1505EC14: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x1505EC18: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1505EC1C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x1505EC20: sh          $t3, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r11;
    // 0x1505EC24: addu        $v1, $t0, $t9
    ctx->r3 = ADD32(ctx->r8, ctx->r25);
    // 0x1505EC28: lbu         $t4, 0xC($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XC);
    // 0x1505EC2C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1505EC30: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x1505EC34: bgez        $t4, L_1505EC4C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x1505EC38: cvt.s.w     $f0, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
            goto L_1505EC4C;
    }
    // 0x1505EC38: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1505EC3C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1505EC40: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1505EC44: nop

    // 0x1505EC48: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
L_1505EC4C:
    // 0x1505EC4C: lhu         $t5, 0xA($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0XA);
    // 0x1505EC50: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x1505EC54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1505EC58: andi        $a1, $t5, 0xFFFF
    ctx->r5 = ctx->r13 & 0XFFFF;
    // 0x1505EC5C: sh          $t5, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r13;
    // 0x1505EC60: beq         $a1, $zero, L_1505EC70
    if (ctx->r5 == 0) {
        // 0x1505EC64: div.s       $f0, $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
            goto L_1505EC70;
    }
    // 0x1505EC64: div.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1505EC68: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x1505EC6C: sb          $t6, 0x105($s0)
    MEM_B(0X105, ctx->r16) = ctx->r14;
L_1505EC70:
    // 0x1505EC70: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x1505EC74: nop

    // 0x1505EC78: bc1f        L_1505ECA8
    if (!c1cs) {
        // 0x1505EC7C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1505ECA8;
    }
    // 0x1505EC7C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505EC80: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1505EC84: nop

    // 0x1505EC88: b           L_1505ECA8
    // 0x1505EC8C: nop

        goto L_1505ECA8;
    // 0x1505EC8C: nop

L_1505EC90:
    // 0x1505EC90: addiu       $t7, $zero, 0x4E20
    ctx->r15 = ADD32(0, 0X4E20);
    // 0x1505EC94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1505EC98: sh          $t7, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r15;
    // 0x1505EC9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1505ECA0: sh          $zero, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = 0;
    // 0x1505ECA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1505ECA8:
    // 0x1505ECA8: bnel        $a1, $zero, L_1505ECFC
    if (ctx->r5 != 0) {
        // 0x1505ECAC: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_1505ECFC;
    }
    goto skip_13;
    // 0x1505ECAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_13:
    // 0x1505ECB0: lw          $t8, 0xF4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XF4);
    // 0x1505ECB4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1505ECB8: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x1505ECBC: and         $t3, $t8, $at
    ctx->r11 = ctx->r24 & ctx->r1;
    // 0x1505ECC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1505ECC4: sw          $t3, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->r11;
    // 0x1505ECC8: sb          $zero, 0x104($s0)
    MEM_B(0X104, ctx->r16) = 0;
    // 0x1505ECCC: sb          $zero, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = 0;
    // 0x1505ECD0: bne         $t9, $at, L_1505ED20
    if (ctx->r25 != ctx->r1) {
        // 0x1505ECD4: sb          $zero, 0x10F($s0)
        MEM_B(0X10F, ctx->r16) = 0;
            goto L_1505ED20;
    }
    // 0x1505ECD4: sb          $zero, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = 0;
    // 0x1505ECD8: lw          $t4, 0x31C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X31C);
    // 0x1505ECDC: lui         $at, 0xFEFF
    ctx->r1 = S32(0XFEFF << 16);
    // 0x1505ECE0: ori         $at, $at, 0xFDFF
    ctx->r1 = ctx->r1 | 0XFDFF;
    // 0x1505ECE4: sb          $zero, 0x58($t4)
    MEM_B(0X58, ctx->r12) = 0;
    // 0x1505ECE8: lw          $t5, 0xF8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XF8);
    // 0x1505ECEC: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x1505ECF0: b           L_1505ED20
    // 0x1505ECF4: sw          $t6, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r14;
        goto L_1505ED20;
    // 0x1505ECF4: sw          $t6, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r14;
    // 0x1505ECF8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_1505ECFC:
    // 0x1505ECFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x1505ED00: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1505ED04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505ED08: lhu         $a1, 0x5A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X5A);
    // 0x1505ED0C: lw          $a3, 0x60($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X60);
    // 0x1505ED10: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1505ED14: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1505ED18: jal         0x1505E650
    // 0x1505ED1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_1505E650(rdram, ctx);
        goto after_7;
    // 0x1505ED1C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
L_1505ED20:
    // 0x1505ED20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_1505ED24:
    // 0x1505ED24: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1505ED28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x1505ED2C: jr          $ra
    // 0x1505ED30: nop

    return;
    return;
    // 0x1505ED30: nop

;}
RECOMP_FUNC void func_15196B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15196B4C: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x15196B50: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x15196B54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15196B58: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15196B5C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x15196B60: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x15196B64: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x15196B68: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x15196B6C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x15196B70: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x15196B74: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x15196B78: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x15196B7C: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x15196B80: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x15196B84: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x15196B88: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x15196B8C: lw          $s2, 0x98($s0)
    ctx->r18 = MEM_W(ctx->r16, 0X98);
    // 0x15196B90: lw          $s3, 0x94($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X94);
    // 0x15196B94: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x15196B98: lw          $v0, 0x1D4($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X1D4);
    // 0x15196B9C: bnel        $v0, $zero, L_15196BB0
    if (ctx->r2 != 0) {
        // 0x15196BA0: lb          $v1, 0x7($s2)
        ctx->r3 = MEM_B(ctx->r18, 0X7);
            goto L_15196BB0;
    }
    goto skip_0;
    // 0x15196BA0: lb          $v1, 0x7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X7);
    skip_0:
    // 0x15196BA4: b           L_15197108
    // 0x15196BA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15197108;
    // 0x15196BA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15196BAC: lb          $v1, 0x7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X7);
L_15196BB0:
    // 0x15196BB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15196BB4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15196BB8: beq         $v1, $at, L_15196BE0
    if (ctx->r3 == ctx->r1) {
        // 0x15196BBC: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_15196BE0;
    }
    // 0x15196BBC: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15196BC0: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15196BC4: lw          $t9, -0x790($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X790);
    // 0x15196BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15196BCC: jalr        $t9
    // 0x15196BD0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15196BD0: nop

    after_0:
    // 0x15196BD4: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x15196BD8: swc1        $f0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->f0.u32l;
    // 0x15196BDC: lw          $v0, 0x1D4($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X1D4);
L_15196BE0:
    // 0x15196BE0: lbu         $t0, 0x5($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X5);
    // 0x15196BE4: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    // 0x15196BE8: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x15196BEC: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x15196BF0: addu        $s1, $v0, $t1
    ctx->r17 = ADD32(ctx->r2, ctx->r9);
    // 0x15196BF4: jal         0x15143134
    // 0x15196BF8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_15143134(rdram, ctx);
        goto after_1;
    // 0x15196BF8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x15196BFC: addiu       $s4, $sp, 0x10C
    ctx->r20 = ADD32(ctx->r29, 0X10C);
    // 0x15196C00: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x15196C04: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x15196C08: jal         0x15143134
    // 0x15196C0C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_15143134(rdram, ctx);
        goto after_2;
    // 0x15196C0C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x15196C10: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15196C14: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15196C18: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15196C1C: lwc1        $f4, 0x48($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X48);
    // 0x15196C20: lwc1        $f10, 0x4C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x15196C24: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15196C28: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15196C2C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x15196C30: addiu       $t2, $s2, 0x20
    ctx->r10 = ADD32(ctx->r18, 0X20);
    // 0x15196C34: addiu       $t3, $sp, 0xD0
    ctx->r11 = ADD32(ctx->r29, 0XD0);
    // 0x15196C38: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15196C3C: swc1        $f4, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f4.u32l;
    // 0x15196C40: lwc1        $f2, 0x4C($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x15196C44: c.lt.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl < ctx->f2.fl;
    // 0x15196C48: nop

    // 0x15196C4C: bc1fl       L_15197108
    if (!c1cs) {
        // 0x15196C50: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15197108;
    }
    goto skip_1;
    // 0x15196C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x15196C54: lwc1        $f6, 0x3C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X3C);
    // 0x15196C58: sw          $t2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r10;
    // 0x15196C5C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x15196C60: div.s       $f0, $f24, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f24.fl, ctx->f2.fl);
    // 0x15196C64: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15196C68: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x15196C6C: lw          $t7, 0x4($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X4);
    // 0x15196C70: addiu       $t9, $s2, 0x2C
    ctx->r25 = ADD32(ctx->r18, 0X2C);
    // 0x15196C74: addiu       $t8, $sp, 0xC4
    ctx->r24 = ADD32(ctx->r29, 0XC4);
    // 0x15196C78: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x15196C7C: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x15196C80: add.s       $f20, $f6, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15196C84: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x15196C88: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x15196C8C: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
    // 0x15196C90: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x15196C94: addiu       $s5, $zero, 0xFF
    ctx->r21 = ADD32(0, 0XFF);
    // 0x15196C98: addiu       $s1, $zero, 0x24
    ctx->r17 = ADD32(0, 0X24);
    // 0x15196C9C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x15196CA0: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x15196CA4: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x15196CA8: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x15196CAC: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x15196CB0: mul.s       $f28, $f20, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f28.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x15196CB4: lwc1        $f8, 0x58($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X58);
    // 0x15196CB8: lwc1        $f12, 0x5C($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X5C);
    // 0x15196CBC: lwc1        $f10, 0x20($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X20);
    // 0x15196CC0: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x15196CC4: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15196CC8: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15196CCC: lwc1        $f22, 0x38($s2)
    ctx->f22.u32l = MEM_W(ctx->r18, 0X38);
    // 0x15196CD0: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x15196CD4: lwc1        $f10, 0x28($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X28);
    // 0x15196CD8: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15196CDC: add.s       $f26, $f12, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x15196CE0: lwc1        $f4, 0x24($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X24);
    // 0x15196CE4: mul.s       $f30, $f16, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f30.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15196CE8: sub.s       $f18, $f8, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x15196CEC: lwc1        $f4, 0x10C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x15196CF0: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x15196CF4: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x15196CF8: lwc1        $f6, 0x2C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X2C);
    // 0x15196CFC: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x15196D00: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15196D04: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x15196D08: lwc1        $f4, 0x30($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X30);
    // 0x15196D0C: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x15196D10: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x15196D14: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x15196D18: lwc1        $f4, 0x34($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X34);
    // 0x15196D1C: sub.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x15196D20: sub.s       $f8, $f12, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f26.fl;
    // 0x15196D24: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x15196D28: lwc1        $f4, 0x44($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X44);
    // 0x15196D2C: sub.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f22.fl;
    // 0x15196D30: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15196D34: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x15196D38: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x15196D3C: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x15196D40: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15196D44: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x15196D48: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15196D4C: nop

    // 0x15196D50: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15196D54: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x15196D58: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15196D5C: lwc1        $f8, 0xE0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15196D60: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x15196D64: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x15196D68: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15196D6C: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x15196D70: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x15196D74: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x15196D78: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x15196D7C: lwc1        $f8, 0x7C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X7C);
L_15196D80:
    // 0x15196D80: lwc1        $f6, 0x78($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X78);
    // 0x15196D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15196D88: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15196D8C: swc1        $f4, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->f4.u32l;
    // 0x15196D90: lwc1        $f10, 0x7C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X7C);
    // 0x15196D94: c.lt.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl < ctx->f10.fl;
    // 0x15196D98: nop

    // 0x15196D9C: bc1fl       L_15196DB0
    if (!c1cs) {
        // 0x15196DA0: lwc1        $f8, 0x88($s2)
        ctx->f8.u32l = MEM_W(ctx->r18, 0X88);
            goto L_15196DB0;
    }
    goto skip_2;
    // 0x15196DA0: lwc1        $f8, 0x88($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X88);
    skip_2:
    // 0x15196DA4: jal         0x15198D88
    // 0x15196DA8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_15198D88(rdram, ctx);
        goto after_3;
    // 0x15196DA8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x15196DAC: lwc1        $f8, 0x88($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X88);
L_15196DB0:
    // 0x15196DB0: lwc1        $f6, 0x84($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X84);
    // 0x15196DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15196DB8: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15196DBC: swc1        $f4, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->f4.u32l;
    // 0x15196DC0: lwc1        $f10, 0x88($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X88);
    // 0x15196DC4: c.lt.s      $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f24.fl < ctx->f10.fl;
    // 0x15196DC8: nop

    // 0x15196DCC: bc1fl       L_15196DE0
    if (!c1cs) {
        // 0x15196DD0: lb          $t5, 0x2E($s0)
        ctx->r13 = MEM_B(ctx->r16, 0X2E);
            goto L_15196DE0;
    }
    goto skip_3;
    // 0x15196DD0: lb          $t5, 0x2E($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2E);
    skip_3:
    // 0x15196DD4: jal         0x151990AC
    // 0x15196DD8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_151990AC(rdram, ctx);
        goto after_4;
    // 0x15196DD8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_4:
    // 0x15196DDC: lb          $t5, 0x2E($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2E);
L_15196DE0:
    // 0x15196DE0: multu       $t5, $s1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196DE4: mflo        $t3
    ctx->r11 = lo;
    // 0x15196DE8: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x15196DEC: sb          $zero, 0x21($t4)
    MEM_B(0X21, ctx->r12) = 0;
    // 0x15196DF0: lb          $t7, 0x2E($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2E);
    // 0x15196DF4: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x15196DF8: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196DFC: mflo        $t9
    ctx->r25 = lo;
    // 0x15196E00: addu        $t2, $s3, $t9
    ctx->r10 = ADD32(ctx->r19, ctx->r25);
    // 0x15196E04: swc1        $f8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f8.u32l;
    // 0x15196E08: lb          $t1, 0x2E($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X2E);
    // 0x15196E0C: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x15196E10: multu       $t1, $s1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196E14: mflo        $t8
    ctx->r24 = lo;
    // 0x15196E18: addu        $t0, $s3, $t8
    ctx->r8 = ADD32(ctx->r19, ctx->r24);
    // 0x15196E1C: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x15196E20: lb          $t6, 0x2E($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2E);
    // 0x15196E24: lwc1        $f4, 0xD8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x15196E28: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196E2C: mflo        $t5
    ctx->r13 = lo;
    // 0x15196E30: addu        $t3, $s3, $t5
    ctx->r11 = ADD32(ctx->r19, ctx->r13);
    // 0x15196E34: swc1        $f4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f4.u32l;
    // 0x15196E38: lb          $t4, 0x2E($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2E);
    // 0x15196E3C: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x15196E40: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15196E44: multu       $t4, $s1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196E48: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15196E4C: mul.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x15196E50: mflo        $t7
    ctx->r15 = lo;
    // 0x15196E54: addu        $t9, $s3, $t7
    ctx->r25 = ADD32(ctx->r19, ctx->r15);
    // 0x15196E58: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    // 0x15196E5C: lb          $t2, 0x2E($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2E);
    // 0x15196E60: lwc1        $f8, 0xD4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x15196E64: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x15196E68: multu       $t2, $s1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196E6C: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15196E70: mul.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x15196E74: mflo        $t1
    ctx->r9 = lo;
    // 0x15196E78: addu        $t8, $s3, $t1
    ctx->r24 = ADD32(ctx->r19, ctx->r9);
    // 0x15196E7C: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
    // 0x15196E80: lb          $t0, 0x2E($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X2E);
    // 0x15196E84: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x15196E88: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x15196E8C: multu       $t0, $s1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196E90: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x15196E94: mul.s       $f4, $f6, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x15196E98: mflo        $t6
    ctx->r14 = lo;
    // 0x15196E9C: addu        $t5, $s3, $t6
    ctx->r13 = ADD32(ctx->r19, ctx->r14);
    // 0x15196EA0: swc1        $f4, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->f4.u32l;
    // 0x15196EA4: lb          $t3, 0x2E($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2E);
    // 0x15196EA8: multu       $t3, $s1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196EAC: mflo        $t4
    ctx->r12 = lo;
    // 0x15196EB0: addu        $t7, $s3, $t4
    ctx->r15 = ADD32(ctx->r19, ctx->r12);
    // 0x15196EB4: swc1        $f26, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f26.u32l;
    // 0x15196EB8: lb          $t2, 0x2E($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2E);
    // 0x15196EBC: lbu         $t9, 0x53($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X53);
    // 0x15196EC0: multu       $t2, $s1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196EC4: mflo        $t1
    ctx->r9 = lo;
    // 0x15196EC8: addu        $t8, $s3, $t1
    ctx->r24 = ADD32(ctx->r19, ctx->r9);
    // 0x15196ECC: sh          $t9, 0x1C($t8)
    MEM_H(0X1C, ctx->r24) = ctx->r25;
    // 0x15196ED0: lb          $t6, 0x2E($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2E);
    // 0x15196ED4: lbu         $t0, 0x54($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X54);
    // 0x15196ED8: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196EDC: mflo        $t5
    ctx->r13 = lo;
    // 0x15196EE0: addu        $t3, $s3, $t5
    ctx->r11 = ADD32(ctx->r19, ctx->r13);
    // 0x15196EE4: sb          $t0, 0x1E($t3)
    MEM_B(0X1E, ctx->r11) = ctx->r8;
    // 0x15196EE8: lb          $t4, 0x2E($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X2E);
    // 0x15196EEC: multu       $t4, $s1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196EF0: mflo        $t7
    ctx->r15 = lo;
    // 0x15196EF4: addu        $t2, $s3, $t7
    ctx->r10 = ADD32(ctx->r19, ctx->r15);
    // 0x15196EF8: sb          $s5, 0x1F($t2)
    MEM_B(0X1F, ctx->r10) = ctx->r21;
    // 0x15196EFC: lb          $t9, 0x2E($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2E);
    // 0x15196F00: lbu         $t1, 0x50($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X50);
    // 0x15196F04: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196F08: mflo        $t8
    ctx->r24 = lo;
    // 0x15196F0C: addu        $t6, $s3, $t8
    ctx->r14 = ADD32(ctx->r19, ctx->r24);
    // 0x15196F10: jal         0x150ADA20
    // 0x15196F14: sb          $t1, 0x20($t6)
    MEM_B(0X20, ctx->r14) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15196F14: sb          $t1, 0x20($t6)
    MEM_B(0X20, ctx->r14) = ctx->r9;
    after_5:
    // 0x15196F18: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x15196F1C: lbu         $t5, 0x50($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X50);
    // 0x15196F20: mfhi        $t0
    ctx->r8 = hi;
    // 0x15196F24: lwc1        $f8, 0x40($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X40);
    // 0x15196F28: addu        $t3, $t5, $t0
    ctx->r11 = ADD32(ctx->r13, ctx->r8);
    // 0x15196F2C: addiu       $t4, $t3, 0x3
    ctx->r12 = ADD32(ctx->r11, 0X3);
    // 0x15196F30: sb          $t4, 0x50($s2)
    MEM_B(0X50, ctx->r18) = ctx->r12;
    // 0x15196F34: lb          $t7, 0x2E($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X2E);
    // 0x15196F38: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x15196F3C: bne         $s6, $zero, L_15196F48
    if (ctx->r22 != 0) {
        // 0x15196F40: nop
    
            goto L_15196F48;
    }
    // 0x15196F40: nop

    // 0x15196F44: break       7
    do_break(353988420);
L_15196F48:
    // 0x15196F48: multu       $t7, $s1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196F4C: mflo        $t2
    ctx->r10 = lo;
    // 0x15196F50: addu        $v1, $s3, $t2
    ctx->r3 = ADD32(ctx->r19, ctx->r10);
    // 0x15196F54: lwc1        $f10, 0x10($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15196F58: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15196F5C: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x15196F60: lb          $t9, 0x2E($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X2E);
    // 0x15196F64: multu       $t9, $s1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196F68: mflo        $t8
    ctx->r24 = lo;
    // 0x15196F6C: addu        $v1, $s3, $t8
    ctx->r3 = ADD32(ctx->r19, ctx->r24);
    // 0x15196F70: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15196F74: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15196F78: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15196F7C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15196F80: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x15196F84: lb          $t1, 0x2E($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X2E);
    // 0x15196F88: multu       $t1, $s1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196F8C: mflo        $t6
    ctx->r14 = lo;
    // 0x15196F90: addu        $v1, $s3, $t6
    ctx->r3 = ADD32(ctx->r19, ctx->r14);
    // 0x15196F94: lwc1        $f8, 0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15196F98: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15196F9C: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x15196FA0: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15196FA4: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x15196FA8: lb          $t5, 0x2E($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2E);
    // 0x15196FAC: multu       $t5, $s1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15196FB0: mflo        $t0
    ctx->r8 = lo;
    // 0x15196FB4: addu        $v1, $s3, $t0
    ctx->r3 = ADD32(ctx->r19, ctx->r8);
    // 0x15196FB8: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x15196FBC: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15196FC0: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x15196FC4: sub.s       $f20, $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f28.fl;
    // 0x15196FC8: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15196FCC: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x15196FD0: lb          $t3, 0x2E($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X2E);
    // 0x15196FD4: lbu         $t7, 0x25($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X25);
    // 0x15196FD8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x15196FDC: sb          $t4, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r12;
    // 0x15196FE0: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
    // 0x15196FE4: bnel        $t7, $v0, L_15196FF8
    if (ctx->r15 != ctx->r2) {
        // 0x15196FE8: lb          $t2, 0x2C($s0)
        ctx->r10 = MEM_B(ctx->r16, 0X2C);
            goto L_15196FF8;
    }
    goto skip_4;
    // 0x15196FE8: lb          $t2, 0x2C($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2C);
    skip_4:
    // 0x15196FEC: sb          $zero, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = 0;
    // 0x15196FF0: lb          $v0, 0x2E($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2E);
    // 0x15196FF4: lb          $t2, 0x2C($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X2C);
L_15196FF8:
    // 0x15196FF8: lb          $v1, 0x2D($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2D);
    // 0x15196FFC: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x15197000: bne         $v1, $v0, L_15197030
    if (ctx->r3 != ctx->r2) {
        // 0x15197004: sb          $t9, 0x2C($s0)
        MEM_B(0X2C, ctx->r16) = ctx->r25;
            goto L_15197030;
    }
    // 0x15197004: sb          $t9, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r25;
    // 0x15197008: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x1519700C: sb          $t8, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r24;
    // 0x15197010: lb          $t6, 0x2D($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X2D);
    // 0x15197014: lbu         $t1, 0x25($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X25);
    // 0x15197018: bnel        $t1, $t6, L_15197028
    if (ctx->r9 != ctx->r14) {
        // 0x1519701C: lb          $t5, 0x2C($s0)
        ctx->r13 = MEM_B(ctx->r16, 0X2C);
            goto L_15197028;
    }
    goto skip_5;
    // 0x1519701C: lb          $t5, 0x2C($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2C);
    skip_5:
    // 0x15197020: sb          $zero, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = 0;
    // 0x15197024: lb          $t5, 0x2C($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2C);
L_15197028:
    // 0x15197028: addiu       $t0, $t5, -0x1
    ctx->r8 = ADD32(ctx->r13, -0X1);
    // 0x1519702C: sb          $t0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r8;
L_15197030:
    // 0x15197030: lwc1        $f10, 0xD0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x15197034: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x15197038: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1519703C: add.s       $f8, $f10, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x15197040: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15197044: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    // 0x15197048: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1519704C: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15197050: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    // 0x15197054: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15197058: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1519705C: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15197060: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15197064: swc1        $f4, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f4.u32l;
    // 0x15197068: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1519706C: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15197070: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x15197074: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x15197078: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519707C: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15197080: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15197084: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x15197088: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1519708C: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15197090: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x15197094: lwc1        $f4, 0x4C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x15197098: add.s       $f22, $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f8.fl;
    // 0x1519709C: sub.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f24.fl;
    // 0x151970A0: add.s       $f26, $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f6.fl;
    // 0x151970A4: swc1        $f10, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f10.u32l;
    // 0x151970A8: lwc1        $f8, 0x4C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x151970AC: c.lt.s      $f24, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f24.fl < ctx->f8.fl;
    // 0x151970B0: nop

    // 0x151970B4: bc1tl       L_15196D80
    if (c1cs) {
        // 0x151970B8: lwc1        $f8, 0x7C($s2)
        ctx->f8.u32l = MEM_W(ctx->r18, 0X7C);
            goto L_15196D80;
    }
    goto skip_6;
    // 0x151970B8: lwc1        $f8, 0x7C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X7C);
    skip_6:
    // 0x151970BC: addiu       $t4, $sp, 0xD0
    ctx->r12 = ADD32(ctx->r29, 0XD0);
    // 0x151970C0: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151970C4: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x151970C8: addiu       $t8, $sp, 0xC4
    ctx->r24 = ADD32(ctx->r29, 0XC4);
    // 0x151970CC: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151970D0: lw          $t2, 0x4($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X4);
    // 0x151970D4: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x151970D8: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151970DC: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151970E0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151970E4: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x151970E8: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151970EC: lw          $t6, 0x4($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X4);
    // 0x151970F0: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x151970F4: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x151970F8: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151970FC: swc1        $f22, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->f22.u32l;
    // 0x15197100: swc1        $f20, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->f20.u32l;
    // 0x15197104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15197108:
    // 0x15197108: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x1519710C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x15197110: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x15197114: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x15197118: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x1519711C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x15197120: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x15197124: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x15197128: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x1519712C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x15197130: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x15197134: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x15197138: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x1519713C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x15197140: jr          $ra
    // 0x15197144: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    return;
    // 0x15197144: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_100085B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100085B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100085BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x100085C0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x100085C4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x100085C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100085CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x100085D0: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x100085D4: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x100085D8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x100085DC: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x100085E0: jal         0x10017B04
    // 0x100085E4: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    func_10017B04(rdram, ctx);
        goto after_0;
    // 0x100085E4: lw          $a0, -0x3700($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3700);
    after_0:
    // 0x100085E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x100085EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x100085F0: jr          $ra
    // 0x100085F4: nop

    return;
    return;
    // 0x100085F4: nop

;}
RECOMP_FUNC void func_150233BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150233BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150233C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150233C4: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150233C8: addiu       $a0, $a0, 0x3CA0
    ctx->r4 = ADD32(ctx->r4, 0X3CA0);
    // 0x150233CC: jal         0x100226F0
    // 0x150233D0: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x150233D0: addiu       $a1, $zero, 0xA8
    ctx->r5 = ADD32(0, 0XA8);
    after_0:
    // 0x150233D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150233D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150233DC: jr          $ra
    // 0x150233E0: nop

    return;
    return;
    // 0x150233E0: nop

;}
RECOMP_FUNC void func_150D8590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D8590: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150D8594: addiu       $t6, $zero, 0x42
    ctx->r14 = ADD32(0, 0X42);
    // 0x150D8598: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x150D859C: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x150D85A0: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x150D85A4: jr          $ra
    // 0x150D85A8: nop

    return;
    return;
    // 0x150D85A8: nop

;}
RECOMP_FUNC void func_15073F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15073F54: jr          $ra
    // 0x15073F58: nop

    return;
    return;
    // 0x15073F58: nop

;}

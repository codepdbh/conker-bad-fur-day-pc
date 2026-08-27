#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_151436B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151436B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151436B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151436BC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x151436C0: swc1        $f14, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f14.u32l;
    // 0x151436C4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x151436C8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x151436CC: jal         0x15047C00
    // 0x151436D0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x151436D0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x151436D4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x151436D8: jal         0x15047D60
    // 0x151436DC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x151436DC: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x151436E0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151436E4: jal         0x15047C00
    // 0x151436E8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x151436E8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x151436EC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151436F0: jal         0x15047D60
    // 0x151436F4: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x151436F4: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x151436F8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151436FC: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x15143700: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15143704: neg.s       $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = -ctx->f12.fl;
    // 0x15143708: mul.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x1514370C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x15143710: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x15143714: nop

    // 0x15143718: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1514371C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x15143720: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x15143724: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15143728: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x1514372C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x15143730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15143734: jr          $ra
    // 0x15143738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x15143738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_150C7930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7930: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C7934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C7938: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150C793C: lw          $v0, -0x410C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X410C);
    // 0x150C7940: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x150C7944: lw          $t6, 0x21C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X21C);
    // 0x150C7948: addiu       $v0, $v0, 0x1E0
    ctx->r2 = ADD32(ctx->r2, 0X1E0);
    // 0x150C794C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x150C7950: jal         0x151150BC
    // 0x150C7954: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    func_151150BC(rdram, ctx);
        goto after_0;
    // 0x150C7954: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    after_0:
    // 0x150C7958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C795C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C7960: jr          $ra
    // 0x150C7964: nop

    return;
    return;
    // 0x150C7964: nop

;}
RECOMP_FUNC void func_15043A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043A20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15043A24: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x15043A28: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x15043A2C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15043A30: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15043A34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15043A38: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x15043A3C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x15043A40: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15043A44: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x15043A48: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x15043A4C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15043A50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15043A54: beq         $s2, $zero, L_15043AA0
    if (ctx->r18 == 0) {
        // 0x15043A58: addu        $t6, $s1, $s2
        ctx->r14 = ADD32(ctx->r17, ctx->r18);
            goto L_15043AA0;
    }
    // 0x15043A58: addu        $t6, $s1, $s2
    ctx->r14 = ADD32(ctx->r17, ctx->r18);
L_15043A5C:
    // 0x15043A5C: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15043A60: beq         $at, $zero, L_15043A70
    if (ctx->r1 == 0) {
        // 0x15043A64: addu        $a0, $s5, $s1
        ctx->r4 = ADD32(ctx->r21, ctx->r17);
            goto L_15043A70;
    }
    // 0x15043A64: addu        $a0, $s5, $s1
    ctx->r4 = ADD32(ctx->r21, ctx->r17);
    // 0x15043A68: b           L_15043A74
    // 0x15043A6C: subu        $s0, $s3, $s1
    ctx->r16 = SUB32(ctx->r19, ctx->r17);
        goto L_15043A74;
    // 0x15043A6C: subu        $s0, $s3, $s1
    ctx->r16 = SUB32(ctx->r19, ctx->r17);
L_15043A70:
    // 0x15043A70: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_15043A74:
    // 0x15043A74: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x15043A78: jal         0x10022EC0
    // 0x15043A7C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x15043A7C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x15043A80: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x15043A84: slt         $at, $s1, $s3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x15043A88: addu        $s4, $s4, $s0
    ctx->r20 = ADD32(ctx->r20, ctx->r16);
    // 0x15043A8C: bne         $at, $zero, L_15043A98
    if (ctx->r1 != 0) {
        // 0x15043A90: subu        $s2, $s2, $s0
        ctx->r18 = SUB32(ctx->r18, ctx->r16);
            goto L_15043A98;
    }
    // 0x15043A90: subu        $s2, $s2, $s0
    ctx->r18 = SUB32(ctx->r18, ctx->r16);
    // 0x15043A94: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_15043A98:
    // 0x15043A98: bnel        $s2, $zero, L_15043A5C
    if (ctx->r18 != 0) {
        // 0x15043A9C: addu        $t6, $s1, $s2
        ctx->r14 = ADD32(ctx->r17, ctx->r18);
            goto L_15043A5C;
    }
    goto skip_0;
    // 0x15043A9C: addu        $t6, $s1, $s2
    ctx->r14 = ADD32(ctx->r17, ctx->r18);
    skip_0:
L_15043AA0:
    // 0x15043AA0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15043AA4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15043AA8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15043AAC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15043AB0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15043AB4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15043AB8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x15043ABC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x15043AC0: jr          $ra
    // 0x15043AC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15043AC4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15145DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145DB4: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x15145DB8: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x15145DBC: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x15145DC0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15145DC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15145DC8: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x15145DCC: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x15145DD0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15145DD4: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x15145DD8: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x15145DDC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x15145DE0: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x15145DE4: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x15145DE8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x15145DEC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x15145DF0: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x15145DF4: jal         0x150A8050
    // 0x15145DF8: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15145DF8: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    after_0:
    // 0x15145DFC: lh          $t6, 0x10($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X10);
    // 0x15145E00: lw          $s1, 0xA0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA0);
    // 0x15145E04: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x15145E08: addiu       $s3, $s1, 0x4
    ctx->r19 = ADD32(ctx->r17, 0X4);
    // 0x15145E0C: addiu       $s4, $s1, 0x8
    ctx->r20 = ADD32(ctx->r17, 0X8);
    // 0x15145E10: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15145E14: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x15145E18: lh          $t7, 0x12($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X12);
    // 0x15145E1C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x15145E20: nop

    // 0x15145E24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15145E28: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x15145E2C: lh          $t8, 0x14($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X14);
    // 0x15145E30: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x15145E34: nop

    // 0x15145E38: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15145E3C: blez        $s2, L_15145E80
    if (SIGNED(ctx->r18) <= 0) {
        // 0x15145E40: swc1        $f18, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
            goto L_15145E80;
    }
    // 0x15145E40: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x15145E44: lw          $s0, 0x9C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X9C);
L_15145E48:
    // 0x15145E48: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x15145E4C: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x15145E50: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x15145E54: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x15145E58: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x15145E5C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x15145E60: jal         0x150A7960
    // 0x15145E64: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x15145E64: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
    // 0x15145E68: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x15145E6C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x15145E70: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x15145E74: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x15145E78: bgtz        $s2, L_15145E48
    if (SIGNED(ctx->r18) > 0) {
        // 0x15145E7C: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_15145E48;
    }
    // 0x15145E7C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
L_15145E80:
    // 0x15145E80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15145E84: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x15145E88: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x15145E8C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x15145E90: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x15145E94: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x15145E98: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x15145E9C: jr          $ra
    // 0x15145EA0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x15145EA0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_15033AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033AD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15033ADC: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x15033AE0: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x15033AE4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15033AE8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15033AEC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15033AF0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15033AF4: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x15033AF8: lui         $a3, 0x4461
    ctx->r7 = S32(0X4461 << 16);
    // 0x15033AFC: beql        $t6, $zero, L_15033B18
    if (ctx->r14 == 0) {
        // 0x15033B00: lw          $t7, 0x38($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X38);
            goto L_15033B18;
    }
    goto skip_0;
    // 0x15033B00: lw          $t7, 0x38($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X38);
    skip_0:
    // 0x15033B04: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15033B08: lwc1        $f14, 0x18($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15033B0C: jal         0x1508B20C
    // 0x15033B10: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    func_1508B20C(rdram, ctx);
        goto after_0;
    // 0x15033B10: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    after_0:
    // 0x15033B14: lw          $t7, 0x38($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X38);
L_15033B18:
    // 0x15033B18: bnel        $t7, $zero, L_15033BC8
    if (ctx->r15 != 0) {
        // 0x15033B1C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15033BC8;
    }
    goto skip_1;
    // 0x15033B1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x15033B20: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x15033B24: addiu       $a0, $zero, 0x513
    ctx->r4 = ADD32(0, 0X513);
    // 0x15033B28: addiu       $t9, $zero, 0x7D00
    ctx->r25 = ADD32(0, 0X7D00);
    // 0x15033B2C: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x15033B30: beq         $at, $zero, L_15033B4C
    if (ctx->r1 == 0) {
        // 0x15033B34: addiu       $t0, $zero, 0x3E8
        ctx->r8 = ADD32(0, 0X3E8);
            goto L_15033B4C;
    }
    // 0x15033B34: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x15033B38: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15033B3C: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x15033B40: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x15033B44: b           L_15033BC4
    // 0x15033B48: sw          $t9, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r25;
        goto L_15033BC4;
    // 0x15033B48: sw          $t9, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r25;
L_15033B4C:
    // 0x15033B4C: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15033B50: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15033B54: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15033B58: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15033B5C: lui         $t2, 0x1503
    ctx->r10 = S32(0X1503 << 16);
    // 0x15033B60: addiu       $t2, $t2, 0x3BDC
    ctx->r10 = ADD32(ctx->r10, 0X3BDC);
    // 0x15033B64: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15033B68: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x15033B6C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15033B70: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15033B74: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x15033B78: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x15033B7C: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x15033B80: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x15033B84: addiu       $t1, $zero, 0x1F4
    ctx->r9 = ADD32(0, 0X1F4);
    // 0x15033B88: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x15033B8C: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x15033B90: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15033B94: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    // 0x15033B98: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15033B9C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15033BA0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15033BA4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x15033BA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15033BAC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15033BB0: jal         0x1000FA64
    // 0x15033BB4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_1000FA64(rdram, ctx);
        goto after_1;
    // 0x15033BB4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x15033BB8: addiu       $t3, $zero, 0x513
    ctx->r11 = ADD32(0, 0X513);
    // 0x15033BBC: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x15033BC0: sw          $t3, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r11;
L_15033BC4:
    // 0x15033BC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15033BC8:
    // 0x15033BC8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x15033BCC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x15033BD0: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x15033BD4: jr          $ra
    // 0x15033BD8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x15033BD8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150FDCD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FDCD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150FDCDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FDCE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150FDCE4: jal         0x150FDC2C
    // 0x150FDCE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150FDC2C(rdram, ctx);
        goto after_0;
    // 0x150FDCE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150FDCEC: jal         0x1513CAA0
    // 0x150FDCF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1513CAA0(rdram, ctx);
        goto after_1;
    // 0x150FDCF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150FDCF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150FDCF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150FDCFC: jr          $ra
    // 0x150FDD00: nop

    return;
    return;
    // 0x150FDD00: nop

;}
RECOMP_FUNC void func_15169900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169900: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15169904: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15169908: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1516990C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15169910: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x15169914: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15169918: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1516991C: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x15169920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15169924: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x15169928: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1516992C: jal         0x15167A68
    // 0x15169930: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x15169930: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15169934: beq         $v0, $zero, L_15169954
    if (ctx->r2 == 0) {
        // 0x15169938: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15169954;
    }
    // 0x15169938: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1516993C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15169940: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x15169944: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x15169948: jal         0x10023A10
    // 0x1516994C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x1516994C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x15169950: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_15169954:
    // 0x15169954: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x15169958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1516995C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15169960: jr          $ra
    // 0x15169964: nop

    return;
    return;
    // 0x15169964: nop

;}
RECOMP_FUNC void func_1502E4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502E4C4: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x1502E4C8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x1502E4CC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x1502E4D0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1502E4D4: addiu       $s3, $zero, 0x32C
    ctx->r19 = ADD32(0, 0X32C);
    // 0x1502E4D8: addiu       $s2, $s2, -0x3D30
    ctx->r18 = ADD32(ctx->r18, -0X3D30);
    // 0x1502E4DC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1502E4E0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1502E4E4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1502E4E8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1502E4EC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1502E4F0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1502E4F4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1502E4F8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1502E4FC: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x1502E500: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x1502E504: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x1502E508: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x1502E50C: multu       $t6, $s3
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502E510: mflo        $t7
    ctx->r15 = lo;
    // 0x1502E514: addu        $s1, $s2, $t7
    ctx->r17 = ADD32(ctx->r18, ctx->r15);
    // 0x1502E518: lbu         $t8, 0x5($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X5);
    // 0x1502E51C: lbu         $s0, 0x4($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4);
    // 0x1502E520: bnel        $t8, $at, L_1502E53C
    if (ctx->r24 != ctx->r1) {
        // 0x1502E524: lbu         $v0, 0x74($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X74);
            goto L_1502E53C;
    }
    goto skip_0;
    // 0x1502E524: lbu         $v0, 0x74($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X74);
    skip_0:
    // 0x1502E528: lbu         $t9, 0x74($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X74);
    // 0x1502E52C: andi        $t0, $t9, 0xFFF0
    ctx->r8 = ctx->r25 & 0XFFF0;
    // 0x1502E530: b           L_1502E9CC
    // 0x1502E534: sb          $t0, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r8;
        goto L_1502E9CC;
    // 0x1502E534: sb          $t0, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r8;
    // 0x1502E538: lbu         $v0, 0x74($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X74);
L_1502E53C:
    // 0x1502E53C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1502E540: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1502E544: ori         $t1, $v0, 0xF
    ctx->r9 = ctx->r2 | 0XF;
    // 0x1502E548: sb          $t1, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r9;
    // 0x1502E54C: lbu         $t2, 0x3638($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3638);
    // 0x1502E550: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x1502E554: beql        $t2, $zero, L_1502E57C
    if (ctx->r10 == 0) {
        // 0x1502E558: lbu         $v0, 0x127($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X127);
            goto L_1502E57C;
    }
    goto skip_1;
    // 0x1502E558: lbu         $v0, 0x127($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X127);
    skip_1:
    // 0x1502E55C: lbu         $t3, 0x3656($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X3656);
    // 0x1502E560: bnel        $t3, $zero, L_1502E57C
    if (ctx->r11 != 0) {
        // 0x1502E564: lbu         $v0, 0x127($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X127);
            goto L_1502E57C;
    }
    goto skip_2;
    // 0x1502E564: lbu         $v0, 0x127($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X127);
    skip_2:
    // 0x1502E568: jal         0x150229E4
    // 0x1502E56C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_150229E4(rdram, ctx);
        goto after_0;
    // 0x1502E56C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x1502E570: beql        $v0, $zero, L_1502E9D0
    if (ctx->r2 == 0) {
        // 0x1502E574: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502E9D0;
    }
    goto skip_3;
    // 0x1502E574: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_3:
    // 0x1502E578: lbu         $v0, 0x127($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X127);
L_1502E57C:
    // 0x1502E57C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1502E580: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1502E584: beql        $v0, $at, L_1502E5A8
    if (ctx->r2 == ctx->r1) {
        // 0x1502E588: lbu         $t8, 0x101($s1)
        ctx->r24 = MEM_BU(ctx->r17, 0X101);
            goto L_1502E5A8;
    }
    goto skip_4;
    // 0x1502E588: lbu         $t8, 0x101($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X101);
    skip_4:
    // 0x1502E58C: lhu         $t4, 0x2340($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X2340);
    // 0x1502E590: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1502E594: sllv        $t6, $t5, $v0
    ctx->r14 = S32(ctx->r13 << (ctx->r2 & 31));
    // 0x1502E598: and         $t7, $t4, $t6
    ctx->r15 = ctx->r12 & ctx->r14;
    // 0x1502E59C: beql        $t7, $zero, L_1502E9D0
    if (ctx->r15 == 0) {
        // 0x1502E5A0: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502E9D0;
    }
    goto skip_5;
    // 0x1502E5A0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_5:
    // 0x1502E5A4: lbu         $t8, 0x101($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X101);
L_1502E5A8:
    // 0x1502E5A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1502E5AC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x1502E5B0: beql        $a2, $t9, L_1502E9D0
    if (ctx->r6 == ctx->r25) {
        // 0x1502E5B4: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502E9D0;
    }
    goto skip_6;
    // 0x1502E5B4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_6:
    // 0x1502E5B8: lbu         $t0, 0x7($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X7);
    // 0x1502E5BC: beql        $t0, $zero, L_1502E9D0
    if (ctx->r8 == 0) {
        // 0x1502E5C0: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502E9D0;
    }
    goto skip_7;
    // 0x1502E5C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_7:
    // 0x1502E5C4: lbu         $v0, 0x65($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X65);
    // 0x1502E5C8: beq         $v0, $zero, L_1502E5E8
    if (ctx->r2 == 0) {
        // 0x1502E5CC: nop
    
            goto L_1502E5E8;
    }
    // 0x1502E5CC: nop

    // 0x1502E5D0: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1502E5D4: mflo        $t1
    ctx->r9 = lo;
    // 0x1502E5D8: addu        $t2, $s2, $t1
    ctx->r10 = ADD32(ctx->r18, ctx->r9);
    // 0x1502E5DC: lbu         $t3, -0x2B8($t2)
    ctx->r11 = MEM_BU(ctx->r10, -0X2B8);
    // 0x1502E5E0: b           L_1502E9CC
    // 0x1502E5E4: sb          $t3, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r11;
        goto L_1502E9CC;
    // 0x1502E5E4: sb          $t3, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r11;
L_1502E5E8:
    // 0x1502E5E8: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x1502E5EC: addiu       $t4, $t4, 0x1C90
    ctx->r12 = ADD32(ctx->r12, 0X1C90);
    // 0x1502E5F0: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x1502E5F4: addu        $v1, $t5, $t4
    ctx->r3 = ADD32(ctx->r13, ctx->r12);
    // 0x1502E5F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x1502E5FC: lhu         $t6, 0xE($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0XE);
    // 0x1502E600: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1502E604: bgez        $t6, L_1502E61C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1502E608: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1502E61C;
    }
    // 0x1502E608: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1502E60C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1502E610: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1502E614: nop

    // 0x1502E618: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_1502E61C:
    // 0x1502E61C: lwc1        $f12, 0x14C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x1502E620: lwc1        $f2, 0x150($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X150);
    // 0x1502E624: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1502E628: mul.s       $f14, $f0, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1502E62C: nop

    // 0x1502E630: mul.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1502E634: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x1502E638: lh          $t8, 0xCC($s1)
    ctx->r24 = MEM_H(ctx->r17, 0XCC);
    // 0x1502E63C: lh          $t7, 0x10($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X10);
    // 0x1502E640: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1502E644: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x1502E648: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x1502E64C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1502E650: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x1502E654: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x1502E658: swc1        $f14, 0x270($s1)
    MEM_W(0X270, ctx->r17) = ctx->f14.u32l;
    // 0x1502E65C: lbu         $t1, 0x35EA($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X35EA);
    // 0x1502E660: lhu         $t0, 0x10($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X10);
    // 0x1502E664: bne         $a2, $t1, L_1502E680
    if (ctx->r6 != ctx->r9) {
        // 0x1502E668: sw          $t0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r8;
            goto L_1502E680;
    }
    // 0x1502E668: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x1502E66C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1502E670: lbu         $t2, 0x3660($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X3660);
    // 0x1502E674: bnel        $t2, $zero, L_1502E684
    if (ctx->r10 != 0) {
        // 0x1502E678: lbu         $t3, 0x101($s1)
        ctx->r11 = MEM_BU(ctx->r17, 0X101);
            goto L_1502E684;
    }
    goto skip_8;
    // 0x1502E678: lbu         $t3, 0x101($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X101);
    skip_8:
    // 0x1502E67C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
L_1502E680:
    // 0x1502E680: lbu         $t3, 0x101($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X101);
L_1502E684:
    // 0x1502E684: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x1502E688: andi        $t5, $t3, 0x80
    ctx->r13 = ctx->r11 & 0X80;
    // 0x1502E68C: beql        $t5, $zero, L_1502E6A4
    if (ctx->r13 == 0) {
        // 0x1502E690: lw          $t4, 0x0($v1)
        ctx->r12 = MEM_W(ctx->r3, 0X0);
            goto L_1502E6A4;
    }
    goto skip_9;
    // 0x1502E690: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    skip_9:
    // 0x1502E694: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1502E698: b           L_1502E700
    // 0x1502E69C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
        goto L_1502E700;
    // 0x1502E69C: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x1502E6A0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
L_1502E6A4:
    // 0x1502E6A4: lhu         $v0, 0x3E($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X3E);
    // 0x1502E6A8: bne         $v0, $zero, L_1502E6C8
    if (ctx->r2 != 0) {
        // 0x1502E6AC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_1502E6C8;
    }
    // 0x1502E6AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1502E6B0: lh          $t6, 0xE4($s1)
    ctx->r14 = MEM_H(ctx->r17, 0XE4);
    // 0x1502E6B4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x1502E6B8: nop

    // 0x1502E6BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1502E6C0: b           L_1502E700
    // 0x1502E6C4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
        goto L_1502E700;
    // 0x1502E6C4: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
L_1502E6C8:
    // 0x1502E6C8: bnel        $a2, $a0, L_1502E6E0
    if (ctx->r6 != ctx->r4) {
        // 0x1502E6CC: mtc1        $v0, $f16
        ctx->f16.u32l = ctx->r2;
            goto L_1502E6E0;
    }
    goto skip_10;
    // 0x1502E6CC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    skip_10:
    // 0x1502E6D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1502E6D4: b           L_1502E700
    // 0x1502E6D8: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
        goto L_1502E700;
    // 0x1502E6D8: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x1502E6DC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_1502E6E0:
    // 0x1502E6E0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1502E6E4: bgez        $v0, L_1502E6F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1502E6E8: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_1502E6F8;
    }
    // 0x1502E6E8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1502E6EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1502E6F0: nop

    // 0x1502E6F4: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_1502E6F8:
    // 0x1502E6F8: mul.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x1502E6FC: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
L_1502E700:
    // 0x1502E700: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x1502E704: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x1502E708: bltz        $t7, L_1502E950
    if (SIGNED(ctx->r15) < 0) {
        // 0x1502E70C: lui         $s5, 0x800E
        ctx->r21 = S32(0X800E << 16);
            goto L_1502E950;
    }
    // 0x1502E70C: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x1502E710: addiu       $s5, $s5, -0x63F0
    ctx->r21 = ADD32(ctx->r21, -0X63F0);
    // 0x1502E714: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x1502E718: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x1502E71C: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
L_1502E720:
    // 0x1502E720: lwc1        $f14, 0x7C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1502E724: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1502E728: lw          $t9, -0x4010($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4010);
    // 0x1502E72C: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1502E730: lw          $t8, -0x19D8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X19D8);
    // 0x1502E734: addu        $t0, $t9, $s6
    ctx->r8 = ADD32(ctx->r25, ctx->r22);
    // 0x1502E738: lw          $t1, 0x3D4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X3D4);
    // 0x1502E73C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x1502E740: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x1502E744: lbu         $t2, 0x197($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X197);
    // 0x1502E748: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x1502E74C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1502E750: beq         $t2, $zero, L_1502E764
    if (ctx->r10 == 0) {
        // 0x1502E754: addu        $a0, $s4, $t8
        ctx->r4 = ADD32(ctx->r20, ctx->r24);
            goto L_1502E764;
    }
    // 0x1502E754: addu        $a0, $s4, $t8
    ctx->r4 = ADD32(ctx->r20, ctx->r24);
    // 0x1502E758: lui         $s0, 0x1
    ctx->r16 = S32(0X1 << 16);
    // 0x1502E75C: b           L_1502E768
    // 0x1502E760: ori         $s0, $s0, 0x86A0
    ctx->r16 = ctx->r16 | 0X86A0;
        goto L_1502E768;
    // 0x1502E760: ori         $s0, $s0, 0x86A0
    ctx->r16 = ctx->r16 | 0X86A0;
L_1502E764:
    // 0x1502E764: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
L_1502E768:
    // 0x1502E768: lwc1        $f8, 0x18($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1502E76C: lwc1        $f4, 0x1C($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x1502E770: lw          $a2, 0x14($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X14);
    // 0x1502E774: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1502E778: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1502E77C: lwc1        $f6, 0x6F00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6F00);
    // 0x1502E780: swc1        $f14, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f14.u32l;
    // 0x1502E784: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x1502E788: swc1        $f14, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f14.u32l;
    // 0x1502E78C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1502E790: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x1502E794: jal         0x150A6360
    // 0x1502E798: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_150A6360(rdram, ctx);
        goto after_1;
    // 0x1502E798: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x1502E79C: bne         $v0, $zero, L_1502E7AC
    if (ctx->r2 != 0) {
        // 0x1502E7A0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1502E7AC;
    }
    // 0x1502E7A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1502E7A4: b           L_1502E810
    // 0x1502E7A8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_1502E810;
    // 0x1502E7A8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_1502E7AC:
    // 0x1502E7AC: bgezl       $v0, L_1502E7BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1502E7B0: slt         $at, $fp, $v1
        ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_1502E7BC;
    }
    goto skip_11;
    // 0x1502E7B0: slt         $at, $fp, $v1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r3) ? 1 : 0;
    skip_11:
    // 0x1502E7B4: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x1502E7B8: slt         $at, $fp, $v1
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r3) ? 1 : 0;
L_1502E7BC:
    // 0x1502E7BC: beql        $at, $zero, L_1502E7CC
    if (ctx->r1 == 0) {
        // 0x1502E7C0: lbu         $t3, 0x66($s1)
        ctx->r11 = MEM_BU(ctx->r17, 0X66);
            goto L_1502E7CC;
    }
    goto skip_12;
    // 0x1502E7C0: lbu         $t3, 0x66($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X66);
    skip_12:
    // 0x1502E7C4: or          $fp, $v1, $zero
    ctx->r30 = ctx->r3 | 0;
    // 0x1502E7C8: lbu         $t3, 0x66($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X66);
L_1502E7CC:
    // 0x1502E7CC: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x1502E7D0: andi        $t5, $t3, 0x80
    ctx->r13 = ctx->r11 & 0X80;
    // 0x1502E7D4: beq         $t5, $at, L_1502E810
    if (ctx->r13 == ctx->r1) {
        // 0x1502E7D8: nop
    
            goto L_1502E810;
    }
    // 0x1502E7D8: nop

    // 0x1502E7DC: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x1502E7E0: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x1502E7E4: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1502E7E8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x1502E7EC: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x1502E7F0: nop

    // 0x1502E7F4: bc1f        L_1502E810
    if (!c1cs) {
        // 0x1502E7F8: nop
    
            goto L_1502E810;
    }
    // 0x1502E7F8: nop

    // 0x1502E7FC: lbu         $t4, 0x35EA($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X35EA);
    // 0x1502E800: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502E804: beq         $t4, $at, L_1502E810
    if (ctx->r12 == ctx->r1) {
        // 0x1502E808: nop
    
            goto L_1502E810;
    }
    // 0x1502E808: nop

    // 0x1502E80C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_1502E810:
    // 0x1502E810: bnel        $s3, $zero, L_1502E8D8
    if (ctx->r19 != 0) {
        // 0x1502E814: addiu       $s0, $zero, 0xA
        ctx->r16 = ADD32(0, 0XA);
            goto L_1502E8D8;
    }
    goto skip_13;
    // 0x1502E814: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
    skip_13:
    // 0x1502E818: beq         $s0, $zero, L_1502E858
    if (ctx->r16 == 0) {
        // 0x1502E81C: lw          $t6, 0x90($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X90);
            goto L_1502E858;
    }
    // 0x1502E81C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x1502E820: beq         $s2, $t6, L_1502E858
    if (ctx->r18 == ctx->r14) {
        // 0x1502E824: slt         $at, $s0, $v1
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_1502E858;
    }
    // 0x1502E824: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1502E828: beq         $at, $zero, L_1502E838
    if (ctx->r1 == 0) {
        // 0x1502E82C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1502E838;
    }
    // 0x1502E82C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502E830: b           L_1502E83C
    // 0x1502E834: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
        goto L_1502E83C;
    // 0x1502E834: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
L_1502E838:
    // 0x1502E838: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
L_1502E83C:
    // 0x1502E83C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x1502E840: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1502E844: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1502E848: jal         0x1506160C
    // 0x1502E84C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_1506160C(rdram, ctx);
        goto after_2;
    // 0x1502E84C: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_2:
    // 0x1502E850: b           L_1502E890
    // 0x1502E854: lw          $t2, 0xF8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XF8);
        goto L_1502E890;
    // 0x1502E854: lw          $t2, 0xF8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XF8);
L_1502E858:
    // 0x1502E858: lbu         $t7, 0xF($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XF);
    // 0x1502E85C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1502E860: sllv        $t9, $t8, $s2
    ctx->r25 = S32(ctx->r24 << (ctx->r18 & 31));
    // 0x1502E864: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x1502E868: or          $t1, $t7, $t0
    ctx->r9 = ctx->r15 | ctx->r8;
    // 0x1502E86C: sb          $t1, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r9;
    // 0x1502E870: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x1502E874: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502E878: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x1502E87C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1502E880: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1502E884: jal         0x1506160C
    // 0x1502E888: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    func_1506160C(rdram, ctx);
        goto after_3;
    // 0x1502E888: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    after_3:
    // 0x1502E88C: lw          $t2, 0xF8($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XF8);
L_1502E890:
    // 0x1502E890: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x1502E894: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x1502E898: bgezl       $t3, L_1502E8DC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x1502E89C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_1502E8DC;
    }
    goto skip_14;
    // 0x1502E89C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_14:
    // 0x1502E8A0: beq         $s0, $at, L_1502E8D8
    if (ctx->r16 == ctx->r1) {
        // 0x1502E8A4: lui         $t5, 0x800C
        ctx->r13 = S32(0X800C << 16);
            goto L_1502E8D8;
    }
    // 0x1502E8A4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x1502E8A8: lbu         $t5, 0x35EA($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X35EA);
    // 0x1502E8AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502E8B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502E8B4: beq         $t5, $at, L_1502E8D8
    if (ctx->r13 == ctx->r1) {
        // 0x1502E8B8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_1502E8D8;
    }
    // 0x1502E8B8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1502E8BC: jal         0x1503F904
    // 0x1502E8C0: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    func_1503F904(rdram, ctx);
        goto after_4;
    // 0x1502E8C0: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    after_4:
    // 0x1502E8C4: beql        $v0, $zero, L_1502E8DC
    if (ctx->r2 == 0) {
        // 0x1502E8C8: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_1502E8DC;
    }
    goto skip_15;
    // 0x1502E8C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    skip_15:
    // 0x1502E8CC: b           L_1502E8D8
    // 0x1502E8D0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_1502E8D8;
    // 0x1502E8D0: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x1502E8D4: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
L_1502E8D8:
    // 0x1502E8D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_1502E8DC:
    // 0x1502E8DC: beq         $s0, $at, L_1502E8F8
    if (ctx->r16 == ctx->r1) {
        // 0x1502E8E0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1502E8F8;
    }
    // 0x1502E8E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502E8E4: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x1502E8E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1502E8EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1502E8F0: jal         0x1506160C
    // 0x1502E8F4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_1506160C(rdram, ctx);
        goto after_5;
    // 0x1502E8F4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_5:
L_1502E8F8:
    // 0x1502E8F8: bne         $s3, $zero, L_1502E910
    if (ctx->r19 != 0) {
        // 0x1502E8FC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1502E910;
    }
    // 0x1502E8FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502E900: lbu         $t4, 0x74($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X74);
    // 0x1502E904: nor         $t6, $s7, $zero
    ctx->r14 = ~(ctx->r23 | 0);
    // 0x1502E908: and         $t8, $t4, $t6
    ctx->r24 = ctx->r12 & ctx->r14;
    // 0x1502E90C: sb          $t8, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r24;
L_1502E910:
    // 0x1502E910: jal         0x1506196C
    // 0x1502E914: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_1506196C(rdram, ctx);
        goto after_6;
    // 0x1502E914: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x1502E918: bne         $v0, $zero, L_1502E92C
    if (ctx->r2 != 0) {
        // 0x1502E91C: sll         $t0, $s7, 1
        ctx->r8 = S32(ctx->r23 << 1);
            goto L_1502E92C;
    }
    // 0x1502E91C: sll         $t0, $s7, 1
    ctx->r8 = S32(ctx->r23 << 1);
    // 0x1502E920: lbu         $t9, 0x74($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X74);
    // 0x1502E924: or          $t7, $t9, $s7
    ctx->r15 = ctx->r25 | ctx->r23;
    // 0x1502E928: sb          $t7, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r15;
L_1502E92C:
    // 0x1502E92C: or          $s7, $t0, $zero
    ctx->r23 = ctx->r8 | 0;
    // 0x1502E930: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x1502E934: lw          $t1, 0x2FA0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2FA0);
    // 0x1502E938: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x1502E93C: addiu       $s4, $s4, 0x180
    ctx->r20 = ADD32(ctx->r20, 0X180);
    // 0x1502E940: slt         $at, $t1, $s2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x1502E944: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
    // 0x1502E948: beq         $at, $zero, L_1502E720
    if (ctx->r1 == 0) {
        // 0x1502E94C: addiu       $s6, $s6, 0x9A0
        ctx->r22 = ADD32(ctx->r22, 0X9A0);
            goto L_1502E720;
    }
    // 0x1502E94C: addiu       $s6, $s6, 0x9A0
    ctx->r22 = ADD32(ctx->r22, 0X9A0);
L_1502E950:
    // 0x1502E950: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1502E954: jal         0x1502E9FC
    // 0x1502E958: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_1502E9FC(rdram, ctx);
        goto after_7;
    // 0x1502E958: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_7:
    // 0x1502E95C: lw          $v0, 0x318($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X318);
    // 0x1502E960: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1502E964: beq         $v0, $zero, L_1502E9A4
    if (ctx->r2 == 0) {
        // 0x1502E968: nop
    
            goto L_1502E9A4;
    }
    // 0x1502E968: nop

    // 0x1502E96C: lw          $t2, 0x2C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X2C);
    // 0x1502E970: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x1502E974: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x1502E978: beql        $t2, $at, L_1502E994
    if (ctx->r10 == ctx->r1) {
        // 0x1502E97C: lbu         $t4, 0x74($s1)
        ctx->r12 = MEM_BU(ctx->r17, 0X74);
            goto L_1502E994;
    }
    goto skip_16;
    // 0x1502E97C: lbu         $t4, 0x74($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X74);
    skip_16:
    // 0x1502E980: lw          $t3, 0x31C($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X31C);
    // 0x1502E984: lbu         $t5, 0x197($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X197);
    // 0x1502E988: beq         $t5, $zero, L_1502E9A4
    if (ctx->r13 == 0) {
        // 0x1502E98C: nop
    
            goto L_1502E9A4;
    }
    // 0x1502E98C: nop

    // 0x1502E990: lbu         $t4, 0x74($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X74);
L_1502E994:
    // 0x1502E994: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1502E998: sllv        $t9, $t8, $t6
    ctx->r25 = S32(ctx->r24 << (ctx->r14 & 31));
    // 0x1502E99C: or          $t7, $t4, $t9
    ctx->r15 = ctx->r12 | ctx->r25;
    // 0x1502E9A0: sb          $t7, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r15;
L_1502E9A4:
    // 0x1502E9A4: lbu         $t0, 0x35EA($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X35EA);
    // 0x1502E9A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1502E9AC: beql        $t0, $at, L_1502E9D0
    if (ctx->r8 == ctx->r1) {
        // 0x1502E9B0: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502E9D0;
    }
    goto skip_17;
    // 0x1502E9B0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_17:
    // 0x1502E9B4: lbu         $v0, 0x2FC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2FC);
    // 0x1502E9B8: beql        $v0, $zero, L_1502E9D0
    if (ctx->r2 == 0) {
        // 0x1502E9BC: lw          $ra, 0x4C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X4C);
            goto L_1502E9D0;
    }
    goto skip_18;
    // 0x1502E9BC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    skip_18:
    // 0x1502E9C0: lbu         $t1, 0x74($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X74);
    // 0x1502E9C4: or          $t2, $t1, $v0
    ctx->r10 = ctx->r9 | ctx->r2;
    // 0x1502E9C8: sb          $t2, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r10;
L_1502E9CC:
    // 0x1502E9CC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
L_1502E9D0:
    // 0x1502E9D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1502E9D4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1502E9D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1502E9DC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1502E9E0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x1502E9E4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1502E9E8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x1502E9EC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1502E9F0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1502E9F4: jr          $ra
    // 0x1502E9F8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    return;
    // 0x1502E9F8: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_150BAA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BAA14: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x150BAA18: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150BAA1C: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x150BAA20: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x150BAA24: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x150BAA28: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x150BAA2C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x150BAA30: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x150BAA34: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x150BAA38: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x150BAA3C: beql        $t7, $zero, L_150BABD0
    if (ctx->r15 == 0) {
        // 0x150BAA40: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_150BABD0;
    }
    goto skip_0;
    // 0x150BAA40: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x150BAA44: jal         0x150BA930
    // 0x150BAA48: lbu         $a3, 0x7F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X7F);
    func_150BA930(rdram, ctx);
        goto after_0;
    // 0x150BAA48: lbu         $a3, 0x7F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X7F);
    after_0:
    // 0x150BAA4C: lui         $a1, 0x44A3
    ctx->r5 = S32(0X44A3 << 16);
    // 0x150BAA50: lui         $a3, 0x3A03
    ctx->r7 = S32(0X3A03 << 16);
    // 0x150BAA54: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x150BAA58: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x150BAA5C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150BAA60: sb          $v0, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r2;
    // 0x150BAA64: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150BAA68: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150BAA6C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150BAA70: ori         $a3, $a3, 0x126F
    ctx->r7 = ctx->r7 | 0X126F;
    // 0x150BAA74: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x150BAA78: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x150BAA7C: lui         $a2, 0x44FA
    ctx->r6 = S32(0X44FA << 16);
    // 0x150BAA80: jal         0x151D5404
    // 0x150BAA84: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151D5404(rdram, ctx);
        goto after_1;
    // 0x150BAA84: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x150BAA88: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x150BAA8C: jal         0x15143E94
    // 0x150BAA90: addiu       $a1, $zero, 0x4022
    ctx->r5 = ADD32(0, 0X4022);
    func_15143E94(rdram, ctx);
        goto after_2;
    // 0x150BAA90: addiu       $a1, $zero, 0x4022
    ctx->r5 = ADD32(0, 0X4022);
    after_2:
    // 0x150BAA94: lbu         $t1, 0x43($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X43);
    // 0x150BAA98: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150BAA9C: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x150BAAA0: beq         $t1, $zero, L_150BABCC
    if (ctx->r9 == 0) {
        // 0x150BAAA4: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150BABCC;
    }
    // 0x150BAAA4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BAAA8: lw          $t3, 0x2FA4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2FA4);
    // 0x150BAAAC: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x150BAAB0: lwc1        $f6, -0x19C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X19C);
    // 0x150BAAB4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150BAAB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150BAABC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150BAAC0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150BAAC4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150BAAC8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150BAACC: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x150BAAD0: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x150BAAD4: lwc1        $f4, 0x380($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X380);
    // 0x150BAAD8: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150BAADC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150BAAE0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BAAE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BAAE8: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150BAAEC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150BAAF0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150BAAF4: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x150BAAF8: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150BAAFC: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150BAB00: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x150BAB04: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BAB08: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x150BAB0C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x150BAB10: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BAB14: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x150BAB18: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150BAB1C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150BAB20: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x150BAB24: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x150BAB28: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150BAB2C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150BAB30: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150BAB34: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x150BAB38: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150BAB3C: jal         0x15165F80
    // 0x150BAB40: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    func_15165F80(rdram, ctx);
        goto after_3;
    // 0x150BAB40: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    after_3:
    // 0x150BAB44: jal         0x150ADA68
    // 0x150BAB48: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150BAB48: nop

    after_4:
    // 0x150BAB4C: jal         0x150ADA20
    // 0x150BAB50: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150BAB50: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x150BAB54: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150BAB58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BAB5C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150BAB60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BAB64: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x150BAB68: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150BAB6C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150BAB70: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x150BAB74: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x150BAB78: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BAB7C: mfhi        $t7
    ctx->r15 = hi;
    // 0x150BAB80: addiu       $t8, $t7, 0x1E
    ctx->r24 = ADD32(ctx->r15, 0X1E);
    // 0x150BAB84: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x150BAB88: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150BAB8C: addiu       $t5, $v1, 0x3C
    ctx->r13 = ADD32(ctx->r3, 0X3C);
    // 0x150BAB90: addiu       $t6, $v1, -0x3C
    ctx->r14 = ADD32(ctx->r3, -0X3C);
    // 0x150BAB94: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150BAB98: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150BAB9C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x150BABA0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x150BABA4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150BABA8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150BABAC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150BABB0: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x150BABB4: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150BABB8: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x150BABBC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150BABC0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150BABC4: jal         0x1514C678
    // 0x150BABC8: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_1514C678(rdram, ctx);
        goto after_6;
    // 0x150BABC8: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_6:
L_150BABCC:
    // 0x150BABCC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150BABD0:
    // 0x150BABD0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x150BABD4: jr          $ra
    // 0x150BABD8: nop

    return;
    return;
    // 0x150BABD8: nop

;}
RECOMP_FUNC void func_1514EDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514EDF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1514EDF4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1514EDF8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1514EDFC: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x1514EE00: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x1514EE04: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1514EE08: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1514EE0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1514EE10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1514EE14: lw          $s1, 0x2F4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X2F4);
    // 0x1514EE18: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1514EE1C: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x1514EE20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_1514EE24:
    // 0x1514EE24: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1514EE28: jal         0x1514ED3C
    // 0x1514EE2C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1514ED3C(rdram, ctx);
        goto after_0;
    // 0x1514EE2C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x1514EE30: beq         $v0, $zero, L_1514EE48
    if (ctx->r2 == 0) {
        // 0x1514EE34: andi        $s0, $v0, 0xFF
        ctx->r16 = ctx->r2 & 0XFF;
            goto L_1514EE48;
    }
    // 0x1514EE34: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x1514EE38: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x1514EE3C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x1514EE40: jal         0x1514ED8C
    // 0x1514EE44: lw          $s1, 0x14($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X14);
    func_1514ED8C(rdram, ctx);
        goto after_1;
    // 0x1514EE44: lw          $s1, 0x14($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X14);
    after_1:
L_1514EE48:
    // 0x1514EE48: bnel        $s0, $zero, L_1514EE24
    if (ctx->r16 != 0) {
        // 0x1514EE4C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1514EE24;
    }
    goto skip_0;
    // 0x1514EE4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x1514EE50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1514EE54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1514EE58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1514EE5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1514EE60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1514EE64: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1514EE68: jr          $ra
    // 0x1514EE6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x1514EE6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_15077BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15077BE4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15077BE8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15077BEC: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15077BF0: lw          $v1, 0x154C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154C);
    // 0x15077BF4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15077BF8: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15077BFC: lw          $t9, 0x25C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X25C);
    // 0x15077C00: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x15077C04: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x15077C08: nor         $v0, $v0, $zero
    ctx->r2 = ~(ctx->r2 | 0);
    // 0x15077C0C: and         $t0, $t9, $v0
    ctx->r8 = ctx->r25 & ctx->r2;
    // 0x15077C10: sw          $t0, 0x25C($v1)
    MEM_W(0X25C, ctx->r3) = ctx->r8;
    // 0x15077C14: jr          $ra
    // 0x15077C18: nop

    return;
    return;
    // 0x15077C18: nop

;}
RECOMP_FUNC void func_100093CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x100093CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x100093D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x100093D4: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x100093D8: lbu         $t6, -0x51C0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X51C0);
    // 0x100093DC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x100093E0: beql        $t6, $zero, L_100093F4
    if (ctx->r14 == 0) {
        // 0x100093E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_100093F4;
    }
    goto skip_0;
    // 0x100093E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x100093E8: jal         0x10022E00
    // 0x100093EC: addiu       $a0, $a0, -0x1C60
    ctx->r4 = ADD32(ctx->r4, -0X1C60);
    osStopThread_recomp(rdram, ctx);
        goto after_0;
    // 0x100093EC: addiu       $a0, $a0, -0x1C60
    ctx->r4 = ADD32(ctx->r4, -0X1C60);
    after_0:
    // 0x100093F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_100093F4:
    // 0x100093F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x100093F8: jr          $ra
    // 0x100093FC: nop

    return;
    return;
    // 0x100093FC: nop

;}
RECOMP_FUNC void func_16001830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001830: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x16001834: addiu       $a1, $a1, 0x2A51
    ctx->r5 = ADD32(ctx->r5, 0X2A51);
    // 0x16001838: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x1600183C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x16001840: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x16001844: addiu       $v0, $v0, 0x2A10
    ctx->r2 = ADD32(ctx->r2, 0X2A10);
    // 0x16001848: blez        $t6, L_160018B4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1600184C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_160018B4;
    }
    // 0x1600184C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x16001850: addiu       $a2, $sp, 0x4
    ctx->r6 = ADD32(ctx->r29, 0X4);
L_16001854:
    // 0x16001854: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x16001858: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x1600185C: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x16001860: lwl         $t8, 0x4($v0)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r2, 0X4);
    // 0x16001864: lwr         $t8, 0x7($v0)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r2, 0X7);
    // 0x16001868: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x1600186C: lbu         $t9, 0x6($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6);
    // 0x16001870: andi        $t0, $t9, 0xC0
    ctx->r8 = ctx->r25 & 0XC0;
    // 0x16001874: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x16001878: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x1600187C: bne         $t2, $zero, L_1600189C
    if (ctx->r10 != 0) {
        // 0x16001880: sb          $t1, 0x4($a0)
        MEM_B(0X4, ctx->r4) = ctx->r9;
            goto L_1600189C;
    }
    // 0x16001880: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    // 0x16001884: lhu         $t3, 0x8($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X8);
    // 0x16001888: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x1600188C: lb          $t4, 0xA($sp)
    ctx->r12 = MEM_B(ctx->r29, 0XA);
    // 0x16001890: sb          $t4, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r12;
    // 0x16001894: lb          $t5, 0xB($sp)
    ctx->r13 = MEM_B(ctx->r29, 0XB);
    // 0x16001898: sb          $t5, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r13;
L_1600189C:
    // 0x1600189C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x160018A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x160018A4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x160018A8: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x160018AC: bne         $at, $zero, L_16001854
    if (ctx->r1 != 0) {
        // 0x160018B0: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_16001854;
    }
    // 0x160018B0: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
L_160018B4:
    // 0x160018B4: jr          $ra
    // 0x160018B8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    return;
    // 0x160018B8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_15162EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15162EF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15162EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15162F00: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15162F04: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15162F08: jal         0x151149AC
    // 0x15162F0C: lbu         $a0, 0x48($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X48);
    func_151149AC(rdram, ctx);
        goto after_0;
    // 0x15162F0C: lbu         $a0, 0x48($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X48);
    after_0:
    // 0x15162F10: beql        $v0, $zero, L_15162F28
    if (ctx->r2 == 0) {
        // 0x15162F14: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_15162F28;
    }
    goto skip_0;
    // 0x15162F14: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x15162F18: lw          $t7, 0x7C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X7C);
    // 0x15162F1C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x15162F20: sw          $t8, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r24;
    // 0x15162F24: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_15162F28:
    // 0x15162F28: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x15162F2C: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x15162F30: lbu         $t0, 0x12($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X12);
    // 0x15162F34: addiu       $t1, $t0, -0x15
    ctx->r9 = ADD32(ctx->r8, -0X15);
    // 0x15162F38: jal         0x151403A8
    // 0x15162F3C: sb          $t1, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r9;
    func_151403A8(rdram, ctx);
        goto after_1;
    // 0x15162F3C: sb          $t1, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r9;
    after_1:
    // 0x15162F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15162F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15162F48: jr          $ra
    // 0x15162F4C: nop

    return;
    return;
    // 0x15162F4C: nop

;}
RECOMP_FUNC void func_10019F98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10019F98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x10019F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10019FA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x10019FA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x10019FA8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x10019FAC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x10019FB0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x10019FB4: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x10019FB8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x10019FBC: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x10019FC0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x10019FC4: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x10019FC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x10019FCC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x10019FD0: sb          $t6, 0x16($t1)
    MEM_B(0X16, ctx->r9) = ctx->r14;
    // 0x10019FD4: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x10019FD8: lw          $t3, 0x64($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X64);
    // 0x10019FDC: beq         $t3, $zero, L_1001A018
    if (ctx->r11 == 0) {
        // 0x10019FE0: sw          $t3, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r11;
            goto L_1001A018;
    }
    // 0x10019FE0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_10019FE4:
    // 0x10019FE4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x10019FE8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x10019FEC: lbu         $t5, 0x35($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X35);
    // 0x10019FF0: bne         $t5, $t7, L_1001A008
    if (ctx->r13 != ctx->r15) {
        // 0x10019FF4: nop
    
            goto L_1001A008;
    }
    // 0x10019FF4: nop

    // 0x10019FF8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x10019FFC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1001A000: jal         0x1001E350
    // 0x1001A004: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_1001E350(rdram, ctx);
        goto after_0;
    // 0x1001A004: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
L_1001A008:
    // 0x1001A008: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001A00C: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x1001A010: bne         $t8, $zero, L_10019FE4
    if (ctx->r24 != 0) {
        // 0x1001A014: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_10019FE4;
    }
    // 0x1001A014: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_1001A018:
    // 0x1001A018: b           L_1001A020
    // 0x1001A01C: nop

        goto L_1001A020;
    // 0x1001A01C: nop

L_1001A020:
    // 0x1001A020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001A024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001A028: jr          $ra
    // 0x1001A02C: nop

    return;
    return;
    // 0x1001A02C: nop

;}
RECOMP_FUNC void func_1514DE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DE50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514DE54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514DE58: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1514DE5C: lw          $t6, 0x2E4C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2E4C);
    // 0x1514DE60: lbu         $t7, 0x11($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X11);
    // 0x1514DE64: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x1514DE68: beql        $t8, $zero, L_1514DE7C
    if (ctx->r24 == 0) {
        // 0x1514DE6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1514DE7C;
    }
    goto skip_0;
    // 0x1514DE6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1514DE70: jal         0x1514DCAC
    // 0x1514DE74: nop

    func_1514DCAC(rdram, ctx);
        goto after_0;
    // 0x1514DE74: nop

    after_0:
    // 0x1514DE78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1514DE7C:
    // 0x1514DE7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514DE80: jr          $ra
    // 0x1514DE84: nop

    return;
    return;
    // 0x1514DE84: nop

;}
RECOMP_FUNC void func_1001E4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001E4A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1001E4A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001E4A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1001E4AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1001E4B0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x1001E4B4: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001E4B8: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001E4BC: lh          $t8, 0x1A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1A);
    // 0x1001E4C0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1001E4C4: lw          $t7, 0x48($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X48);
    // 0x1001E4C8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x1001E4CC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1001E4D0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1001E4D4: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    // 0x1001E4D8: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x1001E4DC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x1001E4E0: jal         0x1001D124
    // 0x1001E4E4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    n_alFxNew(rdram, ctx);
        goto after_0;
    // 0x1001E4E4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_0:
    // 0x1001E4E8: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x1001E4EC: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x1001E4F0: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x1001E4F4: lw          $t1, 0x48($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X48);
    // 0x1001E4F8: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x1001E4FC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x1001E500: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1001E504: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x1001E508: b           L_1001E518
    // 0x1001E50C: lw          $v0, 0x20($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X20);
        goto L_1001E518;
    // 0x1001E50C: lw          $v0, 0x20($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X20);
    // 0x1001E510: b           L_1001E518
    // 0x1001E514: nop

        goto L_1001E518;
    // 0x1001E514: nop

L_1001E518:
    // 0x1001E518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001E51C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1001E520: jr          $ra
    // 0x1001E524: nop

    return;
    return;
    // 0x1001E524: nop

;}
RECOMP_FUNC void func_15119FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15119FC0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15119FC4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x15119FC8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x15119FCC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15119FD0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x15119FD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x15119FD8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15119FDC: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x15119FE0: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x15119FE4: beq         $at, $zero, L_1511A3C8
    if (ctx->r1 == 0) {
        // 0x15119FE8: nop
    
            goto L_1511A3C8;
    }
    // 0x15119FE8: nop

    // 0x15119FEC: lw          $t6, 0x80($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X80);
    // 0x15119FF0: bne         $t6, $zero, L_1511A000
    if (ctx->r14 != 0) {
        // 0x15119FF4: nop
    
            goto L_1511A000;
    }
    // 0x15119FF4: nop

    // 0x15119FF8: lh          $t7, 0x12($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X12);
    // 0x15119FFC: sw          $t7, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r15;
L_1511A000:
    // 0x1511A000: jal         0x15047D60
    // 0x1511A004: lwc1        $f12, 0x7C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X7C);
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x1511A004: lwc1        $f12, 0x7C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X7C);
    after_0:
    // 0x1511A008: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1511A00C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511A010: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511A014: lwc1        $f12, 0x7C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x1511A018: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1511A01C: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    // 0x1511A020: lwc1        $f8, 0x3170($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3170);
    // 0x1511A024: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x1511A028: jal         0x15047C00
    // 0x1511A02C: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x1511A02C: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    after_1:
    // 0x1511A030: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511A034: lwc1        $f2, 0x3174($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3174);
    // 0x1511A038: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x1511A03C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511A040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511A044: lwc1        $f10, 0x7C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x1511A048: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1511A04C: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x1511A050: lwc1        $f4, 0x3178($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3178);
    // 0x1511A054: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1511A058: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1511A05C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1511A060: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1511A064: swc1        $f16, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f16.u32l;
    // 0x1511A068: lwc1        $f20, 0x7C($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X7C);
    // 0x1511A06C: c.le.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl <= ctx->f20.fl;
    // 0x1511A070: nop

    // 0x1511A074: bc1f        L_1511A088
    if (!c1cs) {
        // 0x1511A078: nop
    
            goto L_1511A088;
    }
    // 0x1511A078: nop

    // 0x1511A07C: sub.s       $f18, $f20, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x1511A080: swc1        $f18, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->f18.u32l;
    // 0x1511A084: lwc1        $f20, 0x7C($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X7C);
L_1511A088:
    // 0x1511A088: jal         0x15047C00
    // 0x1511A08C: add.s       $f12, $f20, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x1511A08C: add.s       $f12, $f20, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f20.fl;
    after_2:
    // 0x1511A090: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x1511A094: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1511A098: lw          $t0, 0x80($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X80);
    // 0x1511A09C: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x1511A0A0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1511A0A4: addiu       $s2, $zero, 0x31
    ctx->r18 = ADD32(0, 0X31);
    // 0x1511A0A8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1511A0AC: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1511A0B0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1511A0B4: nop

    // 0x1511A0B8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x1511A0BC: addiu       $t2, $t1, 0xA
    ctx->r10 = ADD32(ctx->r9, 0XA);
    // 0x1511A0C0: bne         $v0, $zero, L_1511A3B4
    if (ctx->r2 != 0) {
        // 0x1511A0C4: sh          $t2, 0x12($s1)
        MEM_H(0X12, ctx->r17) = ctx->r10;
            goto L_1511A3B4;
    }
    // 0x1511A0C4: sh          $t2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r10;
    // 0x1511A0C8: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x1511A0CC: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1511A0D0: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x1511A0D4: blez        $v1, L_1511A3C8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x1511A0D8: addiu       $s2, $zero, 0x31
        ctx->r18 = ADD32(0, 0X31);
            goto L_1511A3C8;
    }
    // 0x1511A0D8: addiu       $s2, $zero, 0x31
    ctx->r18 = ADD32(0, 0X31);
    // 0x1511A0DC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_1511A0E0:
    // 0x1511A0E0: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x1511A0E4: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1511A0E8: beq         $t3, $zero, L_1511A108
    if (ctx->r11 == 0) {
        // 0x1511A0EC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_1511A108;
    }
    // 0x1511A0EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1511A0F0: lbu         $t4, 0x127($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X127);
    // 0x1511A0F4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1511A0F8: beql        $t4, $at, L_1511A10C
    if (ctx->r12 == ctx->r1) {
        // 0x1511A0FC: addu        $t6, $t6, $v1
        ctx->r14 = ADD32(ctx->r14, ctx->r3);
            goto L_1511A10C;
    }
    goto skip_0;
    // 0x1511A0FC: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    skip_0:
    // 0x1511A100: lw          $t5, 0x3C($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X3C);
    // 0x1511A104: bgez        $t5, L_1511A130
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1511A108: addu        $t6, $t6, $v1
        ctx->r14 = ADD32(ctx->r14, ctx->r3);
            goto L_1511A130;
    }
L_1511A108:
    // 0x1511A108: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
L_1511A10C:
    // 0x1511A10C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1511A110: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1511A114: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1511A118: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x1511A11C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1511A120: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1511A124: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1511A128: b           L_1511A39C
    // 0x1511A12C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
        goto L_1511A39C;
    // 0x1511A12C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
L_1511A130:
    // 0x1511A130: lh          $t8, 0x14($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X14);
    // 0x1511A134: lh          $t9, 0x10($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X10);
    // 0x1511A138: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1511A13C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1511A140: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x1511A144: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1511A148: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511A14C: lui         $at, 0x45C8
    ctx->r1 = S32(0X45C8 << 16);
    // 0x1511A150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511A154: addiu       $a1, $sp, 0x4E
    ctx->r5 = ADD32(ctx->r29, 0X4E);
    // 0x1511A158: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x1511A15C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511A160: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1511A164: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x1511A168: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1511A16C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511A170: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x1511A174: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1511A178: nop

    // 0x1511A17C: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1511A180: add.s       $f20, $f8, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x1511A184: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x1511A188: nop

    // 0x1511A18C: bc1f        L_1511A35C
    if (!c1cs) {
        // 0x1511A190: nop
    
            goto L_1511A35C;
    }
    // 0x1511A190: nop

    // 0x1511A194: jal         0x1507C3E0
    // 0x1511A198: addiu       $a3, $sp, 0x4A
    ctx->r7 = ADD32(ctx->r29, 0X4A);
    func_1507C3E0(rdram, ctx);
        goto after_3;
    // 0x1511A198: addiu       $a3, $sp, 0x4A
    ctx->r7 = ADD32(ctx->r29, 0X4A);
    after_3:
    // 0x1511A19C: lh          $t0, 0x12($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X12);
    // 0x1511A1A0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1511A1A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1511A1A8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1511A1AC: sb          $s2, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r18;
    // 0x1511A1B0: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1511A1B4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511A1B8: lh          $t1, 0x4E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X4E);
    // 0x1511A1BC: add.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x1511A1C0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1511A1C4: nop

    // 0x1511A1C8: bc1f        L_1511A364
    if (!c1cs) {
        // 0x1511A1CC: nop
    
            goto L_1511A364;
    }
    // 0x1511A1CC: nop

    // 0x1511A1D0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x1511A1D4: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x1511A1D8: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1511A1DC: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x1511A1E0: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x1511A1E4: nop

    // 0x1511A1E8: bc1f        L_1511A364
    if (!c1cs) {
        // 0x1511A1EC: nop
    
            goto L_1511A364;
    }
    // 0x1511A1EC: nop

    // 0x1511A1F0: lbu         $t2, 0x1CA($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1CA);
    // 0x1511A1F4: blez        $t2, L_1511A364
    if (SIGNED(ctx->r10) <= 0) {
        // 0x1511A1F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1511A364;
    }
    // 0x1511A1F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1511A1FC: jal         0x15060BA4
    // 0x1511A200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_15060BA4(rdram, ctx);
        goto after_4;
    // 0x1511A200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x1511A204: beq         $v0, $zero, L_1511A2A4
    if (ctx->r2 == 0) {
        // 0x1511A208: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1511A2A4;
    }
    // 0x1511A208: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511A20C: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x1511A210: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1511A214: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1511A218: beq         $v0, $zero, L_1511A244
    if (ctx->r2 == 0) {
        // 0x1511A21C: sra         $t3, $v0, 16
        ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
            goto L_1511A244;
    }
    // 0x1511A21C: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x1511A220: lbu         $t6, 0x70($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X70);
    // 0x1511A224: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x1511A228: sll         $t5, $t4, 4
    ctx->r13 = S32(ctx->r12 << 4);
    // 0x1511A22C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x1511A230: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x1511A234: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x1511A238: sw          $t5, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r13;
    // 0x1511A23C: b           L_1511A26C
    // 0x1511A240: sb          $t7, 0x70($s1)
    MEM_B(0X70, ctx->r17) = ctx->r15;
        goto L_1511A26C;
    // 0x1511A240: sb          $t7, 0x70($s1)
    MEM_B(0X70, ctx->r17) = ctx->r15;
L_1511A244:
    // 0x1511A244: sb          $t8, 0x6E($s1)
    MEM_B(0X6E, ctx->r17) = ctx->r24;
    // 0x1511A248: lw          $t9, -0x410C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X410C);
    // 0x1511A24C: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x1511A250: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x1511A254: subu        $a1, $s1, $t9
    ctx->r5 = SUB32(ctx->r17, ctx->r25);
    // 0x1511A258: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x1511A25C: mflo        $t0
    ctx->r8 = lo;
    // 0x1511A260: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x1511A264: jal         0x1508EE0C
    // 0x1511A268: nop

    func_1508EE0C(rdram, ctx);
        goto after_5;
    // 0x1511A268: nop

    after_5:
L_1511A26C:
    // 0x1511A26C: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x1511A270: sb          $t2, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r10;
    // 0x1511A274: addiu       $t3, $zero, 0x9C4
    ctx->r11 = ADD32(0, 0X9C4);
    // 0x1511A278: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x1511A27C: addiu       $a0, $zero, 0x1CF
    ctx->r4 = ADD32(0, 0X1CF);
    // 0x1511A280: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1511A284: addiu       $a2, $zero, 0x7D00
    ctx->r6 = ADD32(0, 0X7D00);
    // 0x1511A288: jal         0x10010344
    // 0x1511A28C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    func_10010344(rdram, ctx);
        goto after_6;
    // 0x1511A28C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    after_6:
    // 0x1511A290: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1511A294: jal         0x151D69B4
    // 0x1511A298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_151D69B4(rdram, ctx);
        goto after_7;
    // 0x1511A298: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x1511A29C: b           L_1511A354
    // 0x1511A2A0: nop

        goto L_1511A354;
    // 0x1511A2A0: nop

L_1511A2A4:
    // 0x1511A2A4: lwc1        $f4, 0x317C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X317C);
    // 0x1511A2A8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1511A2AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511A2B0: mul.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x1511A2B4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x1511A2B8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1511A2BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1511A2C0: sb          $s2, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r18;
    // 0x1511A2C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1511A2C8: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x1511A2CC: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x1511A2D0: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x1511A2D4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x1511A2D8: nop

    // 0x1511A2DC: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1511A2E0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x1511A2E4: nop

    // 0x1511A2E8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x1511A2EC: beql        $t5, $zero, L_1511A33C
    if (ctx->r13 == 0) {
        // 0x1511A2F0: mfc1        $t5, $f18
        ctx->r13 = (int32_t)ctx->f18.u32l;
            goto L_1511A33C;
    }
    goto skip_1;
    // 0x1511A2F0: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    skip_1:
    // 0x1511A2F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511A2F8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1511A2FC: sub.s       $f18, $f10, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x1511A300: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x1511A304: nop

    // 0x1511A308: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x1511A30C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x1511A310: nop

    // 0x1511A314: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x1511A318: bne         $t5, $zero, L_1511A330
    if (ctx->r13 != 0) {
        // 0x1511A31C: nop
    
            goto L_1511A330;
    }
    // 0x1511A31C: nop

    // 0x1511A320: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x1511A324: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1511A328: b           L_1511A348
    // 0x1511A32C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_1511A348;
    // 0x1511A32C: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_1511A330:
    // 0x1511A330: b           L_1511A348
    // 0x1511A334: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_1511A348;
    // 0x1511A334: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x1511A338: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
L_1511A33C:
    // 0x1511A33C: nop

    // 0x1511A340: bltz        $t5, L_1511A330
    if (SIGNED(ctx->r13) < 0) {
        // 0x1511A344: nop
    
            goto L_1511A330;
    }
    // 0x1511A344: nop

L_1511A348:
    // 0x1511A348: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x1511A34C: sb          $t5, 0x8A($s1)
    MEM_B(0X8A, ctx->r17) = ctx->r13;
    // 0x1511A350: nop

L_1511A354:
    // 0x1511A354: b           L_1511A3C8
    // 0x1511A358: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
        goto L_1511A3C8;
    // 0x1511A358: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
L_1511A35C:
    // 0x1511A35C: sb          $t6, 0x8A($s1)
    MEM_B(0X8A, ctx->r17) = ctx->r14;
    // 0x1511A360: sb          $t7, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r15;
L_1511A364:
    // 0x1511A364: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1511A368: lb          $v1, -0x274($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X274);
    // 0x1511A36C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x1511A370: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x1511A374: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x1511A378: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1511A37C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1511A380: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x1511A384: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1511A388: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1511A38C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1511A390: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x1511A394: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1511A398: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
L_1511A39C:
    // 0x1511A39C: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    // 0x1511A3A0: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x1511A3A4: bnel        $at, $zero, L_1511A0E0
    if (ctx->r1 != 0) {
        // 0x1511A3A8: lw          $t3, 0x0($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X0);
            goto L_1511A0E0;
    }
    goto skip_2;
    // 0x1511A3A8: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x1511A3AC: b           L_1511A3C8
    // 0x1511A3B0: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
        goto L_1511A3C8;
    // 0x1511A3B0: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
L_1511A3B4:
    // 0x1511A3B4: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x1511A3B8: subu        $t1, $t0, $v0
    ctx->r9 = SUB32(ctx->r8, ctx->r2);
    // 0x1511A3BC: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x1511A3C0: sb          $s2, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r18;
    // 0x1511A3C4: sb          $t2, 0x8A($s1)
    MEM_B(0X8A, ctx->r17) = ctx->r10;
L_1511A3C8:
    // 0x1511A3C8: blez        $v0, L_1511A3F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1511A3CC: lui         $t3, 0x800C
        ctx->r11 = S32(0X800C << 16);
            goto L_1511A3F4;
    }
    // 0x1511A3CC: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1511A3D0: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x1511A3D4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1511A3D8: addiu       $t7, $zero, 0x21
    ctx->r15 = ADD32(0, 0X21);
    // 0x1511A3DC: subu        $t4, $v0, $t3
    ctx->r12 = SUB32(ctx->r2, ctx->r11);
    // 0x1511A3E0: bgtz        $t4, L_1511A3F4
    if (SIGNED(ctx->r12) > 0) {
        // 0x1511A3E4: sw          $t4, 0x84($s1)
        MEM_W(0X84, ctx->r17) = ctx->r12;
            goto L_1511A3F4;
    }
    // 0x1511A3E4: sw          $t4, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r12;
    // 0x1511A3E8: sw          $zero, 0x84($s1)
    MEM_W(0X84, ctx->r17) = 0;
    // 0x1511A3EC: sb          $t6, 0x8A($s1)
    MEM_B(0X8A, ctx->r17) = ctx->r14;
    // 0x1511A3F0: sb          $t7, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r15;
L_1511A3F4:
    // 0x1511A3F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1511A3F8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x1511A3FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1511A400: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1511A404: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1511A408: jr          $ra
    // 0x1511A40C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x1511A40C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_15094FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15094FE8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15094FEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15094FF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15094FF4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x15094FF8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15094FFC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x15095000: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x15095004: jal         0x15095060
    // 0x15095008: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_15095060(rdram, ctx);
        goto after_0;
    // 0x15095008: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x1509500C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x15095010: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x15095014: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x15095018: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x1509501C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x15095020: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15095024: addiu       $a1, $a1, 0x2C90
    ctx->r5 = ADD32(ctx->r5, 0X2C90);
    // 0x15095028: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1509502C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x15095030: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x15095034: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15095038: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1509503C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15095040: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x15095044: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x15095048: jal         0x150950D4
    // 0x1509504C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_150950D4(rdram, ctx);
        goto after_1;
    // 0x1509504C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_1:
    // 0x15095050: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15095054: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x15095058: jr          $ra
    // 0x1509505C: nop

    return;
    return;
    // 0x1509505C: nop

;}
RECOMP_FUNC void func_150729D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150729D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150729D4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150729D8: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x150729DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150729E0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150729E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150729E8: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x150729EC: lw          $t8, 0x31C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X31C);
    // 0x150729F0: sh          $t6, 0x8($t8)
    MEM_H(0X8, ctx->r24) = ctx->r14;
    // 0x150729F4: jal         0x1507EB4C
    // 0x150729F8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_1507EB4C(rdram, ctx);
        goto after_0;
    // 0x150729F8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x150729FC: jal         0x1506B82C
    // 0x15072A00: nop

    func_1506B82C(rdram, ctx);
        goto after_1;
    // 0x15072A00: nop

    after_1:
    // 0x15072A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15072A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15072A0C: jr          $ra
    // 0x15072A10: nop

    return;
    return;
    // 0x15072A10: nop

;}
RECOMP_FUNC void func_15075D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075D6C: jal         0x15075548
    // 0x15075D70: nop

    func_15075548(rdram, ctx);
        goto after_0;
    // 0x15075D70: nop

    after_0:
    // 0x15075D74: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15075D78: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x15075D7C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15075D80: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x15075D84: sb          $t6, 0x223($t7)
    MEM_B(0X223, ctx->r15) = ctx->r14;
    // 0x15075D88: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x15075D8C: sb          $zero, 0x222($t8)
    MEM_B(0X222, ctx->r24) = 0;
    // 0x15075D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075D94: jr          $ra
    // 0x15075D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15075D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151BD2F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BD2F8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x151BD2FC: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x151BD300: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151BD304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151BD308: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x151BD30C: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x151BD310: beq         $a2, $zero, L_151BD41C
    if (ctx->r6 == 0) {
        // 0x151BD314: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_151BD41C;
    }
    // 0x151BD314: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151BD318: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x151BD31C: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x151BD320: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151BD324: lui         $at, 0xC208
    ctx->r1 = S32(0XC208 << 16);
    // 0x151BD328: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151BD32C: lui         $at, 0xC2EA
    ctx->r1 = S32(0XC2EA << 16);
    // 0x151BD330: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151BD334: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x151BD338: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151BD33C: lui         $at, 0xC1C0
    ctx->r1 = S32(0XC1C0 << 16);
    // 0x151BD340: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151BD344: lui         $at, 0xC336
    ctx->r1 = S32(0XC336 << 16);
    // 0x151BD348: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151BD34C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151BD350: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x151BD354: lwc1        $f4, -0x57B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X57B0);
    // 0x151BD358: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x151BD35C: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x151BD360: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x151BD364: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x151BD368: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x151BD36C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151BD370: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x151BD374: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151BD378: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x151BD37C: sb          $t7, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r15;
    // 0x151BD380: sb          $zero, 0x48($sp)
    MEM_B(0X48, ctx->r29) = 0;
    // 0x151BD384: sh          $t8, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r24;
    // 0x151BD388: sh          $t9, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r25;
    // 0x151BD38C: sh          $t0, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r8;
    // 0x151BD390: sb          $t1, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r9;
    // 0x151BD394: sb          $t2, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r10;
    // 0x151BD398: sb          $t3, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r11;
    // 0x151BD39C: sb          $t4, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r12;
    // 0x151BD3A0: sb          $t5, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r13;
    // 0x151BD3A4: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x151BD3A8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151BD3AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x151BD3B0: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    // 0x151BD3B4: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x151BD3B8: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x151BD3BC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x151BD3C0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x151BD3C4: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x151BD3C8: jal         0x15134DAC
    // 0x151BD3CC: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    func_15134DAC(rdram, ctx);
        goto after_0;
    // 0x151BD3CC: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151BD3D0: beq         $v0, $zero, L_151BD3E4
    if (ctx->r2 == 0) {
        // 0x151BD3D4: addiu       $a0, $v0, 0x80
        ctx->r4 = ADD32(ctx->r2, 0X80);
            goto L_151BD3E4;
    }
    // 0x151BD3D4: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x151BD3D8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x151BD3DC: jal         0x10022EC0
    // 0x151BD3E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151BD3E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
L_151BD3E4:
    // 0x151BD3E4: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151BD3E8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x151BD3EC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x151BD3F0: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151BD3F4: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x151BD3F8: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x151BD3FC: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x151BD400: jal         0x15134DAC
    // 0x151BD404: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_15134DAC(rdram, ctx);
        goto after_2;
    // 0x151BD404: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x151BD408: beq         $v0, $zero, L_151BD41C
    if (ctx->r2 == 0) {
        // 0x151BD40C: addiu       $a0, $v0, 0x80
        ctx->r4 = ADD32(ctx->r2, 0X80);
            goto L_151BD41C;
    }
    // 0x151BD40C: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x151BD410: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x151BD414: jal         0x10022EC0
    // 0x151BD418: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151BD418: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
L_151BD41C:
    // 0x151BD41C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151BD420: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x151BD424: jr          $ra
    // 0x151BD428: nop

    return;
    return;
    // 0x151BD428: nop

;}
RECOMP_FUNC void func_150151D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150151D4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x150151D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150151DC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x150151E0: lbu         $t6, 0x16($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X16);
    // 0x150151E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150151E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150151EC: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x150151F0: sb          $t7, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r15;
    // 0x150151F4: sb          $t8, 0x14($a2)
    MEM_B(0X14, ctx->r6) = ctx->r24;
    // 0x150151F8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150151FC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15015200: sh          $t9, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r25;
    // 0x15015204: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x15015208: lh          $t0, 0x0($a2)
    ctx->r8 = MEM_H(ctx->r6, 0X0);
    // 0x1501520C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15015210: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15015214: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x15015218: nop

    // 0x1501521C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15015220: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x15015224: lh          $t1, 0x2($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X2);
    // 0x15015228: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x1501522C: nop

    // 0x15015230: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15015234: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x15015238: lh          $t2, 0x4($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X4);
    // 0x1501523C: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x15015240: nop

    // 0x15015244: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15015248: lwc1        $f18, 0x66B4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X66B4);
    // 0x1501524C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x15015250: lh          $t3, 0x6($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X6);
    // 0x15015254: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x15015258: nop

    // 0x1501525C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15015260: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x15015264: lh          $t4, 0x8($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X8);
    // 0x15015268: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x1501526C: sb          $zero, 0x75($sp)
    MEM_B(0X75, ctx->r29) = 0;
    // 0x15015270: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x15015274: sb          $zero, 0x74($sp)
    MEM_B(0X74, ctx->r29) = 0;
    // 0x15015278: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x1501527C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15015280: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x15015284: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    // 0x15015288: jal         0x1510F800
    // 0x1501528C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x1501528C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x15015290: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x15015294: lh          $a0, 0x0($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X0);
    // 0x15015298: jal         0x1510FD20
    // 0x1501529C: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    func_1510FD20(rdram, ctx);
        goto after_1;
    // 0x1501529C: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    after_1:
    // 0x150152A0: addiu       $t5, $zero, 0x2D
    ctx->r13 = ADD32(0, 0X2D);
    // 0x150152A4: addiu       $t6, $zero, 0x48
    ctx->r14 = ADD32(0, 0X48);
    // 0x150152A8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150152AC: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x150152B0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x150152B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150152B8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x150152BC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150152C0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150152C4: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x150152C8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150152CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150152D0: jal         0x15149130
    // 0x150152D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_2;
    // 0x150152D4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_2:
    // 0x150152D8: beq         $v0, $zero, L_150152EC
    if (ctx->r2 == 0) {
        // 0x150152DC: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150152EC;
    }
    // 0x150152DC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150152E0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x150152E4: jal         0x10022EC0
    // 0x150152E8: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x150152E8: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    after_3:
L_150152EC:
    // 0x150152EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150152F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150152F4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x150152F8: jr          $ra
    // 0x150152FC: nop

    return;
    return;
    // 0x150152FC: nop

;}
RECOMP_FUNC void _n_timeToSamplesNoRound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10019964: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x10019968: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001996C: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x10019970: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x10019974: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10019978: lw          $t7, 0x54($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X54);
    // 0x1001997C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x10019980: lwc1        $f18, -0x38B0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X38B0);
    // 0x10019984: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x10019988: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1001998C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x10019990: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x10019994: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x10019998: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1001999C: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x100199A0: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x100199A4: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x100199A8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x100199AC: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x100199B0: b           L_100199C0
    // 0x100199B4: nop

        goto L_100199C0;
    // 0x100199B4: nop

    // 0x100199B8: b           L_100199C0
    // 0x100199BC: nop

        goto L_100199C0;
    // 0x100199BC: nop

L_100199C0:
    // 0x100199C0: jr          $ra
    // 0x100199C4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x100199C4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_151CF380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CF380: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x151CF384: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x151CF388: sll         $s2, $a2, 16
    ctx->r18 = S32(ctx->r6 << 16);
    // 0x151CF38C: sra         $t6, $s2, 16
    ctx->r14 = S32(SIGNED(ctx->r18) >> 16);
    // 0x151CF390: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x151CF394: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x151CF398: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151CF39C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151CF3A0: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x151CF3A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151CF3A8: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x151CF3AC: lb          $t7, 0x2C($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2C);
    // 0x151CF3B0: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x151CF3B4: beql        $at, $zero, L_151CF3C8
    if (ctx->r1 == 0) {
        // 0x151CF3B8: lw          $v0, 0x98($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X98);
            goto L_151CF3C8;
    }
    goto skip_0;
    // 0x151CF3B8: lw          $v0, 0x98($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X98);
    skip_0:
    // 0x151CF3BC: b           L_151CF82C
    // 0x151CF3C0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151CF82C;
    // 0x151CF3C0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151CF3C4: lw          $v0, 0x98($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X98);
L_151CF3C8:
    // 0x151CF3C8: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x151CF3CC: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x151CF3D0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x151CF3D4: lw          $t0, 0x94($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X94);
    // 0x151CF3D8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x151CF3DC: beq         $v1, $zero, L_151CF3F8
    if (ctx->r3 == 0) {
        // 0x151CF3E0: addiu       $a0, $s1, 0x84
        ctx->r4 = ADD32(ctx->r17, 0X84);
            goto L_151CF3F8;
    }
    // 0x151CF3E0: addiu       $a0, $s1, 0x84
    ctx->r4 = ADD32(ctx->r17, 0X84);
    // 0x151CF3E4: lw          $t8, 0x1D4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X1D4);
    // 0x151CF3E8: bnel        $t8, $zero, L_151CF3FC
    if (ctx->r24 != 0) {
        // 0x151CF3EC: lbu         $t6, 0x25($s1)
        ctx->r14 = MEM_BU(ctx->r17, 0X25);
            goto L_151CF3FC;
    }
    goto skip_1;
    // 0x151CF3EC: lbu         $t6, 0x25($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X25);
    skip_1:
    // 0x151CF3F0: b           L_151CF82C
    // 0x151CF3F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151CF82C;
    // 0x151CF3F4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151CF3F8:
    // 0x151CF3F8: lbu         $t6, 0x25($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X25);
L_151CF3FC:
    // 0x151CF3FC: sw          $t0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r8;
    // 0x151CF400: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151CF404: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x151CF408: addiu       $a2, $t7, 0xA0
    ctx->r6 = ADD32(ctx->r15, 0XA0);
    // 0x151CF40C: jal         0x151D5D60
    // 0x151CF410: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x151CF410: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x151CF414: addiu       $s2, $sp, 0x77
    ctx->r18 = ADD32(ctx->r29, 0X77);
    // 0x151CF418: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151CF41C: addiu       $t9, $zero, 0xC8
    ctx->r25 = ADD32(0, 0XC8);
    // 0x151CF420: sb          $t8, 0x77($sp)
    MEM_B(0X77, ctx->r29) = ctx->r24;
    // 0x151CF424: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151CF428: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x151CF42C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151CF430: addiu       $a1, $zero, 0xED
    ctx->r5 = ADD32(0, 0XED);
    // 0x151CF434: addiu       $a2, $zero, 0xD2
    ctx->r6 = ADD32(0, 0XD2);
    // 0x151CF438: jal         0x15142C10
    // 0x151CF43C: addiu       $a3, $zero, 0x85
    ctx->r7 = ADD32(0, 0X85);
    func_15142C10(rdram, ctx);
        goto after_1;
    // 0x151CF43C: addiu       $a3, $zero, 0x85
    ctx->r7 = ADD32(0, 0X85);
    after_1:
    // 0x151CF440: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    // 0x151CF444: lui         $a2, 0x1F
    ctx->r6 = S32(0X1F << 16);
    // 0x151CF448: ori         $a2, $a2, 0x600
    ctx->r6 = ctx->r6 | 0X600;
    // 0x151CF44C: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x151CF450: jal         0x15142B7C
    // 0x151CF454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15142B7C(rdram, ctx);
        goto after_2;
    // 0x151CF454: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x151CF458: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151CF45C: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    // 0x151CF460: jal         0x1513F4E4
    // 0x151CF464: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_1513F4E4(rdram, ctx);
        goto after_3;
    // 0x151CF464: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x151CF468: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151CF46C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x151CF470: lw          $a1, 0x2C9C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2C9C);
    // 0x151CF474: addiu       $v1, $v1, 0x4AC8
    ctx->r3 = ADD32(ctx->r3, 0X4AC8);
    // 0x151CF478: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x151CF47C: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x151CF480: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151CF484: or          $t9, $a1, $at
    ctx->r25 = ctx->r5 | ctx->r1;
    // 0x151CF488: ori         $a1, $t9, 0x2CA0
    ctx->r5 = ctx->r25 | 0X2CA0;
    // 0x151CF48C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151CF490: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x151CF494: jal         0x15142FBC
    // 0x151CF498: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    func_15142FBC(rdram, ctx);
        goto after_4;
    // 0x151CF498: or          $a2, $t7, $t8
    ctx->r6 = ctx->r15 | ctx->r24;
    after_4:
    // 0x151CF49C: lb          $a1, 0x2E($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X2E);
    // 0x151CF4A0: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x151CF4A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151CF4A8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x151CF4AC: bgez        $a1, L_151CF4BC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x151CF4B0: addiu       $a3, $zero, 0x28
        ctx->r7 = ADD32(0, 0X28);
            goto L_151CF4BC;
    }
    // 0x151CF4B0: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x151CF4B4: lbu         $a1, 0x25($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X25);
    // 0x151CF4B8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_151CF4BC:
    // 0x151CF4BC: addiu       $a0, $a1, -0x1
    ctx->r4 = ADD32(ctx->r5, -0X1);
    // 0x151CF4C0: bgez        $a0, L_151CF4D0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x151CF4C4: nop
    
            goto L_151CF4D0;
    }
    // 0x151CF4C4: nop

    // 0x151CF4C8: lbu         $a0, 0x25($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X25);
    // 0x151CF4CC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
L_151CF4D0:
    // 0x151CF4D0: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CF4D4: addiu       $t5, $sp, 0x84
    ctx->r13 = ADD32(ctx->r29, 0X84);
    // 0x151CF4D8: addiu       $ra, $sp, 0x4C
    ctx->r31 = ADD32(ctx->r29, 0X4C);
    // 0x151CF4DC: addiu       $s2, $sp, 0x90
    ctx->r18 = ADD32(ctx->r29, 0X90);
    // 0x151CF4E0: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x151CF4E4: lui         $t4, 0x2
    ctx->r12 = S32(0X2 << 16);
    // 0x151CF4E8: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x151CF4EC: lui         $t2, 0x100
    ctx->r10 = S32(0X100 << 16);
    // 0x151CF4F0: ori         $t2, $t2, 0x4008
    ctx->r10 = ctx->r10 | 0X4008;
    // 0x151CF4F4: ori         $t3, $t3, 0x204
    ctx->r11 = ctx->r11 | 0X204;
    // 0x151CF4F8: mflo        $t9
    ctx->r25 = lo;
    // 0x151CF4FC: addu        $v1, $t0, $t9
    ctx->r3 = ADD32(ctx->r8, ctx->r25);
    // 0x151CF500: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151CF504: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CF508: ori         $t4, $t4, 0x604
    ctx->r12 = ctx->r12 | 0X604;
    // 0x151CF50C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151CF510: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x151CF514: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x151CF518: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151CF51C: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151CF520: lw          $at, 0x18($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X18);
    // 0x151CF524: lwc1        $f14, 0x14($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X14);
    // 0x151CF528: lwc1        $f4, 0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X20);
    // 0x151CF52C: lwc1        $f6, 0x24($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X24);
    // 0x151CF530: sw          $at, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r1;
    // 0x151CF534: lw          $t9, 0x1C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X1C);
    // 0x151CF538: mflo        $t6
    ctx->r14 = lo;
    // 0x151CF53C: addu        $v0, $t0, $t6
    ctx->r2 = ADD32(ctx->r8, ctx->r14);
    // 0x151CF540: sw          $t9, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r25;
    // 0x151CF544: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151CF548: mul.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x151CF54C: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151CF550: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x151CF554: mul.s       $f18, $f6, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x151CF558: sw          $t8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r24;
    // 0x151CF55C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151CF560: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151CF564: lw          $at, 0x18($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X18);
    // 0x151CF568: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151CF56C: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x151CF570: lwc1        $f10, 0x24($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X24);
    // 0x151CF574: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151CF578: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x151CF57C: mul.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151CF580: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x151CF584: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151CF588: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151CF58C: mul.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151CF590: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x151CF594: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151CF598: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151CF59C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151CF5A0: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151CF5A4: nop

    // 0x151CF5A8: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x151CF5AC: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151CF5B0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151CF5B4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151CF5B8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151CF5BC: nop

    // 0x151CF5C0: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x151CF5C4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151CF5C8: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151CF5CC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x151CF5D0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151CF5D4: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151CF5D8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151CF5DC: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151CF5E0: nop

    // 0x151CF5E4: sh          $t6, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r14;
    // 0x151CF5E8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151CF5EC: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151CF5F0: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x151CF5F4: lwc1        $f4, 0x84($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X84);
    // 0x151CF5F8: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x151CF5FC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151CF600: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x151CF604: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x151CF608: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151CF60C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151CF610: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151CF614: nop

    // 0x151CF618: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x151CF61C: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151CF620: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151CF624: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151CF628: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151CF62C: nop

    // 0x151CF630: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x151CF634: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151CF638: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151CF63C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x151CF640: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151CF644: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x151CF648: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151CF64C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151CF650: nop

    // 0x151CF654: sh          $t9, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r25;
    // 0x151CF658: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151CF65C: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151CF660: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151CF664: addiu       $t9, $t6, 0x10
    ctx->r25 = ADD32(ctx->r14, 0X10);
    // 0x151CF668: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x151CF66C: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
L_151CF670:
    // 0x151CF670: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151CF674: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151CF678: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151CF67C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151CF680: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151CF684: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x151CF688: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x151CF68C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151CF690: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151CF694: nop

    // 0x151CF698: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x151CF69C: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x151CF6A0: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151CF6A4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151CF6A8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151CF6AC: nop

    // 0x151CF6B0: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x151CF6B4: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151CF6B8: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151CF6BC: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x151CF6C0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151CF6C4: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x151CF6C8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151CF6CC: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x151CF6D0: nop

    // 0x151CF6D4: sh          $t9, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r25;
    // 0x151CF6D8: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151CF6DC: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151CF6E0: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151CF6E4: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151CF6E8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151CF6EC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151CF6F0: addiu       $t9, $t6, 0x10
    ctx->r25 = ADD32(ctx->r14, 0X10);
    // 0x151CF6F4: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x151CF6F8: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x151CF6FC: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151CF700: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x151CF704: nop

    // 0x151CF708: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x151CF70C: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x151CF710: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151CF714: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151CF718: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x151CF71C: nop

    // 0x151CF720: sh          $t7, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r15;
    // 0x151CF724: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151CF728: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151CF72C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x151CF730: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151CF734: add.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x151CF738: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151CF73C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151CF740: nop

    // 0x151CF744: sh          $t6, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r14;
    // 0x151CF748: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x151CF74C: sh          $zero, 0x6($t8)
    MEM_H(0X6, ctx->r24) = 0;
    // 0x151CF750: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x151CF754: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x151CF758: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x151CF75C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x151CF760: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x151CF764: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151CF768: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151CF76C: addiu       $t8, $t7, -0x40
    ctx->r24 = ADD32(ctx->r15, -0X40);
    // 0x151CF770: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151CF774: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151CF778: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x151CF77C: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x151CF780: bgezl       $a0, L_151CF794
    if (SIGNED(ctx->r4) >= 0) {
        // 0x151CF784: lb          $v0, 0x2D($s1)
        ctx->r2 = MEM_B(ctx->r17, 0X2D);
            goto L_151CF794;
    }
    goto skip_2;
    // 0x151CF784: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
    skip_2:
    // 0x151CF788: lbu         $a0, 0x25($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X25);
    // 0x151CF78C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x151CF790: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
L_151CF794:
    // 0x151CF794: beq         $a1, $v0, L_151CF820
    if (ctx->r5 == ctx->r2) {
        // 0x151CF798: nop
    
            goto L_151CF820;
    }
    // 0x151CF798: nop

    // 0x151CF79C: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CF7A0: mflo        $t9
    ctx->r25 = lo;
    // 0x151CF7A4: addu        $v1, $t0, $t9
    ctx->r3 = ADD32(ctx->r8, ctx->r25);
    // 0x151CF7A8: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x151CF7AC: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151CF7B0: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151CF7B4: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x151CF7B8: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x151CF7BC: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151CF7C0: mflo        $t8
    ctx->r24 = lo;
    // 0x151CF7C4: addu        $v0, $t0, $t8
    ctx->r2 = ADD32(ctx->r8, ctx->r24);
    // 0x151CF7C8: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151CF7CC: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x151CF7D0: addiu       $a2, $v0, 0x18
    ctx->r6 = ADD32(ctx->r2, 0X18);
    // 0x151CF7D4: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x151CF7D8: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x151CF7DC: sw          $t6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r14;
    // 0x151CF7E0: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x151CF7E4: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x151CF7E8: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x151CF7EC: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151CF7F0: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x151CF7F4: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x151CF7F8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x151CF7FC: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x151CF800: mul.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151CF804: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x151CF808: lw          $at, 0x18($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X18);
    // 0x151CF80C: mul.s       $f12, $f6, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151CF810: sw          $at, 0x0($ra)
    MEM_W(0X0, ctx->r31) = ctx->r1;
    // 0x151CF814: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x151CF818: sw          $t6, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r14;
    // 0x151CF81C: lb          $v0, 0x2D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2D);
L_151CF820:
    // 0x151CF820: bnel        $a1, $v0, L_151CF670
    if (ctx->r5 != ctx->r2) {
        // 0x151CF824: lwc1        $f4, 0x90($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
            goto L_151CF670;
    }
    goto skip_3;
    // 0x151CF824: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    skip_3:
    // 0x151CF828: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151CF82C:
    // 0x151CF82C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151CF830: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x151CF834: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x151CF838: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x151CF83C: jr          $ra
    // 0x151CF840: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    return;
    // 0x151CF840: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_1510D970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D970: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1510D974: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1510D978: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1510D97C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1510D980: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1510D984: addiu       $t6, $zero, 0x128
    ctx->r14 = ADD32(0, 0X128);
    // 0x1510D988: andi        $t0, $a3, 0x1
    ctx->r8 = ctx->r7 & 0X1;
    // 0x1510D98C: beq         $t0, $zero, L_1510D99C
    if (ctx->r8 == 0) {
        // 0x1510D990: sw          $t6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r14;
            goto L_1510D99C;
    }
    // 0x1510D990: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x1510D994: addiu       $t7, $zero, 0x13A
    ctx->r15 = ADD32(0, 0X13A);
    // 0x1510D998: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_1510D99C:
    // 0x1510D99C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x1510D9A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1510D9A4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1510D9A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1510D9AC: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    // 0x1510D9B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1510D9B4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1510D9B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1510D9BC: jal         0x15167A68
    // 0x1510D9C0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1510D9C0: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x1510D9C4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x1510D9C8: beq         $v0, $zero, L_1510DA70
    if (ctx->r2 == 0) {
        // 0x1510D9CC: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_1510DA70;
    }
    // 0x1510D9CC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x1510D9D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1510D9D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1510D9D8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
L_1510D9DC:
    // 0x1510D9DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1510D9E0: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x1510D9E4: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x1510D9E8: sh          $zero, 0x56($v1)
    MEM_H(0X56, ctx->r3) = 0;
    // 0x1510D9EC: sh          $a1, 0x58($v1)
    MEM_H(0X58, ctx->r3) = ctx->r5;
    // 0x1510D9F0: sh          $zero, 0x5A($v1)
    MEM_H(0X5A, ctx->r3) = 0;
    // 0x1510D9F4: sh          $zero, 0x66($v1)
    MEM_H(0X66, ctx->r3) = 0;
    // 0x1510D9F8: sh          $zero, 0x68($v1)
    MEM_H(0X68, ctx->r3) = 0;
    // 0x1510D9FC: sh          $zero, 0x6A($v1)
    MEM_H(0X6A, ctx->r3) = 0;
    // 0x1510DA00: sh          $zero, 0x76($v1)
    MEM_H(0X76, ctx->r3) = 0;
    // 0x1510DA04: sh          $zero, 0x78($v1)
    MEM_H(0X78, ctx->r3) = 0;
    // 0x1510DA08: sh          $a1, 0x7A($v1)
    MEM_H(0X7A, ctx->r3) = ctx->r5;
    // 0x1510DA0C: sh          $zero, 0x86($v1)
    MEM_H(0X86, ctx->r3) = 0;
    // 0x1510DA10: sh          $a1, 0x88($v1)
    MEM_H(0X88, ctx->r3) = ctx->r5;
    // 0x1510DA14: bne         $at, $zero, L_1510D9DC
    if (ctx->r1 != 0) {
        // 0x1510DA18: sh          $a1, 0x8A($v1)
        MEM_H(0X8A, ctx->r3) = ctx->r5;
            goto L_1510D9DC;
    }
    // 0x1510DA18: sh          $a1, 0x8A($v1)
    MEM_H(0X8A, ctx->r3) = ctx->r5;
    // 0x1510DA1C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1510DA20: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x1510DA24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x1510DA28: sb          $t1, 0x120($v0)
    MEM_B(0X120, ctx->r2) = ctx->r9;
    // 0x1510DA2C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1510DA30: addiu       $v1, $v0, 0x2
    ctx->r3 = ADD32(ctx->r2, 0X2);
    // 0x1510DA34: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x1510DA38: sw          $t2, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->r10;
    // 0x1510DA3C: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1510DA40: sb          $t3, 0x121($v0)
    MEM_B(0X121, ctx->r2) = ctx->r11;
    // 0x1510DA44: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x1510DA48: beq         $t0, $zero, L_1510DA70
    if (ctx->r8 == 0) {
        // 0x1510DA4C: sb          $t4, 0x124($v0)
        MEM_B(0X124, ctx->r2) = ctx->r12;
            goto L_1510DA70;
    }
    // 0x1510DA4C: sb          $t4, 0x124($v0)
    MEM_B(0X124, ctx->r2) = ctx->r12;
    // 0x1510DA50: sh          $a1, 0x128($v0)
    MEM_H(0X128, ctx->r2) = ctx->r5;
L_1510DA54:
    // 0x1510DA54: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x1510DA58: sh          $a1, 0x12A($v1)
    MEM_H(0X12A, ctx->r3) = ctx->r5;
    // 0x1510DA5C: sh          $a1, 0x12C($v1)
    MEM_H(0X12C, ctx->r3) = ctx->r5;
    // 0x1510DA60: sh          $a1, 0x12E($v1)
    MEM_H(0X12E, ctx->r3) = ctx->r5;
    // 0x1510DA64: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x1510DA68: bne         $a0, $a2, L_1510DA54
    if (ctx->r4 != ctx->r6) {
        // 0x1510DA6C: sh          $a1, 0x120($v1)
        MEM_H(0X120, ctx->r3) = ctx->r5;
            goto L_1510DA54;
    }
    // 0x1510DA6C: sh          $a1, 0x120($v1)
    MEM_H(0X120, ctx->r3) = ctx->r5;
L_1510DA70:
    // 0x1510DA70: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x1510DA74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1510DA78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1510DA7C: jr          $ra
    // 0x1510DA80: nop

    return;
    return;
    // 0x1510DA80: nop

;}
RECOMP_FUNC void func_10017DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017DF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10017DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10017DF8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10017DFC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x10017E00: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x10017E04: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x10017E08: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x10017E0C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x10017E10: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x10017E14: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x10017E18: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x10017E1C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10017E20: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10017E24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10017E28: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10017E2C: jal         0x1001C224
    // 0x10017E30: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10017E30: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x10017E34: b           L_10017E3C
    // 0x10017E38: nop

        goto L_10017E3C;
    // 0x10017E38: nop

L_10017E3C:
    // 0x10017E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10017E40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10017E44: jr          $ra
    // 0x10017E48: nop

    return;
    return;
    // 0x10017E48: nop

;}
RECOMP_FUNC void func_15144BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15144BC8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x15144BCC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15144BD0: nop

    // 0x15144BD4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15144BD8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x15144BDC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15144BE0: bc1fl       L_15144C00
    if (!c1cs) {
        // 0x15144BE4: c.lt.s      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
            goto L_15144C00;
    }
    goto skip_0;
    // 0x15144BE4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    skip_0:
    // 0x15144BE8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
L_15144BEC:
    // 0x15144BEC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15144BF0: nop

    // 0x15144BF4: bc1tl       L_15144BEC
    if (c1cs) {
        // 0x15144BF8: sub.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_15144BEC;
    }
    goto skip_1;
    // 0x15144BF8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    skip_1:
    // 0x15144BFC: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
L_15144C00:
    // 0x15144C00: nop

    // 0x15144C04: bc1fl       L_15144C24
    if (!c1cs) {
        // 0x15144C08: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_15144C24;
    }
    goto skip_2;
    // 0x15144C08: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    skip_2:
    // 0x15144C0C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
L_15144C10:
    // 0x15144C10: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x15144C14: nop

    // 0x15144C18: bc1tl       L_15144C10
    if (c1cs) {
        // 0x15144C1C: add.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
            goto L_15144C10;
    }
    goto skip_3;
    // 0x15144C1C: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    skip_3:
    // 0x15144C20: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15144C24:
    // 0x15144C24: jr          $ra
    // 0x15144C28: nop

    return;
    return;
    // 0x15144C28: nop

;}
RECOMP_FUNC void func_1000EFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000EFB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1000EFB8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1000EFBC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1000EFC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1000EFC4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1000EFC8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x1000EFCC: lw          $t0, 0x18($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X18);
    // 0x1000EFD0: beql        $t0, $zero, L_1000F198
    if (ctx->r8 == 0) {
        // 0x1000EFD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1000F198;
    }
    goto skip_0;
    // 0x1000EFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x1000EFD8: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x1000EFDC: beql        $t1, $zero, L_1000F198
    if (ctx->r9 == 0) {
        // 0x1000EFE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1000F198;
    }
    goto skip_1;
    // 0x1000EFE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x1000EFE4: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x1000EFE8: beql        $t6, $zero, L_1000F088
    if (ctx->r14 == 0) {
        // 0x1000EFEC: lw          $t4, 0x38($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X38);
            goto L_1000F088;
    }
    goto skip_2;
    // 0x1000EFEC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    skip_2:
    // 0x1000EFF0: lw          $v0, 0x1C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X1C);
    // 0x1000EFF4: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x1000EFF8: beql        $v1, $zero, L_1000F088
    if (ctx->r3 == 0) {
        // 0x1000EFFC: lw          $t4, 0x38($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X38);
            goto L_1000F088;
    }
    goto skip_3;
    // 0x1000EFFC: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    skip_3:
    // 0x1000F000: lhu         $a0, 0x84($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X84);
L_1000F004:
    // 0x1000F004: beql        $a0, $v1, L_1000F020
    if (ctx->r4 == ctx->r3) {
        // 0x1000F008: lw          $t9, 0x184($t0)
        ctx->r25 = MEM_W(ctx->r8, 0X184);
            goto L_1000F020;
    }
    goto skip_4;
    // 0x1000F008: lw          $t9, 0x184($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X184);
    skip_4:
    // 0x1000F00C: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x1000F010: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x1000F014: bnel        $t8, $zero, L_1000F078
    if (ctx->r24 != 0) {
        // 0x1000F018: lhu         $v1, 0x2($v0)
        ctx->r3 = MEM_HU(ctx->r2, 0X2);
            goto L_1000F078;
    }
    goto skip_5;
    // 0x1000F018: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    skip_5:
    // 0x1000F01C: lw          $t9, 0x184($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X184);
L_1000F020:
    // 0x1000F020: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x1000F024: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1000F028: srl         $t2, $t9, 3
    ctx->r10 = S32(U32(ctx->r25) >> 3);
    // 0x1000F02C: andi        $t3, $t2, 0x30
    ctx->r11 = ctx->r10 & 0X30;
    // 0x1000F030: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x1000F034: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x1000F038: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
    // 0x1000F03C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1000F040: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1000F044: nop

    // 0x1000F048: sh          $t7, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r15;
    // 0x1000F04C: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x1000F050: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1000F054: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x1000F058: nop

    // 0x1000F05C: sh          $t9, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r25;
    // 0x1000F060: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x1000F064: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1000F068: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x1000F06C: b           L_1000F198
    // 0x1000F070: sh          $t3, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r11;
        goto L_1000F198;
    // 0x1000F070: sh          $t3, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r11;
    // 0x1000F074: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
L_1000F078:
    // 0x1000F078: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x1000F07C: bne         $v1, $zero, L_1000F004
    if (ctx->r3 != 0) {
        // 0x1000F080: nop
    
            goto L_1000F004;
    }
    // 0x1000F080: nop

    // 0x1000F084: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
L_1000F088:
    // 0x1000F088: addiu       $at, $zero, 0xCA
    ctx->r1 = ADD32(0, 0XCA);
    // 0x1000F08C: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x1000F090: lhu         $v0, 0x0($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X0);
    // 0x1000F094: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x1000F098: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1000F09C: bnel        $v0, $at, L_1000F0C8
    if (ctx->r2 != ctx->r1) {
        // 0x1000F0A0: addiu       $at, $zero, 0x2CF
        ctx->r1 = ADD32(0, 0X2CF);
            goto L_1000F0C8;
    }
    goto skip_6;
    // 0x1000F0A0: addiu       $at, $zero, 0x2CF
    ctx->r1 = ADD32(0, 0X2CF);
    skip_6:
    // 0x1000F0A4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x1000F0A8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1000F0AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000F0B0: lbu         $a2, 0x3($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X3);
    // 0x1000F0B4: jal         0x10010F30
    // 0x1000F0B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_10010F30(rdram, ctx);
        goto after_0;
    // 0x1000F0B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x1000F0BC: b           L_1000F198
    // 0x1000F0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000F198;
    // 0x1000F0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1000F0C4: addiu       $at, $zero, 0x2CF
    ctx->r1 = ADD32(0, 0X2CF);
L_1000F0C8:
    // 0x1000F0C8: bne         $v0, $at, L_1000F130
    if (ctx->r2 != ctx->r1) {
        // 0x1000F0CC: addiu       $a0, $zero, 0x2D7
        ctx->r4 = ADD32(0, 0X2D7);
            goto L_1000F130;
    }
    // 0x1000F0CC: addiu       $a0, $zero, 0x2D7
    ctx->r4 = ADD32(0, 0X2D7);
    // 0x1000F0D0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1000F0D4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1000F0D8: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x1000F0DC: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x1000F0E0: lbu         $a2, 0x3($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X3);
    // 0x1000F0E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000F0E8: jal         0x10010F30
    // 0x1000F0EC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_10010F30(rdram, ctx);
        goto after_1;
    // 0x1000F0EC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x1000F0F0: jal         0x150ADA20
    // 0x1000F0F4: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1000F0F4: nop

    after_2:
    // 0x1000F0F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1000F0FC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1000F100: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x1000F104: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1000F108: mfhi        $a0
    ctx->r4 = hi;
    // 0x1000F10C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x1000F110: lbu         $a2, 0x3($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X3);
    // 0x1000F114: addiu       $a0, $a0, 0x2EB
    ctx->r4 = ADD32(ctx->r4, 0X2EB);
    // 0x1000F118: addiu       $a1, $zero, 0x3E80
    ctx->r5 = ADD32(0, 0X3E80);
    // 0x1000F11C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000F120: jal         0x10010F30
    // 0x1000F124: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_10010F30(rdram, ctx);
        goto after_3;
    // 0x1000F124: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x1000F128: b           L_1000F198
    // 0x1000F12C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1000F198;
    // 0x1000F12C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000F130:
    // 0x1000F130: addiu       $at, $zero, 0x2D2
    ctx->r1 = ADD32(0, 0X2D2);
    // 0x1000F134: bne         $v0, $at, L_1000F194
    if (ctx->r2 != ctx->r1) {
        // 0x1000F138: addiu       $a0, $zero, 0x2DA
        ctx->r4 = ADD32(0, 0X2DA);
            goto L_1000F194;
    }
    // 0x1000F138: addiu       $a0, $zero, 0x2DA
    ctx->r4 = ADD32(0, 0X2DA);
    // 0x1000F13C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1000F140: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1000F144: andi        $a1, $t1, 0xFFFF
    ctx->r5 = ctx->r9 & 0XFFFF;
    // 0x1000F148: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1000F14C: lbu         $a2, 0x3($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X3);
    // 0x1000F150: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000F154: jal         0x10010F30
    // 0x1000F158: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_10010F30(rdram, ctx);
        goto after_4;
    // 0x1000F158: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_4:
    // 0x1000F15C: jal         0x150ADA20
    // 0x1000F160: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1000F160: nop

    after_5:
    // 0x1000F164: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1000F168: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1000F16C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1000F170: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1000F174: mfhi        $a0
    ctx->r4 = hi;
    // 0x1000F178: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1000F17C: lbu         $a2, 0x3($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X3);
    // 0x1000F180: addiu       $a0, $a0, 0x2EB
    ctx->r4 = ADD32(ctx->r4, 0X2EB);
    // 0x1000F184: addiu       $a1, $zero, 0x3E80
    ctx->r5 = ADD32(0, 0X3E80);
    // 0x1000F188: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1000F18C: jal         0x10010F30
    // 0x1000F190: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_10010F30(rdram, ctx);
        goto after_6;
    // 0x1000F190: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_6:
L_1000F194:
    // 0x1000F194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1000F198:
    // 0x1000F198: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1000F19C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1000F1A0: jr          $ra
    // 0x1000F1A4: nop

    return;
    return;
    // 0x1000F1A4: nop

;}
RECOMP_FUNC void func_1519277C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519277C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15192780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15192784: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15192788: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1519278C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15192790: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x15192794: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x15192798: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x1519279C: addiu       $a2, $t6, 0x28
    ctx->r6 = ADD32(ctx->r14, 0X28);
    // 0x151927A0: addiu       $a3, $t6, 0x2C
    ctx->r7 = ADD32(ctx->r14, 0X2C);
    // 0x151927A4: jal         0x15169850
    // 0x151927A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x151927A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x151927AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151927B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151927B4: jr          $ra
    // 0x151927B8: nop

    return;
    return;
    // 0x151927B8: nop

;}
RECOMP_FUNC void func_151A6600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A6600: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x151A6604: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x151A6608: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x151A660C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151A6610: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x151A6614: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x151A6618: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x151A661C: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x151A6620: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x151A6624: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x151A6628: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x151A662C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x151A6630: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x151A6634: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151A6638: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151A663C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151A6640: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151A6644: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151A6648: lbu         $t6, 0x127($s3)
    ctx->r14 = MEM_BU(ctx->r19, 0X127);
    // 0x151A664C: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    // 0x151A6650: beq         $t6, $zero, L_151A6668
    if (ctx->r14 == 0) {
        // 0x151A6654: nop
    
            goto L_151A6668;
    }
    // 0x151A6654: nop

    // 0x151A6658: lwc1        $f12, 0x34($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X34);
    // 0x151A665C: lwc1        $f14, 0x38($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X38);
    // 0x151A6660: jal         0x1508B20C
    // 0x151A6664: lw          $a2, 0x3C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X3C);
    func_1508B20C(rdram, ctx);
        goto after_0;
    // 0x151A6664: lw          $a2, 0x3C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X3C);
    after_0:
L_151A6668:
    // 0x151A6668: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x151A666C: addiu       $s0, $s0, -0x165C
    ctx->r16 = ADD32(ctx->r16, -0X165C);
    // 0x151A6670: addiu       $s1, $s3, 0x110
    ctx->r17 = ADD32(ctx->r19, 0X110);
    // 0x151A6674: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x151A6678: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A667C: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151A6680: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x151A6684: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A6688: lui         $at, 0x4500
    ctx->r1 = S32(0X4500 << 16);
    // 0x151A668C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151A6690: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x151A6694: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151A6698: swc1        $f16, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f16.u32l;
    // 0x151A669C: jal         0x15144528
    // 0x151A66A0: lwc1        $f12, 0x4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X4);
    func_15144528(rdram, ctx);
        goto after_1;
    // 0x151A66A0: lwc1        $f12, 0x4($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X4);
    after_1:
    // 0x151A66A4: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x151A66A8: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151A66AC: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151A66B0: lbu         $t7, 0x15($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X15);
    // 0x151A66B4: lbu         $t0, 0x14($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X14);
    // 0x151A66B8: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A66BC: mflo        $t9
    ctx->r25 = lo;
    // 0x151A66C0: addu        $a0, $t0, $t9
    ctx->r4 = ADD32(ctx->r8, ctx->r25);
    // 0x151A66C4: sb          $a0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r4;
    // 0x151A66C8: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x151A66CC: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x151A66D0: jal         0x151423D8
    // 0x151A66D4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151A66D4: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_2:
    // 0x151A66D8: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x151A66DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A66E0: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x151A66E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151A66E8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151A66EC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151A66F0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x151A66F4: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A66F8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x151A66FC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x151A6700: nop

    // 0x151A6704: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x151A6708: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x151A670C: nop

    // 0x151A6710: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x151A6714: beql        $t4, $zero, L_151A6764
    if (ctx->r12 == 0) {
        // 0x151A6718: mfc1        $t4, $f8
        ctx->r12 = (int32_t)ctx->f8.u32l;
            goto L_151A6764;
    }
    goto skip_0;
    // 0x151A6718: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    skip_0:
    // 0x151A671C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151A6720: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151A6724: sub.s       $f8, $f10, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x151A6728: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x151A672C: nop

    // 0x151A6730: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x151A6734: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x151A6738: nop

    // 0x151A673C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x151A6740: bne         $t4, $zero, L_151A6758
    if (ctx->r12 != 0) {
        // 0x151A6744: nop
    
            goto L_151A6758;
    }
    // 0x151A6744: nop

    // 0x151A6748: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x151A674C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A6750: b           L_151A6770
    // 0x151A6754: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_151A6770;
    // 0x151A6754: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_151A6758:
    // 0x151A6758: b           L_151A6770
    // 0x151A675C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_151A6770;
    // 0x151A675C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151A6760: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
L_151A6764:
    // 0x151A6764: nop

    // 0x151A6768: bltz        $t4, L_151A6758
    if (SIGNED(ctx->r12) < 0) {
        // 0x151A676C: nop
    
            goto L_151A6758;
    }
    // 0x151A676C: nop

L_151A6770:
    // 0x151A6770: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x151A6774: sb          $t4, 0x16($s1)
    MEM_B(0X16, ctx->r17) = ctx->r12;
    // 0x151A6778: jal         0x151464B8
    // 0x151A677C: lw          $a0, 0x60($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X60);
    func_151464B8(rdram, ctx);
        goto after_3;
    // 0x151A677C: lw          $a0, 0x60($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X60);
    after_3:
    // 0x151A6780: bnel        $v0, $zero, L_151A6A70
    if (ctx->r2 != 0) {
        // 0x151A6784: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151A6A70;
    }
    goto skip_1;
    // 0x151A6784: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x151A6788: jal         0x150ADA68
    // 0x151A678C: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151A678C: nop

    after_4:
    // 0x151A6790: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A6794: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x151A6798: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A679C: lwc1        $f16, -0x7260($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X7260);
    // 0x151A67A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A67A4: lwc1        $f18, -0x725C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X725C);
    // 0x151A67A8: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A67AC: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x151A67B0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151A67B4: lwc1        $f18, 0x18($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151A67B8: lui         $t8, 0x1F
    ctx->r24 = S32(0X1F << 16);
    // 0x151A67BC: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x151A67C0: addiu       $t6, $zero, 0x2203
    ctx->r14 = ADD32(0, 0X2203);
    // 0x151A67C4: ori         $t7, $t7, 0x5
    ctx->r15 = ctx->r15 | 0X5;
    // 0x151A67C8: ori         $t8, $t8, 0x600
    ctx->r24 = ctx->r24 | 0X600;
    // 0x151A67CC: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151A67D0: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151A67D4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151A67D8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151A67DC: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x151A67E0: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151A67E4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151A67E8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151A67EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A67F0: addiu       $fp, $sp, 0xD4
    ctx->r30 = ADD32(ctx->r29, 0XD4);
    // 0x151A67F4: addiu       $s7, $zero, 0x23
    ctx->r23 = ADD32(0, 0X23);
    // 0x151A67F8: add.s       $f16, $f18, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x151A67FC: addiu       $s6, $zero, 0x65
    ctx->r22 = ADD32(0, 0X65);
    // 0x151A6800: addiu       $s5, $sp, 0xC4
    ctx->r21 = ADD32(ctx->r29, 0XC4);
    // 0x151A6804: addiu       $s4, $sp, 0xBC
    ctx->r20 = ADD32(ctx->r29, 0XBC);
    // 0x151A6808: swc1        $f16, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f16.u32l;
    // 0x151A680C: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151A6810: c.lt.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl < ctx->f4.fl;
    // 0x151A6814: nop

    // 0x151A6818: bc1fl       L_151A6A70
    if (!c1cs) {
        // 0x151A681C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151A6A70;
    }
    goto skip_2;
    // 0x151A681C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x151A6820: lwc1        $f30, -0x7258($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X7258);
    // 0x151A6824: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151A6828: lwc1        $f28, -0x7254($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X7254);
    // 0x151A682C: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x151A6830: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x151A6834: lui         $at, 0x434D
    ctx->r1 = S32(0X434D << 16);
    // 0x151A6838: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x151A683C: sb          $t5, 0xA9($sp)
    MEM_B(0XA9, ctx->r29) = ctx->r13;
    // 0x151A6840: sh          $t6, 0x94($sp)
    MEM_H(0X94, ctx->r29) = ctx->r14;
    // 0x151A6844: sw          $t7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r15;
    // 0x151A6848: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x151A684C: sb          $t0, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r8;
    // 0x151A6850: sb          $t9, 0xA1($sp)
    MEM_B(0XA1, ctx->r29) = ctx->r25;
    // 0x151A6854: sb          $t1, 0xA2($sp)
    MEM_B(0XA2, ctx->r29) = ctx->r9;
    // 0x151A6858: sb          $t2, 0xA3($sp)
    MEM_B(0XA3, ctx->r29) = ctx->r10;
    // 0x151A685C: sb          $t3, 0xA4($sp)
    MEM_B(0XA4, ctx->r29) = ctx->r11;
    // 0x151A6860: sb          $t4, 0xA5($sp)
    MEM_B(0XA5, ctx->r29) = ctx->r12;
    // 0x151A6864: swc1        $f20, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f20.u32l;
    // 0x151A6868: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    // 0x151A686C: swc1        $f20, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f20.u32l;
    // 0x151A6870: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151A6874: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151A6878: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x151A687C: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x151A6880: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151A6884: ori         $t0, $zero, 0xC207
    ctx->r8 = 0 | 0XC207;
    // 0x151A6888: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x151A688C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x151A6890: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x151A6894: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x151A6898: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151A689C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151A68A0: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x151A68A4: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    // 0x151A68A8: sb          $t5, 0xA6($sp)
    MEM_B(0XA6, ctx->r29) = ctx->r13;
    // 0x151A68AC: sh          $t6, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r14;
    // 0x151A68B0: sh          $t7, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r15;
    // 0x151A68B4: sh          $t8, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r24;
    // 0x151A68B8: swc1        $f22, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f22.u32l;
    // 0x151A68BC: sw          $t0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r8;
    // 0x151A68C0: sb          $t9, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = ctx->r25;
    // 0x151A68C4: sb          $t1, 0xED($sp)
    MEM_B(0XED, ctx->r29) = ctx->r9;
    // 0x151A68C8: sb          $t2, 0xEE($sp)
    MEM_B(0XEE, ctx->r29) = ctx->r10;
    // 0x151A68CC: sb          $t3, 0xEF($sp)
    MEM_B(0XEF, ctx->r29) = ctx->r11;
    // 0x151A68D0: sb          $t4, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r12;
    // 0x151A68D4: sb          $zero, 0xF1($sp)
    MEM_B(0XF1, ctx->r29) = 0;
L_151A68D8:
    // 0x151A68D8: jal         0x150ADA20
    // 0x151A68DC: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151A68DC: nop

    after_5:
    // 0x151A68E0: jal         0x150ADA68
    // 0x151A68E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151A68E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_6:
    // 0x151A68E8: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x151A68EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x151A68F0: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x151A68F4: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x151A68F8: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x151A68FC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x151A6900: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x151A6904: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x151A6908: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x151A690C: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151A6910: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151A6914: jal         0x15143874
    // 0x151A6918: nop

    func_15143874(rdram, ctx);
        goto after_7;
    // 0x151A6918: nop

    after_7:
    // 0x151A691C: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x151A6920: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151A6924: lh          $t9, 0x0($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X0);
    // 0x151A6928: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x151A692C: nop

    // 0x151A6930: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x151A6934: lwc1        $f16, 0xC4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151A6938: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x151A693C: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x151A6940: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x151A6944: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x151A6948: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x151A694C: nop

    // 0x151A6950: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x151A6954: swc1        $f18, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f18.u32l;
    // 0x151A6958: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x151A695C: lh          $t4, 0x4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X4);
    // 0x151A6960: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x151A6964: nop

    // 0x151A6968: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151A696C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151A6970: jal         0x150ADA20
    // 0x151A6974: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151A6974: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x151A6978: andi        $t5, $v0, 0xF
    ctx->r13 = ctx->r2 & 0XF;
    // 0x151A697C: addiu       $t6, $t5, 0x19
    ctx->r14 = ADD32(ctx->r13, 0X19);
    // 0x151A6980: jal         0x150ADA20
    // 0x151A6984: sh          $t6, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r14;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x151A6984: sh          $t6, 0x96($sp)
    MEM_H(0X96, ctx->r29) = ctx->r14;
    after_9:
    // 0x151A6988: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x151A698C: mfhi        $t7
    ctx->r15 = hi;
    // 0x151A6990: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x151A6994: bne         $s6, $zero, L_151A69A0
    if (ctx->r22 != 0) {
        // 0x151A6998: nop
    
            goto L_151A69A0;
    }
    // 0x151A6998: nop

    // 0x151A699C: break       7
    do_break(354052508);
L_151A69A0:
    // 0x151A69A0: sb          $t8, 0xA7($sp)
    MEM_B(0XA7, ctx->r29) = ctx->r24;
    // 0x151A69A4: jal         0x150ADA68
    // 0x151A69A8: nop

    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x151A69A8: nop

    after_10:
    // 0x151A69AC: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151A69B0: add.s       $f2, $f10, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x151A69B4: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x151A69B8: jal         0x150ADA20
    // 0x151A69BC: swc1        $f2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x151A69BC: swc1        $f2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x151A69C0: jal         0x150ADA20
    // 0x151A69C4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x151A69C4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_12:
    // 0x151A69C8: jal         0x150ADA68
    // 0x151A69CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x151A69CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_13:
    // 0x151A69D0: divu        $zero, $s0, $s7
    lo = S32(U32(ctx->r16) / U32(ctx->r23)); hi = S32(U32(ctx->r16) % U32(ctx->r23));
    // 0x151A69D4: mul.s       $f18, $f0, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151A69D8: mfhi        $a1
    ctx->r5 = hi;
    // 0x151A69DC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x151A69E0: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x151A69E4: addiu       $a1, $a1, -0x40
    ctx->r5 = ADD32(ctx->r5, -0X40);
    // 0x151A69E8: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x151A69EC: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x151A69F0: add.s       $f8, $f18, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f20.fl;
    // 0x151A69F4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x151A69F8: bne         $s7, $zero, L_151A6A04
    if (ctx->r23 != 0) {
        // 0x151A69FC: nop
    
            goto L_151A6A04;
    }
    // 0x151A69FC: nop

    // 0x151A6A00: break       7
    do_break(354052608);
L_151A6A04:
    // 0x151A6A04: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x151A6A08: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
    // 0x151A6A0C: jal         0x15143794
    // 0x151A6A10: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_15143794(rdram, ctx);
        goto after_14;
    // 0x151A6A10: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_14:
    // 0x151A6A14: jal         0x150ADA68
    // 0x151A6A18: nop

    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x151A6A18: nop

    after_15:
    // 0x151A6A1C: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x151A6A20: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x151A6A24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151A6A28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151A6A2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151A6A30: add.s       $f4, $f16, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f30.fl;
    // 0x151A6A34: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x151A6A38: lbu         $t3, 0xC($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0XC);
    // 0x151A6A3C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151A6A40: lbu         $t4, 0x1($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X1);
    // 0x151A6A44: jal         0x15130280
    // 0x151A6A48: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15130280(rdram, ctx);
        goto after_16;
    // 0x151A6A48: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_16:
    // 0x151A6A4C: lwc1        $f6, 0x18($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151A6A50: sub.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x151A6A54: swc1        $f10, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f10.u32l;
    // 0x151A6A58: lwc1        $f18, 0x18($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X18);
    // 0x151A6A5C: c.lt.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl < ctx->f18.fl;
    // 0x151A6A60: nop

    // 0x151A6A64: bc1t        L_151A68D8
    if (c1cs) {
        // 0x151A6A68: nop
    
            goto L_151A68D8;
    }
    // 0x151A6A68: nop

    // 0x151A6A6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A6A70:
    // 0x151A6A70: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x151A6A74: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x151A6A78: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x151A6A7C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x151A6A80: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x151A6A84: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x151A6A88: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x151A6A8C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x151A6A90: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x151A6A94: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x151A6A98: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x151A6A9C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x151A6AA0: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x151A6AA4: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x151A6AA8: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x151A6AAC: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x151A6AB0: jr          $ra
    // 0x151A6AB4: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    return;
    // 0x151A6AB4: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_1511529C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511529C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151152A0: jr          $ra
    // 0x151152A4: nop

    return;
    return;
    // 0x151152A4: nop

;}
RECOMP_FUNC void func_15104620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15104620: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15104624: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15104628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1510462C: jr          $ra
    // 0x15104630: nop

    return;
    return;
    // 0x15104630: nop

;}
RECOMP_FUNC void func_150C6D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C6D1C: lbu         $t6, 0x5C($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X5C);
    // 0x150C6D20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150C6D24: bnel        $t6, $zero, L_150C6D34
    if (ctx->r14 != 0) {
        // 0x150C6D28: sb          $zero, 0x5C($a0)
        MEM_B(0X5C, ctx->r4) = 0;
            goto L_150C6D34;
    }
    goto skip_0;
    // 0x150C6D28: sb          $zero, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = 0;
    skip_0:
    // 0x150C6D2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150C6D30: sb          $zero, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = 0;
L_150C6D34:
    // 0x150C6D34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150C6D38: jr          $ra
    // 0x150C6D3C: nop

    return;
    return;
    // 0x150C6D3C: nop

;}
RECOMP_FUNC void func_15047B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15047B80: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x15047B84: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x15047B88: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x15047B8C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15047B90: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x15047B94: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x15047B98: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15047B9C: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x15047BA0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15047BA4: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x15047BA8: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15047BAC: lwc1        $f16, 0x98($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X98);
    // 0x15047BB0: lwc1        $f18, 0x9C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x15047BB4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x15047BB8: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x15047BBC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x15047BC0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x15047BC4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x15047BC8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x15047BCC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x15047BD0: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x15047BD4: jal         0x15047700
    // 0x15047BD8: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_15047700(rdram, ctx);
        goto after_0;
    // 0x15047BD8: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x15047BDC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x15047BE0: jal         0x150A7790
    // 0x15047BE4: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x15047BE4: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    after_1:
    // 0x15047BE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15047BEC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x15047BF0: jr          $ra
    // 0x15047BF4: nop

    return;
    return;
    // 0x15047BF4: nop

;}
RECOMP_FUNC void func_1509C2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509C2A4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1509C2A8: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x1509C2AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1509C2B0: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2B4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_1509C390;
    }
    // 0x1509C2B4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1509C2B8: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2BC: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_1509C390;
    }
    // 0x1509C2BC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x1509C2C0: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2C4: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_1509C390;
    }
    // 0x1509C2C4: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x1509C2C8: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2CC: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_1509C390;
    }
    // 0x1509C2CC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x1509C2D0: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2D4: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_1509C390;
    }
    // 0x1509C2D4: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x1509C2D8: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2DC: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_1509C390;
    }
    // 0x1509C2DC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x1509C2E0: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2E4: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_1509C390;
    }
    // 0x1509C2E4: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x1509C2E8: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2EC: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_1509C390;
    }
    // 0x1509C2EC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x1509C2F0: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2F4: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_1509C390;
    }
    // 0x1509C2F4: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x1509C2F8: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C2FC: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_1509C390;
    }
    // 0x1509C2FC: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x1509C300: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C304: addiu       $at, $zero, 0x1F
        ctx->r1 = ADD32(0, 0X1F);
            goto L_1509C390;
    }
    // 0x1509C304: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x1509C308: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C30C: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_1509C390;
    }
    // 0x1509C30C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x1509C310: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C314: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_1509C390;
    }
    // 0x1509C314: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x1509C318: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C31C: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_1509C390;
    }
    // 0x1509C31C: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x1509C320: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C324: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_1509C390;
    }
    // 0x1509C324: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x1509C328: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C32C: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_1509C390;
    }
    // 0x1509C32C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x1509C330: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C334: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_1509C390;
    }
    // 0x1509C334: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x1509C338: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C33C: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_1509C390;
    }
    // 0x1509C33C: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x1509C340: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C344: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_1509C390;
    }
    // 0x1509C344: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x1509C348: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C34C: addiu       $at, $zero, 0x30
        ctx->r1 = ADD32(0, 0X30);
            goto L_1509C390;
    }
    // 0x1509C34C: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x1509C350: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C354: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_1509C390;
    }
    // 0x1509C354: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x1509C358: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C35C: addiu       $at, $zero, 0x34
        ctx->r1 = ADD32(0, 0X34);
            goto L_1509C390;
    }
    // 0x1509C35C: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x1509C360: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C364: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_1509C390;
    }
    // 0x1509C364: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x1509C368: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C36C: addiu       $at, $zero, 0x3E
        ctx->r1 = ADD32(0, 0X3E);
            goto L_1509C390;
    }
    // 0x1509C36C: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x1509C370: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C374: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_1509C390;
    }
    // 0x1509C374: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x1509C378: beq         $v0, $at, L_1509C390
    if (ctx->r2 == ctx->r1) {
        // 0x1509C37C: lui         $t6, 0x800D
        ctx->r14 = S32(0X800D << 16);
            goto L_1509C390;
    }
    // 0x1509C37C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1509C380: lbu         $t6, 0x2E44($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2E44);
    // 0x1509C384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1509C388: beq         $t6, $zero, L_1509C398
    if (ctx->r14 == 0) {
        // 0x1509C38C: nop
    
            goto L_1509C398;
    }
    // 0x1509C38C: nop

L_1509C390:
    // 0x1509C390: jr          $ra
    // 0x1509C394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x1509C394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1509C398:
    // 0x1509C398: jr          $ra
    // 0x1509C39C: nop

    return;
    return;
    // 0x1509C39C: nop

;}
RECOMP_FUNC void func_151AADF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AADF8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x151AADFC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151AAE00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151AAE04: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151AAE08: lw          $t6, 0x70($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X70);
    // 0x151AAE0C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x151AAE10: beql        $t6, $zero, L_151AAE34
    if (ctx->r14 == 0) {
        // 0x151AAE14: lwc1        $f4, 0x14($v0)
        ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
            goto L_151AAE34;
    }
    goto skip_0;
    // 0x151AAE14: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    skip_0:
    // 0x151AAE18: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x151AAE1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151AAE20: addiu       $v0, $v0, 0xB0
    ctx->r2 = ADD32(ctx->r2, 0XB0);
    // 0x151AAE24: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x151AAE28: b           L_151AB080
    // 0x151AAE2C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_151AB080;
    // 0x151AAE2C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151AAE30: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
L_151AAE34:
    // 0x151AAE34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AAE38: lwc1        $f6, -0x7020($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7020);
    // 0x151AAE3C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x151AAE40: lwc1        $f0, 0x118($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X118);
    // 0x151AAE44: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151AAE48: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151AAE4C: nop

    // 0x151AAE50: bc1fl       L_151AAE74
    if (!c1cs) {
        // 0x151AAE54: lwc1        $f16, 0x18($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
            goto L_151AAE74;
    }
    goto skip_1;
    // 0x151AAE54: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    skip_1:
    // 0x151AAE58: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151AAE5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AAE60: nop

    // 0x151AAE64: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x151AAE68: b           L_151AAE84
    // 0x151AAE6C: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
        goto L_151AAE84;
    // 0x151AAE6C: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x151AAE70: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
L_151AAE74:
    // 0x151AAE74: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151AAE78: nop

    // 0x151AAE7C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151AAE80: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
L_151AAE84:
    // 0x151AAE84: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x151AAE88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151AAE8C: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151AAE90: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151AAE94: addiu       $a0, $sp, 0xA8
    ctx->r4 = ADD32(ctx->r29, 0XA8);
    // 0x151AAE98: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151AAE9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AAEA0: addiu       $a3, $s0, 0x34
    ctx->r7 = ADD32(ctx->r16, 0X34);
    // 0x151AAEA4: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x151AAEA8: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x151AAEAC: jal         0x15045800
    // 0x151AAEB0: nop

    func_15045800(rdram, ctx);
        goto after_0;
    // 0x151AAEB0: nop

    after_0:
    // 0x151AAEB4: beql        $v0, $zero, L_151AB080
    if (ctx->r2 == 0) {
        // 0x151AAEB8: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151AB080;
    }
    goto skip_2;
    // 0x151AAEB8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x151AAEBC: jal         0x151D8E20
    // 0x151AAEC0: nop

    func_151D8E20(rdram, ctx);
        goto after_1;
    // 0x151AAEC0: nop

    after_1:
    // 0x151AAEC4: sb          $v0, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r2;
    // 0x151AAEC8: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x151AAECC: jal         0x150ADA68
    // 0x151AAED0: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x151AAED0: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x151AAED4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AAED8: lwc1        $f2, -0x701C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X701C);
    // 0x151AAEDC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x151AAEE0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151AAEE4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x151AAEE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AAEEC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151AAEF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AAEF4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151AAEF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AAEFC: lwc1        $f18, -0x7018($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7018);
    // 0x151AAF00: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151AAF04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151AAF08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151AAF0C: sb          $t8, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r24;
    // 0x151AAF10: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AAF14: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x151AAF18: lbu         $t8, 0x5B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5B);
    // 0x151AAF1C: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x151AAF20: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x151AAF24: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x151AAF28: sh          $t9, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r25;
    // 0x151AAF2C: sh          $t0, 0x78($sp)
    MEM_H(0X78, ctx->r29) = ctx->r8;
    // 0x151AAF30: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x151AAF34: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151AAF38: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151AAF3C: addiu       $t0, $t0, -0x4BEC
    ctx->r8 = ADD32(ctx->r8, -0X4BEC);
    // 0x151AAF40: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151AAF44: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x151AAF48: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x151AAF4C: addiu       $t3, $zero, 0x38
    ctx->r11 = ADD32(0, 0X38);
    // 0x151AAF50: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x151AAF54: lui         $t4, 0x6
    ctx->r12 = S32(0X6 << 16);
    // 0x151AAF58: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x151AAF5C: sb          $t3, 0x86($sp)
    MEM_B(0X86, ctx->r29) = ctx->r11;
    // 0x151AAF60: ori         $t4, $t4, 0x300
    ctx->r12 = ctx->r12 | 0X300;
    // 0x151AAF64: sh          $t5, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r13;
    // 0x151AAF68: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x151AAF6C: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x151AAF70: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151AAF74: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x151AAF78: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x151AAF7C: lbu         $t3, 0x2($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2);
    // 0x151AAF80: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
    // 0x151AAF84: sb          $t6, 0x90($sp)
    MEM_B(0X90, ctx->r29) = ctx->r14;
    // 0x151AAF88: lui         $t5, 0x44
    ctx->r13 = S32(0X44 << 16);
    // 0x151AAF8C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151AAF90: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151AAF94: ori         $t5, $t5, 0x1
    ctx->r13 = ctx->r13 | 0X1;
    // 0x151AAF98: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x151AAF9C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x151AAFA0: sh          $zero, 0x74($sp)
    MEM_H(0X74, ctx->r29) = 0;
    // 0x151AAFA4: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x151AAFA8: sb          $t7, 0x91($sp)
    MEM_B(0X91, ctx->r29) = ctx->r15;
    // 0x151AAFAC: sb          $t4, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r12;
    // 0x151AAFB0: sw          $t5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r13;
    // 0x151AAFB4: sb          $zero, 0x96($sp)
    MEM_B(0X96, ctx->r29) = 0;
    // 0x151AAFB8: sb          $t6, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r14;
    // 0x151AAFBC: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x151AAFC0: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x151AAFC4: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x151AAFC8: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x151AAFCC: sb          $t1, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r9;
    // 0x151AAFD0: sb          $t2, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r10;
    // 0x151AAFD4: jal         0x150ADA20
    // 0x151AAFD8: sb          $t3, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151AAFD8: sb          $t3, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r11;
    after_3:
    // 0x151AAFDC: jal         0x150ADA20
    // 0x151AAFE0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x151AAFE0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_4:
    // 0x151AAFE4: jal         0x150ADA20
    // 0x151AAFE8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151AAFE8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_5:
    // 0x151AAFEC: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x151AAFF0: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x151AAFF4: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151AAFF8: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x151AAFFC: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151AB000: lwc1        $f18, 0xAC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151AB004: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x151AB008: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x151AB00C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x151AB010: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x151AB014: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x151AB018: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151AB01C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151AB020: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x151AB024: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x151AB028: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x151AB02C: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x151AB030: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x151AB034: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x151AB038: addiu       $a0, $sp, 0x80
    ctx->r4 = ADD32(ctx->r29, 0X80);
    // 0x151AB03C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x151AB040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151AB044: addiu       $a3, $s0, 0x38
    ctx->r7 = ADD32(ctx->r16, 0X38);
    // 0x151AB048: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151AB04C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151AB050: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x151AB054: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x151AB058: jal         0x1513C73C
    // 0x151AB05C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_1513C73C(rdram, ctx);
        goto after_6;
    // 0x151AB05C: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x151AB060: addiu       $v1, $s0, 0x58
    ctx->r3 = ADD32(ctx->r16, 0X58);
    // 0x151AB064: beq         $v0, $zero, L_151AB07C
    if (ctx->r2 == 0) {
        // 0x151AB068: sw          $v0, 0x18($v1)
        MEM_W(0X18, ctx->r3) = ctx->r2;
            goto L_151AB07C;
    }
    // 0x151AB068: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x151AB06C: addiu       $a0, $v0, 0xB0
    ctx->r4 = ADD32(ctx->r2, 0XB0);
    // 0x151AB070: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x151AB074: jal         0x10022EC0
    // 0x151AB078: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x151AB078: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_7:
L_151AB07C:
    // 0x151AB07C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_151AB080:
    // 0x151AB080: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x151AB084: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x151AB088: jr          $ra
    // 0x151AB08C: nop

    return;
    return;
    // 0x151AB08C: nop

;}
RECOMP_FUNC void func_150CADD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CADD0: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150CADD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150CADD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150CADDC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x150CADE0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x150CADE4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150CADE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150CADEC: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x150CADF0: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x150CADF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CADF8: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150CADFC: lwc1        $f6, 0x5BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5BC);
    // 0x150CAE00: addiu       $t6, $zero, 0x29E8
    ctx->r14 = ADD32(0, 0X29E8);
    // 0x150CAE04: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150CAE08: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x150CAE0C: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x150CAE10: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x150CAE14: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x150CAE18: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x150CAE1C: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x150CAE20: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x150CAE24: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x150CAE28: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x150CAE2C: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x150CAE30: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150CAE34: sh          $t7, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r15;
    // 0x150CAE38: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x150CAE3C: jal         0x150ADA20
    // 0x150CAE40: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150CAE40: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x150CAE44: jal         0x150ADA68
    // 0x150CAE48: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150CAE48: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x150CAE4C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150CAE50: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x150CAE54: lh          $a0, 0xCA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XCA);
    // 0x150CAE58: addiu       $a3, $sp, 0x5C
    ctx->r7 = ADD32(ctx->r29, 0X5C);
    // 0x150CAE5C: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x150CAE60: lui         $at, 0x434C
    ctx->r1 = S32(0X434C << 16);
    // 0x150CAE64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CAE68: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150CAE6C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CAE70: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CAE74: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAE78: lwc1        $f4, 0x5C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C0);
    // 0x150CAE7C: mfhi        $t8
    ctx->r24 = hi;
    // 0x150CAE80: addiu       $a1, $t8, -0x28
    ctx->r5 = ADD32(ctx->r24, -0X28);
    // 0x150CAE84: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x150CAE88: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150CAE8C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CAE90: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CAE94: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150CAE98: jal         0x15143794
    // 0x150CAE9C: nop

    func_15143794(rdram, ctx);
        goto after_2;
    // 0x150CAE9C: nop

    after_2:
    // 0x150CAEA0: jal         0x150ADA68
    // 0x150CAEA4: nop

    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x150CAEA4: nop

    after_3:
    // 0x150CAEA8: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x150CAEAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CAEB0: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x150CAEB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CAEB8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CAEBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAEC0: lwc1        $f4, 0x5C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C4);
    // 0x150CAEC4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CAEC8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CAECC: jal         0x150ADA68
    // 0x150CAED0: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150CAED0: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x150CAED4: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x150CAED8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CAEDC: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x150CAEE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CAEE4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CAEE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAEEC: lwc1        $f4, 0x5C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5C8);
    // 0x150CAEF0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CAEF4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CAEF8: jal         0x150ADA20
    // 0x150CAEFC: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150CAEFC: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x150CAF00: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x150CAF04: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CAF08: mfhi        $t1
    ctx->r9 = hi;
    // 0x150CAF0C: addiu       $t2, $t1, 0x32
    ctx->r10 = ADD32(ctx->r9, 0X32);
    // 0x150CAF10: jal         0x150ADA68
    // 0x150CAF14: sh          $t2, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x150CAF14: sh          $t2, 0x7C($sp)
    MEM_H(0X7C, ctx->r29) = ctx->r10;
    after_6:
    // 0x150CAF18: lui         $at, 0x447C
    ctx->r1 = S32(0X447C << 16);
    // 0x150CAF1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CAF20: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAF24: lwc1        $f16, 0x5CC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5CC);
    // 0x150CAF28: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CAF2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAF30: lwc1        $f4, 0x5D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5D0);
    // 0x150CAF34: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CAF38: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CAF3C: jal         0x150ADA68
    // 0x150CAF40: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x150CAF40: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x150CAF44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAF48: lwc1        $f8, 0x5D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5D4);
    // 0x150CAF4C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150CAF50: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150CAF54: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x150CAF58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CAF5C: lwc1        $f4, 0x5D8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5D8);
    // 0x150CAF60: sb          $zero, 0x80($sp)
    MEM_B(0X80, ctx->r29) = 0;
    // 0x150CAF64: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x150CAF68: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150CAF6C: mul.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150CAF70: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x150CAF74: jal         0x150ADA20
    // 0x150CAF78: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150CAF78: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x150CAF7C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x150CAF80: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CAF84: lbu         $t9, 0xE3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XE3);
    // 0x150CAF88: mfhi        $t3
    ctx->r11 = hi;
    // 0x150CAF8C: addiu       $t4, $t3, 0xB4
    ctx->r12 = ADD32(ctx->r11, 0XB4);
    // 0x150CAF90: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x150CAF94: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150CAF98: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x150CAF9C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x150CAFA0: sb          $t4, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r12;
    // 0x150CAFA4: sb          $t5, 0x89($sp)
    MEM_B(0X89, ctx->r29) = ctx->r13;
    // 0x150CAFA8: sb          $zero, 0x8A($sp)
    MEM_B(0X8A, ctx->r29) = 0;
    // 0x150CAFAC: sb          $zero, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = 0;
    // 0x150CAFB0: sb          $zero, 0x8C($sp)
    MEM_B(0X8C, ctx->r29) = 0;
    // 0x150CAFB4: sb          $zero, 0x8D($sp)
    MEM_B(0X8D, ctx->r29) = 0;
    // 0x150CAFB8: sb          $zero, 0x8E($sp)
    MEM_B(0X8E, ctx->r29) = 0;
    // 0x150CAFBC: sb          $zero, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = 0;
    // 0x150CAFC0: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x150CAFC4: sb          $t6, 0x92($sp)
    MEM_B(0X92, ctx->r29) = ctx->r14;
    // 0x150CAFC8: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x150CAFCC: sb          $zero, 0x98($sp)
    MEM_B(0X98, ctx->r29) = 0;
    // 0x150CAFD0: sh          $t7, 0x9A($sp)
    MEM_H(0X9A, ctx->r29) = ctx->r15;
    // 0x150CAFD4: sh          $t8, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r24;
    // 0x150CAFD8: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x150CAFDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150CAFE0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150CAFE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150CAFE8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150CAFEC: jal         0x15132A4C
    // 0x150CAFF0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15132A4C(rdram, ctx);
        goto after_9;
    // 0x150CAFF0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_9:
    // 0x150CAFF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CAFF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CAFFC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150CB000: jr          $ra
    // 0x150CB004: nop

    return;
    return;
    // 0x150CB004: nop

;}
RECOMP_FUNC void func_1503E82C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503E82C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x1503E830: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1503E834: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x1503E838: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x1503E83C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x1503E840: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x1503E844: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x1503E848: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x1503E84C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x1503E850: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x1503E854: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1503E858: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1503E85C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1503E860: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503E864: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x1503E868: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503E86C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1503E870: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503E874: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1503E878: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1503E87C: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1503E880: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1503E884: addu        $fp, $t6, $t7
    ctx->r30 = ADD32(ctx->r14, ctx->r15);
    // 0x1503E888: lw          $t8, 0x1D4($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X1D4);
    // 0x1503E88C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1503E890: addiu       $t0, $t0, 0x6660
    ctx->r8 = ADD32(ctx->r8, 0X6660);
    // 0x1503E894: beq         $t8, $zero, L_1503EA24
    if (ctx->r24 == 0) {
        // 0x1503E898: sll         $t9, $a0, 4
        ctx->r25 = S32(ctx->r4 << 4);
            goto L_1503EA24;
    }
    // 0x1503E898: sll         $t9, $a0, 4
    ctx->r25 = S32(ctx->r4 << 4);
    // 0x1503E89C: addu        $s6, $t9, $t0
    ctx->r22 = ADD32(ctx->r25, ctx->r8);
    // 0x1503E8A0: lbu         $v0, 0xE($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0XE);
    // 0x1503E8A4: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x1503E8A8: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x1503E8AC: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x1503E8B0: lbu         $t1, -0x76EC($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X76EC);
    // 0x1503E8B4: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x1503E8B8: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x1503E8BC: lw          $v1, 0x4454($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4454);
    // 0x1503E8C0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x1503E8C4: blez        $t1, L_1503EA24
    if (SIGNED(ctx->r9) <= 0) {
        // 0x1503E8C8: sw          $t1, 0xB4($sp)
        MEM_W(0XB4, ctx->r29) = ctx->r9;
            goto L_1503EA24;
    }
    // 0x1503E8C8: sw          $t1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r9;
    // 0x1503E8CC: or          $s7, $v1, $zero
    ctx->r23 = ctx->r3 | 0;
    // 0x1503E8D0: addiu       $s4, $sp, 0x64
    ctx->r20 = ADD32(ctx->r29, 0X64);
    // 0x1503E8D4: lb          $t4, 0x0($s7)
    ctx->r12 = MEM_B(ctx->r23, 0X0);
L_1503E8D8:
    // 0x1503E8D8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1503E8DC: sll         $s2, $s5, 2
    ctx->r18 = S32(ctx->r21 << 2);
    // 0x1503E8E0: beq         $t4, $at, L_1503EA10
    if (ctx->r12 == ctx->r1) {
        // 0x1503E8E4: subu        $s2, $s2, $s5
        ctx->r18 = SUB32(ctx->r18, ctx->r21);
            goto L_1503EA10;
    }
    // 0x1503E8E4: subu        $s2, $s2, $s5
    ctx->r18 = SUB32(ctx->r18, ctx->r21);
    // 0x1503E8E8: lw          $t5, 0x0($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X0);
    // 0x1503E8EC: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x1503E8F0: addu        $s2, $s2, $s5
    ctx->r18 = ADD32(ctx->r18, ctx->r21);
    // 0x1503E8F4: sll         $s2, $s2, 3
    ctx->r18 = S32(ctx->r18 << 3);
    // 0x1503E8F8: addu        $s0, $t5, $s2
    ctx->r16 = ADD32(ctx->r13, ctx->r18);
    // 0x1503E8FC: lbu         $t6, 0x64($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X64);
    // 0x1503E900: beql        $t6, $zero, L_1503EA14
    if (ctx->r14 == 0) {
        // 0x1503E904: lw          $t8, 0xB4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XB4);
            goto L_1503EA14;
    }
    goto skip_0;
    // 0x1503E904: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    skip_0:
    // 0x1503E908: lbu         $t9, 0xE($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0XE);
    // 0x1503E90C: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x1503E910: lw          $t7, 0x1D4($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X1D4);
    // 0x1503E914: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x1503E918: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1503E91C: lw          $t1, 0x4454($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4454);
    // 0x1503E920: sll         $t8, $s5, 6
    ctx->r24 = S32(ctx->r21 << 6);
    // 0x1503E924: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1503E928: addu        $t2, $t1, $s5
    ctx->r10 = ADD32(ctx->r9, ctx->r21);
    // 0x1503E92C: lb          $s3, 0x0($t2)
    ctx->r19 = MEM_B(ctx->r10, 0X0);
    // 0x1503E930: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    // 0x1503E934: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1503E938: beql        $s3, $at, L_1503E9D0
    if (ctx->r19 == ctx->r1) {
        // 0x1503E93C: lw          $a1, 0x30($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X30);
            goto L_1503E9D0;
    }
    goto skip_1;
    // 0x1503E93C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    skip_1:
    // 0x1503E940: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1503E944: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x1503E948: lw          $a2, 0x28($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X28);
    // 0x1503E94C: jal         0x150A7DA0
    // 0x1503E950: lw          $a3, 0x2C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C);
    func_150A7DA0(rdram, ctx);
        goto after_0;
    // 0x1503E950: lw          $a3, 0x2C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x1503E954: lw          $t3, 0x1D4($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X1D4);
    // 0x1503E958: sll         $t4, $s3, 6
    ctx->r12 = S32(ctx->r19 << 6);
    // 0x1503E95C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1503E960: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x1503E964: jal         0x150A7A48
    // 0x1503E968: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    func_150A7A48(rdram, ctx);
        goto after_1;
    // 0x1503E968: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    after_1:
    // 0x1503E96C: lw          $t5, 0x0($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X0);
    // 0x1503E970: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1503E974: addu        $s0, $t5, $s2
    ctx->r16 = ADD32(ctx->r13, ctx->r18);
    // 0x1503E978: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x1503E97C: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x1503E980: jal         0x150A8050
    // 0x1503E984: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    func_150A8050(rdram, ctx);
        goto after_2;
    // 0x1503E984: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    after_2:
    // 0x1503E988: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1503E98C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1503E990: jal         0x150A7A48
    // 0x1503E994: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_150A7A48(rdram, ctx);
        goto after_3;
    // 0x1503E994: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x1503E998: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x1503E99C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1503E9A0: addu        $s0, $t6, $s2
    ctx->r16 = ADD32(ctx->r14, ctx->r18);
    // 0x1503E9A4: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x1503E9A8: lw          $a2, 0x40($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X40);
    // 0x1503E9AC: jal         0x150A7CB0
    // 0x1503E9B0: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    func_150A7CB0(rdram, ctx);
        goto after_4;
    // 0x1503E9B0: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    after_4:
    // 0x1503E9B4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x1503E9B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1503E9BC: jal         0x150A7A48
    // 0x1503E9C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_150A7A48(rdram, ctx);
        goto after_5;
    // 0x1503E9C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x1503E9C4: b           L_1503EA14
    // 0x1503E9C8: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
        goto L_1503EA14;
    // 0x1503E9C8: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x1503E9CC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
L_1503E9D0:
    // 0x1503E9D0: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x1503E9D4: jal         0x150A8050
    // 0x1503E9D8: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    func_150A8050(rdram, ctx);
        goto after_6;
    // 0x1503E9D8: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    after_6:
    // 0x1503E9DC: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x1503E9E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1503E9E4: addu        $s0, $t7, $s2
    ctx->r16 = ADD32(ctx->r15, ctx->r18);
    // 0x1503E9E8: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1503E9EC: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x1503E9F0: lw          $a2, 0x40($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X40);
    // 0x1503E9F4: lw          $a3, 0x44($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X44);
    // 0x1503E9F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x1503E9FC: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x1503EA00: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x1503EA04: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1503EA08: jal         0x15043EC8
    // 0x1503EA0C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_15043EC8(rdram, ctx);
        goto after_7;
    // 0x1503EA0C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_7:
L_1503EA10:
    // 0x1503EA10: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
L_1503EA14:
    // 0x1503EA14: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x1503EA18: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x1503EA1C: bnel        $s5, $t8, L_1503E8D8
    if (ctx->r21 != ctx->r24) {
        // 0x1503EA20: lb          $t4, 0x0($s7)
        ctx->r12 = MEM_B(ctx->r23, 0X0);
            goto L_1503E8D8;
    }
    goto skip_2;
    // 0x1503EA20: lb          $t4, 0x0($s7)
    ctx->r12 = MEM_B(ctx->r23, 0X0);
    skip_2:
L_1503EA24:
    // 0x1503EA24: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1503EA28: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1503EA2C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x1503EA30: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x1503EA34: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x1503EA38: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x1503EA3C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x1503EA40: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x1503EA44: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x1503EA48: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x1503EA4C: jr          $ra
    // 0x1503EA50: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    return;
    // 0x1503EA50: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_10018C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10018C60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10018C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10018C68: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10018C6C: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x10018C70: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x10018C74: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10018C78: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10018C7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10018C80: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10018C84: jal         0x1001C224
    // 0x10018C88: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10018C88: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x10018C8C: b           L_10018C94
    // 0x10018C90: nop

        goto L_10018C94;
    // 0x10018C90: nop

L_10018C94:
    // 0x10018C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10018C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10018C9C: jr          $ra
    // 0x10018CA0: nop

    return;
    return;
    // 0x10018CA0: nop

;}
RECOMP_FUNC void func_1504092C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1504092C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040930: jr          $ra
    // 0x15040934: nop

    return;
    return;
    // 0x15040934: nop

;}
RECOMP_FUNC void func_15169668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15169668: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x1516966C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15169670: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15169674: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15169678: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1516967C: sb          $t6, 0x2DAB($at)
    MEM_B(0X2DAB, ctx->r1) = ctx->r14;
    // 0x15169680: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15169684: jr          $ra
    // 0x15169688: nop

    return;
    return;
    // 0x15169688: nop

;}
RECOMP_FUNC void func_15079A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15079A28: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15079A2C: addiu       $v0, $v0, 0x154C
    ctx->r2 = ADD32(ctx->r2, 0X154C);
    // 0x15079A30: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15079A34: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15079A38: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x15079A3C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15079A40: sb          $t6, 0x252($t7)
    MEM_B(0X252, ctx->r15) = ctx->r14;
    // 0x15079A44: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x15079A48: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x15079A4C: sb          $t8, 0x253($t9)
    MEM_B(0X253, ctx->r25) = ctx->r24;
    // 0x15079A50: jr          $ra
    // 0x15079A54: nop

    return;
    return;
    // 0x15079A54: nop

;}
RECOMP_FUNC void func_15005270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005270: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15005274: sb          $zero, 0x67F1($at)
    MEM_B(0X67F1, ctx->r1) = 0;
    // 0x15005278: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1500527C: sb          $zero, 0x67F0($at)
    MEM_B(0X67F0, ctx->r1) = 0;
    // 0x15005280: jr          $ra
    // 0x15005284: nop

    return;
    return;
    // 0x15005284: nop

;}
RECOMP_FUNC void func_1509B4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509B4A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1509B4A4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1509B4A8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x1509B4AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1509B4B0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1509B4B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1509B4B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1509B4BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1509B4C0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1509B4C4: lui         $t6, 0x500
    ctx->r14 = S32(0X500 << 16);
    // 0x1509B4C8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1509B4CC: jal         0x1509C120
    // 0x1509B4D0: sw          $t6, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r14;
    func_1509C120(rdram, ctx);
        goto after_0;
    // 0x1509B4D0: sw          $t6, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = ctx->r14;
    after_0:
    // 0x1509B4D4: jal         0x15096970
    // 0x1509B4D8: nop

    func_15096970(rdram, ctx);
        goto after_1;
    // 0x1509B4D8: nop

    after_1:
    // 0x1509B4DC: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x1509B4E0: addiu       $s3, $s3, 0x2F3C
    ctx->r19 = ADD32(ctx->r19, 0X2F3C);
    // 0x1509B4E4: lbu         $t7, 0x0($s3)
    ctx->r15 = MEM_BU(ctx->r19, 0X0);
    // 0x1509B4E8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1509B4EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1509B4F0: blez        $t7, L_1509B540
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1509B4F4: lui         $s2, 0x800D
        ctx->r18 = S32(0X800D << 16);
            goto L_1509B540;
    }
    // 0x1509B4F4: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x1509B4F8: addiu       $s2, $s2, 0x2F40
    ctx->r18 = ADD32(ctx->r18, 0X2F40);
    // 0x1509B4FC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
L_1509B500:
    // 0x1509B500: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x1509B504: jal         0x1509CBD4
    // 0x1509B508: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    func_1509CBD4(rdram, ctx);
        goto after_2;
    // 0x1509B508: lhu         $a0, 0x0($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0X0);
    after_2:
    // 0x1509B50C: beql        $v0, $zero, L_1509B52C
    if (ctx->r2 == 0) {
        // 0x1509B510: lbu         $t2, 0x0($s3)
        ctx->r10 = MEM_BU(ctx->r19, 0X0);
            goto L_1509B52C;
    }
    goto skip_0;
    // 0x1509B510: lbu         $t2, 0x0($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X0);
    skip_0:
    // 0x1509B514: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x1509B518: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x1509B51C: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x1509B520: jal         0x1509B5AC
    // 0x1509B524: lhu         $a0, 0x0($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X0);
    func_1509B5AC(rdram, ctx);
        goto after_3;
    // 0x1509B524: lhu         $a0, 0x0($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X0);
    after_3:
    // 0x1509B528: lbu         $t2, 0x0($s3)
    ctx->r10 = MEM_BU(ctx->r19, 0X0);
L_1509B52C:
    // 0x1509B52C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1509B530: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x1509B534: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x1509B538: bnel        $at, $zero, L_1509B500
    if (ctx->r1 != 0) {
        // 0x1509B53C: lw          $t8, 0x0($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X0);
            goto L_1509B500;
    }
    goto skip_1;
    // 0x1509B53C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    skip_1:
L_1509B540:
    // 0x1509B540: jal         0x1509C3A0
    // 0x1509B544: nop

    func_1509C3A0(rdram, ctx);
        goto after_4;
    // 0x1509B544: nop

    after_4:
    // 0x1509B548: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1509B54C: sw          $zero, -0x3720($at)
    MEM_W(-0X3720, ctx->r1) = 0;
    // 0x1509B550: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1509B554: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1509B558: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1509B55C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1509B560: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1509B564: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1509B568: jr          $ra
    // 0x1509B56C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1509B56C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1511CB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511CB2C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1511CB30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511CB34: lwc1        $f4, 0x31F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X31F4);
    // 0x1511CB38: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x1511CB3C: jr          $ra
    // 0x1511CB40: nop

    return;
    return;
    // 0x1511CB40: nop

;}
RECOMP_FUNC void func_1509CA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1509CA50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1509CA54: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x1509CA58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1509CA5C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1509CA60: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1509CA64: lhu         $v0, 0x743A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X743A);
    // 0x1509CA68: andi        $t7, $v0, 0xFFF
    ctx->r15 = ctx->r2 & 0XFFF;
    // 0x1509CA6C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x1509CA70: jr          $ra
    // 0x1509CA74: nop

    return;
    return;
    // 0x1509CA74: nop

;}
RECOMP_FUNC void func_151E2404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151E2404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151E2408: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151E240C: addiu       $a0, $a0, 0xBE0
    ctx->r4 = ADD32(ctx->r4, 0XBE0);
    // 0x151E2410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151E2414: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x151E2418: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x151E241C: lw          $t6, -0x22C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X22C);
    // 0x151E2420: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x151E2424: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x151E2428: lb          $t7, 0x42($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X42);
    // 0x151E242C: lw          $t0, 0x2BBC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2BBC);
    // 0x151E2430: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E2434: mflo        $t8
    ctx->r24 = lo;
    // 0x151E2438: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x151E243C: lb          $v1, -0x4970($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X4970);
    // 0x151E2440: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151E2444: sltiu       $at, $v1, 0xA
    ctx->r1 = ctx->r3 < 0XA ? 1 : 0;
    // 0x151E2448: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x151E244C: mflo        $t9
    ctx->r25 = lo;
    // 0x151E2450: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x151E2454: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x151E2458: lb          $t1, 0x2($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X2);
    // 0x151E245C: sb          $t1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r9;
    // 0x151E2460: lb          $t2, 0x3($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X3);
    // 0x151E2464: sb          $t2, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r10;
    // 0x151E2468: lb          $t3, 0x10($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X10);
    // 0x151E246C: sb          $t3, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r11;
    // 0x151E2470: lb          $t4, 0x11($a0)
    ctx->r12 = MEM_B(ctx->r4, 0X11);
    // 0x151E2474: beq         $at, $zero, L_151E24CC
    if (ctx->r1 == 0) {
        // 0x151E2478: sb          $t4, 0x4($v0)
        MEM_B(0X4, ctx->r2) = ctx->r12;
            goto L_151E24CC;
    }
    // 0x151E2478: sb          $t4, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r12;
    // 0x151E247C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151E2480: addu        $at, $at, $t5
    gpr jr_addend_151E2488 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x151E2484: lw          $t5, -0x4644($at)
    ctx->r13 = ADD32(ctx->r1, -0X4644);
    // 0x151E2488: jr          $t5
    // 0x151E248C: nop

    switch (jr_addend_151E2488 >> 2) {
        case 0: goto L_151E2490; break;
        case 1: goto L_151E249C; break;
        case 2: goto L_151E249C; break;
        case 3: goto L_151E24CC; break;
        case 4: goto L_151E24CC; break;
        case 5: goto L_151E24B0; break;
        case 6: goto L_151E24CC; break;
        case 7: goto L_151E24B0; break;
        case 8: goto L_151E24BC; break;
        case 9: goto L_151E24BC; break;
        default: switch_error(__func__, 0x151E2488, 0x800AB9BC);
    }
    // 0x151E248C: nop

L_151E2490:
    // 0x151E2490: lb          $t6, 0x4($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X4);
    // 0x151E2494: b           L_151E24CC
    // 0x151E2498: sb          $t6, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r14;
        goto L_151E24CC;
    // 0x151E2498: sb          $t6, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r14;
L_151E249C:
    // 0x151E249C: lb          $t7, 0xD($a0)
    ctx->r15 = MEM_B(ctx->r4, 0XD);
    // 0x151E24A0: sb          $t7, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r15;
    // 0x151E24A4: lb          $t8, 0xE($a0)
    ctx->r24 = MEM_B(ctx->r4, 0XE);
    // 0x151E24A8: b           L_151E24CC
    // 0x151E24AC: sb          $t8, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r24;
        goto L_151E24CC;
    // 0x151E24AC: sb          $t8, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r24;
L_151E24B0:
    // 0x151E24B0: lb          $t9, 0x12($a0)
    ctx->r25 = MEM_B(ctx->r4, 0X12);
    // 0x151E24B4: b           L_151E24CC
    // 0x151E24B8: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
        goto L_151E24CC;
    // 0x151E24B8: sb          $t9, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r25;
L_151E24BC:
    // 0x151E24BC: lb          $t0, 0x7($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X7);
    // 0x151E24C0: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x151E24C4: lb          $t1, 0x13($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X13);
    // 0x151E24C8: sb          $t1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r9;
L_151E24CC:
    // 0x151E24CC: lb          $t2, 0x16($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X16);
    // 0x151E24D0: sb          $t2, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r10;
    // 0x151E24D4: lb          $t3, 0x6($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X6);
    // 0x151E24D8: jal         0x150076A0
    // 0x151E24DC: sb          $t3, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r11;
    func_150076A0(rdram, ctx);
        goto after_0;
    // 0x151E24DC: sb          $t3, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r11;
    after_0:
    // 0x151E24E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151E24E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151E24E8: jr          $ra
    // 0x151E24EC: nop

    return;
    return;
    // 0x151E24EC: nop

;}
RECOMP_FUNC void func_15106584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15106584: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x15106588: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1510658C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x15106590: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15106594: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15106598: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x1510659C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151065A0: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x151065A4: nop

    // 0x151065A8: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x151065AC: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x151065B0: add.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151065B4: jr          $ra
    // 0x151065B8: nop

    return;
    return;
    // 0x151065B8: nop

;}
RECOMP_FUNC void func_1001F5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001F5A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1001F5A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001F5AC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1001F5B0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1001F5B4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1001F5B8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1001F5BC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x1001F5C0: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1001F5C4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x1001F5C8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1001F5CC: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x1001F5D0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1001F5D4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x1001F5D8: lw          $t1, 0x20($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X20);
    // 0x1001F5DC: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x1001F5E0: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x1001F5E4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x1001F5E8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1001F5EC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x1001F5F0: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x1001F5F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1001F5F8: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x1001F5FC: lw          $t7, 0x20($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X20);
    // 0x1001F600: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x1001F604: beq         $at, $zero, L_1001F624
    if (ctx->r1 == 0) {
        // 0x1001F608: nop
    
            goto L_1001F624;
    }
    // 0x1001F608: nop

    // 0x1001F60C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x1001F610: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1001F614: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x1001F618: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x1001F61C: addu        $t8, $t2, $t4
    ctx->r24 = ADD32(ctx->r10, ctx->r12);
    // 0x1001F620: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
L_1001F624:
    // 0x1001F624: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x1001F628: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x1001F62C: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x1001F630: addu        $t5, $t9, $t0
    ctx->r13 = ADD32(ctx->r25, ctx->r8);
    // 0x1001F634: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x1001F638: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1001F63C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x1001F640: sltu        $at, $t1, $t7
    ctx->r1 = ctx->r9 < ctx->r15 ? 1 : 0;
    // 0x1001F644: beq         $at, $zero, L_1001F730
    if (ctx->r1 == 0) {
        // 0x1001F648: nop
    
            goto L_1001F730;
    }
    // 0x1001F648: nop

    // 0x1001F64C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x1001F650: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001F654: subu        $t4, $t3, $t2
    ctx->r12 = SUB32(ctx->r11, ctx->r10);
    // 0x1001F658: sra         $t8, $t4, 1
    ctx->r24 = S32(SIGNED(ctx->r12) >> 1);
    // 0x1001F65C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x1001F660: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x1001F664: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x1001F668: subu        $t0, $t6, $t9
    ctx->r8 = SUB32(ctx->r14, ctx->r25);
    // 0x1001F66C: sra         $t5, $t0, 1
    ctx->r13 = S32(SIGNED(ctx->r8) >> 1);
    // 0x1001F670: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x1001F674: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1001F678: addiu       $t1, $t7, 0x8
    ctx->r9 = ADD32(ctx->r15, 0X8);
    // 0x1001F67C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x1001F680: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1001F684: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F688: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1001F68C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x1001F690: sll         $t2, $t3, 1
    ctx->r10 = S32(ctx->r11 << 1);
    // 0x1001F694: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x1001F698: sll         $t8, $t4, 12
    ctx->r24 = S32(ctx->r12 << 12);
    // 0x1001F69C: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x1001F6A0: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x1001F6A4: andi        $t0, $t9, 0xFFF
    ctx->r8 = ctx->r25 & 0XFFF;
    // 0x1001F6A8: or          $t5, $t6, $t0
    ctx->r13 = ctx->r14 | ctx->r8;
    // 0x1001F6AC: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x1001F6B0: jal         0x100233C0
    // 0x1001F6B4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x1001F6B4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x1001F6B8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001F6BC: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x1001F6C0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x1001F6C4: addiu       $t2, $t3, 0x8
    ctx->r10 = ADD32(ctx->r11, 0X8);
    // 0x1001F6C8: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x1001F6CC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x1001F6D0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001F6D4: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1001F6D8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x1001F6DC: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x1001F6E0: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x1001F6E4: andi        $t1, $t7, 0xFFF
    ctx->r9 = ctx->r15 & 0XFFF;
    // 0x1001F6E8: addu        $t6, $t4, $t9
    ctx->r14 = ADD32(ctx->r12, ctx->r25);
    // 0x1001F6EC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x1001F6F0: sll         $t3, $t1, 12
    ctx->r11 = S32(ctx->r9 << 12);
    // 0x1001F6F4: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x1001F6F8: or          $t2, $t3, $at
    ctx->r10 = ctx->r11 | ctx->r1;
    // 0x1001F6FC: andi        $t0, $t6, 0xFFF
    ctx->r8 = ctx->r14 & 0XFFF;
    // 0x1001F700: or          $t8, $t2, $t0
    ctx->r24 = ctx->r10 | ctx->r8;
    // 0x1001F704: sw          $t8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r24;
    // 0x1001F708: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x1001F70C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x1001F710: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x1001F714: addu        $t7, $t9, $t5
    ctx->r15 = ADD32(ctx->r25, ctx->r13);
    // 0x1001F718: jal         0x100233C0
    // 0x1001F71C: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x1001F71C: lw          $a0, 0x20($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X20);
    after_1:
    // 0x1001F720: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x1001F724: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x1001F728: b           L_1001F77C
    // 0x1001F72C: nop

        goto L_1001F77C;
    // 0x1001F72C: nop

L_1001F730:
    // 0x1001F730: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x1001F734: addiu       $t2, $t3, 0x8
    ctx->r10 = ADD32(ctx->r11, 0X8);
    // 0x1001F738: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x1001F73C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x1001F740: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x1001F744: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x1001F748: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x1001F74C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x1001F750: andi        $t4, $t8, 0xFFF
    ctx->r12 = ctx->r24 & 0XFFF;
    // 0x1001F754: sll         $t6, $t4, 12
    ctx->r14 = S32(ctx->r12 << 12);
    // 0x1001F758: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x1001F75C: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x1001F760: andi        $t7, $t5, 0xFFF
    ctx->r15 = ctx->r13 & 0XFFF;
    // 0x1001F764: or          $t1, $t9, $t7
    ctx->r9 = ctx->r25 | ctx->r15;
    // 0x1001F768: sw          $t1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r9;
    // 0x1001F76C: jal         0x100233C0
    // 0x1001F770: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x1001F770: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_2:
    // 0x1001F774: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x1001F778: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
L_1001F77C:
    // 0x1001F77C: b           L_1001F78C
    // 0x1001F780: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
        goto L_1001F78C;
    // 0x1001F780: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x1001F784: b           L_1001F78C
    // 0x1001F788: nop

        goto L_1001F78C;
    // 0x1001F788: nop

L_1001F78C:
    // 0x1001F78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001F790: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1001F794: jr          $ra
    // 0x1001F798: nop

    return;
    return;
    // 0x1001F798: nop

;}
RECOMP_FUNC void func_151BE644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BE644: lw          $t6, 0x160($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X160);
    // 0x151BE648: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x151BE64C: beq         $t6, $zero, L_151BE66C
    if (ctx->r14 == 0) {
        // 0x151BE650: nop
    
            goto L_151BE66C;
    }
    // 0x151BE650: nop

    // 0x151BE654: lw          $v1, 0x50($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X50);
    // 0x151BE658: lbu         $t7, 0x5($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X5);
    // 0x151BE65C: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x151BE660: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151BE664: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x151BE668: sw          $zero, 0x8($t9)
    MEM_W(0X8, ctx->r25) = 0;
L_151BE66C:
    // 0x151BE66C: jr          $ra
    // 0x151BE670: nop

    return;
    return;
    // 0x151BE670: nop

;}
RECOMP_FUNC void func_150E9890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E9890: addiu       $sp, $sp, -0x1A8
    ctx->r29 = ADD32(ctx->r29, -0X1A8);
    // 0x150E9894: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x150E9898: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x150E989C: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x150E98A0: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x150E98A4: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x150E98A8: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x150E98AC: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x150E98B0: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x150E98B4: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x150E98B8: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x150E98BC: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x150E98C0: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x150E98C4: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x150E98C8: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x150E98CC: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x150E98D0: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x150E98D4: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x150E98D8: sw          $a0, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->r4;
    // 0x150E98DC: sw          $a2, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->r6;
    // 0x150E98E0: sw          $a3, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r7;
    // 0x150E98E4: jal         0x150ADA20
    // 0x150E98E8: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150E98E8: nop

    after_0:
    // 0x150E98EC: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x150E98F0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E98F4: mfhi        $v1
    ctx->r3 = hi;
    // 0x150E98F8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x150E98FC: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x150E9900: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150E9904: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150E9908: div         $zero, $t8, $t7
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r15)));
    // 0x150E990C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x150E9910: mflo        $t9
    ctx->r25 = lo;
    // 0x150E9914: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150E9918: sh          $t7, 0x15A($sp)
    MEM_H(0X15A, ctx->r29) = ctx->r15;
    // 0x150E991C: sh          $t7, 0x156($sp)
    MEM_H(0X156, ctx->r29) = ctx->r15;
    // 0x150E9920: bne         $v1, $zero, L_150E992C
    if (ctx->r3 != 0) {
        // 0x150E9924: nop
    
            goto L_150E992C;
    }
    // 0x150E9924: nop

    // 0x150E9928: break       7
    do_break(353278248);
L_150E992C:
    // 0x150E992C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150E9930: bne         $v1, $at, L_150E9944
    if (ctx->r3 != ctx->r1) {
        // 0x150E9934: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_150E9944;
    }
    // 0x150E9934: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150E9938: bne         $t8, $at, L_150E9944
    if (ctx->r24 != ctx->r1) {
        // 0x150E993C: nop
    
            goto L_150E9944;
    }
    // 0x150E993C: nop

    // 0x150E9940: break       6
    do_break(353278272);
L_150E9944:
    // 0x150E9944: sh          $t9, 0x158($sp)
    MEM_H(0X158, ctx->r29) = ctx->r25;
    // 0x150E9948: sb          $t0, 0x153($sp)
    MEM_B(0X153, ctx->r29) = ctx->r8;
    // 0x150E994C: jal         0x150ADA68
    // 0x150E9950: sh          $v1, 0x142($sp)
    MEM_H(0X142, ctx->r29) = ctx->r3;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150E9950: sh          $v1, 0x142($sp)
    MEM_H(0X142, ctx->r29) = ctx->r3;
    after_1:
    // 0x150E9954: lui         $at, 0x4418
    ctx->r1 = S32(0X4418 << 16);
    // 0x150E9958: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E995C: lui         $at, 0x444A
    ctx->r1 = S32(0X444A << 16);
    // 0x150E9960: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150E9964: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150E9968: lwc1        $f16, 0x1B0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150E996C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150E9970: mul.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150E9974: swc1        $f2, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->f2.u32l;
    // 0x150E9978: jal         0x150ADA68
    // 0x150E997C: swc1        $f2, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150E997C: swc1        $f2, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x150E9980: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x150E9984: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E9988: lui         $at, 0x447E
    ctx->r1 = S32(0X447E << 16);
    // 0x150E998C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150E9990: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x150E9994: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E9998: lwc1        $f10, 0x13F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X13F0);
    // 0x150E999C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x150E99A0: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x150E99A4: lui         $t6, 0x80
    ctx->r14 = S32(0X80 << 16);
    // 0x150E99A8: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x150E99AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150E99B0: addiu       $t2, $zero, 0x2001
    ctx->r10 = ADD32(0, 0X2001);
    // 0x150E99B4: ori         $t3, $t3, 0x5
    ctx->r11 = ctx->r11 | 0X5;
    // 0x150E99B8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150E99BC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150E99C0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150E99C4: ori         $t6, $t6, 0xE05
    ctx->r14 = ctx->r14 | 0XE05;
    // 0x150E99C8: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150E99CC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150E99D0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x150E99D4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150E99D8: swc1        $f16, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->f16.u32l;
    // 0x150E99DC: sb          $t1, 0x155($sp)
    MEM_B(0X155, ctx->r29) = ctx->r9;
    // 0x150E99E0: sh          $t2, 0x140($sp)
    MEM_H(0X140, ctx->r29) = ctx->r10;
    // 0x150E99E4: sw          $t3, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r11;
    // 0x150E99E8: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
    // 0x150E99EC: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x150E99F0: sw          $zero, 0x148($sp)
    MEM_W(0X148, ctx->r29) = 0;
    // 0x150E99F4: sb          $t4, 0x14F($sp)
    MEM_B(0X14F, ctx->r29) = ctx->r12;
    // 0x150E99F8: sb          $t5, 0x154($sp)
    MEM_B(0X154, ctx->r29) = ctx->r13;
    // 0x150E99FC: sw          $t6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r14;
    // 0x150E9A00: sb          $t7, 0x198($sp)
    MEM_B(0X198, ctx->r29) = ctx->r15;
    // 0x150E9A04: sb          $t8, 0x199($sp)
    MEM_B(0X199, ctx->r29) = ctx->r24;
    // 0x150E9A08: sb          $t9, 0x19A($sp)
    MEM_B(0X19A, ctx->r29) = ctx->r25;
    // 0x150E9A0C: sb          $t0, 0x19B($sp)
    MEM_B(0X19B, ctx->r29) = ctx->r8;
    // 0x150E9A10: swc1        $f20, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f20.u32l;
    // 0x150E9A14: swc1        $f20, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f20.u32l;
    // 0x150E9A18: jal         0x150ADA20
    // 0x150E9A1C: swc1        $f20, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f20.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150E9A1C: swc1        $f20, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x150E9A20: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x150E9A24: beq         $t1, $zero, L_150E9A34
    if (ctx->r9 == 0) {
        // 0x150E9A28: lw          $t2, 0x190($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X190);
            goto L_150E9A34;
    }
    // 0x150E9A28: lw          $t2, 0x190($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X190);
    // 0x150E9A2C: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x150E9A30: sw          $t3, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r11;
L_150E9A34:
    // 0x150E9A34: jal         0x150ADA20
    // 0x150E9A38: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150E9A38: nop

    after_4:
    // 0x150E9A3C: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x150E9A40: beq         $t4, $zero, L_150E9A54
    if (ctx->r12 == 0) {
        // 0x150E9A44: addiu       $t7, $zero, 0xFF
        ctx->r15 = ADD32(0, 0XFF);
            goto L_150E9A54;
    }
    // 0x150E9A44: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150E9A48: lw          $t5, 0x190($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X190);
    // 0x150E9A4C: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x150E9A50: sw          $t6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r14;
L_150E9A54:
    // 0x150E9A54: lw          $t2, 0x1A8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A8);
    // 0x150E9A58: addiu       $t8, $zero, 0x8E
    ctx->r24 = ADD32(0, 0X8E);
    // 0x150E9A5C: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x150E9A60: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x150E9A64: sb          $t7, 0x150($sp)
    MEM_B(0X150, ctx->r29) = ctx->r15;
    // 0x150E9A68: sb          $t8, 0x151($sp)
    MEM_B(0X151, ctx->r29) = ctx->r24;
    // 0x150E9A6C: sb          $t9, 0x152($sp)
    MEM_B(0X152, ctx->r29) = ctx->r25;
    // 0x150E9A70: sb          $t0, 0x14C($sp)
    MEM_B(0X14C, ctx->r29) = ctx->r8;
    // 0x150E9A74: sb          $zero, 0x14D($sp)
    MEM_B(0X14D, ctx->r29) = 0;
    // 0x150E9A78: sb          $zero, 0x14E($sp)
    MEM_B(0X14E, ctx->r29) = 0;
    // 0x150E9A7C: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150E9A80: addiu       $t1, $sp, 0x168
    ctx->r9 = ADD32(ctx->r29, 0X168);
    // 0x150E9A84: addiu       $t6, $sp, 0x180
    ctx->r14 = ADD32(ctx->r29, 0X180);
    // 0x150E9A88: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150E9A8C: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x150E9A90: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    // 0x150E9A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E9A98: sw          $t5, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r13;
    // 0x150E9A9C: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x150E9AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E9AA4: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150E9AA8: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x150E9AAC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x150E9AB0: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x150E9AB4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x150E9AB8: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x150E9ABC: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x150E9AC0: lw          $t0, 0x1B8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1B8);
    // 0x150E9AC4: swc1        $f20, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f20.u32l;
    // 0x150E9AC8: lbu         $a3, 0x1B7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1B7);
    // 0x150E9ACC: jal         0x15130374
    // 0x150E9AD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15130374(rdram, ctx);
        goto after_5;
    // 0x150E9AD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_5:
    // 0x150E9AD4: jal         0x150ADA20
    // 0x150E9AD8: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150E9AD8: nop

    after_6:
    // 0x150E9ADC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150E9AE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150E9AE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E9AE8: lwc1        $f18, 0x13F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X13F4);
    // 0x150E9AEC: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x150E9AF0: addiu       $s2, $v1, 0x5
    ctx->r18 = ADD32(ctx->r3, 0X5);
    // 0x150E9AF4: addiu       $t4, $zero, 0x21E8
    ctx->r12 = ADD32(0, 0X21E8);
    // 0x150E9AF8: addiu       $t3, $zero, 0x1B
    ctx->r11 = ADD32(0, 0X1B);
    // 0x150E9AFC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150E9B00: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x150E9B04: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x150E9B08: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x150E9B0C: sw          $t4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r12;
    // 0x150E9B10: sh          $t3, 0x10E($sp)
    MEM_H(0X10E, ctx->r29) = ctx->r11;
    // 0x150E9B14: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x150E9B18: swc1        $f20, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f20.u32l;
    // 0x150E9B1C: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    // 0x150E9B20: swc1        $f20, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f20.u32l;
    // 0x150E9B24: swc1        $f20, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f20.u32l;
    // 0x150E9B28: sb          $zero, 0x110($sp)
    MEM_B(0X110, ctx->r29) = 0;
    // 0x150E9B2C: sw          $zero, 0x114($sp)
    MEM_W(0X114, ctx->r29) = 0;
    // 0x150E9B30: sb          $t1, 0x119($sp)
    MEM_B(0X119, ctx->r29) = ctx->r9;
    // 0x150E9B34: sb          $zero, 0x11A($sp)
    MEM_B(0X11A, ctx->r29) = 0;
    // 0x150E9B38: sb          $zero, 0x11B($sp)
    MEM_B(0X11B, ctx->r29) = 0;
    // 0x150E9B3C: sb          $zero, 0x11C($sp)
    MEM_B(0X11C, ctx->r29) = 0;
    // 0x150E9B40: sb          $zero, 0x11D($sp)
    MEM_B(0X11D, ctx->r29) = 0;
    // 0x150E9B44: sb          $zero, 0x11E($sp)
    MEM_B(0X11E, ctx->r29) = 0;
    // 0x150E9B48: sb          $zero, 0x11F($sp)
    MEM_B(0X11F, ctx->r29) = 0;
    // 0x150E9B4C: sb          $zero, 0x120($sp)
    MEM_B(0X120, ctx->r29) = 0;
    // 0x150E9B50: sb          $t2, 0x122($sp)
    MEM_B(0X122, ctx->r29) = ctx->r10;
    // 0x150E9B54: sw          $zero, 0x124($sp)
    MEM_W(0X124, ctx->r29) = 0;
    // 0x150E9B58: sb          $zero, 0x128($sp)
    MEM_B(0X128, ctx->r29) = 0;
    // 0x150E9B5C: sh          $t5, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r13;
    // 0x150E9B60: sh          $t8, 0x12C($sp)
    MEM_H(0X12C, ctx->r29) = ctx->r24;
    // 0x150E9B64: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x150E9B68: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
    // 0x150E9B6C: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x150E9B70: blez        $s2, L_150E9D30
    if (SIGNED(ctx->r18) <= 0) {
        // 0x150E9B74: swc1        $f18, 0xBC($sp)
        MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
            goto L_150E9D30;
    }
    // 0x150E9B74: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    // 0x150E9B78: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E9B7C: lwc1        $f30, 0x13F8($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X13F8);
    // 0x150E9B80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E9B84: lwc1        $f28, 0x13FC($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X13FC);
    // 0x150E9B88: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E9B8C: lwc1        $f26, 0x1400($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X1400);
    // 0x150E9B90: lui         $at, 0xC244
    ctx->r1 = S32(0XC244 << 16);
    // 0x150E9B94: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150E9B98: lui         $at, 0x42CA
    ctx->r1 = S32(0X42CA << 16);
    // 0x150E9B9C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150E9BA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E9BA4: lwc1        $f20, 0x1404($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X1404);
    // 0x150E9BA8: addiu       $fp, $sp, 0xB8
    ctx->r30 = ADD32(ctx->r29, 0XB8);
    // 0x150E9BAC: addiu       $s7, $sp, 0xEC
    ctx->r23 = ADD32(ctx->r29, 0XEC);
    // 0x150E9BB0: addiu       $s6, $zero, 0x41
    ctx->r22 = ADD32(0, 0X41);
    // 0x150E9BB4: addiu       $s5, $zero, 0x4C
    ctx->r21 = ADD32(0, 0X4C);
    // 0x150E9BB8: addiu       $s4, $zero, 0x29
    ctx->r20 = ADD32(0, 0X29);
    // 0x150E9BBC: addiu       $s3, $sp, 0xE0
    ctx->r19 = ADD32(ctx->r29, 0XE0);
    // 0x150E9BC0: lw          $t7, 0x1A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A8);
L_150E9BC4:
    // 0x150E9BC4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150E9BC8: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x150E9BCC: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x150E9BD0: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    // 0x150E9BD4: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150E9BD8: jal         0x150ADA20
    // 0x150E9BDC: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150E9BDC: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    after_7:
    // 0x150E9BE0: divu        $zero, $v0, $s4
    lo = S32(U32(ctx->r2) / U32(ctx->r20)); hi = S32(U32(ctx->r2) % U32(ctx->r20));
    // 0x150E9BE4: mfhi        $t0
    ctx->r8 = hi;
    // 0x150E9BE8: addiu       $t4, $t0, 0x1D
    ctx->r12 = ADD32(ctx->r8, 0X1D);
    // 0x150E9BEC: bne         $s4, $zero, L_150E9BF8
    if (ctx->r20 != 0) {
        // 0x150E9BF0: nop
    
            goto L_150E9BF8;
    }
    // 0x150E9BF0: nop

    // 0x150E9BF4: break       7
    do_break(353278964);
L_150E9BF8:
    // 0x150E9BF8: sh          $t4, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r12;
    // 0x150E9BFC: jal         0x150ADA20
    // 0x150E9C00: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150E9C00: nop

    after_8:
    // 0x150E9C04: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x150E9C08: mfhi        $t3
    ctx->r11 = hi;
    // 0x150E9C0C: addiu       $t1, $t3, 0xB4
    ctx->r9 = ADD32(ctx->r11, 0XB4);
    // 0x150E9C10: bne         $s5, $zero, L_150E9C1C
    if (ctx->r21 != 0) {
        // 0x150E9C14: nop
    
            goto L_150E9C1C;
    }
    // 0x150E9C14: nop

    // 0x150E9C18: break       7
    do_break(353279000);
L_150E9C1C:
    // 0x150E9C1C: sb          $t1, 0x118($sp)
    MEM_B(0X118, ctx->r29) = ctx->r9;
    // 0x150E9C20: jal         0x150ADA20
    // 0x150E9C24: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150E9C24: nop

    after_9:
    // 0x150E9C28: jal         0x150ADA20
    // 0x150E9C2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150E9C2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_10:
    // 0x150E9C30: jal         0x150ADA68
    // 0x150E9C34: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_11;
    // 0x150E9C34: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_11:
    // 0x150E9C38: divu        $zero, $s1, $s6
    lo = S32(U32(ctx->r17) / U32(ctx->r22)); hi = S32(U32(ctx->r17) % U32(ctx->r22));
    // 0x150E9C3C: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x150E9C40: mfhi        $a1
    ctx->r5 = hi;
    // 0x150E9C44: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x150E9C48: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x150E9C4C: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x150E9C50: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x150E9C54: sra         $t5, $t2, 16
    ctx->r13 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150E9C58: add.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x150E9C5C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x150E9C60: bne         $s6, $zero, L_150E9C6C
    if (ctx->r22 != 0) {
        // 0x150E9C64: nop
    
            goto L_150E9C6C;
    }
    // 0x150E9C64: nop

    // 0x150E9C68: break       7
    do_break(353279080);
L_150E9C6C:
    // 0x150E9C6C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x150E9C70: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x150E9C74: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    // 0x150E9C78: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x150E9C7C: jal         0x15143794
    // 0x150E9C80: nop

    func_15143794(rdram, ctx);
        goto after_12;
    // 0x150E9C80: nop

    after_12:
    // 0x150E9C84: jal         0x150ADA68
    // 0x150E9C88: nop

    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150E9C88: nop

    after_13:
    // 0x150E9C8C: mul.s       $f10, $f0, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x150E9C90: lui         $at, 0x447E
    ctx->r1 = S32(0X447E << 16);
    // 0x150E9C94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150E9C98: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150E9C9C: lwc1        $f4, 0x1408($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1408);
    // 0x150E9CA0: lwc1        $f8, 0x1B0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150E9CA4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150E9CA8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150E9CAC: nop

    // 0x150E9CB0: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150E9CB4: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    // 0x150E9CB8: jal         0x150ADA68
    // 0x150E9CBC: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150E9CBC: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    after_14:
    // 0x150E9CC0: lui         $at, 0x42C6
    ctx->r1 = S32(0X42C6 << 16);
    // 0x150E9CC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E9CC8: lui         $at, 0xC34E
    ctx->r1 = S32(0XC34E << 16);
    // 0x150E9CCC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150E9CD0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150E9CD4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150E9CD8: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x150E9CDC: jal         0x150ADA68
    // 0x150E9CE0: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_15;
    // 0x150E9CE0: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x150E9CE4: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150E9CE8: add.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x150E9CEC: jal         0x150ADA68
    // 0x150E9CF0: swc1        $f10, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x150E9CF0: swc1        $f10, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x150E9CF4: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150E9CF8: lbu         $t7, 0x1B7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1B7);
    // 0x150E9CFC: lw          $t9, 0x1B8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1B8);
    // 0x150E9D00: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x150E9D04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150E9D08: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150E9D0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150E9D10: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x150E9D14: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150E9D18: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150E9D1C: jal         0x15132A4C
    // 0x150E9D20: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    func_15132A4C(rdram, ctx);
        goto after_17;
    // 0x150E9D20: swc1        $f18, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x150E9D24: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x150E9D28: bnel        $s2, $zero, L_150E9BC4
    if (ctx->r18 != 0) {
        // 0x150E9D2C: lw          $t7, 0x1A8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1A8);
            goto L_150E9BC4;
    }
    goto skip_0;
    // 0x150E9D2C: lw          $t7, 0x1A8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1A8);
    skip_0:
L_150E9D30:
    // 0x150E9D30: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x150E9D34: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150E9D38: sb          $t0, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r8;
    // 0x150E9D3C: jal         0x150ADA20
    // 0x150E9D40: sb          $t4, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r12;
    func_150ADA20(rdram, ctx);
        goto after_18;
    // 0x150E9D40: sb          $t4, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r12;
    after_18:
    // 0x150E9D44: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x150E9D48: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E9D4C: lw          $t2, 0x1A8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1A8);
    // 0x150E9D50: mfhi        $t3
    ctx->r11 = hi;
    // 0x150E9D54: addiu       $t1, $t3, 0x8
    ctx->r9 = ADD32(ctx->r11, 0X8);
    // 0x150E9D58: sh          $t1, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r9;
    // 0x150E9D5C: sb          $zero, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = 0;
    // 0x150E9D60: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x150E9D64: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150E9D68: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x150E9D6C: nop

    // 0x150E9D70: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x150E9D74: lwc1        $f8, 0x4($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X4);
    // 0x150E9D78: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150E9D7C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x150E9D80: nop

    // 0x150E9D84: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x150E9D88: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x150E9D8C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150E9D90: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x150E9D94: jal         0x150ADA20
    // 0x150E9D98: sw          $t0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x150E9D98: sw          $t0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r8;
    after_19:
    // 0x150E9D9C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x150E9DA0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150E9DA4: lbu         $t5, 0x1B7($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1B7);
    // 0x150E9DA8: lw          $t8, 0x1B8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1B8);
    // 0x150E9DAC: mfhi        $a2
    ctx->r6 = hi;
    // 0x150E9DB0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150E9DB4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150E9DB8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150E9DBC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x150E9DC0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150E9DC4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150E9DC8: addiu       $a2, $a2, 0x46
    ctx->r6 = ADD32(ctx->r6, 0X46);
    // 0x150E9DCC: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x150E9DD0: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x150E9DD4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150E9DD8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150E9DDC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150E9DE0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150E9DE4: jal         0x151602C0
    // 0x150E9DE8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    func_151602C0(rdram, ctx);
        goto after_20;
    // 0x150E9DE8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    after_20:
    // 0x150E9DEC: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x150E9DF0: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x150E9DF4: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x150E9DF8: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x150E9DFC: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x150E9E00: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x150E9E04: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x150E9E08: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x150E9E0C: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x150E9E10: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x150E9E14: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x150E9E18: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x150E9E1C: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x150E9E20: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x150E9E24: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x150E9E28: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x150E9E2C: jr          $ra
    // 0x150E9E30: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
    return;
    return;
    // 0x150E9E30: addiu       $sp, $sp, 0x1A8
    ctx->r29 = ADD32(ctx->r29, 0X1A8);
;}
RECOMP_FUNC void func_15188A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15188A58: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x15188A5C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x15188A60: beql        $v0, $zero, L_15188A94
    if (ctx->r2 == 0) {
        // 0x15188A64: sw          $a0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r4;
            goto L_15188A94;
    }
    goto skip_0;
    // 0x15188A64: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    skip_0:
    // 0x15188A68: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x15188A6C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15188A70: beq         $a1, $zero, L_15188A88
    if (ctx->r5 == 0) {
        // 0x15188A74: nop
    
            goto L_15188A88;
    }
    // 0x15188A74: nop

    // 0x15188A78: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_15188A7C:
    // 0x15188A7C: lw          $a1, 0xC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XC);
    // 0x15188A80: bnel        $a1, $zero, L_15188A7C
    if (ctx->r5 != 0) {
        // 0x15188A84: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_15188A7C;
    }
    goto skip_1;
    // 0x15188A84: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    skip_1:
L_15188A88:
    // 0x15188A88: jr          $ra
    // 0x15188A8C: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    return;
    return;
    // 0x15188A8C: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x15188A90: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
L_15188A94:
    // 0x15188A94: jr          $ra
    // 0x15188A98: nop

    return;
    return;
    // 0x15188A98: nop

;}
RECOMP_FUNC void func_15033E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15033E00: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15033E04: lbu         $t6, 0x5($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X5);
    // 0x15033E08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15033E0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15033E10: bne         $t6, $at, L_15033E20
    if (ctx->r14 != ctx->r1) {
        // 0x15033E14: nop
    
            goto L_15033E20;
    }
    // 0x15033E14: nop

    // 0x15033E18: jr          $ra
    // 0x15033E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15033E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15033E20:
    // 0x15033E20: jr          $ra
    // 0x15033E24: nop

    return;
    return;
    // 0x15033E24: nop

;}
RECOMP_FUNC void func_1518C57C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518C57C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x1518C580: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1518C584: sw          $a1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r5;
    // 0x1518C588: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x1518C58C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1518C590: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1518C594: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x1518C598: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x1518C59C: lw          $t6, 0x98($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X98);
    // 0x1518C5A0: addiu       $t7, $zero, 0x100
    ctx->r15 = ADD32(0, 0X100);
    // 0x1518C5A4: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x1518C5A8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x1518C5AC: lw          $v0, 0x94($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X94);
    // 0x1518C5B0: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x1518C5B4: sh          $t7, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r15;
    // 0x1518C5B8: lb          $t8, 0x2D($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2D);
    // 0x1518C5BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1518C5C0: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C5C4: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x1518C5C8: mflo        $t9
    ctx->r25 = lo;
    // 0x1518C5CC: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x1518C5D0: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1518C5D4: sh          $v1, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r3;
    // 0x1518C5D8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1518C5DC: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x1518C5E0: nop

    // 0x1518C5E4: sh          $t3, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r11;
    // 0x1518C5E8: lb          $t5, 0x2D($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2D);
    // 0x1518C5EC: multu       $t5, $a1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1518C5F0: mflo        $t6
    ctx->r14 = lo;
    // 0x1518C5F4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x1518C5F8: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x1518C5FC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x1518C600: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1518C604: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x1518C608: jal         0x150ADA20
    // 0x1518C60C: sh          $t9, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r25;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1518C60C: sh          $t9, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r25;
    after_0:
    // 0x1518C610: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x1518C614: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1518C618: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x1518C61C: mfhi        $t0
    ctx->r8 = hi;
    // 0x1518C620: addiu       $t2, $t0, 0x23
    ctx->r10 = ADD32(ctx->r8, 0X23);
    // 0x1518C624: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x1518C628: addiu       $t4, $zero, 0x12
    ctx->r12 = ADD32(0, 0X12);
    // 0x1518C62C: addiu       $t5, $zero, 0xC
    ctx->r13 = ADD32(0, 0XC);
    // 0x1518C630: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1518C634: sh          $t2, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r10;
    // 0x1518C638: sb          $t3, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r11;
    // 0x1518C63C: sb          $t4, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r12;
    // 0x1518C640: sh          $t5, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r13;
    // 0x1518C644: sb          $zero, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = 0;
    // 0x1518C648: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1518C64C: sh          $t2, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r10;
    // 0x1518C650: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x1518C654: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1518C658: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1518C65C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x1518C660: jal         0x1516865C
    // 0x1518C664: sh          $v1, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r3;
    func_1516865C(rdram, ctx);
        goto after_1;
    // 0x1518C664: sh          $v1, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r3;
    after_1:
    // 0x1518C668: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x1518C66C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x1518C670: jal         0x15168800
    // 0x1518C674: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    func_15168800(rdram, ctx);
        goto after_2;
    // 0x1518C674: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    after_2:
    // 0x1518C678: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1518C67C: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x1518C680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1518C684: sb          $t7, 0x20($t8)
    MEM_B(0X20, ctx->r24) = ctx->r15;
    // 0x1518C688: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1518C68C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1518C690: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x1518C694: jr          $ra
    // 0x1518C698: nop

    return;
    return;
    // 0x1518C698: nop

;}
RECOMP_FUNC void func_150B76BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B76BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150B76C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B76C4: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x150B76C8: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x150B76CC: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x150B76D0: sb          $t9, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r25;
    // 0x150B76D4: sh          $t8, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r24;
    // 0x150B76D8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x150B76DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B76E0: addiu       $t9, $t9, -0x6768
    ctx->r25 = ADD32(ctx->r25, -0X6768);
    // 0x150B76E4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x150B76E8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x150B76EC: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x150B76F0: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150B76F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150B76F8: addiu       $t7, $zero, 0x58
    ctx->r15 = ADD32(0, 0X58);
    // 0x150B76FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B7700: sb          $t6, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r14;
    // 0x150B7704: sh          $t7, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r15;
    // 0x150B7708: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x150B770C: addiu       $t0, $t0, 0x18E8
    ctx->r8 = ADD32(ctx->r8, 0X18E8);
    // 0x150B7710: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150B7714: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150B7718: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150B771C: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x150B7720: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150B7724: addiu       $t6, $zero, 0x51
    ctx->r14 = ADD32(0, 0X51);
    // 0x150B7728: addiu       $t7, $zero, 0x51
    ctx->r15 = ADD32(0, 0X51);
    // 0x150B772C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x150B7730: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x150B7734: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x150B7738: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x150B773C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150B7740: sb          $t1, 0x56($sp)
    MEM_B(0X56, ctx->r29) = ctx->r9;
    // 0x150B7744: sb          $zero, 0x57($sp)
    MEM_B(0X57, ctx->r29) = 0;
    // 0x150B7748: sb          $zero, 0x58($sp)
    MEM_B(0X58, ctx->r29) = 0;
    // 0x150B774C: sb          $t2, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r10;
    // 0x150B7750: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x150B7754: sh          $zero, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = 0;
    // 0x150B7758: sb          $zero, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = 0;
    // 0x150B775C: sb          $t3, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r11;
    // 0x150B7760: sb          $t4, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r12;
    // 0x150B7764: sb          $t5, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r13;
    // 0x150B7768: sh          $t6, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r14;
    // 0x150B776C: sh          $t7, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r15;
    // 0x150B7770: beq         $a2, $zero, L_150B7788
    if (ctx->r6 == 0) {
        // 0x150B7774: swc1        $f8, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
            goto L_150B7788;
    }
    // 0x150B7774: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x150B7778: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x150B777C: jal         0x1516972C
    // 0x150B7780: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150B7780: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x150B7784: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
L_150B7788:
    // 0x150B7788: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x150B778C: jal         0x15169968
    // 0x150B7790: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_15169968(rdram, ctx);
        goto after_1;
    // 0x150B7790: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x150B7794: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x150B7798: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x150B779C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B77A0: jr          $ra
    // 0x150B77A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x150B77A4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_150B6E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B6E3C: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x150B6E40: beq         $t6, $zero, L_150B6EC4
    if (ctx->r14 == 0) {
        // 0x150B6E44: nop
    
            goto L_150B6EC4;
    }
    // 0x150B6E44: nop

    // 0x150B6E48: lw          $t7, 0x18($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X18);
    // 0x150B6E4C: lh          $t8, 0x26($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X26);
    // 0x150B6E50: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150B6E54: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x150B6E58: bne         $t7, $t8, L_150B6EC4
    if (ctx->r15 != ctx->r24) {
        // 0x150B6E5C: nop
    
            goto L_150B6EC4;
    }
    // 0x150B6E5C: nop

    // 0x150B6E60: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x150B6E64: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150B6E68: addiu       $at, $zero, 0xAA
    ctx->r1 = ADD32(0, 0XAA);
    // 0x150B6E6C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x150B6E70: nop

    // 0x150B6E74: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150B6E78: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x150B6E7C: nop

    // 0x150B6E80: bc1fl       L_150B6E98
    if (!c1cs) {
        // 0x150B6E84: sub.s       $f0, $f2, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_150B6E98;
    }
    goto skip_0;
    // 0x150B6E84: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    skip_0:
    // 0x150B6E88: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x150B6E8C: b           L_150B6E98
    // 0x150B6E90: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_150B6E98;
    // 0x150B6E90: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x150B6E94: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_150B6E98:
    // 0x150B6E98: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x150B6E9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150B6EA0: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B6EA4: mflo        $t0
    ctx->r8 = lo;
    // 0x150B6EA8: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x150B6EAC: nop

    // 0x150B6EB0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150B6EB4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x150B6EB8: nop

    // 0x150B6EBC: bc1f        L_150B6FB8
    if (!c1cs) {
        // 0x150B6EC0: nop
    
            goto L_150B6FB8;
    }
    // 0x150B6EC0: nop

L_150B6EC4:
    // 0x150B6EC4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150B6EC8: addiu       $a1, $a1, -0x161C
    ctx->r5 = ADD32(ctx->r5, -0X161C);
    // 0x150B6ECC: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x150B6ED0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150B6ED4: lwc1        $f10, 0x30($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150B6ED8: multu       $t1, $a2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150B6EDC: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x150B6EE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B6EE4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150B6EE8: mflo        $t2
    ctx->r10 = lo;
    // 0x150B6EEC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x150B6EF0: nop

    // 0x150B6EF4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150B6EF8: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x150B6EFC: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x150B6F00: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150B6F04: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x150B6F08: nop

    // 0x150B6F0C: bc1fl       L_150B6F5C
    if (!c1cs) {
        // 0x150B6F10: lui         $at, 0x432A
        ctx->r1 = S32(0X432A << 16);
            goto L_150B6F5C;
    }
    goto skip_1;
    // 0x150B6F10: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    skip_1:
    // 0x150B6F14: lh          $t3, 0x26($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X26);
    // 0x150B6F18: lbu         $t6, 0x41($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X41);
    // 0x150B6F1C: addiu       $t4, $t3, 0x100
    ctx->r12 = ADD32(ctx->r11, 0X100);
    // 0x150B6F20: sh          $t4, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r12;
    // 0x150B6F24: lh          $t5, 0x26($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X26);
    // 0x150B6F28: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x150B6F2C: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150B6F30: bnel        $at, $zero, L_150B6F40
    if (ctx->r1 != 0) {
        // 0x150B6F34: lwc1        $f8, 0x30($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
            goto L_150B6F40;
    }
    goto skip_2;
    // 0x150B6F34: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    skip_2:
    // 0x150B6F38: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x150B6F3C: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
L_150B6F40:
    // 0x150B6F40: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x150B6F44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B6F48: sub.s       $f16, $f0, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x150B6F4C: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x150B6F50: swc1        $f10, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f10.u32l;
    // 0x150B6F54: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150B6F58: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
L_150B6F5C:
    // 0x150B6F5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B6F60: nop

    // 0x150B6F64: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150B6F68: nop

    // 0x150B6F6C: bc1fl       L_150B6F90
    if (!c1cs) {
        // 0x150B6F70: sub.s       $f6, $f2, $f0
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_150B6F90;
    }
    goto skip_3;
    // 0x150B6F70: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    skip_3:
    // 0x150B6F74: sub.s       $f18, $f2, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x150B6F78: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x150B6F7C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150B6F80: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x150B6F84: b           L_150B6FA0
    // 0x150B6F88: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
        goto L_150B6FA0;
    // 0x150B6F88: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
    // 0x150B6F8C: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
L_150B6F90:
    // 0x150B6F90: trunc.w.s   $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150B6F94: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x150B6F98: nop

    // 0x150B6F9C: sll         $t0, $v0, 3
    ctx->r8 = S32(ctx->r2 << 3);
L_150B6FA0:
    // 0x150B6FA0: subu        $v1, $t1, $t0
    ctx->r3 = SUB32(ctx->r9, ctx->r8);
    // 0x150B6FA4: bgez        $v1, L_150B6FB0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150B6FA8: nop
    
            goto L_150B6FB0;
    }
    // 0x150B6FA8: nop

    // 0x150B6FAC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150B6FB0:
    // 0x150B6FB0: jr          $ra
    // 0x150B6FB4: sb          $v1, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r3;
    return;
    return;
    // 0x150B6FB4: sb          $v1, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r3;
L_150B6FB8:
    // 0x150B6FB8: bne         $v0, $at, L_150B7030
    if (ctx->r2 != ctx->r1) {
        // 0x150B6FBC: swc1        $f12, 0x30($a0)
        MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
            goto L_150B7030;
    }
    // 0x150B6FBC: swc1        $f12, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
    // 0x150B6FC0: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x150B6FC4: lbu         $v1, 0x45($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X45);
    // 0x150B6FC8: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x150B6FCC: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x150B6FD0: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x150B6FD4: bne         $at, $zero, L_150B7028
    if (ctx->r1 != 0) {
        // 0x150B6FD8: nop
    
            goto L_150B7028;
    }
    // 0x150B6FD8: nop

    // 0x150B6FDC: lw          $t4, 0x20($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X20);
    // 0x150B6FE0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x150B6FE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150B6FE8: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x150B6FEC: bne         $a2, $t6, L_150B7028
    if (ctx->r6 != ctx->r14) {
        // 0x150B6FF0: sw          $t6, 0x20($a0)
        MEM_W(0X20, ctx->r4) = ctx->r14;
            goto L_150B7028;
    }
    // 0x150B6FF0: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x150B6FF4: addiu       $t7, $t7, 0x1918
    ctx->r15 = ADD32(ctx->r15, 0X1918);
    // 0x150B6FF8: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x150B6FFC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150B7000: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x150B7004: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x150B7008: sw          $t7, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r15;
    // 0x150B700C: sb          $t8, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r24;
    // 0x150B7010: sb          $t9, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r25;
    // 0x150B7014: sh          $t1, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r9;
    // 0x150B7018: sh          $t0, 0x3E($a0)
    MEM_H(0X3E, ctx->r4) = ctx->r8;
    // 0x150B701C: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x150B7020: jr          $ra
    // 0x150B7024: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    return;
    return;
    // 0x150B7024: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
L_150B7028:
    // 0x150B7028: jr          $ra
    // 0x150B702C: sb          $v1, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r3;
    return;
    return;
    // 0x150B702C: sb          $v1, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r3;
L_150B7030:
    // 0x150B7030: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150B7034: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150B7038: lwc1        $f2, 0x30($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X30);
    // 0x150B703C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B7040: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150B7044: nop

    // 0x150B7048: bc1fl       L_150B706C
    if (!c1cs) {
        // 0x150B704C: sub.s       $f8, $f2, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_150B706C;
    }
    goto skip_4;
    // 0x150B704C: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    skip_4:
    // 0x150B7050: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x150B7054: neg.s       $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = -ctx->f10.fl;
    // 0x150B7058: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150B705C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x150B7060: b           L_150B707C
    // 0x150B7064: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
        goto L_150B707C;
    // 0x150B7064: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x150B7068: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
L_150B706C:
    // 0x150B706C: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150B7070: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x150B7074: nop

    // 0x150B7078: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
L_150B707C:
    // 0x150B707C: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x150B7080: subu        $v1, $t6, $t4
    ctx->r3 = SUB32(ctx->r14, ctx->r12);
    // 0x150B7084: bgezl       $v1, L_150B7094
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150B7088: sb          $v1, 0x45($a0)
        MEM_B(0X45, ctx->r4) = ctx->r3;
            goto L_150B7094;
    }
    goto skip_5;
    // 0x150B7088: sb          $v1, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r3;
    skip_5:
    // 0x150B708C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150B7090: sb          $v1, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r3;
L_150B7094:
    // 0x150B7094: jr          $ra
    // 0x150B7098: nop

    return;
    return;
    // 0x150B7098: nop

;}
RECOMP_FUNC void func_15010240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15010240: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15010244: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15010248: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1501024C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15010250: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x15010254: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x15010258: lw          $a1, 0x2E4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2E4);
    // 0x1501025C: lw          $a0, 0xE00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE00);
    // 0x15010260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15010264: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x15010268: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x1501026C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15010270: jal         0x15195AA8
    // 0x15010274: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_0;
    // 0x15010274: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x15010278: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x1501027C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x15010280: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15010284: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x15010288: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x1501028C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15010290: lw          $a1, 0x2E4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2E4);
    // 0x15010294: lw          $a0, 0xE04($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XE04);
    // 0x15010298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1501029C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150102A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150102A4: jal         0x15195AA8
    // 0x150102A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_15195AA8(rdram, ctx);
        goto after_1;
    // 0x150102A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x150102AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150102B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150102B4: jr          $ra
    // 0x150102B8: nop

    return;
    return;
    // 0x150102B8: nop

;}
RECOMP_FUNC void func_151A2960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A2960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151A2964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151A2968: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x151A296C: lh          $a2, 0x1A($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X1A);
    // 0x151A2970: lh          $t6, 0xB0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XB0);
    // 0x151A2974: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151A2978: addiu       $v0, $a0, 0xB0
    ctx->r2 = ADD32(ctx->r4, 0XB0);
    // 0x151A297C: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x151A2980: beq         $at, $zero, L_151A299C
    if (ctx->r1 == 0) {
        // 0x151A2984: nop
    
            goto L_151A299C;
    }
    // 0x151A2984: nop

    // 0x151A2988: lh          $t7, 0xB2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XB2);
    // 0x151A298C: multu       $a2, $t7
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A2990: mflo        $t8
    ctx->r24 = lo;
    // 0x151A2994: sb          $t8, 0x2C($a0)
    MEM_B(0X2C, ctx->r4) = ctx->r24;
    // 0x151A2998: nop

L_151A299C:
    // 0x151A299C: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x151A29A0: bne         $t9, $zero, L_151A29FC
    if (ctx->r25 != 0) {
        // 0x151A29A4: nop
    
            goto L_151A29FC;
    }
    // 0x151A29A4: nop

    // 0x151A29A8: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x151A29AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151A29B0: beq         $a3, $a1, L_151A29FC
    if (ctx->r7 == ctx->r5) {
        // 0x151A29B4: nop
    
            goto L_151A29FC;
    }
    // 0x151A29B4: nop

    // 0x151A29B8: lb          $v1, 0x6($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X6);
    // 0x151A29BC: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x151A29C0: beq         $a3, $v1, L_151A29FC
    if (ctx->r7 == ctx->r3) {
        // 0x151A29C4: nop
    
            goto L_151A29FC;
    }
    // 0x151A29C4: nop

    // 0x151A29C8: bne         $at, $zero, L_151A29FC
    if (ctx->r1 != 0) {
        // 0x151A29CC: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_151A29FC;
    }
    // 0x151A29CC: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x151A29D0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x151A29D4: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x151A29D8: lw          $t9, -0x720($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X720);
    // 0x151A29DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x151A29E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151A29E4: jalr        $t9
    // 0x151A29E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151A29E8: nop

    after_0:
    // 0x151A29EC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151A29F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151A29F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151A29F8: sh          $a3, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r7;
L_151A29FC:
    // 0x151A29FC: jal         0x1513170C
    // 0x151A2A00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_1513170C(rdram, ctx);
        goto after_1;
    // 0x151A2A00: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x151A2A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151A2A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151A2A0C: jr          $ra
    // 0x151A2A10: nop

    return;
    return;
    // 0x151A2A10: nop

;}
RECOMP_FUNC void func_15013C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15013C38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15013C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15013C40: lbu         $t6, 0x16($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X16);
    // 0x15013C44: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x15013C48: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x15013C4C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x15013C50: sb          $t7, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r15;
    // 0x15013C54: lw          $t8, 0x2E4C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2E4C);
    // 0x15013C58: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15013C5C: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x15013C60: lbu         $t9, 0x11($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X11);
    // 0x15013C64: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x15013C68: beq         $t0, $zero, L_15013C88
    if (ctx->r8 == 0) {
        // 0x15013C6C: nop
    
            goto L_15013C88;
    }
    // 0x15013C6C: nop

    // 0x15013C70: lw          $t1, -0x1610($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1610);
    // 0x15013C74: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x15013C78: bne         $t1, $at, L_15013C88
    if (ctx->r9 != ctx->r1) {
        // 0x15013C7C: nop
    
            goto L_15013C88;
    }
    // 0x15013C7C: nop

    // 0x15013C80: b           L_15013D28
    // 0x15013C84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15013D28;
    // 0x15013C84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013C88:
    // 0x15013C88: lbu         $t2, 0x35EA($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X35EA);
    // 0x15013C8C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15013C90: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15013C94: bnel        $t2, $at, L_15013CC8
    if (ctx->r10 != ctx->r1) {
        // 0x15013C98: slti        $at, $v1, 0x6
        ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_15013CC8;
    }
    goto skip_0;
    // 0x15013C98: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    skip_0:
    // 0x15013C9C: lbu         $v0, 0x35E8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X35E8);
    // 0x15013CA0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15013CA4: beq         $v0, $at, L_15013CBC
    if (ctx->r2 == ctx->r1) {
        // 0x15013CA8: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_15013CBC;
    }
    // 0x15013CA8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x15013CAC: beq         $v0, $at, L_15013CBC
    if (ctx->r2 == ctx->r1) {
        // 0x15013CB0: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_15013CBC;
    }
    // 0x15013CB0: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x15013CB4: bnel        $v0, $at, L_15013CC8
    if (ctx->r2 != ctx->r1) {
        // 0x15013CB8: slti        $at, $v1, 0x6
        ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_15013CC8;
    }
    goto skip_1;
    // 0x15013CB8: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    skip_1:
L_15013CBC:
    // 0x15013CBC: b           L_15013D28
    // 0x15013CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15013D28;
    // 0x15013CC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15013CC4: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
L_15013CC8:
    // 0x15013CC8: bne         $at, $zero, L_15013CD8
    if (ctx->r1 != 0) {
        // 0x15013CCC: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_15013CD8;
    }
    // 0x15013CCC: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x15013CD0: b           L_15013D28
    // 0x15013CD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15013D28;
    // 0x15013CD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013CD8:
    // 0x15013CD8: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x15013CDC: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x15013CE0: lw          $v0, 0x2F28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2F28);
    // 0x15013CE4: beql        $v0, $zero, L_15013D28
    if (ctx->r2 == 0) {
        // 0x15013CE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15013D28;
    }
    goto skip_2;
    // 0x15013CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x15013CEC: lw          $t4, 0x1C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X1C);
    // 0x15013CF0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15013CF4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15013CF8: bgez        $t4, L_15013D0C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x15013CFC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_15013D0C;
    }
    // 0x15013CFC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15013D00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15013D04: nop

    // 0x15013D08: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_15013D0C:
    // 0x15013D0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15013D10: lwc1        $f10, 0x6650($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6650);
    // 0x15013D14: mul.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x15013D18: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x15013D1C: jalr        $v0
    // 0x15013D20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x15013D20: nop

    after_0:
    // 0x15013D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15013D28:
    // 0x15013D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15013D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15013D30: jr          $ra
    // 0x15013D34: nop

    return;
    return;
    // 0x15013D34: nop

;}
RECOMP_FUNC void func_15075D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075DA4: jal         0x15075548
    // 0x15075DA8: nop

    func_15075548(rdram, ctx);
        goto after_0;
    // 0x15075DA8: nop

    after_0:
    // 0x15075DAC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15075DB0: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15075DB4: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x15075DB8: sb          $t6, 0x223($t7)
    MEM_B(0X223, ctx->r15) = ctx->r14;
    // 0x15075DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075DC0: jr          $ra
    // 0x15075DC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15075DC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151A9390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A9390: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x151A9394: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x151A9398: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151A939C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x151A93A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151A93A4: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x151A93A8: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x151A93AC: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x151A93B0: lbu         $t7, 0x9F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X9F);
    // 0x151A93B4: andi        $t8, $a0, 0x1
    ctx->r24 = ctx->r4 & 0X1;
    // 0x151A93B8: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x151A93BC: slti        $at, $t7, 0x9
    ctx->r1 = SIGNED(ctx->r15) < 0X9 ? 1 : 0;
    // 0x151A93C0: beq         $at, $zero, L_151A9624
    if (ctx->r1 == 0) {
        // 0x151A93C4: addiu       $a2, $zero, 0x2C
        ctx->r6 = ADD32(0, 0X2C);
            goto L_151A9624;
    }
    // 0x151A93C4: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x151A93C8: beq         $t8, $zero, L_151A93D8
    if (ctx->r24 == 0) {
        // 0x151A93CC: or          $t0, $a0, $zero
        ctx->r8 = ctx->r4 | 0;
            goto L_151A93D8;
    }
    // 0x151A93CC: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x151A93D0: b           L_151A93DC
    // 0x151A93D4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_151A93DC;
    // 0x151A93D4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_151A93D8:
    // 0x151A93D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_151A93DC:
    // 0x151A93DC: beq         $t9, $zero, L_151A93EC
    if (ctx->r25 == 0) {
        // 0x151A93E0: andi        $t4, $t0, 0x2
        ctx->r12 = ctx->r8 & 0X2;
            goto L_151A93EC;
    }
    // 0x151A93E0: andi        $t4, $t0, 0x2
    ctx->r12 = ctx->r8 & 0X2;
    // 0x151A93E4: b           L_151A93F0
    // 0x151A93E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_151A93F0;
    // 0x151A93E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_151A93EC:
    // 0x151A93EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_151A93F0:
    // 0x151A93F0: beq         $t4, $zero, L_151A9400
    if (ctx->r12 == 0) {
        // 0x151A93F4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151A9400;
    }
    // 0x151A93F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151A93F8: b           L_151A9400
    // 0x151A93FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_151A9400;
    // 0x151A93FC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_151A9400:
    // 0x151A9400: lbu         $t9, 0x9F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X9F);
    // 0x151A9404: ori         $t5, $v0, 0x1
    ctx->r13 = ctx->r2 | 0X1;
    // 0x151A9408: or          $t6, $t5, $a1
    ctx->r14 = ctx->r13 | ctx->r5;
    // 0x151A940C: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x151A9410: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151A9414: addu        $t4, $t4, $t9
    ctx->r12 = ADD32(ctx->r12, ctx->r25);
    // 0x151A9418: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x151A941C: addiu       $t5, $t5, -0x654
    ctx->r13 = ADD32(ctx->r13, -0X654);
    // 0x151A9420: or          $t7, $t6, $a0
    ctx->r15 = ctx->r14 | ctx->r4;
    // 0x151A9424: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x151A9428: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x151A942C: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x151A9430: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151A9434: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151A9438: sb          $t7, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r15;
    // 0x151A943C: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x151A9440: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x151A9444: beq         $t6, $zero, L_151A946C
    if (ctx->r14 == 0) {
        // 0x151A9448: swc1        $f6, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
            goto L_151A946C;
    }
    // 0x151A9448: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x151A944C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151A9450: addiu       $t7, $sp, 0x80
    ctx->r15 = ADD32(ctx->r29, 0X80);
    // 0x151A9454: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151A9458: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x151A945C: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x151A9460: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x151A9464: b           L_151A9480
    // 0x151A9468: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
        goto L_151A9480;
    // 0x151A9468: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
L_151A946C:
    // 0x151A946C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151A9470: nop

    // 0x151A9474: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x151A9478: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x151A947C: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
L_151A9480:
    // 0x151A9480: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x151A9484: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x151A9488: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x151A948C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x151A9490: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151A9494: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151A9498: sb          $t4, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r12;
    // 0x151A949C: sb          $t5, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r13;
    // 0x151A94A0: sb          $t8, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r24;
    // 0x151A94A4: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x151A94A8: lh          $a1, 0xB2($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XB2);
    // 0x151A94AC: lbu         $a3, 0xB7($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XB7);
    // 0x151A94B0: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x151A94B4: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x151A94B8: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x151A94BC: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x151A94C0: jal         0x151A8B20
    // 0x151A94C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_151A8B20(rdram, ctx);
        goto after_0;
    // 0x151A94C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x151A94C8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x151A94CC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x151A94D0: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x151A94D4: lh          $t2, 0xB2($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XB2);
    // 0x151A94D8: beq         $v0, $zero, L_151A9540
    if (ctx->r2 == 0) {
        // 0x151A94DC: lw          $t3, 0xA0($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA0);
            goto L_151A9540;
    }
    // 0x151A94DC: lw          $t3, 0xA0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA0);
    // 0x151A94E0: addiu       $a0, $v0, 0x80
    ctx->r4 = ADD32(ctx->r2, 0X80);
    // 0x151A94E4: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    // 0x151A94E8: lw          $a1, 0x10($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X10);
    // 0x151A94EC: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x151A94F0: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x151A94F4: jal         0x10022EC0
    // 0x151A94F8: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151A94F8: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_1:
    // 0x151A94FC: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x151A9500: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x151A9504: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x151A9508: andi        $t6, $t0, 0x8
    ctx->r14 = ctx->r8 & 0X8;
    // 0x151A950C: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x151A9510: lh          $t2, 0xB2($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XB2);
    // 0x151A9514: beq         $t6, $zero, L_151A9528
    if (ctx->r14 == 0) {
        // 0x151A9518: lw          $t3, 0xA0($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA0);
            goto L_151A9528;
    }
    // 0x151A9518: lw          $t3, 0xA0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA0);
    // 0x151A951C: lbu         $t9, 0x28($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X28);
    // 0x151A9520: ori         $t4, $t9, 0x1
    ctx->r12 = ctx->r25 | 0X1;
    // 0x151A9524: sb          $t4, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r12;
L_151A9528:
    // 0x151A9528: andi        $t5, $t0, 0x10
    ctx->r13 = ctx->r8 & 0X10;
    // 0x151A952C: beql        $t5, $zero, L_151A9544
    if (ctx->r13 == 0) {
        // 0x151A9530: andi        $t6, $t0, 0x4
        ctx->r14 = ctx->r8 & 0X4;
            goto L_151A9544;
    }
    goto skip_0;
    // 0x151A9530: andi        $t6, $t0, 0x4
    ctx->r14 = ctx->r8 & 0X4;
    skip_0:
    // 0x151A9534: lbu         $t8, 0x28($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X28);
    // 0x151A9538: ori         $t7, $t8, 0x2
    ctx->r15 = ctx->r24 | 0X2;
    // 0x151A953C: sb          $t7, 0x28($a0)
    MEM_B(0X28, ctx->r4) = ctx->r15;
L_151A9540:
    // 0x151A9540: andi        $t6, $t0, 0x4
    ctx->r14 = ctx->r8 & 0X4;
L_151A9544:
    // 0x151A9544: beq         $t6, $zero, L_151A9624
    if (ctx->r14 == 0) {
        // 0x151A9548: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_151A9624;
    }
    // 0x151A9548: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x151A954C: bne         $t2, $a0, L_151A955C
    if (ctx->r10 != ctx->r4) {
        // 0x151A9550: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_151A955C;
    }
    // 0x151A9550: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x151A9554: b           L_151A9560
    // 0x151A9558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151A9560;
    // 0x151A9558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151A955C:
    // 0x151A955C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151A9560:
    // 0x151A9560: ori         $t9, $v0, 0x2
    ctx->r25 = ctx->r2 | 0X2;
    // 0x151A9564: sb          $t9, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r25;
    // 0x151A9568: bne         $t2, $a0, L_151A957C
    if (ctx->r10 != ctx->r4) {
        // 0x151A956C: sb          $t4, 0x61($sp)
        MEM_B(0X61, ctx->r29) = ctx->r12;
            goto L_151A957C;
    }
    // 0x151A956C: sb          $t4, 0x61($sp)
    MEM_B(0X61, ctx->r29) = ctx->r12;
    // 0x151A9570: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x151A9574: b           L_151A9580
    // 0x151A9578: sh          $t5, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r13;
        goto L_151A9580;
    // 0x151A9578: sh          $t5, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r13;
L_151A957C:
    // 0x151A957C: sh          $t2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r10;
L_151A9580:
    // 0x151A9580: lbu         $t8, 0xB($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XB);
    // 0x151A9584: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x151A9588: beq         $t1, $zero, L_151A95CC
    if (ctx->r9 == 0) {
        // 0x151A958C: sb          $t8, 0x64($sp)
        MEM_B(0X64, ctx->r29) = ctx->r24;
            goto L_151A95CC;
    }
    // 0x151A958C: sb          $t8, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r24;
    // 0x151A9590: lwc1        $f16, 0x0($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X0);
    // 0x151A9594: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151A9598: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x151A959C: nop

    // 0x151A95A0: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x151A95A4: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x151A95A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A95AC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x151A95B0: nop

    // 0x151A95B4: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x151A95B8: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x151A95BC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151A95C0: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x151A95C4: b           L_151A95E4
    // 0x151A95C8: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
        goto L_151A95E4;
    // 0x151A95C8: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
L_151A95CC:
    // 0x151A95CC: lh          $t7, 0x0($t3)
    ctx->r15 = MEM_H(ctx->r11, 0X0);
    // 0x151A95D0: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x151A95D4: lh          $t6, 0x2($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X2);
    // 0x151A95D8: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x151A95DC: lh          $t9, 0x4($t3)
    ctx->r25 = MEM_H(ctx->r11, 0X4);
    // 0x151A95E0: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
L_151A95E4:
    // 0x151A95E4: lbu         $t4, 0xA($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0XA);
    // 0x151A95E8: lbu         $t8, 0xC($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XC);
    // 0x151A95EC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151A95F0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151A95F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151A95F8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x151A95FC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151A9600: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151A9604: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x151A9608: lbu         $a2, 0x8($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X8);
    // 0x151A960C: lbu         $a3, 0x9($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X9);
    // 0x151A9610: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x151A9614: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151A9618: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151A961C: jal         0x1516284C
    // 0x151A9620: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_1516284C(rdram, ctx);
        goto after_2;
    // 0x151A9620: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_2:
L_151A9624:
    // 0x151A9624: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151A9628: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x151A962C: jr          $ra
    // 0x151A9630: nop

    return;
    return;
    // 0x151A9630: nop

;}
RECOMP_FUNC void func_1515589C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515589C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x151558A0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151558A4: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x151558A8: addiu       $a3, $a3, -0x3D30
    ctx->r7 = ADD32(ctx->r7, -0X3D30);
    // 0x151558AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151558B0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151558B4: lbu         $a2, 0x10($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X10);
    // 0x151558B8: lbu         $v1, 0x11($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X11);
    // 0x151558BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151558C0: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x151558C4: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x151558C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151558CC: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x151558D0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151558D4: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x151558D8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151558DC: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x151558E0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x151558E4: beq         $v1, $zero, L_15155910
    if (ctx->r3 == 0) {
        // 0x151558E8: addu        $t0, $a3, $t6
        ctx->r8 = ADD32(ctx->r7, ctx->r14);
            goto L_15155910;
    }
    // 0x151558E8: addu        $t0, $a3, $t6
    ctx->r8 = ADD32(ctx->r7, ctx->r14);
    // 0x151558EC: beq         $v1, $at, L_15155A00
    if (ctx->r3 == ctx->r1) {
        // 0x151558F0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15155A00;
    }
    // 0x151558F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151558F4: beq         $v1, $at, L_15155B98
    if (ctx->r3 == ctx->r1) {
        // 0x151558F8: sll         $t6, $a2, 2
        ctx->r14 = S32(ctx->r6 << 2);
            goto L_15155B98;
    }
    // 0x151558F8: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x151558FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15155900: beq         $v1, $at, L_15155BEC
    if (ctx->r3 == ctx->r1) {
        // 0x15155904: nop
    
            goto L_15155BEC;
    }
    // 0x15155904: nop

    // 0x15155908: b           L_15155CEC
    // 0x1515590C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15155CEC;
    // 0x1515590C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15155910:
    // 0x15155910: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x15155914: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x15155918: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1515591C: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x15155920: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15155924: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x15155928: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1515592C: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x15155930: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15155934: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x15155938: lw          $v1, 0x31C($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X31C);
    // 0x1515593C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15155940: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x15155944: beq         $v1, $zero, L_15155954
    if (ctx->r3 == 0) {
        // 0x15155948: nop
    
            goto L_15155954;
    }
    // 0x15155948: nop

    // 0x1515594C: b           L_15155954
    // 0x15155950: lbu         $v0, 0x75($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X75);
        goto L_15155954;
    // 0x15155950: lbu         $v0, 0x75($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X75);
L_15155954:
    // 0x15155954: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x15155958: bnel        $t9, $zero, L_151559E8
    if (ctx->r25 != 0) {
        // 0x1515595C: lw          $a1, 0x14($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X14);
            goto L_151559E8;
    }
    goto skip_0;
    // 0x1515595C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x15155960: beq         $v0, $at, L_151559E4
    if (ctx->r2 == ctx->r1) {
        // 0x15155964: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_151559E4;
    }
    // 0x15155964: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x15155968: beq         $v0, $at, L_151559E4
    if (ctx->r2 == ctx->r1) {
        // 0x1515596C: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_151559E4;
    }
    // 0x1515596C: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x15155970: bne         $v0, $at, L_15155984
    if (ctx->r2 != ctx->r1) {
        // 0x15155974: lui         $t1, 0x800D
        ctx->r9 = S32(0X800D << 16);
            goto L_15155984;
    }
    // 0x15155974: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15155978: lbu         $t1, 0x2E68($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X2E68);
    // 0x1515597C: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x15155980: bne         $t2, $zero, L_151559E4
    if (ctx->r10 != 0) {
        // 0x15155984: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_151559E4;
    }
L_15155984:
    // 0x15155984: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x15155988: beql        $v0, $at, L_151559E8
    if (ctx->r2 == ctx->r1) {
        // 0x1515598C: lw          $a1, 0x14($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X14);
            goto L_151559E8;
    }
    goto skip_1;
    // 0x1515598C: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    skip_1:
    // 0x15155990: lbu         $t3, 0x197($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X197);
    // 0x15155994: bnel        $t3, $zero, L_151559E8
    if (ctx->r11 != 0) {
        // 0x15155998: lw          $a1, 0x14($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X14);
            goto L_151559E8;
    }
    goto skip_2;
    // 0x15155998: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    skip_2:
    // 0x1515599C: beq         $v0, $zero, L_151559E4
    if (ctx->r2 == 0) {
        // 0x151559A0: addiu       $at, $zero, 0x1F
        ctx->r1 = ADD32(0, 0X1F);
            goto L_151559E4;
    }
    // 0x151559A0: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x151559A4: beql        $v0, $at, L_151559E8
    if (ctx->r2 == ctx->r1) {
        // 0x151559A8: lw          $a1, 0x14($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X14);
            goto L_151559E8;
    }
    goto skip_3;
    // 0x151559A8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    skip_3:
    // 0x151559AC: lbu         $t4, 0xAD($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0XAD);
    // 0x151559B0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151559B4: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x151559B8: bne         $t4, $zero, L_151559E4
    if (ctx->r12 != 0) {
        // 0x151559BC: addiu       $a0, $zero, 0x1EB
        ctx->r4 = ADD32(0, 0X1EB);
            goto L_151559E4;
    }
    // 0x151559BC: addiu       $a0, $zero, 0x1EB
    ctx->r4 = ADD32(0, 0X1EB);
    // 0x151559C0: sb          $t5, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r13;
    // 0x151559C4: sh          $t6, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r14;
    // 0x151559C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151559CC: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x151559D0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x151559D4: jal         0x10010F30
    // 0x151559D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10010F30(rdram, ctx);
        goto after_0;
    // 0x151559D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151559DC: b           L_15155CEC
    // 0x151559E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15155CEC;
    // 0x151559E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_151559E4:
    // 0x151559E4: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
L_151559E8:
    // 0x151559E8: beql        $a1, $zero, L_15155CEC
    if (ctx->r5 == 0) {
        // 0x151559EC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15155CEC;
    }
    goto skip_4;
    // 0x151559EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_4:
    // 0x151559F0: jal         0x1515F10C
    // 0x151559F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1515F10C(rdram, ctx);
        goto after_1;
    // 0x151559F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x151559F8: b           L_15155CE8
    // 0x151559FC: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
        goto L_15155CE8;
    // 0x151559FC: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_15155A00:
    // 0x15155A00: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15155A04: addiu       $v1, $v1, -0x161C
    ctx->r3 = ADD32(ctx->r3, -0X161C);
    // 0x15155A08: lh          $v0, 0xE($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE);
    // 0x15155A0C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x15155A10: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x15155A14: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15155A18: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x15155A1C: blez        $v0, L_15155A4C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x15155A20: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15155A4C;
    }
    // 0x15155A20: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155A24: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x15155A28: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155A2C: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15155A30: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155A34: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15155A38: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155A3C: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x15155A40: lw          $t1, 0x31C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X31C);
    // 0x15155A44: lbu         $t2, 0x75($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X75);
    // 0x15155A48: bne         $t2, $zero, L_15155A58
    if (ctx->r10 != 0) {
        // 0x15155A4C: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_15155A58;
    }
L_15155A4C:
    // 0x15155A4C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x15155A50: sb          $t3, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r11;
    // 0x15155A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15155A58:
    // 0x15155A58: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x15155A5C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15155A60: lbu         $t4, 0x12($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X12);
    // 0x15155A64: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x15155A68: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x15155A6C: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x15155A70: beq         $a1, $zero, L_15155B54
    if (ctx->r5 == 0) {
        // 0x15155A74: sb          $t7, 0x12($s0)
        MEM_B(0X12, ctx->r16) = ctx->r15;
            goto L_15155B54;
    }
    // 0x15155A74: sb          $t7, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r15;
    // 0x15155A78: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x15155A7C: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15155A80: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155A84: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x15155A88: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155A8C: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15155A90: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155A94: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15155A98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15155A9C: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x15155AA0: lw          $t1, 0x31C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X31C);
    // 0x15155AA4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15155AA8: lbu         $t2, 0x75($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X75);
    // 0x15155AAC: bne         $t2, $at, L_15155AC0
    if (ctx->r10 != ctx->r1) {
        // 0x15155AB0: lui         $at, 0x42AA
        ctx->r1 = S32(0X42AA << 16);
            goto L_15155AC0;
    }
    // 0x15155AB0: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x15155AB4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15155AB8: b           L_15155ACC
    // 0x15155ABC: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
        goto L_15155ACC;
    // 0x15155ABC: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
L_15155AC0:
    // 0x15155AC0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15155AC4: nop

    // 0x15155AC8: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
L_15155ACC:
    // 0x15155ACC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15155AD0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x15155AD4: nop

    // 0x15155AD8: sh          $t5, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r13;
    // 0x15155ADC: lbu         $a0, 0x12($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X12);
    // 0x15155AE0: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x15155AE4: jal         0x15048A40
    // 0x15155AE8: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_15048A40(rdram, ctx);
        goto after_2;
    // 0x15155AE8: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_2:
    // 0x15155AEC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x15155AF0: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x15155AF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15155AF8: lwc1        $f8, 0x18($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X18);
    // 0x15155AFC: lwc1        $f18, 0x98($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X98);
    // 0x15155B00: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x15155B04: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15155B08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15155B0C: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15155B10: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x15155B14: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15155B18: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15155B1C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x15155B20: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15155B24: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15155B28: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x15155B2C: nop

    // 0x15155B30: sh          $t6, 0x10($t7)
    MEM_H(0X10, ctx->r15) = ctx->r14;
    // 0x15155B34: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x15155B38: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x15155B3C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15155B40: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15155B44: nop

    // 0x15155B48: sh          $t9, 0x12($t1)
    MEM_H(0X12, ctx->r9) = ctx->r25;
    // 0x15155B4C: b           L_15155CEC
    // 0x15155B50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_15155CEC;
    // 0x15155B50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15155B54:
    // 0x15155B54: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x15155B58: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15155B5C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x15155B60: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x15155B64: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x15155B68: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x15155B6C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x15155B70: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15155B74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15155B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15155B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15155B80: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15155B84: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15155B88: jal         0x1515D5F8
    // 0x15155B8C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_1515D5F8(rdram, ctx);
        goto after_3;
    // 0x15155B8C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_3:
    // 0x15155B90: b           L_15155CE8
    // 0x15155B94: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
        goto L_15155CE8;
    // 0x15155B94: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_15155B98:
    // 0x15155B98: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x15155B9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15155BA0: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x15155BA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15155BA8: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x15155BAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15155BB0: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x15155BB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15155BB8: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x15155BBC: lw          $t8, 0x31C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X31C);
    // 0x15155BC0: lbu         $t9, 0x75($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X75);
    // 0x15155BC4: bnel        $t9, $zero, L_15155BD4
    if (ctx->r25 != 0) {
        // 0x15155BC8: lw          $a1, 0x14($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X14);
            goto L_15155BD4;
    }
    goto skip_5;
    // 0x15155BC8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    skip_5:
    // 0x15155BCC: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
    // 0x15155BD0: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
L_15155BD4:
    // 0x15155BD4: beql        $a1, $zero, L_15155CEC
    if (ctx->r5 == 0) {
        // 0x15155BD8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_15155CEC;
    }
    goto skip_6;
    // 0x15155BD8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_6:
    // 0x15155BDC: jal         0x1515F10C
    // 0x15155BE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_1515F10C(rdram, ctx);
        goto after_4;
    // 0x15155BE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
    // 0x15155BE4: b           L_15155CE8
    // 0x15155BE8: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
        goto L_15155CE8;
    // 0x15155BE8: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_15155BEC:
    // 0x15155BEC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15155BF0: addiu       $v1, $v1, -0x161C
    ctx->r3 = ADD32(ctx->r3, -0X161C);
    // 0x15155BF4: lh          $v0, 0xE($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE);
    // 0x15155BF8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x15155BFC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x15155C00: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x15155C04: bgtzl       $v0, L_15155C1C
    if (SIGNED(ctx->r2) > 0) {
        // 0x15155C08: sh          $v0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r2;
            goto L_15155C1C;
    }
    goto skip_7;
    // 0x15155C08: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    skip_7:
    // 0x15155C0C: sb          $t2, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r10;
    // 0x15155C10: b           L_15155CE8
    // 0x15155C14: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
        goto L_15155CE8;
    // 0x15155C14: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x15155C18: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_15155C1C:
    // 0x15155C1C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x15155C20: lbu         $t3, 0x12($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X12);
    // 0x15155C24: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x15155C28: sll         $t4, $t5, 1
    ctx->r12 = S32(ctx->r13 << 1);
    // 0x15155C2C: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x15155C30: beq         $a1, $zero, L_15155CA8
    if (ctx->r5 == 0) {
        // 0x15155C34: sb          $t6, 0x12($s0)
        MEM_B(0X12, ctx->r16) = ctx->r14;
            goto L_15155CA8;
    }
    // 0x15155C34: sb          $t6, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r14;
    // 0x15155C38: lwc1        $f10, 0x14($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X14);
    // 0x15155C3C: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15155C40: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15155C44: nop

    // 0x15155C48: sh          $t8, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r24;
    // 0x15155C4C: lbu         $a0, 0x12($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X12);
    // 0x15155C50: jal         0x15048A40
    // 0x15155C54: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_15048A40(rdram, ctx);
        goto after_5;
    // 0x15155C54: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_5:
    // 0x15155C58: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x15155C5C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15155C60: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x15155C64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15155C68: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x15155C6C: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x15155C70: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15155C74: lwc1        $f16, 0x18($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X18);
    // 0x15155C78: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15155C7C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15155C80: trunc.w.s   $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15155C84: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x15155C88: nop

    // 0x15155C8C: sh          $t1, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r9;
    // 0x15155C90: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x15155C94: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x15155C98: trunc.w.s   $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15155C9C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x15155CA0: b           L_15155CE8
    // 0x15155CA4: sh          $t3, 0x12($t4)
    MEM_H(0X12, ctx->r12) = ctx->r11;
        goto L_15155CE8;
    // 0x15155CA4: sh          $t3, 0x12($t4)
    MEM_H(0X12, ctx->r12) = ctx->r11;
L_15155CA8:
    // 0x15155CA8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x15155CAC: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x15155CB0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x15155CB4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x15155CB8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15155CBC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15155CC0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15155CC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15155CC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15155CCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15155CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15155CD4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15155CD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15155CDC: jal         0x1515D5F8
    // 0x15155CE0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_1515D5F8(rdram, ctx);
        goto after_6;
    // 0x15155CE0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_6:
    // 0x15155CE4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
L_15155CE8:
    // 0x15155CE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_15155CEC:
    // 0x15155CEC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x15155CF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x15155CF4: jr          $ra
    // 0x15155CF8: nop

    return;
    return;
    // 0x15155CF8: nop

;}
RECOMP_FUNC void func_151D8DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D8DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D8DF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151D8DF4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151D8DF8: sb          $t6, 0xA00($at)
    MEM_B(0XA00, ctx->r1) = ctx->r14;
    // 0x151D8DFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151D8E00: jal         0x151D8DB4
    // 0x151D8E04: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    func_151D8DB4(rdram, ctx);
        goto after_0;
    // 0x151D8E04: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    after_0:
    // 0x151D8E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D8E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D8E10: jr          $ra
    // 0x151D8E14: nop

    return;
    return;
    // 0x151D8E14: nop

;}
RECOMP_FUNC void func_151C6D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C6D70: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151C6D74: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x151C6D78: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151C6D7C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151C6D80: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x151C6D84: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x151C6D88: jal         0x150ADA68
    // 0x151C6D8C: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x151C6D8C: nop

    after_0:
    // 0x151C6D90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C6D94: lwc1        $f4, -0x53F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X53F0);
    // 0x151C6D98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C6D9C: lwc1        $f8, -0x53EC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X53EC);
    // 0x151C6DA0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C6DA4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C6DA8: jal         0x150ADA68
    // 0x151C6DAC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151C6DAC: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x151C6DB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C6DB4: lwc1        $f16, -0x53E8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X53E8);
    // 0x151C6DB8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C6DBC: lwc1        $f4, -0x53E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X53E4);
    // 0x151C6DC0: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151C6DC4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151C6DC8: jal         0x150ADA20
    // 0x151C6DCC: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151C6DCC: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x151C6DD0: jal         0x150ADA20
    // 0x151C6DD4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151C6DD4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_3:
    // 0x151C6DD8: jal         0x150ADA68
    // 0x151C6DDC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x151C6DDC: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_4:
    // 0x151C6DE0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x151C6DE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C6DE8: lbu         $v1, 0x5F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X5F);
    // 0x151C6DEC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151C6DF0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151C6DF4: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x151C6DF8: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x151C6DFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C6E00: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x151C6E04: lwc1        $f16, -0x53E0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X53E0);
    // 0x151C6E08: lw          $a1, -0x5500($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5500);
    // 0x151C6E0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x151C6E10: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x151C6E14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x151C6E18: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151C6E1C: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151C6E20: addiu       $t0, $t0, -0x54E0
    ctx->r8 = ADD32(ctx->r8, -0X54E0);
    // 0x151C6E24: addiu       $t9, $t9, -0x54F8
    ctx->r25 = ADD32(ctx->r25, -0X54F8);
    // 0x151C6E28: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151C6E2C: addu        $a2, $v0, $t9
    ctx->r6 = ADD32(ctx->r2, ctx->r25);
    // 0x151C6E30: addu        $a3, $v0, $t0
    ctx->r7 = ADD32(ctx->r2, ctx->r8);
    // 0x151C6E34: srl         $t7, $a1, 6
    ctx->r15 = S32(U32(ctx->r5) >> 6);
    // 0x151C6E38: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x151C6E3C: lbu         $t9, 0x6B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X6B);
    // 0x151C6E40: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x151C6E44: lh          $t8, 0x66($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X66);
    // 0x151C6E48: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x151C6E4C: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x151C6E50: addiu       $t4, $t3, 0x6
    ctx->r12 = ADD32(ctx->r11, 0X6);
    // 0x151C6E54: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151C6E58: addiu       $t1, $sp, 0x50
    ctx->r9 = ADD32(ctx->r29, 0X50);
    // 0x151C6E5C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151C6E60: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x151C6E64: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151C6E68: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151C6E6C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151C6E70: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x151C6E74: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x151C6E78: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151C6E7C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x151C6E80: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x151C6E84: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x151C6E88: jal         0x15102B38
    // 0x151C6E8C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    func_15102B38(rdram, ctx);
        goto after_5;
    // 0x151C6E8C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_5:
    // 0x151C6E90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151C6E94: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151C6E98: jr          $ra
    // 0x151C6E9C: nop

    return;
    return;
    // 0x151C6E9C: nop

;}
RECOMP_FUNC void func_15071668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507166C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071670: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15071674: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15071678: jal         0x151D0024
    // 0x1507167C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    func_151D0024(rdram, ctx);
        goto after_0;
    // 0x1507167C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    after_0:
    // 0x15071680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15071684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15071688: jr          $ra
    // 0x1507168C: nop

    return;
    return;
    // 0x1507168C: nop

;}
RECOMP_FUNC void func_15024130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15024130: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15024134: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x15024138: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1502413C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x15024140: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15024144: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15024148: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1502414C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x15024150: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15024154: blez        $s2, L_15024194
    if (SIGNED(ctx->r18) <= 0) {
        // 0x15024158: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_15024194;
    }
    // 0x15024158: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502415C: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x15024160: addiu       $s4, $s4, 0x3D50
    ctx->r20 = ADD32(ctx->r20, 0X3D50);
    // 0x15024164: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_15024168:
    // 0x15024168: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x1502416C: addu        $v0, $t6, $s1
    ctx->r2 = ADD32(ctx->r14, ctx->r17);
    // 0x15024170: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15024174: lbu         $a1, 0x8($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X8);
    // 0x15024178: lhu         $a2, 0xA($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0XA);
    // 0x1502417C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x15024180: jal         0x1502A8A0
    // 0x15024184: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    func_1502A8A0(rdram, ctx);
        goto after_0;
    // 0x15024184: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    after_0:
    // 0x15024188: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1502418C: bne         $s0, $s2, L_15024168
    if (ctx->r16 != ctx->r18) {
        // 0x15024190: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_15024168;
    }
    // 0x15024190: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_15024194:
    // 0x15024194: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x15024198: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1502419C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x150241A0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x150241A4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x150241A8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x150241AC: jr          $ra
    // 0x150241B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x150241B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151D9B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9B8C: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x151D9B90: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151D9B94: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x151D9B98: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x151D9B9C: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x151D9BA0: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x151D9BA4: lbu         $t8, 0xDB($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XDB);
    // 0x151D9BA8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x151D9BAC: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x151D9BB0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x151D9BB4: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x151D9BB8: lw          $t9, -0x2FC($at)
    ctx->r25 = MEM_W(ctx->r1, -0X2FC);
    // 0x151D9BBC: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x151D9BC0: sh          $t6, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r14;
    // 0x151D9BC4: jalr        $t9
    // 0x151D9BC8: sh          $t7, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r15;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x151D9BC8: sh          $t7, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r15;
    after_0:
    // 0x151D9BCC: lh          $a0, 0xEE($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XEE);
    // 0x151D9BD0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151D9BD4: sb          $v0, 0xB6($sp)
    MEM_B(0XB6, ctx->r29) = ctx->r2;
    // 0x151D9BD8: bne         $a0, $a1, L_151D9BE8
    if (ctx->r4 != ctx->r5) {
        // 0x151D9BDC: lbu         $t3, 0xDB($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0XDB);
            goto L_151D9BE8;
    }
    // 0x151D9BDC: lbu         $t3, 0xDB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XDB);
    // 0x151D9BE0: b           L_151D9BEC
    // 0x151D9BE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151D9BEC;
    // 0x151D9BE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151D9BE8:
    // 0x151D9BE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151D9BEC:
    // 0x151D9BEC: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151D9BF0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x151D9BF4: lbu         $t4, -0x4CD0($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X4CD0);
    // 0x151D9BF8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151D9BFC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151D9C00: beql        $t4, $zero, L_151D9C14
    if (ctx->r12 == 0) {
        // 0x151D9C04: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_151D9C14;
    }
    goto skip_0;
    // 0x151D9C04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x151D9C08: b           L_151D9C14
    // 0x151D9C0C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
        goto L_151D9C14;
    // 0x151D9C0C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x151D9C10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D9C14:
    // 0x151D9C14: or          $t4, $v0, $v1
    ctx->r12 = ctx->r2 | ctx->r3;
    // 0x151D9C18: ori         $t5, $t4, 0xF700
    ctx->r13 = ctx->r12 | 0XF700;
    // 0x151D9C1C: bne         $a0, $a1, L_151D9C30
    if (ctx->r4 != ctx->r5) {
        // 0x151D9C20: sw          $t5, 0xB0($sp)
        MEM_W(0XB0, ctx->r29) = ctx->r13;
            goto L_151D9C30;
    }
    // 0x151D9C20: sw          $t5, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r13;
    // 0x151D9C24: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x151D9C28: b           L_151D9C34
    // 0x151D9C2C: sh          $t6, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r14;
        goto L_151D9C34;
    // 0x151D9C2C: sh          $t6, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r14;
L_151D9C30:
    // 0x151D9C30: sh          $a0, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r4;
L_151D9C34:
    // 0x151D9C34: lbu         $t3, 0xF3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XF3);
    // 0x151D9C38: lbu         $t7, 0xE3($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XE3);
    // 0x151D9C3C: sw          $zero, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = 0;
    // 0x151D9C40: sw          $zero, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = 0;
    // 0x151D9C44: sb          $t8, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r24;
    // 0x151D9C48: sb          $zero, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = 0;
    // 0x151D9C4C: sb          $zero, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = 0;
    // 0x151D9C50: sb          $zero, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = 0;
    // 0x151D9C54: sb          $t9, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r25;
    // 0x151D9C58: beq         $t3, $zero, L_151D9C68
    if (ctx->r11 == 0) {
        // 0x151D9C5C: sb          $t7, 0xC0($sp)
        MEM_B(0XC0, ctx->r29) = ctx->r15;
            goto L_151D9C68;
    }
    // 0x151D9C5C: sb          $t7, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r15;
    // 0x151D9C60: b           L_151D9C6C
    // 0x151D9C64: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_151D9C6C;
    // 0x151D9C64: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_151D9C68:
    // 0x151D9C68: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_151D9C6C:
    // 0x151D9C6C: lbu         $t4, 0xF7($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XF7);
    // 0x151D9C70: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x151D9C74: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x151D9C78: beq         $t4, $zero, L_151D9C88
    if (ctx->r12 == 0) {
        // 0x151D9C7C: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_151D9C88;
    }
    // 0x151D9C7C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151D9C80: b           L_151D9C88
    // 0x151D9C84: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
        goto L_151D9C88;
    // 0x151D9C84: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
L_151D9C88:
    // 0x151D9C88: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x151D9C8C: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x151D9C90: sw          $t6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r14;
    // 0x151D9C94: sb          $zero, 0xB7($sp)
    MEM_B(0XB7, ctx->r29) = 0;
    // 0x151D9C98: sb          $zero, 0xC6($sp)
    MEM_B(0XC6, ctx->r29) = 0;
    // 0x151D9C9C: sb          $t7, 0xC7($sp)
    MEM_B(0XC7, ctx->r29) = ctx->r15;
    // 0x151D9CA0: sb          $t8, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = ctx->r24;
    // 0x151D9CA4: jal         0x150ADA20
    // 0x151D9CA8: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151D9CA8: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    after_1:
    // 0x151D9CAC: jal         0x150ADA20
    // 0x151D9CB0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151D9CB0: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_2:
    // 0x151D9CB4: jal         0x150ADA20
    // 0x151D9CB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151D9CB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_3:
    // 0x151D9CBC: lbu         $t2, 0xF7($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XF7);
    // 0x151D9CC0: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x151D9CC4: lw          $t0, 0xE8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE8);
    // 0x151D9CC8: beq         $t2, $zero, L_151D9CD8
    if (ctx->r10 == 0) {
        // 0x151D9CCC: lwc1        $f0, 0xDC($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0XDC);
            goto L_151D9CD8;
    }
    // 0x151D9CCC: lwc1        $f0, 0xDC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151D9CD0: b           L_151D9CDC
    // 0x151D9CD4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_151D9CDC;
    // 0x151D9CD4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_151D9CD8:
    // 0x151D9CD8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151D9CDC:
    // 0x151D9CDC: beq         $t2, $zero, L_151D9CEC
    if (ctx->r10 == 0) {
        // 0x151D9CE0: addiu       $a0, $sp, 0xB0
        ctx->r4 = ADD32(ctx->r29, 0XB0);
            goto L_151D9CEC;
    }
    // 0x151D9CE0: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x151D9CE4: b           L_151D9CF0
    // 0x151D9CE8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_151D9CF0;
    // 0x151D9CE8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_151D9CEC:
    // 0x151D9CEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D9CF0:
    // 0x151D9CF0: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x151D9CF4: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x151D9CF8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x151D9CFC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x151D9D00: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x151D9D04: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x151D9D08: andi        $t4, $t1, 0x1
    ctx->r12 = ctx->r9 & 0X1;
    // 0x151D9D0C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x151D9D10: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x151D9D14: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x151D9D18: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    // 0x151D9D1C: lbu         $t9, 0xFF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XFF);
    // 0x151D9D20: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x151D9D24: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x151D9D28: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x151D9D2C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151D9D30: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151D9D34: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x151D9D38: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x151D9D3C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x151D9D40: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x151D9D44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151D9D48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D9D4C: lw          $a3, 0xE4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE4);
    // 0x151D9D50: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x151D9D54: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x151D9D58: jal         0x1513C650
    // 0x151D9D5C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    func_1513C650(rdram, ctx);
        goto after_4;
    // 0x151D9D5C: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    after_4:
    // 0x151D9D60: beq         $v0, $zero, L_151D9EA0
    if (ctx->r2 == 0) {
        // 0x151D9D64: lbu         $t4, 0xFB($sp)
        ctx->r12 = MEM_BU(ctx->r29, 0XFB);
            goto L_151D9EA0;
    }
    // 0x151D9D64: lbu         $t4, 0xFB($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XFB);
    // 0x151D9D68: beq         $t4, $zero, L_151D9EA0
    if (ctx->r12 == 0) {
        // 0x151D9D6C: lw          $a0, 0xE4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XE4);
            goto L_151D9EA0;
    }
    // 0x151D9D6C: lw          $a0, 0xE4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE4);
    // 0x151D9D70: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x151D9D74: addiu       $a2, $sp, 0x94
    ctx->r6 = ADD32(ctx->r29, 0X94);
    // 0x151D9D78: jal         0x15144E80
    // 0x151D9D7C: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    func_15144E80(rdram, ctx);
        goto after_5;
    // 0x151D9D7C: addiu       $a3, $sp, 0x88
    ctx->r7 = ADD32(ctx->r29, 0X88);
    after_5:
    // 0x151D9D80: beq         $v0, $zero, L_151D9EA0
    if (ctx->r2 == 0) {
        // 0x151D9D84: addiu       $a0, $sp, 0x88
        ctx->r4 = ADD32(ctx->r29, 0X88);
            goto L_151D9EA0;
    }
    // 0x151D9D84: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151D9D88: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x151D9D8C: addiu       $t5, $t5, -0x4C18
    ctx->r13 = ADD32(ctx->r13, -0X4C18);
    // 0x151D9D90: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x151D9D94: addiu       $t6, $sp, 0x7C
    ctx->r14 = ADD32(ctx->r29, 0X7C);
    // 0x151D9D98: lw          $t8, 0x4($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X4);
    // 0x151D9D9C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D9DA0: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x151D9DA4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D9DA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151D9DAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151D9DB0: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x151D9DB4: jal         0x15145128
    // 0x151D9DB8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    func_15145128(rdram, ctx);
        goto after_6;
    // 0x151D9DB8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    after_6:
    // 0x151D9DBC: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151D9DC0: jal         0x15144A74
    // 0x151D9DC4: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    func_15144A74(rdram, ctx);
        goto after_7;
    // 0x151D9DC4: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    after_7:
    // 0x151D9DC8: lui         $at, 0xBF00
    ctx->r1 = S32(0XBF00 << 16);
    // 0x151D9DCC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151D9DD0: lh          $v0, 0xEE($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XEE);
    // 0x151D9DD4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x151D9DD8: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x151D9DDC: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x151D9DE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151D9DE4: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x151D9DE8: bc1f        L_151D9EA0
    if (!c1cs) {
        // 0x151D9DEC: addiu       $a3, $zero, -0x1
        ctx->r7 = ADD32(0, -0X1);
            goto L_151D9EA0;
    }
    // 0x151D9DEC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151D9DF0: lwc1        $f16, 0xDC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x151D9DF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151D9DF8: lw          $t3, 0xE8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XE8);
    // 0x151D9DFC: sh          $zero, 0x60($sp)
    MEM_H(0X60, ctx->r29) = 0;
    // 0x151D9E00: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151D9E04: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x151D9E08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151D9E0C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x151D9E10: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x151D9E14: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151D9E18: lw          $t6, 0x4($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X4);
    // 0x151D9E1C: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
    // 0x151D9E20: lw          $at, 0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X8);
    // 0x151D9E24: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151D9E28: lbu         $t5, 0xE3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XE3);
    // 0x151D9E2C: lbu         $t8, 0xF7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XF7);
    // 0x151D9E30: lbu         $t7, 0xDB($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XDB);
    // 0x151D9E34: sb          $t5, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r13;
    // 0x151D9E38: sb          $t8, 0x75($sp)
    MEM_B(0X75, ctx->r29) = ctx->r24;
    // 0x151D9E3C: bne         $v0, $a0, L_151D9E4C
    if (ctx->r2 != ctx->r4) {
        // 0x151D9E40: sb          $t7, 0x76($sp)
        MEM_B(0X76, ctx->r29) = ctx->r15;
            goto L_151D9E4C;
    }
    // 0x151D9E40: sb          $t7, 0x76($sp)
    MEM_B(0X76, ctx->r29) = ctx->r15;
    // 0x151D9E44: b           L_151D9E4C
    // 0x151D9E48: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
        goto L_151D9E4C;
    // 0x151D9E48: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
L_151D9E4C:
    // 0x151D9E4C: bne         $v0, $a0, L_151D9E5C
    if (ctx->r2 != ctx->r4) {
        // 0x151D9E50: addiu       $t9, $zero, 0x18
        ctx->r25 = ADD32(0, 0X18);
            goto L_151D9E5C;
    }
    // 0x151D9E50: addiu       $t9, $zero, 0x18
    ctx->r25 = ADD32(0, 0X18);
    // 0x151D9E54: b           L_151D9E60
    // 0x151D9E58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151D9E60;
    // 0x151D9E58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151D9E5C:
    // 0x151D9E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151D9E60:
    // 0x151D9E60: lbu         $t3, 0xFF($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XFF);
    // 0x151D9E64: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x151D9E68: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x151D9E6C: sra         $t4, $a0, 16
    ctx->r12 = S32(SIGNED(ctx->r4) >> 16);
    // 0x151D9E70: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x151D9E74: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x151D9E78: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x151D9E7C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x151D9E80: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151D9E84: jal         0x15149130
    // 0x151D9E88: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_15149130(rdram, ctx);
        goto after_8;
    // 0x151D9E88: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_8:
    // 0x151D9E8C: beq         $v0, $zero, L_151D9EA0
    if (ctx->r2 == 0) {
        // 0x151D9E90: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_151D9EA0;
    }
    // 0x151D9E90: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151D9E94: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x151D9E98: jal         0x10022EC0
    // 0x151D9E9C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x151D9E9C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_9:
L_151D9EA0:
    // 0x151D9EA0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151D9EA4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x151D9EA8: jr          $ra
    // 0x151D9EAC: nop

    return;
    return;
    // 0x151D9EAC: nop

;}
RECOMP_FUNC void func_1514795C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514795C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15147960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15147964: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15147968: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x1514796C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15147970: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15147974: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
    // 0x15147978: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1514797C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15147980: bltzl       $v1, L_151479B8
    if (SIGNED(ctx->r3) < 0) {
        // 0x15147984: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_151479B8;
    }
    goto skip_0;
    // 0x15147984: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    skip_0:
L_15147988:
    // 0x15147988: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x1514798C: beq         $v0, $zero, L_151479A4
    if (ctx->r2 == 0) {
        // 0x15147990: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_151479A4;
    }
    // 0x15147990: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15147994: jal         0x100043B4
    // 0x15147998: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_0;
    // 0x15147998: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x1514799C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x151479A0: lw          $v1, 0x2FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2FA0);
L_151479A4:
    // 0x151479A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x151479A8: slt         $at, $v1, $s1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x151479AC: beq         $at, $zero, L_15147988
    if (ctx->r1 == 0) {
        // 0x151479B0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_15147988;
    }
    // 0x151479B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x151479B4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_151479B8:
    // 0x151479B8: lw          $v0, 0x4C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X4C);
    // 0x151479BC: beq         $v0, $zero, L_151479CC
    if (ctx->r2 == 0) {
        // 0x151479C0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_151479CC;
    }
    // 0x151479C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151479C4: jal         0x100043B4
    // 0x151479C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_100043B4(rdram, ctx);
        goto after_1;
    // 0x151479C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
L_151479CC:
    // 0x151479CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151479D0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151479D4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151479D8: jr          $ra
    // 0x151479DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151479DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void n_alSynNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10018E60: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x10018E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10018E68: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x10018E6C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x10018E70: lw          $t7, 0x28($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X28);
    // 0x10018E74: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x10018E78: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10018E7C: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x10018E80: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x10018E84: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x10018E88: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10018E8C: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x10018E90: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x10018E94: sw          $t0, 0x4C($t1)
    MEM_W(0X4C, ctx->r9) = ctx->r8;
    // 0x10018E98: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x10018E9C: lw          $t2, -0x45BC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X45BC);
    // 0x10018EA0: sw          $zero, 0x20($t2)
    MEM_W(0X20, ctx->r10) = 0;
    // 0x10018EA4: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x10018EA8: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x10018EAC: sw          $zero, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = 0;
    // 0x10018EB0: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x10018EB4: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10018EB8: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x10018EBC: lw          $t5, 0x2C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X2C);
    // 0x10018EC0: sw          $t5, 0x54($t6)
    MEM_W(0X54, ctx->r14) = ctx->r13;
    // 0x10018EC4: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10018EC8: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x10018ECC: addiu       $t7, $zero, 0xB8
    ctx->r15 = ADD32(0, 0XB8);
    // 0x10018ED0: sw          $t7, 0x58($t8)
    MEM_W(0X58, ctx->r24) = ctx->r15;
    // 0x10018ED4: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x10018ED8: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10018EDC: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x10018EE0: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x10018EE4: sw          $t0, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->r8;
    // 0x10018EE8: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x10018EEC: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x10018EF0: lw          $t4, -0x45BC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45BC);
    // 0x10018EF4: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x10018EF8: sw          $t3, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->r11;
    // 0x10018EFC: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x10018F00: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10018F04: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x10018F08: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x10018F0C: sw          $t6, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r14;
    // 0x10018F10: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x10018F14: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x10018F18: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x10018F1C: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x10018F20: sw          $t9, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r25;
    // 0x10018F24: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x10018F28: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x10018F2C: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x10018F30: lw          $t2, 0x20($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X20);
    // 0x10018F34: sw          $t2, 0x34($t3)
    MEM_W(0X34, ctx->r11) = ctx->r10;
    // 0x10018F38: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x10018F3C: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10018F40: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x10018F44: lw          $t5, 0x24($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X24);
    // 0x10018F48: sw          $t5, 0x38($t6)
    MEM_W(0X38, ctx->r14) = ctx->r13;
    // 0x10018F4C: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x10018F50: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x10018F54: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x10018F58: bne         $at, $zero, L_10018F74
    if (ctx->r1 != 0) {
        // 0x10018F5C: nop
    
            goto L_10018F74;
    }
    // 0x10018F5C: nop

    // 0x10018F60: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x10018F64: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x10018F68: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x10018F6C: b           L_10018FAC
    // 0x10018F70: sw          $t9, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r25;
        goto L_10018FAC;
    // 0x10018F70: sw          $t9, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r25;
L_10018F74:
    // 0x10018F74: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x10018F78: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x10018F7C: bgtz        $t2, L_10018F98
    if (SIGNED(ctx->r10) > 0) {
        // 0x10018F80: nop
    
            goto L_10018F98;
    }
    // 0x10018F80: nop

    // 0x10018F84: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x10018F88: lw          $t4, -0x45BC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45BC);
    // 0x10018F8C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x10018F90: b           L_10018FAC
    // 0x10018F94: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
        goto L_10018FAC;
    // 0x10018F94: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
L_10018F98:
    // 0x10018F98: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x10018F9C: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10018FA0: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x10018FA4: lw          $t6, 0xC($t5)
    ctx->r14 = MEM_W(ctx->r13, 0XC);
    // 0x10018FA8: sw          $t6, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r14;
L_10018FAC:
    // 0x10018FAC: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10018FB0: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x10018FB4: addiu       $t9, $zero, 0x44
    ctx->r25 = ADD32(0, 0X44);
    // 0x10018FB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10018FBC: lw          $a3, 0x50($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X50);
    // 0x10018FC0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x10018FC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10018FC8: jal         0x10012844
    // 0x10018FCC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x10018FCC: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x10018FD0: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x10018FD4: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x10018FD8: sw          $v0, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->r2;
    // 0x10018FDC: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10018FE0: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x10018FE4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x10018FE8: lw          $t2, 0x50($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X50);
    // 0x10018FEC: blez        $t2, L_100191C4
    if (SIGNED(ctx->r10) <= 0) {
        // 0x10018FF0: nop
    
            goto L_100191C4;
    }
    // 0x10018FF0: nop

L_10018FF4:
    // 0x10018FF4: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x10018FF8: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x10018FFC: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x10019000: lw          $t4, 0x48($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X48);
    // 0x10019004: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x10019008: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x1001900C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x10019010: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x10019014: sw          $zero, 0x14($t7)
    MEM_W(0X14, ctx->r15) = 0;
    // 0x10019018: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x1001901C: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x10019020: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10019024: lw          $t9, 0x48($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X48);
    // 0x10019028: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x1001902C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x10019030: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x10019034: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x10019038: sw          $zero, 0x18($t2)
    MEM_W(0X18, ctx->r10) = 0;
    // 0x1001903C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x10019040: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x10019044: addu        $t4, $t3, $t5
    ctx->r12 = ADD32(ctx->r11, ctx->r13);
    // 0x10019048: lbu         $t6, 0x30($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X30);
    // 0x1001904C: beq         $t6, $zero, L_1001908C
    if (ctx->r14 == 0) {
        // 0x10019050: nop
    
            goto L_1001908C;
    }
    // 0x10019050: nop

    // 0x10019054: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x10019058: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x1001905C: jal         0x1001E4A0
    // 0x10019060: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_1001E4A0(rdram, ctx);
        goto after_1;
    // 0x10019060: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x10019064: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10019068: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x1001906C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x10019070: lw          $t8, 0x48($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X48);
    // 0x10019074: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x10019078: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x1001907C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x10019080: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x10019084: b           L_100190B0
    // 0x10019088: sw          $v0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r2;
        goto L_100190B0;
    // 0x10019088: sw          $v0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r2;
L_1001908C:
    // 0x1001908C: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x10019090: lw          $t2, -0x45BC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X45BC);
    // 0x10019094: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x10019098: lw          $t3, 0x48($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X48);
    // 0x1001909C: sll         $t4, $t5, 4
    ctx->r12 = S32(ctx->r13 << 4);
    // 0x100190A0: addu        $t4, $t4, $t5
    ctx->r12 = ADD32(ctx->r12, ctx->r13);
    // 0x100190A4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x100190A8: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x100190AC: sw          $zero, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = 0;
L_100190B0:
    // 0x100190B0: addiu       $t7, $zero, 0x38
    ctx->r15 = ADD32(0, 0X38);
    // 0x100190B4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x100190B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100190BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x100190C0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x100190C4: jal         0x10012844
    // 0x100190C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x100190C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x100190CC: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x100190D0: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x100190D4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x100190D8: lw          $t8, 0x48($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X48);
    // 0x100190DC: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x100190E0: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x100190E4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x100190E8: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x100190EC: sw          $v0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r2;
    // 0x100190F0: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x100190F4: lw          $t5, -0x45BC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X45BC);
    // 0x100190F8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x100190FC: lw          $t3, 0x48($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X48);
    // 0x10019100: sll         $t6, $t4, 4
    ctx->r14 = S32(ctx->r12 << 4);
    // 0x10019104: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x10019108: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1001910C: addu        $t7, $t3, $t6
    ctx->r15 = ADD32(ctx->r11, ctx->r14);
    // 0x10019110: lw          $t0, 0x40($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X40);
    // 0x10019114: sh          $zero, 0x2($t0)
    MEM_H(0X2, ctx->r8) = 0;
    // 0x10019118: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x1001911C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x10019120: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10019124: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10019128: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x1001912C: jal         0x10012844
    // 0x10019130: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x10019130: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x10019134: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10019138: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x1001913C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x10019140: lw          $t1, 0x48($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X48);
    // 0x10019144: sll         $t5, $t2, 4
    ctx->r13 = S32(ctx->r10 << 4);
    // 0x10019148: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x1001914C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x10019150: addu        $t4, $t1, $t5
    ctx->r12 = ADD32(ctx->r9, ctx->r13);
    // 0x10019154: lw          $t3, 0x40($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X40);
    // 0x10019158: sw          $v0, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->r2;
    // 0x1001915C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x10019160: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x10019164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10019168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1001916C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x10019170: jal         0x10012844
    // 0x10019174: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x10019174: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x10019178: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x1001917C: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x10019180: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x10019184: lw          $t0, 0x48($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X48);
    // 0x10019188: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x1001918C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x10019190: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x10019194: addu        $t2, $t0, $t8
    ctx->r10 = ADD32(ctx->r8, ctx->r24);
    // 0x10019198: lw          $t1, 0x40($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X40);
    // 0x1001919C: sw          $v0, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->r2;
    // 0x100191A0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x100191A4: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x100191A8: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x100191AC: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x100191B0: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x100191B4: lw          $t6, 0x50($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X50);
    // 0x100191B8: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x100191BC: bne         $at, $zero, L_10018FF4
    if (ctx->r1 != 0) {
        // 0x100191C0: nop
    
            goto L_10018FF4;
    }
    // 0x100191C0: nop

L_100191C4:
    // 0x100191C4: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x100191C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x100191CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100191D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x100191D4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x100191D8: jal         0x10012844
    // 0x100191DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x100191DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x100191E0: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x100191E4: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x100191E8: sw          $v0, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->r2;
    // 0x100191EC: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x100191F0: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x100191F4: lui         $t0, 0x1002
    ctx->r8 = S32(0X1002 << 16);
    // 0x100191F8: addiu       $t0, $t0, -0x1AD0
    ctx->r8 = ADD32(ctx->r8, -0X1AD0);
    // 0x100191FC: lw          $t2, 0x44($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X44);
    // 0x10019200: sw          $t0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r8;
    // 0x10019204: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10019208: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x1001920C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x10019210: lui         $t5, 0x8003
    ctx->r13 = S32(0X8003 << 16);
    // 0x10019214: lw          $t5, -0x45BC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X45BC);
    // 0x10019218: sw          $zero, 0x8($t5)
    MEM_W(0X8, ctx->r13) = 0;
    // 0x1001921C: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x10019220: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x10019224: sw          $zero, 0x14($t3)
    MEM_W(0X14, ctx->r11) = 0;
    // 0x10019228: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x1001922C: lw          $t4, -0x45BC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45BC);
    // 0x10019230: sw          $zero, 0x18($t4)
    MEM_W(0X18, ctx->r12) = 0;
    // 0x10019234: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x10019238: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001923C: sw          $zero, 0xC($t6)
    MEM_W(0XC, ctx->r14) = 0;
    // 0x10019240: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x10019244: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x10019248: sw          $zero, 0x10($t7)
    MEM_W(0X10, ctx->r15) = 0;
    // 0x1001924C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x10019250: addiu       $t8, $zero, 0xD0
    ctx->r24 = ADD32(0, 0XD0);
    // 0x10019254: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10019258: lw          $a3, 0x4($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X4);
    // 0x1001925C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x10019260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10019264: jal         0x10012844
    // 0x10019268: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x10019268: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x1001926C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x10019270: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x10019274: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x10019278: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x1001927C: blez        $t2, L_10019348
    if (SIGNED(ctx->r10) <= 0) {
        // 0x10019280: nop
    
            goto L_10019348;
    }
    // 0x10019280: nop

L_10019284:
    // 0x10019284: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x10019288: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x1001928C: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x10019290: subu        $t5, $t5, $t1
    ctx->r13 = SUB32(ctx->r13, ctx->r9);
    // 0x10019294: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x10019298: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x1001929C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x100192A0: addu        $t4, $t5, $t3
    ctx->r12 = ADD32(ctx->r13, ctx->r11);
    // 0x100192A4: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x100192A8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x100192AC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x100192B0: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x100192B4: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x100192B8: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x100192BC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x100192C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x100192C4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x100192C8: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x100192CC: sw          $t0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r8;
    // 0x100192D0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x100192D4: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x100192D8: sw          $t1, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r9;
    // 0x100192DC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x100192E0: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x100192E4: beq         $t4, $zero, L_100192FC
    if (ctx->r12 == 0) {
        // 0x100192E8: nop
    
            goto L_100192FC;
    }
    // 0x100192E8: nop

    // 0x100192EC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x100192F0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x100192F4: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x100192F8: sw          $t6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r14;
L_100192FC:
    // 0x100192FC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10019300: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x10019304: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    // 0x10019308: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x1001930C: sw          $zero, 0x10($t2)
    MEM_W(0X10, ctx->r10) = 0;
    // 0x10019310: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10019314: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x10019318: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x1001931C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x10019320: jal         0x1001D6E8
    // 0x10019324: lw          $a1, 0x24($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X24);
    alN_PVoiceNew(rdram, ctx);
        goto after_7;
    // 0x10019324: lw          $a1, 0x24($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X24);
    after_7:
    // 0x10019328: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x1001932C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x10019330: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x10019334: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x10019338: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x1001933C: slt         $at, $t3, $t7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x10019340: bne         $at, $zero, L_10019284
    if (ctx->r1 != 0) {
        // 0x10019344: nop
    
            goto L_10019284;
    }
    // 0x10019344: nop

L_10019348:
    // 0x10019348: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001934C: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x10019350: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x10019354: lw          $t9, 0x50($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X50);
    // 0x10019358: blez        $t9, L_100193CC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x1001935C: nop
    
            goto L_100193CC;
    }
    // 0x1001935C: nop

L_10019360:
    // 0x10019360: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10019364: lw          $t8, -0x45BC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45BC);
    // 0x10019368: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x1001936C: lw          $t0, 0x48($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X48);
    // 0x10019370: sll         $t1, $t2, 4
    ctx->r9 = S32(ctx->r10 << 4);
    // 0x10019374: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x10019378: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x1001937C: addu        $t5, $t0, $t1
    ctx->r13 = ADD32(ctx->r8, ctx->r9);
    // 0x10019380: sw          $zero, 0x14($t5)
    MEM_W(0X14, ctx->r13) = 0;
    // 0x10019384: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x10019388: lw          $t4, -0x45BC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45BC);
    // 0x1001938C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x10019390: lw          $t3, 0x48($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X48);
    // 0x10019394: sll         $t6, $t7, 4
    ctx->r14 = S32(ctx->r15 << 4);
    // 0x10019398: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x1001939C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x100193A0: addu        $t9, $t3, $t6
    ctx->r25 = ADD32(ctx->r11, ctx->r14);
    // 0x100193A4: sw          $zero, 0x18($t9)
    MEM_W(0X18, ctx->r25) = 0;
    // 0x100193A8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x100193AC: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x100193B0: lw          $t0, -0x45BC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X45BC);
    // 0x100193B4: addiu       $t2, $t8, 0x1
    ctx->r10 = ADD32(ctx->r24, 0X1);
    // 0x100193B8: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x100193BC: lw          $t1, 0x50($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X50);
    // 0x100193C0: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x100193C4: bne         $at, $zero, L_10019360
    if (ctx->r1 != 0) {
        // 0x100193C8: nop
    
            goto L_10019360;
    }
    // 0x100193C8: nop

L_100193CC:
    // 0x100193CC: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x100193D0: addiu       $t4, $zero, 0x24
    ctx->r12 = ADD32(0, 0X24);
    // 0x100193D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100193D8: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x100193DC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x100193E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x100193E4: jal         0x10012844
    // 0x100193E8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    alHeapDBAlloc(rdram, ctx);
        goto after_8;
    // 0x100193E8: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x100193EC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x100193F0: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x100193F4: lw          $t7, -0x45BC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45BC);
    // 0x100193F8: sw          $zero, 0x40($t7)
    MEM_W(0X40, ctx->r15) = 0;
    // 0x100193FC: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x10019400: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x10019404: lw          $t6, 0x8($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X8);
    // 0x10019408: blez        $t6, L_10019470
    if (SIGNED(ctx->r14) <= 0) {
        // 0x1001940C: nop
    
            goto L_10019470;
    }
    // 0x1001940C: nop

L_10019410:
    // 0x10019410: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x10019414: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x10019418: sll         $t8, $t9, 3
    ctx->r24 = S32(ctx->r25 << 3);
    // 0x1001941C: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x10019420: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x10019424: addu        $t2, $t8, $t0
    ctx->r10 = ADD32(ctx->r24, ctx->r8);
    // 0x10019428: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x1001942C: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10019430: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x10019434: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x10019438: lw          $t5, 0x40($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X40);
    // 0x1001943C: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
    // 0x10019440: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x10019444: lw          $t3, -0x45BC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45BC);
    // 0x10019448: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x1001944C: sw          $t7, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r15;
    // 0x10019450: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x10019454: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x10019458: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x1001945C: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x10019460: lw          $t0, 0x8($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X8);
    // 0x10019464: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x10019468: bne         $at, $zero, L_10019410
    if (ctx->r1 != 0) {
        // 0x1001946C: nop
    
            goto L_10019410;
    }
    // 0x1001946C: nop

L_10019470:
    // 0x10019470: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x10019474: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x10019478: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x1001947C: sw          $t2, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r10;
    // 0x10019480: b           L_10019488
    // 0x10019484: nop

        goto L_10019488;
    // 0x10019484: nop

L_10019488:
    // 0x10019488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1001948C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x10019490: jr          $ra
    // 0x10019494: nop

    return;
    return;
    // 0x10019494: nop

;}
RECOMP_FUNC void func_15192920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15192920: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15192924: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15192928: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1519292C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x15192930: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x15192934: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x15192938: beq         $t6, $zero, L_15192994
    if (ctx->r14 == 0) {
        // 0x1519293C: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_15192994;
    }
    // 0x1519293C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x15192940: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x15192944: lbu         $t8, 0x3B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3B);
    // 0x15192948: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1519294C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x15192950: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x15192954: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15192958: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1519295C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x15192960: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15192964: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x15192968: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1519296C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x15192970: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15192974: sb          $t8, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r24;
    // 0x15192978: jal         0x151491F4
    // 0x1519297C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    func_151491F4(rdram, ctx);
        goto after_0;
    // 0x1519297C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x15192980: beq         $v0, $zero, L_15192994
    if (ctx->r2 == 0) {
        // 0x15192984: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_15192994;
    }
    // 0x15192984: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x15192988: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x1519298C: jal         0x10022EC0
    // 0x15192990: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15192990: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
L_15192994:
    // 0x15192994: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15192998: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1519299C: jr          $ra
    // 0x151929A0: nop

    return;
    return;
    // 0x151929A0: nop

;}
RECOMP_FUNC void func_151478D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151478D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151478D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151478D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151478DC: jal         0x151D5E30
    // 0x151478E0: addiu       $a0, $a1, 0x84
    ctx->r4 = ADD32(ctx->r5, 0X84);
    func_151D5E30(rdram, ctx);
        goto after_0;
    // 0x151478E0: addiu       $a0, $a1, 0x84
    ctx->r4 = ADD32(ctx->r5, 0X84);
    after_0:
    // 0x151478E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151478E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151478EC: jr          $ra
    // 0x151478F0: nop

    return;
    return;
    // 0x151478F0: nop

;}
RECOMP_FUNC void func_10017AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10017AA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x10017AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10017AA8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x10017AAC: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x10017AB0: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x10017AB4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x10017AB8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x10017ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10017AC0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x10017AC4: jal         0x1001C224
    // 0x10017AC8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10017AC8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x10017ACC: b           L_10017AD4
    // 0x10017AD0: nop

        goto L_10017AD4;
    // 0x10017AD0: nop

L_10017AD4:
    // 0x10017AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10017AD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x10017ADC: jr          $ra
    // 0x10017AE0: nop

    return;
    return;
    // 0x10017AE0: nop

;}
RECOMP_FUNC void func_151D9ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9ADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D9AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D9AE4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D9AE8: addiu       $t7, $t7, -0x4C34
    ctx->r15 = ADD32(ctx->r15, -0X4C34);
    // 0x151D9AEC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D9AF0: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x151D9AF4: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151D9AF8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D9AFC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151D9B00: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x151D9B04: jal         0x150ADA20
    // 0x151D9B08: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D9B08: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    after_0:
    // 0x151D9B0C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151D9B10: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D9B14: mfhi        $t1
    ctx->r9 = hi;
    // 0x151D9B18: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151D9B1C: addu        $v0, $sp, $t2
    ctx->r2 = ADD32(ctx->r29, ctx->r10);
    // 0x151D9B20: lbu         $v0, 0x1F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1F);
    // 0x151D9B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D9B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D9B2C: jr          $ra
    // 0x151D9B30: nop

    return;
    return;
    // 0x151D9B30: nop

;}
RECOMP_FUNC void __n_CSPHandleMIDIMsg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001415C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x10014160: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x10014164: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x10014168: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x1001416C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x10014170: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x10014174: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x10014178: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x1001417C: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x10014180: sw          $t7, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r15;
    // 0x10014184: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x10014188: lbu         $t9, 0x4($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X4);
    // 0x1001418C: andi        $t0, $t9, 0xF0
    ctx->r8 = ctx->r25 & 0XF0;
    // 0x10014190: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    // 0x10014194: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x10014198: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x1001419C: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x100141A0: sb          $t3, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r11;
    // 0x100141A4: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x100141A8: lbu         $t5, 0x5($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X5);
    // 0x100141AC: sb          $t5, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r13;
    // 0x100141B0: sb          $t5, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r13;
    // 0x100141B4: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x100141B8: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x100141BC: sb          $t7, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r15;
    // 0x100141C0: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x100141C4: lbu         $t0, 0xBF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBF);
    // 0x100141C8: lw          $t9, 0x60($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X60);
    // 0x100141CC: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x100141D0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x100141D4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x100141D8: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x100141DC: lbu         $t3, 0x36($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X36);
    // 0x100141E0: beq         $t3, $zero, L_10014240
    if (ctx->r11 == 0) {
        // 0x100141E4: nop
    
            goto L_10014240;
    }
    // 0x100141E4: nop

    // 0x100141E8: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x100141EC: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x100141F0: beq         $t4, $at, L_10014240
    if (ctx->r12 == ctx->r1) {
        // 0x100141F4: nop
    
            goto L_10014240;
    }
    // 0x100141F4: nop

    // 0x100141F8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x100141FC: sh          $t5, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r13;
    // 0x10014200: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x10014204: addiu       $t6, $sp, 0xA8
    ctx->r14 = ADD32(ctx->r29, 0XA8);
    // 0x10014208: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x1001420C: sw          $at, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r1;
    // 0x10014210: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x10014214: sw          $t9, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r25;
    // 0x10014218: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x1001421C: sw          $at, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r1;
    // 0x10014220: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014224: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x10014228: ori         $a2, $zero, 0x8235
    ctx->r6 = 0 | 0X8235;
    // 0x1001422C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10014230: jal         0x1001C224
    // 0x10014234: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x10014234: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_0:
    // 0x10014238: b           L_1001502C
    // 0x1001423C: nop

        goto L_1001502C;
    // 0x1001423C: nop

L_10014240:
    // 0x10014240: lw          $t1, 0xC0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC0);
    // 0x10014244: addiu       $t2, $t1, -0x80
    ctx->r10 = ADD32(ctx->r9, -0X80);
    // 0x10014248: sltiu       $at, $t2, 0x61
    ctx->r1 = ctx->r10 < 0X61 ? 1 : 0;
    // 0x1001424C: beq         $at, $zero, L_1001501C
    if (ctx->r1 == 0) {
        // 0x10014250: nop
    
            goto L_1001501C;
    }
    // 0x10014250: nop

    // 0x10014254: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x10014258: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x1001425C: addu        $at, $at, $t2
    gpr jr_addend_10014264 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x10014260: lw          $t2, -0x3AE0($at)
    ctx->r10 = ADD32(ctx->r1, -0X3AE0);
    // 0x10014264: jr          $t2
    // 0x10014268: nop

    switch (jr_addend_10014264 >> 2) {
        case 0: goto L_10014B14; break;
        case 1: goto L_1001501C; break;
        case 2: goto L_1001501C; break;
        case 3: goto L_1001501C; break;
        case 4: goto L_1001501C; break;
        case 5: goto L_1001501C; break;
        case 6: goto L_1001501C; break;
        case 7: goto L_1001501C; break;
        case 8: goto L_1001501C; break;
        case 9: goto L_1001501C; break;
        case 10: goto L_1001501C; break;
        case 11: goto L_1001501C; break;
        case 12: goto L_1001501C; break;
        case 13: goto L_1001501C; break;
        case 14: goto L_1001501C; break;
        case 15: goto L_1001501C; break;
        case 16: goto L_1001426C; break;
        case 17: goto L_1001501C; break;
        case 18: goto L_1001501C; break;
        case 19: goto L_1001501C; break;
        case 20: goto L_1001501C; break;
        case 21: goto L_1001501C; break;
        case 22: goto L_1001501C; break;
        case 23: goto L_1001501C; break;
        case 24: goto L_1001501C; break;
        case 25: goto L_1001501C; break;
        case 26: goto L_1001501C; break;
        case 27: goto L_1001501C; break;
        case 28: goto L_1001501C; break;
        case 29: goto L_1001501C; break;
        case 30: goto L_1001501C; break;
        case 31: goto L_1001501C; break;
        case 32: goto L_10014C30; break;
        case 33: goto L_1001501C; break;
        case 34: goto L_1001501C; break;
        case 35: goto L_1001501C; break;
        case 36: goto L_1001501C; break;
        case 37: goto L_1001501C; break;
        case 38: goto L_1001501C; break;
        case 39: goto L_1001501C; break;
        case 40: goto L_1001501C; break;
        case 41: goto L_1001501C; break;
        case 42: goto L_1001501C; break;
        case 43: goto L_1001501C; break;
        case 44: goto L_1001501C; break;
        case 45: goto L_1001501C; break;
        case 46: goto L_1001501C; break;
        case 47: goto L_1001501C; break;
        case 48: goto L_10014D34; break;
        case 49: goto L_1001501C; break;
        case 50: goto L_1001501C; break;
        case 51: goto L_1001501C; break;
        case 52: goto L_1001501C; break;
        case 53: goto L_1001501C; break;
        case 54: goto L_1001501C; break;
        case 55: goto L_1001501C; break;
        case 56: goto L_1001501C; break;
        case 57: goto L_1001501C; break;
        case 58: goto L_1001501C; break;
        case 59: goto L_1001501C; break;
        case 60: goto L_1001501C; break;
        case 61: goto L_1001501C; break;
        case 62: goto L_1001501C; break;
        case 63: goto L_1001501C; break;
        case 64: goto L_10014DD8; break;
        case 65: goto L_1001501C; break;
        case 66: goto L_1001501C; break;
        case 67: goto L_1001501C; break;
        case 68: goto L_1001501C; break;
        case 69: goto L_1001501C; break;
        case 70: goto L_1001501C; break;
        case 71: goto L_1001501C; break;
        case 72: goto L_1001501C; break;
        case 73: goto L_1001501C; break;
        case 74: goto L_1001501C; break;
        case 75: goto L_1001501C; break;
        case 76: goto L_1001501C; break;
        case 77: goto L_1001501C; break;
        case 78: goto L_1001501C; break;
        case 79: goto L_1001501C; break;
        case 80: goto L_10014CAC; break;
        case 81: goto L_1001501C; break;
        case 82: goto L_1001501C; break;
        case 83: goto L_1001501C; break;
        case 84: goto L_1001501C; break;
        case 85: goto L_1001501C; break;
        case 86: goto L_1001501C; break;
        case 87: goto L_1001501C; break;
        case 88: goto L_1001501C; break;
        case 89: goto L_1001501C; break;
        case 90: goto L_1001501C; break;
        case 91: goto L_1001501C; break;
        case 92: goto L_1001501C; break;
        case 93: goto L_1001501C; break;
        case 94: goto L_1001501C; break;
        case 95: goto L_1001501C; break;
        case 96: goto L_10014E88; break;
        default: switch_error(__func__, 0x10014264, 0x8002C520);
    }
    // 0x10014268: nop

L_1001426C:
    // 0x1001426C: lbu         $t3, 0xBC($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XBC);
    // 0x10014270: beq         $t3, $zero, L_10014B14
    if (ctx->r11 == 0) {
        // 0x10014274: nop
    
            goto L_10014B14;
    }
    // 0x10014274: nop

    // 0x10014278: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x1001427C: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x10014280: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10014284: lw          $t5, 0x2C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X2C);
    // 0x10014288: bne         $t5, $at, L_100142AC
    if (ctx->r13 != ctx->r1) {
        // 0x1001428C: nop
    
            goto L_100142AC;
    }
    // 0x1001428C: nop

    // 0x10014290: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014294: lhu         $t0, 0x30($t4)
    ctx->r8 = MEM_HU(ctx->r12, 0X30);
    // 0x10014298: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1001429C: sllv        $t7, $t6, $t8
    ctx->r15 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x100142A0: and         $t9, $t0, $t7
    ctx->r25 = ctx->r8 & ctx->r15;
    // 0x100142A4: bne         $t9, $zero, L_10014334
    if (ctx->r25 != 0) {
        // 0x100142A8: nop
    
            goto L_10014334;
    }
    // 0x100142A8: nop

L_100142AC:
    // 0x100142AC: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x100142B0: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x100142B4: beq         $t2, $zero, L_1001432C
    if (ctx->r10 == 0) {
        // 0x100142B8: nop
    
            goto L_1001432C;
    }
    // 0x100142B8: nop

    // 0x100142BC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x100142C0: sh          $t3, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r11;
    // 0x100142C4: lbu         $t5, 0xBF($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBF);
    // 0x100142C8: ori         $t4, $t5, 0x80
    ctx->r12 = ctx->r13 | 0X80;
    // 0x100142CC: sb          $t4, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r12;
    // 0x100142D0: lbu         $t6, 0xBE($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBE);
    // 0x100142D4: sb          $t6, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r14;
    // 0x100142D8: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x100142DC: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x100142E0: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
    // 0x100142E4: lw          $t0, 0x24($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X24);
    // 0x100142E8: lw          $t9, 0x8($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X8);
    // 0x100142EC: multu       $t0, $t9
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x100142F0: mflo        $t1
    ctx->r9 = lo;
    // 0x100142F4: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x100142F8: nop

    // 0x100142FC: lbu         $t3, 0xBF($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014300: lw          $t2, 0xA4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA4);
    // 0x10014304: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10014308: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x1001430C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x10014310: sw          $t2, 0x2810($at)
    MEM_W(0X2810, ctx->r1) = ctx->r10;
    // 0x10014314: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014318: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x1001431C: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x10014320: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10014324: jal         0x1001C224
    // 0x10014328: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x10014328: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_1:
L_1001432C:
    // 0x1001432C: b           L_10015024
    // 0x10014330: nop

        goto L_10015024;
    // 0x10014330: nop

L_10014334:
    // 0x10014334: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x10014338: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x1001433C: lw          $t6, 0x60($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X60);
    // 0x10014340: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x10014344: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x10014348: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1001434C: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x10014350: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x10014354: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014358: lbu         $a1, 0xBE($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBE);
    // 0x1001435C: lbu         $a2, 0xBC($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBC);
    // 0x10014360: jal         0x1001B07C
    // 0x10014364: lbu         $a3, 0xBF($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBF);
    func_1001B07C(rdram, ctx);
        goto after_2;
    // 0x10014364: lbu         $a3, 0xBF($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBF);
    after_2:
    // 0x10014368: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x1001436C: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x10014370: bne         $t9, $zero, L_10014380
    if (ctx->r25 != 0) {
        // 0x10014374: nop
    
            goto L_10014380;
    }
    // 0x10014374: nop

    // 0x10014378: b           L_10015024
    // 0x1001437C: nop

        goto L_10015024;
    // 0x1001437C: nop

L_10014380:
    // 0x10014380: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x10014384: bne         $t1, $zero, L_10014394
    if (ctx->r9 != 0) {
        // 0x10014388: nop
    
            goto L_10014394;
    }
    // 0x10014388: nop

    // 0x1001438C: b           L_1001502C
    // 0x10014390: nop

        goto L_1001502C;
    // 0x10014390: nop

L_10014394:
    // 0x10014394: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x10014398: lbu         $t2, 0x7($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X7);
    // 0x1001439C: sh          $t2, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r10;
    // 0x100143A0: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x100143A4: lbu         $t4, 0xB($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0XB);
    // 0x100143A8: sh          $t4, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r12;
    // 0x100143AC: sb          $zero, 0x90($sp)
    MEM_B(0X90, ctx->r29) = 0;
    // 0x100143B0: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
    // 0x100143B4: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x100143B8: lbu         $a1, 0xBE($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBE);
    // 0x100143BC: lbu         $a2, 0xBC($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBC);
    // 0x100143C0: jal         0x1001AF28
    // 0x100143C4: lbu         $a3, 0xBF($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBF);
    __n_mapVoice(rdram, ctx);
        goto after_3;
    // 0x100143C4: lbu         $a3, 0xBF($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBF);
    after_3:
    // 0x100143C8: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x100143CC: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x100143D0: bne         $t8, $zero, L_100143E0
    if (ctx->r24 != 0) {
        // 0x100143D4: nop
    
            goto L_100143E0;
    }
    // 0x100143D4: nop

    // 0x100143D8: b           L_1001502C
    // 0x100143DC: nop

        goto L_1001502C;
    // 0x100143DC: nop

L_100143E0:
    // 0x100143E0: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x100143E4: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x100143E8: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x100143EC: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x100143F0: jal         0x1001DC80
    // 0x100143F4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    n_alSynAllocVoice(rdram, ctx);
        goto after_4;
    // 0x100143F4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_4:
    // 0x100143F8: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x100143FC: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x10014400: sw          $t0, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r8;
    // 0x10014404: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x10014408: sb          $zero, 0x38($t1)
    MEM_B(0X38, ctx->r9) = 0;
    // 0x1001440C: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x10014410: lbu         $t2, 0xC($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0XC);
    // 0x10014414: slti        $at, $t2, 0x40
    ctx->r1 = SIGNED(ctx->r10) < 0X40 ? 1 : 0;
    // 0x10014418: bne         $at, $zero, L_10014430
    if (ctx->r1 != 0) {
        // 0x1001441C: nop
    
            goto L_10014430;
    }
    // 0x1001441C: nop

    // 0x10014420: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x10014424: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x10014428: b           L_10014438
    // 0x1001442C: sb          $t5, 0x39($t4)
    MEM_B(0X39, ctx->r12) = ctx->r13;
        goto L_10014438;
    // 0x1001442C: sb          $t5, 0x39($t4)
    MEM_B(0X39, ctx->r12) = ctx->r13;
L_10014430:
    // 0x10014430: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x10014434: sb          $zero, 0x39($t8)
    MEM_B(0X39, ctx->r24) = 0;
L_10014438:
    // 0x10014438: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x1001443C: lbu         $t6, 0xBE($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBE);
    // 0x10014440: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x10014444: lbu         $t9, 0x4($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X4);
    // 0x10014448: lb          $t2, 0x5($t0)
    ctx->r10 = MEM_B(ctx->r8, 0X5);
    // 0x1001444C: subu        $t1, $t6, $t9
    ctx->r9 = SUB32(ctx->r14, ctx->r25);
    // 0x10014450: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x10014454: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x10014458: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x1001445C: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x10014460: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x10014464: addu        $t5, $t3, $t2
    ctx->r13 = ADD32(ctx->r11, ctx->r10);
    // 0x10014468: sh          $t5, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r13;
    // 0x1001446C: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x10014470: lbu         $t8, 0x28($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X28);
    // 0x10014474: beq         $t8, $zero, L_10014490
    if (ctx->r24 == 0) {
        // 0x10014478: nop
    
            goto L_10014490;
    }
    // 0x10014478: nop

    // 0x1001447C: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x10014480: lh          $t7, 0x86($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X86);
    // 0x10014484: lb          $t9, 0x2B($t6)
    ctx->r25 = MEM_B(ctx->r14, 0X2B);
    // 0x10014488: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x1001448C: sh          $t1, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r9;
L_10014490:
    // 0x10014490: jal         0x10019AB0
    // 0x10014494: lh          $a0, 0x86($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X86);
    alCents2Ratio(rdram, ctx);
        goto after_5;
    // 0x10014494: lh          $a0, 0x86($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X86);
    after_5:
    // 0x10014498: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x1001449C: swc1        $f0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f0.u32l;
    // 0x100144A0: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x100144A4: lbu         $t2, 0x28($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X28);
    // 0x100144A8: beq         $t2, $zero, L_100144E0
    if (ctx->r10 == 0) {
        // 0x100144AC: nop
    
            goto L_100144E0;
    }
    // 0x100144AC: nop

    // 0x100144B0: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x100144B4: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x100144B8: lbu         $t4, 0x29($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X29);
    // 0x100144BC: sb          $t4, 0x34($t8)
    MEM_B(0X34, ctx->r24) = ctx->r12;
    // 0x100144C0: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x100144C4: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x100144C8: lw          $t3, 0xA0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA0);
    // 0x100144CC: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x100144D0: lw          $t1, 0x1C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X1C);
    // 0x100144D4: addu        $t0, $t7, $t1
    ctx->r8 = ADD32(ctx->r15, ctx->r9);
    // 0x100144D8: b           L_10014514
    // 0x100144DC: sw          $t0, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->r8;
        goto L_10014514;
    // 0x100144DC: sw          $t0, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->r8;
L_100144E0:
    // 0x100144E0: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x100144E4: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x100144E8: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x100144EC: lbu         $t4, 0xC($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0XC);
    // 0x100144F0: sb          $t4, 0x34($t8)
    MEM_B(0X34, ctx->r24) = ctx->r12;
    // 0x100144F4: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x100144F8: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x100144FC: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x10014500: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x10014504: lw          $t9, 0x1C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X1C);
    // 0x10014508: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x1001450C: addu        $t3, $t9, $t0
    ctx->r11 = ADD32(ctx->r25, ctx->r8);
    // 0x10014510: sw          $t3, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->r11;
L_10014514:
    // 0x10014514: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x10014518: sb          $zero, 0x3B($t5)
    MEM_B(0X3B, ctx->r13) = 0;
    // 0x1001451C: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x10014520: lbu         $t8, 0x28($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X28);
    // 0x10014524: beq         $t8, $zero, L_1001453C
    if (ctx->r24 == 0) {
        // 0x10014528: nop
    
            goto L_1001453C;
    }
    // 0x10014528: nop

    // 0x1001452C: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x10014530: lbu         $t7, 0x2C($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X2C);
    // 0x10014534: b           L_1001456C
    // 0x10014538: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
        goto L_1001456C;
    // 0x10014538: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
L_1001453C:
    // 0x1001453C: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x10014540: lbu         $t0, 0xBF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014544: lw          $t9, 0x60($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X60);
    // 0x10014548: sll         $t3, $t0, 4
    ctx->r11 = S32(ctx->r8 << 4);
    // 0x1001454C: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x10014550: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x10014554: addu        $t2, $t9, $t3
    ctx->r10 = ADD32(ctx->r25, ctx->r11);
    // 0x10014558: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x1001455C: sw          $t5, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r13;
    // 0x10014560: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x10014564: lbu         $t8, 0x4($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X4);
    // 0x10014568: sw          $t8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r24;
L_1001456C:
    // 0x1001456C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x10014570: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x10014574: nop

    // 0x10014578: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x1001457C: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x10014580: beq         $t6, $zero, L_10014688
    if (ctx->r14 == 0) {
        // 0x10014584: nop
    
            goto L_10014688;
    }
    // 0x10014584: nop

    // 0x10014588: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x1001458C: lw          $t1, 0x70($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X70);
    // 0x10014590: beq         $t1, $zero, L_10014688
    if (ctx->r9 == 0) {
        // 0x10014594: nop
    
            goto L_10014688;
    }
    // 0x10014594: nop

    // 0x10014598: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x1001459C: lbu         $t9, 0x28($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X28);
    // 0x100145A0: beq         $t9, $zero, L_100145EC
    if (ctx->r25 == 0) {
        // 0x100145A4: nop
    
            goto L_100145EC;
    }
    // 0x100145A4: nop

    // 0x100145A8: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x100145AC: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x100145B0: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x100145B4: lbu         $t2, 0x2E($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X2E);
    // 0x100145B8: lbu         $a2, 0x2C($t3)
    ctx->r6 = MEM_BU(ctx->r11, 0X2C);
    // 0x100145BC: lbu         $a3, 0x2D($t3)
    ctx->r7 = MEM_BU(ctx->r11, 0X2D);
    // 0x100145C0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x100145C4: lbu         $t5, 0x2F($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X2F);
    // 0x100145C8: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x100145CC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x100145D0: lbu         $t4, 0x35($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X35);
    // 0x100145D4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x100145D8: lw          $t9, 0x70($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X70);
    // 0x100145DC: jalr        $t9
    // 0x100145E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x100145E0: nop

    after_6:
    // 0x100145E4: b           L_10014630
    // 0x100145E8: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
        goto L_10014630;
    // 0x100145E8: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
L_100145EC:
    // 0x100145EC: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x100145F0: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x100145F4: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x100145F8: lbu         $t7, 0x6($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X6);
    // 0x100145FC: lbu         $a2, 0x4($t6)
    ctx->r6 = MEM_BU(ctx->r14, 0X4);
    // 0x10014600: lbu         $a3, 0x5($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X5);
    // 0x10014604: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x10014608: lbu         $t1, 0x7($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X7);
    // 0x1001460C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x10014610: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x10014614: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x10014618: lbu         $t2, 0x35($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X35);
    // 0x1001461C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x10014620: lw          $t9, 0x70($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X70);
    // 0x10014624: jalr        $t9
    // 0x10014628: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x10014628: nop

    after_7:
    // 0x1001462C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
L_10014630:
    // 0x10014630: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x10014634: beq         $t3, $zero, L_10014688
    if (ctx->r11 == 0) {
        // 0x10014638: nop
    
            goto L_10014688;
    }
    // 0x10014638: nop

    // 0x1001463C: addiu       $t4, $zero, 0x17
    ctx->r12 = ADD32(0, 0X17);
    // 0x10014640: sh          $t4, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r12;
    // 0x10014644: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x10014648: sw          $t8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r24;
    // 0x1001464C: lw          $t7, 0x6C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X6C);
    // 0x10014650: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x10014654: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014658: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x1001465C: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x10014660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10014664: jal         0x1001C224
    // 0x10014668: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_8;
    // 0x10014668: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_8:
    // 0x1001466C: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x10014670: lbu         $t1, 0x3B($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X3B);
    // 0x10014674: ori         $t0, $t1, 0x1
    ctx->r8 = ctx->r9 | 0X1;
    // 0x10014678: sb          $t0, 0x3B($t6)
    MEM_B(0X3B, ctx->r14) = ctx->r8;
    // 0x1001467C: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x10014680: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x10014684: sw          $t2, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->r10;
L_10014688:
    // 0x10014688: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1001468C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x10014690: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x10014694: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x10014698: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1001469C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x100146A0: nop

    // 0x100146A4: andi        $at, $t3, 0x4
    ctx->r1 = ctx->r11 & 0X4;
    // 0x100146A8: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x100146AC: beq         $t3, $zero, L_10014700
    if (ctx->r11 == 0) {
        // 0x100146B0: nop
    
            goto L_10014700;
    }
    // 0x100146B0: nop

    // 0x100146B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x100146B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x100146BC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x100146C0: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x100146C4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x100146C8: nop

    // 0x100146CC: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x100146D0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x100146D4: nop

    // 0x100146D8: andi        $at, $t3, 0x4
    ctx->r1 = ctx->r11 & 0X4;
    // 0x100146DC: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x100146E0: bne         $t3, $zero, L_100146F8
    if (ctx->r11 != 0) {
        // 0x100146E4: nop
    
            goto L_100146F8;
    }
    // 0x100146E4: nop

    // 0x100146E8: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x100146EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x100146F0: b           L_10014710
    // 0x100146F4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_10014710;
    // 0x100146F4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_100146F8:
    // 0x100146F8: b           L_10014710
    // 0x100146FC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_10014710;
    // 0x100146FC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_10014700:
    // 0x10014700: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x10014704: nop

    // 0x10014708: bltz        $t3, L_100146F8
    if (SIGNED(ctx->r11) < 0) {
        // 0x1001470C: nop
    
            goto L_100146F8;
    }
    // 0x1001470C: nop

L_10014710:
    // 0x10014710: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x10014714: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x10014718: sb          $t3, 0x3A($t4)
    MEM_B(0X3A, ctx->r12) = ctx->r11;
    // 0x1001471C: nop

    // 0x10014720: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x10014724: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x10014728: nop

    // 0x1001472C: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x10014730: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x10014734: lbu         $t7, 0x28($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X28);
    // 0x10014738: beq         $t7, $zero, L_10014750
    if (ctx->r15 == 0) {
        // 0x1001473C: nop
    
            goto L_10014750;
    }
    // 0x1001473C: nop

    // 0x10014740: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x10014744: lbu         $t0, 0x30($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X30);
    // 0x10014748: b           L_1001475C
    // 0x1001474C: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
        goto L_1001475C;
    // 0x1001474C: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
L_10014750:
    // 0x10014750: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x10014754: lbu         $t2, 0x8($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X8);
    // 0x10014758: sw          $t2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r10;
L_1001475C:
    // 0x1001475C: lw          $t5, 0x98($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X98);
    // 0x10014760: beq         $t5, $zero, L_10014870
    if (ctx->r13 == 0) {
        // 0x10014764: nop
    
            goto L_10014870;
    }
    // 0x10014764: nop

    // 0x10014768: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x1001476C: lw          $t3, 0x70($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X70);
    // 0x10014770: beq         $t3, $zero, L_10014870
    if (ctx->r11 == 0) {
        // 0x10014774: nop
    
            goto L_10014870;
    }
    // 0x10014774: nop

    // 0x10014778: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x1001477C: lbu         $t8, 0x28($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X28);
    // 0x10014780: beq         $t8, $zero, L_100147CC
    if (ctx->r24 == 0) {
        // 0x10014784: nop
    
            goto L_100147CC;
    }
    // 0x10014784: nop

    // 0x10014788: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x1001478C: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x10014790: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x10014794: lbu         $t1, 0x32($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X32);
    // 0x10014798: lbu         $a2, 0x30($t7)
    ctx->r6 = MEM_BU(ctx->r15, 0X30);
    // 0x1001479C: lbu         $a3, 0x31($t7)
    ctx->r7 = MEM_BU(ctx->r15, 0X31);
    // 0x100147A0: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x100147A4: lbu         $t0, 0x33($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X33);
    // 0x100147A8: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x100147AC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x100147B0: lbu         $t6, 0x35($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X35);
    // 0x100147B4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x100147B8: lw          $t9, 0x70($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X70);
    // 0x100147BC: jalr        $t9
    // 0x100147C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x100147C0: nop

    after_9:
    // 0x100147C4: b           L_10014810
    // 0x100147C8: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
        goto L_10014810;
    // 0x100147C8: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
L_100147CC:
    // 0x100147CC: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x100147D0: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x100147D4: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x100147D8: lbu         $t3, 0xA($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0XA);
    // 0x100147DC: lbu         $a2, 0x8($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X8);
    // 0x100147E0: lbu         $a3, 0x9($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X9);
    // 0x100147E4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x100147E8: lbu         $t4, 0xB($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0XB);
    // 0x100147EC: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x100147F0: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x100147F4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x100147F8: lbu         $t1, 0x35($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X35);
    // 0x100147FC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x10014800: lw          $t9, 0x70($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X70);
    // 0x10014804: jalr        $t9
    // 0x10014808: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x10014808: nop

    after_10:
    // 0x1001480C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
L_10014810:
    // 0x10014810: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x10014814: beq         $t7, $zero, L_10014870
    if (ctx->r15 == 0) {
        // 0x10014818: nop
    
            goto L_10014870;
    }
    // 0x10014818: nop

    // 0x1001481C: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x10014820: sh          $t6, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r14;
    // 0x10014824: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x10014828: sw          $t2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r10;
    // 0x1001482C: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x10014830: sw          $t3, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r11;
    // 0x10014834: lbu         $t5, 0xBF($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014838: sb          $t5, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r13;
    // 0x1001483C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014840: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x10014844: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x10014848: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1001484C: jal         0x1001C224
    // 0x10014850: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_11;
    // 0x10014850: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_11:
    // 0x10014854: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x10014858: lbu         $t8, 0x3B($t4)
    ctx->r24 = MEM_BU(ctx->r12, 0X3B);
    // 0x1001485C: ori         $t1, $t8, 0x2
    ctx->r9 = ctx->r24 | 0X2;
    // 0x10014860: sb          $t1, 0x3B($t4)
    MEM_B(0X3B, ctx->r12) = ctx->r9;
    // 0x10014864: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x10014868: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x1001486C: sw          $t0, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->r8;
L_10014870:
    // 0x10014870: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x10014874: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x10014878: swc1        $f16, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f16.u32l;
    // 0x1001487C: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x10014880: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x10014884: lwc1        $f18, 0x2C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x10014888: lwc1        $f4, 0x18($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X18);
    // 0x1001488C: lwc1        $f8, 0x30($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X30);
    // 0x10014890: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x10014894: nop

    // 0x10014898: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1001489C: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x100148A0: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x100148A4: jal         0x1001B310
    // 0x100148A8: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    func_1001B310(rdram, ctx);
        goto after_12;
    // 0x100148A8: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    after_12:
    // 0x100148AC: sb          $v0, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r2;
    // 0x100148B0: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x100148B4: lbu         $t5, 0x14($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X14);
    // 0x100148B8: sb          $t5, 0x7A($sp)
    MEM_B(0X7A, ctx->r29) = ctx->r13;
    // 0x100148BC: lbu         $t8, 0x7A($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X7A);
    // 0x100148C0: beq         $t8, $zero, L_1001490C
    if (ctx->r24 == 0) {
        // 0x100148C4: nop
    
            goto L_1001490C;
    }
    // 0x100148C4: nop

    // 0x100148C8: lh          $t1, 0x86($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X86);
    // 0x100148CC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x100148D0: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x100148D4: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x100148D8: lbu         $t9, 0x15($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X15);
    // 0x100148DC: mflo        $t4
    ctx->r12 = lo;
    // 0x100148E0: addu        $a0, $t4, $t9
    ctx->r4 = ADD32(ctx->r12, ctx->r25);
    // 0x100148E4: jal         0x1001CEA4
    // 0x100148E8: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    func_1001CEA4(rdram, ctx);
        goto after_13;
    // 0x100148E8: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    after_13:
    // 0x100148EC: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x100148F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x100148F4: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x100148F8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x100148FC: lwc1        $f4, 0x18($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X18);
    // 0x10014900: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x10014904: b           L_1001491C
    // 0x10014908: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
        goto L_1001491C;
    // 0x10014908: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
L_1001490C:
    // 0x1001490C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x10014910: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x10014914: nop

    // 0x10014918: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
L_1001491C:
    // 0x1001491C: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x10014920: jal         0x1001B450
    // 0x10014924: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    __n_vsPan(rdram, ctx);
        goto after_14;
    // 0x10014924: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    after_14:
    // 0x10014928: sb          $v0, 0x79($sp)
    MEM_B(0X79, ctx->r29) = ctx->r2;
    // 0x1001492C: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x10014930: jal         0x1001B200
    // 0x10014934: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    __n_vsVol(rdram, ctx);
        goto after_15;
    // 0x10014934: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    after_15:
    // 0x10014938: sh          $v0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r2;
    // 0x1001493C: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x10014940: lbu         $t6, 0x28($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X28);
    // 0x10014944: beq         $t6, $zero, L_1001495C
    if (ctx->r14 == 0) {
        // 0x10014948: nop
    
            goto L_1001495C;
    }
    // 0x10014948: nop

    // 0x1001494C: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x10014950: lw          $t5, 0x1C($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X1C);
    // 0x10014954: b           L_1001496C
    // 0x10014958: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
        goto L_1001496C;
    // 0x10014958: sw          $t5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r13;
L_1001495C:
    // 0x1001495C: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x10014960: lw          $t1, 0x0($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X0);
    // 0x10014964: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x10014968: sw          $t0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r8;
L_1001496C:
    // 0x1001496C: lw          $t4, 0x88($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X88);
    // 0x10014970: lbu         $t9, 0x79($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X79);
    // 0x10014974: lbu         $t7, 0x7B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X7B);
    // 0x10014978: lw          $a1, 0x8($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X8);
    // 0x1001497C: lbu         $t2, 0x7A($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X7A);
    // 0x10014980: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x10014984: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x10014988: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1001498C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x10014990: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x10014994: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x10014998: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x1001499C: lbu         $t3, 0x16($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X16);
    // 0x100149A0: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x100149A4: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x100149A8: lh          $a3, 0x76($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X76);
    // 0x100149AC: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x100149B0: jal         0x1001E170
    // 0x100149B4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    n_alSynStartVoiceParams(rdram, ctx);
        goto after_16;
    // 0x100149B4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_16:
    // 0x100149B8: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x100149BC: sh          $t8, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r24;
    // 0x100149C0: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x100149C4: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    // 0x100149C8: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x100149CC: lbu         $t4, 0x28($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X28);
    // 0x100149D0: beq         $t4, $zero, L_100149F4
    if (ctx->r12 == 0) {
        // 0x100149D4: nop
    
            goto L_100149F4;
    }
    // 0x100149D4: nop

    // 0x100149D8: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x100149DC: lbu         $t7, 0x2A($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X2A);
    // 0x100149E0: sb          $t7, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r15;
    // 0x100149E4: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x100149E8: lw          $t6, 0x20($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X20);
    // 0x100149EC: b           L_10014A14
    // 0x100149F0: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
        goto L_10014A14;
    // 0x100149F0: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
L_100149F4:
    // 0x100149F4: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x100149F8: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x100149FC: lbu         $t8, 0xD($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0XD);
    // 0x10014A00: sb          $t8, 0xB4($sp)
    MEM_B(0XB4, ctx->r29) = ctx->r24;
    // 0x10014A04: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x10014A08: lw          $t0, 0x0($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X0);
    // 0x10014A0C: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x10014A10: sw          $t4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r12;
L_10014A14:
    // 0x10014A14: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014A18: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x10014A1C: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x10014A20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10014A24: jal         0x1001C224
    // 0x10014A28: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_17;
    // 0x10014A28: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_17:
    // 0x10014A2C: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x10014A30: lw          $t7, 0x8($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X8);
    // 0x10014A34: beq         $t7, $zero, L_10014AAC
    if (ctx->r15 == 0) {
        // 0x10014A38: nop
    
            goto L_10014AAC;
    }
    // 0x10014A38: nop

    // 0x10014A3C: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x10014A40: sh          $t2, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r10;
    // 0x10014A44: lbu         $t6, 0xBF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014A48: ori         $t3, $t6, 0x80
    ctx->r11 = ctx->r14 | 0X80;
    // 0x10014A4C: sb          $t3, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r11;
    // 0x10014A50: lbu         $t5, 0xBE($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBE);
    // 0x10014A54: sb          $t5, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r13;
    // 0x10014A58: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x10014A5C: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x10014A60: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x10014A64: lw          $t1, 0x24($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X24);
    // 0x10014A68: lw          $t4, 0x8($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X8);
    // 0x10014A6C: multu       $t1, $t4
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10014A70: mflo        $t9
    ctx->r25 = lo;
    // 0x10014A74: sw          $t9, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r25;
    // 0x10014A78: nop

    // 0x10014A7C: lbu         $t2, 0xBF($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014A80: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x10014A84: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x10014A88: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x10014A8C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x10014A90: sw          $t7, 0x2810($at)
    MEM_W(0X2810, ctx->r1) = ctx->r15;
    // 0x10014A94: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014A98: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x10014A9C: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x10014AA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10014AA4: jal         0x1001C224
    // 0x10014AA8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_18;
    // 0x10014AA8: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_18:
L_10014AAC:
    // 0x10014AAC: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x10014AB0: lbu         $t5, 0x17($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X17);
    // 0x10014AB4: andi        $t8, $t5, 0x1
    ctx->r24 = ctx->r13 & 0X1;
    // 0x10014AB8: beq         $t8, $zero, L_10014B0C
    if (ctx->r24 == 0) {
        // 0x10014ABC: nop
    
            goto L_10014B0C;
    }
    // 0x10014ABC: nop

    // 0x10014AC0: lw          $t0, 0xC8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC8);
    // 0x10014AC4: lw          $t1, 0x84($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X84);
    // 0x10014AC8: beq         $t1, $zero, L_10014B0C
    if (ctx->r9 == 0) {
        // 0x10014ACC: nop
    
            goto L_10014B0C;
    }
    // 0x10014ACC: nop

    // 0x10014AD0: lbu         $t9, 0xBF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014AD4: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x10014AD8: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x10014ADC: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x10014AE0: addu        $t7, $t7, $t2
    ctx->r15 = ADD32(ctx->r15, ctx->r10);
    // 0x10014AE4: lw          $t7, 0x2810($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2810);
    // 0x10014AE8: lbu         $t5, 0x17($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X17);
    // 0x10014AEC: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x10014AF0: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x10014AF4: and         $t6, $t7, $at
    ctx->r14 = ctx->r15 & ctx->r1;
    // 0x10014AF8: sra         $t8, $t5, 2
    ctx->r24 = S32(SIGNED(ctx->r13) >> 2);
    // 0x10014AFC: or          $a1, $t6, $t8
    ctx->r5 = ctx->r14 | ctx->r24;
    // 0x10014B00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10014B04: jal         0x10023580
    // 0x10014B08: lw          $a0, 0x84($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X84);
    osSendMesg_recomp(rdram, ctx);
        goto after_19;
    // 0x10014B08: lw          $a0, 0x84($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X84);
    after_19:
L_10014B0C:
    // 0x10014B0C: b           L_10015024
    // 0x10014B10: nop

        goto L_10015024;
    // 0x10014B10: nop

L_10014B14:
    // 0x10014B14: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014B18: lbu         $a1, 0xBE($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBE);
    // 0x10014B1C: jal         0x1001AFEC
    // 0x10014B20: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    func_1001AFEC(rdram, ctx);
        goto after_20;
    // 0x10014B20: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    after_20:
    // 0x10014B24: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x10014B28: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x10014B2C: bne         $t0, $zero, L_10014B3C
    if (ctx->r8 != 0) {
        // 0x10014B30: nop
    
            goto L_10014B3C;
    }
    // 0x10014B30: nop

    // 0x10014B34: b           L_1001502C
    // 0x10014B38: nop

        goto L_1001502C;
    // 0x10014B38: nop

L_10014B3C:
    // 0x10014B3C: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x10014B40: lbu         $t9, 0xBF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014B44: lw          $t4, 0x60($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X60);
    // 0x10014B48: sll         $t2, $t9, 4
    ctx->r10 = S32(ctx->r25 << 4);
    // 0x10014B4C: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x10014B50: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x10014B54: addu        $t7, $t4, $t2
    ctx->r15 = ADD32(ctx->r12, ctx->r10);
    // 0x10014B58: sw          $t7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r15;
    // 0x10014B5C: lw          $t3, 0xA0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA0);
    // 0x10014B60: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x10014B64: lbu         $t5, 0x39($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X39);
    // 0x10014B68: bne         $t5, $at, L_10014B80
    if (ctx->r13 != ctx->r1) {
        // 0x10014B6C: nop
    
            goto L_10014B80;
    }
    // 0x10014B6C: nop

    // 0x10014B70: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x10014B74: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x10014B78: b           L_10014BD8
    // 0x10014B7C: sb          $t6, 0x39($t8)
    MEM_B(0X39, ctx->r24) = ctx->r14;
        goto L_10014BD8;
    // 0x10014B7C: sb          $t6, 0x39($t8)
    MEM_B(0X39, ctx->r24) = ctx->r14;
L_10014B80:
    // 0x10014B80: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x10014B84: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x10014B88: sb          $t0, 0x39($t1)
    MEM_B(0X39, ctx->r9) = ctx->r8;
    // 0x10014B8C: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x10014B90: lbu         $t4, 0x28($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X28);
    // 0x10014B94: beq         $t4, $zero, L_10014BBC
    if (ctx->r12 == 0) {
        // 0x10014B98: nop
    
            goto L_10014BBC;
    }
    // 0x10014B98: nop

    // 0x10014B9C: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x10014BA0: lw          $t2, 0x9C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X9C);
    // 0x10014BA4: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014BA8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x10014BAC: jal         0x1001ABA0
    // 0x10014BB0: lw          $a2, 0x24($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X24);
    __n_seqpReleaseVoice(rdram, ctx);
        goto after_21;
    // 0x10014BB0: lw          $a2, 0x24($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X24);
    after_21:
    // 0x10014BB4: b           L_10014BD8
    // 0x10014BB8: nop

        goto L_10014BD8;
    // 0x10014BB8: nop

L_10014BBC:
    // 0x10014BBC: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x10014BC0: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014BC4: lw          $t3, 0x24($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X24);
    // 0x10014BC8: addiu       $a1, $t7, 0x4
    ctx->r5 = ADD32(ctx->r15, 0X4);
    // 0x10014BCC: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x10014BD0: jal         0x1001ABA0
    // 0x10014BD4: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    __n_seqpReleaseVoice(rdram, ctx);
        goto after_22;
    // 0x10014BD4: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    after_22:
L_10014BD8:
    // 0x10014BD8: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x10014BDC: lbu         $t8, 0x17($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X17);
    // 0x10014BE0: andi        $t0, $t8, 0x2
    ctx->r8 = ctx->r24 & 0X2;
    // 0x10014BE4: beq         $t0, $zero, L_10014C28
    if (ctx->r8 == 0) {
        // 0x10014BE8: nop
    
            goto L_10014C28;
    }
    // 0x10014BE8: nop

    // 0x10014BEC: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x10014BF0: lw          $t9, 0x84($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X84);
    // 0x10014BF4: beq         $t9, $zero, L_10014C28
    if (ctx->r25 == 0) {
        // 0x10014BF8: nop
    
            goto L_10014C28;
    }
    // 0x10014BF8: nop

    // 0x10014BFC: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x10014C00: lbu         $t2, 0xBE($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XBE);
    // 0x10014C04: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x10014C08: lbu         $t6, 0x17($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X17);
    // 0x10014C0C: sll         $t7, $t2, 16
    ctx->r15 = S32(ctx->r10 << 16);
    // 0x10014C10: ori         $t3, $t7, 0x8
    ctx->r11 = ctx->r15 | 0X8;
    // 0x10014C14: sra         $t8, $t6, 2
    ctx->r24 = S32(SIGNED(ctx->r14) >> 2);
    // 0x10014C18: or          $a1, $t3, $t8
    ctx->r5 = ctx->r11 | ctx->r24;
    // 0x10014C1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x10014C20: jal         0x10023580
    // 0x10014C24: lw          $a0, 0x84($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X84);
    osSendMesg_recomp(rdram, ctx);
        goto after_23;
    // 0x10014C24: lw          $a0, 0x84($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X84);
    after_23:
L_10014C28:
    // 0x10014C28: b           L_10015024
    // 0x10014C2C: nop

        goto L_10015024;
    // 0x10014C2C: nop

L_10014C30:
    // 0x10014C30: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014C34: lbu         $a1, 0xBE($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBE);
    // 0x10014C38: jal         0x1001AFEC
    // 0x10014C3C: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    func_1001AFEC(rdram, ctx);
        goto after_24;
    // 0x10014C3C: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    after_24:
    // 0x10014C40: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x10014C44: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x10014C48: bne         $t0, $zero, L_10014C58
    if (ctx->r8 != 0) {
        // 0x10014C4C: nop
    
            goto L_10014C58;
    }
    // 0x10014C4C: nop

    // 0x10014C50: b           L_1001502C
    // 0x10014C54: nop

        goto L_1001502C;
    // 0x10014C54: nop

L_10014C58:
    // 0x10014C58: lbu         $t1, 0xBC($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XBC);
    // 0x10014C5C: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x10014C60: sb          $t1, 0x37($t9)
    MEM_B(0X37, ctx->r25) = ctx->r9;
    // 0x10014C64: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x10014C68: jal         0x1001B200
    // 0x10014C6C: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    __n_vsVol(rdram, ctx);
        goto after_25;
    // 0x10014C6C: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    after_25:
    // 0x10014C70: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x10014C74: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x10014C78: sra         $t4, $s1, 16
    ctx->r12 = S32(SIGNED(ctx->r17) >> 16);
    // 0x10014C7C: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x10014C80: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x10014C84: jal         0x1001B40C
    // 0x10014C88: lw          $a1, 0x1C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X1C);
    __n_vsDelta(rdram, ctx);
        goto after_26;
    // 0x10014C88: lw          $a1, 0x1C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X1C);
    after_26:
    // 0x10014C8C: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x10014C90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x10014C94: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x10014C98: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x10014C9C: jal         0x1001C910
    // 0x10014CA0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynSetVol(rdram, ctx);
        goto after_27;
    // 0x10014CA0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_27:
    // 0x10014CA4: b           L_10015024
    // 0x10014CA8: nop

        goto L_10015024;
    // 0x10014CA8: nop

L_10014CAC:
    // 0x10014CAC: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x10014CB0: lw          $t5, 0x64($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X64);
    // 0x10014CB4: beq         $t5, $zero, L_10014D2C
    if (ctx->r13 == 0) {
        // 0x10014CB8: sw          $t5, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r13;
            goto L_10014D2C;
    }
    // 0x10014CB8: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
L_10014CBC:
    // 0x10014CBC: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x10014CC0: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014CC4: lbu         $t3, 0x35($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X35);
    // 0x10014CC8: bne         $t3, $t8, L_10014D1C
    if (ctx->r11 != ctx->r24) {
        // 0x10014CCC: nop
    
            goto L_10014D1C;
    }
    // 0x10014CCC: nop

    // 0x10014CD0: lbu         $t0, 0xBD($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBD);
    // 0x10014CD4: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x10014CD8: sb          $t0, 0x37($t1)
    MEM_B(0X37, ctx->r9) = ctx->r8;
    // 0x10014CDC: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x10014CE0: jal         0x1001B200
    // 0x10014CE4: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    __n_vsVol(rdram, ctx);
        goto after_28;
    // 0x10014CE4: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    after_28:
    // 0x10014CE8: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x10014CEC: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x10014CF0: sra         $t9, $s1, 16
    ctx->r25 = S32(SIGNED(ctx->r17) >> 16);
    // 0x10014CF4: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x10014CF8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x10014CFC: jal         0x1001B40C
    // 0x10014D00: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    __n_vsDelta(rdram, ctx);
        goto after_29;
    // 0x10014D00: lw          $a1, 0x1C($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X1C);
    after_29:
    // 0x10014D04: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x10014D08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x10014D0C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x10014D10: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x10014D14: jal         0x1001C910
    // 0x10014D18: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    n_alSynSetVol(rdram, ctx);
        goto after_30;
    // 0x10014D18: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_30:
L_10014D1C:
    // 0x10014D1C: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x10014D20: lw          $t7, 0x0($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X0);
    // 0x10014D24: bne         $t7, $zero, L_10014CBC
    if (ctx->r15 != 0) {
        // 0x10014D28: sw          $t7, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r15;
            goto L_10014CBC;
    }
    // 0x10014D28: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
L_10014D2C:
    // 0x10014D2C: b           L_10015024
    // 0x10014D30: nop

        goto L_10015024;
    // 0x10014D30: nop

L_10014D34:
    // 0x10014D34: lbu         $t5, 0xBD($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBD);
    // 0x10014D38: slti        $at, $t5, 0x5D
    ctx->r1 = SIGNED(ctx->r13) < 0X5D ? 1 : 0;
    // 0x10014D3C: beq         $at, $zero, L_10014D60
    if (ctx->r1 == 0) {
        // 0x10014D40: nop
    
            goto L_10014D60;
    }
    // 0x10014D40: nop

    // 0x10014D44: lbu         $t6, 0xBD($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBD);
    // 0x10014D48: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x10014D4C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x10014D50: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x10014D54: lw          $t8, -0x45B0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X45B0);
    // 0x10014D58: b           L_10014D94
    // 0x10014D5C: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
        goto L_10014D94;
    // 0x10014D5C: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
L_10014D60:
    // 0x10014D60: lbu         $t0, 0xBD($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBD);
    // 0x10014D64: slti        $at, $t0, 0xFC
    ctx->r1 = SIGNED(ctx->r8) < 0XFC ? 1 : 0;
    // 0x10014D68: bne         $at, $zero, L_10014D90
    if (ctx->r1 != 0) {
        // 0x10014D6C: nop
    
            goto L_10014D90;
    }
    // 0x10014D6C: nop

    // 0x10014D70: lbu         $t1, 0xBD($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XBD);
    // 0x10014D74: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x10014D78: negu        $t9, $t1
    ctx->r25 = SUB32(0, ctx->r9);
    // 0x10014D7C: sll         $t4, $t9, 2
    ctx->r12 = S32(ctx->r25 << 2);
    // 0x10014D80: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x10014D84: lw          $t2, -0x4040($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4040);
    // 0x10014D88: b           L_10014D94
    // 0x10014D8C: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
        goto L_10014D94;
    // 0x10014D8C: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
L_10014D90:
    // 0x10014D90: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
L_10014D94:
    // 0x10014D94: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x10014D98: beq         $t7, $zero, L_10014DD0
    if (ctx->r15 == 0) {
        // 0x10014D9C: nop
    
            goto L_10014DD0;
    }
    // 0x10014D9C: nop

    // 0x10014DA0: b           L_10014DB8
    // 0x10014DA4: nop

        goto L_10014DB8;
    // 0x10014DA4: nop

    // 0x10014DA8: lbu         $t5, 0xBF($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014DAC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x10014DB0: bne         $t5, $at, L_10014DB8
    if (ctx->r13 != ctx->r1) {
        // 0x10014DB4: nop
    
            goto L_10014DB8;
    }
    // 0x10014DB4: nop

L_10014DB8:
    // 0x10014DB8: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x10014DBC: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014DC0: lw          $a1, 0xCC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XCC);
    // 0x10014DC4: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014DC8: jalr        $t9
    // 0x10014DCC: lbu         $a3, 0xBC($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_31;
    // 0x10014DCC: lbu         $a3, 0xBC($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBC);
    after_31:
L_10014DD0:
    // 0x10014DD0: b           L_10015024
    // 0x10014DD4: nop

        goto L_10015024;
    // 0x10014DD4: nop

L_10014DD8:
    // 0x10014DD8: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x10014DDC: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014DE0: lbu         $t7, 0xBE($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XBE);
    // 0x10014DE4: lw          $t3, 0x60($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X60);
    // 0x10014DE8: sll         $t0, $t8, 4
    ctx->r8 = S32(ctx->r24 << 4);
    // 0x10014DEC: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x10014DF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x10014DF4: addu        $t1, $t3, $t0
    ctx->r9 = ADD32(ctx->r11, ctx->r8);
    // 0x10014DF8: lbu         $t4, 0x8($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X8);
    // 0x10014DFC: sll         $t2, $t4, 7
    ctx->r10 = S32(ctx->r12 << 7);
    // 0x10014E00: addu        $t5, $t2, $t7
    ctx->r13 = ADD32(ctx->r10, ctx->r15);
    // 0x10014E04: sw          $t5, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r13;
    // 0x10014E08: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x10014E0C: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    // 0x10014E10: lw          $t8, 0x20($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X20);
    // 0x10014E14: lh          $t3, 0x0($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X0);
    // 0x10014E18: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x10014E1C: beq         $at, $zero, L_10014E80
    if (ctx->r1 == 0) {
        // 0x10014E20: nop
    
            goto L_10014E80;
    }
    // 0x10014E20: nop

    // 0x10014E24: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014E28: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x10014E2C: jal         0x1001B7D0
    // 0x10014E30: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    func_1001B7D0(rdram, ctx);
        goto after_32;
    // 0x10014E30: lbu         $a2, 0xBF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XBF);
    after_32:
    // 0x10014E34: beq         $v0, $zero, L_10014E78
    if (ctx->r2 == 0) {
        // 0x10014E38: nop
    
            goto L_10014E78;
    }
    // 0x10014E38: nop

    // 0x10014E3C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x10014E40: sh          $t0, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r8;
    // 0x10014E44: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x10014E48: lbu         $t1, 0xBF($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014E4C: ori         $t4, $t1, 0xC0
    ctx->r12 = ctx->r9 | 0XC0;
    // 0x10014E50: sb          $t4, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r12;
    // 0x10014E54: lbu         $t2, 0xBE($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XBE);
    // 0x10014E58: sb          $t2, 0xB1($sp)
    MEM_B(0XB1, ctx->r29) = ctx->r10;
    // 0x10014E5C: sb          $zero, 0xB2($sp)
    MEM_B(0XB2, ctx->r29) = 0;
    // 0x10014E60: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x10014E64: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x10014E68: ori         $a2, $zero, 0x8235
    ctx->r6 = 0 | 0X8235;
    // 0x10014E6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x10014E70: jal         0x1001C224
    // 0x10014E74: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_33;
    // 0x10014E74: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    after_33:
L_10014E78:
    // 0x10014E78: b           L_10014E80
    // 0x10014E7C: nop

        goto L_10014E80;
    // 0x10014E7C: nop

L_10014E80:
    // 0x10014E80: b           L_10015024
    // 0x10014E84: nop

        goto L_10015024;
    // 0x10014E84: nop

L_10014E88:
    // 0x10014E88: lbu         $t7, 0xBC($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XBC);
    // 0x10014E8C: lbu         $t6, 0xBD($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBD);
    // 0x10014E90: sll         $t5, $t7, 7
    ctx->r13 = S32(ctx->r15 << 7);
    // 0x10014E94: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x10014E98: addiu       $t9, $t8, -0x2000
    ctx->r25 = ADD32(ctx->r24, -0X2000);
    // 0x10014E9C: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x10014EA0: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x10014EA4: lbu         $t1, 0xBF($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014EA8: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x10014EAC: lw          $t0, 0x60($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X60);
    // 0x10014EB0: sll         $t4, $t1, 4
    ctx->r12 = S32(ctx->r9 << 4);
    // 0x10014EB4: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x10014EB8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x10014EBC: addu        $t2, $t0, $t4
    ctx->r10 = ADD32(ctx->r8, ctx->r12);
    // 0x10014EC0: lh          $t7, 0x4($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X4);
    // 0x10014EC4: multu       $t7, $t5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x10014EC8: mflo        $t6
    ctx->r14 = lo;
    // 0x10014ECC: bgez        $t6, L_10014EDC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x10014ED0: sra         $t8, $t6, 13
        ctx->r24 = S32(SIGNED(ctx->r14) >> 13);
            goto L_10014EDC;
    }
    // 0x10014ED0: sra         $t8, $t6, 13
    ctx->r24 = S32(SIGNED(ctx->r14) >> 13);
    // 0x10014ED4: addiu       $at, $t6, 0x1FFF
    ctx->r1 = ADD32(ctx->r14, 0X1FFF);
    // 0x10014ED8: sra         $t8, $at, 13
    ctx->r24 = S32(SIGNED(ctx->r1) >> 13);
L_10014EDC:
    // 0x10014EDC: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x10014EE0: jal         0x10019AB0
    // 0x10014EE4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    alCents2Ratio(rdram, ctx);
        goto after_34;
    // 0x10014EE4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    after_34:
    // 0x10014EE8: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x10014EEC: lw          $t9, 0xC8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC8);
    // 0x10014EF0: lbu         $t1, 0xBF($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014EF4: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x10014EF8: lw          $t3, 0x60($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X60);
    // 0x10014EFC: sll         $t0, $t1, 4
    ctx->r8 = S32(ctx->r9 << 4);
    // 0x10014F00: subu        $t0, $t0, $t1
    ctx->r8 = SUB32(ctx->r8, ctx->r9);
    // 0x10014F04: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x10014F08: addu        $t4, $t3, $t0
    ctx->r12 = ADD32(ctx->r11, ctx->r8);
    // 0x10014F0C: swc1        $f16, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->f16.u32l;
    // 0x10014F10: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x10014F14: lw          $t7, 0x64($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X64);
    // 0x10014F18: beq         $t7, $zero, L_10015014
    if (ctx->r15 == 0) {
        // 0x10014F1C: sw          $t7, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r15;
            goto L_10015014;
    }
    // 0x10014F1C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
L_10014F20:
    // 0x10014F20: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x10014F24: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014F28: lbu         $t6, 0x35($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X35);
    // 0x10014F2C: bne         $t6, $t8, L_10015004
    if (ctx->r14 != ctx->r24) {
        // 0x10014F30: nop
    
            goto L_10015004;
    }
    // 0x10014F30: nop

    // 0x10014F34: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x10014F38: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x10014F3C: lwc1        $f18, 0x2C($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X2C);
    // 0x10014F40: lwc1        $f8, 0x30($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X30);
    // 0x10014F44: addiu       $a0, $t9, 0x4
    ctx->r4 = ADD32(ctx->r25, 0X4);
    // 0x10014F48: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x10014F4C: nop

    // 0x10014F50: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x10014F54: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x10014F58: jal         0x1001C9E0
    // 0x10014F5C: nop

    n_alSynSetPitch(rdram, ctx);
        goto after_35;
    // 0x10014F5C: nop

    after_35:
    // 0x10014F60: lw          $t1, 0xC8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC8);
    // 0x10014F64: lbu         $t0, 0xBF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014F68: lw          $t3, 0x60($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X60);
    // 0x10014F6C: sll         $t4, $t0, 4
    ctx->r12 = S32(ctx->r8 << 4);
    // 0x10014F70: subu        $t4, $t4, $t0
    ctx->r12 = SUB32(ctx->r12, ctx->r8);
    // 0x10014F74: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x10014F78: addu        $t2, $t3, $t4
    ctx->r10 = ADD32(ctx->r11, ctx->r12);
    // 0x10014F7C: lbu         $t7, 0x14($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X14);
    // 0x10014F80: beq         $t7, $zero, L_10015004
    if (ctx->r15 == 0) {
        // 0x10014F84: nop
    
            goto L_10015004;
    }
    // 0x10014F84: nop

    // 0x10014F88: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x10014F8C: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x10014F90: lbu         $t8, 0xBF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBF);
    // 0x10014F94: lw          $t2, 0x24($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X24);
    // 0x10014F98: lw          $t6, 0x60($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X60);
    // 0x10014F9C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x10014FA0: lw          $t7, 0x4($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X4);
    // 0x10014FA4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x10014FA8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x10014FAC: lbu         $t4, 0x36($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X36);
    // 0x10014FB0: lbu         $t5, 0x4($t7)
    ctx->r13 = MEM_BU(ctx->r15, 0X4);
    // 0x10014FB4: addu        $t1, $t6, $t9
    ctx->r9 = ADD32(ctx->r14, ctx->r25);
    // 0x10014FB8: lbu         $t0, 0x15($t1)
    ctx->r8 = MEM_BU(ctx->r9, 0X15);
    // 0x10014FBC: subu        $t8, $t4, $t5
    ctx->r24 = SUB32(ctx->r12, ctx->r13);
    // 0x10014FC0: addu        $a0, $t0, $t8
    ctx->r4 = ADD32(ctx->r8, ctx->r24);
    // 0x10014FC4: jal         0x1001CEA4
    // 0x10014FC8: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    func_1001CEA4(rdram, ctx);
        goto after_36;
    // 0x10014FC8: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    after_36:
    // 0x10014FCC: lui         $at, 0x43DC
    ctx->r1 = S32(0X43DC << 16);
    // 0x10014FD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10014FD4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x10014FD8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x10014FDC: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x10014FE0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x10014FE4: lwc1        $f8, 0x30($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X30);
    // 0x10014FE8: addiu       $a0, $t6, 0x4
    ctx->r4 = ADD32(ctx->r14, 0X4);
    // 0x10014FEC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x10014FF0: nop

    // 0x10014FF4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x10014FF8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x10014FFC: jal         0x1001CA90
    // 0x10015000: nop

    func_1001CA90(rdram, ctx);
        goto after_37;
    // 0x10015000: nop

    after_37:
L_10015004:
    // 0x10015004: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x10015008: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x1001500C: bne         $t1, $zero, L_10014F20
    if (ctx->r9 != 0) {
        // 0x10015010: sw          $t1, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r9;
            goto L_10014F20;
    }
    // 0x10015010: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
L_10015014:
    // 0x10015014: b           L_10015024
    // 0x10015018: nop

        goto L_10015024;
    // 0x10015018: nop

L_1001501C:
    // 0x1001501C: b           L_10015024
    // 0x10015020: nop

        goto L_10015024;
    // 0x10015020: nop

L_10015024:
    // 0x10015024: b           L_1001502C
    // 0x10015028: nop

        goto L_1001502C;
    // 0x10015028: nop

L_1001502C:
    // 0x1001502C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x10015030: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x10015034: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x10015038: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x1001503C: jr          $ra
    // 0x10015040: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    return;
    // 0x10015040: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_1519D454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519D454: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x1519D458: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x1519D45C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1519D460: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x1519D464: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x1519D468: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x1519D46C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x1519D470: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x1519D474: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x1519D478: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x1519D47C: lw          $s2, 0x98($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X98);
    // 0x1519D480: lw          $s4, 0x94($s1)
    ctx->r20 = MEM_W(ctx->r17, 0X94);
    // 0x1519D484: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x1519D488: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x1519D48C: bnel        $t6, $zero, L_1519D4A0
    if (ctx->r14 != 0) {
        // 0x1519D490: lbu         $t7, 0x4($s2)
        ctx->r15 = MEM_BU(ctx->r18, 0X4);
            goto L_1519D4A0;
    }
    goto skip_0;
    // 0x1519D490: lbu         $t7, 0x4($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X4);
    skip_0:
    // 0x1519D494: b           L_1519D9CC
    // 0x1519D498: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519D9CC;
    // 0x1519D498: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519D49C: lbu         $t7, 0x4($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X4);
L_1519D4A0:
    // 0x1519D4A0: lbu         $t8, 0x3B($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X3B);
    // 0x1519D4A4: beql        $t7, $t8, L_1519D4B8
    if (ctx->r15 == ctx->r24) {
        // 0x1519D4A8: lhu         $t9, 0x1E($s1)
        ctx->r25 = MEM_HU(ctx->r17, 0X1E);
            goto L_1519D4B8;
    }
    goto skip_1;
    // 0x1519D4A8: lhu         $t9, 0x1E($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X1E);
    skip_1:
    // 0x1519D4AC: b           L_1519D9CC
    // 0x1519D4B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519D9CC;
    // 0x1519D4B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519D4B4: lhu         $t9, 0x1E($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X1E);
L_1519D4B8:
    // 0x1519D4B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519D4BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519D4C0: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x1519D4C4: bne         $t0, $zero, L_1519D52C
    if (ctx->r8 != 0) {
        // 0x1519D4C8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_1519D52C;
    }
    // 0x1519D4C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1519D4CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1519D4D0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1519D4D4: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x1519D4D8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1519D4DC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x1519D4E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1519D4E4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1519D4E8: jal         0x1519E304
    // 0x1519D4EC: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    func_1519E304(rdram, ctx);
        goto after_0;
    // 0x1519D4EC: swc1        $f22, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f22.u32l;
    after_0:
    // 0x1519D4F0: beq         $v0, $zero, L_1519D524
    if (ctx->r2 == 0) {
        // 0x1519D4F4: nop
    
            goto L_1519D524;
    }
    // 0x1519D4F4: nop

    // 0x1519D4F8: lw          $at, 0x0($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X0);
    // 0x1519D4FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1519D500: sw          $at, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r1;
    // 0x1519D504: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x1519D508: sw          $t2, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r10;
    // 0x1519D50C: lw          $at, 0x8($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X8);
    // 0x1519D510: sw          $at, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r1;
    // 0x1519D514: lhu         $t3, 0x1E($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X1E);
    // 0x1519D518: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x1519D51C: b           L_1519D52C
    // 0x1519D520: sh          $t4, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r12;
        goto L_1519D52C;
    // 0x1519D520: sh          $t4, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r12;
L_1519D524:
    // 0x1519D524: b           L_1519D9CC
    // 0x1519D528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1519D9CC;
    // 0x1519D528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519D52C:
    // 0x1519D52C: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x1519D530: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519D534: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x1519D538: swc1        $f2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f2.u32l;
    // 0x1519D53C: lwc1        $f0, 0x18($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1519D540: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1519D544: bne         $v0, $zero, L_1519D628
    if (ctx->r2 != 0) {
        // 0x1519D548: swc1        $f0, 0xE4($sp)
        MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
            goto L_1519D628;
    }
    // 0x1519D548: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x1519D54C: lw          $a3, 0x14($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X14);
    // 0x1519D550: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1519D554: lwc1        $f4, 0x3C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X3C);
    // 0x1519D558: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x1519D55C: addiu       $a1, $s1, 0x10
    ctx->r5 = ADD32(ctx->r17, 0X10);
    // 0x1519D560: jal         0x1519E304
    // 0x1519D564: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_1519E304(rdram, ctx);
        goto after_1;
    // 0x1519D564: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x1519D568: bne         $v0, $zero, L_1519D628
    if (ctx->r2 != 0) {
        // 0x1519D56C: nop
    
            goto L_1519D628;
    }
    // 0x1519D56C: nop

    // 0x1519D570: jal         0x1519CFA0
    // 0x1519D574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_1519CFA0(rdram, ctx);
        goto after_2;
    // 0x1519D574: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x1519D578: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x1519D57C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1519D580: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x1519D584: sw          $t5, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r13;
    // 0x1519D588: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x1519D58C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x1519D590: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x1519D594: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x1519D598: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1519D59C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1519D5A0: sb          $t7, 0xDC($sp)
    MEM_B(0XDC, ctx->r29) = ctx->r15;
    // 0x1519D5A4: lbu         $t8, 0x4C($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X4C);
    // 0x1519D5A8: sw          $t8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r24;
    // 0x1519D5AC: lhu         $t9, 0x1E($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X1E);
    // 0x1519D5B0: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x1519D5B4: beq         $t0, $zero, L_1519D5C4
    if (ctx->r8 == 0) {
        // 0x1519D5B8: nop
    
            goto L_1519D5C4;
    }
    // 0x1519D5B8: nop

    // 0x1519D5BC: b           L_1519D5C4
    // 0x1519D5C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1519D5C4;
    // 0x1519D5C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519D5C4:
    // 0x1519D5C4: lh          $a0, 0x1C($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X1C);
    // 0x1519D5C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519D5CC: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x1519D5D0: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x1519D5D4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x1519D5D8: jal         0x151491F4
    // 0x1519D5DC: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_151491F4(rdram, ctx);
        goto after_3;
    // 0x1519D5DC: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_3:
    // 0x1519D5E0: beq         $v0, $zero, L_1519D620
    if (ctx->r2 == 0) {
        // 0x1519D5E4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1519D620;
    }
    // 0x1519D5E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1519D5E8: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1519D5EC: addiu       $a1, $sp, 0xD8
    ctx->r5 = ADD32(ctx->r29, 0XD8);
    // 0x1519D5F0: jal         0x10022EC0
    // 0x1519D5F4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x1519D5F4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_4:
    // 0x1519D5F8: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x1519D5FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1519D600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519D604: jal         0x1514ED3C
    // 0x1519D608: lw          $a0, 0x2F4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X2F4);
    func_1514ED3C(rdram, ctx);
        goto after_5;
    // 0x1519D608: lw          $a0, 0x2F4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X2F4);
    after_5:
    // 0x1519D60C: beq         $v0, $zero, L_1519D620
    if (ctx->r2 == 0) {
        // 0x1519D610: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1519D620;
    }
    // 0x1519D610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1519D614: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x1519D618: jal         0x1514EC1C
    // 0x1519D61C: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_1514EC1C(rdram, ctx);
        goto after_6;
    // 0x1519D61C: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_6:
L_1519D620:
    // 0x1519D620: b           L_1519D9CC
    // 0x1519D624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1519D9CC;
    // 0x1519D624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1519D628:
    // 0x1519D628: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1519D62C: addiu       $v1, $v1, -0x165C
    ctx->r3 = ADD32(ctx->r3, -0X165C);
    // 0x1519D630: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519D634: lwc1        $f6, 0x28($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X28);
    // 0x1519D638: lwc1        $f4, 0x2C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X2C);
    // 0x1519D63C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1519D640: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519D644: swc1        $f6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f6.u32l;
    // 0x1519D648: lwc1        $f18, 0x2C($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X2C);
    // 0x1519D64C: c.lt.s      $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f22.fl < ctx->f18.fl;
    // 0x1519D650: nop

    // 0x1519D654: bc1fl       L_1519D928
    if (!c1cs) {
        // 0x1519D658: addiu       $s3, $zero, 0x24
        ctx->r19 = ADD32(0, 0X24);
            goto L_1519D928;
    }
    goto skip_2;
    // 0x1519D658: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
    skip_2:
    // 0x1519D65C: div.s       $f12, $f22, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f22.fl, ctx->f18.fl);
    // 0x1519D660: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x1519D664: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1519D668: lwc1        $f8, 0x20($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X20);
    // 0x1519D66C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1519D670: addiu       $t5, $sp, 0xAC
    ctx->r13 = ADD32(ctx->r29, 0XAC);
    // 0x1519D674: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x1519D678: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x1519D67C: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519D680: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
    // 0x1519D684: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x1519D688: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1519D68C: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x1519D690: lwc1        $f10, 0x34($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X34);
    // 0x1519D694: lwc1        $f8, 0x14($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X14);
    // 0x1519D698: lwc1        $f2, 0x10($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X10);
    // 0x1519D69C: lwc1        $f14, 0x38($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X38);
    // 0x1519D6A0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1519D6A4: sub.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x1519D6A8: mul.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x1519D6AC: nop

    // 0x1519D6B0: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1519D6B4: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x1519D6B8: lwc1        $f10, 0x14($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X14);
    // 0x1519D6BC: add.s       $f20, $f14, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x1519D6C0: lwc1        $f6, 0x18($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X18);
    // 0x1519D6C4: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1519D6C8: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x1519D6CC: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1519D6D0: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x1519D6D4: sub.s       $f8, $f14, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f14.fl - ctx->f20.fl;
    // 0x1519D6D8: lwc1        $f14, -0x1658($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x1519D6DC: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1519D6E0: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x1519D6E4: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
    // 0x1519D6E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1519D6EC: sub.s       $f10, $f2, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x1519D6F0: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x1519D6F4: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x1519D6F8: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x1519D6FC: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x1519D700: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x1519D704: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x1519D708: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x1519D70C: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x1519D710: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1519D714: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x1519D718: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x1519D71C: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x1519D720: mul.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1519D724: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x1519D728: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x1519D72C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1519D730: mul.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1519D734: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x1519D738: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x1519D73C: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x1519D740: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
L_1519D744:
    // 0x1519D744: lb          $t8, 0x2E($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X2E);
    // 0x1519D748: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1519D74C: addiu       $t0, $sp, 0x8C
    ctx->r8 = ADD32(ctx->r29, 0X8C);
    // 0x1519D750: multu       $t8, $s3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519D754: mflo        $t9
    ctx->r25 = lo;
    // 0x1519D758: addu        $s0, $t9, $s4
    ctx->r16 = ADD32(ctx->r25, ctx->r20);
    // 0x1519D75C: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x1519D760: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1519D764: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x1519D768: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1519D76C: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x1519D770: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x1519D774: sw          $at, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r1;
    // 0x1519D778: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x1519D77C: sw          $t2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r10;
    // 0x1519D780: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x1519D784: sw          $at, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r1;
    // 0x1519D788: lbu         $t3, 0x7($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X7);
    // 0x1519D78C: swc1        $f20, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f20.u32l;
    // 0x1519D790: sb          $t3, 0x21($s0)
    MEM_B(0X21, ctx->r16) = ctx->r11;
    // 0x1519D794: lh          $t4, 0x42($s2)
    ctx->r12 = MEM_H(ctx->r18, 0X42);
    // 0x1519D798: sh          $t4, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r12;
    // 0x1519D79C: lh          $t6, 0x44($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X44);
    // 0x1519D7A0: sh          $t6, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r14;
    // 0x1519D7A4: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    // 0x1519D7A8: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x1519D7AC: jal         0x150ADA20
    // 0x1519D7B0: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x1519D7B0: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x1519D7B4: lh          $t9, 0x4A($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X4A);
    // 0x1519D7B8: lbu         $t5, 0x7($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X7);
    // 0x1519D7BC: lh          $t7, 0x48($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X48);
    // 0x1519D7C0: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x1519D7C4: divu        $zero, $v0, $t1
    lo = S32(U32(ctx->r2) / U32(ctx->r9)); hi = S32(U32(ctx->r2) % U32(ctx->r9));
    // 0x1519D7C8: mfhi        $t0
    ctx->r8 = hi;
    // 0x1519D7CC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x1519D7D0: lwc1        $f0, 0xCC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x1519D7D4: lwc1        $f16, 0xC8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x1519D7D8: addu        $t2, $t8, $t0
    ctx->r10 = ADD32(ctx->r24, ctx->r8);
    // 0x1519D7DC: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1519D7E0: sb          $t2, 0x7($s2)
    MEM_B(0X7, ctx->r18) = ctx->r10;
    // 0x1519D7E4: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1519D7E8: sb          $t3, 0x20($s0)
    MEM_B(0X20, ctx->r16) = ctx->r11;
    // 0x1519D7EC: lwc1        $f8, 0x24($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X24);
    // 0x1519D7F0: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1519D7F4: bne         $t1, $zero, L_1519D800
    if (ctx->r9 != 0) {
        // 0x1519D7F8: nop
    
            goto L_1519D800;
    }
    // 0x1519D7F8: nop

    // 0x1519D7FC: break       7
    do_break(354015228);
L_1519D800:
    // 0x1519D800: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1519D804: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1519D808: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1519D80C: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1519D810: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519D814: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x1519D818: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1519D81C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519D820: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1519D824: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1519D828: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x1519D82C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x1519D830: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1519D834: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1519D838: mul.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1519D83C: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x1519D840: sub.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x1519D844: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519D848: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x1519D84C: lb          $t4, 0x2E($s1)
    ctx->r12 = MEM_B(ctx->r17, 0X2E);
    // 0x1519D850: lbu         $t5, 0x25($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X25);
    // 0x1519D854: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x1519D858: sb          $t6, 0x2E($s1)
    MEM_B(0X2E, ctx->r17) = ctx->r14;
    // 0x1519D85C: lb          $v0, 0x2E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2E);
    // 0x1519D860: bnel        $t5, $v0, L_1519D874
    if (ctx->r13 != ctx->r2) {
        // 0x1519D864: lb          $t7, 0x2C($s1)
        ctx->r15 = MEM_B(ctx->r17, 0X2C);
            goto L_1519D874;
    }
    goto skip_3;
    // 0x1519D864: lb          $t7, 0x2C($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2C);
    skip_3:
    // 0x1519D868: sb          $zero, 0x2E($s1)
    MEM_B(0X2E, ctx->r17) = 0;
    // 0x1519D86C: lb          $v0, 0x2E($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2E);
    // 0x1519D870: lb          $t7, 0x2C($s1)
    ctx->r15 = MEM_B(ctx->r17, 0X2C);
L_1519D874:
    // 0x1519D874: lb          $v1, 0x2D($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2D);
    // 0x1519D878: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x1519D87C: bne         $v1, $v0, L_1519D8AC
    if (ctx->r3 != ctx->r2) {
        // 0x1519D880: sb          $t9, 0x2C($s1)
        MEM_B(0X2C, ctx->r17) = ctx->r25;
            goto L_1519D8AC;
    }
    // 0x1519D880: sb          $t9, 0x2C($s1)
    MEM_B(0X2C, ctx->r17) = ctx->r25;
    // 0x1519D884: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x1519D888: sb          $t1, 0x2D($s1)
    MEM_B(0X2D, ctx->r17) = ctx->r9;
    // 0x1519D88C: lb          $t0, 0x2D($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X2D);
    // 0x1519D890: lbu         $t8, 0x25($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X25);
    // 0x1519D894: bnel        $t8, $t0, L_1519D8A4
    if (ctx->r24 != ctx->r8) {
        // 0x1519D898: lb          $t2, 0x2C($s1)
        ctx->r10 = MEM_B(ctx->r17, 0X2C);
            goto L_1519D8A4;
    }
    goto skip_4;
    // 0x1519D898: lb          $t2, 0x2C($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X2C);
    skip_4:
    // 0x1519D89C: sb          $zero, 0x2D($s1)
    MEM_B(0X2D, ctx->r17) = 0;
    // 0x1519D8A0: lb          $t2, 0x2C($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X2C);
L_1519D8A4:
    // 0x1519D8A4: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x1519D8A8: sb          $t3, 0x2C($s1)
    MEM_B(0X2C, ctx->r17) = ctx->r11;
L_1519D8AC:
    // 0x1519D8AC: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1519D8B0: lwc1        $f4, 0xB0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x1519D8B4: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1519D8B8: add.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x1519D8BC: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x1519D8C0: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x1519D8C4: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1519D8C8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1519D8CC: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x1519D8D0: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1519D8D4: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1519D8D8: add.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x1519D8DC: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x1519D8E0: lwc1        $f8, 0x2C($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X2C);
    // 0x1519D8E4: sub.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x1519D8E8: swc1        $f4, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f4.u32l;
    // 0x1519D8EC: lwc1        $f10, 0x2C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X2C);
    // 0x1519D8F0: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x1519D8F4: nop

    // 0x1519D8F8: bc1t        L_1519D744
    if (c1cs) {
        // 0x1519D8FC: nop
    
            goto L_1519D744;
    }
    // 0x1519D8FC: nop

    // 0x1519D900: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
    // 0x1519D904: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x1519D908: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x1519D90C: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x1519D910: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x1519D914: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x1519D918: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x1519D91C: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x1519D920: swc1        $f0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f0.u32l;
    // 0x1519D924: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
L_1519D928:
    // 0x1519D928: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x1519D92C: lwc1        $f6, 0x50($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X50);
    // 0x1519D930: lb          $v1, 0x2E($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X2E);
    // 0x1519D934: lwc1        $f14, 0x14($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X14);
    // 0x1519D938: lb          $t9, 0x2D($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X2D);
    // 0x1519D93C: lwc1        $f4, 0x54($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X54);
    // 0x1519D940: sub.s       $f0, $f14, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f6.fl;
    // 0x1519D944: lwc1        $f6, 0x58($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X58);
    // 0x1519D948: lwc1        $f8, 0x18($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X18);
    // 0x1519D94C: lwc1        $f10, 0x1C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x1519D950: sub.s       $f2, $f8, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x1519D954: beq         $v1, $t9, L_1519D9B4
    if (ctx->r3 == ctx->r25) {
        // 0x1519D958: sub.s       $f12, $f10, $f6
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f6.fl;
            goto L_1519D9B4;
    }
    // 0x1519D958: sub.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1519D95C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_1519D960:
    // 0x1519D960: bgez        $v1, L_1519D970
    if (SIGNED(ctx->r3) >= 0) {
        // 0x1519D964: nop
    
            goto L_1519D970;
    }
    // 0x1519D964: nop

    // 0x1519D968: lbu         $v1, 0x25($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X25);
    // 0x1519D96C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_1519D970:
    // 0x1519D970: multu       $v1, $s3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1519D974: mflo        $t1
    ctx->r9 = lo;
    // 0x1519D978: addu        $v0, $t1, $s4
    ctx->r2 = ADD32(ctx->r9, ctx->r20);
    // 0x1519D97C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1519D980: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1519D984: add.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x1519D988: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1519D98C: add.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1519D990: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x1519D994: add.s       $f4, $f8, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x1519D998: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x1519D99C: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x1519D9A0: lb          $t8, 0x2D($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X2D);
    // 0x1519D9A4: bnel        $v1, $t8, L_1519D960
    if (ctx->r3 != ctx->r24) {
        // 0x1519D9A8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_1519D960;
    }
    goto skip_5;
    // 0x1519D9A8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_5:
    // 0x1519D9AC: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x1519D9B0: lwc1        $f14, 0x14($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X14);
L_1519D9B4:
    // 0x1519D9B4: swc1        $f14, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->f14.u32l;
    // 0x1519D9B8: lwc1        $f10, 0x18($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X18);
    // 0x1519D9BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1519D9C0: swc1        $f10, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->f10.u32l;
    // 0x1519D9C4: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x1519D9C8: swc1        $f6, 0x58($s2)
    MEM_W(0X58, ctx->r18) = ctx->f6.u32l;
L_1519D9CC:
    // 0x1519D9CC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x1519D9D0: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x1519D9D4: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x1519D9D8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1519D9DC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x1519D9E0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x1519D9E4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x1519D9E8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x1519D9EC: jr          $ra
    // 0x1519D9F0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    return;
    // 0x1519D9F0: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_15163414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15163414: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15163418: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1516341C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x15163420: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x15163424: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x15163428: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x1516342C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x15163430: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x15163434: lb          $t9, 0x6B($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X6B);
    // 0x15163438: lbu         $t0, 0x6F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X6F);
    // 0x1516343C: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x15163440: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x15163444: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x15163448: sb          $t9, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r25;
    // 0x1516344C: sb          $t0, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r8;
    // 0x15163450: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x15163454: lbu         $t6, 0x7F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X7F);
    // 0x15163458: lbu         $t0, 0x7B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X7B);
    // 0x1516345C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15163460: lbu         $t1, 0x83($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X83);
    // 0x15163464: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x15163468: lbu         $a2, 0x73($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X73);
    // 0x1516346C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x15163470: lbu         $a3, 0x77($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X77);
    // 0x15163474: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x15163478: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x1516347C: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x15163480: lbu         $t2, 0x87($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X87);
    // 0x15163484: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15163488: addiu       $t3, $t7, 0x10
    ctx->r11 = ADD32(ctx->r15, 0X10);
    // 0x1516348C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x15163490: nop

    // 0x15163494: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x15163498: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x1516349C: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151634A0: lbu         $t4, 0x8F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X8F);
    // 0x151634A4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151634A8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x151634AC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x151634B0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151634B4: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x151634B8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151634BC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x151634C0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151634C4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x151634C8: jal         0x151602C0
    // 0x151634CC: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    func_151602C0(rdram, ctx);
        goto after_0;
    // 0x151634CC: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    after_0:
    // 0x151634D0: beq         $v0, $zero, L_151634F0
    if (ctx->r2 == 0) {
        // 0x151634D4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151634F0;
    }
    // 0x151634D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151634D8: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x151634DC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151634E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x151634E4: jal         0x10022EC0
    // 0x151634E8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151634E8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_1:
    // 0x151634EC: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
L_151634F0:
    // 0x151634F0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151634F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151634F8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151634FC: jr          $ra
    // 0x15163500: nop

    return;
    return;
    // 0x15163500: nop

;}
RECOMP_FUNC void func_1505A6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505A6F8: lwc1        $f4, 0x14($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X14);
    // 0x1505A6FC: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x1505A700: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x1505A704: lwc1        $f10, 0x1C($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x1505A708: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1505A70C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1505A710: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1505A714: nop

    // 0x1505A718: mul.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1505A71C: add.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x1505A720: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x1505A724: jr          $ra
    // 0x1505A728: nop

    return;
    return;
    // 0x1505A728: nop

;}
RECOMP_FUNC void func_15043D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043D90: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x15043D94: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x15043D98: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x15043D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15043DA0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15043DA4: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x15043DA8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15043DAC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x15043DB0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15043DB4: jal         0x150A8050
    // 0x15043DB8: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15043DB8: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_0:
    // 0x15043DBC: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15043DC0: lwc1        $f16, 0x6C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15043DC4: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x15043DC8: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x15043DCC: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x15043DD0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15043DD4: mul.s       $f12, $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x15043DD8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15043DDC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x15043DE0: mul.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x15043DE4: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15043DE8: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15043DEC: mul.s       $f18, $f8, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x15043DF0: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x15043DF4: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x15043DF8: mul.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x15043DFC: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x15043E00: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x15043E04: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x15043E08: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x15043E0C: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x15043E10: mul.s       $f16, $f2, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x15043E14: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x15043E18: lwc1        $f12, 0x7C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15043E1C: mul.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x15043E20: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x15043E24: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x15043E28: mul.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x15043E2C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x15043E30: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x15043E34: mul.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15043E38: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x15043E3C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x15043E40: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x15043E44: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x15043E48: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x15043E4C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x15043E50: jal         0x150A7790
    // 0x15043E54: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x15043E54: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x15043E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15043E5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15043E60: jr          $ra
    // 0x15043E64: nop

    return;
    return;
    // 0x15043E64: nop

;}
RECOMP_FUNC void func_1513E13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513E13C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1513E140: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1513E144: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1513E148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1513E14C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1513E150: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1513E154: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x1513E158: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    // 0x1513E15C: sw          $a1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r5;
    // 0x1513E160: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1513E164: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1513E168: jal         0x151423D8
    // 0x1513E16C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x1513E16C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1513E170: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x1513E174: jal         0x151423D8
    // 0x1513E178: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1513E178: lbu         $a0, 0x6B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X6B);
    after_1:
    // 0x1513E17C: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513E180: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1513E184: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1513E188: mul.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1513E18C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513E190: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x1513E194: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1513E198: add.s       $f18, $f6, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x1513E19C: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x1513E1A0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513E1A4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x1513E1A8: nop

    // 0x1513E1AC: sh          $t8, 0x40($a1)
    MEM_H(0X40, ctx->r5) = ctx->r24;
    // 0x1513E1B0: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1513E1B4: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E1B8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x1513E1BC: nop

    // 0x1513E1C0: sh          $v0, 0x42($a1)
    MEM_H(0X42, ctx->r5) = ctx->r2;
    // 0x1513E1C4: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1513E1C8: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1513E1CC: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1513E1D0: mul.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1513E1D4: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1513E1D8: mul.s       $f2, $f10, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1513E1DC: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x1513E1E0: add.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x1513E1E4: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x1513E1E8: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513E1EC: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1513E1F0: nop

    // 0x1513E1F4: sh          $t1, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r9;
    // 0x1513E1F8: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x1513E1FC: sub.s       $f8, $f4, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x1513E200: sub.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x1513E204: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x1513E208: sh          $v0, 0x52($a1)
    MEM_H(0X52, ctx->r5) = ctx->r2;
    // 0x1513E20C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513E210: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1513E214: nop

    // 0x1513E218: sh          $t3, 0x50($a1)
    MEM_H(0X50, ctx->r5) = ctx->r11;
    // 0x1513E21C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x1513E220: sub.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x1513E224: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E228: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x1513E22C: nop

    // 0x1513E230: sh          $t5, 0x54($a1)
    MEM_H(0X54, ctx->r5) = ctx->r13;
    // 0x1513E234: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1513E238: sh          $v0, 0x62($a1)
    MEM_H(0X62, ctx->r5) = ctx->r2;
    // 0x1513E23C: add.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x1513E240: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513E244: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x1513E248: nop

    // 0x1513E24C: sh          $t7, 0x60($a1)
    MEM_H(0X60, ctx->r5) = ctx->r15;
    // 0x1513E250: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1513E254: sub.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x1513E258: add.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x1513E25C: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x1513E260: sh          $v0, 0x72($a1)
    MEM_H(0X72, ctx->r5) = ctx->r2;
    // 0x1513E264: sub.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x1513E268: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513E26C: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513E270: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1513E274: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x1513E278: sh          $t1, 0x70($a1)
    MEM_H(0X70, ctx->r5) = ctx->r9;
    // 0x1513E27C: sh          $t9, 0x64($a1)
    MEM_H(0X64, ctx->r5) = ctx->r25;
    // 0x1513E280: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1513E284: add.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x1513E288: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513E28C: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x1513E290: nop

    // 0x1513E294: sh          $t3, 0x74($a1)
    MEM_H(0X74, ctx->r5) = ctx->r11;
    // 0x1513E298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1513E29C: jr          $ra
    // 0x1513E2A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    return;
    // 0x1513E2A0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_150DA50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DA50C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150DA510: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150DA514: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150DA518: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150DA51C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150DA520: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x150DA524: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x150DA528: bne         $a2, $at, L_150DA560
    if (ctx->r6 != ctx->r1) {
        // 0x150DA52C: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_150DA560;
    }
    // 0x150DA52C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x150DA530: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x150DA534: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x150DA538: beql        $t7, $t8, L_150DA554
    if (ctx->r15 == ctx->r24) {
        // 0x150DA53C: lwc1        $f4, 0x8($a1)
        ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
            goto L_150DA554;
    }
    goto skip_0;
    // 0x150DA53C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    skip_0:
    // 0x150DA540: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x150DA544: lbu         $t0, 0x4($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X4);
    // 0x150DA548: bnel        $t9, $t0, L_150DA5E0
    if (ctx->r25 != ctx->r8) {
        // 0x150DA54C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150DA5E0;
    }
    goto skip_1;
    // 0x150DA54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x150DA550: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
L_150DA554:
    // 0x150DA554: swc1        $f4, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f4.u32l;
    // 0x150DA558: b           L_150DA5E0
    // 0x150DA55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150DA5E0;
    // 0x150DA55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150DA560:
    // 0x150DA560: bne         $v1, $zero, L_150DA598
    if (ctx->r3 != 0) {
        // 0x150DA564: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_150DA598;
    }
    // 0x150DA564: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x150DA568: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x150DA56C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x150DA570: beq         $v1, $t1, L_150DA588
    if (ctx->r3 == ctx->r9) {
        // 0x150DA574: nop
    
            goto L_150DA588;
    }
    // 0x150DA574: nop

    // 0x150DA578: lbu         $t2, 0x4($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X4);
    // 0x150DA57C: lbu         $t3, 0x4($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X4);
    // 0x150DA580: bnel        $t2, $t3, L_150DA5E0
    if (ctx->r10 != ctx->r11) {
        // 0x150DA584: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150DA5E0;
    }
    goto skip_2;
    // 0x150DA584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
L_150DA588:
    // 0x150DA588: jal         0x1516972C
    // 0x150DA58C: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150DA58C: nop

    after_0:
    // 0x150DA590: b           L_150DA5E0
    // 0x150DA594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150DA5E0;
    // 0x150DA594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150DA598:
    // 0x150DA598: bnel        $v1, $at, L_150DA5E0
    if (ctx->r3 != ctx->r1) {
        // 0x150DA59C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150DA5E0;
    }
    goto skip_3;
    // 0x150DA59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x150DA5A0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x150DA5A4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x150DA5A8: bnel        $a0, $v1, L_150DA5C8
    if (ctx->r4 != ctx->r3) {
        // 0x150DA5AC: lw          $t6, 0x4($a1)
        ctx->r14 = MEM_W(ctx->r5, 0X4);
            goto L_150DA5C8;
    }
    goto skip_4;
    // 0x150DA5AC: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    skip_4:
    // 0x150DA5B0: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    // 0x150DA5B4: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x150DA5B8: lbu         $t5, 0x9($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X9);
    // 0x150DA5BC: b           L_150DA5DC
    // 0x150DA5C0: sb          $t5, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r13;
        goto L_150DA5DC;
    // 0x150DA5C0: sb          $t5, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r13;
    // 0x150DA5C4: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
L_150DA5C8:
    // 0x150DA5C8: bnel        $t6, $v1, L_150DA5E0
    if (ctx->r14 != ctx->r3) {
        // 0x150DA5CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150DA5E0;
    }
    goto skip_5;
    // 0x150DA5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x150DA5D0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x150DA5D4: lbu         $t7, 0x8($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X8);
    // 0x150DA5D8: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
L_150DA5DC:
    // 0x150DA5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150DA5E0:
    // 0x150DA5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150DA5E4: jr          $ra
    // 0x150DA5E8: nop

    return;
    return;
    // 0x150DA5E8: nop

;}
RECOMP_FUNC void func_15009740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15009740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15009744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15009748: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1500974C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15009750: jal         0x15161494
    // 0x15009754: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15161494(rdram, ctx);
        goto after_0;
    // 0x15009754: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15009758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1500975C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15009760: jr          $ra
    // 0x15009764: nop

    return;
    return;
    // 0x15009764: nop

;}
RECOMP_FUNC void func_15106214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15106214: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x15106218: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x1510621C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15106220: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x15106224: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x15106228: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x1510622C: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x15106230: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x15106234: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x15106238: sdc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X38, ctx->r29);
    // 0x1510623C: sdc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X30, ctx->r29);
    // 0x15106240: sdc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X28, ctx->r29);
    // 0x15106244: sdc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X20, ctx->r29);
    // 0x15106248: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x1510624C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x15106250: jal         0x151061E0
    // 0x15106254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_151061E0(rdram, ctx);
        goto after_0;
    // 0x15106254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15106258: lw          $t6, 0x48($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X48);
    // 0x1510625C: lwc1        $f2, 0x64($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X64);
    // 0x15106260: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x15106264: blez        $t6, L_15106478
    if (SIGNED(ctx->r14) <= 0) {
        // 0x15106268: mov.s       $f20, $f2
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
            goto L_15106478;
    }
    // 0x15106268: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x1510626C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15106270: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
    // 0x15106274: addiu       $s4, $v0, 0x1C
    ctx->r20 = ADD32(ctx->r2, 0X1C);
    // 0x15106278: addiu       $s5, $v0, 0x28
    ctx->r21 = ADD32(ctx->r2, 0X28);
    // 0x1510627C: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
L_15106280:
    // 0x15106280: swc1        $f20, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f20.u32l;
    // 0x15106284: jal         0x151064B4
    // 0x15106288: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_151064B4(rdram, ctx);
        goto after_1;
    // 0x15106288: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x1510628C: mov.s       $f30, $f0
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    ctx->f30.fl = ctx->f0.fl;
    // 0x15106290: jal         0x151064DC
    // 0x15106294: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_151064DC(rdram, ctx);
        goto after_2;
    // 0x15106294: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x15106298: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x1510629C: jal         0x15106510
    // 0x151062A0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_15106510(rdram, ctx);
        goto after_3;
    // 0x151062A0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x151062A4: swc1        $f0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f0.u32l;
    // 0x151062A8: jal         0x15106540
    // 0x151062AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_15106540(rdram, ctx);
        goto after_4;
    // 0x151062AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_4:
    // 0x151062B0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x151062B4: jal         0x15106558
    // 0x151062B8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_15106558(rdram, ctx);
        goto after_5;
    // 0x151062B8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x151062BC: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x151062C0: jal         0x15106584
    // 0x151062C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_15106584(rdram, ctx);
        goto after_6;
    // 0x151062C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x151062C8: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x151062CC: jal         0x151065BC
    // 0x151062D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_151065BC(rdram, ctx);
        goto after_7;
    // 0x151062D0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_7:
    // 0x151062D4: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x151062D8: jal         0x151065EC
    // 0x151062DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_151065EC(rdram, ctx);
        goto after_8;
    // 0x151062DC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_8:
    // 0x151062E0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151062E4: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151062E8: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x151062EC: mul.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x151062F0: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x151062F4: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151062F8: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x151062FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x15106300: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x15106304: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x15106308: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x1510630C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x15106310: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x15106314: mul.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x15106318: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x1510631C: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15106320: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x15106324: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15106328: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x1510632C: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x15106330: mul.s       $f4, $f16, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f30.fl);
    // 0x15106334: nop

    // 0x15106338: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1510633C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15106340: mul.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x15106344: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x15106348: mul.s       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x1510634C: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15106350: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15106354: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x15106358: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1510635C: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15106360: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15106364: mul.s       $f16, $f8, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x15106368: nop

    // 0x1510636C: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15106370: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x15106374: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x15106378: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x1510637C: mul.s       $f10, $f16, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x15106380: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15106384: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15106388: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x1510638C: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15106390: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15106394: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15106398: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x1510639C: nop

    // 0x151063A0: mul.s       $f10, $f16, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x151063A4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151063A8: mul.s       $f6, $f18, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x151063AC: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x151063B0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151063B4: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151063B8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151063BC: swc1        $f18, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f18.u32l;
    // 0x151063C0: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151063C4: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x151063C8: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151063CC: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x151063D0: nop

    // 0x151063D4: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x151063D8: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x151063DC: mul.s       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x151063E0: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x151063E4: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151063E8: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151063EC: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151063F0: swc1        $f18, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f18.u32l;
    // 0x151063F4: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151063F8: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x151063FC: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15106400: mul.s       $f4, $f16, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f24.fl);
    // 0x15106404: nop

    // 0x15106408: mul.s       $f10, $f6, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x1510640C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x15106410: mul.s       $f16, $f18, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x15106414: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x15106418: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1510641C: add.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x15106420: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x15106424: jal         0x15146078
    // 0x15106428: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
    func_15146078(rdram, ctx);
        goto after_9;
    // 0x15106428: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
    after_9:
    // 0x1510642C: bne         $v0, $zero, L_15106454
    if (ctx->r2 != 0) {
        // 0x15106430: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_15106454;
    }
    // 0x15106430: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15106434: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15106438: nop

    // 0x1510643C: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x15106440: swc1        $f0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f0.u32l;
    // 0x15106444: swc1        $f0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f0.u32l;
    // 0x15106448: swc1        $f0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f0.u32l;
    // 0x1510644C: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x15106450: swc1        $f0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f0.u32l;
L_15106454:
    // 0x15106454: lw          $t7, 0x48($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X48);
    // 0x15106458: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1510645C: addiu       $s1, $s1, 0x34
    ctx->r17 = ADD32(ctx->r17, 0X34);
    // 0x15106460: slt         $at, $s2, $t7
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15106464: addiu       $s3, $s3, 0x34
    ctx->r19 = ADD32(ctx->r19, 0X34);
    // 0x15106468: addiu       $s4, $s4, 0x34
    ctx->r20 = ADD32(ctx->r20, 0X34);
    // 0x1510646C: addiu       $s5, $s5, 0x34
    ctx->r21 = ADD32(ctx->r21, 0X34);
    // 0x15106470: bne         $at, $zero, L_15106280
    if (ctx->r1 != 0) {
        // 0x15106474: add.s       $f20, $f20, $f8
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f8.fl;
            goto L_15106280;
    }
    // 0x15106474: add.s       $f20, $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f8.fl;
L_15106478:
    // 0x15106478: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x1510647C: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x15106480: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x15106484: ldc1        $f24, 0x20($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X20);
    // 0x15106488: ldc1        $f26, 0x28($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X28);
    // 0x1510648C: ldc1        $f28, 0x30($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X30);
    // 0x15106490: ldc1        $f30, 0x38($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X38);
    // 0x15106494: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x15106498: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x1510649C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x151064A0: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x151064A4: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x151064A8: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x151064AC: jr          $ra
    // 0x151064B0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x151064B0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_151303EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151303EC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151303F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151303F4: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x151303F8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151303FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15130400: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15130404: beq         $t7, $zero, L_1513042C
    if (ctx->r15 == 0) {
        // 0x15130408: addiu       $t0, $t0, -0x161C
        ctx->r8 = ADD32(ctx->r8, -0X161C);
            goto L_1513042C;
    }
    // 0x15130408: addiu       $t0, $t0, -0x161C
    ctx->r8 = ADD32(ctx->r8, -0X161C);
    // 0x1513040C: lh          $t8, 0x1A($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1A);
    // 0x15130410: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x15130414: subu        $t1, $t8, $t9
    ctx->r9 = SUB32(ctx->r24, ctx->r25);
    // 0x15130418: sh          $t1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r9;
    // 0x1513041C: lh          $t2, 0x1A($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X1A);
    // 0x15130420: bgezl       $t2, L_15130430
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15130424: lw          $t3, 0x68($a0)
        ctx->r11 = MEM_W(ctx->r4, 0X68);
            goto L_15130430;
    }
    goto skip_0;
    // 0x15130424: lw          $t3, 0x68($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X68);
    skip_0:
    // 0x15130428: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_1513042C:
    // 0x1513042C: lw          $t3, 0x68($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X68);
L_15130430:
    // 0x15130430: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15130434: addiu       $t0, $t0, -0x161C
    ctx->r8 = ADD32(ctx->r8, -0X161C);
    // 0x15130438: andi        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 & 0X2;
    // 0x1513043C: beq         $t4, $zero, L_15130460
    if (ctx->r12 == 0) {
        // 0x15130440: lui         $v0, 0x800C
        ctx->r2 = S32(0X800C << 16);
            goto L_15130460;
    }
    // 0x15130440: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15130444: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15130448: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1513044C: lwc1        $f4, 0x64($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X64);
    // 0x15130450: lwc1        $f10, 0x5C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x15130454: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15130458: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1513045C: swc1        $f16, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f16.u32l;
L_15130460:
    // 0x15130460: lw          $at, 0x40($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X40);
    // 0x15130464: addiu       $t5, $sp, 0x48
    ctx->r13 = ADD32(ctx->r29, 0X48);
    // 0x15130468: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1513046C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x15130470: lw          $t7, 0x44($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X44);
    // 0x15130474: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15130478: sw          $t7, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r15;
    // 0x1513047C: lw          $at, 0x48($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X48);
    // 0x15130480: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x15130484: lw          $a1, 0x68($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X68);
    // 0x15130488: andi        $t8, $a1, 0x4
    ctx->r24 = ctx->r5 & 0X4;
    // 0x1513048C: beql        $t8, $zero, L_151304E4
    if (ctx->r24 == 0) {
        // 0x15130490: andi        $t9, $a1, 0x200
        ctx->r25 = ctx->r5 & 0X200;
            goto L_151304E4;
    }
    goto skip_1;
    // 0x15130490: andi        $t9, $a1, 0x200
    ctx->r25 = ctx->r5 & 0X200;
    skip_1:
    // 0x15130494: lwc1        $f18, 0x58($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X58);
    // 0x15130498: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1513049C: lwc1        $f10, 0x40($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X40);
    // 0x151304A0: lwc1        $f16, 0x5C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x151304A4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x151304A8: lw          $a1, 0x68($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X68);
    // 0x151304AC: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x151304B0: lwc1        $f10, 0x44($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X44);
    // 0x151304B4: swc1        $f8, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f8.u32l;
    // 0x151304B8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151304BC: lwc1        $f8, 0x60($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X60);
    // 0x151304C0: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151304C4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151304C8: lwc1        $f10, 0x48($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X48);
    // 0x151304CC: swc1        $f6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f6.u32l;
    // 0x151304D0: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x151304D4: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x151304D8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x151304DC: swc1        $f4, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f4.u32l;
    // 0x151304E0: andi        $t9, $a1, 0x200
    ctx->r25 = ctx->r5 & 0X200;
L_151304E4:
    // 0x151304E4: beql        $t9, $zero, L_15130530
    if (ctx->r25 == 0) {
        // 0x151304E8: andi        $t5, $a1, 0x400
        ctx->r13 = ctx->r5 & 0X400;
            goto L_15130530;
    }
    goto skip_2;
    // 0x151304E8: andi        $t5, $a1, 0x400
    ctx->r13 = ctx->r5 & 0X400;
    skip_2:
    // 0x151304EC: lh          $v1, 0x1A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1A);
    // 0x151304F0: lh          $t1, 0x2E($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2E);
    // 0x151304F4: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x151304F8: beql        $at, $zero, L_15130530
    if (ctx->r1 == 0) {
        // 0x151304FC: andi        $t5, $a1, 0x400
        ctx->r13 = ctx->r5 & 0X400;
            goto L_15130530;
    }
    goto skip_3;
    // 0x151304FC: andi        $t5, $a1, 0x400
    ctx->r13 = ctx->r5 & 0X400;
    skip_3:
    // 0x15130500: lh          $t2, 0x30($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X30);
    // 0x15130504: lbu         $t6, 0x2B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2B);
    // 0x15130508: multu       $v1, $t2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1513050C: mflo        $v0
    ctx->r2 = lo;
    // 0x15130510: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x15130514: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x15130518: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1513051C: beq         $at, $zero, L_1513052C
    if (ctx->r1 == 0) {
        // 0x15130520: or          $v0, $t4, $zero
        ctx->r2 = ctx->r12 | 0;
            goto L_1513052C;
    }
    // 0x15130520: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x15130524: sb          $v0, 0x2B($a0)
    MEM_B(0X2B, ctx->r4) = ctx->r2;
    // 0x15130528: lw          $a1, 0x68($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X68);
L_1513052C:
    // 0x1513052C: andi        $t5, $a1, 0x400
    ctx->r13 = ctx->r5 & 0X400;
L_15130530:
    // 0x15130530: beq         $t5, $zero, L_151308C4
    if (ctx->r13 == 0) {
        // 0x15130534: nop
    
            goto L_151308C4;
    }
    // 0x15130534: nop

    // 0x15130538: lh          $t7, 0x1A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A);
    // 0x1513053C: lh          $t8, 0x32($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X32);
    // 0x15130540: andi        $t9, $a1, 0x800
    ctx->r25 = ctx->r5 & 0X800;
    // 0x15130544: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15130548: beq         $at, $zero, L_151308C4
    if (ctx->r1 == 0) {
        // 0x1513054C: nop
    
            goto L_151308C4;
    }
    // 0x1513054C: nop

    // 0x15130550: beq         $t9, $zero, L_15130868
    if (ctx->r25 == 0) {
        // 0x15130554: sll         $t3, $a1, 12
        ctx->r11 = S32(ctx->r5 << 12);
            goto L_15130868;
    }
    // 0x15130554: sll         $t3, $a1, 12
    ctx->r11 = S32(ctx->r5 << 12);
    // 0x15130558: sll         $t1, $a1, 12
    ctx->r9 = S32(ctx->r5 << 12);
    // 0x1513055C: bgez        $t1, L_15130638
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15130560: lw          $v0, 0x0($t0)
        ctx->r2 = MEM_W(ctx->r8, 0X0);
            goto L_15130638;
    }
    // 0x15130560: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x15130564: beq         $v0, $zero, L_151308C4
    if (ctx->r2 == 0) {
        // 0x15130568: andi        $a1, $v0, 0x3
        ctx->r5 = ctx->r2 & 0X3;
            goto L_151308C4;
    }
    // 0x15130568: andi        $a1, $v0, 0x3
    ctx->r5 = ctx->r2 & 0X3;
    // 0x1513056C: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x15130570: beq         $a1, $zero, L_151305B4
    if (ctx->r5 == 0) {
        // 0x15130574: addu        $v1, $a1, $v0
        ctx->r3 = ADD32(ctx->r5, ctx->r2);
            goto L_151305B4;
    }
    // 0x15130574: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x15130578: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1513057C: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130580: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15130584: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15130588: beql        $v1, $v0, L_151305AC
    if (ctx->r3 == ctx->r2) {
        // 0x1513058C: swc1        $f8, 0x38($a0)
        MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
            goto L_151305AC;
    }
    goto skip_4;
    // 0x1513058C: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    skip_4:
    // 0x15130590: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
L_15130594:
    // 0x15130594: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130598: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1513059C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151305A0: bnel        $v1, $v0, L_15130594
    if (ctx->r3 != ctx->r2) {
        // 0x151305A4: swc1        $f8, 0x38($a0)
        MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
            goto L_15130594;
    }
    goto skip_5;
    // 0x151305A4: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    skip_5:
    // 0x151305A8: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
L_151305AC:
    // 0x151305AC: beq         $v0, $zero, L_151308C4
    if (ctx->r2 == 0) {
        // 0x151305B0: nop
    
            goto L_151308C4;
    }
    // 0x151305B0: nop

L_151305B4:
    // 0x151305B4: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151305B8: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151305BC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x151305C0: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151305C4: beql        $v0, $zero, L_1513060C
    if (ctx->r2 == 0) {
        // 0x151305C8: swc1        $f10, 0x38($a0)
        MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
            goto L_1513060C;
    }
    goto skip_6;
    // 0x151305C8: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    skip_6:
    // 0x151305CC: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
L_151305D0:
    // 0x151305D0: lwc1        $f18, 0x38($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151305D4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x151305D8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151305DC: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x151305E0: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151305E4: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151305E8: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x151305EC: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151305F0: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151305F4: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x151305F8: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151305FC: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15130600: bnel        $v0, $zero, L_151305D0
    if (ctx->r2 != 0) {
        // 0x15130604: swc1        $f10, 0x38($a0)
        MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
            goto L_151305D0;
    }
    goto skip_7;
    // 0x15130604: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    skip_7:
    // 0x15130608: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
L_1513060C:
    // 0x1513060C: lwc1        $f18, 0x38($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130610: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15130614: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x15130618: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1513061C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15130620: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x15130624: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130628: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1513062C: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x15130630: b           L_151308C4
    // 0x15130634: nop

        goto L_151308C4;
    // 0x15130634: nop

L_15130638:
    // 0x15130638: sll         $t2, $a1, 11
    ctx->r10 = S32(ctx->r5 << 11);
    // 0x1513063C: bgez        $t2, L_15130718
    if (SIGNED(ctx->r10) >= 0) {
        // 0x15130640: nop
    
            goto L_15130718;
    }
    // 0x15130640: nop

    // 0x15130644: beq         $v0, $zero, L_151308C4
    if (ctx->r2 == 0) {
        // 0x15130648: andi        $a1, $v0, 0x3
        ctx->r5 = ctx->r2 & 0X3;
            goto L_151308C4;
    }
    // 0x15130648: andi        $a1, $v0, 0x3
    ctx->r5 = ctx->r2 & 0X3;
    // 0x1513064C: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x15130650: beq         $a1, $zero, L_15130694
    if (ctx->r5 == 0) {
        // 0x15130654: addu        $v1, $a1, $v0
        ctx->r3 = ADD32(ctx->r5, ctx->r2);
            goto L_15130694;
    }
    // 0x15130654: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x15130658: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1513065C: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130660: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15130664: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15130668: beql        $v1, $v0, L_1513068C
    if (ctx->r3 == ctx->r2) {
        // 0x1513066C: swc1        $f4, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
            goto L_1513068C;
    }
    goto skip_8;
    // 0x1513066C: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    skip_8:
    // 0x15130670: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
L_15130674:
    // 0x15130674: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130678: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1513067C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15130680: bnel        $v1, $v0, L_15130674
    if (ctx->r3 != ctx->r2) {
        // 0x15130684: swc1        $f4, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
            goto L_15130674;
    }
    goto skip_9;
    // 0x15130684: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    skip_9:
    // 0x15130688: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
L_1513068C:
    // 0x1513068C: beq         $v0, $zero, L_151308C4
    if (ctx->r2 == 0) {
        // 0x15130690: nop
    
            goto L_151308C4;
    }
    // 0x15130690: nop

L_15130694:
    // 0x15130694: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x15130698: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1513069C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x151306A0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151306A4: beql        $v0, $zero, L_151306EC
    if (ctx->r2 == 0) {
        // 0x151306A8: swc1        $f8, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
            goto L_151306EC;
    }
    goto skip_10;
    // 0x151306A8: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
    skip_10:
    // 0x151306AC: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
L_151306B0:
    // 0x151306B0: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151306B4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x151306B8: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151306BC: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x151306C0: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151306C4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151306C8: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x151306CC: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151306D0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151306D4: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
    // 0x151306D8: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151306DC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151306E0: bnel        $v0, $zero, L_151306B0
    if (ctx->r2 != 0) {
        // 0x151306E4: swc1        $f8, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
            goto L_151306B0;
    }
    goto skip_11;
    // 0x151306E4: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
    skip_11:
    // 0x151306E8: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
L_151306EC:
    // 0x151306EC: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151306F0: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151306F4: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x151306F8: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151306FC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15130700: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x15130704: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130708: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1513070C: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
    // 0x15130710: b           L_151308C4
    // 0x15130714: nop

        goto L_151308C4;
    // 0x15130714: nop

L_15130718:
    // 0x15130718: beq         $v0, $zero, L_151308C4
    if (ctx->r2 == 0) {
        // 0x1513071C: andi        $a1, $v0, 0x3
        ctx->r5 = ctx->r2 & 0X3;
            goto L_151308C4;
    }
    // 0x1513071C: andi        $a1, $v0, 0x3
    ctx->r5 = ctx->r2 & 0X3;
    // 0x15130720: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x15130724: beq         $a1, $zero, L_15130784
    if (ctx->r5 == 0) {
        // 0x15130728: addu        $v1, $a1, $v0
        ctx->r3 = ADD32(ctx->r5, ctx->r2);
            goto L_15130784;
    }
    // 0x15130728: addu        $v1, $a1, $v0
    ctx->r3 = ADD32(ctx->r5, ctx->r2);
    // 0x1513072C: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x15130730: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130734: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130738: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1513073C: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15130740: nop

    // 0x15130744: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15130748: beq         $v1, $v0, L_15130774
    if (ctx->r3 == ctx->r2) {
        // 0x1513074C: nop
    
            goto L_15130774;
    }
    // 0x1513074C: nop

    // 0x15130750: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
L_15130754:
    // 0x15130754: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130758: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x1513075C: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130760: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15130764: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x15130768: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1513076C: bnel        $v1, $v0, L_15130754
    if (ctx->r3 != ctx->r2) {
        // 0x15130770: swc1        $f10, 0x38($a0)
        MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
            goto L_15130754;
    }
    goto skip_12;
    // 0x15130770: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    skip_12:
L_15130774:
    // 0x15130774: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x15130778: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x1513077C: beq         $v0, $zero, L_151308C4
    if (ctx->r2 == 0) {
        // 0x15130780: nop
    
            goto L_151308C4;
    }
    // 0x15130780: nop

L_15130784:
    // 0x15130784: lwc1        $f0, 0x34($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X34);
    // 0x15130788: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1513078C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x15130790: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130794: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15130798: beq         $v0, $zero, L_1513080C
    if (ctx->r2 == 0) {
        // 0x1513079C: nop
    
            goto L_1513080C;
    }
    // 0x1513079C: nop

L_151307A0:
    // 0x151307A0: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151307A4: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x151307A8: lwc1        $f18, 0x38($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151307AC: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x151307B0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151307B4: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x151307B8: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151307BC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151307C0: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x151307C4: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151307C8: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151307CC: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
    // 0x151307D0: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151307D4: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151307D8: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x151307DC: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151307E0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151307E4: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x151307E8: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x151307EC: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151307F0: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x151307F4: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151307F8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151307FC: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x15130800: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130804: bne         $v0, $zero, L_151307A0
    if (ctx->r2 != 0) {
        // 0x15130808: nop
    
            goto L_151307A0;
    }
    // 0x15130808: nop

L_1513080C:
    // 0x1513080C: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15130810: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x15130814: lwc1        $f18, 0x38($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130818: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1513081C: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x15130820: lwc1        $f6, 0x3C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130824: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15130828: swc1        $f4, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f4.u32l;
    // 0x1513082C: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130830: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15130834: swc1        $f8, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f8.u32l;
    // 0x15130838: lwc1        $f18, 0x3C($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1513083C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x15130840: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x15130844: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x15130848: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1513084C: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x15130850: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x15130854: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x15130858: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x1513085C: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x15130860: b           L_151308C4
    // 0x15130864: nop

        goto L_151308C4;
    // 0x15130864: nop

L_15130868:
    // 0x15130868: bltz        $t3, L_15130894
    if (SIGNED(ctx->r11) < 0) {
        // 0x1513086C: lui         $at, 0x10
        ctx->r1 = S32(0X10 << 16);
            goto L_15130894;
    }
    // 0x1513086C: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x15130870: lw          $t4, 0x0($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X0);
    // 0x15130874: lwc1        $f18, 0x34($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X34);
    // 0x15130878: lwc1        $f16, 0x3C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1513087C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x15130880: lw          $a1, 0x68($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X68);
    // 0x15130884: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15130888: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x1513088C: add.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x15130890: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
L_15130894:
    // 0x15130894: and         $t6, $a1, $at
    ctx->r14 = ctx->r5 & ctx->r1;
    // 0x15130898: bne         $t6, $zero, L_151308C4
    if (ctx->r14 != 0) {
        // 0x1513089C: nop
    
            goto L_151308C4;
    }
    // 0x1513089C: nop

    // 0x151308A0: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x151308A4: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x151308A8: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x151308AC: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x151308B0: nop

    // 0x151308B4: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x151308B8: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151308BC: add.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151308C0: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
L_151308C4:
    // 0x151308C4: bnel        $a3, $zero, L_15130A10
    if (ctx->r7 != 0) {
        // 0x151308C8: lb          $v0, 0x72($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X72);
            goto L_15130A10;
    }
    goto skip_13;
    // 0x151308C8: lb          $v0, 0x72($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X72);
    skip_13:
    // 0x151308CC: lw          $a2, 0x20($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X20);
    // 0x151308D0: beql        $a2, $zero, L_15130A10
    if (ctx->r6 == 0) {
        // 0x151308D4: lb          $v0, 0x72($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X72);
            goto L_15130A10;
    }
    goto skip_14;
    // 0x151308D4: lb          $v0, 0x72($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X72);
    skip_14:
    // 0x151308D8: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x151308DC: lbu         $t7, 0x2D($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X2D);
    // 0x151308E0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151308E4: multu       $a2, $t1
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151308E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151308EC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x151308F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x151308F4: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x151308F8: lbu         $a1, 0xB64($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XB64);
    // 0x151308FC: lw          $t9, 0x1C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1C);
    // 0x15130900: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x15130904: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x15130908: mflo        $t2
    ctx->r10 = lo;
    // 0x1513090C: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x15130910: slt         $at, $v1, $t3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x15130914: sw          $t3, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r11;
    // 0x15130918: beq         $at, $zero, L_15130998
    if (ctx->r1 == 0) {
        // 0x1513091C: or          $v0, $t3, $zero
        ctx->r2 = ctx->r11 | 0;
            goto L_15130998;
    }
    // 0x1513091C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x15130920: lw          $a1, 0x68($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X68);
    // 0x15130924: andi        $t4, $a1, 0x10
    ctx->r12 = ctx->r5 & 0X10;
    // 0x15130928: beq         $t4, $zero, L_15130938
    if (ctx->r12 == 0) {
        // 0x1513092C: andi        $t6, $a1, 0x8
        ctx->r14 = ctx->r5 & 0X8;
            goto L_15130938;
    }
    // 0x1513092C: andi        $t6, $a1, 0x8
    ctx->r14 = ctx->r5 & 0X8;
    // 0x15130930: b           L_15130A0C
    // 0x15130934: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_15130A0C;
    // 0x15130934: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15130938:
    // 0x15130938: beq         $t6, $zero, L_1513097C
    if (ctx->r14 == 0) {
        // 0x1513093C: negu        $t8, $a2
        ctx->r24 = SUB32(0, ctx->r6);
            goto L_1513097C;
    }
    // 0x1513093C: negu        $t8, $a2
    ctx->r24 = SUB32(0, ctx->r6);
    // 0x15130940: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x15130944: mfhi        $t5
    ctx->r13 = hi;
    // 0x15130948: subu        $t7, $v1, $t5
    ctx->r15 = SUB32(ctx->r3, ctx->r13);
    // 0x1513094C: bne         $v1, $zero, L_15130958
    if (ctx->r3 != 0) {
        // 0x15130950: nop
    
            goto L_15130958;
    }
    // 0x15130950: nop

    // 0x15130954: break       7
    do_break(353569108);
L_15130958:
    // 0x15130958: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1513095C: bne         $v1, $at, L_15130970
    if (ctx->r3 != ctx->r1) {
        // 0x15130960: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_15130970;
    }
    // 0x15130960: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15130964: bne         $v0, $at, L_15130970
    if (ctx->r2 != ctx->r1) {
        // 0x15130968: nop
    
            goto L_15130970;
    }
    // 0x15130968: nop

    // 0x1513096C: break       6
    do_break(353569132);
L_15130970:
    // 0x15130970: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x15130974: b           L_15130A0C
    // 0x15130978: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
        goto L_15130A0C;
    // 0x15130978: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
L_1513097C:
    // 0x1513097C: subu        $t1, $v0, $v1
    ctx->r9 = SUB32(ctx->r2, ctx->r3);
    // 0x15130980: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15130984: sw          $t1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r9;
    // 0x15130988: bne         $at, $zero, L_1513097C
    if (ctx->r1 != 0) {
        // 0x1513098C: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_1513097C;
    }
    // 0x1513098C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x15130990: b           L_15130A10
    // 0x15130994: lb          $v0, 0x72($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X72);
        goto L_15130A10;
    // 0x15130994: lb          $v0, 0x72($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X72);
L_15130998:
    // 0x15130998: bgezl       $v0, L_15130A10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1513099C: lb          $v0, 0x72($a0)
        ctx->r2 = MEM_B(ctx->r4, 0X72);
            goto L_15130A10;
    }
    goto skip_15;
    // 0x1513099C: lb          $v0, 0x72($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X72);
    skip_15:
    // 0x151309A0: lw          $a1, 0x68($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X68);
    // 0x151309A4: andi        $t9, $a1, 0x20
    ctx->r25 = ctx->r5 & 0X20;
    // 0x151309A8: beq         $t9, $zero, L_151309B8
    if (ctx->r25 == 0) {
        // 0x151309AC: andi        $t2, $a1, 0x8
        ctx->r10 = ctx->r5 & 0X8;
            goto L_151309B8;
    }
    // 0x151309AC: andi        $t2, $a1, 0x8
    ctx->r10 = ctx->r5 & 0X8;
    // 0x151309B0: b           L_15130A0C
    // 0x151309B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_15130A0C;
    // 0x151309B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_151309B8:
    // 0x151309B8: beq         $t2, $zero, L_151309FC
    if (ctx->r10 == 0) {
        // 0x151309BC: negu        $t3, $v0
        ctx->r11 = SUB32(0, ctx->r2);
            goto L_151309FC;
    }
    // 0x151309BC: negu        $t3, $v0
    ctx->r11 = SUB32(0, ctx->r2);
    // 0x151309C0: div         $zero, $t3, $v1
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r3)));
    // 0x151309C4: mfhi        $t4
    ctx->r12 = hi;
    // 0x151309C8: negu        $t6, $a2
    ctx->r14 = SUB32(0, ctx->r6);
    // 0x151309CC: bne         $v1, $zero, L_151309D8
    if (ctx->r3 != 0) {
        // 0x151309D0: nop
    
            goto L_151309D8;
    }
    // 0x151309D0: nop

    // 0x151309D4: break       7
    do_break(353569236);
L_151309D8:
    // 0x151309D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151309DC: bne         $v1, $at, L_151309F0
    if (ctx->r3 != ctx->r1) {
        // 0x151309E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151309F0;
    }
    // 0x151309E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151309E4: bne         $t3, $at, L_151309F0
    if (ctx->r11 != ctx->r1) {
        // 0x151309E8: nop
    
            goto L_151309F0;
    }
    // 0x151309E8: nop

    // 0x151309EC: break       6
    do_break(353569260);
L_151309F0:
    // 0x151309F0: sw          $t4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r12;
    // 0x151309F4: b           L_15130A0C
    // 0x151309F8: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
        goto L_15130A0C;
    // 0x151309F8: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
L_151309FC:
    // 0x151309FC: addu        $t5, $v0, $v1
    ctx->r13 = ADD32(ctx->r2, ctx->r3);
    // 0x15130A00: sw          $t5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r13;
    // 0x15130A04: bltz        $t5, L_151309FC
    if (SIGNED(ctx->r13) < 0) {
        // 0x15130A08: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_151309FC;
    }
    // 0x15130A08: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_15130A0C:
    // 0x15130A0C: lb          $v0, 0x72($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X72);
L_15130A10:
    // 0x15130A10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15130A14: beq         $v0, $at, L_15130A50
    if (ctx->r2 == ctx->r1) {
        // 0x15130A18: nop
    
            goto L_15130A50;
    }
    // 0x15130A18: nop

    // 0x15130A1C: bne         $a3, $zero, L_15130A50
    if (ctx->r7 != 0) {
        // 0x15130A20: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15130A50;
    }
    // 0x15130A20: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15130A24: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15130A28: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15130A2C: lw          $t9, -0x68A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X68A0);
    // 0x15130A30: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    // 0x15130A34: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15130A38: jalr        $t9
    // 0x15130A3C: sb          $a3, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x15130A3C: sb          $a3, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r7;
    after_0:
    // 0x15130A40: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x15130A44: bne         $v0, $zero, L_15130A50
    if (ctx->r2 != 0) {
        // 0x15130A48: lbu         $a3, 0x47($sp)
        ctx->r7 = MEM_BU(ctx->r29, 0X47);
            goto L_15130A50;
    }
    // 0x15130A48: lbu         $a3, 0x47($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X47);
    // 0x15130A4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15130A50:
    // 0x15130A50: beql        $a3, $zero, L_15130A90
    if (ctx->r7 == 0) {
        // 0x15130A54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15130A90;
    }
    goto skip_16;
    // 0x15130A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_16:
    // 0x15130A58: lb          $v0, 0x73($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X73);
    // 0x15130A5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15130A60: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15130A64: beq         $v0, $at, L_15130A84
    if (ctx->r2 == ctx->r1) {
        // 0x15130A68: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_15130A84;
    }
    // 0x15130A68: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x15130A6C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x15130A70: lw          $t9, -0x6800($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6800);
    // 0x15130A74: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x15130A78: jalr        $t9
    // 0x15130A7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15130A7C: nop

    after_1:
    // 0x15130A80: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
L_15130A84:
    // 0x15130A84: jal         0x1516972C
    // 0x15130A88: nop

    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x15130A88: nop

    after_2:
    // 0x15130A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15130A90:
    // 0x15130A90: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x15130A94: jr          $ra
    // 0x15130A98: nop

    return;
    return;
    // 0x15130A98: nop

;}
RECOMP_FUNC void n_alEvtqNextEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001C108: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1001C10C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001C110: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1001C114: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1001C118: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x1001C11C: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1001C120: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x1001C124: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x1001C128: beq         $t8, $zero, L_1001C1F4
    if (ctx->r24 == 0) {
        // 0x1001C12C: nop
    
            goto L_1001C1F4;
    }
    // 0x1001C12C: nop

    // 0x1001C130: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x1001C134: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1001C138: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x1001C13C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001C140: beq         $t1, $zero, L_1001C158
    if (ctx->r9 == 0) {
        // 0x1001C144: nop
    
            goto L_1001C158;
    }
    // 0x1001C144: nop

    // 0x1001C148: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x1001C14C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x1001C150: lw          $t4, 0x0($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X0);
    // 0x1001C154: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
L_1001C158:
    // 0x1001C158: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x1001C15C: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x1001C160: beq         $t6, $zero, L_1001C178
    if (ctx->r14 == 0) {
        // 0x1001C164: nop
    
            goto L_1001C178;
    }
    // 0x1001C164: nop

    // 0x1001C168: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x1001C16C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001C170: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x1001C174: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_1001C178:
    // 0x1001C178: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x1001C17C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x1001C180: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x1001C184: jal         0x10023A10
    // 0x1001C188: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x1001C188: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x1001C18C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1001C190: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x1001C194: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1001C198: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1001C19C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C1A0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x1001C1A4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1001C1A8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x1001C1AC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C1B0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001C1B4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x1001C1B8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C1BC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x1001C1C0: beq         $t8, $zero, L_1001C1D8
    if (ctx->r24 == 0) {
        // 0x1001C1C4: nop
    
            goto L_1001C1D8;
    }
    // 0x1001C1C4: nop

    // 0x1001C1C8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C1CC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x1001C1D0: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x1001C1D4: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
L_1001C1D8:
    // 0x1001C1D8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x1001C1DC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x1001C1E0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x1001C1E4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x1001C1E8: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x1001C1EC: b           L_1001C204
    // 0x1001C1F0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
        goto L_1001C204;
    // 0x1001C1F0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
L_1001C1F4:
    // 0x1001C1F4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x1001C1F8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x1001C1FC: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x1001C200: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_1001C204:
    // 0x1001C204: b           L_1001C214
    // 0x1001C208: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
        goto L_1001C214;
    // 0x1001C208: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x1001C20C: b           L_1001C214
    // 0x1001C210: nop

        goto L_1001C214;
    // 0x1001C210: nop

L_1001C214:
    // 0x1001C214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001C218: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1001C21C: jr          $ra
    // 0x1001C220: nop

    return;
    return;
    // 0x1001C220: nop

;}
RECOMP_FUNC void func_15145740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15145740: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15145744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15145748: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1514574C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15145750: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x15145754: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x15145758: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x1514575C: lui         $a1, 0x44FA
    ctx->r5 = S32(0X44FA << 16);
    // 0x15145760: bnel        $t1, $v1, L_15145794
    if (ctx->r9 != ctx->r3) {
        // 0x15145764: lw          $v0, 0x31C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X31C);
            goto L_15145794;
    }
    goto skip_0;
    // 0x15145764: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    skip_0:
    // 0x15145768: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x1514576C: lbu         $t6, 0x7D($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X7D);
    // 0x15145770: beql        $t6, $zero, L_15145794
    if (ctx->r14 == 0) {
        // 0x15145774: lw          $v0, 0x31C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X31C);
            goto L_15145794;
    }
    goto skip_1;
    // 0x15145774: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    skip_1:
    // 0x15145778: lhu         $t7, 0x7A($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X7A);
    // 0x1514577C: lh          $t8, 0x80($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X80);
    // 0x15145780: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x15145784: sll         $t9, $t0, 16
    ctx->r25 = S32(ctx->r8 << 16);
    // 0x15145788: b           L_151457B8
    // 0x1514578C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
        goto L_151457B8;
    // 0x1514578C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x15145790: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
L_15145794:
    // 0x15145794: beql        $v0, $zero, L_151457B8
    if (ctx->r2 == 0) {
        // 0x15145798: lh          $t0, 0x7A($a0)
        ctx->r8 = MEM_H(ctx->r4, 0X7A);
            goto L_151457B8;
    }
    goto skip_2;
    // 0x15145798: lh          $t0, 0x7A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X7A);
    skip_2:
    // 0x1514579C: lhu         $t3, 0x7A($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X7A);
    // 0x151457A0: lh          $t4, 0x12($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X12);
    // 0x151457A4: subu        $t0, $t3, $t4
    ctx->r8 = SUB32(ctx->r11, ctx->r12);
    // 0x151457A8: sll         $t5, $t0, 16
    ctx->r13 = S32(ctx->r8 << 16);
    // 0x151457AC: b           L_151457B8
    // 0x151457B0: sra         $t0, $t5, 16
    ctx->r8 = S32(SIGNED(ctx->r13) >> 16);
        goto L_151457B8;
    // 0x151457B0: sra         $t0, $t5, 16
    ctx->r8 = S32(SIGNED(ctx->r13) >> 16);
    // 0x151457B4: lh          $t0, 0x7A($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X7A);
L_151457B8:
    // 0x151457B8: bnel        $t1, $v1, L_151457E4
    if (ctx->r9 != ctx->r3) {
        // 0x151457BC: lb          $v1, 0x1D1($a0)
        ctx->r3 = MEM_B(ctx->r4, 0X1D1);
            goto L_151457E4;
    }
    goto skip_3;
    // 0x151457BC: lb          $v1, 0x1D1($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X1D1);
    skip_3:
    // 0x151457C0: lbu         $t7, 0x7D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X7D);
    // 0x151457C4: beql        $t7, $zero, L_151457E4
    if (ctx->r15 == 0) {
        // 0x151457C8: lb          $v1, 0x1D1($a0)
        ctx->r3 = MEM_B(ctx->r4, 0X1D1);
            goto L_151457E4;
    }
    goto skip_4;
    // 0x151457C8: lb          $v1, 0x1D1($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X1D1);
    skip_4:
    // 0x151457CC: lh          $v1, 0x82($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X82);
    // 0x151457D0: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x151457D4: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x151457D8: b           L_151457FC
    // 0x151457DC: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
        goto L_151457FC;
    // 0x151457DC: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151457E0: lb          $v1, 0x1D1($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X1D1);
L_151457E4:
    // 0x151457E4: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x151457E8: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x151457EC: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x151457F0: addu        $t2, $t2, $v1
    ctx->r10 = ADD32(ctx->r10, ctx->r3);
    // 0x151457F4: sll         $t3, $t2, 19
    ctx->r11 = S32(ctx->r10 << 19);
    // 0x151457F8: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
L_151457FC:
    // 0x151457FC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x15145800: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x15145804: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15145808: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1514580C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15145810: andi        $a0, $t0, 0xFFFF
    ctx->r4 = ctx->r8 & 0XFFFF;
    // 0x15145814: mul.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15145818: nop

    // 0x1514581C: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x15145820: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x15145824: lwc1        $f10, 0x56B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X56B4);
    // 0x15145828: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x1514582C: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x15145830: mul.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x15145834: addiu       $t6, $a3, 0x8
    ctx->r14 = ADD32(ctx->r7, 0X8);
    // 0x15145838: addiu       $t7, $a3, 0x4
    ctx->r15 = ADD32(ctx->r7, 0X4);
    // 0x1514583C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15145840: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15145844: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x15145848: jal         0x1505A184
    // 0x1514584C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_1505A184(rdram, ctx);
        goto after_0;
    // 0x1514584C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x15145850: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x15145854: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x15145858: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1514585C: beql        $t8, $zero, L_15145968
    if (ctx->r24 == 0) {
        // 0x15145860: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15145968;
    }
    goto skip_5;
    // 0x15145860: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x15145864: jal         0x15047C00
    // 0x15145868: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x15145868: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    after_1:
    // 0x1514586C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15145870: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15145874: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x15145878: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1514587C: swc1        $f18, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f18.u32l;
    // 0x15145880: jal         0x15047D60
    // 0x15145884: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x15145884: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x15145888: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x1514588C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15145890: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15145894: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x15145898: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1514589C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151458A0: lwc1        $f16, 0x56B8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X56B8);
    // 0x151458A4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151458A8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x151458AC: mul.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151458B0: jal         0x15047C00
    // 0x151458B4: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x151458B4: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x151458B8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151458BC: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x151458C0: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151458C4: swc1        $f4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f4.u32l;
    // 0x151458C8: jal         0x15047D60
    // 0x151458CC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x151458CC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x151458D0: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151458D4: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x151458D8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151458DC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151458E0: swc1        $f10, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f10.u32l;
    // 0x151458E4: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x151458E8: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x151458EC: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x151458F0: beql        $t4, $zero, L_15145968
    if (ctx->r12 == 0) {
        // 0x151458F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_15145968;
    }
    goto skip_6;
    // 0x151458F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_6:
    // 0x151458F8: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151458FC: jal         0x15047C00
    // 0x15145900: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x15145900: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x15145904: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15145908: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1514590C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x15145910: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15145914: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15145918: jal         0x15047D60
    // 0x1514591C: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x1514591C: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    after_6:
    // 0x15145920: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x15145924: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15145928: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1514592C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15145930: jal         0x15047C00
    // 0x15145934: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    cosf_recomp(rdram, ctx);
        goto after_7;
    // 0x15145934: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x15145938: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x1514593C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x15145940: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15145944: swc1        $f18, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f18.u32l;
    // 0x15145948: jal         0x15047D60
    // 0x1514594C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    sinf_recomp(rdram, ctx);
        goto after_8;
    // 0x1514594C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x15145950: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15145954: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x15145958: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x1514595C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15145960: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x15145964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15145968:
    // 0x15145968: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1514596C: jr          $ra
    // 0x15145970: nop

    return;
    return;
    // 0x15145970: nop

;}
RECOMP_FUNC void func_1502BD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502BD84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1502BD88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502BD8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1502BD90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1502BD94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1502BD98: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x1502BD9C: sw          $zero, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = 0;
    // 0x1502BDA0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1502BDA4: bne         $v0, $at, L_1502BDBC
    if (ctx->r2 != ctx->r1) {
        // 0x1502BDA8: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_1502BDBC;
    }
    // 0x1502BDA8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1502BDAC: jal         0x1502DF38
    // 0x1502BDB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_1502DF38(rdram, ctx);
        goto after_0;
    // 0x1502BDB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x1502BDB4: b           L_1502BED4
    // 0x1502BDB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1502BED4;
    // 0x1502BDB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1502BDBC:
    // 0x1502BDBC: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x1502BDC0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1502BDC4: beq         $t6, $at, L_1502BED0
    if (ctx->r14 == ctx->r1) {
        // 0x1502BDC8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1502BED0;
    }
    // 0x1502BDC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1502BDCC: beq         $v0, $at, L_1502BED0
    if (ctx->r2 == ctx->r1) {
        // 0x1502BDD0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_1502BED0;
    }
    // 0x1502BDD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1502BDD4: bnel        $v0, $at, L_1502BDF0
    if (ctx->r2 != ctx->r1) {
        // 0x1502BDD8: lbu         $t7, 0x1C9($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X1C9);
            goto L_1502BDF0;
    }
    goto skip_0;
    // 0x1502BDD8: lbu         $t7, 0x1C9($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C9);
    skip_0:
    // 0x1502BDDC: jal         0x1502C608
    // 0x1502BDE0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_1502C608(rdram, ctx);
        goto after_1;
    // 0x1502BDE0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x1502BDE4: b           L_1502BED4
    // 0x1502BDE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1502BED4;
    // 0x1502BDE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1502BDEC: lbu         $t7, 0x1C9($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C9);
L_1502BDF0:
    // 0x1502BDF0: beq         $t7, $zero, L_1502BE00
    if (ctx->r15 == 0) {
        // 0x1502BDF4: nop
    
            goto L_1502BE00;
    }
    // 0x1502BDF4: nop

    // 0x1502BDF8: jal         0x1502FBE8
    // 0x1502BDFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1502FBE8(rdram, ctx);
        goto after_2;
    // 0x1502BDFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_1502BE00:
    // 0x1502BE00: jal         0x1502E4C4
    // 0x1502BE04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_1502E4C4(rdram, ctx);
        goto after_3;
    // 0x1502BE04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x1502BE08: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1502BE0C: jal         0x1502DF38
    // 0x1502BE10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_1502DF38(rdram, ctx);
        goto after_4;
    // 0x1502BE10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x1502BE14: jal         0x1503A08C
    // 0x1502BE18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1503A08C(rdram, ctx);
        goto after_5;
    // 0x1502BE18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x1502BE1C: lw          $t8, 0x1D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1D4);
    // 0x1502BE20: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x1502BE24: bne         $t8, $zero, L_1502BE34
    if (ctx->r24 != 0) {
        // 0x1502BE28: nop
    
            goto L_1502BE34;
    }
    // 0x1502BE28: nop

    // 0x1502BE2C: b           L_1502BE44
    // 0x1502BE30: sb          $t9, 0x1FC($s0)
    MEM_B(0X1FC, ctx->r16) = ctx->r25;
        goto L_1502BE44;
    // 0x1502BE30: sb          $t9, 0x1FC($s0)
    MEM_B(0X1FC, ctx->r16) = ctx->r25;
L_1502BE34:
    // 0x1502BE34: jal         0x150345E4
    // 0x1502BE38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_150345E4(rdram, ctx);
        goto after_6;
    // 0x1502BE38: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x1502BE3C: jal         0x1503A830
    // 0x1502BE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1503A830(rdram, ctx);
        goto after_7;
    // 0x1502BE40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_1502BE44:
    // 0x1502BE44: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1502BE48: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1502BE4C: sll         $t0, $a0, 4
    ctx->r8 = S32(ctx->r4 << 4);
    // 0x1502BE50: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x1502BE54: lbu         $t1, 0x666F($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X666F);
    // 0x1502BE58: beql        $t1, $zero, L_1502BE70
    if (ctx->r9 == 0) {
        // 0x1502BE5C: lw          $t2, 0x0($s0)
        ctx->r10 = MEM_W(ctx->r16, 0X0);
            goto L_1502BE70;
    }
    goto skip_1;
    // 0x1502BE5C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x1502BE60: jal         0x1503DF48
    // 0x1502BE64: nop

    func_1503DF48(rdram, ctx);
        goto after_8;
    // 0x1502BE64: nop

    after_8:
    // 0x1502BE68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x1502BE6C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
L_1502BE70:
    // 0x1502BE70: beql        $t2, $zero, L_1502BED4
    if (ctx->r10 == 0) {
        // 0x1502BE74: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1502BED4;
    }
    goto skip_2;
    // 0x1502BE74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x1502BE78: jal         0x1502EEF4
    // 0x1502BE7C: nop

    func_1502EEF4(rdram, ctx);
        goto after_9;
    // 0x1502BE7C: nop

    after_9:
    // 0x1502BE80: jal         0x1502F264
    // 0x1502BE84: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_1502F264(rdram, ctx);
        goto after_10;
    // 0x1502BE84: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x1502BE88: lbu         $t3, 0xA4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XA4);
    // 0x1502BE8C: beql        $t3, $zero, L_1502BEA0
    if (ctx->r11 == 0) {
        // 0x1502BE90: lw          $t4, 0xF8($s0)
        ctx->r12 = MEM_W(ctx->r16, 0XF8);
            goto L_1502BEA0;
    }
    goto skip_3;
    // 0x1502BE90: lw          $t4, 0xF8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XF8);
    skip_3:
    // 0x1502BE94: jal         0x1502EAFC
    // 0x1502BE98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1502EAFC(rdram, ctx);
        goto after_11;
    // 0x1502BE98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x1502BE9C: lw          $t4, 0xF8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XF8);
L_1502BEA0:
    // 0x1502BEA0: andi        $t5, $t4, 0x4000
    ctx->r13 = ctx->r12 & 0X4000;
    // 0x1502BEA4: beql        $t5, $zero, L_1502BEB8
    if (ctx->r13 == 0) {
        // 0x1502BEA8: lw          $t6, 0x260($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X260);
            goto L_1502BEB8;
    }
    goto skip_4;
    // 0x1502BEA8: lw          $t6, 0x260($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X260);
    skip_4:
    // 0x1502BEAC: jal         0x150A4B04
    // 0x1502BEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150A4B04(rdram, ctx);
        goto after_12;
    // 0x1502BEB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x1502BEB4: lw          $t6, 0x260($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X260);
L_1502BEB8:
    // 0x1502BEB8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x1502BEBC: beql        $t6, $zero, L_1502BED4
    if (ctx->r14 == 0) {
        // 0x1502BEC0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1502BED4;
    }
    goto skip_5;
    // 0x1502BEC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_5:
    // 0x1502BEC4: lbu         $a0, 0x134($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X134);
    // 0x1502BEC8: jal         0x1517AD00
    // 0x1502BECC: lbu         $a1, 0x135($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X135);
    func_1517AD00(rdram, ctx);
        goto after_13;
    // 0x1502BECC: lbu         $a1, 0x135($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X135);
    after_13:
L_1502BED0:
    // 0x1502BED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1502BED4:
    // 0x1502BED4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502BED8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1502BEDC: jr          $ra
    // 0x1502BEE0: nop

    return;
    return;
    // 0x1502BEE0: nop

;}
RECOMP_FUNC void func_151EBB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EBB50: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x151EBB54: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151EBB58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151EBB5C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151EBB60: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151EBB64: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151EBB68: lw          $t6, 0xA90($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XA90);
    // 0x151EBB6C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151EBB70: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EBB74: addiu       $t7, $t6, -0xF0
    ctx->r15 = ADD32(ctx->r14, -0XF0);
    // 0x151EBB78: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x151EBB7C: subu        $v1, $t2, $t8
    ctx->r3 = SUB32(ctx->r10, ctx->r24);
    // 0x151EBB80: bgez        $v1, L_151EBB88
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151EBB84: lui         $t9, 0xE700
        ctx->r25 = S32(0XE700 << 16);
            goto L_151EBB88;
    }
    // 0x151EBB84: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
L_151EBB88:
    // 0x151EBB88: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151EBB8C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151EBB90: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151EBB94: lui         $t3, 0xEF08
    ctx->r11 = S32(0XEF08 << 16);
    // 0x151EBB98: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x151EBB9C: ori         $t4, $t4, 0x4340
    ctx->r12 = ctx->r12 | 0X4340;
    // 0x151EBBA0: ori         $t3, $t3, 0x2C3F
    ctx->r11 = ctx->r11 | 0X2C3F;
    // 0x151EBBA4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x151EBBA8: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x151EBBAC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EBBB0: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x151EBBB4: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x151EBBB8: lui         $t6, 0xFFFE
    ctx->r14 = S32(0XFFFE << 16);
    // 0x151EBBBC: ori         $t6, $t6, 0xFB7D
    ctx->r14 = ctx->r14 | 0XFB7D;
    // 0x151EBBC0: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x151EBBC4: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x151EBBC8: sw          $t6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r14;
    // 0x151EBBCC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EBBD0: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x151EBBD4: lui         $t7, 0xFB00
    ctx->r15 = S32(0XFB00 << 16);
    // 0x151EBBD8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151EBBDC: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x151EBBE0: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x151EBBE4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EBBE8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x151EBBEC: lw          $t9, -0x19DC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X19DC);
    // 0x151EBBF0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x151EBBF4: lw          $a3, -0x19E0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X19E0);
    // 0x151EBBF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151EBBFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151EBC00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151EBC04: jal         0x1501A6CC
    // 0x151EBC08: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_1501A6CC(rdram, ctx);
        goto after_0;
    // 0x151EBC08: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_0:
    // 0x151EBC0C: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x151EBC10: lw          $t3, 0x300($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X300);
    // 0x151EBC14: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151EBC18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151EBC1C: bne         $t3, $zero, L_151EBC2C
    if (ctx->r11 != 0) {
        // 0x151EBC20: lui         $t4, 0xDE00
        ctx->r12 = S32(0XDE00 << 16);
            goto L_151EBC2C;
    }
    // 0x151EBC20: lui         $t4, 0xDE00
    ctx->r12 = S32(0XDE00 << 16);
    // 0x151EBC24: b           L_151EC164
    // 0x151EBC28: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151EC164;
    // 0x151EBC28: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151EBC2C:
    // 0x151EBC2C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151EBC30: addiu       $t5, $t5, 0x28
    ctx->r13 = ADD32(ctx->r13, 0X28);
    // 0x151EBC34: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x151EBC38: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x151EBC3C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151EBC40: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x151EBC44: lw          $a0, 0xA90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XA90);
    // 0x151EBC48: slti        $at, $a0, 0xF0
    ctx->r1 = SIGNED(ctx->r4) < 0XF0 ? 1 : 0;
    // 0x151EBC4C: beq         $at, $zero, L_151EBD04
    if (ctx->r1 == 0) {
        // 0x151EBC50: addiu       $t6, $a0, -0xB4
        ctx->r14 = ADD32(ctx->r4, -0XB4);
            goto L_151EBD04;
    }
    // 0x151EBC50: addiu       $t6, $a0, -0xB4
    ctx->r14 = ADD32(ctx->r4, -0XB4);
    // 0x151EBC54: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x151EBC58: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x151EBC5C: subu        $v1, $t2, $t7
    ctx->r3 = SUB32(ctx->r10, ctx->r15);
    // 0x151EBC60: bgez        $v1, L_151EBC6C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151EBC64: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_151EBC6C;
    }
    // 0x151EBC64: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x151EBC68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151EBC6C:
    // 0x151EBC6C: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x151EBC70: bnel        $at, $zero, L_151EBC80
    if (ctx->r1 != 0) {
        // 0x151EBC74: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_151EBC80;
    }
    goto skip_0;
    // 0x151EBC74: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    skip_0:
    // 0x151EBC78: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x151EBC7C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
L_151EBC80:
    // 0x151EBC80: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151EBC84: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x151EBC88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151EBC8C: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x151EBC90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151EBC94: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151EBC98: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151EBC9C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x151EBCA0: nop

    // 0x151EBCA4: bc1f        L_151EBCB0
    if (!c1cs) {
        // 0x151EBCA8: nop
    
            goto L_151EBCB0;
    }
    // 0x151EBCA8: nop

    // 0x151EBCAC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_151EBCB0:
    // 0x151EBCB0: jal         0x150432BC
    // 0x151EBCB4: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    func_150432BC(rdram, ctx);
        goto after_1;
    // 0x151EBCB4: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_1:
    // 0x151EBCB8: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x151EBCBC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151EBCC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151EBCC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151EBCC8: jal         0x1504332C
    // 0x151EBCCC: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_2;
    // 0x151EBCCC: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    after_2:
    // 0x151EBCD0: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151EBCD4: lw          $t8, 0xBD8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XBD8);
    // 0x151EBCD8: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBCDC: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    // 0x151EBCE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBCE4: jal         0x15042D94
    // 0x151EBCE8: lw          $a3, 0x238($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X238);
    func_15042D94(rdram, ctx);
        goto after_3;
    // 0x151EBCE8: lw          $a3, 0x238($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X238);
    after_3:
    // 0x151EBCEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EBCF0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151EBCF4: jal         0x150432BC
    // 0x151EBCF8: nop

    func_150432BC(rdram, ctx);
        goto after_4;
    // 0x151EBCF8: nop

    after_4:
    // 0x151EBCFC: b           L_151EC164
    // 0x151EBD00: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_151EC164;
    // 0x151EBD00: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151EBD04:
    // 0x151EBD04: slti        $at, $a0, 0x21C
    ctx->r1 = SIGNED(ctx->r4) < 0X21C ? 1 : 0;
    // 0x151EBD08: beq         $at, $zero, L_151EC070
    if (ctx->r1 == 0) {
        // 0x151EBD0C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_151EC070;
    }
    // 0x151EBD0C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151EBD10: slti        $at, $a0, 0x12C
    ctx->r1 = SIGNED(ctx->r4) < 0X12C ? 1 : 0;
    // 0x151EBD14: beq         $at, $zero, L_151EBD38
    if (ctx->r1 == 0) {
        // 0x151EBD18: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_151EBD38;
    }
    // 0x151EBD18: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EBD1C: addiu       $v1, $a0, -0xF0
    ctx->r3 = ADD32(ctx->r4, -0XF0);
    // 0x151EBD20: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x151EBD24: slti        $at, $t9, 0x100
    ctx->r1 = SIGNED(ctx->r25) < 0X100 ? 1 : 0;
    // 0x151EBD28: bne         $at, $zero, L_151EBD60
    if (ctx->r1 != 0) {
        // 0x151EBD2C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_151EBD60;
    }
    // 0x151EBD2C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x151EBD30: b           L_151EBD60
    // 0x151EBD34: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_151EBD60;
    // 0x151EBD34: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151EBD38:
    // 0x151EBD38: addiu       $t3, $a0, -0x1E0
    ctx->r11 = ADD32(ctx->r4, -0X1E0);
    // 0x151EBD3C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x151EBD40: subu        $v1, $t2, $t4
    ctx->r3 = SUB32(ctx->r10, ctx->r12);
    // 0x151EBD44: bgezl       $v1, L_151EBD54
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151EBD48: slti        $at, $v1, 0x100
        ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
            goto L_151EBD54;
    }
    goto skip_1;
    // 0x151EBD48: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    skip_1:
    // 0x151EBD4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151EBD50: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
L_151EBD54:
    // 0x151EBD54: bnel        $at, $zero, L_151EBD64
    if (ctx->r1 != 0) {
        // 0x151EBD58: lui         $t5, 0xE700
        ctx->r13 = S32(0XE700 << 16);
            goto L_151EBD64;
    }
    goto skip_2;
    // 0x151EBD58: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    skip_2:
    // 0x151EBD5C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151EBD60:
    // 0x151EBD60: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
L_151EBD64:
    // 0x151EBD64: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x151EBD68: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151EBD6C: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x151EBD70: sra         $t7, $v1, 2
    ctx->r15 = S32(SIGNED(ctx->r3) >> 2);
    // 0x151EBD74: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x151EBD78: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151EBD7C: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x151EBD80: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x151EBD84: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x151EBD88: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x151EBD8C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EBD90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EBD94: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151EBD98: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EBD9C: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x151EBDA0: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x151EBDA4: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151EBDA8: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151EBDAC: addiu       $a1, $a1, 0x17F8
    ctx->r5 = ADD32(ctx->r5, 0X17F8);
    // 0x151EBDB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151EBDB4: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x151EBDB8: addiu       $a3, $zero, 0x67
    ctx->r7 = ADD32(0, 0X67);
    // 0x151EBDBC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EBDC0: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x151EBDC4: jal         0x151ED430
    // 0x151EBDC8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    func_151ED430(rdram, ctx);
        goto after_5;
    // 0x151EBDC8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x151EBDCC: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x151EBDD0: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x151EBDD4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x151EBDD8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151EBDDC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
    // 0x151EBDE0: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151EBDE4: or          $t7, $t0, $at
    ctx->r15 = ctx->r8 | ctx->r1;
    // 0x151EBDE8: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x151EBDEC: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x151EBDF0: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x151EBDF4: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x151EBDF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EBDFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151EBE00: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EBE04: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x151EBE08: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151EBE0C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151EBE10: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151EBE14: addiu       $a1, $a1, 0x17EC
    ctx->r5 = ADD32(ctx->r5, 0X17EC);
    // 0x151EBE18: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x151EBE1C: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x151EBE20: addiu       $a3, $zero, 0x1C
    ctx->r7 = ADD32(0, 0X1C);
    // 0x151EBE24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EBE28: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x151EBE2C: jal         0x151ED430
    // 0x151EBE30: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_151ED430(rdram, ctx);
        goto after_6;
    // 0x151EBE30: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x151EBE34: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x151EBE38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151EBE3C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x151EBE40: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x151EBE44: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151EBE48: jal         0x1504332C
    // 0x151EBE4C: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    func_1504332C(rdram, ctx);
        goto after_7;
    // 0x151EBE4C: andi        $a3, $v1, 0xFF
    ctx->r7 = ctx->r3 & 0XFF;
    after_7:
    // 0x151EBE50: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151EBE54: lw          $t3, 0xBD8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XBD8);
    // 0x151EBE58: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBE5C: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
    // 0x151EBE60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBE64: jal         0x15042D94
    // 0x151EBE68: lw          $a3, 0x204($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X204);
    func_15042D94(rdram, ctx);
        goto after_8;
    // 0x151EBE68: lw          $a3, 0x204($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X204);
    after_8:
    // 0x151EBE6C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151EBE70: lw          $t4, 0xBD8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XBD8);
    // 0x151EBE74: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBE78: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    // 0x151EBE7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBE80: jal         0x15042D94
    // 0x151EBE84: lw          $a3, 0x208($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X208);
    func_15042D94(rdram, ctx);
        goto after_9;
    // 0x151EBE84: lw          $a3, 0x208($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X208);
    after_9:
    // 0x151EBE88: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151EBE8C: lw          $t5, 0xBD8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XBD8);
    // 0x151EBE90: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBE94: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    // 0x151EBE98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBE9C: jal         0x15042D94
    // 0x151EBEA0: lw          $a3, 0x20C($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X20C);
    func_15042D94(rdram, ctx);
        goto after_10;
    // 0x151EBEA0: lw          $a3, 0x20C($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X20C);
    after_10:
    // 0x151EBEA4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151EBEA8: jal         0x150432BC
    // 0x151EBEAC: lwc1        $f12, -0x4518($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4518);
    func_150432BC(rdram, ctx);
        goto after_11;
    // 0x151EBEAC: lwc1        $f12, -0x4518($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4518);
    after_11:
    // 0x151EBEB0: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151EBEB4: lw          $t6, 0xBD8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBD8);
    // 0x151EBEB8: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBEBC: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x151EBEC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBEC4: jal         0x15042D94
    // 0x151EBEC8: lw          $a3, 0x210($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X210);
    func_15042D94(rdram, ctx);
        goto after_12;
    // 0x151EBEC8: lw          $a3, 0x210($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X210);
    after_12:
    // 0x151EBECC: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151EBED0: lw          $t7, 0xBD8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XBD8);
    // 0x151EBED4: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBED8: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x151EBEDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBEE0: jal         0x15042D94
    // 0x151EBEE4: lw          $a3, 0x214($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X214);
    func_15042D94(rdram, ctx);
        goto after_13;
    // 0x151EBEE4: lw          $a3, 0x214($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X214);
    after_13:
    // 0x151EBEE8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151EBEEC: lw          $t8, 0xBD8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XBD8);
    // 0x151EBEF0: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBEF4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x151EBEF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBEFC: jal         0x15042D94
    // 0x151EBF00: lw          $a3, 0x218($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X218);
    func_15042D94(rdram, ctx);
        goto after_14;
    // 0x151EBF00: lw          $a3, 0x218($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X218);
    after_14:
    // 0x151EBF04: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151EBF08: lw          $t9, 0xBD8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XBD8);
    // 0x151EBF0C: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBF10: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x151EBF14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBF18: jal         0x15042D94
    // 0x151EBF1C: lw          $a3, 0x21C($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X21C);
    func_15042D94(rdram, ctx);
        goto after_15;
    // 0x151EBF1C: lw          $a3, 0x21C($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X21C);
    after_15:
    // 0x151EBF20: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151EBF24: lw          $t3, 0xBD8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0XBD8);
    // 0x151EBF28: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBF2C: addiu       $a1, $zero, 0x55
    ctx->r5 = ADD32(0, 0X55);
    // 0x151EBF30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBF34: jal         0x15042D94
    // 0x151EBF38: lw          $a3, 0x220($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X220);
    func_15042D94(rdram, ctx);
        goto after_16;
    // 0x151EBF38: lw          $a3, 0x220($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X220);
    after_16:
    // 0x151EBF3C: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x151EBF40: lw          $t4, 0xBD8($t4)
    ctx->r12 = MEM_W(ctx->r12, 0XBD8);
    // 0x151EBF44: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBF48: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    // 0x151EBF4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBF50: jal         0x15042D94
    // 0x151EBF54: lw          $a3, 0x224($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X224);
    func_15042D94(rdram, ctx);
        goto after_17;
    // 0x151EBF54: lw          $a3, 0x224($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X224);
    after_17:
    // 0x151EBF58: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x151EBF5C: lw          $t5, 0xBD8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XBD8);
    // 0x151EBF60: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBF64: addiu       $a1, $zero, 0x69
    ctx->r5 = ADD32(0, 0X69);
    // 0x151EBF68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBF6C: jal         0x15042D94
    // 0x151EBF70: lw          $a3, 0x228($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X228);
    func_15042D94(rdram, ctx);
        goto after_18;
    // 0x151EBF70: lw          $a3, 0x228($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X228);
    after_18:
    // 0x151EBF74: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151EBF78: lw          $t6, 0xBD8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XBD8);
    // 0x151EBF7C: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBF80: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    // 0x151EBF84: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBF88: jal         0x15042D94
    // 0x151EBF8C: lw          $a3, 0x22C($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X22C);
    func_15042D94(rdram, ctx);
        goto after_19;
    // 0x151EBF8C: lw          $a3, 0x22C($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X22C);
    after_19:
    // 0x151EBF90: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151EBF94: lw          $t7, 0xBD8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XBD8);
    // 0x151EBF98: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBF9C: addiu       $a1, $zero, 0x7D
    ctx->r5 = ADD32(0, 0X7D);
    // 0x151EBFA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBFA4: jal         0x15042D94
    // 0x151EBFA8: lw          $a3, 0x230($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X230);
    func_15042D94(rdram, ctx);
        goto after_20;
    // 0x151EBFA8: lw          $a3, 0x230($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X230);
    after_20:
    // 0x151EBFAC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151EBFB0: lw          $t8, 0xBD8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XBD8);
    // 0x151EBFB4: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x151EBFB8: addiu       $a1, $zero, 0x87
    ctx->r5 = ADD32(0, 0X87);
    // 0x151EBFBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151EBFC0: jal         0x15042D94
    // 0x151EBFC4: lw          $a3, 0x234($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X234);
    func_15042D94(rdram, ctx);
        goto after_21;
    // 0x151EBFC4: lw          $a3, 0x234($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X234);
    after_21:
    // 0x151EBFC8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EBFCC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x151EBFD0: jal         0x150432BC
    // 0x151EBFD4: nop

    func_150432BC(rdram, ctx);
        goto after_22;
    // 0x151EBFD4: nop

    after_22:
    // 0x151EBFD8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EBFDC: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, 0X60);
    // 0x151EBFE0: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x151EBFE4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151EBFE8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x151EBFEC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151EBFF0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151EBFF4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EBFF8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151EBFFC: lui         $t3, 0xFB00
    ctx->r11 = S32(0XFB00 << 16);
    // 0x151EC000: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x151EC004: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x151EC008: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EC00C: lui         $t5, 0x0
    ctx->r13 = S32(0X0 << 16);
    // 0x151EC010: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x151EC014: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC018: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151EC01C: addiu       $t5, $t5, 0x89C
    ctx->r13 = ADD32(ctx->r13, 0X89C);
    // 0x151EC020: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151EC024: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151EC028: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x151EC02C: sh          $t0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r8;
    // 0x151EC030: sh          $t0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r8;
    // 0x151EC034: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151EC038: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151EC03C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151EC040: addiu       $a2, $zero, 0xC7
    ctx->r6 = ADD32(0, 0XC7);
    // 0x151EC044: addiu       $a3, $zero, 0xB0
    ctx->r7 = ADD32(0, 0XB0);
    // 0x151EC048: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EC04C: jal         0x151ED430
    // 0x151EC050: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_151ED430(rdram, ctx);
        goto after_23;
    // 0x151EC050: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_23:
    // 0x151EC054: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EC058: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, 0X60);
    // 0x151EC05C: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x151EC060: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151EC064: sh          $v1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r3;
    // 0x151EC068: b           L_151EC160
    // 0x151EC06C: sh          $v1, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r3;
        goto L_151EC160;
    // 0x151EC06C: sh          $v1, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r3;
L_151EC070:
    // 0x151EC070: slti        $at, $a0, 0x258
    ctx->r1 = SIGNED(ctx->r4) < 0X258 ? 1 : 0;
    // 0x151EC074: beq         $at, $zero, L_151EC098
    if (ctx->r1 == 0) {
        // 0x151EC078: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_151EC098;
    }
    // 0x151EC078: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EC07C: addiu       $v1, $a0, -0x21C
    ctx->r3 = ADD32(ctx->r4, -0X21C);
    // 0x151EC080: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x151EC084: slti        $at, $t8, 0x100
    ctx->r1 = SIGNED(ctx->r24) < 0X100 ? 1 : 0;
    // 0x151EC088: bne         $at, $zero, L_151EC0C0
    if (ctx->r1 != 0) {
        // 0x151EC08C: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_151EC0C0;
    }
    // 0x151EC08C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x151EC090: b           L_151EC0C0
    // 0x151EC094: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
        goto L_151EC0C0;
    // 0x151EC094: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151EC098:
    // 0x151EC098: addiu       $t9, $a0, -0x30C
    ctx->r25 = ADD32(ctx->r4, -0X30C);
    // 0x151EC09C: sll         $t3, $t9, 3
    ctx->r11 = S32(ctx->r25 << 3);
    // 0x151EC0A0: subu        $v1, $t2, $t3
    ctx->r3 = SUB32(ctx->r10, ctx->r11);
    // 0x151EC0A4: bgezl       $v1, L_151EC0B4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151EC0A8: slti        $at, $v1, 0x100
        ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
            goto L_151EC0B4;
    }
    goto skip_3;
    // 0x151EC0A8: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    skip_3:
    // 0x151EC0AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x151EC0B0: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
L_151EC0B4:
    // 0x151EC0B4: bne         $at, $zero, L_151EC0C0
    if (ctx->r1 != 0) {
        // 0x151EC0B8: nop
    
            goto L_151EC0C0;
    }
    // 0x151EC0B8: nop

    // 0x151EC0BC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151EC0C0:
    // 0x151EC0C0: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, 0X60);
    // 0x151EC0C4: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x151EC0C8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151EC0CC: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x151EC0D0: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x151EC0D4: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x151EC0D8: lui         $t4, 0xFB00
    ctx->r12 = S32(0XFB00 << 16);
    // 0x151EC0DC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151EC0E0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x151EC0E4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151EC0E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC0EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151EC0F0: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x151EC0F4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x151EC0F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151EC0FC: addiu       $t9, $t9, 0x85D
    ctx->r25 = ADD32(ctx->r25, 0X85D);
    // 0x151EC100: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151EC104: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151EC108: sb          $t7, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r15;
    // 0x151EC10C: sb          $t8, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r24;
    // 0x151EC110: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x151EC114: sh          $t0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r8;
    // 0x151EC118: sh          $t0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r8;
    // 0x151EC11C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151EC120: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151EC124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151EC128: addiu       $a2, $zero, 0x94
    ctx->r6 = ADD32(0, 0X94);
    // 0x151EC12C: addiu       $a3, $zero, 0x69
    ctx->r7 = ADD32(0, 0X69);
    // 0x151EC130: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EC134: jal         0x151ED430
    // 0x151EC138: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_151ED430(rdram, ctx);
        goto after_24;
    // 0x151EC138: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_24:
    // 0x151EC13C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EC140: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, 0X60);
    // 0x151EC144: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x151EC148: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151EC14C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151EC150: sh          $v1, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r3;
    // 0x151EC154: sh          $v1, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r3;
    // 0x151EC158: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x151EC15C: sb          $t5, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r13;
L_151EC160:
    // 0x151EC160: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151EC164:
    // 0x151EC164: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151EC168: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151EC16C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x151EC170: jr          $ra
    // 0x151EC174: nop

    return;
    return;
    // 0x151EC174: nop

;}
RECOMP_FUNC void func_150E7FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E7FEC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x150E7FF0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x150E7FF4: swc1        $f12, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f12.u32l;
    // 0x150E7FF8: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x150E7FFC: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x150E8000: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x150E8004: lh          $a0, 0x9A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X9A);
    // 0x150E8008: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150E800C: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x150E8010: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x150E8014: addiu       $t8, $zero, 0x4F
    ctx->r24 = ADD32(0, 0X4F);
    // 0x150E8018: sh          $t6, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r14;
    // 0x150E801C: sh          $t7, 0x80($sp)
    MEM_H(0X80, ctx->r29) = ctx->r15;
    // 0x150E8020: sb          $t8, 0x62($sp)
    MEM_B(0X62, ctx->r29) = ctx->r24;
    // 0x150E8024: bne         $a0, $t0, L_150E8034
    if (ctx->r4 != ctx->r8) {
        // 0x150E8028: sb          $zero, 0x63($sp)
        MEM_B(0X63, ctx->r29) = 0;
            goto L_150E8034;
    }
    // 0x150E8028: sb          $zero, 0x63($sp)
    MEM_B(0X63, ctx->r29) = 0;
    // 0x150E802C: b           L_150E8038
    // 0x150E8030: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_150E8038;
    // 0x150E8030: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150E8034:
    // 0x150E8034: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_150E8038:
    // 0x150E8038: lbu         $a1, 0x9F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X9F);
    // 0x150E803C: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x150E8040: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150E8044: beq         $a1, $zero, L_150E8054
    if (ctx->r5 == 0) {
        // 0x150E8048: addiu       $t9, $zero, 0xFF
        ctx->r25 = ADD32(0, 0XFF);
            goto L_150E8054;
    }
    // 0x150E8048: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150E804C: b           L_150E8054
    // 0x150E8050: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_150E8054;
    // 0x150E8050: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_150E8054:
    // 0x150E8054: or          $t3, $v0, $v1
    ctx->r11 = ctx->r2 | ctx->r3;
    // 0x150E8058: ori         $t4, $t3, 0x9300
    ctx->r12 = ctx->r11 | 0X9300;
    // 0x150E805C: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x150E8060: bne         $a0, $t0, L_150E8074
    if (ctx->r4 != ctx->r8) {
        // 0x150E8064: sw          $t5, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r13;
            goto L_150E8074;
    }
    // 0x150E8064: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x150E8068: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x150E806C: b           L_150E807C
    // 0x150E8070: sh          $t6, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r14;
        goto L_150E807C;
    // 0x150E8070: sh          $t6, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r14;
L_150E8074:
    // 0x150E8074: addiu       $t7, $a0, 0x14
    ctx->r15 = ADD32(ctx->r4, 0X14);
    // 0x150E8078: sh          $t7, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r15;
L_150E807C:
    // 0x150E807C: lbu         $t5, 0xA3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XA3);
    // 0x150E8080: lbu         $t8, 0x8F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X8F);
    // 0x150E8084: lbu         $t1, 0xA7($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XA7);
    // 0x150E8088: lbu         $t2, 0xAB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XAB);
    // 0x150E808C: lbu         $t3, 0xAF($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XAF);
    // 0x150E8090: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150E8094: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x150E8098: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x150E809C: sb          $t9, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r25;
    // 0x150E80A0: sb          $t4, 0x71($sp)
    MEM_B(0X71, ctx->r29) = ctx->r12;
    // 0x150E80A4: sb          $t8, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r24;
    // 0x150E80A8: sb          $t1, 0x6E($sp)
    MEM_B(0X6E, ctx->r29) = ctx->r9;
    // 0x150E80AC: sb          $t2, 0x6F($sp)
    MEM_B(0X6F, ctx->r29) = ctx->r10;
    // 0x150E80B0: beq         $t5, $zero, L_150E80C0
    if (ctx->r13 == 0) {
        // 0x150E80B4: sb          $t3, 0x70($sp)
        MEM_B(0X70, ctx->r29) = ctx->r11;
            goto L_150E80C0;
    }
    // 0x150E80B4: sb          $t3, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r11;
    // 0x150E80B8: b           L_150E80C4
    // 0x150E80BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_150E80C4;
    // 0x150E80BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_150E80C0:
    // 0x150E80C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150E80C4:
    // 0x150E80C4: lui         $at, 0x48
    ctx->r1 = S32(0X48 << 16);
    // 0x150E80C8: addu        $t6, $v0, $at
    ctx->r14 = ADD32(ctx->r2, ctx->r1);
    // 0x150E80CC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x150E80D0: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x150E80D4: sb          $zero, 0x72($sp)
    MEM_B(0X72, ctx->r29) = 0;
    // 0x150E80D8: beq         $a1, $zero, L_150E80F4
    if (ctx->r5 == 0) {
        // 0x150E80DC: sb          $t7, 0x73($sp)
        MEM_B(0X73, ctx->r29) = ctx->r15;
            goto L_150E80F4;
    }
    // 0x150E80DC: sb          $t7, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r15;
    // 0x150E80E0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150E80E4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150E80E8: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x150E80EC: b           L_150E80FC
    // 0x150E80F0: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
        goto L_150E80FC;
    // 0x150E80F0: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
L_150E80F4:
    // 0x150E80F4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x150E80F8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_150E80FC:
    // 0x150E80FC: jal         0x150ADA20
    // 0x150E8100: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150E8100: nop

    after_0:
    // 0x150E8104: jal         0x150ADA20
    // 0x150E8108: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150E8108: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_1:
    // 0x150E810C: jal         0x150ADA20
    // 0x150E8110: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x150E8110: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_2:
    // 0x150E8114: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x150E8118: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x150E811C: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x150E8120: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x150E8124: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x150E8128: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x150E812C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x150E8130: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x150E8134: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x150E8138: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x150E813C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x150E8140: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150E8144: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x150E8148: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x150E814C: lbu         $t9, 0xB3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XB3);
    // 0x150E8150: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x150E8154: andi        $t5, $v1, 0x1
    ctx->r13 = ctx->r3 & 0X1;
    // 0x150E8158: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x150E815C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x150E8160: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x150E8164: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x150E8168: addiu       $a0, $sp, 0x5C
    ctx->r4 = ADD32(ctx->r29, 0X5C);
    // 0x150E816C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150E8170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150E8174: lw          $a3, 0x90($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X90);
    // 0x150E8178: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x150E817C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x150E8180: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x150E8184: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x150E8188: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x150E818C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x150E8190: jal         0x1513C650
    // 0x150E8194: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    func_1513C650(rdram, ctx);
        goto after_3;
    // 0x150E8194: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    after_3:
    // 0x150E8198: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x150E819C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x150E81A0: jr          $ra
    // 0x150E81A4: nop

    return;
    return;
    // 0x150E81A4: nop

;}
RECOMP_FUNC void func_151ACA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ACA20: lh          $v1, 0x1C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1C);
    // 0x151ACA24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x151ACA28: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x151ACA2C: beql        $at, $zero, L_151ACA44
    if (ctx->r1 == 0) {
        // 0x151ACA30: lbu         $t8, 0x5C($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X5C);
            goto L_151ACA44;
    }
    goto skip_0;
    // 0x151ACA30: lbu         $t8, 0x5C($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5C);
    skip_0:
    // 0x151ACA34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151ACA38: sll         $t6, $v0, 20
    ctx->r14 = S32(ctx->r2 << 20);
    // 0x151ACA3C: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151ACA40: lbu         $t8, 0x5C($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X5C);
L_151ACA44:
    // 0x151ACA44: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x151ACA48: beql        $at, $zero, L_151ACA58
    if (ctx->r1 == 0) {
        // 0x151ACA4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151ACA58;
    }
    goto skip_1;
    // 0x151ACA4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x151ACA50: sb          $v0, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r2;
    // 0x151ACA54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151ACA58:
    // 0x151ACA58: jr          $ra
    // 0x151ACA5C: nop

    return;
    return;
    // 0x151ACA5C: nop

;}
RECOMP_FUNC void func_15107924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15107924: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15107928: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1510792C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15107930: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15107934: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x15107938: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x1510793C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x15107940: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x15107944: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x15107948: beq         $t8, $zero, L_15107968
    if (ctx->r24 == 0) {
        // 0x1510794C: nop
    
            goto L_15107968;
    }
    // 0x1510794C: nop

    // 0x15107950: lbu         $t9, 0x4($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X4);
    // 0x15107954: lbu         $t0, 0x3B($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X3B);
    // 0x15107958: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x1510795C: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    // 0x15107960: beql        $t9, $t0, L_15107974
    if (ctx->r25 == ctx->r8) {
        // 0x15107964: sb          $zero, 0x0($t1)
        MEM_B(0X0, ctx->r9) = 0;
            goto L_15107974;
    }
    goto skip_0;
    // 0x15107964: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    skip_0:
L_15107968:
    // 0x15107968: b           L_15107A0C
    // 0x1510796C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15107A0C;
    // 0x1510796C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15107970: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
L_15107974:
    // 0x15107974: lw          $at, 0x0($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X0);
    // 0x15107978: addiu       $t2, $sp, 0x2C
    ctx->r10 = ADD32(ctx->r29, 0X2C);
    // 0x1510797C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x15107980: lw          $t4, 0x4($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X4);
    // 0x15107984: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x15107988: lw          $at, 0x8($a3)
    ctx->r1 = MEM_W(ctx->r7, 0X8);
    // 0x1510798C: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x15107990: lh          $a2, 0x8($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X8);
    // 0x15107994: lh          $a1, 0x6($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X6);
    // 0x15107998: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x1510799C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151079A0: jal         0x15107A20
    // 0x151079A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_15107A20(rdram, ctx);
        goto after_0;
    // 0x151079A4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x151079A8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151079AC: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151079B0: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151079B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151079B8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x151079BC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x151079C0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x151079C4: addiu       $a2, $s0, 0x20
    ctx->r6 = ADD32(ctx->r16, 0X20);
    // 0x151079C8: bc1f        L_151079FC
    if (!c1cs) {
        // 0x151079CC: addiu       $a3, $s0, 0x2C
        ctx->r7 = ADD32(ctx->r16, 0X2C);
            goto L_151079FC;
    }
    // 0x151079CC: addiu       $a3, $s0, 0x2C
    ctx->r7 = ADD32(ctx->r16, 0X2C);
    // 0x151079D0: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151079D4: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x151079D8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x151079DC: nop

    // 0x151079E0: bc1fl       L_15107A00
    if (!c1cs) {
        // 0x151079E4: sb          $t5, 0x0($t6)
        MEM_B(0X0, ctx->r14) = ctx->r13;
            goto L_15107A00;
    }
    goto skip_1;
    // 0x151079E4: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    skip_1:
    // 0x151079E8: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151079EC: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x151079F0: nop

    // 0x151079F4: bc1tl       L_15107A0C
    if (c1cs) {
        // 0x151079F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15107A0C;
    }
    goto skip_2;
    // 0x151079F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
L_151079FC:
    // 0x151079FC: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
L_15107A00:
    // 0x15107A00: jal         0x15107AE0
    // 0x15107A04: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_15107AE0(rdram, ctx);
        goto after_1;
    // 0x15107A04: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x15107A08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15107A0C:
    // 0x15107A0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15107A10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15107A14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15107A18: jr          $ra
    // 0x15107A1C: nop

    return;
    return;
    // 0x15107A1C: nop

;}
RECOMP_FUNC void func_151462C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151462C8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151462CC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151462D0: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x151462D4: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151462D8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151462DC: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x151462E0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151462E4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x151462E8: lh          $v1, 0x5E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X5E);
    // 0x151462EC: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x151462F0: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x151462F4: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x151462F8: lw          $t1, 0x8($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X8);
    // 0x151462FC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x15146300: beql        $t1, $zero, L_151464A4
    if (ctx->r9 == 0) {
        // 0x15146304: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151464A4;
    }
    goto skip_0;
    // 0x15146304: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
    // 0x15146308: lw          $t2, 0x18($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X18);
    // 0x1514630C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15146310: beql        $t2, $zero, L_151464A4
    if (ctx->r10 == 0) {
        // 0x15146314: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151464A4;
    }
    goto skip_1;
    // 0x15146314: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_1:
    // 0x15146318: bne         $a1, $a2, L_1514636C
    if (ctx->r5 != ctx->r6) {
        // 0x1514631C: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_1514636C;
    }
    // 0x1514631C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x15146320: beql        $s0, $zero, L_1514636C
    if (ctx->r16 == 0) {
        // 0x15146324: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1514636C;
    }
    goto skip_2;
    // 0x15146324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_2:
    // 0x15146328: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x1514632C: lbu         $t4, 0x5B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5B);
    // 0x15146330: beq         $t3, $zero, L_15146360
    if (ctx->r11 == 0) {
        // 0x15146334: nop
    
            goto L_15146360;
    }
    // 0x15146334: nop

    // 0x15146338: lbu         $t5, 0x3B($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X3B);
    // 0x1514633C: bne         $t4, $t5, L_15146360
    if (ctx->r12 != ctx->r13) {
        // 0x15146340: nop
    
            goto L_15146360;
    }
    // 0x15146340: nop

    // 0x15146344: lbu         $t6, 0x4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X4);
    // 0x15146348: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1514634C: beq         $t6, $at, L_15146360
    if (ctx->r14 == ctx->r1) {
        // 0x15146350: nop
    
            goto L_15146360;
    }
    // 0x15146350: nop

    // 0x15146354: lbu         $t7, 0x302($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X302);
    // 0x15146358: bne         $t7, $zero, L_1514636C
    if (ctx->r15 != 0) {
        // 0x1514635C: nop
    
            goto L_1514636C;
    }
    // 0x1514635C: nop

L_15146360:
    // 0x15146360: b           L_1514636C
    // 0x15146364: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_1514636C;
    // 0x15146364: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x15146368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1514636C:
    // 0x1514636C: beql        $v0, $zero, L_15146400
    if (ctx->r2 == 0) {
        // 0x15146370: lbu         $v0, 0x67($sp)
        ctx->r2 = MEM_BU(ctx->r29, 0X67);
            goto L_15146400;
    }
    goto skip_3;
    // 0x15146370: lbu         $v0, 0x67($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X67);
    skip_3:
    // 0x15146374: beq         $v0, $a1, L_15146390
    if (ctx->r2 == ctx->r5) {
        // 0x15146378: addu        $t9, $s0, $v1
        ctx->r25 = ADD32(ctx->r16, ctx->r3);
            goto L_15146390;
    }
    // 0x15146378: addu        $t9, $s0, $v1
    ctx->r25 = ADD32(ctx->r16, ctx->r3);
    // 0x1514637C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15146380: beq         $v0, $at, L_151463B0
    if (ctx->r2 == ctx->r1) {
        // 0x15146384: lui         $a1, 0x800E
        ctx->r5 = S32(0X800E << 16);
            goto L_151463B0;
    }
    // 0x15146384: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x15146388: b           L_15146400
    // 0x1514638C: lbu         $v0, 0x67($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X67);
        goto L_15146400;
    // 0x1514638C: lbu         $v0, 0x67($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X67);
L_15146390:
    // 0x15146390: lw          $t8, 0x314($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X314);
    // 0x15146394: lw          $a1, 0x304($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X304);
    // 0x15146398: lbu         $a2, 0x301($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X301);
    // 0x1514639C: lbu         $a3, 0x302($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X302);
    // 0x151463A0: jal         0x1515E544
    // 0x151463A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1515E544(rdram, ctx);
        goto after_0;
    // 0x151463A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x151463A8: b           L_151464A0
    // 0x151463AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_151464A0;
    // 0x151463AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_151463B0:
    // 0x151463B0: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151463B4: lbu         $t5, -0x1640($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X1640);
    // 0x151463B8: lh          $t3, 0x5E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X5E);
    // 0x151463BC: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x151463C0: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x151463C4: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x151463C8: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x151463CC: addiu       $t9, $t9, -0x6430
    ctx->r25 = ADD32(ctx->r25, -0X6430);
    // 0x151463D0: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x151463D4: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x151463D8: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x151463DC: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x151463E0: lbu         $a3, -0x61DF($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X61DF);
    // 0x151463E4: lbu         $a2, -0x61E0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X61E0);
    // 0x151463E8: lw          $a1, -0x61F0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X61F0);
    // 0x151463EC: jal         0x1515E544
    // 0x151463F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1515E544(rdram, ctx);
        goto after_1;
    // 0x151463F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x151463F4: b           L_151464A0
    // 0x151463F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
        goto L_151464A0;
    // 0x151463F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151463FC: lbu         $v0, 0x67($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X67);
L_15146400:
    // 0x15146400: lh          $a1, 0x5E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5E);
    // 0x15146404: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x15146408: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x1514640C: beq         $t3, $zero, L_1514641C
    if (ctx->r11 == 0) {
        // 0x15146410: andi        $t5, $v0, 0x2
        ctx->r13 = ctx->r2 & 0X2;
            goto L_1514641C;
    }
    // 0x15146410: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x15146414: b           L_1514641C
    // 0x15146418: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
        goto L_1514641C;
    // 0x15146418: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_1514641C:
    // 0x1514641C: beq         $t5, $zero, L_1514642C
    if (ctx->r13 == 0) {
        // 0x15146420: lw          $v0, 0x60($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X60);
            goto L_1514642C;
    }
    // 0x15146420: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x15146424: b           L_15146430
    // 0x15146428: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_15146430;
    // 0x15146428: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_1514642C:
    // 0x1514642C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15146430:
    // 0x15146430: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15146434: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15146438: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x1514643C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15146440: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x15146444: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x15146448: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x1514644C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x15146450: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15146454: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15146458: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x1514645C: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x15146460: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15146464: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x15146468: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x1514646C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15146470: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x15146474: lw          $t6, 0x1C($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X1C);
    // 0x15146478: ori         $t7, $v1, 0x8
    ctx->r15 = ctx->r3 | 0X8;
    // 0x1514647C: or          $t9, $t7, $t0
    ctx->r25 = ctx->r15 | ctx->r8;
    // 0x15146480: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x15146484: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15146488: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x1514648C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x15146490: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15146494: jal         0x1515D914
    // 0x15146498: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_1515D914(rdram, ctx);
        goto after_2;
    // 0x15146498: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_2:
    // 0x1514649C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_151464A0:
    // 0x151464A0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151464A4:
    // 0x151464A4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x151464A8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x151464AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x151464B0: jr          $ra
    // 0x151464B4: nop

    return;
    return;
    // 0x151464B4: nop

;}
RECOMP_FUNC void func_150EA944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EA944: lbu         $t6, 0x73($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X73);
    // 0x150EA948: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150EA94C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150EA950: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x150EA954: bne         $t7, $at, L_150EAB08
    if (ctx->r15 != ctx->r1) {
        // 0x150EA958: addiu       $v1, $v1, -0x161C
        ctx->r3 = ADD32(ctx->r3, -0X161C);
            goto L_150EAB08;
    }
    // 0x150EA958: addiu       $v1, $v1, -0x161C
    ctx->r3 = ADD32(ctx->r3, -0X161C);
    // 0x150EA95C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150EA960: lwc1        $f8, 0x60($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X60);
    // 0x150EA964: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150EA968: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150EA96C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150EA970: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150EA974: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150EA978: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150EA97C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150EA980: swc1        $f16, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f16.u32l;
    // 0x150EA984: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150EA988: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x150EA98C: nop

    // 0x150EA990: bc1fl       L_150EA9B4
    if (!c1cs) {
        // 0x150EA994: mtc1        $at, $f14
        ctx->f14.u32l = ctx->r1;
            goto L_150EA9B4;
    }
    goto skip_0;
    // 0x150EA994: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    skip_0:
    // 0x150EA998: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150EA99C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150EA9A0: nop

    // 0x150EA9A4: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x150EA9A8: b           L_150EA9D0
    // 0x150EA9AC: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
        goto L_150EA9D0;
    // 0x150EA9AC: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
    // 0x150EA9B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
L_150EA9B4:
    // 0x150EA9B4: nop

    // 0x150EA9B8: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x150EA9BC: nop

    // 0x150EA9C0: bc1fl       L_150EA9D4
    if (!c1cs) {
        // 0x150EA9C4: lwc1        $f6, 0x64($a0)
        ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
            goto L_150EA9D4;
    }
    goto skip_1;
    // 0x150EA9C4: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
    skip_1:
    // 0x150EA9C8: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x150EA9CC: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
L_150EA9D0:
    // 0x150EA9D0: lwc1        $f6, 0x64($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X64);
L_150EA9D4:
    // 0x150EA9D4: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150EA9D8: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150EA9DC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150EA9E0: swc1        $f16, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f16.u32l;
    // 0x150EA9E4: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150EA9E8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x150EA9EC: nop

    // 0x150EA9F0: bc1fl       L_150EAA08
    if (!c1cs) {
        // 0x150EA9F4: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_150EAA08;
    }
    goto skip_2;
    // 0x150EA9F4: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_2:
    // 0x150EA9F8: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x150EA9FC: b           L_150EAA1C
    // 0x150EAA00: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
        goto L_150EAA1C;
    // 0x150EAA00: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x150EAA04: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_150EAA08:
    // 0x150EAA08: nop

    // 0x150EAA0C: bc1fl       L_150EAA20
    if (!c1cs) {
        // 0x150EAA10: lwc1        $f8, 0x68($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X68);
            goto L_150EAA20;
    }
    goto skip_3;
    // 0x150EAA10: lwc1        $f8, 0x68($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X68);
    skip_3:
    // 0x150EAA14: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x150EAA18: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
L_150EAA1C:
    // 0x150EAA1C: lwc1        $f8, 0x68($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X68);
L_150EAA20:
    // 0x150EAA20: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150EAA24: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x150EAA28: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150EAA2C: swc1        $f16, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f16.u32l;
    // 0x150EAA30: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x150EAA34: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x150EAA38: nop

    // 0x150EAA3C: bc1fl       L_150EAA54
    if (!c1cs) {
        // 0x150EAA40: c.le.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
            goto L_150EAA54;
    }
    goto skip_4;
    // 0x150EAA40: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    skip_4:
    // 0x150EAA44: add.s       $f18, $f2, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x150EAA48: b           L_150EAA68
    // 0x150EAA4C: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
        goto L_150EAA68;
    // 0x150EAA4C: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x150EAA50: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
L_150EAA54:
    // 0x150EAA54: nop

    // 0x150EAA58: bc1fl       L_150EAA6C
    if (!c1cs) {
        // 0x150EAA5C: lw          $t9, 0x3C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X3C);
            goto L_150EAA6C;
    }
    goto skip_5;
    // 0x150EAA5C: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    skip_5:
    // 0x150EAA60: sub.s       $f4, $f2, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x150EAA64: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
L_150EAA68:
    // 0x150EAA68: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
L_150EAA6C:
    // 0x150EAA6C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x150EAA70: lh          $t2, 0x5C($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X5C);
    // 0x150EAA74: lh          $t4, 0x5A($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X5A);
    // 0x150EAA78: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150EAA7C: lh          $t7, 0x10($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X10);
    // 0x150EAA80: lbu         $v0, 0x8A($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8A);
    // 0x150EAA84: mflo        $t1
    ctx->r9 = lo;
    // 0x150EAA88: subu        $t3, $t2, $t1
    ctx->r11 = SUB32(ctx->r10, ctx->r9);
    // 0x150EAA8C: sh          $t3, 0x5C($a0)
    MEM_H(0X5C, ctx->r4) = ctx->r11;
    // 0x150EAA90: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x150EAA94: lh          $t9, 0x5C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X5C);
    // 0x150EAA98: lw          $t1, 0x7C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X7C);
    // 0x150EAA9C: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150EAAA0: mflo        $t6
    ctx->r14 = lo;
    // 0x150EAAA4: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x150EAAA8: sh          $t8, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r24;
    // 0x150EAAAC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x150EAAB0: lh          $t7, 0x5E($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X5E);
    // 0x150EAAB4: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150EAAB8: lh          $t9, 0x14($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X14);
    // 0x150EAABC: mflo        $t2
    ctx->r10 = lo;
    // 0x150EAAC0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x150EAAC4: sra         $t5, $t3, 3
    ctx->r13 = S32(SIGNED(ctx->r11) >> 3);
    // 0x150EAAC8: sw          $t3, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r11;
    // 0x150EAACC: sh          $t5, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r13;
    // 0x150EAAD0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150EAAD4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150EAAD8: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150EAADC: mflo        $t8
    ctx->r24 = lo;
    // 0x150EAAE0: addu        $t0, $t9, $t8
    ctx->r8 = ADD32(ctx->r25, ctx->r24);
    // 0x150EAAE4: sh          $t0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r8;
    // 0x150EAAE8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x150EAAEC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x150EAAF0: subu        $v0, $v0, $t2
    ctx->r2 = SUB32(ctx->r2, ctx->r10);
    // 0x150EAAF4: blezl       $v0, L_150EAB08
    if (SIGNED(ctx->r2) <= 0) {
        // 0x150EAAF8: sb          $t3, 0x6E($a0)
        MEM_B(0X6E, ctx->r4) = ctx->r11;
            goto L_150EAB08;
    }
    goto skip_6;
    // 0x150EAAF8: sb          $t3, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r11;
    skip_6:
    // 0x150EAAFC: jr          $ra
    // 0x150EAB00: sb          $v0, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r2;
    return;
    return;
    // 0x150EAB00: sb          $v0, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r2;
    // 0x150EAB04: sb          $t3, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r11;
L_150EAB08:
    // 0x150EAB08: jr          $ra
    // 0x150EAB0C: nop

    return;
    return;
    // 0x150EAB0C: nop

;}
RECOMP_FUNC void func_1511B51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1511B51C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1511B520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1511B524: lh          $v1, 0x3E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X3E);
    // 0x1511B528: lbu         $v0, 0x73($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X73);
    // 0x1511B52C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1511B530: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x1511B534: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x1511B538: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x1511B53C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1511B540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1511B544: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x1511B548: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1511B54C: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1511B550: beq         $t6, $zero, L_1511B560
    if (ctx->r14 == 0) {
        // 0x1511B554: lwc1        $f16, 0x84($a0)
        ctx->f16.u32l = MEM_W(ctx->r4, 0X84);
            goto L_1511B560;
    }
    // 0x1511B554: lwc1        $f16, 0x84($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X84);
    // 0x1511B558: bne         $t6, $at, L_1511B568
    if (ctx->r14 != ctx->r1) {
        // 0x1511B55C: nop
    
            goto L_1511B568;
    }
    // 0x1511B55C: nop

L_1511B560:
    // 0x1511B560: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1511B564: nop

L_1511B568:
    // 0x1511B568: beq         $v0, $zero, L_1511B578
    if (ctx->r2 == 0) {
        // 0x1511B56C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_1511B578;
    }
    // 0x1511B56C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1511B570: bnel        $v0, $at, L_1511B584
    if (ctx->r2 != ctx->r1) {
        // 0x1511B574: c.eq.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
            goto L_1511B584;
    }
    goto skip_0;
    // 0x1511B574: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    skip_0:
L_1511B578:
    // 0x1511B578: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x1511B57C: mov.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.fl = ctx->f0.fl;
    // 0x1511B580: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
L_1511B584:
    // 0x1511B584: nop

    // 0x1511B588: bc1fl       L_1511B5A4
    if (!c1cs) {
        // 0x1511B58C: lwc1        $f2, 0x7C($a0)
        ctx->f2.u32l = MEM_W(ctx->r4, 0X7C);
            goto L_1511B5A4;
    }
    goto skip_1;
    // 0x1511B58C: lwc1        $f2, 0x7C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X7C);
    skip_1:
    // 0x1511B590: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x1511B594: nop

    // 0x1511B598: bc1tl       L_1511B72C
    if (c1cs) {
        // 0x1511B59C: swc1        $f16, 0x84($a0)
        MEM_W(0X84, ctx->r4) = ctx->f16.u32l;
            goto L_1511B72C;
    }
    goto skip_2;
    // 0x1511B59C: swc1        $f16, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f16.u32l;
    skip_2:
    // 0x1511B5A0: lwc1        $f2, 0x7C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X7C);
L_1511B5A4:
    // 0x1511B5A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B5A8: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x1511B5AC: nop

    // 0x1511B5B0: bc1fl       L_1511B5C0
    if (!c1cs) {
        // 0x1511B5B4: lwc1        $f18, 0x80($a0)
        ctx->f18.u32l = MEM_W(ctx->r4, 0X80);
            goto L_1511B5C0;
    }
    goto skip_3;
    // 0x1511B5B4: lwc1        $f18, 0x80($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X80);
    skip_3:
    // 0x1511B5B8: lwc1        $f2, 0x31BC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X31BC);
    // 0x1511B5BC: lwc1        $f18, 0x80($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X80);
L_1511B5C0:
    // 0x1511B5C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1511B5C4: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x1511B5C8: nop

    // 0x1511B5CC: bc1fl       L_1511B5E0
    if (!c1cs) {
        // 0x1511B5D0: add.s       $f12, $f12, $f16
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f16.fl;
            goto L_1511B5E0;
    }
    goto skip_4;
    // 0x1511B5D0: add.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f16.fl;
    skip_4:
    // 0x1511B5D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1511B5D8: nop

    // 0x1511B5DC: add.s       $f12, $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f16.fl;
L_1511B5E0:
    // 0x1511B5E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x1511B5E4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x1511B5E8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x1511B5EC: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x1511B5F0: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x1511B5F4: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x1511B5F8: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x1511B5FC: jal         0x15048A70
    // 0x1511B600: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    func_15048A70(rdram, ctx);
        goto after_0;
    // 0x1511B600: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x1511B604: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1511B608: abs.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = fabsf(ctx->f0.fl);
    // 0x1511B60C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x1511B610: abs.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = fabsf(ctx->f16.fl);
    // 0x1511B614: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x1511B618: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x1511B61C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x1511B620: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x1511B624: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x1511B628: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1511B62C: bc1f        L_1511B68C
    if (!c1cs) {
        // 0x1511B630: lwc1        $f18, 0x38($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
            goto L_1511B68C;
    }
    // 0x1511B630: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1511B634: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x1511B638: neg.s       $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = -ctx->f16.fl;
    // 0x1511B63C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B640: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1511B644: lwc1        $f4, 0x31C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X31C0);
    // 0x1511B648: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1511B64C: abs.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = fabsf(ctx->f16.fl);
    // 0x1511B650: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x1511B654: nop

    // 0x1511B658: bc1fl       L_1511B6D4
    if (!c1cs) {
        // 0x1511B65C: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_1511B6D4;
    }
    goto skip_5;
    // 0x1511B65C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_5:
    // 0x1511B660: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x1511B664: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1511B668: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x1511B66C: c.eq.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl == ctx->f8.fl;
    // 0x1511B670: nop

    // 0x1511B674: bc1f        L_1511B684
    if (!c1cs) {
        // 0x1511B678: nop
    
            goto L_1511B684;
    }
    // 0x1511B678: nop

    // 0x1511B67C: b           L_1511B6D0
    // 0x1511B680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1511B6D0;
    // 0x1511B680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1511B684:
    // 0x1511B684: b           L_1511B6D0
    // 0x1511B688: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_1511B6D0;
    // 0x1511B688: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_1511B68C:
    // 0x1511B68C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x1511B690: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x1511B694: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B698: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x1511B69C: nop

    // 0x1511B6A0: bc1fl       L_1511B6C4
    if (!c1cs) {
        // 0x1511B6A4: add.s       $f4, $f18, $f16
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
            goto L_1511B6C4;
    }
    goto skip_6;
    // 0x1511B6A4: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    skip_6:
    // 0x1511B6A8: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x1511B6AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1511B6B0: lwc1        $f8, 0x31C4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X31C4);
    // 0x1511B6B4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1511B6B8: b           L_1511B6D0
    // 0x1511B6BC: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
        goto L_1511B6D0;
    // 0x1511B6BC: add.s       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1511B6C0: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
L_1511B6C4:
    // 0x1511B6C4: lwc1        $f6, 0x31C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X31C8);
    // 0x1511B6C8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1511B6CC: sub.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f8.fl;
L_1511B6D0:
    // 0x1511B6D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_1511B6D4:
    // 0x1511B6D4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1511B6D8: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x1511B6DC: nop

    // 0x1511B6E0: bc1fl       L_1511B6FC
    if (!c1cs) {
        // 0x1511B6E4: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_1511B6FC;
    }
    goto skip_7;
    // 0x1511B6E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_7:
    // 0x1511B6E8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x1511B6EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1511B6F0: b           L_1511B714
    // 0x1511B6F4: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
        goto L_1511B714;
    // 0x1511B6F4: add.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1511B6F8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_1511B6FC:
    // 0x1511B6FC: nop

    // 0x1511B700: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x1511B704: nop

    // 0x1511B708: bc1fl       L_1511B718
    if (!c1cs) {
        // 0x1511B70C: lbu         $t7, 0x73($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X73);
            goto L_1511B718;
    }
    goto skip_8;
    // 0x1511B70C: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
    skip_8:
    // 0x1511B710: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_1511B714:
    // 0x1511B714: lbu         $t7, 0x73($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X73);
L_1511B718:
    // 0x1511B718: andi        $t9, $t7, 0xFFFC
    ctx->r25 = ctx->r15 & 0XFFFC;
    // 0x1511B71C: sb          $t9, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r25;
    // 0x1511B720: or          $t0, $t9, $v0
    ctx->r8 = ctx->r25 | ctx->r2;
    // 0x1511B724: sb          $t0, 0x73($a0)
    MEM_B(0X73, ctx->r4) = ctx->r8;
    // 0x1511B728: swc1        $f16, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f16.u32l;
L_1511B72C:
    // 0x1511B72C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1511B730: lbu         $t1, -0x164C($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X164C);
    // 0x1511B734: bnel        $t1, $zero, L_1511B754
    if (ctx->r9 != 0) {
        // 0x1511B738: lw          $v0, 0x3C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X3C);
            goto L_1511B754;
    }
    goto skip_9;
    // 0x1511B738: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    skip_9:
    // 0x1511B73C: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x1511B740: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x1511B744: nop

    // 0x1511B748: bc1tl       L_1511B7C8
    if (c1cs) {
        // 0x1511B74C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1511B7C8;
    }
    goto skip_10;
    // 0x1511B74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_10:
    // 0x1511B750: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
L_1511B754:
    // 0x1511B754: swc1        $f12, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f12.u32l;
    // 0x1511B758: sra         $t2, $v0, 24
    ctx->r10 = S32(SIGNED(ctx->r2) >> 24);
    // 0x1511B75C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x1511B760: beql        $t3, $zero, L_1511B7C8
    if (ctx->r11 == 0) {
        // 0x1511B764: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1511B7C8;
    }
    goto skip_11;
    // 0x1511B764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_11:
    // 0x1511B768: beq         $v1, $zero, L_1511B7C4
    if (ctx->r3 == 0) {
        // 0x1511B76C: lwc1        $f6, 0x20($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
            goto L_1511B7C4;
    }
    // 0x1511B76C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1511B770: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x1511B774: addiu       $a2, $t3, -0x1
    ctx->r6 = ADD32(ctx->r11, -0X1);
    // 0x1511B778: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1511B77C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x1511B780: div.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1511B784: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x1511B788: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x1511B78C: jal         0x1518804C
    // 0x1511B790: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    func_1518804C(rdram, ctx);
        goto after_1;
    // 0x1511B790: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x1511B794: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1511B798: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1511B79C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1511B7A0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x1511B7A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1511B7A8: sub.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x1511B7AC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1511B7B0: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x1511B7B4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1511B7B8: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x1511B7BC: jal         0x15173C60
    // 0x1511B7C0: nop

    func_15173C60(rdram, ctx);
        goto after_2;
    // 0x1511B7C0: nop

    after_2:
L_1511B7C4:
    // 0x1511B7C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1511B7C8:
    // 0x1511B7C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1511B7CC: jr          $ra
    // 0x1511B7D0: nop

    return;
    return;
    // 0x1511B7D0: nop

;}
RECOMP_FUNC void func_1000FEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000FEF0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1000FEF4: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x1000FEF8: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x1000FEFC: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x1000FF00: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1000FF04: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x1000FF08: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x1000FF0C: bne         $a0, $zero, L_1000FF1C
    if (ctx->r4 != 0) {
        // 0x1000FF10: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000FF1C;
    }
    // 0x1000FF10: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000FF14: b           L_1000FF84
    // 0x1000FF18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_1000FF84;
    // 0x1000FF18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1000FF1C:
    // 0x1000FF1C: lw          $v0, 0x2760($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2760);
    // 0x1000FF20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1000FF24: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x1000FF28: blez        $v0, L_1000FF80
    if (SIGNED(ctx->r2) <= 0) {
        // 0x1000FF2C: lui         $a2, 0x8004
        ctx->r6 = S32(0X8004 << 16);
            goto L_1000FF80;
    }
    // 0x1000FF2C: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x1000FF30: addiu       $a2, $a2, 0x1FE0
    ctx->r6 = ADD32(ctx->r6, 0X1FE0);
L_1000FF34:
    // 0x1000FF34: lhu         $t7, 0x24($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X24);
    // 0x1000FF38: bnel        $a1, $t7, L_1000FF74
    if (ctx->r5 != ctx->r15) {
        // 0x1000FF3C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1000FF74;
    }
    goto skip_0;
    // 0x1000FF3C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_0:
    // 0x1000FF40: lw          $t8, 0x18($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X18);
    // 0x1000FF44: bnel        $a3, $t8, L_1000FF74
    if (ctx->r7 != ctx->r24) {
        // 0x1000FF48: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1000FF74;
    }
    goto skip_1;
    // 0x1000FF48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x1000FF4C: lw          $t9, 0x1C($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X1C);
    // 0x1000FF50: bnel        $s0, $t9, L_1000FF74
    if (ctx->r16 != ctx->r25) {
        // 0x1000FF54: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1000FF74;
    }
    goto skip_2;
    // 0x1000FF54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_2:
    // 0x1000FF58: lw          $t0, 0x10($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X10);
    // 0x1000FF5C: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x1000FF60: bnel        $t1, $zero, L_1000FF74
    if (ctx->r9 != 0) {
        // 0x1000FF64: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_1000FF74;
    }
    goto skip_3;
    // 0x1000FF64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_3:
    // 0x1000FF68: b           L_1000FF84
    // 0x1000FF6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_1000FF84;
    // 0x1000FF6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1000FF70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_1000FF74:
    // 0x1000FF74: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1000FF78: bne         $at, $zero, L_1000FF34
    if (ctx->r1 != 0) {
        // 0x1000FF7C: addiu       $a2, $a2, 0x30
        ctx->r6 = ADD32(ctx->r6, 0X30);
            goto L_1000FF34;
    }
    // 0x1000FF7C: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
L_1000FF80:
    // 0x1000FF80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1000FF84:
    // 0x1000FF84: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x1000FF88: jr          $ra
    // 0x1000FF8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1000FF8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_15040A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15040A04: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15040A08: jr          $ra
    // 0x15040A0C: nop

    return;
    return;
    // 0x15040A0C: nop

;}
RECOMP_FUNC void func_15016690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15016690: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15016694: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15016698: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1501669C: addiu       $s0, $s0, 0x212C
    ctx->r16 = ADD32(ctx->r16, 0X212C);
    // 0x150166A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150166A4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150166A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x150166AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150166B0: sw          $v0, 0x2120($at)
    MEM_W(0X2120, ctx->r1) = ctx->r2;
    // 0x150166B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150166B8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x150166BC: sw          $v0, 0x2124($at)
    MEM_W(0X2124, ctx->r1) = ctx->r2;
    // 0x150166C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150166C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150166C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150166CC: jal         0x1502B7F0
    // 0x150166D0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_1502B7F0(rdram, ctx);
        goto after_0;
    // 0x150166D0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x150166D4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x150166D8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150166DC: mflo        $v1
    ctx->r3 = lo;
    // 0x150166E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150166E4: bne         $v1, $zero, L_15016830
    if (ctx->r3 != 0) {
        // 0x150166E8: sw          $v1, 0x2128($at)
        MEM_W(0X2128, ctx->r1) = ctx->r3;
            goto L_15016830;
    }
    // 0x150166E8: sw          $v1, 0x2128($at)
    MEM_W(0X2128, ctx->r1) = ctx->r3;
    // 0x150166EC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x150166F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150166F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150166F8: jal         0x10003C40
    // 0x150166FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x150166FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x15016700: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15016704: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x15016708: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1501670C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016710: addiu       $v1, $v1, 0x20FC
    ctx->r3 = ADD32(ctx->r3, 0X20FC);
    // 0x15016714: sw          $t7, 0x2128($at)
    MEM_W(0X2128, ctx->r1) = ctx->r15;
    // 0x15016718: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x1501671C: beql        $a0, $zero, L_150167D4
    if (ctx->r4 == 0) {
        // 0x15016720: lw          $t3, 0x0($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X0);
            goto L_150167D4;
    }
    goto skip_0;
    // 0x15016720: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x15016724: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x15016728: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x1501672C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x15016730: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15016734: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x15016738: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x1501673C: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x15016740: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x15016744: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x15016748: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x1501674C: sh          $t4, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r12;
    // 0x15016750: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x15016754: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016758: lh          $t7, 0x6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X6);
    // 0x1501675C: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x15016760: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x15016764: nop

    // 0x15016768: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501676C: swc1        $f6, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f6.u32l;
    // 0x15016770: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x15016774: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x15016778: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x1501677C: addiu       $t2, $t1, 0x64
    ctx->r10 = ADD32(ctx->r9, 0X64);
    // 0x15016780: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x15016784: nop

    // 0x15016788: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1501678C: swc1        $f10, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f10.u32l;
    // 0x15016790: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x15016794: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016798: lh          $t5, 0xA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA);
    // 0x1501679C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x150167A0: nop

    // 0x150167A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150167A8: swc1        $f18, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f18.u32l;
    // 0x150167AC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x150167B0: sb          $zero, 0x6($t7)
    MEM_B(0X6, ctx->r15) = 0;
    // 0x150167B4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x150167B8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x150167BC: lbu         $t9, 0xC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XC);
    // 0x150167C0: sb          $t9, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r25;
    // 0x150167C4: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x150167C8: b           L_15016830
    // 0x150167CC: sb          $zero, 0x15($t1)
    MEM_B(0X15, ctx->r9) = 0;
        goto L_15016830;
    // 0x150167CC: sb          $zero, 0x15($t1)
    MEM_B(0X15, ctx->r9) = 0;
    // 0x150167D0: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_150167D4:
    // 0x150167D4: addiu       $t2, $zero, 0xE10
    ctx->r10 = ADD32(0, 0XE10);
    // 0x150167D8: addiu       $t4, $zero, -0xC80
    ctx->r12 = ADD32(0, -0XC80);
    // 0x150167DC: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x150167E0: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x150167E4: addiu       $t6, $zero, -0x898
    ctx->r14 = ADD32(0, -0X898);
    // 0x150167E8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150167EC: sh          $t4, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r12;
    // 0x150167F0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x150167F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150167F8: sh          $t6, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r14;
    // 0x150167FC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016800: swc1        $f4, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f4.u32l;
    // 0x15016804: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15016808: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1501680C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x15016810: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016814: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x15016818: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x1501681C: sb          $zero, 0x6($t0)
    MEM_B(0X6, ctx->r8) = 0;
    // 0x15016820: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x15016824: sb          $zero, 0x7($t1)
    MEM_B(0X7, ctx->r9) = 0;
    // 0x15016828: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x1501682C: sb          $zero, 0x15($t2)
    MEM_B(0X15, ctx->r10) = 0;
L_15016830:
    // 0x15016830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15016834: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15016838: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1501683C: jr          $ra
    // 0x15016840: nop

    return;
    return;
    // 0x15016840: nop

;}
RECOMP_FUNC void func_1001AFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001AFEC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1001AFF0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x1001AFF4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x1001AFF8: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x1001AFFC: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x1001B000: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x1001B004: beq         $t7, $zero, L_1001B064
    if (ctx->r15 == 0) {
        // 0x1001B008: nop
    
            goto L_1001B064;
    }
    // 0x1001B008: nop

L_1001B00C:
    // 0x1001B00C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x1001B010: lbu         $t9, 0x36($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X36);
    // 0x1001B014: bne         $t9, $a1, L_1001B04C
    if (ctx->r25 != ctx->r5) {
        // 0x1001B018: nop
    
            goto L_1001B04C;
    }
    // 0x1001B018: nop

    // 0x1001B01C: lbu         $t0, 0x35($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X35);
    // 0x1001B020: bne         $t0, $a2, L_1001B04C
    if (ctx->r8 != ctx->r6) {
        // 0x1001B024: nop
    
            goto L_1001B04C;
    }
    // 0x1001B024: nop

    // 0x1001B028: lbu         $t1, 0x39($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X39);
    // 0x1001B02C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1001B030: beq         $t1, $at, L_1001B04C
    if (ctx->r9 == ctx->r1) {
        // 0x1001B034: nop
    
            goto L_1001B04C;
    }
    // 0x1001B034: nop

    // 0x1001B038: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1001B03C: beq         $t1, $at, L_1001B04C
    if (ctx->r9 == ctx->r1) {
        // 0x1001B040: nop
    
            goto L_1001B04C;
    }
    // 0x1001B040: nop

    // 0x1001B044: b           L_1001B074
    // 0x1001B048: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
        goto L_1001B074;
    // 0x1001B048: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
L_1001B04C:
    // 0x1001B04C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x1001B050: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1001B054: sw          $t3, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r11;
    // 0x1001B058: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x1001B05C: bne         $t4, $zero, L_1001B00C
    if (ctx->r12 != 0) {
        // 0x1001B060: nop
    
            goto L_1001B00C;
    }
    // 0x1001B060: nop

L_1001B064:
    // 0x1001B064: b           L_1001B074
    // 0x1001B068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001B074;
    // 0x1001B068: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1001B06C: b           L_1001B074
    // 0x1001B070: nop

        goto L_1001B074;
    // 0x1001B070: nop

L_1001B074:
    // 0x1001B074: jr          $ra
    // 0x1001B078: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1001B078: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_151720C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151720C4: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x151720C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x151720CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151720D0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x151720D4: sw          $a1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r5;
    // 0x151720D8: sw          $a2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r6;
    // 0x151720DC: lw          $t7, 0xD4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD4);
    // 0x151720E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151720E4: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x151720E8: lh          $t8, 0x50($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X50);
    // 0x151720EC: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x151720F0: bne         $at, $zero, L_151725E4
    if (ctx->r1 != 0) {
        // 0x151720F4: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_151725E4;
    }
    // 0x151720F4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151720F8: lbu         $t9, 0x58($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X58);
    // 0x151720FC: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x15172100: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x15172104: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x15172108: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x1517210C: lw          $t4, -0x35B4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X35B4);
    // 0x15172110: sw          $t4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r12;
    // 0x15172114: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x15172118: lh          $a2, 0x52($t7)
    ctx->r6 = MEM_H(ctx->r15, 0X52);
    // 0x1517211C: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x15172120: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x15172124: bne         $at, $zero, L_1517213C
    if (ctx->r1 != 0) {
        // 0x15172128: sra         $v1, $a2, 8
        ctx->r3 = S32(SIGNED(ctx->r6) >> 8);
            goto L_1517213C;
    }
    // 0x15172128: sra         $v1, $a2, 8
    ctx->r3 = S32(SIGNED(ctx->r6) >> 8);
    // 0x1517212C: sll         $t5, $v1, 2
    ctx->r13 = S32(ctx->r3 << 2);
    // 0x15172130: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x15172134: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x15172138: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1517213C:
    // 0x1517213C: lw          $t8, -0x2E4C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2E4C);
    // 0x15172140: bne         $t0, $t8, L_15172150
    if (ctx->r8 != ctx->r24) {
        // 0x15172144: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_15172150;
    }
    // 0x15172144: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15172148: lw          $t9, -0x2E48($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2E48);
    // 0x1517214C: beq         $v1, $t9, L_151721A0
    if (ctx->r3 == ctx->r25) {
        // 0x15172150: addiu       $t3, $zero, 0x2
        ctx->r11 = ADD32(0, 0X2);
            goto L_151721A0;
    }
L_15172150:
    // 0x15172150: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x15172154: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x15172158: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x1517215C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x15172160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15172164: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    // 0x15172168: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x1517216C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15172170: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15172174: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x15172178: sw          $v1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r3;
    // 0x1517217C: jal         0x15094F70
    // 0x15172180: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    func_15094F70(rdram, ctx);
        goto after_0;
    // 0x15172180: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    after_0:
    // 0x15172184: lw          $t0, 0x94($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X94);
    // 0x15172188: lw          $v1, 0x90($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X90);
    // 0x1517218C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15172190: sw          $t0, -0x2E4C($at)
    MEM_W(-0X2E4C, ctx->r1) = ctx->r8;
    // 0x15172194: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15172198: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1517219C: sw          $v1, -0x2E48($at)
    MEM_W(-0X2E48, ctx->r1) = ctx->r3;
L_151721A0:
    // 0x151721A0: lw          $t4, 0xD4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD4);
    // 0x151721A4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151721A8: lh          $v0, -0x2E44($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2E44);
    // 0x151721AC: lbu         $t5, 0x59($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X59);
    // 0x151721B0: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x151721B4: andi        $t0, $v0, 0xF
    ctx->r8 = ctx->r2 & 0XF;
    // 0x151721B8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x151721BC: bne         $t6, $zero, L_151721CC
    if (ctx->r14 != 0) {
        // 0x151721C0: andi        $t2, $v0, 0xF0
        ctx->r10 = ctx->r2 & 0XF0;
            goto L_151721CC;
    }
    // 0x151721C0: andi        $t2, $v0, 0xF0
    ctx->r10 = ctx->r2 & 0XF0;
    // 0x151721C4: b           L_151721D0
    // 0x151721C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_151721D0;
    // 0x151721C8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_151721CC:
    // 0x151721CC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_151721D0:
    // 0x151721D0: lbu         $t9, 0xA($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XA);
    // 0x151721D4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151721D8: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    // 0x151721DC: bne         $t9, $at, L_151721E8
    if (ctx->r25 != ctx->r1) {
        // 0x151721E0: nop
    
            goto L_151721E8;
    }
    // 0x151721E0: nop

    // 0x151721E4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_151721E8:
    // 0x151721E8: beq         $t0, $v1, L_151722BC
    if (ctx->r8 == ctx->r3) {
        // 0x151721EC: lw          $t3, 0x8C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X8C);
            goto L_151722BC;
    }
    // 0x151721EC: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x151721F0: beq         $t3, $zero, L_1517220C
    if (ctx->r11 == 0) {
        // 0x151721F4: or          $t0, $v1, $zero
        ctx->r8 = ctx->r3 | 0;
            goto L_1517220C;
    }
    // 0x151721F4: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
    // 0x151721F8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151721FC: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x15172200: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15172204: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15172208: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_1517220C:
    // 0x1517220C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15172210: beq         $v1, $at, L_15172244
    if (ctx->r3 == ctx->r1) {
        // 0x15172214: sw          $zero, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = 0;
            goto L_15172244;
    }
    // 0x15172214: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x15172218: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1517221C: beq         $v1, $at, L_15172258
    if (ctx->r3 == ctx->r1) {
        // 0x15172220: lui         $t5, 0x50
        ctx->r13 = S32(0X50 << 16);
            goto L_15172258;
    }
    // 0x15172220: lui         $t5, 0x50
    ctx->r13 = S32(0X50 << 16);
    // 0x15172224: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15172228: beq         $v1, $at, L_15172268
    if (ctx->r3 == ctx->r1) {
        // 0x1517222C: lui         $t6, 0x10
        ctx->r14 = S32(0X10 << 16);
            goto L_15172268;
    }
    // 0x1517222C: lui         $t6, 0x10
    ctx->r14 = S32(0X10 << 16);
    // 0x15172230: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x15172234: beq         $v1, $at, L_1517227C
    if (ctx->r3 == ctx->r1) {
        // 0x15172238: lui         $t9, 0x10
        ctx->r25 = S32(0X10 << 16);
            goto L_1517227C;
    }
    // 0x15172238: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x1517223C: b           L_15172290
    // 0x15172240: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_15172290;
    // 0x15172240: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15172244:
    // 0x15172244: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x15172248: ori         $t4, $t4, 0x4DD8
    ctx->r12 = ctx->r12 | 0X4DD8;
    // 0x1517224C: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x15172250: b           L_1517228C
    // 0x15172254: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
        goto L_1517228C;
    // 0x15172254: sw          $t4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r12;
L_15172258:
    // 0x15172258: ori         $t5, $t5, 0x4B50
    ctx->r13 = ctx->r13 | 0X4B50;
    // 0x1517225C: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
    // 0x15172260: b           L_1517228C
    // 0x15172264: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
        goto L_1517228C;
    // 0x15172264: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
L_15172268:
    // 0x15172268: lui         $t8, 0xC18
    ctx->r24 = S32(0XC18 << 16);
    // 0x1517226C: ori         $t8, $t8, 0x4DD8
    ctx->r24 = ctx->r24 | 0X4DD8;
    // 0x15172270: sw          $t6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r14;
    // 0x15172274: b           L_1517228C
    // 0x15172278: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
        goto L_1517228C;
    // 0x15172278: sw          $t8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r24;
L_1517227C:
    // 0x1517227C: lui         $t3, 0xC18
    ctx->r11 = S32(0XC18 << 16);
    // 0x15172280: ori         $t3, $t3, 0x4B50
    ctx->r11 = ctx->r11 | 0X4B50;
    // 0x15172284: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x15172288: sw          $t3, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r11;
L_1517228C:
    // 0x1517228C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_15172290:
    // 0x15172290: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x15172294: ori         $t7, $t7, 0x1E01
    ctx->r15 = ctx->r15 | 0X1E01;
    // 0x15172298: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x1517229C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151722A0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151722A4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151722A8: lui         $t4, 0xD9EE
    ctx->r12 = S32(0XD9EE << 16);
    // 0x151722AC: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x151722B0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x151722B4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151722B8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_151722BC:
    // 0x151722BC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x151722C0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x151722C4: lw          $t8, 0x2C9C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2C9C);
    // 0x151722C8: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x151722CC: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x151722D0: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x151722D4: ori         $a1, $t7, 0x2CB0
    ctx->r5 = ctx->r15 | 0X2CB0;
    // 0x151722D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151722DC: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x151722E0: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x151722E4: jal         0x15142FBC
    // 0x151722E8: sw          $t2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r10;
    func_15142FBC(rdram, ctx);
        goto after_1;
    // 0x151722E8: sw          $t2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r10;
    after_1:
    // 0x151722EC: lw          $t1, 0xD4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD4);
    // 0x151722F0: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x151722F4: lw          $t2, 0xB4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB4);
    // 0x151722F8: lbu         $t5, 0x59($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X59);
    // 0x151722FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15172300: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x15172304: andi        $t6, $t5, 0x8
    ctx->r14 = ctx->r13 & 0X8;
    // 0x15172308: bne         $t6, $zero, L_15172368
    if (ctx->r14 != 0) {
        // 0x1517230C: addiu       $a0, $zero, 0x40
        ctx->r4 = ADD32(0, 0X40);
            goto L_15172368;
    }
    // 0x1517230C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x15172310: lbu         $v1, 0xA($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0XA);
    // 0x15172314: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15172318: bne         $v1, $zero, L_1517233C
    if (ctx->r3 != 0) {
        // 0x1517231C: nop
    
            goto L_1517233C;
    }
    // 0x1517231C: nop

    // 0x15172320: lhu         $t9, 0x56($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X56);
    // 0x15172324: beq         $t9, $zero, L_15172334
    if (ctx->r25 == 0) {
        // 0x15172328: nop
    
            goto L_15172334;
    }
    // 0x15172328: nop

    // 0x1517232C: b           L_15172368
    // 0x15172330: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
        goto L_15172368;
    // 0x15172330: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_15172334:
    // 0x15172334: b           L_15172368
    // 0x15172338: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
        goto L_15172368;
    // 0x15172338: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_1517233C:
    // 0x1517233C: bne         $v1, $at, L_15172360
    if (ctx->r3 != ctx->r1) {
        // 0x15172340: nop
    
            goto L_15172360;
    }
    // 0x15172340: nop

    // 0x15172344: lhu         $t3, 0x56($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X56);
    // 0x15172348: beq         $t3, $zero, L_15172358
    if (ctx->r11 == 0) {
        // 0x1517234C: nop
    
            goto L_15172358;
    }
    // 0x1517234C: nop

    // 0x15172350: b           L_15172368
    // 0x15172354: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
        goto L_15172368;
    // 0x15172354: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
L_15172358:
    // 0x15172358: b           L_15172368
    // 0x1517235C: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
        goto L_15172368;
    // 0x1517235C: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
L_15172360:
    // 0x15172360: b           L_15172368
    // 0x15172364: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
        goto L_15172368;
    // 0x15172364: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
L_15172368:
    // 0x15172368: beq         $t2, $a0, L_15172490
    if (ctx->r10 == ctx->r4) {
        // 0x1517236C: lw          $t7, 0x8C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X8C);
            goto L_15172490;
    }
    // 0x1517236C: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x15172370: beq         $t7, $zero, L_15172388
    if (ctx->r15 == 0) {
        // 0x15172374: or          $t2, $a0, $zero
        ctx->r10 = ctx->r4 | 0;
            goto L_15172388;
    }
    // 0x15172374: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x15172378: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x1517237C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x15172380: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x15172384: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_15172388:
    // 0x15172388: addiu       $t5, $a0, -0x10
    ctx->r13 = ADD32(ctx->r4, -0X10);
    // 0x1517238C: sltiu       $at, $t5, 0x51
    ctx->r1 = ctx->r13 < 0X51 ? 1 : 0;
    // 0x15172390: beq         $at, $zero, L_15172490
    if (ctx->r1 == 0) {
        // 0x15172394: sll         $t5, $t5, 2
        ctx->r13 = S32(ctx->r13 << 2);
            goto L_15172490;
    }
    // 0x15172394: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x15172398: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517239C: addu        $at, $at, $t5
    gpr jr_addend_151723A4 = ctx->r13;
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x151723A0: lw          $t5, 0x7000($at)
    ctx->r13 = ADD32(ctx->r1, 0X7000);
    // 0x151723A4: jr          $t5
    // 0x151723A8: nop

    switch (jr_addend_151723A4 >> 2) {
        case 0: goto L_151723AC; break;
        case 1: goto L_15172490; break;
        case 2: goto L_15172490; break;
        case 3: goto L_15172490; break;
        case 4: goto L_15172490; break;
        case 5: goto L_15172490; break;
        case 6: goto L_15172490; break;
        case 7: goto L_15172490; break;
        case 8: goto L_15172490; break;
        case 9: goto L_15172490; break;
        case 10: goto L_15172490; break;
        case 11: goto L_15172490; break;
        case 12: goto L_15172490; break;
        case 13: goto L_15172490; break;
        case 14: goto L_15172490; break;
        case 15: goto L_15172490; break;
        case 16: goto L_151723D4; break;
        case 17: goto L_15172490; break;
        case 18: goto L_15172490; break;
        case 19: goto L_15172490; break;
        case 20: goto L_15172490; break;
        case 21: goto L_15172490; break;
        case 22: goto L_15172490; break;
        case 23: goto L_15172490; break;
        case 24: goto L_15172490; break;
        case 25: goto L_15172490; break;
        case 26: goto L_15172490; break;
        case 27: goto L_15172490; break;
        case 28: goto L_15172490; break;
        case 29: goto L_15172490; break;
        case 30: goto L_15172490; break;
        case 31: goto L_15172490; break;
        case 32: goto L_151723FC; break;
        case 33: goto L_15172490; break;
        case 34: goto L_15172490; break;
        case 35: goto L_15172490; break;
        case 36: goto L_15172490; break;
        case 37: goto L_15172490; break;
        case 38: goto L_15172490; break;
        case 39: goto L_15172490; break;
        case 40: goto L_15172490; break;
        case 41: goto L_15172490; break;
        case 42: goto L_15172490; break;
        case 43: goto L_15172490; break;
        case 44: goto L_15172490; break;
        case 45: goto L_15172490; break;
        case 46: goto L_15172490; break;
        case 47: goto L_15172490; break;
        case 48: goto L_15172424; break;
        case 49: goto L_15172490; break;
        case 50: goto L_15172490; break;
        case 51: goto L_15172490; break;
        case 52: goto L_15172490; break;
        case 53: goto L_15172490; break;
        case 54: goto L_15172490; break;
        case 55: goto L_15172490; break;
        case 56: goto L_15172490; break;
        case 57: goto L_15172490; break;
        case 58: goto L_15172490; break;
        case 59: goto L_15172490; break;
        case 60: goto L_15172490; break;
        case 61: goto L_15172490; break;
        case 62: goto L_15172490; break;
        case 63: goto L_15172490; break;
        case 64: goto L_1517244C; break;
        case 65: goto L_15172490; break;
        case 66: goto L_15172490; break;
        case 67: goto L_15172490; break;
        case 68: goto L_15172490; break;
        case 69: goto L_15172490; break;
        case 70: goto L_15172490; break;
        case 71: goto L_15172490; break;
        case 72: goto L_15172490; break;
        case 73: goto L_15172490; break;
        case 74: goto L_15172490; break;
        case 75: goto L_15172490; break;
        case 76: goto L_15172490; break;
        case 77: goto L_15172490; break;
        case 78: goto L_15172490; break;
        case 79: goto L_15172490; break;
        case 80: goto L_15172474; break;
        default: switch_error(__func__, 0x151723A4, 0x800A7000);
    }
    // 0x151723A8: nop

L_151723AC:
    // 0x151723AC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151723B0: lui         $t6, 0xFC30
    ctx->r14 = S32(0XFC30 << 16);
    // 0x151723B4: lui         $t8, 0xFF67
    ctx->r24 = S32(0XFF67 << 16);
    // 0x151723B8: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x151723BC: ori         $t6, $t6, 0xB261
    ctx->r14 = ctx->r14 | 0XB261;
    // 0x151723C0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151723C4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151723C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151723CC: b           L_15172494
    // 0x151723D0: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
        goto L_15172494;
    // 0x151723D0: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
L_151723D4:
    // 0x151723D4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151723D8: lui         $t9, 0xFCFF
    ctx->r25 = S32(0XFCFF << 16);
    // 0x151723DC: lui         $t3, 0xFF64
    ctx->r11 = S32(0XFF64 << 16);
    // 0x151723E0: ori         $t3, $t3, 0xFE7F
    ctx->r11 = ctx->r11 | 0XFE7F;
    // 0x151723E4: ori         $t9, $t9, 0xB3FF
    ctx->r25 = ctx->r25 | 0XB3FF;
    // 0x151723E8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x151723EC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x151723F0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151723F4: b           L_15172494
    // 0x151723F8: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
        goto L_15172494;
    // 0x151723F8: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
L_151723FC:
    // 0x151723FC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15172400: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x15172404: lui         $t4, 0xFF2D
    ctx->r12 = S32(0XFF2D << 16);
    // 0x15172408: ori         $t4, $t4, 0xFEFF
    ctx->r12 = ctx->r12 | 0XFEFF;
    // 0x1517240C: ori         $t7, $t7, 0x97FF
    ctx->r15 = ctx->r15 | 0X97FF;
    // 0x15172410: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x15172414: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x15172418: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1517241C: b           L_15172494
    // 0x15172420: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
        goto L_15172494;
    // 0x15172420: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
L_15172424:
    // 0x15172424: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15172428: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x1517242C: lui         $t6, 0xFFFC
    ctx->r14 = S32(0XFFFC << 16);
    // 0x15172430: ori         $t6, $t6, 0xF279
    ctx->r14 = ctx->r14 | 0XF279;
    // 0x15172434: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x15172438: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x1517243C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x15172440: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15172444: b           L_15172494
    // 0x15172448: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
        goto L_15172494;
    // 0x15172448: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
L_1517244C:
    // 0x1517244C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15172450: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x15172454: lui         $t9, 0xFFFC
    ctx->r25 = S32(0XFFFC << 16);
    // 0x15172458: ori         $t9, $t9, 0xFE38
    ctx->r25 = ctx->r25 | 0XFE38;
    // 0x1517245C: ori         $t8, $t8, 0xB5FF
    ctx->r24 = ctx->r24 | 0XB5FF;
    // 0x15172460: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15172464: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x15172468: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x1517246C: b           L_15172494
    // 0x15172470: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
        goto L_15172494;
    // 0x15172470: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
L_15172474:
    // 0x15172474: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15172478: lui         $t3, 0xFC30
    ctx->r11 = S32(0XFC30 << 16);
    // 0x1517247C: ori         $t3, $t3, 0xB5FF
    ctx->r11 = ctx->r11 | 0XB5FF;
    // 0x15172480: addiu       $t7, $zero, -0x1C8
    ctx->r15 = ADD32(0, -0X1C8);
    // 0x15172484: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x15172488: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x1517248C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15172490:
    // 0x15172490: or          $t4, $t0, $t2
    ctx->r12 = ctx->r8 | ctx->r10;
L_15172494:
    // 0x15172494: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15172498: sh          $t4, -0x2E44($at)
    MEM_H(-0X2E44, ctx->r1) = ctx->r12;
    // 0x1517249C: lhu         $v0, 0x56($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X56);
    // 0x151724A0: lh          $v1, 0x50($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X50);
    // 0x151724A4: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151724A8: sra         $a1, $v0, 8
    ctx->r5 = S32(SIGNED(ctx->r2) >> 8);
    // 0x151724AC: sra         $a2, $v0, 3
    ctx->r6 = S32(SIGNED(ctx->r2) >> 3);
    // 0x151724B0: sll         $a3, $v0, 2
    ctx->r7 = S32(ctx->r2 << 2);
    // 0x151724B4: andi        $t5, $a1, 0xF8
    ctx->r13 = ctx->r5 & 0XF8;
    // 0x151724B8: andi        $t6, $a2, 0xF8
    ctx->r14 = ctx->r6 & 0XF8;
    // 0x151724BC: andi        $t8, $a3, 0xF8
    ctx->r24 = ctx->r7 & 0XF8;
    // 0x151724C0: slti        $at, $v1, 0x1A
    ctx->r1 = SIGNED(ctx->r3) < 0X1A ? 1 : 0;
    // 0x151724C4: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x151724C8: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151724CC: bne         $at, $zero, L_151724DC
    if (ctx->r1 != 0) {
        // 0x151724D0: or          $a3, $t8, $zero
        ctx->r7 = ctx->r24 | 0;
            goto L_151724DC;
    }
    // 0x151724D0: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x151724D4: b           L_151724E8
    // 0x151724D8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
        goto L_151724E8;
    // 0x151724D8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
L_151724DC:
    // 0x151724DC: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x151724E0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x151724E4: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
L_151724E8:
    // 0x151724E8: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x151724EC: addiu       $v0, $v0, -0x2E40
    ctx->r2 = ADD32(ctx->r2, -0X2E40);
    // 0x151724F0: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x151724F4: lui         $t8, 0xFA00
    ctx->r24 = S32(0XFA00 << 16);
    // 0x151724F8: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151724FC: bne         $a1, $t9, L_15172530
    if (ctx->r5 != ctx->r25) {
        // 0x15172500: ori         $t8, $t8, 0x100
        ctx->r24 = ctx->r24 | 0X100;
            goto L_15172530;
    }
    // 0x15172500: ori         $t8, $t8, 0x100
    ctx->r24 = ctx->r24 | 0X100;
    // 0x15172504: lh          $t3, -0x2E3E($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X2E3E);
    // 0x15172508: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1517250C: bnel        $a2, $t3, L_15172534
    if (ctx->r6 != ctx->r11) {
        // 0x15172510: sh          $a1, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r5;
            goto L_15172534;
    }
    goto skip_0;
    // 0x15172510: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    skip_0:
    // 0x15172514: lh          $t7, -0x2E3C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2E3C);
    // 0x15172518: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x1517251C: bnel        $a3, $t7, L_15172534
    if (ctx->r7 != ctx->r15) {
        // 0x15172520: sh          $a1, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r5;
            goto L_15172534;
    }
    goto skip_1;
    // 0x15172520: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
    skip_1:
    // 0x15172524: lh          $t4, -0x2E3A($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X2E3A);
    // 0x15172528: beql        $a0, $t4, L_1517259C
    if (ctx->r4 == ctx->r12) {
        // 0x1517252C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_1517259C;
    }
    goto skip_2;
    // 0x1517252C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_2:
L_15172530:
    // 0x15172530: sh          $a1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r5;
L_15172534:
    // 0x15172534: sh          $a2, -0x2E3E($at)
    MEM_H(-0X2E3E, ctx->r1) = ctx->r6;
    // 0x15172538: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x1517253C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15172540: sh          $a3, -0x2E3C($at)
    MEM_H(-0X2E3C, ctx->r1) = ctx->r7;
    // 0x15172544: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15172548: beq         $t5, $zero, L_15172564
    if (ctx->r13 == 0) {
        // 0x1517254C: sh          $a0, -0x2E3A($at)
        MEM_H(-0X2E3A, ctx->r1) = ctx->r4;
            goto L_15172564;
    }
    // 0x1517254C: sh          $a0, -0x2E3A($at)
    MEM_H(-0X2E3A, ctx->r1) = ctx->r4;
    // 0x15172550: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15172554: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x15172558: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1517255C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x15172560: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_15172564:
    // 0x15172564: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15172568: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x1517256C: sll         $t4, $t7, 16
    ctx->r12 = S32(ctx->r15 << 16);
    // 0x15172570: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x15172574: sll         $t3, $a1, 24
    ctx->r11 = S32(ctx->r5 << 24);
    // 0x15172578: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x1517257C: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x15172580: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x15172584: or          $t9, $t5, $t8
    ctx->r25 = ctx->r13 | ctx->r24;
    // 0x15172588: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x1517258C: or          $t3, $t9, $t7
    ctx->r11 = ctx->r25 | ctx->r15;
    // 0x15172590: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x15172594: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x15172598: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1517259C:
    // 0x1517259C: lui         $t4, 0x100
    ctx->r12 = S32(0X100 << 16);
    // 0x151725A0: ori         $t4, $t4, 0x4008
    ctx->r12 = ctx->r12 | 0X4008;
    // 0x151725A4: addiu       $t6, $t1, 0x10
    ctx->r14 = ADD32(ctx->r9, 0X10);
    // 0x151725A8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x151725AC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x151725B0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151725B4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x151725B8: lui         $t5, 0x500
    ctx->r13 = S32(0X500 << 16);
    // 0x151725BC: ori         $t5, $t5, 0x204
    ctx->r13 = ctx->r13 | 0X204;
    // 0x151725C0: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x151725C4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151725C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x151725CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151725D0: lui         $t8, 0x500
    ctx->r24 = S32(0X500 << 16);
    // 0x151725D4: ori         $t8, $t8, 0x406
    ctx->r24 = ctx->r24 | 0X406;
    // 0x151725D8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x151725DC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x151725E0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_151725E4:
    // 0x151725E4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151725E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x151725EC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x151725F0: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x151725F4: jr          $ra
    // 0x151725F8: nop

    return;
    return;
    // 0x151725F8: nop

;}
RECOMP_FUNC void func_151C0698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C0698: addiu       $sp, $sp, -0x308
    ctx->r29 = ADD32(ctx->r29, -0X308);
    // 0x151C069C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x151C06A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C06A4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151C06A8: sw          $a1, 0x30C($sp)
    MEM_W(0X30C, ctx->r29) = ctx->r5;
    // 0x151C06AC: sw          $a2, 0x310($sp)
    MEM_W(0X310, ctx->r29) = ctx->r6;
    // 0x151C06B0: sw          $a3, 0x314($sp)
    MEM_W(0X314, ctx->r29) = ctx->r7;
    // 0x151C06B4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151C06B8: lbu         $t6, -0x19EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X19EA);
    // 0x151C06BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151C06C0: beq         $t6, $zero, L_151C0710
    if (ctx->r14 == 0) {
        // 0x151C06C4: swc1        $f4, 0x2A0($sp)
        MEM_W(0X2A0, ctx->r29) = ctx->f4.u32l;
            goto L_151C0710;
    }
    // 0x151C06C4: swc1        $f4, 0x2A0($sp)
    MEM_W(0X2A0, ctx->r29) = ctx->f4.u32l;
    // 0x151C06C8: lw          $t7, 0x1D4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1D4);
    // 0x151C06CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C06D0: beql        $t7, $zero, L_151C06EC
    if (ctx->r15 == 0) {
        // 0x151C06D4: lwc1        $f6, 0x14($s0)
        ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
            goto L_151C06EC;
    }
    goto skip_0;
    // 0x151C06D4: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x151C06D8: jal         0x151C1798
    // 0x151C06DC: addiu       $a1, $sp, 0x260
    ctx->r5 = ADD32(ctx->r29, 0X260);
    func_151C1798(rdram, ctx);
        goto after_0;
    // 0x151C06DC: addiu       $a1, $sp, 0x260
    ctx->r5 = ADD32(ctx->r29, 0X260);
    after_0:
    // 0x151C06E0: b           L_151C0860
    // 0x151C06E4: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_151C0860;
    // 0x151C06E4: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151C06E8: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
L_151C06EC:
    // 0x151C06EC: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x151C06F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151C06F4: swc1        $f6, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->f6.u32l;
    // 0x151C06F8: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151C06FC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151C0700: swc1        $f16, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->f16.u32l;
    // 0x151C0704: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151C0708: b           L_151C085C
    // 0x151C070C: swc1        $f18, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f18.u32l;
        goto L_151C085C;
    // 0x151C070C: swc1        $f18, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f18.u32l;
L_151C0710:
    // 0x151C0710: lw          $a1, 0x318($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X318);
    // 0x151C0714: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151C0718: beq         $a1, $zero, L_151C0818
    if (ctx->r5 == 0) {
        // 0x151C071C: addiu       $v1, $v0, 0x13C
        ctx->r3 = ADD32(ctx->r2, 0X13C);
            goto L_151C0818;
    }
    // 0x151C071C: addiu       $v1, $v0, 0x13C
    ctx->r3 = ADD32(ctx->r2, 0X13C);
    // 0x151C0720: lbu         $t8, 0x65($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X65);
    // 0x151C0724: beql        $t8, $zero, L_151C0758
    if (ctx->r24 == 0) {
        // 0x151C0728: lbu         $t9, 0x197($v0)
        ctx->r25 = MEM_BU(ctx->r2, 0X197);
            goto L_151C0758;
    }
    goto skip_1;
    // 0x151C0728: lbu         $t9, 0x197($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X197);
    skip_1:
    // 0x151C072C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151C0730: lui         $at, 0xC150
    ctx->r1 = S32(0XC150 << 16);
    // 0x151C0734: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C0738: swc1        $f4, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->f4.u32l;
    // 0x151C073C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151C0740: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C0744: swc1        $f10, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->f10.u32l;
    // 0x151C0748: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151C074C: b           L_151C085C
    // 0x151C0750: swc1        $f16, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f16.u32l;
        goto L_151C085C;
    // 0x151C0750: swc1        $f16, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f16.u32l;
    // 0x151C0754: lbu         $t9, 0x197($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X197);
L_151C0758:
    // 0x151C0758: beql        $t9, $zero, L_151C07D4
    if (ctx->r25 == 0) {
        // 0x151C075C: lw          $t1, 0x1D4($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X1D4);
            goto L_151C07D4;
    }
    goto skip_2;
    // 0x151C075C: lw          $t1, 0x1D4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1D4);
    skip_2:
    // 0x151C0760: lbu         $a0, 0x23D($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X23D);
    // 0x151C0764: jal         0x15144AA8
    // 0x151C0768: sw          $v1, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->r3;
    func_15144AA8(rdram, ctx);
        goto after_1;
    // 0x151C0768: sw          $v1, 0x234($sp)
    MEM_W(0X234, ctx->r29) = ctx->r3;
    after_1:
    // 0x151C076C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C0770: lwc1        $f18, -0x5664($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5664);
    // 0x151C0774: mul.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151C0778: jal         0x15047C00
    // 0x151C077C: swc1        $f12, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->f12.u32l;
    cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x151C077C: swc1        $f12, 0x22C($sp)
    MEM_W(0X22C, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x151C0780: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151C0784: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C0788: lw          $v1, 0x234($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X234);
    // 0x151C078C: lwc1        $f12, 0x22C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X22C);
    // 0x151C0790: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C0794: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x151C0798: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C079C: swc1        $f10, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->f10.u32l;
    // 0x151C07A0: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x151C07A4: jal         0x15047D60
    // 0x151C07A8: swc1        $f16, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->f16.u32l;
    sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x151C07A8: swc1        $f16, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x151C07AC: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151C07B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C07B4: lw          $v1, 0x234($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X234);
    // 0x151C07B8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C07BC: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x151C07C0: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x151C07C4: swc1        $f8, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f8.u32l;
    // 0x151C07C8: b           L_151C0860
    // 0x151C07CC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_151C0860;
    // 0x151C07CC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151C07D0: lw          $t1, 0x1D4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1D4);
L_151C07D4:
    // 0x151C07D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C07D8: beql        $t1, $zero, L_151C07F4
    if (ctx->r9 == 0) {
        // 0x151C07DC: lwc1        $f10, 0x14($s0)
        ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
            goto L_151C07F4;
    }
    goto skip_3;
    // 0x151C07DC: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    skip_3:
    // 0x151C07E0: jal         0x151C1798
    // 0x151C07E4: addiu       $a1, $sp, 0x260
    ctx->r5 = ADD32(ctx->r29, 0X260);
    func_151C1798(rdram, ctx);
        goto after_4;
    // 0x151C07E4: addiu       $a1, $sp, 0x260
    ctx->r5 = ADD32(ctx->r29, 0X260);
    after_4:
    // 0x151C07E8: b           L_151C0860
    // 0x151C07EC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_151C0860;
    // 0x151C07EC: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151C07F0: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
L_151C07F4:
    // 0x151C07F4: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x151C07F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C07FC: swc1        $f10, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->f10.u32l;
    // 0x151C0800: lwc1        $f16, 0x18($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151C0804: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151C0808: swc1        $f18, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->f18.u32l;
    // 0x151C080C: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151C0810: b           L_151C085C
    // 0x151C0814: swc1        $f6, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f6.u32l;
        goto L_151C085C;
    // 0x151C0814: swc1        $f6, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f6.u32l;
L_151C0818:
    // 0x151C0818: lw          $t2, 0x1D4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1D4);
    // 0x151C081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C0820: beql        $t2, $zero, L_151C083C
    if (ctx->r10 == 0) {
        // 0x151C0824: lwc1        $f8, 0x14($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
            goto L_151C083C;
    }
    goto skip_4;
    // 0x151C0824: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
    skip_4:
    // 0x151C0828: jal         0x151C1798
    // 0x151C082C: addiu       $a1, $sp, 0x260
    ctx->r5 = ADD32(ctx->r29, 0X260);
    func_151C1798(rdram, ctx);
        goto after_5;
    // 0x151C082C: addiu       $a1, $sp, 0x260
    ctx->r5 = ADD32(ctx->r29, 0X260);
    after_5:
    // 0x151C0830: b           L_151C0860
    // 0x151C0834: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
        goto L_151C0860;
    // 0x151C0834: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
    // 0x151C0838: lwc1        $f8, 0x14($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X14);
L_151C083C:
    // 0x151C083C: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x151C0840: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C0844: swc1        $f8, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->f8.u32l;
    // 0x151C0848: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x151C084C: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151C0850: swc1        $f4, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->f4.u32l;
    // 0x151C0854: lwc1        $f18, 0x1C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x151C0858: swc1        $f18, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->f18.u32l;
L_151C085C:
    // 0x151C085C: lw          $v0, 0x31C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X31C);
L_151C0860:
    // 0x151C0860: lw          $t4, 0x30C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30C);
    // 0x151C0864: beq         $v0, $zero, L_151C0878
    if (ctx->r2 == 0) {
        // 0x151C0868: nop
    
            goto L_151C0878;
    }
    // 0x151C0868: nop

    // 0x151C086C: lbu         $t3, 0x197($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X197);
    // 0x151C0870: bnel        $t3, $zero, L_151C0884
    if (ctx->r11 != 0) {
        // 0x151C0874: lw          $t5, 0x30C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X30C);
            goto L_151C0884;
    }
    goto skip_5;
    // 0x151C0874: lw          $t5, 0x30C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30C);
    skip_5:
L_151C0878:
    // 0x151C0878: beq         $t4, $zero, L_151C08EC
    if (ctx->r12 == 0) {
        // 0x151C087C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_151C08EC;
    }
    // 0x151C087C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C0880: lw          $t5, 0x30C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30C);
L_151C0884:
    // 0x151C0884: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x151C0888: beq         $t5, $zero, L_151C0898
    if (ctx->r13 == 0) {
        // 0x151C088C: nop
    
            goto L_151C0898;
    }
    // 0x151C088C: nop

    // 0x151C0890: b           L_151C0898
    // 0x151C0894: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_151C0898;
    // 0x151C0894: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_151C0898:
    // 0x151C0898: lw          $v1, 0x31C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X31C);
    // 0x151C089C: addiu       $t6, $sp, 0x248
    ctx->r14 = ADD32(ctx->r29, 0X248);
    // 0x151C08A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151C08A4: lw          $at, 0x13C($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X13C);
    // 0x151C08A8: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
    // 0x151C08AC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151C08B0: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x151C08B4: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x151C08B8: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x151C08BC: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151C08C0: lw          $t9, 0x31C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X31C);
    // 0x151C08C4: lwc1        $f6, 0x130($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X130);
    // 0x151C08C8: swc1        $f6, 0x23C($sp)
    MEM_W(0X23C, ctx->r29) = ctx->f6.u32l;
    // 0x151C08CC: lw          $t1, 0x31C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X31C);
    // 0x151C08D0: lwc1        $f8, 0x134($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X134);
    // 0x151C08D4: swc1        $f8, 0x240($sp)
    MEM_W(0X240, ctx->r29) = ctx->f8.u32l;
    // 0x151C08D8: lw          $t2, 0x31C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X31C);
    // 0x151C08DC: lwc1        $f10, 0x138($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X138);
    // 0x151C08E0: swc1        $f10, 0x244($sp)
    MEM_W(0X244, ctx->r29) = ctx->f10.u32l;
    // 0x151C08E4: b           L_151C0938
    // 0x151C08E8: nop

        goto L_151C0938;
    // 0x151C08E8: nop

L_151C08EC:
    // 0x151C08EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151C08F0: addiu       $a1, $sp, 0x254
    ctx->r5 = ADD32(ctx->r29, 0X254);
    // 0x151C08F4: addiu       $a2, $sp, 0x218
    ctx->r6 = ADD32(ctx->r29, 0X218);
    // 0x151C08F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151C08FC: jal         0x15145740
    // 0x151C0900: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_15145740(rdram, ctx);
        goto after_6;
    // 0x151C0900: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x151C0904: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C0908: lwc1        $f0, -0x5660($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5660);
    // 0x151C090C: lwc1        $f4, 0x254($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X254);
    // 0x151C0910: lwc1        $f6, 0x258($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X258);
    // 0x151C0914: lwc1        $f10, 0x25C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X25C);
    // 0x151C0918: mul.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151C091C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x151C0920: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151C0924: nop

    // 0x151C0928: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151C092C: swc1        $f18, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->f18.u32l;
    // 0x151C0930: swc1        $f8, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->f8.u32l;
    // 0x151C0934: swc1        $f16, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = ctx->f16.u32l;
L_151C0938:
    // 0x151C0938: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x151C093C: lw          $t3, -0x1610($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1610);
    // 0x151C0940: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x151C0944: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x151C0948: bne         $t3, $at, L_151C0958
    if (ctx->r11 != ctx->r1) {
        // 0x151C094C: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_151C0958;
    }
    // 0x151C094C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x151C0950: b           L_151C09A8
    // 0x151C0954: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151C09A8;
    // 0x151C0954: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151C0958:
    // 0x151C0958: beq         $t0, $zero, L_151C096C
    if (ctx->r8 == 0) {
        // 0x151C095C: addiu       $t5, $sp, 0x260
        ctx->r13 = ADD32(ctx->r29, 0X260);
            goto L_151C096C;
    }
    // 0x151C095C: addiu       $t5, $sp, 0x260
    ctx->r13 = ADD32(ctx->r29, 0X260);
    // 0x151C0960: addiu       $t4, $sp, 0x248
    ctx->r12 = ADD32(ctx->r29, 0X248);
    // 0x151C0964: b           L_151C0970
    // 0x151C0968: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
        goto L_151C0970;
    // 0x151C0968: sw          $t4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r12;
L_151C096C:
    // 0x151C096C: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
L_151C0970:
    // 0x151C0970: beq         $t0, $zero, L_151C0984
    if (ctx->r8 == 0) {
        // 0x151C0974: addiu       $t6, $sp, 0x254
        ctx->r14 = ADD32(ctx->r29, 0X254);
            goto L_151C0984;
    }
    // 0x151C0974: addiu       $t6, $sp, 0x254
    ctx->r14 = ADD32(ctx->r29, 0X254);
    // 0x151C0978: addiu       $t7, $sp, 0x23C
    ctx->r15 = ADD32(ctx->r29, 0X23C);
    // 0x151C097C: b           L_151C0988
    // 0x151C0980: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
        goto L_151C0988;
    // 0x151C0980: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
L_151C0984:
    // 0x151C0984: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
L_151C0988:
    // 0x151C0988: lw          $t8, 0x310($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X310);
    // 0x151C098C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x151C0990: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x151C0994: sb          $t0, 0x26F($sp)
    MEM_B(0X26F, ctx->r29) = ctx->r8;
    // 0x151C0998: jal         0x151D5B6C
    // 0x151C099C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_151D5B6C(rdram, ctx);
        goto after_7;
    // 0x151C099C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_7:
    // 0x151C09A0: lbu         $t0, 0x26F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X26F);
    // 0x151C09A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_151C09A8:
    // 0x151C09A8: beq         $t0, $zero, L_151C09B8
    if (ctx->r8 == 0) {
        // 0x151C09AC: addiu       $a0, $sp, 0x2A4
        ctx->r4 = ADD32(ctx->r29, 0X2A4);
            goto L_151C09B8;
    }
    // 0x151C09AC: addiu       $a0, $sp, 0x2A4
    ctx->r4 = ADD32(ctx->r29, 0X2A4);
    // 0x151C09B0: b           L_151C09BC
    // 0x151C09B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_151C09BC;
    // 0x151C09B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_151C09B8:
    // 0x151C09B8: addiu       $a2, $sp, 0x254
    ctx->r6 = ADD32(ctx->r29, 0X254);
L_151C09BC:
    // 0x151C09BC: beq         $t0, $zero, L_151C09D0
    if (ctx->r8 == 0) {
        // 0x151C09C0: addiu       $a1, $sp, 0x260
        ctx->r5 = ADD32(ctx->r29, 0X260);
            goto L_151C09D0;
    }
    // 0x151C09C0: addiu       $a1, $sp, 0x260
    ctx->r5 = ADD32(ctx->r29, 0X260);
    // 0x151C09C4: addiu       $t9, $sp, 0x248
    ctx->r25 = ADD32(ctx->r29, 0X248);
    // 0x151C09C8: b           L_151C09D4
    // 0x151C09CC: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
        goto L_151C09D4;
    // 0x151C09CC: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
L_151C09D0:
    // 0x151C09D0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_151C09D4:
    // 0x151C09D4: beq         $t0, $zero, L_151C09E8
    if (ctx->r8 == 0) {
        // 0x151C09D8: addiu       $t4, $sp, 0x294
        ctx->r12 = ADD32(ctx->r29, 0X294);
            goto L_151C09E8;
    }
    // 0x151C09D8: addiu       $t4, $sp, 0x294
    ctx->r12 = ADD32(ctx->r29, 0X294);
    // 0x151C09DC: addiu       $t1, $sp, 0x23C
    ctx->r9 = ADD32(ctx->r29, 0X23C);
    // 0x151C09E0: b           L_151C09EC
    // 0x151C09E4: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
        goto L_151C09EC;
    // 0x151C09E4: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
L_151C09E8:
    // 0x151C09E8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_151C09EC:
    // 0x151C09EC: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x151C09F0: lw          $t3, 0x310($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X310);
    // 0x151C09F4: addiu       $t5, $sp, 0x2A0
    ctx->r13 = ADD32(ctx->r29, 0X2A0);
    // 0x151C09F8: addiu       $t7, $sp, 0x270
    ctx->r15 = ADD32(ctx->r29, 0X270);
    // 0x151C09FC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151C0A00: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x151C0A04: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x151C0A08: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151C0A0C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x151C0A10: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x151C0A14: sw          $v1, 0x238($sp)
    MEM_W(0X238, ctx->r29) = ctx->r3;
    // 0x151C0A18: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151C0A1C: jal         0x151C196C
    // 0x151C0A20: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    func_151C196C(rdram, ctx);
        goto after_8;
    // 0x151C0A20: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    after_8:
    // 0x151C0A24: beq         $v0, $zero, L_151C10F8
    if (ctx->r2 == 0) {
        // 0x151C0A28: lw          $v1, 0x238($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X238);
            goto L_151C10F8;
    }
    // 0x151C0A28: lw          $v1, 0x238($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X238);
    // 0x151C0A2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C0A30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151C0A34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C0A38: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151C0A3C: lwc1        $f2, -0x565C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X565C);
    // 0x151C0A40: addiu       $t8, $sp, 0x2A4
    ctx->r24 = ADD32(ctx->r29, 0X2A4);
    // 0x151C0A44: sw          $v1, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r3;
    // 0x151C0A48: sw          $zero, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = 0;
    // 0x151C0A4C: addiu       $t2, $t8, 0x60
    ctx->r10 = ADD32(ctx->r24, 0X60);
    // 0x151C0A50: addiu       $t6, $sp, 0x148
    ctx->r14 = ADD32(ctx->r29, 0X148);
L_151C0A54:
    // 0x151C0A54: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151C0A58: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x151C0A5C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x151C0A60: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x151C0A64: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x151C0A68: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x151C0A6C: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x151C0A70: bne         $t8, $t2, L_151C0A54
    if (ctx->r24 != ctx->r10) {
        // 0x151C0A74: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_151C0A54;
    }
    // 0x151C0A74: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x151C0A78: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x151C0A7C: addiu       $t4, $sp, 0x260
    ctx->r12 = ADD32(ctx->r29, 0X260);
    // 0x151C0A80: addiu       $t3, $sp, 0xF4
    ctx->r11 = ADD32(ctx->r29, 0XF4);
    // 0x151C0A84: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151C0A88: sw          $zero, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = 0;
    // 0x151C0A8C: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x151C0A90: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x151C0A94: swc1        $f2, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f2.u32l;
    // 0x151C0A98: swc1        $f2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f2.u32l;
    // 0x151C0A9C: swc1        $f12, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f12.u32l;
    // 0x151C0AA0: swc1        $f12, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f12.u32l;
    // 0x151C0AA4: swc1        $f12, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f12.u32l;
    // 0x151C0AA8: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x151C0AAC: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    // 0x151C0AB0: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x151C0AB4: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151C0AB8: lui         $t9, 0x50
    ctx->r25 = S32(0X50 << 16);
    // 0x151C0ABC: ori         $t9, $t9, 0x920
    ctx->r25 = ctx->r25 | 0X920;
    // 0x151C0AC0: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x151C0AC4: lw          $t1, 0x4($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X4);
    // 0x151C0AC8: addiu       $t2, $zero, 0x12C
    ctx->r10 = ADD32(0, 0X12C);
    // 0x151C0ACC: addiu       $t8, $zero, 0x2F
    ctx->r24 = ADD32(0, 0X2F);
    // 0x151C0AD0: sw          $t1, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r9;
    // 0x151C0AD4: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151C0AD8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151C0ADC: addiu       $t7, $sp, 0x1B8
    ctx->r15 = ADD32(ctx->r29, 0X1B8);
    // 0x151C0AE0: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x151C0AE4: lw          $t5, 0x310($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X310);
    // 0x151C0AE8: swc1        $f12, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f12.u32l;
    // 0x151C0AEC: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
    // 0x151C0AF0: sh          $t2, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r10;
    // 0x151C0AF4: sh          $t8, 0x122($sp)
    MEM_H(0X122, ctx->r29) = ctx->r24;
    // 0x151C0AF8: sb          $t6, 0x124($sp)
    MEM_B(0X124, ctx->r29) = ctx->r14;
    // 0x151C0AFC: sw          $s0, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r16;
    // 0x151C0B00: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x151C0B04: addiu       $t2, $sp, 0x294
    ctx->r10 = ADD32(ctx->r29, 0X294);
    // 0x151C0B08: addiu       $t9, $sp, 0x1E0
    ctx->r25 = ADD32(ctx->r29, 0X1E0);
    // 0x151C0B0C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x151C0B10: lw          $t1, 0x4($t5)
    ctx->r9 = MEM_W(ctx->r13, 0X4);
    // 0x151C0B14: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151C0B18: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151C0B1C: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x151C0B20: lw          $at, 0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X8);
    // 0x151C0B24: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x151C0B28: lw          $t1, 0xC($t5)
    ctx->r9 = MEM_W(ctx->r13, 0XC);
    // 0x151C0B2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C0B30: addiu       $t5, $sp, 0x1EC
    ctx->r13 = ADD32(ctx->r29, 0X1EC);
    // 0x151C0B34: sw          $t1, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r9;
    // 0x151C0B38: lwc1        $f4, 0x2A0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2A0);
    // 0x151C0B3C: lwc1        $f18, -0x5658($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5658);
    // 0x151C0B40: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x151C0B44: swc1        $f6, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f6.u32l;
    // 0x151C0B48: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x151C0B4C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x151C0B50: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x151C0B54: sw          $t4, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r12;
    // 0x151C0B58: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x151C0B5C: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x151C0B60: lwc1        $f8, 0x2A0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2A0);
    // 0x151C0B64: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x151C0B68: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151C0B6C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x151C0B70: nop

    // 0x151C0B74: bc1tl       L_151C0B88
    if (c1cs) {
        // 0x151C0B78: sw          $zero, 0x58($sp)
        MEM_W(0X58, ctx->r29) = 0;
            goto L_151C0B88;
    }
    goto skip_6;
    // 0x151C0B78: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    skip_6:
    // 0x151C0B7C: b           L_151C0B88
    // 0x151C0B80: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
        goto L_151C0B88;
    // 0x151C0B80: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    // 0x151C0B84: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_151C0B88:
    // 0x151C0B88: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x151C0B8C: addiu       $t1, $sp, 0x270
    ctx->r9 = ADD32(ctx->r29, 0X270);
    // 0x151C0B90: addiu       $t9, $t1, 0x24
    ctx->r25 = ADD32(ctx->r9, 0X24);
    // 0x151C0B94: sb          $t7, 0x210($sp)
    MEM_B(0X210, ctx->r29) = ctx->r15;
L_151C0B98:
    // 0x151C0B98: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151C0B9C: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x151C0BA0: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x151C0BA4: sw          $at, -0xC($t5)
    MEM_W(-0XC, ctx->r13) = ctx->r1;
    // 0x151C0BA8: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x151C0BAC: sw          $at, -0x8($t5)
    MEM_W(-0X8, ctx->r13) = ctx->r1;
    // 0x151C0BB0: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x151C0BB4: bne         $t1, $t9, L_151C0B98
    if (ctx->r9 != ctx->r25) {
        // 0x151C0BB8: sw          $at, -0x4($t5)
        MEM_W(-0X4, ctx->r13) = ctx->r1;
            goto L_151C0B98;
    }
    // 0x151C0BB8: sw          $at, -0x4($t5)
    MEM_W(-0X4, ctx->r13) = ctx->r1;
    // 0x151C0BBC: lwc1        $f16, 0x180($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X180);
    // 0x151C0BC0: lwc1        $f18, 0x184($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X184);
    // 0x151C0BC4: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x151C0BC8: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151C0BCC: swc1        $f0, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f0.u32l;
    // 0x151C0BD0: addiu       $a0, $sp, 0x100
    ctx->r4 = ADD32(ctx->r29, 0X100);
    // 0x151C0BD4: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151C0BD8: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x151C0BDC: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x151C0BE0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151C0BE4: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x151C0BE8: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x151C0BEC: jal         0x15145974
    // 0x151C0BF0: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    func_15145974(rdram, ctx);
        goto after_9;
    // 0x151C0BF0: swc1        $f10, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x151C0BF4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x151C0BF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C0BFC: lwc1        $f10, -0x5654($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5654);
    // 0x151C0C00: lwc1        $f8, 0x14C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x151C0C04: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
    // 0x151C0C08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151C0C0C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151C0C10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x151C0C14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151C0C18: lbu         $t2, 0x317($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X317);
    // 0x151C0C1C: lbu         $t1, 0x31B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X31B);
    // 0x151C0C20: lw          $t5, 0x31C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X31C);
    // 0x151C0C24: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C0C28: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x151C0C2C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151C0C30: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x151C0C34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151C0C38: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151C0C3C: swc1        $f16, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f16.u32l;
    // 0x151C0C40: sw          $zero, 0x128($sp)
    MEM_W(0X128, ctx->r29) = 0;
    // 0x151C0C44: sb          $t4, 0x12C($sp)
    MEM_B(0X12C, ctx->r29) = ctx->r12;
    // 0x151C0C48: sb          $t3, 0x12D($sp)
    MEM_B(0X12D, ctx->r29) = ctx->r11;
    // 0x151C0C4C: sb          $zero, 0x12E($sp)
    MEM_B(0X12E, ctx->r29) = 0;
    // 0x151C0C50: sb          $zero, 0x12F($sp)
    MEM_B(0X12F, ctx->r29) = 0;
    // 0x151C0C54: sb          $zero, 0x130($sp)
    MEM_B(0X130, ctx->r29) = 0;
    // 0x151C0C58: sb          $zero, 0x131($sp)
    MEM_B(0X131, ctx->r29) = 0;
    // 0x151C0C5C: sb          $zero, 0x132($sp)
    MEM_B(0X132, ctx->r29) = 0;
    // 0x151C0C60: sb          $zero, 0x133($sp)
    MEM_B(0X133, ctx->r29) = 0;
    // 0x151C0C64: sb          $t7, 0x134($sp)
    MEM_B(0X134, ctx->r29) = ctx->r15;
    // 0x151C0C68: sb          $t8, 0x136($sp)
    MEM_B(0X136, ctx->r29) = ctx->r24;
    // 0x151C0C6C: sw          $zero, 0x138($sp)
    MEM_W(0X138, ctx->r29) = 0;
    // 0x151C0C70: sb          $zero, 0x13C($sp)
    MEM_B(0X13C, ctx->r29) = 0;
    // 0x151C0C74: sh          $t6, 0x13E($sp)
    MEM_H(0X13E, ctx->r29) = ctx->r14;
    // 0x151C0C78: sh          $t9, 0x140($sp)
    MEM_H(0X140, ctx->r29) = ctx->r25;
    // 0x151C0C7C: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x151C0C80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x151C0C84: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151C0C88: addiu       $a3, $zero, 0xD0
    ctx->r7 = ADD32(0, 0XD0);
    // 0x151C0C8C: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    // 0x151C0C90: swc1        $f18, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f18.u32l;
    // 0x151C0C94: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x151C0C98: sb          $t2, 0x1DA($sp)
    MEM_B(0X1DA, ctx->r29) = ctx->r10;
    // 0x151C0C9C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151C0CA0: jal         0x15132A4C
    // 0x151C0CA4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_15132A4C(rdram, ctx);
        goto after_10;
    // 0x151C0CA4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_10:
    // 0x151C0CA8: beq         $v0, $zero, L_151C0E74
    if (ctx->r2 == 0) {
        // 0x151C0CAC: lw          $a0, 0x1C8($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C8);
            goto L_151C0E74;
    }
    // 0x151C0CAC: lw          $a0, 0x1C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C8);
    // 0x151C0CB0: addiu       $a0, $v0, 0x170
    ctx->r4 = ADD32(ctx->r2, 0X170);
    // 0x151C0CB4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x151C0CB8: addiu       $a1, $sp, 0x148
    ctx->r5 = ADD32(ctx->r29, 0X148);
    // 0x151C0CBC: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    // 0x151C0CC0: jal         0x10022EC0
    // 0x151C0CC4: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x151C0CC4: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    after_11:
    // 0x151C0CC8: lwc1        $f4, 0x260($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X260);
    // 0x151C0CCC: lwc1        $f6, 0x264($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X264);
    // 0x151C0CD0: lwc1        $f10, 0x268($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X268);
    // 0x151C0CD4: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C0CD8: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x151C0CDC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x151C0CE0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C0CE4: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x151C0CE8: addiu       $t3, $zero, 0x12C
    ctx->r11 = ADD32(0, 0X12C);
    // 0x151C0CEC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C0CF0: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x151C0CF4: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x151C0CF8: lw          $t8, 0x31C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X31C);
    // 0x151C0CFC: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x151C0D00: lbu         $t7, 0x31B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X31B);
    // 0x151C0D04: sb          $t2, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r10;
    // 0x151C0D08: sb          $t4, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = ctx->r12;
    // 0x151C0D0C: sh          $t3, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r11;
    // 0x151C0D10: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151C0D14: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C0D18: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151C0D1C: sb          $zero, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = 0;
    // 0x151C0D20: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x151C0D24: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x151C0D28: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151C0D2C: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x151C0D30: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x151C0D34: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x151C0D38: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151C0D3C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C0D40: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x151C0D44: sw          $t9, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r25;
    // 0x151C0D48: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151C0D4C: sw          $t5, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r13;
    // 0x151C0D50: jal         0x151602C0
    // 0x151C0D54: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_151602C0(rdram, ctx);
        goto after_12;
    // 0x151C0D54: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_12:
    // 0x151C0D58: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151C0D5C: sw          $v0, 0x80($t6)
    MEM_W(0X80, ctx->r14) = ctx->r2;
    // 0x151C0D60: jal         0x151B8908
    // 0x151C0D64: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    func_151B8908(rdram, ctx);
        goto after_13;
    // 0x151C0D64: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    after_13:
    // 0x151C0D68: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x151C0D6C: jal         0x150ADA20
    // 0x151C0D70: sw          $v0, 0x84($t9)
    MEM_W(0X84, ctx->r25) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_14;
    // 0x151C0D70: sw          $v0, 0x84($t9)
    MEM_W(0X84, ctx->r25) = ctx->r2;
    after_14:
    // 0x151C0D74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151C0D78: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C0D7C: lwc1        $f6, 0x264($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X264);
    // 0x151C0D80: lwc1        $f4, 0x260($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X260);
    // 0x151C0D84: lwc1        $f10, 0x268($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X268);
    // 0x151C0D88: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x151C0D8C: mfhi        $a0
    ctx->r4 = hi;
    // 0x151C0D90: addiu       $a0, $a0, 0x2EE
    ctx->r4 = ADD32(ctx->r4, 0X2EE);
    // 0x151C0D94: trunc.w.s   $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151C0D98: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x151C0D9C: lui         $t3, 0x151C
    ctx->r11 = S32(0X151C << 16);
    // 0x151C0DA0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151C0DA4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x151C0DA8: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x151C0DAC: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151C0DB0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x151C0DB4: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x151C0DB8: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x151C0DBC: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x151C0DC0: addiu       $t2, $zero, 0x3E8
    ctx->r10 = ADD32(0, 0X3E8);
    // 0x151C0DC4: addiu       $t3, $t3, 0x110C
    ctx->r11 = ADD32(ctx->r11, 0X110C);
    // 0x151C0DC8: andi        $t1, $a0, 0xFFFF
    ctx->r9 = ctx->r4 & 0XFFFF;
    // 0x151C0DCC: addiu       $t5, $zero, 0x7530
    ctx->r13 = ADD32(0, 0X7530);
    // 0x151C0DD0: addiu       $t4, $zero, 0x1F4
    ctx->r12 = ADD32(0, 0X1F4);
    // 0x151C0DD4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x151C0DD8: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x151C0DDC: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x151C0DE0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x151C0DE4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151C0DE8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x151C0DEC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x151C0DF0: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x151C0DF4: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151C0DF8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x151C0DFC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151C0E00: jal         0x1000FA64
    // 0x151C0E04: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    func_1000FA64(rdram, ctx);
        goto after_15;
    // 0x151C0E04: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_15:
    // 0x151C0E08: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x151C0E0C: sh          $v0, 0x90($t6)
    MEM_H(0X90, ctx->r14) = ctx->r2;
    // 0x151C0E10: jal         0x151B8400
    // 0x151C0E14: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    func_151B8400(rdram, ctx);
        goto after_16;
    // 0x151C0E14: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    after_16:
    // 0x151C0E18: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x151C0E1C: lui         $t1, 0x8008
    ctx->r9 = S32(0X8008 << 16);
    // 0x151C0E20: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x151C0E24: sw          $v0, 0x88($t9)
    MEM_W(0X88, ctx->r25) = ctx->r2;
    // 0x151C0E28: lw          $t1, 0x2FA0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2FA0);
    // 0x151C0E2C: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x151C0E30: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x151C0E34: beql        $at, $zero, L_151C0E6C
    if (ctx->r1 == 0) {
        // 0x151C0E38: sw          $zero, 0x8C($t4)
        MEM_W(0X8C, ctx->r12) = 0;
            goto L_151C0E6C;
    }
    goto skip_7;
    // 0x151C0E38: sw          $zero, 0x8C($t4)
    MEM_W(0X8C, ctx->r12) = 0;
    skip_7:
    // 0x151C0E3C: lb          $t5, -0x274($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X274);
    // 0x151C0E40: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x151C0E44: lbu         $a1, 0x31B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X31B);
    // 0x151C0E48: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x151C0E4C: beql        $at, $zero, L_151C0E6C
    if (ctx->r1 == 0) {
        // 0x151C0E50: sw          $zero, 0x8C($t4)
        MEM_W(0X8C, ctx->r12) = 0;
            goto L_151C0E6C;
    }
    goto skip_8;
    // 0x151C0E50: sw          $zero, 0x8C($t4)
    MEM_W(0X8C, ctx->r12) = 0;
    skip_8:
    // 0x151C0E54: jal         0x151B8668
    // 0x151C0E58: lw          $a2, 0x31C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X31C);
    func_151B8668(rdram, ctx);
        goto after_17;
    // 0x151C0E58: lw          $a2, 0x31C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X31C);
    after_17:
    // 0x151C0E5C: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x151C0E60: b           L_151C0E98
    // 0x151C0E64: sw          $v0, 0x8C($t2)
    MEM_W(0X8C, ctx->r10) = ctx->r2;
        goto L_151C0E98;
    // 0x151C0E64: sw          $v0, 0x8C($t2)
    MEM_W(0X8C, ctx->r10) = ctx->r2;
    // 0x151C0E68: sw          $zero, 0x8C($t4)
    MEM_W(0X8C, ctx->r12) = 0;
L_151C0E6C:
    // 0x151C0E6C: b           L_151C0E9C
    // 0x151C0E70: lw          $t3, 0x1D4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1D4);
        goto L_151C0E9C;
    // 0x151C0E70: lw          $t3, 0x1D4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1D4);
L_151C0E74:
    // 0x151C0E74: beql        $a0, $zero, L_151C0E88
    if (ctx->r4 == 0) {
        // 0x151C0E78: lw          $a0, 0x1CC($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1CC);
            goto L_151C0E88;
    }
    goto skip_9;
    // 0x151C0E78: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
    skip_9:
    // 0x151C0E7C: jal         0x1516972C
    // 0x151C0E80: nop

    func_1516972C(rdram, ctx);
        goto after_18;
    // 0x151C0E80: nop

    after_18:
    // 0x151C0E84: lw          $a0, 0x1CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1CC);
L_151C0E88:
    // 0x151C0E88: beql        $a0, $zero, L_151C0E9C
    if (ctx->r4 == 0) {
        // 0x151C0E8C: lw          $t3, 0x1D4($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X1D4);
            goto L_151C0E9C;
    }
    goto skip_10;
    // 0x151C0E8C: lw          $t3, 0x1D4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1D4);
    skip_10:
    // 0x151C0E90: jal         0x1516972C
    // 0x151C0E94: nop

    func_1516972C(rdram, ctx);
        goto after_19;
    // 0x151C0E94: nop

    after_19:
L_151C0E98:
    // 0x151C0E98: lw          $t3, 0x1D4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1D4);
L_151C0E9C:
    // 0x151C0E9C: beql        $t3, $zero, L_151C10FC
    if (ctx->r11 == 0) {
        // 0x151C0EA0: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151C10FC;
    }
    goto skip_11;
    // 0x151C0EA0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_11:
    // 0x151C0EA4: lbu         $t7, 0x74($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X74);
    // 0x151C0EA8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x151C0EAC: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x151C0EB0: beql        $t8, $at, L_151C10FC
    if (ctx->r24 == ctx->r1) {
        // 0x151C0EB4: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151C10FC;
    }
    goto skip_12;
    // 0x151C0EB4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_12:
    // 0x151C0EB8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x151C0EBC: addiu       $at, $zero, 0x77
    ctx->r1 = ADD32(0, 0X77);
    // 0x151C0EC0: beq         $v0, $at, L_151C10F8
    if (ctx->r2 == ctx->r1) {
        // 0x151C0EC4: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_151C10F8;
    }
    // 0x151C0EC4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x151C0EC8: beq         $v0, $at, L_151C10F8
    if (ctx->r2 == ctx->r1) {
        // 0x151C0ECC: addiu       $t6, $sp, 0xA4
        ctx->r14 = ADD32(ctx->r29, 0XA4);
            goto L_151C10F8;
    }
    // 0x151C0ECC: addiu       $t6, $sp, 0xA4
    ctx->r14 = ADD32(ctx->r29, 0XA4);
    // 0x151C0ED0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x151C0ED4: addiu       $t9, $t9, -0x56D0
    ctx->r25 = ADD32(ctx->r25, -0X56D0);
    // 0x151C0ED8: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x151C0EDC: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x151C0EE0: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151C0EE4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151C0EE8: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x151C0EEC: addiu       $t4, $t4, -0x56C4
    ctx->r12 = ADD32(ctx->r12, -0X56C4);
    // 0x151C0EF0: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x151C0EF4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x151C0EF8: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x151C0EFC: addiu       $t2, $sp, 0x98
    ctx->r10 = ADD32(ctx->r29, 0X98);
    // 0x151C0F00: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x151C0F04: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x151C0F08: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x151C0F0C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x151C0F10: addiu       $t1, $t1, -0x56B8
    ctx->r9 = ADD32(ctx->r9, -0X56B8);
    // 0x151C0F14: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x151C0F18: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x151C0F1C: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151C0F20: addiu       $t8, $sp, 0x8C
    ctx->r24 = ADD32(ctx->r29, 0X8C);
    // 0x151C0F24: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x151C0F28: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x151C0F2C: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151C0F30: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x151C0F34: jal         0x150ADA68
    // 0x151C0F38: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x151C0F38: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    after_20:
    // 0x151C0F3C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x151C0F40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C0F44: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151C0F48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C0F4C: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C0F50: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151C0F54: jal         0x150ADA68
    // 0x151C0F58: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_21;
    // 0x151C0F58: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    after_21:
    // 0x151C0F5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C0F60: lwc1        $f10, -0x5650($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5650);
    // 0x151C0F64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C0F68: lwc1        $f4, -0x564C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X564C);
    // 0x151C0F6C: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151C0F70: addiu       $t5, $sp, 0xA4
    ctx->r13 = ADD32(ctx->r29, 0XA4);
    // 0x151C0F74: addiu       $t3, $sp, 0x98
    ctx->r11 = ADD32(ctx->r29, 0X98);
    // 0x151C0F78: addiu       $t2, $sp, 0x78
    ctx->r10 = ADD32(ctx->r29, 0X78);
    // 0x151C0F7C: addiu       $t4, $sp, 0x6C
    ctx->r12 = ADD32(ctx->r29, 0X6C);
    // 0x151C0F80: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
    // 0x151C0F84: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x151C0F88: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x151C0F8C: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x151C0F90: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x151C0F94: addiu       $a0, $sp, 0x64
    ctx->r4 = ADD32(ctx->r29, 0X64);
    // 0x151C0F98: swc1        $f18, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f18.u32l;
    // 0x151C0F9C: lw          $a2, 0x1D4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1D4);
    // 0x151C0FA0: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x151C0FA4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x151C0FA8: jal         0x15145EA4
    // 0x151C0FAC: addiu       $a2, $a2, 0x240
    ctx->r6 = ADD32(ctx->r6, 0X240);
    func_15145EA4(rdram, ctx);
        goto after_22;
    // 0x151C0FAC: addiu       $a2, $a2, 0x240
    ctx->r6 = ADD32(ctx->r6, 0X240);
    after_22:
    // 0x151C0FB0: jal         0x150ADA20
    // 0x151C0FB4: nop

    func_150ADA20(rdram, ctx);
        goto after_23;
    // 0x151C0FB4: nop

    after_23:
    // 0x151C0FB8: jal         0x150ADA20
    // 0x151C0FBC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_24;
    // 0x151C0FBC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_24:
    // 0x151C0FC0: jal         0x150ADA68
    // 0x151C0FC4: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_25;
    // 0x151C0FC4: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_25:
    // 0x151C0FC8: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x151C0FCC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151C0FD0: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x151C0FD4: divu        $zero, $t6, $at
    lo = S32(U32(ctx->r14) / U32(ctx->r1)); hi = S32(U32(ctx->r14) % U32(ctx->r1));
    // 0x151C0FD8: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151C0FDC: mfhi        $t8
    ctx->r24 = hi;
    // 0x151C0FE0: addiu       $t1, $t8, 0x8
    ctx->r9 = ADD32(ctx->r24, 0X8);
    // 0x151C0FE4: addiu       $t7, $sp, 0x84
    ctx->r15 = ADD32(ctx->r29, 0X84);
    // 0x151C0FE8: divu        $zero, $t9, $at
    lo = S32(U32(ctx->r25) / U32(ctx->r1)); hi = S32(U32(ctx->r25) % U32(ctx->r1));
    // 0x151C0FEC: lui         $at, 0x434C
    ctx->r1 = S32(0X434C << 16);
    // 0x151C0FF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C0FF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C0FF8: lwc1        $f10, -0x5648($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5648);
    // 0x151C0FFC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151C1000: lw          $t8, 0x31C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X31C);
    // 0x151C1004: lbu         $t6, 0x31B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X31B);
    // 0x151C1008: mfhi        $t5
    ctx->r13 = hi;
    // 0x151C100C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151C1010: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151C1014: addiu       $t3, $t5, 0xC8
    ctx->r11 = ADD32(ctx->r13, 0XC8);
    // 0x151C1018: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151C101C: addiu       $t2, $sp, 0x78
    ctx->r10 = ADD32(ctx->r29, 0X78);
    // 0x151C1020: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C1024: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x151C1028: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151C102C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x151C1030: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x151C1034: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x151C1038: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151C103C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x151C1040: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x151C1044: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    // 0x151C1048: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    // 0x151C104C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151C1050: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151C1054: jal         0x15102B38
    // 0x151C1058: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    func_15102B38(rdram, ctx);
        goto after_26;
    // 0x151C1058: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    after_26:
    // 0x151C105C: jal         0x150ADA20
    // 0x151C1060: nop

    func_150ADA20(rdram, ctx);
        goto after_27;
    // 0x151C1060: nop

    after_27:
    // 0x151C1064: jal         0x150ADA20
    // 0x151C1068: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_28;
    // 0x151C1068: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_28:
    // 0x151C106C: jal         0x150ADA68
    // 0x151C1070: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_29;
    // 0x151C1070: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_29:
    // 0x151C1074: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x151C1078: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151C107C: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x151C1080: divu        $zero, $a0, $at
    lo = S32(U32(ctx->r4) / U32(ctx->r1)); hi = S32(U32(ctx->r4) % U32(ctx->r1));
    // 0x151C1084: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151C1088: mfhi        $t1
    ctx->r9 = hi;
    // 0x151C108C: lbu         $t7, 0x31B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X31B);
    // 0x151C1090: lw          $t6, 0x31C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X31C);
    // 0x151C1094: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x151C1098: lui         $at, 0x434C
    ctx->r1 = S32(0X434C << 16);
    // 0x151C109C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C10A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C10A4: lwc1        $f6, -0x5644($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5644);
    // 0x151C10A8: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151C10AC: mfhi        $t3
    ctx->r11 = hi;
    // 0x151C10B0: addiu       $a1, $t3, 0xC8
    ctx->r5 = ADD32(ctx->r11, 0XC8);
    // 0x151C10B4: addiu       $a0, $t1, 0x8
    ctx->r4 = ADD32(ctx->r9, 0X8);
    // 0x151C10B8: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x151C10BC: andi        $t2, $a1, 0xFF
    ctx->r10 = ctx->r5 & 0XFF;
    // 0x151C10C0: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C10C4: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x151C10C8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151C10CC: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x151C10D0: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x151C10D4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x151C10D8: addiu       $a3, $sp, 0x6C
    ctx->r7 = ADD32(ctx->r29, 0X6C);
    // 0x151C10DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151C10E0: jal         0x15103254
    // 0x151C10E4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_15103254(rdram, ctx);
        goto after_30;
    // 0x151C10E4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_30:
    // 0x151C10E8: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x151C10EC: lbu         $a1, 0x31B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X31B);
    // 0x151C10F0: jal         0x151C1860
    // 0x151C10F4: lw          $a2, 0x31C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X31C);
    func_151C1860(rdram, ctx);
        goto after_31;
    // 0x151C10F4: lw          $a2, 0x31C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X31C);
    after_31:
L_151C10F8:
    // 0x151C10F8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_151C10FC:
    // 0x151C10FC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x151C1100: addiu       $sp, $sp, 0x308
    ctx->r29 = ADD32(ctx->r29, 0X308);
    // 0x151C1104: jr          $ra
    // 0x151C1108: nop

    return;
    return;
    // 0x151C1108: nop

;}

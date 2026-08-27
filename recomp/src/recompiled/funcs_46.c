#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_15156F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15156F94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15156F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15156F9C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15156FA0: jal         0x151D5E30
    // 0x15156FA4: addiu       $a0, $a1, 0x88
    ctx->r4 = ADD32(ctx->r5, 0X88);
    func_151D5E30(rdram, ctx);
        goto after_0;
    // 0x15156FA4: addiu       $a0, $a1, 0x88
    ctx->r4 = ADD32(ctx->r5, 0X88);
    after_0:
    // 0x15156FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15156FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15156FB0: jr          $ra
    // 0x15156FB4: nop

    return;
    return;
    // 0x15156FB4: nop

;}
RECOMP_FUNC void func_1519BEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519BEB8: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x1519BEBC: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x1519BEC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1519BEC4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x1519BEC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519BECC: addiu       $t0, $t0, -0x7564
    ctx->r8 = ADD32(ctx->r8, -0X7564);
    // 0x1519BED0: lbu         $a3, 0x3B($v1)
    ctx->r7 = MEM_BU(ctx->r3, 0X3B);
    // 0x1519BED4: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
L_1519BED8:
    // 0x1519BED8: bnel        $a3, $t6, L_1519BEEC
    if (ctx->r7 != ctx->r14) {
        // 0x1519BEDC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_1519BEEC;
    }
    goto skip_0;
    // 0x1519BEDC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x1519BEE0: b           L_1519BEF0
    // 0x1519BEE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_1519BEF0;
    // 0x1519BEE4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1519BEE8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_1519BEEC:
    // 0x1519BEEC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_1519BEF0:
    // 0x1519BEF0: bne         $a2, $zero, L_1519BF00
    if (ctx->r6 != 0) {
        // 0x1519BEF4: slti        $at, $a1, 0x6
        ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
            goto L_1519BF00;
    }
    // 0x1519BEF4: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x1519BEF8: bnel        $at, $zero, L_1519BED8
    if (ctx->r1 != 0) {
        // 0x1519BEFC: lbu         $t6, 0x0($t0)
        ctx->r14 = MEM_BU(ctx->r8, 0X0);
            goto L_1519BED8;
    }
    goto skip_1;
    // 0x1519BEFC: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    skip_1:
L_1519BF00:
    // 0x1519BF00: beq         $a2, $zero, L_1519BF18
    if (ctx->r6 == 0) {
        // 0x1519BF04: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_1519BF18;
    }
    // 0x1519BF04: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x1519BF08: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1519BF0C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1519BF10: lw          $t8, 0x900($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X900);
    // 0x1519BF14: sb          $zero, 0x14($t8)
    MEM_B(0X14, ctx->r24) = 0;
L_1519BF18:
    // 0x1519BF18: jr          $ra
    // 0x1519BF1C: nop

    return;
    return;
    // 0x1519BF1C: nop

;}
RECOMP_FUNC void func_150C8A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C8A68: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x150C8A6C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x150C8A70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C8A74: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x150C8A78: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x150C8A7C: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x150C8A80: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x150C8A84: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x150C8A88: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x150C8A8C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x150C8A90: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x150C8A94: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x150C8A98: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150C8A9C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150C8AA0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150C8AA4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150C8AA8: sb          $zero, 0x93($sp)
    MEM_B(0X93, ctx->r29) = 0;
    // 0x150C8AAC: lbu         $t6, 0x1C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1C);
    // 0x150C8AB0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x150C8AB4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150C8AB8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x150C8ABC: beq         $t7, $zero, L_150C8AE8
    if (ctx->r15 == 0) {
        // 0x150C8AC0: addiu       $a0, $a0, -0x165C
        ctx->r4 = ADD32(ctx->r4, -0X165C);
            goto L_150C8AE8;
    }
    // 0x150C8AC0: addiu       $a0, $a0, -0x165C
    ctx->r4 = ADD32(ctx->r4, -0X165C);
    // 0x150C8AC4: lh          $t8, 0x28($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X28);
    // 0x150C8AC8: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x150C8ACC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150C8AD0: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x150C8AD4: sh          $t0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r8;
    // 0x150C8AD8: lh          $t1, 0x28($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X28);
    // 0x150C8ADC: bgezl       $t1, L_150C8AEC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x150C8AE0: lbu         $t3, 0x93($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X93);
            goto L_150C8AEC;
    }
    goto skip_0;
    // 0x150C8AE0: lbu         $t3, 0x93($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X93);
    skip_0:
    // 0x150C8AE4: sb          $t2, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r10;
L_150C8AE8:
    // 0x150C8AE8: lbu         $t3, 0x93($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X93);
L_150C8AEC:
    // 0x150C8AEC: bnel        $t3, $zero, L_150C8D68
    if (ctx->r11 != 0) {
        // 0x150C8AF0: lbu         $t3, 0x93($sp)
        ctx->r11 = MEM_BU(ctx->r29, 0X93);
            goto L_150C8D68;
    }
    goto skip_1;
    // 0x150C8AF0: lbu         $t3, 0x93($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X93);
    skip_1:
    // 0x150C8AF4: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150C8AF8: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150C8AFC: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x150C8B00: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150C8B04: lh          $t4, 0x2A($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2A);
    // 0x150C8B08: lh          $v0, 0x28($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X28);
    // 0x150C8B0C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C8B10: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150C8B14: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x150C8B18: beq         $at, $zero, L_150C8B48
    if (ctx->r1 == 0) {
        // 0x150C8B1C: swc1        $f10, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
            goto L_150C8B48;
    }
    // 0x150C8B1C: swc1        $f10, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f10.u32l;
    // 0x150C8B20: lh          $t5, 0x4C($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X4C);
    // 0x150C8B24: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x150C8B28: subu        $v1, $t5, $v0
    ctx->r3 = SUB32(ctx->r13, ctx->r2);
    // 0x150C8B2C: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x150C8B30: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150C8B34: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x150C8B38: nop

    // 0x150C8B3C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150C8B40: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150C8B44: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
L_150C8B48:
    // 0x150C8B48: lh          $t8, 0x30($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X30);
    // 0x150C8B4C: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x150C8B50: beql        $at, $zero, L_150C8B70
    if (ctx->r1 == 0) {
        // 0x150C8B54: lb          $t9, 0x3C($s0)
        ctx->r25 = MEM_B(ctx->r16, 0X3C);
            goto L_150C8B70;
    }
    goto skip_2;
    // 0x150C8B54: lb          $t9, 0x3C($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3C);
    skip_2:
    // 0x150C8B58: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x150C8B5C: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x150C8B60: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150C8B64: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150C8B68: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    // 0x150C8B6C: lb          $t9, 0x3C($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X3C);
L_150C8B70:
    // 0x150C8B70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150C8B74: beql        $t9, $at, L_150C8D08
    if (ctx->r25 == ctx->r1) {
        // 0x150C8B78: lb          $v0, 0x3D($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X3D);
            goto L_150C8D08;
    }
    goto skip_3;
    // 0x150C8B78: lb          $v0, 0x3D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3D);
    skip_3:
    // 0x150C8B7C: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x150C8B80: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x150C8B84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150C8B88: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150C8B8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C8B90: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150C8B94: lwc1        $f10, 0x52C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X52C);
    // 0x150C8B98: lwc1        $f16, 0x44($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150C8B9C: lwc1        $f6, 0x50($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X50);
    // 0x150C8BA0: lui         $s4, 0x8008
    ctx->r20 = S32(0X8008 << 16);
    // 0x150C8BA4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150C8BA8: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x150C8BAC: addiu       $s3, $s3, -0x4010
    ctx->r19 = ADD32(ctx->r19, -0X4010);
    // 0x150C8BB0: addiu       $s4, $s4, 0x2FA4
    ctx->r20 = ADD32(ctx->r20, 0X2FA4);
    // 0x150C8BB4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C8BB8: addiu       $s7, $sp, 0x74
    ctx->r23 = ADD32(ctx->r29, 0X74);
    // 0x150C8BBC: addiu       $s6, $zero, 0x51
    ctx->r22 = ADD32(0, 0X51);
    // 0x150C8BC0: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x150C8BC4: addiu       $s5, $zero, 0x9A0
    ctx->r21 = ADD32(0, 0X9A0);
    // 0x150C8BC8: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x150C8BCC: swc1        $f10, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f10.u32l;
    // 0x150C8BD0: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x150C8BD4: c.lt.s      $f22, $f16
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f22.fl < ctx->f16.fl;
    // 0x150C8BD8: nop

    // 0x150C8BDC: bc1fl       L_150C8D08
    if (!c1cs) {
        // 0x150C8BE0: lb          $v0, 0x3D($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X3D);
            goto L_150C8D08;
    }
    goto skip_4;
    // 0x150C8BE0: lb          $v0, 0x3D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3D);
    skip_4:
    // 0x150C8BE4: lwc1        $f26, 0x530($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X530);
    // 0x150C8BE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C8BEC: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x150C8BF0: addiu       $fp, $fp, -0x77A8
    ctx->r30 = ADD32(ctx->r30, -0X77A8);
    // 0x150C8BF4: lwc1        $f24, 0x534($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X534);
    // 0x150C8BF8: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
L_150C8BFC:
    // 0x150C8BFC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x150C8C00: multu       $t1, $s5
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C8C04: mflo        $t2
    ctx->r10 = lo;
    // 0x150C8C08: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x150C8C0C: lwc1        $f8, 0x380($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X380);
    // 0x150C8C10: mul.s       $f18, $f8, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f24.fl);
    // 0x150C8C14: trunc.w.s   $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C8C18: mfc1        $s2, $f6
    ctx->r18 = (int32_t)ctx->f6.u32l;
    // 0x150C8C1C: jal         0x150ADA20
    // 0x150C8C20: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150C8C20: nop

    after_0:
    // 0x150C8C24: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x150C8C28: mfhi        $t5
    ctx->r13 = hi;
    // 0x150C8C2C: addu        $v1, $t5, $s2
    ctx->r3 = ADD32(ctx->r13, ctx->r18);
    // 0x150C8C30: addiu       $a0, $v1, -0x28
    ctx->r4 = ADD32(ctx->r3, -0X28);
    // 0x150C8C34: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x150C8C38: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150C8C3C: bne         $s6, $zero, L_150C8C48
    if (ctx->r22 != 0) {
        // 0x150C8C40: nop
    
            goto L_150C8C48;
    }
    // 0x150C8C40: nop

    // 0x150C8C44: break       7
    do_break(353143876);
L_150C8C48:
    // 0x150C8C48: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x150C8C4C: jal         0x151423D8
    // 0x150C8C50: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x150C8C50: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x150C8C54: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150C8C58: jal         0x151423D8
    // 0x150C8C5C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x150C8C5C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_2:
    // 0x150C8C60: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150C8C64: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x150C8C68: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x150C8C6C: mul.s       $f16, $f20, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x150C8C70: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x150C8C74: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x150C8C78: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150C8C7C: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150C8C80: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x150C8C84: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150C8C88: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150C8C8C: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x150C8C90: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x150C8C94: mul.s       $f18, $f8, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x150C8C98: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    // 0x150C8C9C: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150C8CA0: mul.s       $f6, $f10, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x150C8CA4: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x150C8CA8: c.lt.s      $f4, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f4.fl < ctx->f26.fl;
    // 0x150C8CAC: nop

    // 0x150C8CB0: bc1fl       L_150C8CE8
    if (!c1cs) {
        // 0x150C8CB4: lwc1        $f16, 0x50($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
            goto L_150C8CE8;
    }
    goto skip_5;
    // 0x150C8CB4: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    skip_5:
    // 0x150C8CB8: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    // 0x150C8CBC: lb          $t7, 0x3C($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X3C);
    // 0x150C8CC0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x150C8CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C8CC8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150C8CCC: addu        $t9, $fp, $t8
    ctx->r25 = ADD32(ctx->r30, ctx->r24);
    // 0x150C8CD0: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x150C8CD4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x150C8CD8: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x150C8CDC: jalr        $t9
    // 0x150C8CE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x150C8CE0: nop

    after_3:
    // 0x150C8CE4: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
L_150C8CE8:
    // 0x150C8CE8: sub.s       $f8, $f16, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f22.fl;
    // 0x150C8CEC: swc1        $f8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f8.u32l;
    // 0x150C8CF0: lwc1        $f10, 0x50($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X50);
    // 0x150C8CF4: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x150C8CF8: nop

    // 0x150C8CFC: bc1tl       L_150C8BFC
    if (c1cs) {
        // 0x150C8D00: lw          $t1, 0x0($s4)
        ctx->r9 = MEM_W(ctx->r20, 0X0);
            goto L_150C8BFC;
    }
    goto skip_6;
    // 0x150C8D00: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    skip_6:
    // 0x150C8D04: lb          $v0, 0x3D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X3D);
L_150C8D08:
    // 0x150C8D08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150C8D0C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150C8D10: beq         $v0, $at, L_150C8D30
    if (ctx->r2 == ctx->r1) {
        // 0x150C8D14: sll         $t1, $v0, 2
        ctx->r9 = S32(ctx->r2 << 2);
            goto L_150C8D30;
    }
    // 0x150C8D14: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x150C8D18: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x150C8D1C: lw          $t9, -0x779C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X779C);
    // 0x150C8D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C8D24: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x150C8D28: jalr        $t9
    // 0x150C8D2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x150C8D2C: nop

    after_4:
L_150C8D30:
    // 0x150C8D30: lb          $v0, 0x1D($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1D);
    // 0x150C8D34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x150C8D38: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x150C8D3C: beq         $v0, $at, L_150C8D64
    if (ctx->r2 == ctx->r1) {
        // 0x150C8D40: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_150C8D64;
    }
    // 0x150C8D40: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x150C8D44: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x150C8D48: lw          $t9, -0x77A0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X77A0);
    // 0x150C8D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C8D50: jalr        $t9
    // 0x150C8D54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x150C8D54: nop

    after_5:
    // 0x150C8D58: bne         $v0, $zero, L_150C8D64
    if (ctx->r2 != 0) {
        // 0x150C8D5C: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_150C8D64;
    }
    // 0x150C8D5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150C8D60: sb          $t2, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r10;
L_150C8D64:
    // 0x150C8D64: lbu         $t3, 0x93($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X93);
L_150C8D68:
    // 0x150C8D68: beql        $t3, $zero, L_150C8D7C
    if (ctx->r11 == 0) {
        // 0x150C8D6C: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_150C8D7C;
    }
    goto skip_7;
    // 0x150C8D6C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_7:
    // 0x150C8D70: jal         0x1516972C
    // 0x150C8D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_6;
    // 0x150C8D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x150C8D78: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_150C8D7C:
    // 0x150C8D7C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x150C8D80: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x150C8D84: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x150C8D88: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x150C8D8C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x150C8D90: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x150C8D94: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x150C8D98: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x150C8D9C: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x150C8DA0: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x150C8DA4: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x150C8DA8: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x150C8DAC: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x150C8DB0: jr          $ra
    // 0x150C8DB4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    return;
    // 0x150C8DB4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_1502FFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502FFD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x1502FFDC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x1502FFE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1502FFE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1502FFE8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1502FFEC: lw          $t6, 0x24($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X24);
    // 0x1502FFF0: bnel        $t6, $zero, L_15030144
    if (ctx->r14 != 0) {
        // 0x1502FFF4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_15030144;
    }
    goto skip_0;
    // 0x1502FFF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x1502FFF8: lb          $a1, 0x17($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X17);
    // 0x1502FFFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15030000: addiu       $a2, $s0, 0x24
    ctx->r6 = ADD32(ctx->r16, 0X24);
    // 0x15030004: bne         $a1, $at, L_15030040
    if (ctx->r5 != ctx->r1) {
        // 0x15030008: addiu       $a3, $s0, 0x14
        ctx->r7 = ADD32(ctx->r16, 0X14);
            goto L_15030040;
    }
    // 0x15030008: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    // 0x1503000C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x15030010: addiu       $t7, $s0, 0x30
    ctx->r15 = ADD32(ctx->r16, 0X30);
    // 0x15030014: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15030018: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1503001C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15030020: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    // 0x15030024: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x15030028: jal         0x1502FE10
    // 0x1503002C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_1502FE10(rdram, ctx);
        goto after_0;
    // 0x1503002C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x15030030: beql        $v0, $zero, L_15030074
    if (ctx->r2 == 0) {
        // 0x15030034: lw          $t1, 0x44($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X44);
            goto L_15030074;
    }
    goto skip_1;
    // 0x15030034: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    skip_1:
    // 0x15030038: b           L_15030144
    // 0x1503003C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15030144;
    // 0x1503003C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15030040:
    // 0x15030040: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x15030044: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x15030048: addiu       $t9, $s0, 0x30
    ctx->r25 = ADD32(ctx->r16, 0X30);
    // 0x1503004C: addiu       $t0, $s0, 0x48
    ctx->r8 = ADD32(ctx->r16, 0X48);
    // 0x15030050: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15030054: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15030058: jal         0x1503F62C
    // 0x1503005C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1503F62C(rdram, ctx);
        goto after_1;
    // 0x1503005C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x15030060: beql        $v0, $zero, L_15030074
    if (ctx->r2 == 0) {
        // 0x15030064: lw          $t1, 0x44($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X44);
            goto L_15030074;
    }
    goto skip_2;
    // 0x15030064: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x15030068: b           L_15030144
    // 0x1503006C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15030144;
    // 0x1503006C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15030070: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
L_15030074:
    // 0x15030074: lbu         $t5, 0x4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X4);
    // 0x15030078: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x1503007C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x15030080: lbu         $v0, 0x66($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X66);
    // 0x15030084: andi        $t6, $t5, 0x10
    ctx->r14 = ctx->r13 & 0X10;
    // 0x15030088: subu        $a0, $t3, $t4
    ctx->r4 = SUB32(ctx->r11, ctx->r12);
    // 0x1503008C: bne         $t6, $zero, L_15030128
    if (ctx->r14 != 0) {
        // 0x15030090: andi        $t2, $v0, 0xC
        ctx->r10 = ctx->r2 & 0XC;
            goto L_15030128;
    }
    // 0x15030090: andi        $t2, $v0, 0xC
    ctx->r10 = ctx->r2 & 0XC;
    // 0x15030094: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x15030098: bnel        $t2, $at, L_1503012C
    if (ctx->r10 != ctx->r1) {
        // 0x1503009C: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_1503012C;
    }
    goto skip_3;
    // 0x1503009C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x150300A0: lw          $t7, 0x30($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X30);
    // 0x150300A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150300A8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150300AC: beq         $t7, $zero, L_15030128
    if (ctx->r15 == 0) {
        // 0x150300B0: addiu       $a3, $zero, 0x2
        ctx->r7 = ADD32(0, 0X2);
            goto L_15030128;
    }
    // 0x150300B0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150300B4: jal         0x10003C40
    // 0x150300B8: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x150300B8: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_2:
    // 0x150300BC: bne         $v0, $zero, L_150300CC
    if (ctx->r2 != 0) {
        // 0x150300C0: sw          $v0, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->r2;
            goto L_150300CC;
    }
    // 0x150300C0: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x150300C4: b           L_15030144
    // 0x150300C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15030144;
    // 0x150300C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150300CC:
    // 0x150300CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x150300D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150300D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x150300D8: jal         0x10003C40
    // 0x150300DC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x150300DC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_3:
    // 0x150300E0: bne         $v0, $zero, L_150300FC
    if (ctx->r2 != 0) {
        // 0x150300E4: sw          $v0, 0x2C($s0)
        MEM_W(0X2C, ctx->r16) = ctx->r2;
            goto L_150300FC;
    }
    // 0x150300E4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x150300E8: jal         0x10004074
    // 0x150300EC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x150300EC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_4:
    // 0x150300F0: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x150300F4: b           L_15030144
    // 0x150300F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_15030144;
    // 0x150300F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150300FC:
    // 0x150300FC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x15030100: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x15030104: jal         0x10023A10
    // 0x15030108: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    bcopy_recomp(rdram, ctx);
        goto after_5;
    // 0x15030108: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x1503010C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x15030110: lw          $a1, 0x2C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2C);
    // 0x15030114: jal         0x10023A10
    // 0x15030118: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    bcopy_recomp(rdram, ctx);
        goto after_6;
    // 0x15030118: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x1503011C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15030120: b           L_15030138
    // 0x15030124: sb          $t8, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r24;
        goto L_15030138;
    // 0x15030124: sb          $t8, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r24;
L_15030128:
    // 0x15030128: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_1503012C:
    // 0x1503012C: sw          $t9, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r25;
    // 0x15030130: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x15030134: sw          $t0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r8;
L_15030138:
    // 0x15030138: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1503013C: sb          $t1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r9;
    // 0x15030140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15030144:
    // 0x15030144: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15030148: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x1503014C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x15030150: jr          $ra
    // 0x15030154: nop

    return;
    return;
    // 0x15030154: nop

;}
RECOMP_FUNC void func_15117798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15117798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1511779C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151177A0: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x151177A4: jal         0x15117518
    // 0x151177A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15117518(rdram, ctx);
        goto after_0;
    // 0x151177A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x151177AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151177B0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x151177B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151177B8: jr          $ra
    // 0x151177BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x151177BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15134CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15134CD4: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x15134CD8: swc1        $f14, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f14.u32l;
    // 0x15134CDC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15134CE0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15134CE4: jr          $ra
    // 0x15134CE8: nop

    return;
    return;
    // 0x15134CE8: nop

;}
RECOMP_FUNC void func_15149514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149514: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15149518: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1514951C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x15149520: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x15149524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15149528: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x1514952C: jal         0x15169850
    // 0x15149530: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_15169850(rdram, ctx);
        goto after_0;
    // 0x15149530: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x15149534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15149538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1514953C: jr          $ra
    // 0x15149540: nop

    return;
    return;
    // 0x15149540: nop

;}
RECOMP_FUNC void func_1001CA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001CA90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1001CA94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1001CA98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1001CA9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x1001CAA0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x1001CAA4: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x1001CAA8: beq         $t7, $zero, L_1001CB28
    if (ctx->r15 == 0) {
        // 0x1001CAAC: nop
    
            goto L_1001CB28;
    }
    // 0x1001CAAC: nop

    // 0x1001CAB0: jal         0x100196E4
    // 0x1001CAB4: nop

    __n_allocParam(rdram, ctx);
        goto after_0;
    // 0x1001CAB4: nop

    after_0:
    // 0x1001CAB8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x1001CABC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CAC0: bne         $t8, $zero, L_1001CAD0
    if (ctx->r24 != 0) {
        // 0x1001CAC4: nop
    
            goto L_1001CAD0;
    }
    // 0x1001CAC4: nop

    // 0x1001CAC8: b           L_1001CB30
    // 0x1001CACC: nop

        goto L_1001CB30;
    // 0x1001CACC: nop

L_1001CAD0:
    // 0x1001CAD0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001CAD4: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x1001CAD8: lw          $t9, -0x45BC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X45BC);
    // 0x1001CADC: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x1001CAE0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CAE4: lw          $t0, 0x1C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X1C);
    // 0x1001CAE8: lw          $t3, 0x90($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X90);
    // 0x1001CAEC: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x1001CAF0: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x1001CAF4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CAF8: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x1001CAFC: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x1001CB00: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1001CB04: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CB08: swc1        $f4, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f4.u32l;
    // 0x1001CB0C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CB10: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x1001CB14: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x1001CB18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x1001CB1C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x1001CB20: jal         0x10020978
    // 0x1001CB24: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    n_alEnvmixerParam(rdram, ctx);
        goto after_1;
    // 0x1001CB24: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    after_1:
L_1001CB28:
    // 0x1001CB28: b           L_1001CB30
    // 0x1001CB2C: nop

        goto L_1001CB30;
    // 0x1001CB2C: nop

L_1001CB30:
    // 0x1001CB30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1001CB34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1001CB38: jr          $ra
    // 0x1001CB3C: nop

    return;
    return;
    // 0x1001CB3C: nop

;}
RECOMP_FUNC void func_1503F0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1503F0D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1503F0DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1503F0E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1503F0E4: lui         $a1, 0x4003
    ctx->r5 = S32(0X4003 << 16);
    // 0x1503F0E8: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x1503F0EC: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x1503F0F0: jal         0x1503EB78
    // 0x1503F0F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_1503EB78(rdram, ctx);
        goto after_0;
    // 0x1503F0F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1503F0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1503F0FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1503F100: jr          $ra
    // 0x1503F104: nop

    return;
    return;
    // 0x1503F104: nop

;}
RECOMP_FUNC void func_150C4E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C4E9C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150C4EA0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150C4EA4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150C4EA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150C4EAC: lbu         $v1, 0x73($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X73);
    // 0x150C4EB0: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x150C4EB4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x150C4EB8: andi        $t6, $v1, 0x3
    ctx->r14 = ctx->r3 & 0X3;
    // 0x150C4EBC: bne         $v0, $zero, L_150C4F10
    if (ctx->r2 != 0) {
        // 0x150C4EC0: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_150C4F10;
    }
    // 0x150C4EC0: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x150C4EC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C4EC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150C4ECC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C4ED0: jal         0x10003C40
    // 0x150C4ED4: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x150C4ED4: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    after_0:
    // 0x150C4ED8: sw          $v0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r2;
    // 0x150C4EDC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x150C4EE0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x150C4EE4: jal         0x1511A410
    // 0x150C4EE8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_1511A410(rdram, ctx);
        goto after_1;
    // 0x150C4EE8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x150C4EEC: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x150C4EF0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x150C4EF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C4EF8: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x150C4EFC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x150C4F00: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x150C4F04: sh          $t8, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r24;
    // 0x150C4F08: b           L_150C4F18
    // 0x150C4F0C: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
        goto L_150C4F18;
    // 0x150C4F0C: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
L_150C4F10:
    // 0x150C4F10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150C4F14: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_150C4F18:
    // 0x150C4F18: beq         $v1, $zero, L_150C4F2C
    if (ctx->r3 == 0) {
        // 0x150C4F1C: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_150C4F2C;
    }
    // 0x150C4F1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150C4F20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150C4F24: bne         $v1, $at, L_150C4F3C
    if (ctx->r3 != ctx->r1) {
        // 0x150C4F28: lui         $t1, 0x0
        ctx->r9 = S32(0X0 << 16);
            goto L_150C4F3C;
    }
    // 0x150C4F28: lui         $t1, 0x0
    ctx->r9 = S32(0X0 << 16);
L_150C4F2C:
    // 0x150C4F2C: lui         $t9, 0x0
    ctx->r25 = S32(0X0 << 16);
    // 0x150C4F30: addiu       $t9, $t9, 0x2C1
    ctx->r25 = ADD32(ctx->r25, 0X2C1);
    // 0x150C4F34: b           L_150C4F44
    // 0x150C4F38: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
        goto L_150C4F44;
    // 0x150C4F38: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
L_150C4F3C:
    // 0x150C4F3C: addiu       $t1, $t1, 0x1C0
    ctx->r9 = ADD32(ctx->r9, 0X1C0);
    // 0x150C4F40: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
L_150C4F44:
    // 0x150C4F44: beq         $v1, $zero, L_150C4F58
    if (ctx->r3 == 0) {
        // 0x150C4F48: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_150C4F58;
    }
    // 0x150C4F48: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C4F4C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150C4F50: bnel        $v1, $at, L_150C4F68
    if (ctx->r3 != ctx->r1) {
        // 0x150C4F54: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_150C4F68;
    }
    goto skip_0;
    // 0x150C4F54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
L_150C4F58:
    // 0x150C4F58: swc1        $f0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f0.u32l;
    // 0x150C4F5C: b           L_150C50DC
    // 0x150C4F60: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
        goto L_150C50DC;
    // 0x150C4F60: swc1        $f0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f0.u32l;
    // 0x150C4F64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_150C4F68:
    // 0x150C4F68: bne         $v1, $at, L_150C4FBC
    if (ctx->r3 != ctx->r1) {
        // 0x150C4F6C: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_150C4FBC;
    }
    // 0x150C4F6C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150C4F70: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150C4F74: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150C4F78: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x150C4F7C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x150C4F80: nop

    // 0x150C4F84: bc1f        L_150C4FB4
    if (!c1cs) {
        // 0x150C4F88: nop
    
            goto L_150C4FB4;
    }
    // 0x150C4F88: nop

    // 0x150C4F8C: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x150C4F90: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150C4F94: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150C4F98: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x150C4F9C: nop

    // 0x150C4FA0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150C4FA4: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x150C4FA8: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150C4FAC: b           L_150C50DC
    // 0x150C4FB0: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
        goto L_150C50DC;
    // 0x150C4FB0: swc1        $f16, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f16.u32l;
L_150C4FB4:
    // 0x150C4FB4: b           L_150C50DC
    // 0x150C4FB8: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
        goto L_150C50DC;
    // 0x150C4FB8: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
L_150C4FBC:
    // 0x150C4FBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150C4FC0: bne         $v1, $at, L_150C50DC
    if (ctx->r3 != ctx->r1) {
        // 0x150C4FC4: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_150C50DC;
    }
    // 0x150C4FC4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x150C4FC8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150C4FCC: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150C4FD0: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150C4FD4: addiu       $a1, $a1, -0x1640
    ctx->r5 = ADD32(ctx->r5, -0X1640);
    // 0x150C4FD8: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x150C4FDC: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150C4FE0: nop

    // 0x150C4FE4: bc1fl       L_150C5018
    if (!c1cs) {
        // 0x150C4FE8: swc1        $f2, 0x8($t0)
        MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
            goto L_150C5018;
    }
    goto skip_1;
    // 0x150C4FE8: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
    skip_1:
    // 0x150C4FEC: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x150C4FF0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x150C4FF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150C4FF8: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x150C4FFC: nop

    // 0x150C5000: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150C5004: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150C5008: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x150C500C: b           L_150C50DC
    // 0x150C5010: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
        goto L_150C50DC;
    // 0x150C5010: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x150C5014: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
L_150C5018:
    // 0x150C5018: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x150C501C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x150C5020: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x150C5024: lw          $t7, 0x20($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X20);
    // 0x150C5028: lh          $v1, 0xA($t7)
    ctx->r3 = MEM_H(ctx->r15, 0XA);
    // 0x150C502C: bgez        $v1, L_150C5040
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150C5030: andi        $t8, $v1, 0x3FF
        ctx->r24 = ctx->r3 & 0X3FF;
            goto L_150C5040;
    }
    // 0x150C5030: andi        $t8, $v1, 0x3FF
    ctx->r24 = ctx->r3 & 0X3FF;
    // 0x150C5034: beq         $t8, $zero, L_150C5040
    if (ctx->r24 == 0) {
        // 0x150C5038: nop
    
            goto L_150C5040;
    }
    // 0x150C5038: nop

    // 0x150C503C: addiu       $t8, $t8, -0x400
    ctx->r24 = ADD32(ctx->r24, -0X400);
L_150C5040:
    // 0x150C5040: bgez        $t8, L_150C5054
    if (SIGNED(ctx->r24) >= 0) {
        // 0x150C5044: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_150C5054;
    }
    // 0x150C5044: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x150C5048: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
L_150C504C:
    // 0x150C504C: bltzl       $v1, L_150C504C
    if (SIGNED(ctx->r3) < 0) {
        // 0x150C5050: addiu       $v1, $v1, 0x400
        ctx->r3 = ADD32(ctx->r3, 0X400);
            goto L_150C504C;
    }
    goto skip_2;
    // 0x150C5050: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    skip_2:
L_150C5054:
    // 0x150C5054: lh          $v0, 0x4($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X4);
    // 0x150C5058: bgez        $v0, L_150C506C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x150C505C: andi        $t9, $v0, 0x3FF
        ctx->r25 = ctx->r2 & 0X3FF;
            goto L_150C506C;
    }
    // 0x150C505C: andi        $t9, $v0, 0x3FF
    ctx->r25 = ctx->r2 & 0X3FF;
    // 0x150C5060: beq         $t9, $zero, L_150C506C
    if (ctx->r25 == 0) {
        // 0x150C5064: nop
    
            goto L_150C506C;
    }
    // 0x150C5064: nop

    // 0x150C5068: addiu       $t9, $t9, -0x400
    ctx->r25 = ADD32(ctx->r25, -0X400);
L_150C506C:
    // 0x150C506C: bgez        $t9, L_150C5080
    if (SIGNED(ctx->r25) >= 0) {
        // 0x150C5070: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_150C5080;
    }
    // 0x150C5070: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x150C5074: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_150C5078:
    // 0x150C5078: bltzl       $v0, L_150C5078
    if (SIGNED(ctx->r2) < 0) {
        // 0x150C507C: addiu       $v0, $v0, 0x400
        ctx->r2 = ADD32(ctx->r2, 0X400);
            goto L_150C5078;
    }
    goto skip_3;
    // 0x150C507C: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    skip_3:
L_150C5080:
    // 0x150C5080: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x150C5084: bnel        $at, $zero, L_150C50E0
    if (ctx->r1 != 0) {
        // 0x150C5088: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_150C50E0;
    }
    goto skip_4;
    // 0x150C5088: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_4:
    // 0x150C508C: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x150C5090: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x150C5094: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150C5098: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150C509C: subu        $t1, $v1, $v0
    ctx->r9 = SUB32(ctx->r3, ctx->r2);
    // 0x150C50A0: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150C50A4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x150C50A8: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x150C50AC: nop

    // 0x150C50B0: bc1fl       L_150C50E0
    if (!c1cs) {
        // 0x150C50B4: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_150C50E0;
    }
    goto skip_5;
    // 0x150C50B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_5:
    // 0x150C50B8: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x150C50BC: nop

    // 0x150C50C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150C50C4: swc1        $f18, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f18.u32l;
    // 0x150C50C8: lbu         $t2, 0x73($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X73);
    // 0x150C50CC: andi        $t4, $t2, 0xFFFC
    ctx->r12 = ctx->r10 & 0XFFFC;
    // 0x150C50D0: sb          $t4, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r12;
    // 0x150C50D4: ori         $t5, $t4, 0x3
    ctx->r13 = ctx->r12 | 0X3;
    // 0x150C50D8: sb          $t5, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r13;
L_150C50DC:
    // 0x150C50DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_150C50E0:
    // 0x150C50E0: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150C50E4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150C50E8: addiu       $a1, $a1, -0x1640
    ctx->r5 = ADD32(ctx->r5, -0X1640);
    // 0x150C50EC: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x150C50F0: nop

    // 0x150C50F4: bc1tl       L_150C5168
    if (c1cs) {
        // 0x150C50F8: lbu         $t6, 0x0($a1)
        ctx->r14 = MEM_BU(ctx->r5, 0X0);
            goto L_150C5168;
    }
    goto skip_6;
    // 0x150C50F8: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    skip_6:
    // 0x150C50FC: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    // 0x150C5100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C5104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150C5108: blezl       $t6, L_150C5168
    if (SIGNED(ctx->r14) <= 0) {
        // 0x150C510C: lbu         $t6, 0x0($a1)
        ctx->r14 = MEM_BU(ctx->r5, 0X0);
            goto L_150C5168;
    }
    goto skip_7;
    // 0x150C510C: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    skip_7:
    // 0x150C5110: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
L_150C5114:
    // 0x150C5114: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x150C5118: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150C511C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150C5120: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x150C5124: lw          $t1, 0x20($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X20);
    // 0x150C5128: addu        $v1, $t1, $v0
    ctx->r3 = ADD32(ctx->r9, ctx->r2);
    // 0x150C512C: lh          $t2, 0xA($v1)
    ctx->r10 = MEM_H(ctx->r3, 0XA);
    // 0x150C5130: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x150C5134: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x150C5138: nop

    // 0x150C513C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150C5140: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x150C5144: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C5148: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x150C514C: nop

    // 0x150C5150: sh          $t4, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r12;
    // 0x150C5154: lhu         $t5, 0x16($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X16);
    // 0x150C5158: slt         $at, $a0, $t5
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150C515C: bnel        $at, $zero, L_150C5114
    if (ctx->r1 != 0) {
        // 0x150C5160: lbu         $t7, 0x0($a1)
        ctx->r15 = MEM_BU(ctx->r5, 0X0);
            goto L_150C5114;
    }
    goto skip_8;
    // 0x150C5160: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    skip_8:
    // 0x150C5164: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
L_150C5168:
    // 0x150C5168: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150C516C: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x150C5170: lw          $t9, 0x20($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X20);
    // 0x150C5174: lh          $t1, 0xA($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA);
    // 0x150C5178: slti        $at, $t1, -0x2800
    ctx->r1 = SIGNED(ctx->r9) < -0X2800 ? 1 : 0;
    // 0x150C517C: beql        $at, $zero, L_150C51D4
    if (ctx->r1 == 0) {
        // 0x150C5180: sw          $zero, 0x48($sp)
        MEM_W(0X48, ctx->r29) = 0;
            goto L_150C51D4;
    }
    goto skip_9;
    // 0x150C5180: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    skip_9:
    // 0x150C5184: lhu         $t2, 0x16($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X16);
    // 0x150C5188: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150C518C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x150C5190: blezl       $t2, L_150C51D4
    if (SIGNED(ctx->r10) <= 0) {
        // 0x150C5194: sw          $zero, 0x48($sp)
        MEM_W(0X48, ctx->r29) = 0;
            goto L_150C51D4;
    }
    goto skip_10;
    // 0x150C5194: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    skip_10:
    // 0x150C5198: lbu         $t3, 0x0($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X0);
L_150C519C:
    // 0x150C519C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x150C51A0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150C51A4: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x150C51A8: lw          $t6, 0x20($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X20);
    // 0x150C51AC: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x150C51B0: lh          $t7, 0xA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0XA);
    // 0x150C51B4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x150C51B8: addiu       $t8, $t7, 0x2800
    ctx->r24 = ADD32(ctx->r15, 0X2800);
    // 0x150C51BC: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    // 0x150C51C0: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x150C51C4: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x150C51C8: bnel        $at, $zero, L_150C519C
    if (ctx->r1 != 0) {
        // 0x150C51CC: lbu         $t3, 0x0($a1)
        ctx->r11 = MEM_BU(ctx->r5, 0X0);
            goto L_150C519C;
    }
    goto skip_11;
    // 0x150C51CC: lbu         $t3, 0x0($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X0);
    skip_11:
    // 0x150C51D0: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
L_150C51D4:
    // 0x150C51D4: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x150C51D8: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x150C51DC: jal         0x1510D0EC
    // 0x150C51E0: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    func_1510D0EC(rdram, ctx);
        goto after_2;
    // 0x150C51E0: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_2:
    // 0x150C51E4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x150C51E8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x150C51EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x150C51F0: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x150C51F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150C51F8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150C51FC: beq         $t1, $zero, L_150C5210
    if (ctx->r9 == 0) {
        // 0x150C5200: addiu       $t3, $zero, 0x5
        ctx->r11 = ADD32(0, 0X5);
            goto L_150C5210;
    }
    // 0x150C5200: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x150C5204: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x150C5208: addu        $a2, $t2, $v0
    ctx->r6 = ADD32(ctx->r10, ctx->r2);
    // 0x150C520C: addiu       $a2, $a2, -0x200
    ctx->r6 = ADD32(ctx->r6, -0X200);
L_150C5210:
    // 0x150C5210: jal         0x1510D874
    // 0x150C5214: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_1510D874(rdram, ctx);
        goto after_3;
    // 0x150C5214: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x150C5218: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150C521C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150C5220: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150C5224: jr          $ra
    // 0x150C5228: nop

    return;
    return;
    // 0x150C5228: nop

;}
RECOMP_FUNC void func_15183ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15183ACC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15183AD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15183AD4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15183AD8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x15183ADC: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15183AE0: addiu       $t8, $t8, -0x2180
    ctx->r24 = ADD32(ctx->r24, -0X2180);
    // 0x15183AE4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x15183AE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15183AEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15183AF0: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x15183AF4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x15183AF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15183AFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15183B00: bne         $t9, $zero, L_15183B94
    if (ctx->r25 != 0) {
        // 0x15183B04: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_15183B94;
    }
    // 0x15183B04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15183B08: addiu       $t1, $zero, 0x9
    ctx->r9 = ADD32(0, 0X9);
    // 0x15183B0C: addiu       $t2, $t6, 0xAD
    ctx->r10 = ADD32(ctx->r14, 0XAD);
    // 0x15183B10: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x15183B14: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x15183B18: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x15183B1C: jal         0x1502B6BC
    // 0x15183B20: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_1502B6BC(rdram, ctx);
        goto after_0;
    // 0x15183B20: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x15183B24: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x15183B28: beq         $v0, $zero, L_15183B94
    if (ctx->r2 == 0) {
        // 0x15183B2C: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_15183B94;
    }
    // 0x15183B2C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x15183B30: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x15183B34: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x15183B38: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x15183B3C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x15183B40: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x15183B44: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x15183B48: addiu       $t9, $t9, -0x2088
    ctx->r25 = ADD32(ctx->r25, -0X2088);
    // 0x15183B4C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x15183B50: sw          $t4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r12;
    // 0x15183B54: lw          $t5, 0x18($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X18);
    // 0x15183B58: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15183B5C: addiu       $t6, $v1, 0x10
    ctx->r14 = ADD32(ctx->r3, 0X10);
    // 0x15183B60: sw          $t5, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r13;
    // 0x15183B64: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    // 0x15183B68: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15183B6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15183B70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15183B74: addiu       $a3, $zero, 0x3E
    ctx->r7 = ADD32(0, 0X3E);
    // 0x15183B78: jal         0x1510CE60
    // 0x15183B7C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    func_1510CE60(rdram, ctx);
        goto after_1;
    // 0x15183B7C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_1:
    // 0x15183B80: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x15183B84: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x15183B88: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15183B8C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x15183B90: sb          $t2, -0x2098($at)
    MEM_B(-0X2098, ctx->r1) = ctx->r10;
L_15183B94:
    // 0x15183B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15183B98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15183B9C: jr          $ra
    // 0x15183BA0: nop

    return;
    return;
    // 0x15183BA0: nop

;}
RECOMP_FUNC void func_151CA6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151CA6A0: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x151CA6A4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151CA6A8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x151CA6AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CA6B0: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x151CA6B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151CA6B8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x151CA6BC: sw          $a0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r4;
    // 0x151CA6C0: sw          $a1, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r5;
    // 0x151CA6C4: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x151CA6C8: lw          $t7, 0x2FA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2FA0);
    // 0x151CA6CC: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x151CA6D0: lw          $t6, 0xF8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF8);
    // 0x151CA6D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151CA6D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CA6DC: sb          $zero, 0x51($sp)
    MEM_B(0X51, ctx->r29) = 0;
    // 0x151CA6E0: sb          $zero, 0x50($sp)
    MEM_B(0X50, ctx->r29) = 0;
    // 0x151CA6E4: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x151CA6E8: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x151CA6EC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x151CA6F0: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x151CA6F4: blez        $t7, L_151CA708
    if (SIGNED(ctx->r15) <= 0) {
        // 0x151CA6F8: swc1        $f6, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
            goto L_151CA708;
    }
    // 0x151CA6F8: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x151CA6FC: addiu       $t8, $zero, 0x73
    ctx->r24 = ADD32(0, 0X73);
    // 0x151CA700: b           L_151CA710
    // 0x151CA704: sb          $t8, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r24;
        goto L_151CA710;
    // 0x151CA704: sb          $t8, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r24;
L_151CA708:
    // 0x151CA708: addiu       $t9, $zero, 0x5D
    ctx->r25 = ADD32(0, 0X5D);
    // 0x151CA70C: sb          $t9, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r25;
L_151CA710:
    // 0x151CA710: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
    // 0x151CA714: addiu       $t0, $zero, 0x12C
    ctx->r8 = ADD32(0, 0X12C);
    // 0x151CA718: sh          $t0, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r8;
    // 0x151CA71C: lbu         $t2, 0x23D($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X23D);
    // 0x151CA720: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151CA724: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151CA728: addiu       $t3, $t2, 0xB
    ctx->r11 = ADD32(ctx->r10, 0XB);
    // 0x151CA72C: sllv        $t5, $t4, $t3
    ctx->r13 = S32(ctx->r12 << (ctx->r11 & 31));
    // 0x151CA730: ori         $t6, $t5, 0x50
    ctx->r14 = ctx->r13 | 0X50;
    // 0x151CA734: sh          $t7, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r15;
    // 0x151CA738: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x151CA73C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151CA740: addiu       $t2, $zero, 0x82
    ctx->r10 = ADD32(0, 0X82);
    // 0x151CA744: sb          $t9, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r25;
    // 0x151CA748: sb          $t0, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r8;
    // 0x151CA74C: sb          $t2, 0xBE($sp)
    MEM_B(0XBE, ctx->r29) = ctx->r10;
    // 0x151CA750: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151CA754: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x151CA758: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CA75C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151CA760: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151CA764: sb          $t4, 0xBF($sp)
    MEM_B(0XBF, ctx->r29) = ctx->r12;
    // 0x151CA768: sb          $t3, 0xC0($sp)
    MEM_B(0XC0, ctx->r29) = ctx->r11;
    // 0x151CA76C: sb          $t5, 0xC1($sp)
    MEM_B(0XC1, ctx->r29) = ctx->r13;
    // 0x151CA770: sb          $t7, 0xC2($sp)
    MEM_B(0XC2, ctx->r29) = ctx->r15;
    // 0x151CA774: lui         $t9, 0x20
    ctx->r25 = S32(0X20 << 16);
    // 0x151CA778: lui         $t0, 0x1F
    ctx->r8 = S32(0X1F << 16);
    // 0x151CA77C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151CA780: ori         $t9, $t9, 0x4
    ctx->r25 = ctx->r25 | 0X4;
    // 0x151CA784: ori         $t0, $t0, 0x601
    ctx->r8 = ctx->r8 | 0X601;
    // 0x151CA788: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x151CA78C: addiu       $t4, $zero, 0x44
    ctx->r12 = ADD32(0, 0X44);
    // 0x151CA790: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x151CA794: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x151CA798: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x151CA79C: sh          $t6, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r14;
    // 0x151CA7A0: sh          $t8, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r24;
    // 0x151CA7A4: sb          $zero, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = 0;
    // 0x151CA7A8: sb          $zero, 0xBD($sp)
    MEM_B(0XBD, ctx->r29) = 0;
    // 0x151CA7AC: sb          $t8, 0xC3($sp)
    MEM_B(0XC3, ctx->r29) = ctx->r24;
    // 0x151CA7B0: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x151CA7B4: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x151CA7B8: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    // 0x151CA7BC: sw          $t4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r12;
    // 0x151CA7C0: sw          $t3, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r11;
    // 0x151CA7C4: sw          $t5, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r13;
    // 0x151CA7C8: sb          $zero, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = 0;
    // 0x151CA7CC: sb          $t7, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r15;
    // 0x151CA7D0: lbu         $t8, 0x23D($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X23D);
    // 0x151CA7D4: andi        $t2, $t6, 0xFFF9
    ctx->r10 = ctx->r14 & 0XFFF9;
    // 0x151CA7D8: sh          $t2, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r10;
    // 0x151CA7DC: ori         $t4, $t2, 0x6
    ctx->r12 = ctx->r10 | 0X6;
    // 0x151CA7E0: sh          $t4, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r12;
    // 0x151CA7E4: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x151CA7E8: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x151CA7EC: beq         $s0, $zero, L_151CA7FC
    if (ctx->r16 == 0) {
        // 0x151CA7F0: sb          $t8, 0xE4($sp)
        MEM_B(0XE4, ctx->r29) = ctx->r24;
            goto L_151CA7FC;
    }
    // 0x151CA7F0: sb          $t8, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = ctx->r24;
    // 0x151CA7F4: b           L_151CA800
    // 0x151CA7F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_151CA800;
    // 0x151CA7F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_151CA7FC:
    // 0x151CA7FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CA800:
    // 0x151CA800: addiu       $s1, $sp, 0xA0
    ctx->r17 = ADD32(ctx->r29, 0XA0);
    // 0x151CA804: addiu       $t3, $zero, 0x58
    ctx->r11 = ADD32(0, 0X58);
    // 0x151CA808: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CA80C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151CA810: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151CA814: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151CA818: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151CA81C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151CA820: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x151CA824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CA828: jal         0x1515548C
    // 0x151CA82C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515548C(rdram, ctx);
        goto after_0;
    // 0x151CA82C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x151CA830: beq         $v0, $zero, L_151CA844
    if (ctx->r2 == 0) {
        // 0x151CA834: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CA844;
    }
    // 0x151CA834: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CA838: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151CA83C: jal         0x10022EC0
    // 0x151CA840: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151CA840: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_1:
L_151CA844:
    // 0x151CA844: lhu         $v0, 0xB4($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XB4);
    // 0x151CA848: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x151CA84C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CA850: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151CA854: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151CA858: andi        $t8, $v0, 0xFFF9
    ctx->r24 = ctx->r2 & 0XFFF9;
    // 0x151CA85C: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x151CA860: sh          $t9, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r25;
    // 0x151CA864: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x151CA868: beq         $s0, $zero, L_151CA878
    if (ctx->r16 == 0) {
        // 0x151CA86C: swc1        $f10, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
            goto L_151CA878;
    }
    // 0x151CA86C: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x151CA870: b           L_151CA87C
    // 0x151CA874: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_151CA87C;
    // 0x151CA874: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_151CA878:
    // 0x151CA878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CA87C:
    // 0x151CA87C: addiu       $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
    // 0x151CA880: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x151CA884: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151CA888: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x151CA88C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151CA890: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151CA894: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151CA898: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x151CA89C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CA8A0: jal         0x1515548C
    // 0x151CA8A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515548C(rdram, ctx);
        goto after_2;
    // 0x151CA8A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x151CA8A8: beq         $v0, $zero, L_151CA8BC
    if (ctx->r2 == 0) {
        // 0x151CA8AC: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CA8BC;
    }
    // 0x151CA8AC: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CA8B0: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151CA8B4: jal         0x10022EC0
    // 0x151CA8B8: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151CA8B8: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_3:
L_151CA8BC:
    // 0x151CA8BC: lhu         $v0, 0xB4($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XB4);
    // 0x151CA8C0: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x151CA8C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CA8C8: andi        $t7, $v0, 0xFFF9
    ctx->r15 = ctx->r2 & 0XFFF9;
    // 0x151CA8CC: sh          $t7, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r15;
    // 0x151CA8D0: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x151CA8D4: beq         $s0, $zero, L_151CA8E4
    if (ctx->r16 == 0) {
        // 0x151CA8D8: swc1        $f0, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
            goto L_151CA8E4;
    }
    // 0x151CA8D8: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x151CA8DC: b           L_151CA8E8
    // 0x151CA8E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_151CA8E8;
    // 0x151CA8E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_151CA8E4:
    // 0x151CA8E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CA8E8:
    // 0x151CA8E8: addiu       $t1, $zero, 0x58
    ctx->r9 = ADD32(0, 0X58);
    // 0x151CA8EC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151CA8F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151CA8F4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151CA8F8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x151CA8FC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x151CA900: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151CA904: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x151CA908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CA90C: jal         0x1515548C
    // 0x151CA910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515548C(rdram, ctx);
        goto after_4;
    // 0x151CA910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x151CA914: beq         $v0, $zero, L_151CA928
    if (ctx->r2 == 0) {
        // 0x151CA918: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CA928;
    }
    // 0x151CA918: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CA91C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151CA920: jal         0x10022EC0
    // 0x151CA924: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x151CA924: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_5:
L_151CA928:
    // 0x151CA928: lhu         $v0, 0xB4($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XB4);
    // 0x151CA92C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151CA930: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151CA934: lui         $at, 0xC1C8
    ctx->r1 = S32(0XC1C8 << 16);
    // 0x151CA938: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151CA93C: andi        $t0, $v0, 0xFFF9
    ctx->r8 = ctx->r2 & 0XFFF9;
    // 0x151CA940: ori         $t4, $t0, 0x2
    ctx->r12 = ctx->r8 | 0X2;
    // 0x151CA944: sh          $t4, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r12;
    // 0x151CA948: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x151CA94C: beq         $s0, $zero, L_151CA95C
    if (ctx->r16 == 0) {
        // 0x151CA950: swc1        $f18, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
            goto L_151CA95C;
    }
    // 0x151CA950: swc1        $f18, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f18.u32l;
    // 0x151CA954: b           L_151CA960
    // 0x151CA958: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_151CA960;
    // 0x151CA958: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_151CA95C:
    // 0x151CA95C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151CA960:
    // 0x151CA960: addiu       $t3, $zero, 0x58
    ctx->r11 = ADD32(0, 0X58);
    // 0x151CA964: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151CA968: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151CA96C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x151CA970: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151CA974: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x151CA978: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151CA97C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x151CA980: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CA984: jal         0x1515548C
    // 0x151CA988: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515548C(rdram, ctx);
        goto after_6;
    // 0x151CA988: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x151CA98C: beq         $v0, $zero, L_151CA9A0
    if (ctx->r2 == 0) {
        // 0x151CA990: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CA9A0;
    }
    // 0x151CA990: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CA994: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151CA998: jal         0x10022EC0
    // 0x151CA99C: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x151CA99C: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_7:
L_151CA9A0:
    // 0x151CA9A0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151CA9A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151CA9A8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151CA9AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x151CA9B0: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x151CA9B4: addiu       $t1, $zero, 0x99
    ctx->r9 = ADD32(0, 0X99);
    // 0x151CA9B8: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x151CA9BC: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    // 0x151CA9C0: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x151CA9C4: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x151CA9C8: sb          $t1, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r9;
    // 0x151CA9CC: lbu         $t6, 0x23D($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X23D);
    // 0x151CA9D0: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x151CA9D4: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x151CA9D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151CA9DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CA9E0: addiu       $t9, $t6, 0xB
    ctx->r25 = ADD32(ctx->r14, 0XB);
    // 0x151CA9E4: lwc1        $f4, -0x5174($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5174);
    // 0x151CA9E8: sllv        $t2, $t0, $t9
    ctx->r10 = S32(ctx->r8 << (ctx->r25 & 31));
    // 0x151CA9EC: ori         $t4, $t2, 0x50
    ctx->r12 = ctx->r10 | 0X50;
    // 0x151CA9F0: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x151CA9F4: addiu       $t5, $zero, 0x44
    ctx->r13 = ADD32(0, 0X44);
    // 0x151CA9F8: sh          $t4, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r12;
    // 0x151CA9FC: sw          $t3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r11;
    // 0x151CAA00: sw          $t5, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r13;
    // 0x151CAA04: bne         $v1, $v0, L_151CAA1C
    if (ctx->r3 != ctx->r2) {
        // 0x151CAA08: swc1        $f4, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
            goto L_151CAA1C;
    }
    // 0x151CAA08: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x151CAA0C: lui         $at, 0xC278
    ctx->r1 = S32(0XC278 << 16);
    // 0x151CAA10: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151CAA14: b           L_151CAA2C
    // 0x151CAA18: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
        goto L_151CAA2C;
    // 0x151CAA18: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
L_151CAA1C:
    // 0x151CAA1C: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x151CAA20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151CAA24: nop

    // 0x151CAA28: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
L_151CAA2C:
    // 0x151CAA2C: bne         $v1, $v0, L_151CAA44
    if (ctx->r3 != ctx->r2) {
        // 0x151CAA30: swc1        $f2, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
            goto L_151CAA44;
    }
    // 0x151CAA30: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x151CAA34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CAA38: lwc1        $f10, -0x5170($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5170);
    // 0x151CAA3C: b           L_151CAA50
    // 0x151CAA40: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
        goto L_151CAA50;
    // 0x151CAA40: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
L_151CAA44:
    // 0x151CAA44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CAA48: lwc1        $f16, -0x516C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X516C);
    // 0x151CAA4C: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
L_151CAA50:
    // 0x151CAA50: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x151CAA54: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
L_151CAA58:
    // 0x151CAA58: addiu       $t7, $zero, 0x58
    ctx->r15 = ADD32(0, 0X58);
    // 0x151CAA5C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151CAA60: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151CAA64: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151CAA68: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151CAA6C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x151CAA70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151CAA74: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x151CAA78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151CAA7C: jal         0x1515548C
    // 0x151CAA80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1515548C(rdram, ctx);
        goto after_8;
    // 0x151CAA80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x151CAA84: beq         $v0, $zero, L_151CAA98
    if (ctx->r2 == 0) {
        // 0x151CAA88: addiu       $a0, $v0, 0x70
        ctx->r4 = ADD32(ctx->r2, 0X70);
            goto L_151CAA98;
    }
    // 0x151CAA88: addiu       $a0, $v0, 0x70
    ctx->r4 = ADD32(ctx->r2, 0X70);
    // 0x151CAA8C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151CAA90: jal         0x10022EC0
    // 0x151CAA94: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x151CAA94: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_9:
L_151CAA98:
    // 0x151CAA98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151CAA9C: lwc1        $f4, -0x5168($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5168);
    // 0x151CAAA0: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151CAAA4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x151CAAA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x151CAAAC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151CAAB0: bne         $s0, $at, L_151CAA58
    if (ctx->r16 != ctx->r1) {
        // 0x151CAAB4: swc1        $f6, 0x68($sp)
        MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
            goto L_151CAA58;
    }
    // 0x151CAAB4: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x151CAAB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151CAABC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x151CAAC0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x151CAAC4: jr          $ra
    // 0x151CAAC8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    return;
    // 0x151CAAC8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_1518F858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1518F85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518F860: lb          $t6, 0x89($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X89);
    // 0x1518F864: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1518F868: beql        $t6, $at, L_1518F890
    if (ctx->r14 == ctx->r1) {
        // 0x1518F86C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1518F890;
    }
    goto skip_0;
    // 0x1518F86C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1518F870: lb          $t7, 0x89($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X89);
    // 0x1518F874: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1518F878: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1518F87C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x1518F880: lw          $t9, -0x2980($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2980);
    // 0x1518F884: jalr        $t9
    // 0x1518F888: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1518F888: nop

    after_0:
    // 0x1518F88C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1518F890:
    // 0x1518F890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1518F894: jr          $ra
    // 0x1518F898: nop

    return;
    return;
    // 0x1518F898: nop

;}
RECOMP_FUNC void func_150C308C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C308C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150C3090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C3094: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150C3098: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x150C309C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C30A0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x150C30A4: lh          $t7, 0x1C($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X1C);
    // 0x150C30A8: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x150C30AC: bne         $at, $zero, L_150C313C
    if (ctx->r1 != 0) {
        // 0x150C30B0: nop
    
            goto L_150C313C;
    }
    // 0x150C30B0: nop

    // 0x150C30B4: lw          $a0, 0x2FA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2FA4);
    // 0x150C30B8: jal         0x15144B34
    // 0x150C30BC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    func_15144B34(rdram, ctx);
        goto after_0;
    // 0x150C30BC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    after_0:
    // 0x150C30C0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150C30C4: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150C30C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C30CC: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150C30D0: lwc1        $f8, 0x310($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X310);
    // 0x150C30D4: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x150C30D8: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150C30DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150C30E0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150C30E4: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x150C30E8: nop

    // 0x150C30EC: bc1fl       L_150C3100
    if (!c1cs) {
        // 0x150C30F0: lwc1        $f12, 0x0($v1)
        ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
            goto L_150C3100;
    }
    goto skip_0;
    // 0x150C30F0: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x150C30F4: b           L_150C313C
    // 0x150C30F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_150C313C;
    // 0x150C30F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150C30FC: lwc1        $f12, 0x0($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X0);
L_150C3100:
    // 0x150C3100: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150C3104: jal         0x150484A0
    // 0x150C3108: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    func_150484A0(rdram, ctx);
        goto after_1;
    // 0x150C3108: sb          $a1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r5;
    after_1:
    // 0x150C310C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x150C3110: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x150C3114: jal         0x15144C8C
    // 0x150C3118: lwc1        $f14, 0x160($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X160);
    func_15144C8C(rdram, ctx);
        goto after_2;
    // 0x150C3118: lwc1        $f14, 0x160($t8)
    ctx->f14.u32l = MEM_W(ctx->r24, 0X160);
    after_2:
    // 0x150C311C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C3120: lwc1        $f10, 0x314($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X314);
    // 0x150C3124: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x150C3128: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x150C312C: nop

    // 0x150C3130: bc1f        L_150C313C
    if (!c1cs) {
        // 0x150C3134: nop
    
            goto L_150C313C;
    }
    // 0x150C3134: nop

    // 0x150C3138: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_150C313C:
    // 0x150C313C: beq         $a1, $zero, L_150C3150
    if (ctx->r5 == 0) {
        // 0x150C3140: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_150C3150;
    }
    // 0x150C3140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150C3144: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x150C3148: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x150C314C: sh          $t9, 0x1C($t0)
    MEM_H(0X1C, ctx->r8) = ctx->r25;
L_150C3150:
    // 0x150C3150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150C3154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150C3158: jr          $ra
    // 0x150C315C: nop

    return;
    return;
    // 0x150C315C: nop

;}
RECOMP_FUNC void func_15114050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15114050: lbu         $t6, 0x4F($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4F);
    // 0x15114054: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15114058: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1511405C: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x15114060: beq         $t7, $zero, L_151140BC
    if (ctx->r15 == 0) {
        // 0x15114064: nop
    
            goto L_151140BC;
    }
    // 0x15114064: nop

    // 0x15114068: bne         $a1, $at, L_15114078
    if (ctx->r5 != ctx->r1) {
        // 0x1511406C: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_15114078;
    }
    // 0x1511406C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x15114070: jr          $ra
    // 0x15114074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x15114074: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15114078:
    // 0x15114078: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x1511407C: lw          $t9, -0x410C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X410C);
    // 0x15114080: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x15114084: lw          $t8, -0x406C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X406C);
    // 0x15114088: subu        $t0, $a0, $t9
    ctx->r8 = SUB32(ctx->r4, ctx->r25);
    // 0x1511408C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x15114090: mflo        $t1
    ctx->r9 = lo;
    // 0x15114094: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x15114098: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x1511409C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x151140A0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151140A4: sllv        $t6, $t5, $a1
    ctx->r14 = S32(ctx->r13 << (ctx->r5 & 31));
    // 0x151140A8: and         $t7, $t4, $t6
    ctx->r15 = ctx->r12 & ctx->r14;
    // 0x151140AC: beq         $t7, $zero, L_151140BC
    if (ctx->r15 == 0) {
        // 0x151140B0: nop
    
            goto L_151140BC;
    }
    // 0x151140B0: nop

    // 0x151140B4: jr          $ra
    // 0x151140B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x151140B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151140BC:
    // 0x151140BC: jr          $ra
    // 0x151140C0: nop

    return;
    return;
    // 0x151140C0: nop

;}
RECOMP_FUNC void func_15089BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15089BB0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15089BB4: sw          $zero, 0x23B0($at)
    MEM_W(0X23B0, ctx->r1) = 0;
    // 0x15089BB8: jr          $ra
    // 0x15089BBC: nop

    return;
    return;
    // 0x15089BBC: nop

;}
RECOMP_FUNC void func_151AB2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AB2C4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x151AB2C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151AB2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151AB2D0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151AB2D4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x151AB2D8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x151AB2DC: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x151AB2E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151AB2E4: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x151AB2E8: sb          $t7, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r15;
    // 0x151AB2EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x151AB2F0: lwc1        $f4, 0x118($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X118);
    // 0x151AB2F4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151AB2F8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151AB2FC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x151AB300: lbu         $t9, 0x3B($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3B);
    // 0x151AB304: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151AB308: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151AB30C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AB310: lwc1        $f8, -0x7010($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7010);
    // 0x151AB314: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151AB318: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x151AB31C: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x151AB320: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151AB324: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151AB328: sb          $t0, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r8;
    // 0x151AB32C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x151AB330: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x151AB334: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x151AB338: sh          $t1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r9;
    // 0x151AB33C: sb          $t2, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r10;
    // 0x151AB340: sb          $t3, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r11;
    // 0x151AB344: sb          $zero, 0x54($sp)
    MEM_B(0X54, ctx->r29) = 0;
    // 0x151AB348: sb          $t4, 0x55($sp)
    MEM_B(0X55, ctx->r29) = ctx->r12;
    // 0x151AB34C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x151AB350: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x151AB354: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x151AB358: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151AB35C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151AB360: sb          $t9, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r25;
    // 0x151AB364: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x151AB368: jal         0x1513418C
    // 0x151AB36C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    func_1513418C(rdram, ctx);
        goto after_0;
    // 0x151AB36C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x151AB370: beq         $v0, $zero, L_151AB390
    if (ctx->r2 == 0) {
        // 0x151AB374: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151AB390;
    }
    // 0x151AB374: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151AB378: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
    // 0x151AB37C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x151AB380: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x151AB384: jal         0x10022EC0
    // 0x151AB388: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x151AB388: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x151AB38C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
L_151AB390:
    // 0x151AB390: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x151AB394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151AB398: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x151AB39C: jr          $ra
    // 0x151AB3A0: nop

    return;
    return;
    // 0x151AB3A0: nop

;}
RECOMP_FUNC void func_150D2110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D2110: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150D2114: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x150D2118: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x150D211C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150D2120: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x150D2124: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x150D2128: addiu       $v0, $v0, -0x6700
    ctx->r2 = ADD32(ctx->r2, -0X6700);
    // 0x150D212C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150D2130: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150D2134: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x150D2138: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x150D213C: add.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x150D2140: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x150D2144: lbu         $t0, 0x5F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X5F);
    // 0x150D2148: lbu         $t1, 0x63($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X63);
    // 0x150D214C: lbu         $t5, 0x67($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X67);
    // 0x150D2150: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x150D2154: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150D2158: addiu       $t3, $zero, 0x26
    ctx->r11 = ADD32(0, 0X26);
    // 0x150D215C: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    // 0x150D2160: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x150D2164: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x150D2168: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x150D216C: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x150D2170: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x150D2174: sb          $zero, 0x38($sp)
    MEM_B(0X38, ctx->r29) = 0;
    // 0x150D2178: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150D217C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x150D2180: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150D2184: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150D2188: addiu       $a2, $zero, 0x2F
    ctx->r6 = ADD32(0, 0X2F);
    // 0x150D218C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150D2190: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x150D2194: sb          $t0, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r8;
    // 0x150D2198: sb          $t1, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r9;
    // 0x150D219C: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150D21A0: jal         0x15149130
    // 0x150D21A4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150D21A4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x150D21A8: beq         $v0, $zero, L_150D21BC
    if (ctx->r2 == 0) {
        // 0x150D21AC: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150D21BC;
    }
    // 0x150D21AC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150D21B0: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x150D21B4: jal         0x10022EC0
    // 0x150D21B8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150D21B8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_1:
L_150D21BC:
    // 0x150D21BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150D21C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150D21C4: jr          $ra
    // 0x150D21C8: nop

    return;
    return;
    // 0x150D21C8: nop

;}
RECOMP_FUNC void func_151A8F6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A8F6C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x151A8F70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151A8F74: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x151A8F78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151A8F7C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x151A8F80: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x151A8F84: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x151A8F88: jal         0x150ADA20
    // 0x151A8F8C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A8F8C: nop

    after_0:
    // 0x151A8F90: jal         0x150ADA68
    // 0x151A8F94: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151A8F94: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x151A8F98: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x151A8F9C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x151A8FA0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x151A8FA4: lwc1        $f4, 0x48($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X48);
    // 0x151A8FA8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151A8FAC: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x151A8FB0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x151A8FB4: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x151A8FB8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x151A8FBC: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151A8FC0: addiu       $a3, $s0, 0x8
    ctx->r7 = ADD32(ctx->r16, 0X8);
    // 0x151A8FC4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x151A8FC8: jal         0x15143874
    // 0x151A8FCC: nop

    func_15143874(rdram, ctx);
        goto after_2;
    // 0x151A8FCC: nop

    after_2:
    // 0x151A8FD0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x151A8FD4: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A8FD8: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151A8FDC: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x151A8FE0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151A8FE4: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x151A8FE8: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151A8FEC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x151A8FF0: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x151A8FF4: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151A8FF8: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x151A8FFC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x151A9000: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151A9004: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x151A9008: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x151A900C: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151A9010: swc1        $f16, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f16.u32l;
    // 0x151A9014: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151A9018: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151A901C: jr          $ra
    // 0x151A9020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x151A9020: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1510E670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510E670: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1510E674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1510E678: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1510E67C: addiu       $t7, $t7, 0x3300
    ctx->r15 = ADD32(ctx->r15, 0X3300);
    // 0x1510E680: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x1510E684: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1510E688: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x1510E68C: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x1510E690: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1510E694: beq         $t0, $zero, L_1510E794
    if (ctx->r8 == 0) {
        // 0x1510E698: nop
    
            goto L_1510E794;
    }
    // 0x1510E698: nop

    // 0x1510E69C: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x1510E6A0: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x1510E6A4: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x1510E6A8: addu        $v0, $t8, $t1
    ctx->r2 = ADD32(ctx->r24, ctx->r9);
    // 0x1510E6AC: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x1510E6B0: lh          $t3, 0x0($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X0);
    // 0x1510E6B4: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x1510E6B8: addu        $a3, $t2, $t1
    ctx->r7 = ADD32(ctx->r10, ctx->r9);
    // 0x1510E6BC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x1510E6C0: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x1510E6C4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x1510E6C8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x1510E6CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x1510E6D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510E6D4: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x1510E6D8: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x1510E6DC: lh          $t6, 0x2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2);
    // 0x1510E6E0: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x1510E6E4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1510E6E8: nop

    // 0x1510E6EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1510E6F0: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x1510E6F4: lh          $t2, 0x4($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X4);
    // 0x1510E6F8: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x1510E6FC: subu        $t3, $t9, $t2
    ctx->r11 = SUB32(ctx->r25, ctx->r10);
    // 0x1510E700: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x1510E704: nop

    // 0x1510E708: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1510E70C: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x1510E710: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x1510E714: lh          $t4, 0x0($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X0);
    // 0x1510E718: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x1510E71C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x1510E720: nop

    // 0x1510E724: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1510E728: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x1510E72C: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x1510E730: lh          $t7, 0x2($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X2);
    // 0x1510E734: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x1510E738: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1510E73C: nop

    // 0x1510E740: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1510E744: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x1510E748: lh          $t3, 0x4($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4);
    // 0x1510E74C: lh          $t2, 0x4($a3)
    ctx->r10 = MEM_H(ctx->r7, 0X4);
    // 0x1510E750: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x1510E754: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x1510E758: nop

    // 0x1510E75C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1510E760: jal         0x150AD8B0
    // 0x1510E764: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    func_150AD8B0(rdram, ctx);
        goto after_0;
    // 0x1510E764: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x1510E768: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1510E76C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1510E770: nop

    // 0x1510E774: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x1510E778: nop

    // 0x1510E77C: bc1f        L_1510E78C
    if (!c1cs) {
        // 0x1510E780: nop
    
            goto L_1510E78C;
    }
    // 0x1510E780: nop

    // 0x1510E784: b           L_1510E794
    // 0x1510E788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1510E794;
    // 0x1510E788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1510E78C:
    // 0x1510E78C: b           L_1510E794
    // 0x1510E790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1510E794;
    // 0x1510E790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1510E794:
    // 0x1510E794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510E798: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1510E79C: jr          $ra
    // 0x1510E7A0: nop

    return;
    return;
    // 0x1510E7A0: nop

;}
RECOMP_FUNC void func_1514DC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514DC84: lw          $t6, 0x94($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X94);
    // 0x1514DC88: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x1514DC8C: sw          $t7, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r15;
    // 0x1514DC90: jr          $ra
    // 0x1514DC94: nop

    return;
    return;
    // 0x1514DC94: nop

;}
RECOMP_FUNC void func_1507965C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507965C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15079660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15079664: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15079668: jal         0x15083FB0
    // 0x1507966C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15083FB0(rdram, ctx);
        goto after_0;
    // 0x1507966C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_0:
    // 0x15079670: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x15079674: beq         $v0, $at, L_150796BC
    if (ctx->r2 == ctx->r1) {
        // 0x15079678: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_150796BC;
    }
    // 0x15079678: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x1507967C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15079680: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079684: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x15079688: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1507968C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15079690: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15079694: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x15079698: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1507969C: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x150796A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150796A4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150796A8: lbu         $t8, 0x1891($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1891);
    // 0x150796AC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x150796B0: sw          $zero, 0x218($v1)
    MEM_W(0X218, ctx->r3) = 0;
    // 0x150796B4: sb          $zero, 0x23A($v1)
    MEM_B(0X23A, ctx->r3) = 0;
    // 0x150796B8: sb          $t8, 0x232($v1)
    MEM_B(0X232, ctx->r3) = ctx->r24;
L_150796BC:
    // 0x150796BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150796C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150796C4: jr          $ra
    // 0x150796C8: nop

    return;
    return;
    // 0x150796C8: nop

;}
RECOMP_FUNC void func_15134E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15134E48: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x15134E4C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x15134E50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15134E54: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x15134E58: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x15134E5C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x15134E60: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x15134E64: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x15134E68: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x15134E6C: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x15134E70: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x15134E74: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x15134E78: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x15134E7C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15134E80: sb          $zero, 0x123($sp)
    MEM_B(0X123, ctx->r29) = 0;
    // 0x15134E84: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x15134E88: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15134E8C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x15134E90: beql        $t3, $zero, L_15134EAC
    if (ctx->r11 == 0) {
        // 0x15134E94: sb          $t5, 0x123($sp)
        MEM_B(0X123, ctx->r29) = ctx->r13;
            goto L_15134EAC;
    }
    goto skip_0;
    // 0x15134E94: sb          $t5, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r13;
    skip_0:
    // 0x15134E98: lbu         $t2, 0x18($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X18);
    // 0x15134E9C: lbu         $t4, 0x3B($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3B);
    // 0x15134EA0: beql        $t2, $t4, L_15134EB0
    if (ctx->r10 == ctx->r12) {
        // 0x15134EA4: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_15134EB0;
    }
    goto skip_1;
    // 0x15134EA4: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_1:
    // 0x15134EA8: sb          $t5, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r13;
L_15134EAC:
    // 0x15134EAC: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_15134EB0:
    // 0x15134EB0: lbu         $t8, 0x123($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X123);
    // 0x15134EB4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x15134EB8: beql        $t7, $zero, L_151352A4
    if (ctx->r15 == 0) {
        // 0x15134EBC: lbu         $t9, 0x123($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X123);
            goto L_151352A4;
    }
    goto skip_2;
    // 0x15134EBC: lbu         $t9, 0x123($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X123);
    skip_2:
    // 0x15134EC0: bnel        $t8, $zero, L_15135238
    if (ctx->r24 != 0) {
        // 0x15134EC4: lb          $v0, 0x51($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X51);
            goto L_15135238;
    }
    goto skip_3;
    // 0x15134EC4: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    skip_3:
    // 0x15134EC8: lw          $v1, 0x1D4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1D4);
    // 0x15134ECC: beql        $v1, $zero, L_15135238
    if (ctx->r3 == 0) {
        // 0x15134ED0: lb          $v0, 0x51($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X51);
            goto L_15135238;
    }
    goto skip_4;
    // 0x15134ED0: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    skip_4:
    // 0x15134ED4: lbu         $t1, 0x74($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X74);
    // 0x15134ED8: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x15134EDC: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x15134EE0: andi        $t9, $t1, 0xF
    ctx->r25 = ctx->r9 & 0XF;
    // 0x15134EE4: beql        $t9, $at, L_15135238
    if (ctx->r25 == ctx->r1) {
        // 0x15134EE8: lb          $v0, 0x51($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X51);
            goto L_15135238;
    }
    goto skip_5;
    // 0x15134EE8: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    skip_5:
    // 0x15134EEC: lh          $t4, 0x54($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X54);
    // 0x15134EF0: lw          $t5, -0x161C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X161C);
    // 0x15134EF4: lh          $t8, 0x40($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X40);
    // 0x15134EF8: lbu         $t3, 0x20($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X20);
    // 0x15134EFC: subu        $t6, $t4, $t5
    ctx->r14 = SUB32(ctx->r12, ctx->r13);
    // 0x15134F00: sh          $t6, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r14;
    // 0x15134F04: lh          $t7, 0x54($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X54);
    // 0x15134F08: negu        $t1, $t8
    ctx->r9 = SUB32(0, ctx->r24);
    // 0x15134F0C: sll         $t2, $t3, 6
    ctx->r10 = S32(ctx->r11 << 6);
    // 0x15134F10: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x15134F14: beq         $at, $zero, L_15134F78
    if (ctx->r1 == 0) {
        // 0x15134F18: addu        $s1, $v1, $t2
        ctx->r17 = ADD32(ctx->r3, ctx->r10);
            goto L_15134F78;
    }
    // 0x15134F18: addu        $s1, $v1, $t2
    ctx->r17 = ADD32(ctx->r3, ctx->r10);
    // 0x15134F1C: lh          $t9, 0x3E($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X3E);
    // 0x15134F20: addiu       $t3, $s0, 0x64
    ctx->r11 = ADD32(ctx->r16, 0X64);
    // 0x15134F24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15134F28: sh          $t9, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r25;
    // 0x15134F2C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x15134F30: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    // 0x15134F34: addiu       $a2, $s0, 0x30
    ctx->r6 = ADD32(ctx->r16, 0X30);
    // 0x15134F38: jal         0x15135424
    // 0x15134F3C: addiu       $a3, $s0, 0x58
    ctx->r7 = ADD32(ctx->r16, 0X58);
    func_15135424(rdram, ctx);
        goto after_0;
    // 0x15134F3C: addiu       $a3, $s0, 0x58
    ctx->r7 = ADD32(ctx->r16, 0X58);
    after_0:
    // 0x15134F40: lb          $v0, 0x46($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X46);
    // 0x15134F44: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x15134F48: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15134F4C: beq         $s4, $v0, L_15134F78
    if (ctx->r20 == ctx->r2) {
        // 0x15134F50: sll         $t2, $v0, 2
        ctx->r10 = S32(ctx->r2 << 2);
            goto L_15134F78;
    }
    // 0x15134F50: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x15134F54: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x15134F58: lw          $t9, -0x64E4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X64E4);
    // 0x15134F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15134F60: jalr        $t9
    // 0x15134F64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x15134F64: nop

    after_1:
    // 0x15134F68: bne         $v0, $zero, L_15134F78
    if (ctx->r2 != 0) {
        // 0x15134F6C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_15134F78;
    }
    // 0x15134F6C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15134F70: sb          $t4, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r12;
    // 0x15134F74: sh          $s4, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r20;
L_15134F78:
    // 0x15134F78: lh          $t5, 0x54($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X54);
    // 0x15134F7C: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x15134F80: blezl       $t5, L_15135238
    if (SIGNED(ctx->r13) <= 0) {
        // 0x15134F84: lb          $v0, 0x51($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X51);
            goto L_15135238;
    }
    goto skip_6;
    // 0x15134F84: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    skip_6:
    // 0x15134F88: lb          $v0, 0x48($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X48);
    // 0x15134F8C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15134F90: beq         $s4, $v0, L_15134FB0
    if (ctx->r20 == ctx->r2) {
        // 0x15134F94: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_15134FB0;
    }
    // 0x15134F94: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15134F98: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x15134F9C: lw          $t9, -0x64A4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X64A4);
    // 0x15134FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15134FA4: jalr        $t9
    // 0x15134FA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x15134FA8: nop

    after_2:
    // 0x15134FAC: swc1        $f0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->f0.u32l;
L_15134FB0:
    // 0x15134FB0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15134FB4: addiu       $t0, $t0, -0x165C
    ctx->r8 = ADD32(ctx->r8, -0X165C);
    // 0x15134FB8: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15134FBC: lwc1        $f10, 0x4C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x15134FC0: lwc1        $f4, 0x70($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X70);
    // 0x15134FC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15134FC8: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15134FCC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x15134FD0: addiu       $s2, $sp, 0xD4
    ctx->r18 = ADD32(ctx->r29, 0XD4);
    // 0x15134FD4: addiu       $s3, $sp, 0xC8
    ctx->r19 = ADD32(ctx->r29, 0XC8);
    // 0x15134FD8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x15134FDC: swc1        $f10, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f10.u32l;
    // 0x15134FE0: lwc1        $f0, 0x70($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X70);
    // 0x15134FE4: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x15134FE8: nop

    // 0x15134FEC: bc1fl       L_15135238
    if (!c1cs) {
        // 0x15134FF0: lb          $v0, 0x51($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X51);
            goto L_15135238;
    }
    goto skip_7;
    // 0x15134FF0: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    skip_7:
    // 0x15134FF4: div.s       $f14, $f22, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    // 0x15134FF8: lwc1        $f6, 0x78($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X78);
    // 0x15134FFC: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x15135000: addiu       $v0, $s0, 0x58
    ctx->r2 = ADD32(ctx->r16, 0X58);
    // 0x15135004: addiu       $v1, $s0, 0x64
    ctx->r3 = ADD32(ctx->r16, 0X64);
    // 0x15135008: add.s       $f20, $f6, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1513500C: addiu       $t5, $sp, 0x104
    ctx->r13 = ADD32(ctx->r29, 0X104);
    // 0x15135010: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15135014: addiu       $a1, $s0, 0x24
    ctx->r5 = ADD32(ctx->r16, 0X24);
    // 0x15135018: addiu       $a2, $s0, 0x30
    ctx->r6 = ADD32(ctx->r16, 0X30);
    // 0x1513501C: addiu       $a3, $sp, 0x110
    ctx->r7 = ADD32(ctx->r29, 0X110);
    // 0x15135020: mul.s       $f8, $f20, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x15135024: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x15135028: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1513502C: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x15135030: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x15135034: sw          $t1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r9;
    // 0x15135038: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1513503C: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x15135040: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x15135044: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x15135048: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x1513504C: sw          $t4, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r12;
    // 0x15135050: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x15135054: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x15135058: swc1        $f14, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f14.u32l;
    // 0x1513505C: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    // 0x15135060: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x15135064: jal         0x15135424
    // 0x15135068: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15135424(rdram, ctx);
        goto after_3;
    // 0x15135068: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x1513506C: lwc1        $f10, 0x110($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X110);
    // 0x15135070: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x15135074: lwc1        $f4, 0x114($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X114);
    // 0x15135078: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x1513507C: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15135080: lwc1        $f6, 0x60($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X60);
    // 0x15135084: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x15135088: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x1513508C: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x15135090: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15135094: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x15135098: lwc1        $f0, -0x1658($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x1513509C: lwc1        $f14, 0xE8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x151350A0: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x151350A4: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x151350A8: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x151350AC: addiu       $s1, $s1, -0x64C8
    ctx->r17 = ADD32(ctx->r17, -0X64C8);
    // 0x151350B0: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151350B4: lwc1        $f8, 0x108($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X108);
    // 0x151350B8: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x151350BC: lwc1        $f10, 0x68($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X68);
    // 0x151350C0: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x151350C4: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x151350C8: lwc1        $f10, 0x10C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x151350CC: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x151350D0: lwc1        $f4, 0x6C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X6C);
    // 0x151350D4: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151350D8: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151350DC: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x151350E0: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151350E4: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
    // 0x151350E8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151350EC: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x151350F0: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151350F4: swc1        $f10, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f10.u32l;
    // 0x151350F8: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151350FC: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x15135100: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x15135104: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x15135108: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x1513510C: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x15135110: nop

    // 0x15135114: mul.s       $f24, $f16, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f24.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x15135118: nop

    // 0x1513511C: mul.s       $f26, $f18, $f14
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f26.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x15135120: swc1        $f10, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f10.u32l;
    // 0x15135124: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x15135128: mul.s       $f28, $f4, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f28.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x1513512C: nop

    // 0x15135130: mul.s       $f30, $f6, $f14
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f30.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x15135134: nop

    // 0x15135138: mul.s       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x1513513C: nop

    // 0x15135140: mul.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15135144: nop

    // 0x15135148: lb          $v0, 0x47($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X47);
L_1513514C:
    // 0x1513514C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15135150: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x15135154: beq         $s4, $v0, L_15135188
    if (ctx->r20 == ctx->r2) {
        // 0x15135158: addiu       $a2, $sp, 0xF8
        ctx->r6 = ADD32(ctx->r29, 0XF8);
            goto L_15135188;
    }
    // 0x15135158: addiu       $a2, $sp, 0xF8
    ctx->r6 = ADD32(ctx->r29, 0XF8);
    // 0x1513515C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x15135160: addu        $t9, $s1, $t6
    ctx->r25 = ADD32(ctx->r17, ctx->r14);
    // 0x15135164: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x15135168: addiu       $a3, $sp, 0xEC
    ctx->r7 = ADD32(ctx->r29, 0XEC);
    // 0x1513516C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    // 0x15135170: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15135174: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x15135178: jalr        $t9
    // 0x1513517C: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x1513517C: swc1        $f12, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f12.u32l;
    after_4:
    // 0x15135180: lwc1        $f2, 0x84($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15135184: lwc1        $f12, 0x80($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X80);
L_15135188:
    // 0x15135188: lwc1        $f4, 0xD4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x1513518C: lwc1        $f8, 0xD8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x15135190: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x15135194: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x15135198: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x1513519C: lwc1        $f8, 0xC8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x151351A0: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    // 0x151351A4: add.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x151351A8: swc1        $f10, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f10.u32l;
    // 0x151351AC: lwc1        $f4, 0xCC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x151351B0: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x151351B4: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x151351B8: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    // 0x151351BC: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x151351C0: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x151351C4: lwc1        $f4, 0xE0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x151351C8: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x151351CC: swc1        $f6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f6.u32l;
    // 0x151351D0: sub.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x151351D4: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    // 0x151351D8: lwc1        $f6, 0x70($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X70);
    // 0x151351DC: sub.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f22.fl;
    // 0x151351E0: swc1        $f8, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->f8.u32l;
    // 0x151351E4: lwc1        $f10, 0x70($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X70);
    // 0x151351E8: c.lt.s      $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f22.fl < ctx->f10.fl;
    // 0x151351EC: nop

    // 0x151351F0: bc1tl       L_1513514C
    if (c1cs) {
        // 0x151351F4: lb          $v0, 0x47($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X47);
            goto L_1513514C;
    }
    goto skip_8;
    // 0x151351F4: lb          $v0, 0x47($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X47);
    skip_8:
    // 0x151351F8: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x151351FC: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x15135200: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x15135204: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x15135208: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x1513520C: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x15135210: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x15135214: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x15135218: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x1513521C: sw          $at, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r1;
    // 0x15135220: lw          $t4, 0x4($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X4);
    // 0x15135224: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
    // 0x15135228: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x1513522C: sw          $at, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r1;
    // 0x15135230: swc1        $f20, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->f20.u32l;
    // 0x15135234: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
L_15135238:
    // 0x15135238: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x1513523C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15135240: beq         $s4, $v0, L_15135268
    if (ctx->r20 == ctx->r2) {
        // 0x15135244: sll         $t5, $v0, 2
        ctx->r13 = S32(ctx->r2 << 2);
            goto L_15135268;
    }
    // 0x15135244: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x15135248: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x1513524C: lw          $t9, -0x6494($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6494);
    // 0x15135250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15135254: jalr        $t9
    // 0x15135258: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x15135258: nop

    after_5:
    // 0x1513525C: bne         $v0, $zero, L_15135268
    if (ctx->r2 != 0) {
        // 0x15135260: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_15135268;
    }
    // 0x15135260: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15135264: sb          $t6, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r14;
L_15135268:
    // 0x15135268: lbu         $t8, 0x3C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X3C);
    // 0x1513526C: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x15135270: andi        $t7, $t8, 0x2
    ctx->r15 = ctx->r24 & 0X2;
    // 0x15135274: beql        $t7, $zero, L_151352A4
    if (ctx->r15 == 0) {
        // 0x15135278: lbu         $t9, 0x123($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X123);
            goto L_151352A4;
    }
    goto skip_9;
    // 0x15135278: lbu         $t9, 0x123($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X123);
    skip_9:
    // 0x1513527C: lh          $t1, 0x42($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X42);
    // 0x15135280: lw          $t3, -0x161C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X161C);
    // 0x15135284: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15135288: subu        $t2, $t1, $t3
    ctx->r10 = SUB32(ctx->r9, ctx->r11);
    // 0x1513528C: sh          $t2, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r10;
    // 0x15135290: lh          $t4, 0x42($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X42);
    // 0x15135294: bgezl       $t4, L_151352A4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x15135298: lbu         $t9, 0x123($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X123);
            goto L_151352A4;
    }
    goto skip_10;
    // 0x15135298: lbu         $t9, 0x123($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X123);
    skip_10:
    // 0x1513529C: sb          $t5, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r13;
    // 0x151352A0: lbu         $t9, 0x123($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X123);
L_151352A4:
    // 0x151352A4: beql        $t9, $zero, L_151352B8
    if (ctx->r25 == 0) {
        // 0x151352A8: lw          $ra, 0x64($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X64);
            goto L_151352B8;
    }
    goto skip_11;
    // 0x151352A8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    skip_11:
    // 0x151352AC: jal         0x1516972C
    // 0x151352B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_6;
    // 0x151352B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x151352B4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
L_151352B8:
    // 0x151352B8: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x151352BC: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x151352C0: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x151352C4: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x151352C8: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x151352CC: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x151352D0: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x151352D4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x151352D8: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x151352DC: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x151352E0: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x151352E4: jr          $ra
    // 0x151352E8: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    return;
    // 0x151352E8: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_150E41C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E41C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150E41C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150E41C8: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x150E41CC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150E41D0: lw          $v0, -0x4010($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4010);
    // 0x150E41D4: lwc1        $f4, 0x2F8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x150E41D8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150E41DC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x150E41E0: nop

    // 0x150E41E4: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x150E41E8: lwc1        $f8, 0x2FC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x150E41EC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150E41F0: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x150E41F4: nop

    // 0x150E41F8: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x150E41FC: lwc1        $f16, 0x300($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X300);
    // 0x150E4200: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150E4204: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x150E4208: nop

    // 0x150E420C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x150E4210: lwc1        $f20, 0x398($v0)
    ctx->f20.u32l = MEM_W(ctx->r2, 0X398);
    // 0x150E4214: jal         0x15047D60
    // 0x150E4218: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x150E4218: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x150E421C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150E4220: jal         0x15047C00
    // 0x150E4224: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x150E4224: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x150E4228: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150E422C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150E4230: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150E4234: lui         $at, 0xC3FA
    ctx->r1 = S32(0XC3FA << 16);
    // 0x150E4238: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150E423C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150E4240: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150E4244: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x150E4248: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x150E424C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x150E4250: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x150E4254: lwc1        $f20, 0x3A0($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X3A0);
    // 0x150E4258: jal         0x15047D60
    // 0x150E425C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x150E425C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_2:
    // 0x150E4260: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x150E4264: jal         0x15047C00
    // 0x150E4268: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x150E4268: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x150E426C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150E4270: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x150E4274: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x150E4278: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x150E427C: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x150E4280: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x150E4284: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x150E4288: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x150E428C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150E4290: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x150E4294: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x150E4298: addiu       $v0, $v0, -0x6610
    ctx->r2 = ADD32(ctx->r2, -0X6610);
    // 0x150E429C: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x150E42A0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150E42A4: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x150E42A8: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x150E42AC: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x150E42B0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150E42B4: sub.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x150E42B8: mfc1        $v1, $f18
    ctx->r3 = (int32_t)ctx->f18.u32l;
    // 0x150E42BC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150E42C0: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x150E42C4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150E42C8: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x150E42CC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x150E42D0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150E42D4: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150E42D8: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x150E42DC: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x150E42E0: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x150E42E4: sh          $a0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r4;
    // 0x150E42E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150E42EC: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x150E42F0: jr          $ra
    // 0x150E42F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x150E42F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_16000304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16000304: jr          $ra
    // 0x16000308: nop

    return;
    return;
    // 0x16000308: nop

;}
RECOMP_FUNC void func_10012F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10012F94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x10012F98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x10012F9C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x10012FA0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x10012FA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x10012FA8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10012FAC: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x10012FB0: addiu       $t7, $zero, 0x3E80
    ctx->r15 = ADD32(0, 0X3E80);
    // 0x10012FB4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x10012FB8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x10012FBC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x10012FC0: lbu         $s0, 0x4($t8)
    ctx->r16 = MEM_BU(ctx->r24, 0X4);
    // 0x10012FC4: beq         $s0, $at, L_10012FE0
    if (ctx->r16 == ctx->r1) {
        // 0x10012FC8: nop
    
            goto L_10012FE0;
    }
    // 0x10012FC8: nop

    // 0x10012FCC: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x10012FD0: beq         $s0, $at, L_100130E4
    if (ctx->r16 == ctx->r1) {
        // 0x10012FD4: nop
    
            goto L_100130E4;
    }
    // 0x10012FD4: nop

    // 0x10012FD8: b           L_100131AC
    // 0x10012FDC: nop

        goto L_100131AC;
    // 0x10012FDC: nop

L_10012FE0:
    // 0x10012FE0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x10012FE4: lhu         $t0, 0x24($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X24);
    // 0x10012FE8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x10012FEC: sh          $t1, 0x24($t9)
    MEM_H(0X24, ctx->r25) = ctx->r9;
    // 0x10012FF0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x10012FF4: lhu         $t3, 0x24($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X24);
    // 0x10012FF8: lhu         $t4, 0x22($t2)
    ctx->r12 = MEM_HU(ctx->r10, 0X22);
    // 0x10012FFC: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x10013000: bne         $at, $zero, L_10013010
    if (ctx->r1 != 0) {
        // 0x10013004: nop
    
            goto L_10013010;
    }
    // 0x10013004: nop

    // 0x10013008: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001300C: sh          $zero, 0x24($t5)
    MEM_H(0X24, ctx->r13) = 0;
L_10013010:
    // 0x10013010: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x10013014: lhu         $t7, 0x24($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X24);
    // 0x10013018: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1001301C: bgez        $t7, L_10013034
    if (SIGNED(ctx->r15) >= 0) {
        // 0x10013020: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_10013034;
    }
    // 0x10013020: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x10013024: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x10013028: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1001302C: nop

    // 0x10013030: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_10013034:
    // 0x10013034: lhu         $t8, 0x22($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X22);
    // 0x10013038: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x1001303C: bgez        $t8, L_10013054
    if (SIGNED(ctx->r24) >= 0) {
        // 0x10013040: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_10013054;
    }
    // 0x10013040: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x10013044: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x10013048: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1001304C: nop

    // 0x10013050: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_10013054:
    // 0x10013054: div.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x10013058: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x1001305C: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10013060: lwc1        $f10, -0x3BAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3BAC);
    // 0x10013064: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x10013068: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1001306C: jal         0x15047D60
    // 0x10013070: nop

    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x10013070: nop

    after_0:
    // 0x10013074: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x10013078: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x1001307C: lbu         $t1, 0x28($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X28);
    // 0x10013080: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x10013084: bgez        $t1, L_1001309C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x10013088: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_1001309C;
    }
    // 0x10013088: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1001308C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x10013090: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10013094: nop

    // 0x10013098: add.s       $f6, $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f16.fl;
L_1001309C:
    // 0x1001309C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x100130A0: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x100130A4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x100130A8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x100130AC: lbu         $t2, 0x29($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X29);
    // 0x100130B0: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x100130B4: bgez        $t2, L_100130CC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x100130B8: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_100130CC;
    }
    // 0x100130B8: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x100130BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x100130C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x100130C4: nop

    // 0x100130C8: add.s       $f18, $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f16.fl;
L_100130CC:
    // 0x100130CC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x100130D0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x100130D4: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x100130D8: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x100130DC: b           L_100131B4
    // 0x100130E0: nop

        goto L_100131B4;
    // 0x100130E0: nop

L_100130E4:
    // 0x100130E4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x100130E8: lhu         $t5, 0x24($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X24);
    // 0x100130EC: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x100130F0: sh          $t7, 0x24($t4)
    MEM_H(0X24, ctx->r12) = ctx->r15;
    // 0x100130F4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x100130F8: lhu         $t8, 0x24($t6)
    ctx->r24 = MEM_HU(ctx->r14, 0X24);
    // 0x100130FC: lhu         $t0, 0x22($t6)
    ctx->r8 = MEM_HU(ctx->r14, 0X22);
    // 0x10013100: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x10013104: bne         $at, $zero, L_10013114
    if (ctx->r1 != 0) {
        // 0x10013108: nop
    
            goto L_10013114;
    }
    // 0x10013108: nop

    // 0x1001310C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x10013110: sh          $zero, 0x24($t1)
    MEM_H(0X24, ctx->r9) = 0;
L_10013114:
    // 0x10013114: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x10013118: lhu         $t2, 0x24($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X24);
    // 0x1001311C: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x10013120: bgez        $t2, L_10013138
    if (SIGNED(ctx->r10) >= 0) {
        // 0x10013124: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_10013138;
    }
    // 0x10013124: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x10013128: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1001312C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x10013130: nop

    // 0x10013134: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_10013138:
    // 0x10013138: lhu         $t3, 0x22($t9)
    ctx->r11 = MEM_HU(ctx->r25, 0X22);
    // 0x1001313C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x10013140: bgez        $t3, L_10013158
    if (SIGNED(ctx->r11) >= 0) {
        // 0x10013144: cvt.s.w     $f6, $f18
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
            goto L_10013158;
    }
    // 0x10013144: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x10013148: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1001314C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x10013150: nop

    // 0x10013154: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_10013158:
    // 0x10013158: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1001315C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x10013160: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x10013164: lwc1        $f18, -0x3BA8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3BA8);
    // 0x10013168: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1001316C: mul.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x10013170: jal         0x15047D60
    // 0x10013174: nop

    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x10013174: nop

    after_1:
    // 0x10013178: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x1001317C: lwc1        $f4, 0x28($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X28);
    // 0x10013180: mul.s       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x10013184: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x10013188: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x1001318C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x10013190: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x10013194: jal         0x10019AB0
    // 0x10013198: nop

    alCents2Ratio(rdram, ctx);
        goto after_2;
    // 0x10013198: nop

    after_2:
    // 0x1001319C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x100131A0: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
    // 0x100131A4: b           L_100131B4
    // 0x100131A8: nop

        goto L_100131B4;
    // 0x100131A8: nop

L_100131AC:
    // 0x100131AC: b           L_100131B4
    // 0x100131B0: nop

        goto L_100131B4;
    // 0x100131B0: nop

L_100131B4:
    // 0x100131B4: b           L_100131C4
    // 0x100131B8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
        goto L_100131C4;
    // 0x100131B8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x100131BC: b           L_100131C4
    // 0x100131C0: nop

        goto L_100131C4;
    // 0x100131C0: nop

L_100131C4:
    // 0x100131C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x100131C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x100131CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x100131D0: jr          $ra
    // 0x100131D4: nop

    return;
    return;
    // 0x100131D4: nop

;}
RECOMP_FUNC void func_16001338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001338: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1600133C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x16001340: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x16001344: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x16001348: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x1600134C: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x16001350: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x16001354: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x16001358: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x1600135C: andi        $t9, $a0, 0xF8
    ctx->r25 = ctx->r4 & 0XF8;
    // 0x16001360: andi        $t1, $a1, 0xF8
    ctx->r9 = ctx->r5 & 0XF8;
    // 0x16001364: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x16001368: sll         $t0, $t9, 8
    ctx->r8 = S32(ctx->r25 << 8);
    // 0x1600136C: andi        $t4, $a2, 0xF8
    ctx->r12 = ctx->r6 & 0XF8;
    // 0x16001370: sra         $t5, $t4, 2
    ctx->r13 = S32(SIGNED(ctx->r12) >> 2);
    // 0x16001374: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x16001378: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x1600137C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x16001380: lui         $at, 0x1600
    ctx->r1 = S32(0X1600 << 16);
    // 0x16001384: sh          $t7, 0x388C($at)
    MEM_H(0X388C, ctx->r1) = ctx->r15;
    // 0x16001388: jr          $ra
    // 0x1600138C: nop

    return;
    return;
    // 0x1600138C: nop

;}
RECOMP_FUNC void func_15128774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15128774: lwc1        $f4, 0x180($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X180);
    // 0x15128778: lw          $t6, 0x3D0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3D0);
    // 0x1512877C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x15128780: swc1        $f4, 0x35C($a0)
    MEM_W(0X35C, ctx->r4) = ctx->f4.u32l;
    // 0x15128784: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x15128788: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512878C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15128790: swc1        $f0, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f0.u32l;
    // 0x15128794: swc1        $f0, 0x304($a0)
    MEM_W(0X304, ctx->r4) = ctx->f0.u32l;
    // 0x15128798: lwc1        $f0, 0x18($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X18);
    // 0x1512879C: lw          $t7, 0x3D4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3D4);
    // 0x151287A0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151287A4: swc1        $f0, 0x2FC($a0)
    MEM_W(0X2FC, ctx->r4) = ctx->f0.u32l;
    // 0x151287A8: swc1        $f0, 0x308($a0)
    MEM_W(0X308, ctx->r4) = ctx->f0.u32l;
    // 0x151287AC: lwc1        $f0, 0x1C($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x151287B0: swc1        $f0, 0x300($a0)
    MEM_W(0X300, ctx->r4) = ctx->f0.u32l;
    // 0x151287B4: swc1        $f0, 0x30C($a0)
    MEM_W(0X30C, ctx->r4) = ctx->f0.u32l;
    // 0x151287B8: lwc1        $f6, 0x40($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X40);
    // 0x151287BC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x151287C0: swc1        $f10, 0x37C($a0)
    MEM_W(0X37C, ctx->r4) = ctx->f10.u32l;
    // 0x151287C4: lwc1        $f16, 0x35AC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X35AC);
    // 0x151287C8: swc1        $f16, 0x18C($t7)
    MEM_W(0X18C, ctx->r15) = ctx->f16.u32l;
    // 0x151287CC: sb          $t8, 0x23C($a0)
    MEM_B(0X23C, ctx->r4) = ctx->r24;
    // 0x151287D0: jr          $ra
    // 0x151287D4: nop

    return;
    return;
    // 0x151287D4: nop

;}
RECOMP_FUNC void func_151D747C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D747C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D7480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D7484: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151D7488: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x151D748C: lbu         $t6, 0x3B($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3B);
    // 0x151D7490: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x151D7494: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x151D7498: jal         0x151494E0
    // 0x151D749C: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    func_151494E0(rdram, ctx);
        goto after_0;
    // 0x151D749C: sb          $t6, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x151D74A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D74A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151D74A8: jr          $ra
    // 0x151D74AC: nop

    return;
    return;
    // 0x151D74AC: nop

;}
RECOMP_FUNC void func_151D6E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D6E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D6E64: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151D6E68: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151D6E6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151D6E70: jal         0x15144AA8
    // 0x151D6E74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15144AA8(rdram, ctx);
        goto after_0;
    // 0x151D6E74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x151D6E78: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x151D6E7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151D6E80: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151D6E84: addiu       $t0, $t0, -0x1640
    ctx->r8 = ADD32(ctx->r8, -0X1640);
    // 0x151D6E88: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x151D6E8C: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6E90: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151D6E94: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x151D6E98: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x151D6E9C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x151D6EA0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x151D6EA4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x151D6EA8: jal         0x150A8050
    // 0x151D6EAC: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    func_150A8050(rdram, ctx);
        goto after_1;
    // 0x151D6EAC: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    after_1:
    // 0x151D6EB0: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151D6EB4: lw          $t8, 0x4C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4C);
    // 0x151D6EB8: addiu       $t0, $t0, -0x1640
    ctx->r8 = ADD32(ctx->r8, -0X1640);
    // 0x151D6EBC: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6EC0: lwc1        $f8, 0x14($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X14);
    // 0x151D6EC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151D6EC8: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x151D6ECC: lwc1        $f0, -0x4D88($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D88);
    // 0x151D6ED0: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x151D6ED4: swc1        $f8, 0xAC($t2)
    MEM_W(0XAC, ctx->r10) = ctx->f8.u32l;
    // 0x151D6ED8: lw          $t3, 0x4C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4C);
    // 0x151D6EDC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x151D6EE0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151D6EE4: lwc1        $f10, 0x18($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X18);
    // 0x151D6EE8: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6EEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D6EF0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x151D6EF4: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x151D6EF8: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x151D6EFC: swc1        $f18, 0xB0($t6)
    MEM_W(0XB0, ctx->r14) = ctx->f18.u32l;
    // 0x151D6F00: lw          $t7, 0x4C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4C);
    // 0x151D6F04: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6F08: lwc1        $f4, 0x1C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x151D6F0C: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x151D6F10: addu        $t1, $s0, $t9
    ctx->r9 = ADD32(ctx->r16, ctx->r25);
    // 0x151D6F14: swc1        $f4, 0xB4($t1)
    MEM_W(0XB4, ctx->r9) = ctx->f4.u32l;
    // 0x151D6F18: lbu         $t2, 0x0($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6F1C: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x151D6F20: addu        $v1, $s0, $t3
    ctx->r3 = ADD32(ctx->r16, ctx->r11);
    // 0x151D6F24: lwc1        $f6, 0x7C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X7C);
    // 0x151D6F28: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151D6F2C: swc1        $f8, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->f8.u32l;
    // 0x151D6F30: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6F34: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x151D6F38: addu        $v1, $s0, $t5
    ctx->r3 = ADD32(ctx->r16, ctx->r13);
    // 0x151D6F3C: lwc1        $f10, 0x80($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X80);
    // 0x151D6F40: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151D6F44: swc1        $f16, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->f16.u32l;
    // 0x151D6F48: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6F4C: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x151D6F50: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x151D6F54: lwc1        $f18, 0x84($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X84);
    // 0x151D6F58: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151D6F5C: swc1        $f4, 0x84($v1)
    MEM_W(0X84, ctx->r3) = ctx->f4.u32l;
    // 0x151D6F60: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6F64: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x151D6F68: addu        $v1, $s0, $t9
    ctx->r3 = ADD32(ctx->r16, ctx->r25);
    // 0x151D6F6C: lwc1        $f6, 0x8C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8C);
    // 0x151D6F70: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151D6F74: swc1        $f8, 0x8C($v1)
    MEM_W(0X8C, ctx->r3) = ctx->f8.u32l;
    // 0x151D6F78: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6F7C: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x151D6F80: addu        $v1, $s0, $t2
    ctx->r3 = ADD32(ctx->r16, ctx->r10);
    // 0x151D6F84: lwc1        $f10, 0x90($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X90);
    // 0x151D6F88: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151D6F8C: swc1        $f16, 0x90($v1)
    MEM_W(0X90, ctx->r3) = ctx->f16.u32l;
    // 0x151D6F90: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6F94: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x151D6F98: addu        $v1, $s0, $t4
    ctx->r3 = ADD32(ctx->r16, ctx->r12);
    // 0x151D6F9C: lwc1        $f18, 0x94($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X94);
    // 0x151D6FA0: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151D6FA4: swc1        $f4, 0x94($v1)
    MEM_W(0X94, ctx->r3) = ctx->f4.u32l;
    // 0x151D6FA8: lbu         $t5, 0x0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6FAC: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x151D6FB0: addu        $v1, $s0, $t6
    ctx->r3 = ADD32(ctx->r16, ctx->r14);
    // 0x151D6FB4: lwc1        $f6, 0x9C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X9C);
    // 0x151D6FB8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151D6FBC: swc1        $f8, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->f8.u32l;
    // 0x151D6FC0: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6FC4: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x151D6FC8: addu        $v1, $s0, $t8
    ctx->r3 = ADD32(ctx->r16, ctx->r24);
    // 0x151D6FCC: lwc1        $f10, 0xA0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XA0);
    // 0x151D6FD0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x151D6FD4: swc1        $f16, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->f16.u32l;
    // 0x151D6FD8: lbu         $t9, 0x0($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X0);
    // 0x151D6FDC: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x151D6FE0: addu        $v1, $s0, $t1
    ctx->r3 = ADD32(ctx->r16, ctx->r9);
    // 0x151D6FE4: lwc1        $f18, 0xA4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0XA4);
    // 0x151D6FE8: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151D6FEC: swc1        $f4, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->f4.u32l;
    // 0x151D6FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151D6FF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x151D6FF8: jr          $ra
    // 0x151D6FFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x151D6FFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void sinf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15047D60: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x15047D64: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x15047D68: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x15047D6C: andi        $t6, $v1, 0x1FF
    ctx->r14 = ctx->r3 & 0X1FF;
    // 0x15047D70: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x15047D74: beq         $at, $zero, L_15047DD8
    if (ctx->r1 == 0) {
        // 0x15047D78: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_15047DD8;
    }
    // 0x15047D78: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x15047D7C: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
    // 0x15047D80: bne         $at, $zero, L_15047DD0
    if (ctx->r1 != 0) {
        // 0x15047D84: lwc1        $f2, 0x0($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X0);
            goto L_15047DD0;
    }
    // 0x15047D84: lwc1        $f2, 0x0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X0);
    // 0x15047D88: mul.s       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15047D8C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x15047D90: addiu       $v1, $v1, -0x7270
    ctx->r3 = ADD32(ctx->r3, -0X7270);
    // 0x15047D94: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15047D98: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15047D9C: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15047DA0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15047DA4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15047DA8: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15047DAC: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15047DB0: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15047DB4: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15047DB8: add.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15047DBC: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x15047DC0: nop

    // 0x15047DC4: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15047DC8: jr          $ra
    // 0x15047DCC: add.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f2.fl;
    return;
    return;
    // 0x15047DCC: add.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f2.fl;
L_15047DD0:
    // 0x15047DD0: jr          $ra
    // 0x15047DD4: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    return;
    return;
    // 0x15047DD4: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
L_15047DD8:
    // 0x15047DD8: slti        $at, $v1, 0x136
    ctx->r1 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x15047DDC: beq         $at, $zero, L_15047ED8
    if (ctx->r1 == 0) {
        // 0x15047DE0: lwc1        $f6, 0x0($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
            goto L_15047ED8;
    }
    // 0x15047DE0: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x15047DE4: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15047DE8: lwc1        $f2, 0x0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X0);
    // 0x15047DEC: lwc1        $f18, 0x5EB0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5EB0);
    // 0x15047DF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15047DF4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15047DF8: mul.s       $f0, $f2, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x15047DFC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x15047E00: nop

    // 0x15047E04: bc1fl       L_15047E30
    if (!c1cs) {
        // 0x15047E08: mtc1        $at, $f16
        ctx->f16.u32l = ctx->r1;
            goto L_15047E30;
    }
    goto skip_0;
    // 0x15047E08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    skip_0:
    // 0x15047E0C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15047E10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15047E14: nop

    // 0x15047E18: add.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x15047E1C: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15047E20: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x15047E24: b           L_15047E48
    // 0x15047E28: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
        goto L_15047E48;
    // 0x15047E28: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x15047E2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
L_15047E30:
    // 0x15047E30: nop

    // 0x15047E34: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x15047E38: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x15047E3C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x15047E40: nop

    // 0x15047E44: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
L_15047E48:
    // 0x15047E48: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15047E4C: lwc1        $f6, 0x5EB4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5EB4);
    // 0x15047E50: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15047E54: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15047E58: lwc1        $f16, 0x5EB8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5EB8);
    // 0x15047E5C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x15047E60: addiu       $v1, $v1, -0x7270
    ctx->r3 = ADD32(ctx->r3, -0X7270);
    // 0x15047E64: lwc1        $f4, 0x10($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X10);
    // 0x15047E68: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15047E6C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x15047E70: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x15047E74: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15047E78: sub.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x15047E7C: sub.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x15047E80: lwc1        $f18, 0x8($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X8);
    // 0x15047E84: mul.s       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15047E88: nop

    // 0x15047E8C: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15047E90: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15047E94: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x15047E98: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x15047E9C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15047EA0: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x15047EA4: bne         $t9, $zero, L_15047EC0
    if (ctx->r25 != 0) {
        // 0x15047EA8: add.s       $f14, $f6, $f8
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
            goto L_15047EC0;
    }
    // 0x15047EA8: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15047EAC: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x15047EB0: nop

    // 0x15047EB4: mul.s       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x15047EB8: jr          $ra
    // 0x15047EBC: add.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f2.fl;
    return;
    return;
    // 0x15047EBC: add.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f2.fl;
L_15047EC0:
    // 0x15047EC0: mul.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x15047EC4: nop

    // 0x15047EC8: mul.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x15047ECC: add.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x15047ED0: jr          $ra
    // 0x15047ED4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    return;
    // 0x15047ED4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_15047ED8:
    // 0x15047ED8: c.eq.s      $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f6.fl == ctx->f6.fl;
    // 0x15047EDC: lui         $at, 0x8008
    ctx->r1 = S32(0X8008 << 16);
    // 0x15047EE0: bc1t        L_15047EF4
    if (c1cs) {
        // 0x15047EE4: nop
    
            goto L_15047EF4;
    }
    // 0x15047EE4: nop

    // 0x15047EE8: lui         $at, 0x8003
    ctx->r1 = S32(0X8003 << 16);
    // 0x15047EEC: jr          $ra
    // 0x15047EF0: lwc1        $f0, -0x36E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X36E0);
    return;
    return;
    // 0x15047EF0: lwc1        $f0, -0x36E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X36E0);
L_15047EF4:
    // 0x15047EF4: lwc1        $f0, 0x5EBC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5EBC);
    // 0x15047EF8: jr          $ra
    // 0x15047EFC: nop

    return;
    return;
    // 0x15047EFC: nop

;}
RECOMP_FUNC void func_15075F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15075F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15075F48: jal         0x15075548
    // 0x15075F4C: nop

    func_15075548(rdram, ctx);
        goto after_0;
    // 0x15075F4C: nop

    after_0:
    // 0x15075F50: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15075F54: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15075F58: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x15075F5C: sb          $t6, 0x223($t7)
    MEM_B(0X223, ctx->r15) = ctx->r14;
    // 0x15075F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15075F64: jr          $ra
    // 0x15075F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15075F68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_1501EA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501EA18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1501EA1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1501EA20: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x1501EA24: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x1501EA28: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x1501EA2C: addiu       $s0, $s0, 0x3600
    ctx->r16 = ADD32(ctx->r16, 0X3600);
    // 0x1501EA30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1501EA34: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1501EA38: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1501EA3C: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x1501EA40: lw          $s1, -0x4010($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X4010);
    // 0x1501EA44: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x1501EA48: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1501EA4C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x1501EA50: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x1501EA54: lwc1        $f4, 0x2F8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X2F8);
    // 0x1501EA58: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x1501EA5C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x1501EA60: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x1501EA64: lwc1        $f6, 0x2FC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2FC);
    // 0x1501EA68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1501EA6C: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x1501EA70: lwc1        $f8, 0x300($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X300);
    // 0x1501EA74: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x1501EA78: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x1501EA7C: lwc1        $f10, 0x388($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X388);
    // 0x1501EA80: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x1501EA84: lwc1        $f16, 0x37C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X37C);
    // 0x1501EA88: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
    // 0x1501EA8C: lbu         $t8, 0x3671($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3671);
    // 0x1501EA90: bne         $t8, $zero, L_1501EB0C
    if (ctx->r24 != 0) {
        // 0x1501EA94: nop
    
            goto L_1501EB0C;
    }
    // 0x1501EA94: nop

    // 0x1501EA98: jal         0x1512D560
    // 0x1501EA9C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_1512D560(rdram, ctx);
        goto after_0;
    // 0x1501EA9C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x1501EAA0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EAA4: lwc1        $f0, 0x3674($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3674);
    // 0x1501EAA8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501EAAC: lwc1        $f18, 0x69C4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X69C4);
    // 0x1501EAB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1501EAB4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x1501EAB8: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x1501EABC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1501EAC0: bc1t        L_1501EAD0
    if (c1cs) {
        // 0x1501EAC4: nop
    
            goto L_1501EAD0;
    }
    // 0x1501EAC4: nop

    // 0x1501EAC8: jal         0x1512D560
    // 0x1501EACC: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    func_1512D560(rdram, ctx);
        goto after_1;
    // 0x1501EACC: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    after_1:
L_1501EAD0:
    // 0x1501EAD0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EAD4: lwc1        $f0, 0x3678($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3678);
    // 0x1501EAD8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501EADC: lwc1        $f4, 0x69C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X69C8);
    // 0x1501EAE0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1501EAE4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1501EAE8: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x1501EAEC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x1501EAF0: bc1t        L_1501EB0C
    if (c1cs) {
        // 0x1501EAF4: nop
    
            goto L_1501EB0C;
    }
    // 0x1501EAF4: nop

    // 0x1501EAF8: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x1501EAFC: lw          $t9, 0x367C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X367C);
    // 0x1501EB00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x1501EB04: jal         0x1512D560
    // 0x1501EB08: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    func_1512D560(rdram, ctx);
        goto after_2;
    // 0x1501EB08: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    after_2:
L_1501EB0C:
    // 0x1501EB0C: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1501EB10: lbu         $t0, 0x35C2($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X35C2);
    // 0x1501EB14: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x1501EB18: bnel        $t0, $zero, L_1501EB60
    if (ctx->r8 != 0) {
        // 0x1501EB1C: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_1501EB60;
    }
    goto skip_0;
    // 0x1501EB1C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x1501EB20: lbu         $t1, 0x3671($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X3671);
    // 0x1501EB24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501EB28: addiu       $v0, $v0, 0x3680
    ctx->r2 = ADD32(ctx->r2, 0X3680);
    // 0x1501EB2C: bnel        $t1, $zero, L_1501EB60
    if (ctx->r9 != 0) {
        // 0x1501EB30: lw          $t3, 0x28($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X28);
            goto L_1501EB60;
    }
    goto skip_1;
    // 0x1501EB30: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x1501EB34: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x1501EB38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1501EB3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1501EB40: bnel        $t2, $zero, L_1501EB5C
    if (ctx->r10 != 0) {
        // 0x1501EB44: sb          $zero, 0x0($v0)
        MEM_B(0X0, ctx->r2) = 0;
            goto L_1501EB5C;
    }
    goto skip_2;
    // 0x1501EB44: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    skip_2:
    // 0x1501EB48: jal         0x1512D560
    // 0x1501EB4C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    func_1512D560(rdram, ctx);
        goto after_3;
    // 0x1501EB4C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x1501EB50: b           L_1501EB60
    // 0x1501EB54: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
        goto L_1501EB60;
    // 0x1501EB54: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x1501EB58: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_1501EB5C:
    // 0x1501EB5C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
L_1501EB60:
    // 0x1501EB60: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1501EB64: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x1501EB68: lbu         $t4, 0x365A($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X365A);
    // 0x1501EB6C: bne         $t4, $zero, L_1501EB7C
    if (ctx->r12 != 0) {
        // 0x1501EB70: nop
    
            goto L_1501EB7C;
    }
    // 0x1501EB70: nop

    // 0x1501EB74: jal         0x150228E4
    // 0x1501EB78: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_150228E4(rdram, ctx);
        goto after_4;
    // 0x1501EB78: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_4:
L_1501EB7C:
    // 0x1501EB7C: jal         0x150227BC
    // 0x1501EB80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_150227BC(rdram, ctx);
        goto after_5;
    // 0x1501EB80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x1501EB84: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1501EB88: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1501EB8C: addiu       $s1, $s1, 0x121C
    ctx->r17 = ADD32(ctx->r17, 0X121C);
    // 0x1501EB90: addiu       $s0, $s0, -0x3D30
    ctx->r16 = ADD32(ctx->r16, -0X3D30);
    // 0x1501EB94: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
L_1501EB98:
    // 0x1501EB98: beql        $t5, $zero, L_1501EBC0
    if (ctx->r13 == 0) {
        // 0x1501EB9C: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1501EBC0;
    }
    goto skip_3;
    // 0x1501EB9C: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_3:
    // 0x1501EBA0: jal         0x150229E4
    // 0x1501EBA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150229E4(rdram, ctx);
        goto after_6;
    // 0x1501EBA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x1501EBA8: beql        $v0, $zero, L_1501EBC0
    if (ctx->r2 == 0) {
        // 0x1501EBAC: addiu       $s0, $s0, 0x32C
        ctx->r16 = ADD32(ctx->r16, 0X32C);
            goto L_1501EBC0;
    }
    goto skip_4;
    // 0x1501EBAC: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
    skip_4:
    // 0x1501EBB0: sb          $zero, 0xA4($s0)
    MEM_B(0XA4, ctx->r16) = 0;
    // 0x1501EBB4: swc1        $f20, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->f20.u32l;
    // 0x1501EBB8: swc1        $f20, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f20.u32l;
    // 0x1501EBBC: addiu       $s0, $s0, 0x32C
    ctx->r16 = ADD32(ctx->r16, 0X32C);
L_1501EBC0:
    // 0x1501EBC0: bnel        $s0, $s1, L_1501EB98
    if (ctx->r16 != ctx->r17) {
        // 0x1501EBC4: lw          $t5, 0x0($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X0);
            goto L_1501EB98;
    }
    goto skip_5;
    // 0x1501EBC4: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    skip_5:
    // 0x1501EBC8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1501EBCC: lbu         $t6, 0x35C2($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35C2);
    // 0x1501EBD0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1501EBD4: addiu       $v0, $v0, 0x358C
    ctx->r2 = ADD32(ctx->r2, 0X358C);
    // 0x1501EBD8: bne         $t6, $zero, L_1501EC20
    if (ctx->r14 != 0) {
        // 0x1501EBDC: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_1501EC20;
    }
    // 0x1501EBDC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1501EBE0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1501EBE4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EBE8: sb          $t7, 0x3A58($at)
    MEM_B(0X3A58, ctx->r1) = ctx->r15;
    // 0x1501EBEC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EBF0: sb          $zero, 0x3663($at)
    MEM_B(0X3663, ctx->r1) = 0;
    // 0x1501EBF4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EBF8: lwc1        $f6, 0x35A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X35A0);
    // 0x1501EBFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501EC00: addiu       $v1, $v1, 0x3598
    ctx->r3 = ADD32(ctx->r3, 0X3598);
    // 0x1501EC04: swc1        $f6, 0x3594($at)
    MEM_W(0X3594, ctx->r1) = ctx->f6.u32l;
    // 0x1501EC08: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x1501EC0C: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x1501EC10: lh          $t0, 0x4($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X4);
    // 0x1501EC14: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x1501EC18: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x1501EC1C: sh          $t0, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r8;
L_1501EC20:
    // 0x1501EC20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1501EC24: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x1501EC28: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1501EC2C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1501EC30: jr          $ra
    // 0x1501EC34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1501EC34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_1500E738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500E738: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x1500E73C: lw          $v0, 0x2FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2FA0);
    // 0x1500E740: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E744: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x1500E748: beq         $v0, $zero, L_1500E77C
    if (ctx->r2 == 0) {
        // 0x1500E74C: nop
    
            goto L_1500E77C;
    }
    // 0x1500E74C: nop

    // 0x1500E750: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1500E754: beq         $v0, $at, L_1500E794
    if (ctx->r2 == ctx->r1) {
        // 0x1500E758: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_1500E794;
    }
    // 0x1500E758: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x1500E75C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1500E760: beq         $v0, $at, L_1500E7B0
    if (ctx->r2 == ctx->r1) {
        // 0x1500E764: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_1500E7B0;
    }
    // 0x1500E764: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1500E768: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1500E76C: beq         $v0, $at, L_1500E7B0
    if (ctx->r2 == ctx->r1) {
        // 0x1500E770: nop
    
            goto L_1500E7B0;
    }
    // 0x1500E770: nop

    // 0x1500E774: b           L_1500E7C8
    // 0x1500E778: nop

        goto L_1500E7C8;
    // 0x1500E778: nop

L_1500E77C:
    // 0x1500E77C: sb          $zero, -0x35E0($at)
    MEM_B(-0X35E0, ctx->r1) = 0;
    // 0x1500E780: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1500E784: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500E788: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E78C: b           L_1500E7C8
    // 0x1500E790: swc1        $f4, -0x35DC($at)
    MEM_W(-0X35DC, ctx->r1) = ctx->f4.u32l;
        goto L_1500E7C8;
    // 0x1500E790: swc1        $f4, -0x35DC($at)
    MEM_W(-0X35DC, ctx->r1) = ctx->f4.u32l;
L_1500E794:
    // 0x1500E794: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E798: sb          $t6, -0x35E0($at)
    MEM_B(-0X35E0, ctx->r1) = ctx->r14;
    // 0x1500E79C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1500E7A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500E7A4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E7A8: b           L_1500E7C8
    // 0x1500E7AC: swc1        $f6, -0x35DC($at)
    MEM_W(-0X35DC, ctx->r1) = ctx->f6.u32l;
        goto L_1500E7C8;
    // 0x1500E7AC: swc1        $f6, -0x35DC($at)
    MEM_W(-0X35DC, ctx->r1) = ctx->f6.u32l;
L_1500E7B0:
    // 0x1500E7B0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E7B4: sb          $t7, -0x35E0($at)
    MEM_B(-0X35E0, ctx->r1) = ctx->r15;
    // 0x1500E7B8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1500E7BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1500E7C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E7C4: swc1        $f8, -0x35DC($at)
    MEM_W(-0X35DC, ctx->r1) = ctx->f8.u32l;
L_1500E7C8:
    // 0x1500E7C8: lb          $t8, -0x274($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X274);
    // 0x1500E7CC: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x1500E7D0: sltiu       $at, $t9, 0x10
    ctx->r1 = ctx->r25 < 0X10 ? 1 : 0;
    // 0x1500E7D4: beq         $at, $zero, L_1500E870
    if (ctx->r1 == 0) {
        // 0x1500E7D8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_1500E870;
    }
    // 0x1500E7D8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x1500E7DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1500E7E0: addu        $at, $at, $t9
    gpr jr_addend_1500E7E8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1500E7E4: lw          $t9, 0x61D0($at)
    ctx->r25 = ADD32(ctx->r1, 0X61D0);
    // 0x1500E7E8: jr          $t9
    // 0x1500E7EC: nop

    switch (jr_addend_1500E7E8 >> 2) {
        case 0: goto L_1500E870; break;
        case 1: goto L_1500E7F0; break;
        case 2: goto L_1500E810; break;
        case 3: goto L_1500E810; break;
        case 4: goto L_1500E830; break;
        case 5: goto L_1500E830; break;
        case 6: goto L_1500E830; break;
        case 7: goto L_1500E830; break;
        case 8: goto L_1500E850; break;
        case 9: goto L_1500E850; break;
        case 10: goto L_1500E850; break;
        case 11: goto L_1500E850; break;
        case 12: goto L_1500E850; break;
        case 13: goto L_1500E850; break;
        case 14: goto L_1500E850; break;
        case 15: goto L_1500E850; break;
        default: switch_error(__func__, 0x1500E7E8, 0x800961D0);
    }
    // 0x1500E7EC: nop

L_1500E7F0:
    // 0x1500E7F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1500E7F4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E7F8: sb          $t0, -0x35D8($at)
    MEM_B(-0X35D8, ctx->r1) = ctx->r8;
    // 0x1500E7FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x1500E800: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500E804: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E808: jr          $ra
    // 0x1500E80C: swc1        $f10, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f10.u32l;
    return;
    return;
    // 0x1500E80C: swc1        $f10, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f10.u32l;
L_1500E810:
    // 0x1500E810: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x1500E814: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E818: sb          $t1, -0x35D8($at)
    MEM_B(-0X35D8, ctx->r1) = ctx->r9;
    // 0x1500E81C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x1500E820: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1500E824: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E828: jr          $ra
    // 0x1500E82C: swc1        $f16, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f16.u32l;
    return;
    return;
    // 0x1500E82C: swc1        $f16, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f16.u32l;
L_1500E830:
    // 0x1500E830: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x1500E834: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E838: sb          $t2, -0x35D8($at)
    MEM_B(-0X35D8, ctx->r1) = ctx->r10;
    // 0x1500E83C: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x1500E840: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1500E844: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E848: jr          $ra
    // 0x1500E84C: swc1        $f18, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f18.u32l;
    return;
    return;
    // 0x1500E84C: swc1        $f18, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f18.u32l;
L_1500E850:
    // 0x1500E850: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x1500E854: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E858: sb          $t3, -0x35D8($at)
    MEM_B(-0X35D8, ctx->r1) = ctx->r11;
    // 0x1500E85C: lui         $at, 0x3D80
    ctx->r1 = S32(0X3D80 << 16);
    // 0x1500E860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500E864: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E868: jr          $ra
    // 0x1500E86C: swc1        $f4, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f4.u32l;
    return;
    return;
    // 0x1500E86C: swc1        $f4, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f4.u32l;
L_1500E870:
    // 0x1500E870: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E874: sb          $zero, -0x35D8($at)
    MEM_B(-0X35D8, ctx->r1) = 0;
    // 0x1500E878: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1500E87C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1500E880: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500E884: swc1        $f6, -0x35D4($at)
    MEM_W(-0X35D4, ctx->r1) = ctx->f6.u32l;
    // 0x1500E888: jr          $ra
    // 0x1500E88C: nop

    return;
    return;
    // 0x1500E88C: nop

;}
RECOMP_FUNC void func_1507A6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507A6FC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1507A700: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1507A704: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x1507A708: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1507A70C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x1507A710: lhu         $v0, -0x18B8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X18B8);
    // 0x1507A714: jr          $ra
    // 0x1507A718: nop

    return;
    return;
    // 0x1507A718: nop

;}
RECOMP_FUNC void func_1500B714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500B714: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1500B718: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x1500B71C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x1500B720: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1500B724: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x1500B728: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1500B72C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x1500B730: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x1500B734: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x1500B738: lh          $ra, 0x5A($sp)
    ctx->r31 = MEM_H(ctx->r29, 0X5A);
    // 0x1500B73C: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x1500B740: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x1500B744: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x1500B748: lw          $t0, 0x4($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X4);
    // 0x1500B74C: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x1500B750: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x1500B754: lh          $t6, 0x0($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X0);
    // 0x1500B758: or          $t1, $ra, $zero
    ctx->r9 = ctx->r31 | 0;
    // 0x1500B75C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1500B760: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x1500B764: div         $zero, $t7, $t5
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r13)));
    // 0x1500B768: bne         $t5, $zero, L_1500B774
    if (ctx->r13 != 0) {
        // 0x1500B76C: nop
    
            goto L_1500B774;
    }
    // 0x1500B76C: nop

    // 0x1500B770: break       7
    do_break(352368496);
L_1500B774:
    // 0x1500B774: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1500B778: bne         $t5, $at, L_1500B78C
    if (ctx->r13 != ctx->r1) {
        // 0x1500B77C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1500B78C;
    }
    // 0x1500B77C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1500B780: bne         $t7, $at, L_1500B78C
    if (ctx->r15 != ctx->r1) {
        // 0x1500B784: nop
    
            goto L_1500B78C;
    }
    // 0x1500B784: nop

    // 0x1500B788: break       6
    do_break(352368520);
L_1500B78C:
    // 0x1500B78C: lh          $t8, 0x2($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X2);
    // 0x1500B790: lh          $t9, 0x2($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X2);
    // 0x1500B794: lh          $t7, 0x2($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X2);
    // 0x1500B798: mflo        $t2
    ctx->r10 = lo;
    // 0x1500B79C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x1500B7A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1500B7A4: div         $zero, $t8, $t5
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r13)));
    // 0x1500B7A8: bne         $t5, $zero, L_1500B7B4
    if (ctx->r13 != 0) {
        // 0x1500B7AC: nop
    
            goto L_1500B7B4;
    }
    // 0x1500B7AC: nop

    // 0x1500B7B0: break       7
    do_break(352368560);
L_1500B7B4:
    // 0x1500B7B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1500B7B8: bne         $t5, $at, L_1500B7CC
    if (ctx->r13 != ctx->r1) {
        // 0x1500B7BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1500B7CC;
    }
    // 0x1500B7BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1500B7C0: bne         $t8, $at, L_1500B7CC
    if (ctx->r24 != ctx->r1) {
        // 0x1500B7C4: nop
    
            goto L_1500B7CC;
    }
    // 0x1500B7C4: nop

    // 0x1500B7C8: break       6
    do_break(352368584);
L_1500B7CC:
    // 0x1500B7CC: lh          $t9, 0x4($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X4);
    // 0x1500B7D0: lh          $t6, 0x4($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X4);
    // 0x1500B7D4: lh          $t8, 0x4($t0)
    ctx->r24 = MEM_H(ctx->r8, 0X4);
    // 0x1500B7D8: mflo        $t3
    ctx->r11 = lo;
    // 0x1500B7DC: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x1500B7E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x1500B7E4: div         $zero, $t9, $t5
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r13)));
    // 0x1500B7E8: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x1500B7EC: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1500B7F0: sll         $a3, $t2, 16
    ctx->r7 = S32(ctx->r10 << 16);
    // 0x1500B7F4: mflo        $t4
    ctx->r12 = lo;
    // 0x1500B7F8: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x1500B7FC: bne         $t5, $zero, L_1500B808
    if (ctx->r13 != 0) {
        // 0x1500B800: nop
    
            goto L_1500B808;
    }
    // 0x1500B800: nop

    // 0x1500B804: break       7
    do_break(352368644);
L_1500B808:
    // 0x1500B808: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1500B80C: bne         $t5, $at, L_1500B820
    if (ctx->r13 != ctx->r1) {
        // 0x1500B810: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1500B820;
    }
    // 0x1500B810: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1500B814: bne         $t9, $at, L_1500B820
    if (ctx->r25 != ctx->r1) {
        // 0x1500B818: nop
    
            goto L_1500B820;
    }
    // 0x1500B818: nop

    // 0x1500B81C: break       6
    do_break(352368668);
L_1500B820:
    // 0x1500B820: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x1500B824: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x1500B828: lbu         $t8, 0x5F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5F);
    // 0x1500B82C: sll         $t9, $t4, 16
    ctx->r25 = S32(ctx->r12 << 16);
    // 0x1500B830: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1500B834: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x1500B838: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x1500B83C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1500B840: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1500B844: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x1500B848: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x1500B84C: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x1500B850: sh          $t1, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r9;
    // 0x1500B854: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1500B858: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x1500B85C: jal         0x1500AF08
    // 0x1500B860: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_1500AF08(rdram, ctx);
        goto after_0;
    // 0x1500B860: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x1500B864: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1500B868: lui         $at, 0x427A
    ctx->r1 = S32(0X427A << 16);
    // 0x1500B86C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1500B870: andi        $t9, $ra, 0xFFFF
    ctx->r25 = ctx->r31 & 0XFFFF;
    // 0x1500B874: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1500B878: lhu         $t1, 0x56($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X56);
    // 0x1500B87C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x1500B880: bgez        $t9, L_1500B898
    if (SIGNED(ctx->r25) >= 0) {
        // 0x1500B884: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1500B898;
    }
    // 0x1500B884: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1500B888: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1500B88C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1500B890: nop

    // 0x1500B894: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1500B898:
    // 0x1500B898: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x1500B89C: addiu       $a0, $zero, 0x4D
    ctx->r4 = ADD32(0, 0X4D);
    // 0x1500B8A0: lh          $a1, 0x42($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X42);
    // 0x1500B8A4: lh          $a2, 0x3E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3E);
    // 0x1500B8A8: bc1f        L_1500B8B4
    if (!c1cs) {
        // 0x1500B8AC: lh          $a3, 0x3A($sp)
        ctx->r7 = MEM_H(ctx->r29, 0X3A);
            goto L_1500B8B4;
    }
    // 0x1500B8AC: lh          $a3, 0x3A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3A);
    // 0x1500B8B0: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
L_1500B8B4:
    // 0x1500B8B4: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x1500B8B8: sra         $t7, $t1, 3
    ctx->r15 = S32(SIGNED(ctx->r9) >> 3);
    // 0x1500B8BC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x1500B8C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1500B8C4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1500B8C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1500B8CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x1500B8D0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1500B8D4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x1500B8D8: jal         0x1000FA64
    // 0x1500B8DC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_1000FA64(rdram, ctx);
        goto after_1;
    // 0x1500B8DC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_1:
    // 0x1500B8E0: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x1500B8E4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1500B8E8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1500B8EC: jr          $ra
    // 0x1500B8F0: nop

    return;
    return;
    // 0x1500B8F0: nop

;}
RECOMP_FUNC void func_150DB630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DB630: lw          $t6, 0x120($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X120);
    // 0x150DB634: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x150DB638: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150DB63C: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x150DB640: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150DB644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150DB648: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150DB64C: nop

    // 0x150DB650: bc1fl       L_150DB664
    if (!c1cs) {
        // 0x150DB654: lw          $t8, 0x120($a0)
        ctx->r24 = MEM_W(ctx->r4, 0X120);
            goto L_150DB664;
    }
    goto skip_0;
    // 0x150DB654: lw          $t8, 0x120($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X120);
    skip_0:
    // 0x150DB658: b           L_150DB70C
    // 0x150DB65C: sb          $t7, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r15;
        goto L_150DB70C;
    // 0x150DB65C: sb          $t7, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r15;
    // 0x150DB660: lw          $t8, 0x120($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X120);
L_150DB664:
    // 0x150DB664: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x150DB668: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150DB66C: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x150DB670: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x150DB674: nop

    // 0x150DB678: bc1fl       L_150DB68C
    if (!c1cs) {
        // 0x150DB67C: cfc1        $t9, $FpcCsr
        ctx->r25 = get_cop1_cs();
            goto L_150DB68C;
    }
    goto skip_1;
    // 0x150DB67C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    skip_1:
    // 0x150DB680: b           L_150DB70C
    // 0x150DB684: sb          $zero, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = 0;
        goto L_150DB70C;
    // 0x150DB684: sb          $zero, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = 0;
    // 0x150DB688: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
L_150DB68C:
    // 0x150DB68C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150DB690: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150DB694: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x150DB698: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150DB69C: nop

    // 0x150DB6A0: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150DB6A4: beql        $t0, $zero, L_150DB6F4
    if (ctx->r8 == 0) {
        // 0x150DB6A8: mfc1        $t0, $f10
        ctx->r8 = (int32_t)ctx->f10.u32l;
            goto L_150DB6F4;
    }
    goto skip_2;
    // 0x150DB6A8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    skip_2:
    // 0x150DB6AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150DB6B0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x150DB6B4: sub.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x150DB6B8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150DB6BC: nop

    // 0x150DB6C0: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150DB6C4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150DB6C8: nop

    // 0x150DB6CC: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x150DB6D0: bne         $t0, $zero, L_150DB6E8
    if (ctx->r8 != 0) {
        // 0x150DB6D4: nop
    
            goto L_150DB6E8;
    }
    // 0x150DB6D4: nop

    // 0x150DB6D8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x150DB6DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150DB6E0: b           L_150DB700
    // 0x150DB6E4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_150DB700;
    // 0x150DB6E4: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_150DB6E8:
    // 0x150DB6E8: b           L_150DB700
    // 0x150DB6EC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_150DB700;
    // 0x150DB6EC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x150DB6F0: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
L_150DB6F4:
    // 0x150DB6F4: nop

    // 0x150DB6F8: bltz        $t0, L_150DB6E8
    if (SIGNED(ctx->r8) < 0) {
        // 0x150DB6FC: nop
    
            goto L_150DB6E8;
    }
    // 0x150DB6FC: nop

L_150DB700:
    // 0x150DB700: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x150DB704: sb          $t0, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r8;
    // 0x150DB708: nop

L_150DB70C:
    // 0x150DB70C: jr          $ra
    // 0x150DB710: nop

    return;
    return;
    // 0x150DB710: nop

;}
RECOMP_FUNC void func_1513EAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513EAD8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x1513EADC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1513EAE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1513EAE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1513EAE8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x1513EAEC: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x1513EAF0: addiu       $t6, $sp, 0x37
    ctx->r14 = ADD32(ctx->r29, 0X37);
    // 0x1513EAF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1513EAF8: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x1513EAFC: lh          $a1, 0x72($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X72);
    // 0x1513EB00: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1513EB04: jal         0x151D5D60
    // 0x1513EB08: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    func_151D5D60(rdram, ctx);
        goto after_0;
    // 0x1513EB08: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    after_0:
    // 0x1513EB0C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x1513EB10: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x1513EB14: beq         $v0, $zero, L_1513EB74
    if (ctx->r2 == 0) {
        // 0x1513EB18: sw          $v0, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r2;
            goto L_1513EB74;
    }
    // 0x1513EB18: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x1513EB1C: beq         $t7, $zero, L_1513EB5C
    if (ctx->r15 == 0) {
        // 0x1513EB20: lh          $t8, 0x72($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X72);
            goto L_1513EB5C;
    }
    // 0x1513EB20: lh          $t8, 0x72($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X72);
    // 0x1513EB24: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1513EB28: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x1513EB2C: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x1513EB30: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x1513EB34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1513EB38: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x1513EB3C: jal         0x10022EC0
    // 0x1513EB40: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1513EB40: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x1513EB44: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x1513EB48: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x1513EB4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x1513EB50: lw          $a0, 0x100($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X100);
    // 0x1513EB54: jal         0x10022EC0
    // 0x1513EB58: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1513EB58: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    after_2:
L_1513EB5C:
    // 0x1513EB5C: lh          $v1, 0x72($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X72);
    // 0x1513EB60: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1513EB64: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x1513EB68: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x1513EB6C: b           L_1513EB7C
    // 0x1513EB70: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_1513EB7C;
    // 0x1513EB70: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_1513EB74:
    // 0x1513EB74: b           L_1513EDA0
    // 0x1513EB78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513EDA0;
    // 0x1513EB78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513EB7C:
    // 0x1513EB7C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1513EB80: lwc1        $f4, -0x2E28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X2E28);
    // 0x1513EB84: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1513EB88: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x1513EB8C: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x1513EB90: lwc1        $f6, -0x2E18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2E18);
    // 0x1513EB94: lwc1        $f12, 0x30($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1513EB98: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x1513EB9C: sh          $zero, 0x6($t1)
    MEM_H(0X6, ctx->r9) = 0;
    // 0x1513EBA0: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x1513EBA4: mul.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1513EBA8: sh          $zero, 0x16($t2)
    MEM_H(0X16, ctx->r10) = 0;
    // 0x1513EBAC: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x1513EBB0: mul.s       $f16, $f6, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1513EBB4: sh          $zero, 0x26($t3)
    MEM_H(0X26, ctx->r11) = 0;
    // 0x1513EBB8: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x1513EBBC: mul.s       $f2, $f8, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x1513EBC0: sh          $zero, 0x36($t4)
    MEM_H(0X36, ctx->r12) = 0;
    // 0x1513EBC4: lwc1        $f10, 0x34($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1513EBC8: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x1513EBCC: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x1513EBD0: sub.s       $f18, $f12, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x1513EBD4: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513EBD8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x1513EBDC: nop

    // 0x1513EBE0: sh          $t7, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r15;
    // 0x1513EBE4: sh          $t7, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r15;
    // 0x1513EBE8: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513EBEC: lh          $t8, 0x48($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X48);
    // 0x1513EBF0: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x1513EBF4: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1513EBF8: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x1513EBFC: nop

    // 0x1513EC00: sh          $t0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r8;
    // 0x1513EC04: sh          $t0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r8;
    // 0x1513EC08: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1513EC0C: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x1513EC10: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1513EC14: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1513EC18: nop

    // 0x1513EC1C: sh          $t3, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r11;
    // 0x1513EC20: sh          $t3, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r11;
    // 0x1513EC24: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x1513EC28: lbu         $t3, 0x6F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X6F);
    // 0x1513EC2C: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x1513EC30: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x1513EC34: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x1513EC38: nop

    // 0x1513EC3C: sh          $t6, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r14;
    // 0x1513EC40: sh          $t6, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r14;
    // 0x1513EC44: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x1513EC48: lh          $t4, 0x4E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4E);
    // 0x1513EC4C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x1513EC50: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1513EC54: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1513EC58: nop

    // 0x1513EC5C: sh          $t9, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r25;
    // 0x1513EC60: sh          $t9, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r25;
    // 0x1513EC64: lwc1        $f8, 0x3C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x1513EC68: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x1513EC6C: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x1513EC70: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1513EC74: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x1513EC78: nop

    // 0x1513EC7C: sh          $t2, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r10;
    // 0x1513EC80: beq         $t3, $zero, L_1513ED14
    if (ctx->r11 == 0) {
        // 0x1513EC84: sh          $t2, 0x58($sp)
        MEM_H(0X58, ctx->r29) = ctx->r10;
            goto L_1513ED14;
    }
    // 0x1513EC84: sh          $t2, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r10;
    // 0x1513EC88: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x1513EC8C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x1513EC90: lh          $t6, 0x50($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X50);
    // 0x1513EC94: sh          $t6, 0x2($t7)
    MEM_H(0X2, ctx->r15) = ctx->r14;
    // 0x1513EC98: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x1513EC9C: lh          $t8, 0x52($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X52);
    // 0x1513ECA0: sh          $t8, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r24;
    // 0x1513ECA4: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x1513ECA8: lh          $t0, 0x54($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X54);
    // 0x1513ECAC: sh          $t0, 0x10($t1)
    MEM_H(0X10, ctx->r9) = ctx->r8;
    // 0x1513ECB0: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x1513ECB4: lh          $t2, 0x56($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X56);
    // 0x1513ECB8: sh          $t2, 0x12($t3)
    MEM_H(0X12, ctx->r11) = ctx->r10;
    // 0x1513ECBC: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x1513ECC0: lh          $t4, 0x58($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X58);
    // 0x1513ECC4: sh          $t4, 0x14($t5)
    MEM_H(0X14, ctx->r13) = ctx->r12;
    // 0x1513ECC8: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x1513ECCC: lh          $t6, 0x5A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X5A);
    // 0x1513ECD0: sh          $t6, 0x20($t7)
    MEM_H(0X20, ctx->r15) = ctx->r14;
    // 0x1513ECD4: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x1513ECD8: lh          $t8, 0x5C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X5C);
    // 0x1513ECDC: sh          $t8, 0x22($t9)
    MEM_H(0X22, ctx->r25) = ctx->r24;
    // 0x1513ECE0: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x1513ECE4: lh          $t0, 0x5E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X5E);
    // 0x1513ECE8: sh          $t0, 0x24($t1)
    MEM_H(0X24, ctx->r9) = ctx->r8;
    // 0x1513ECEC: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x1513ECF0: lh          $t2, 0x48($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X48);
    // 0x1513ECF4: sh          $t2, 0x30($t3)
    MEM_H(0X30, ctx->r11) = ctx->r10;
    // 0x1513ECF8: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x1513ECFC: lh          $t4, 0x4A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4A);
    // 0x1513ED00: sh          $t4, 0x32($t5)
    MEM_H(0X32, ctx->r13) = ctx->r12;
    // 0x1513ED04: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED08: lh          $t6, 0x4C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4C);
    // 0x1513ED0C: b           L_1513ED9C
    // 0x1513ED10: sh          $t6, 0x34($t7)
    MEM_H(0X34, ctx->r15) = ctx->r14;
        goto L_1513ED9C;
    // 0x1513ED10: sh          $t6, 0x34($t7)
    MEM_H(0X34, ctx->r15) = ctx->r14;
L_1513ED14:
    // 0x1513ED14: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x1513ED18: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED1C: lh          $t0, 0x4A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X4A);
    // 0x1513ED20: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    // 0x1513ED24: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED28: lh          $t2, 0x4C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X4C);
    // 0x1513ED2C: sh          $t2, 0x4($t3)
    MEM_H(0X4, ctx->r11) = ctx->r10;
    // 0x1513ED30: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED34: lh          $t4, 0x4E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X4E);
    // 0x1513ED38: sh          $t4, 0x10($t5)
    MEM_H(0X10, ctx->r13) = ctx->r12;
    // 0x1513ED3C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED40: lh          $t6, 0x50($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X50);
    // 0x1513ED44: sh          $t6, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r14;
    // 0x1513ED48: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED4C: lh          $t8, 0x52($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X52);
    // 0x1513ED50: sh          $t8, 0x14($t9)
    MEM_H(0X14, ctx->r25) = ctx->r24;
    // 0x1513ED54: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED58: lh          $t0, 0x54($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X54);
    // 0x1513ED5C: sh          $t0, 0x20($t1)
    MEM_H(0X20, ctx->r9) = ctx->r8;
    // 0x1513ED60: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED64: lh          $t2, 0x56($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X56);
    // 0x1513ED68: sh          $t2, 0x22($t3)
    MEM_H(0X22, ctx->r11) = ctx->r10;
    // 0x1513ED6C: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED70: lh          $t4, 0x58($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X58);
    // 0x1513ED74: sh          $t4, 0x24($t5)
    MEM_H(0X24, ctx->r13) = ctx->r12;
    // 0x1513ED78: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED7C: lh          $t6, 0x5A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X5A);
    // 0x1513ED80: sh          $t6, 0x30($t7)
    MEM_H(0X30, ctx->r15) = ctx->r14;
    // 0x1513ED84: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED88: lh          $t8, 0x5C($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X5C);
    // 0x1513ED8C: sh          $t8, 0x32($t9)
    MEM_H(0X32, ctx->r25) = ctx->r24;
    // 0x1513ED90: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x1513ED94: lh          $t0, 0x5E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X5E);
    // 0x1513ED98: sh          $t0, 0x34($t1)
    MEM_H(0X34, ctx->r9) = ctx->r8;
L_1513ED9C:
    // 0x1513ED9C: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_1513EDA0:
    // 0x1513EDA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1513EDA4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1513EDA8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x1513EDAC: jr          $ra
    // 0x1513EDB0: nop

    return;
    return;
    // 0x1513EDB0: nop

;}
RECOMP_FUNC void func_150CBABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CBABC: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x150CBAC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150CBAC4: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x150CBAC8: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x150CBACC: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x150CBAD0: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x150CBAD4: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x150CBAD8: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x150CBADC: addiu       $t7, $zero, 0xE03
    ctx->r15 = ADD32(0, 0XE03);
    // 0x150CBAE0: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x150CBAE4: sb          $t6, 0x51($sp)
    MEM_B(0X51, ctx->r29) = ctx->r14;
    // 0x150CBAE8: sh          $t7, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r15;
    // 0x150CBAEC: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x150CBAF0: jal         0x150ADA20
    // 0x150CBAF4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150CBAF4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    after_0:
    // 0x150CBAF8: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x150CBAFC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CBB00: mfhi        $t9
    ctx->r25 = hi;
    // 0x150CBB04: addiu       $t0, $t9, 0x28
    ctx->r8 = ADD32(ctx->r25, 0X28);
    // 0x150CBB08: addiu       $t1, $zero, 0xB0
    ctx->r9 = ADD32(0, 0XB0);
    // 0x150CBB0C: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x150CBB10: addiu       $t3, $zero, 0x2A
    ctx->r11 = ADD32(0, 0X2A);
    // 0x150CBB14: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x150CBB18: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x150CBB1C: addiu       $t6, $zero, 0x6A
    ctx->r14 = ADD32(0, 0X6A);
    // 0x150CBB20: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150CBB24: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x150CBB28: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x150CBB2C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150CBB30: sb          $t1, 0x4C($sp)
    MEM_B(0X4C, ctx->r29) = ctx->r9;
    // 0x150CBB34: sb          $t2, 0x4D($sp)
    MEM_B(0X4D, ctx->r29) = ctx->r10;
    // 0x150CBB38: sb          $t3, 0x4E($sp)
    MEM_B(0X4E, ctx->r29) = ctx->r11;
    // 0x150CBB3C: sb          $t4, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r12;
    // 0x150CBB40: sb          $t5, 0x49($sp)
    MEM_B(0X49, ctx->r29) = ctx->r13;
    // 0x150CBB44: sb          $t6, 0x4A($sp)
    MEM_B(0X4A, ctx->r29) = ctx->r14;
    // 0x150CBB48: jal         0x150ADA20
    // 0x150CBB4C: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150CBB4C: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
    after_1:
    // 0x150CBB50: addiu       $at, $zero, 0x9D
    ctx->r1 = ADD32(0, 0X9D);
    // 0x150CBB54: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CBB58: mfhi        $t8
    ctx->r24 = hi;
    // 0x150CBB5C: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x150CBB60: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150CBB64: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x150CBB68: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150CBB6C: sb          $t9, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r25;
    // 0x150CBB70: sb          $t0, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r8;
    // 0x150CBB74: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    // 0x150CBB78: jal         0x150ADA68
    // 0x150CBB7C: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x150CBB7C: sb          $t2, 0x95($sp)
    MEM_B(0X95, ctx->r29) = ctx->r10;
    after_2:
    // 0x150CBB80: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CBB84: lwc1        $f4, 0x624($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X624);
    // 0x150CBB88: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150CBB8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CBB90: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CBB94: lwc1        $f10, 0xB0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x150CBB98: lwc1        $f16, 0xB4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x150CBB9C: lwc1        $f18, 0xB8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x150CBBA0: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x150CBBA4: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x150CBBA8: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x150CBBAC: add.s       $f2, $f6, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CBBB0: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x150CBBB4: jal         0x150ADA20
    // 0x150CBBB8: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150CBBB8: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x150CBBBC: jal         0x150ADA68
    // 0x150CBBC0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150CBBC0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x150CBBC4: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x150CBBC8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x150CBBCC: lh          $a0, 0xCA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XCA);
    // 0x150CBBD0: addiu       $a3, $sp, 0x7C
    ctx->r7 = ADD32(ctx->r29, 0X7C);
    // 0x150CBBD4: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x150CBBD8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x150CBBDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CBBE0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150CBBE4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CBBE8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CBBEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CBBF0: lwc1        $f16, 0x628($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X628);
    // 0x150CBBF4: mfhi        $t3
    ctx->r11 = hi;
    // 0x150CBBF8: addiu       $a1, $t3, -0x19
    ctx->r5 = ADD32(ctx->r11, -0X19);
    // 0x150CBBFC: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x150CBC00: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x150CBC04: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CBC08: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150CBC0C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150CBC10: jal         0x15143794
    // 0x150CBC14: nop

    func_15143794(rdram, ctx);
        goto after_5;
    // 0x150CBC14: nop

    after_5:
    // 0x150CBC18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150CBC1C: addiu       $t6, $zero, 0xE05
    ctx->r14 = ADD32(0, 0XE05);
    // 0x150CBC20: sw          $t6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r14;
    // 0x150CBC24: jal         0x150ADA20
    // 0x150CBC28: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150CBC28: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x150CBC2C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x150CBC30: beq         $t7, $zero, L_150CBC40
    if (ctx->r15 == 0) {
        // 0x150CBC34: lw          $t8, 0x8C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X8C);
            goto L_150CBC40;
    }
    // 0x150CBC34: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x150CBC38: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x150CBC3C: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
L_150CBC40:
    // 0x150CBC40: jal         0x150ADA20
    // 0x150CBC44: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x150CBC44: nop

    after_7:
    // 0x150CBC48: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x150CBC4C: beq         $t0, $zero, L_150CBC60
    if (ctx->r8 == 0) {
        // 0x150CBC50: addiu       $t3, $zero, 0x7
        ctx->r11 = ADD32(0, 0X7);
            goto L_150CBC60;
    }
    // 0x150CBC50: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x150CBC54: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x150CBC58: ori         $t2, $t1, 0x80
    ctx->r10 = ctx->r9 | 0X80;
    // 0x150CBC5C: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
L_150CBC60:
    // 0x150CBC60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CBC64: lwc1        $f6, 0x62C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X62C);
    // 0x150CBC68: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CBC6C: lwc1        $f8, 0x630($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X630);
    // 0x150CBC70: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150CBC74: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x150CBC78: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150CBC7C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x150CBC80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150CBC84: sb          $t3, 0x96($sp)
    MEM_B(0X96, ctx->r29) = ctx->r11;
    // 0x150CBC88: sb          $t4, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r12;
    // 0x150CBC8C: sh          $t5, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r13;
    // 0x150CBC90: sh          $t6, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r14;
    // 0x150CBC94: sh          $t7, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r15;
    // 0x150CBC98: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150CBC9C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x150CBCA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150CBCA4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150CBCA8: lbu         $a3, 0xE3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XE3);
    // 0x150CBCAC: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x150CBCB0: jal         0x15130374
    // 0x150CBCB4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_15130374(rdram, ctx);
        goto after_8;
    // 0x150CBCB4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x150CBCB8: beq         $v0, $zero, L_150CBCCC
    if (ctx->r2 == 0) {
        // 0x150CBCBC: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_150CBCCC;
    }
    // 0x150CBCBC: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x150CBCC0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x150CBCC4: jal         0x10022EC0
    // 0x150CBCC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x150CBCC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_9:
L_150CBCCC:
    // 0x150CBCCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150CBCD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150CBCD4: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x150CBCD8: jr          $ra
    // 0x150CBCDC: nop

    return;
    return;
    // 0x150CBCDC: nop

;}
RECOMP_FUNC void func_151ABE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151ABE40: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x151ABE44: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x151ABE48: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x151ABE4C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x151ABE50: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x151ABE54: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x151ABE58: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151ABE5C: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x151ABE60: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x151ABE64: jal         0x151D8E20
    // 0x151ABE68: nop

    func_151D8E20(rdram, ctx);
        goto after_0;
    // 0x151ABE68: nop

    after_0:
    // 0x151ABE6C: beq         $s2, $zero, L_151AC060
    if (ctx->r18 == 0) {
        // 0x151ABE70: sb          $v0, 0x7B($sp)
        MEM_B(0X7B, ctx->r29) = ctx->r2;
            goto L_151AC060;
    }
    // 0x151ABE70: sb          $v0, 0x7B($sp)
    MEM_B(0X7B, ctx->r29) = ctx->r2;
    // 0x151ABE74: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x151ABE78: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x151ABE7C: addiu       $t8, $t8, -0x6FE0
    ctx->r24 = ADD32(ctx->r24, -0X6FE0);
    // 0x151ABE80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x151ABE84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x151ABE88: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x151ABE8C: lb          $t9, 0x0($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X0);
    // 0x151ABE90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151ABE94: beql        $t9, $at, L_151ABF40
    if (ctx->r25 == ctx->r1) {
        // 0x151ABE98: lb          $t5, 0x2($s0)
        ctx->r13 = MEM_B(ctx->r16, 0X2);
            goto L_151ABF40;
    }
    goto skip_0;
    // 0x151ABE98: lb          $t5, 0x2($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2);
    skip_0:
    // 0x151ABE9C: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x151ABEA0: sw          $s2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r18;
    // 0x151ABEA4: sb          $v0, 0x74($sp)
    MEM_B(0X74, ctx->r29) = ctx->r2;
    // 0x151ABEA8: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x151ABEAC: lb          $t2, 0x0($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X0);
    // 0x151ABEB0: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151ABEB4: addiu       $t4, $t4, -0x6FC0
    ctx->r12 = ADD32(ctx->r12, -0X6FC0);
    // 0x151ABEB8: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x151ABEBC: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x151ABEC0: jal         0x150ADA20
    // 0x151ABEC4: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151ABEC4: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    after_1:
    // 0x151ABEC8: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x151ABECC: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151ABED0: lwc1        $f14, 0x4($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151ABED4: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x151ABED8: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x151ABEDC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x151ABEE0: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151ABEE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151ABEE8: lhu         $t6, 0x6($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X6);
    // 0x151ABEEC: lh          $t9, 0x4($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X4);
    // 0x151ABEF0: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x151ABEF4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x151ABEF8: divu        $zero, $v0, $t7
    lo = S32(U32(ctx->r2) / U32(ctx->r15)); hi = S32(U32(ctx->r2) % U32(ctx->r15));
    // 0x151ABEFC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151ABF00: lbu         $t4, 0x8F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X8F);
    // 0x151ABF04: mfhi        $t8
    ctx->r24 = hi;
    // 0x151ABF08: addiu       $t1, $zero, 0xB
    ctx->r9 = ADD32(0, 0XB);
    // 0x151ABF0C: bne         $t7, $zero, L_151ABF18
    if (ctx->r15 != 0) {
        // 0x151ABF10: nop
    
            goto L_151ABF18;
    }
    // 0x151ABF10: nop

    // 0x151ABF14: break       7
    do_break(354074388);
L_151ABF18:
    // 0x151ABF18: addiu       $t3, $sp, 0x6C
    ctx->r11 = ADD32(ctx->r29, 0X6C);
    // 0x151ABF1C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x151ABF20: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151ABF24: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x151ABF28: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x151ABF2C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x151ABF30: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x151ABF34: jal         0x1514C678
    // 0x151ABF38: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_1514C678(rdram, ctx);
        goto after_2;
    // 0x151ABF38: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x151ABF3C: lb          $t5, 0x2($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X2);
L_151ABF40:
    // 0x151ABF40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151ABF44: beql        $t5, $at, L_151ABFF4
    if (ctx->r13 == ctx->r1) {
        // 0x151ABF48: lb          $v1, 0x4($s0)
        ctx->r3 = MEM_B(ctx->r16, 0X4);
            goto L_151ABFF4;
    }
    goto skip_1;
    // 0x151ABF48: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    skip_1:
    // 0x151ABF4C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x151ABF50: lbu         $t7, 0x7B($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X7B);
    // 0x151ABF54: sw          $s2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r18;
    // 0x151ABF58: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x151ABF5C: sb          $t7, 0x64($sp)
    MEM_B(0X64, ctx->r29) = ctx->r15;
    // 0x151ABF60: lb          $t8, 0x2($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X2);
    // 0x151ABF64: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x151ABF68: addiu       $t0, $t0, -0x6EA8
    ctx->r8 = ADD32(ctx->r8, -0X6EA8);
    // 0x151ABF6C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x151ABF70: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x151ABF74: jal         0x150ADA20
    // 0x151ABF78: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151ABF78: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    after_3:
    // 0x151ABF7C: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x151ABF80: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x151ABF84: lwc1        $f14, 0x4($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X4);
    // 0x151ABF88: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x151ABF8C: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x151ABF90: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151ABF94: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x151ABF98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151ABF9C: lhu         $t2, 0x6($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X6);
    // 0x151ABFA0: lh          $t5, 0x4($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X4);
    // 0x151ABFA4: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x151ABFA8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x151ABFAC: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x151ABFB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x151ABFB4: lbu         $t0, 0x8F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X8F);
    // 0x151ABFB8: mfhi        $t4
    ctx->r12 = hi;
    // 0x151ABFBC: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x151ABFC0: bne         $t3, $zero, L_151ABFCC
    if (ctx->r11 != 0) {
        // 0x151ABFC4: nop
    
            goto L_151ABFCC;
    }
    // 0x151ABFC4: nop

    // 0x151ABFC8: break       7
    do_break(354074568);
L_151ABFCC:
    // 0x151ABFCC: addiu       $t9, $sp, 0x5C
    ctx->r25 = ADD32(ctx->r29, 0X5C);
    // 0x151ABFD0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x151ABFD4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151ABFD8: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x151ABFDC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x151ABFE0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x151ABFE4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x151ABFE8: jal         0x1514C678
    // 0x151ABFEC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_1514C678(rdram, ctx);
        goto after_4;
    // 0x151ABFEC: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x151ABFF0: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
L_151ABFF4:
    // 0x151ABFF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151ABFF8: beql        $v1, $at, L_151AC064
    if (ctx->r3 == ctx->r1) {
        // 0x151ABFFC: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_151AC064;
    }
    goto skip_2;
    // 0x151ABFFC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_2:
    // 0x151AC000: lbu         $t1, 0x1C($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X1C);
    // 0x151AC004: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x151AC008: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x151AC00C: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x151AC010: beq         $t2, $zero, L_151AC060
    if (ctx->r10 == 0) {
        // 0x151AC014: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_151AC060;
    }
    // 0x151AC014: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x151AC018: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x151AC01C: addiu       $t4, $t4, -0x6DA4
    ctx->r12 = ADD32(ctx->r12, -0X6DA4);
    // 0x151AC020: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x151AC024: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x151AC028: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x151AC02C: lh          $a3, 0x4($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X4);
    // 0x151AC030: lbu         $t7, 0x8F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X8F);
    // 0x151AC034: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x151AC038: addiu       $t5, $s2, 0x4
    ctx->r13 = ADD32(ctx->r18, 0X4);
    // 0x151AC03C: addiu       $t6, $zero, 0x96
    ctx->r14 = ADD32(0, 0X96);
    // 0x151AC040: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151AC044: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151AC048: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151AC04C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x151AC050: lbu         $a0, 0x7B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X7B);
    // 0x151AC054: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x151AC058: jal         0x151DBE80
    // 0x151AC05C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_151DBE80(rdram, ctx);
        goto after_5;
    // 0x151AC05C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_5:
L_151AC060:
    // 0x151AC060: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_151AC064:
    // 0x151AC064: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151AC068: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x151AC06C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x151AC070: jr          $ra
    // 0x151AC074: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    return;
    // 0x151AC074: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_1506B1E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506B1E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1506B1EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1506B1F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1506B1F4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506B1F8: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506B1FC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x1506B200: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x1506B204: lui         $a3, 0x4040
    ctx->r7 = S32(0X4040 << 16);
    // 0x1506B208: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x1506B20C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x1506B210: jal         0x1505E650
    // 0x1506B214: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_1505E650(rdram, ctx);
        goto after_0;
    // 0x1506B214: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
    // 0x1506B218: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1506B21C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1506B220: jr          $ra
    // 0x1506B224: nop

    return;
    return;
    // 0x1506B224: nop

;}
RECOMP_FUNC void func_1502D54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502D54C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x1502D550: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1502D554: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502D558: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x1502D55C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502D560: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1502D564: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502D568: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x1502D56C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x1502D570: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x1502D574: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x1502D578: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x1502D57C: lbu         $t8, 0x66($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X66);
    // 0x1502D580: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1502D584: andi        $t9, $t8, 0xC
    ctx->r25 = ctx->r24 & 0XC;
    // 0x1502D588: bnel        $t9, $at, L_1502D61C
    if (ctx->r25 != ctx->r1) {
        // 0x1502D58C: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_1502D61C;
    }
    goto skip_0;
    // 0x1502D58C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
    // 0x1502D590: lbu         $t0, 0x1DD($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1DD);
    // 0x1502D594: lbu         $t1, 0x1E0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X1E0);
    // 0x1502D598: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x1502D59C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x1502D5A0: bgez        $t2, L_1502D5B0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x1502D5A4: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_1502D5B0;
    }
    // 0x1502D5A4: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x1502D5A8: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x1502D5AC: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_1502D5B0:
    // 0x1502D5B0: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x1502D5B4: lbu         $t5, 0x1E1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1E1);
    // 0x1502D5B8: lbu         $t4, 0x1DE($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1DE);
    // 0x1502D5BC: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x1502D5C0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1502D5C4: bgez        $t6, L_1502D5D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1502D5C8: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_1502D5D4;
    }
    // 0x1502D5C8: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x1502D5CC: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x1502D5D0: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_1502D5D4:
    // 0x1502D5D4: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x1502D5D8: lbu         $t9, 0x1E2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1E2);
    // 0x1502D5DC: lbu         $t8, 0x1DF($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1DF);
    // 0x1502D5E0: lw          $t4, 0x4($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X4);
    // 0x1502D5E4: subu        $t3, $v1, $t2
    ctx->r11 = SUB32(ctx->r3, ctx->r10);
    // 0x1502D5E8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1502D5EC: bgez        $t0, L_1502D5FC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1502D5F0: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_1502D5FC;
    }
    // 0x1502D5F0: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x1502D5F4: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x1502D5F8: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_1502D5FC:
    // 0x1502D5FC: sw          $t1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r9;
    // 0x1502D600: subu        $t7, $v1, $t1
    ctx->r15 = SUB32(ctx->r3, ctx->r9);
    // 0x1502D604: subu        $t5, $v1, $t4
    ctx->r13 = SUB32(ctx->r3, ctx->r12);
    // 0x1502D608: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x1502D60C: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x1502D610: jr          $ra
    // 0x1502D614: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    return;
    return;
    // 0x1502D614: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    // 0x1502D618: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_1502D61C:
    // 0x1502D61C: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x1502D620: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x1502D624: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x1502D628: jr          $ra
    // 0x1502D62C: nop

    return;
    return;
    // 0x1502D62C: nop

;}
RECOMP_FUNC void func_1515942C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515942C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x15159430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15159434: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x15159438: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x1515943C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x15159440: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x15159444: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x15159448: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x1515944C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x15159450: lw          $a0, 0x2F4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2F4);
    // 0x15159454: jal         0x1514ECE0
    // 0x15159458: sb          $zero, 0x37($sp)
    MEM_B(0X37, ctx->r29) = 0;
    func_1514ECE0(rdram, ctx);
        goto after_0;
    // 0x15159458: sb          $zero, 0x37($sp)
    MEM_B(0X37, ctx->r29) = 0;
    after_0:
    // 0x1515945C: lh          $a0, 0x4E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X4E);
    // 0x15159460: lh          $a3, 0x4A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X4A);
    // 0x15159464: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x15159468: bne         $v0, $zero, L_15159478
    if (ctx->r2 != 0) {
        // 0x1515946C: lh          $t3, 0x46($sp)
        ctx->r11 = MEM_H(ctx->r29, 0X46);
            goto L_15159478;
    }
    // 0x1515946C: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x15159470: b           L_15159584
    // 0x15159474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15159584;
    // 0x15159474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15159478:
    // 0x15159478: lh          $v1, 0x52($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X52);
    // 0x1515947C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x15159480: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x15159484: bne         $v1, $v0, L_15159494
    if (ctx->r3 != ctx->r2) {
        // 0x15159488: lw          $a1, 0x10($t7)
        ctx->r5 = MEM_W(ctx->r15, 0X10);
            goto L_15159494;
    }
    // 0x15159488: lw          $a1, 0x10($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X10);
    // 0x1515948C: b           L_151594A0
    // 0x15159490: addiu       $t1, $zero, 0x1E00
    ctx->r9 = ADD32(0, 0X1E00);
        goto L_151594A0;
    // 0x15159490: addiu       $t1, $zero, 0x1E00
    ctx->r9 = ADD32(0, 0X1E00);
L_15159494:
    // 0x15159494: addiu       $t8, $v1, 0x9
    ctx->r24 = ADD32(ctx->r3, 0X9);
    // 0x15159498: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1515949C: sllv        $t1, $t9, $t8
    ctx->r9 = S32(ctx->r25 << (ctx->r24 & 31));
L_151594A0:
    // 0x151594A0: bne         $a0, $v0, L_151594B0
    if (ctx->r4 != ctx->r2) {
        // 0x151594A4: lh          $v1, 0x56($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X56);
            goto L_151594B0;
    }
    // 0x151594A4: lh          $v1, 0x56($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X56);
    // 0x151594A8: b           L_151594BC
    // 0x151594AC: addiu       $t0, $zero, 0x1C0
    ctx->r8 = ADD32(0, 0X1C0);
        goto L_151594BC;
    // 0x151594AC: addiu       $t0, $zero, 0x1C0
    ctx->r8 = ADD32(0, 0X1C0);
L_151594B0:
    // 0x151594B0: addiu       $t4, $a0, 0x6
    ctx->r12 = ADD32(ctx->r4, 0X6);
    // 0x151594B4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x151594B8: sllv        $t0, $t5, $t4
    ctx->r8 = S32(ctx->r13 << (ctx->r12 & 31));
L_151594BC:
    // 0x151594BC: bne         $a3, $v0, L_151594CC
    if (ctx->r7 != ctx->r2) {
        // 0x151594C0: addiu       $t6, $a3, 0x3
        ctx->r14 = ADD32(ctx->r7, 0X3);
            goto L_151594CC;
    }
    // 0x151594C0: addiu       $t6, $a3, 0x3
    ctx->r14 = ADD32(ctx->r7, 0X3);
    // 0x151594C4: b           L_151594D4
    // 0x151594C8: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
        goto L_151594D4;
    // 0x151594C8: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
L_151594CC:
    // 0x151594CC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151594D0: sllv        $a2, $t7, $t6
    ctx->r6 = S32(ctx->r15 << (ctx->r14 & 31));
L_151594D4:
    // 0x151594D4: bne         $t3, $v0, L_151594E4
    if (ctx->r11 != ctx->r2) {
        // 0x151594D8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_151594E4;
    }
    // 0x151594D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151594DC: b           L_151594EC
    // 0x151594E0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
        goto L_151594EC;
    // 0x151594E0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
L_151594E4:
    // 0x151594E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151594E8: sllv        $a3, $t9, $t3
    ctx->r7 = S32(ctx->r25 << (ctx->r11 & 31));
L_151594EC:
    // 0x151594EC: bne         $v1, $v0, L_15159500
    if (ctx->r3 != ctx->r2) {
        // 0x151594F0: addiu       $t8, $v1, 0xD
        ctx->r24 = ADD32(ctx->r3, 0XD);
            goto L_15159500;
    }
    // 0x151594F0: addiu       $t8, $v1, 0xD
    ctx->r24 = ADD32(ctx->r3, 0XD);
    // 0x151594F4: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x151594F8: b           L_15159508
    // 0x151594FC: ori         $a0, $a0, 0xE000
    ctx->r4 = ctx->r4 | 0XE000;
        goto L_15159508;
    // 0x151594FC: ori         $a0, $a0, 0xE000
    ctx->r4 = ctx->r4 | 0XE000;
L_15159500:
    // 0x15159500: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15159504: sllv        $a0, $t5, $t8
    ctx->r4 = S32(ctx->r13 << (ctx->r24 & 31));
L_15159508:
    // 0x15159508: lbu         $t9, 0x2D($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2D);
    // 0x1515950C: lbu         $t4, 0x2C($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2C);
    // 0x15159510: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15159514: addiu       $t5, $t9, 0x3
    ctx->r13 = ADD32(ctx->r25, 0X3);
    // 0x15159518: lbu         $t9, 0x2E($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2E);
    // 0x1515951C: sllv        $t6, $t7, $t4
    ctx->r14 = S32(ctx->r15 << (ctx->r12 & 31));
    // 0x15159520: sllv        $t7, $t8, $t5
    ctx->r15 = S32(ctx->r24 << (ctx->r13 & 31));
    // 0x15159524: addiu       $t8, $t9, 0x6
    ctx->r24 = ADD32(ctx->r25, 0X6);
    // 0x15159528: lbu         $t9, 0x2F($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X2F);
    // 0x1515952C: or          $t4, $t6, $t7
    ctx->r12 = ctx->r14 | ctx->r15;
    // 0x15159530: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15159534: sllv        $t6, $t5, $t8
    ctx->r14 = S32(ctx->r13 << (ctx->r24 & 31));
    // 0x15159538: addiu       $t5, $t9, 0x9
    ctx->r13 = ADD32(ctx->r25, 0X9);
    // 0x1515953C: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x15159540: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15159544: lbu         $t9, 0x30($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X30);
    // 0x15159548: sllv        $t4, $t8, $t5
    ctx->r12 = S32(ctx->r24 << (ctx->r13 & 31));
    // 0x1515954C: or          $t6, $t7, $t4
    ctx->r14 = ctx->r15 | ctx->r12;
    // 0x15159550: addiu       $t8, $t9, 0xD
    ctx->r24 = ADD32(ctx->r25, 0XD);
    // 0x15159554: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15159558: or          $t4, $a0, $a3
    ctx->r12 = ctx->r4 | ctx->r7;
    // 0x1515955C: sllv        $t7, $t5, $t8
    ctx->r15 = S32(ctx->r13 << (ctx->r24 & 31));
    // 0x15159560: or          $t9, $t4, $a2
    ctx->r25 = ctx->r12 | ctx->r6;
    // 0x15159564: or          $t5, $t9, $t0
    ctx->r13 = ctx->r25 | ctx->r8;
    // 0x15159568: or          $v1, $t6, $t7
    ctx->r3 = ctx->r14 | ctx->r15;
    // 0x1515956C: or          $v0, $t5, $t1
    ctx->r2 = ctx->r13 | ctx->r9;
    // 0x15159570: or          $t8, $v0, $v1
    ctx->r24 = ctx->r2 | ctx->r3;
    // 0x15159574: bnel        $v0, $t8, L_15159584
    if (ctx->r2 != ctx->r24) {
        // 0x15159578: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_15159584;
    }
    goto skip_0;
    // 0x15159578: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    skip_0:
    // 0x1515957C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15159580: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_15159584:
    // 0x15159584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15159588: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x1515958C: jr          $ra
    // 0x15159590: nop

    return;
    return;
    // 0x15159590: nop

;}
RECOMP_FUNC void func_15149A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15149A94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15149A98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15149A9C: lbu         $v0, 0x74($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X74);
    // 0x15149AA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15149AA4: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x15149AA8: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x15149AAC: bnel        $t6, $zero, L_15149B18
    if (ctx->r14 != 0) {
        // 0x15149AB0: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_15149B18;
    }
    goto skip_0;
    // 0x15149AB0: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    skip_0:
    // 0x15149AB4: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x15149AB8: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15149ABC: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x15149AC0: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x15149AC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15149AC8: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x15149ACC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x15149AD0: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x15149AD4: swc1        $f16, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f16.u32l;
    // 0x15149AD8: lwc1        $f4, 0x578C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X578C);
    // 0x15149ADC: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15149AE0: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x15149AE4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15149AE8: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x15149AEC: nop

    // 0x15149AF0: bc1fl       L_15149B10
    if (!c1cs) {
        // 0x15149AF4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15149B10;
    }
    goto skip_1;
    // 0x15149AF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_1:
    // 0x15149AF8: lbu         $t7, 0x74($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X74);
    // 0x15149AFC: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x15149B00: sb          $t8, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r24;
    // 0x15149B04: b           L_15149B14
    // 0x15149B08: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
        goto L_15149B14;
    // 0x15149B08: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x15149B0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15149B10:
    // 0x15149B10: lbu         $v0, 0x74($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X74);
L_15149B14:
    // 0x15149B14: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
L_15149B18:
    // 0x15149B18: bne         $t9, $zero, L_15149B74
    if (ctx->r25 != 0) {
        // 0x15149B1C: addiu       $v0, $a0, 0x110
        ctx->r2 = ADD32(ctx->r4, 0X110);
            goto L_15149B74;
    }
    // 0x15149B1C: addiu       $v0, $a0, 0x110
    ctx->r2 = ADD32(ctx->r4, 0X110);
    // 0x15149B20: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15149B24: lwc1        $f10, 0x20($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X20);
    // 0x15149B28: lwc1        $f18, 0x44($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X44);
    // 0x15149B2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15149B30: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x15149B34: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15149B38: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x15149B3C: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x15149B40: lwc1        $f10, 0x5790($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5790);
    // 0x15149B44: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x15149B48: lwc1        $f18, 0x30($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X30);
    // 0x15149B4C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15149B50: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x15149B54: nop

    // 0x15149B58: bc1fl       L_15149B74
    if (!c1cs) {
        // 0x15149B5C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_15149B74;
    }
    goto skip_2;
    // 0x15149B5C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_2:
    // 0x15149B60: lbu         $t0, 0x74($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X74);
    // 0x15149B64: ori         $t1, $t0, 0x8
    ctx->r9 = ctx->r8 | 0X8;
    // 0x15149B68: b           L_15149B74
    // 0x15149B6C: sb          $t1, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r9;
        goto L_15149B74;
    // 0x15149B6C: sb          $t1, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r9;
    // 0x15149B70: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_15149B74:
    // 0x15149B74: beql        $v1, $zero, L_15149B9C
    if (ctx->r3 == 0) {
        // 0x15149B78: lh          $t3, 0x1C($a0)
        ctx->r11 = MEM_H(ctx->r4, 0X1C);
            goto L_15149B9C;
    }
    goto skip_3;
    // 0x15149B78: lh          $t3, 0x1C($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X1C);
    skip_3:
    // 0x15149B7C: lbu         $t2, 0x73($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X73);
    // 0x15149B80: lbu         $a1, 0x70($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X70);
    // 0x15149B84: lbu         $a3, 0x72($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X72);
    // 0x15149B88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15149B8C: jal         0x1513F680
    // 0x15149B90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_1513F680(rdram, ctx);
        goto after_0;
    // 0x15149B90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x15149B94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15149B98: lh          $t3, 0x1C($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X1C);
L_15149B9C:
    // 0x15149B9C: slti        $at, $t3, 0x5
    ctx->r1 = SIGNED(ctx->r11) < 0X5 ? 1 : 0;
    // 0x15149BA0: beql        $at, $zero, L_15149BE4
    if (ctx->r1 == 0) {
        // 0x15149BA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15149BE4;
    }
    goto skip_4;
    // 0x15149BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_4:
    // 0x15149BA8: lbu         $t4, 0x73($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X73);
    // 0x15149BAC: lbu         $a1, 0x70($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X70);
    // 0x15149BB0: lbu         $a2, 0x158($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X158);
    // 0x15149BB4: lbu         $a3, 0x72($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X72);
    // 0x15149BB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15149BBC: jal         0x1513F680
    // 0x15149BC0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_1513F680(rdram, ctx);
        goto after_1;
    // 0x15149BC0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_1:
    // 0x15149BC4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15149BC8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x15149BCC: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x15149BD0: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x15149BD4: sh          $t5, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r13;
    // 0x15149BD8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x15149BDC: sw          $t7, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r15;
    // 0x15149BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15149BE4:
    // 0x15149BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15149BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15149BEC: jr          $ra
    // 0x15149BF0: nop

    return;
    return;
    // 0x15149BF0: nop

;}
RECOMP_FUNC void func_151041E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151041E4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x151041E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151041EC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x151041F0: lbu         $v0, 0x1A($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1A);
    // 0x151041F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151041F8: beql        $v0, $zero, L_1510422C
    if (ctx->r2 == 0) {
        // 0x151041FC: lw          $t6, 0x10($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X10);
            goto L_1510422C;
    }
    goto skip_0;
    // 0x151041FC: lw          $t6, 0x10($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X10);
    skip_0:
    // 0x15104200: beq         $v0, $at, L_15104350
    if (ctx->r2 == ctx->r1) {
        // 0x15104204: lui         $t4, 0x800C
        ctx->r12 = S32(0X800C << 16);
            goto L_15104350;
    }
    // 0x15104204: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15104208: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1510420C: beq         $v0, $at, L_15104398
    if (ctx->r2 == ctx->r1) {
        // 0x15104210: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_15104398;
    }
    // 0x15104210: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15104214: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15104218: beq         $v0, $at, L_15104404
    if (ctx->r2 == ctx->r1) {
        // 0x1510421C: lui         $t4, 0x800C
        ctx->r12 = S32(0X800C << 16);
            goto L_15104404;
    }
    // 0x1510421C: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x15104220: b           L_15104480
    // 0x15104224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15104480;
    // 0x15104224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15104228: lw          $t6, 0x10($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X10);
L_1510422C:
    // 0x1510422C: lbu         $v1, 0x1C($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X1C);
    // 0x15104230: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15104234: lw          $v0, 0x2D0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X2D0);
    // 0x15104238: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1510423C: bne         $v1, $zero, L_15104268
    if (ctx->r3 != 0) {
        // 0x15104240: lwc1        $f0, 0x8($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
            goto L_15104268;
    }
    // 0x15104240: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15104244: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x15104248: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1510424C: nop

    // 0x15104250: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x15104254: nop

    // 0x15104258: bc1f        L_15104290
    if (!c1cs) {
        // 0x1510425C: nop
    
            goto L_15104290;
    }
    // 0x1510425C: nop

    // 0x15104260: b           L_15104290
    // 0x15104264: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_15104290;
    // 0x15104264: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15104268:
    // 0x15104268: bne         $v1, $at, L_15104290
    if (ctx->r3 != ctx->r1) {
        // 0x1510426C: lui         $v1, 0x800C
        ctx->r3 = S32(0X800C << 16);
            goto L_15104290;
    }
    // 0x1510426C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15104270: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x15104274: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x15104278: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x1510427C: beq         $at, $zero, L_1510428C
    if (ctx->r1 == 0) {
        // 0x15104280: subu        $t7, $v0, $v1
        ctx->r15 = SUB32(ctx->r2, ctx->r3);
            goto L_1510428C;
    }
    // 0x15104280: subu        $t7, $v0, $v1
    ctx->r15 = SUB32(ctx->r2, ctx->r3);
    // 0x15104284: b           L_15104290
    // 0x15104288: sh          $t7, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r15;
        goto L_15104290;
    // 0x15104288: sh          $t7, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r15;
L_1510428C:
    // 0x1510428C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15104290:
    // 0x15104290: beq         $a0, $zero, L_1510447C
    if (ctx->r4 == 0) {
        // 0x15104294: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_1510447C;
    }
    // 0x15104294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15104298: lw          $t8, 0x14($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X14);
    // 0x1510429C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151042A0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x151042A4: lw          $t9, 0x10($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X10);
    // 0x151042A8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x151042AC: sb          $v0, 0x1A($a2)
    MEM_B(0X1A, ctx->r6) = ctx->r2;
    // 0x151042B0: jal         0x100176C4
    // 0x151042B4: sb          $v0, -0x15F4($at)
    MEM_B(-0X15F4, ctx->r1) = ctx->r2;
    func_100176C4(rdram, ctx);
        goto after_0;
    // 0x151042B4: sb          $v0, -0x15F4($at)
    MEM_B(-0X15F4, ctx->r1) = ctx->r2;
    after_0:
    // 0x151042B8: addiu       $a0, $zero, 0x5B2
    ctx->r4 = ADD32(0, 0X5B2);
    // 0x151042BC: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x151042C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151042C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151042C8: jal         0x10010F30
    // 0x151042CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_1;
    // 0x151042CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x151042D0: addiu       $a0, $zero, 0x5B2
    ctx->r4 = ADD32(0, 0X5B2);
    // 0x151042D4: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x151042D8: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    // 0x151042DC: addiu       $a3, $zero, -0x64
    ctx->r7 = ADD32(0, -0X64);
    // 0x151042E0: jal         0x10010F30
    // 0x151042E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_2;
    // 0x151042E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x151042E8: addiu       $a0, $zero, 0x5B2
    ctx->r4 = ADD32(0, 0X5B2);
    // 0x151042EC: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x151042F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151042F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151042F8: jal         0x10010F30
    // 0x151042FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_3;
    // 0x151042FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x15104300: addiu       $a0, $zero, 0x5B2
    ctx->r4 = ADD32(0, 0X5B2);
    // 0x15104304: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x15104308: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    // 0x1510430C: addiu       $a3, $zero, -0x64
    ctx->r7 = ADD32(0, -0X64);
    // 0x15104310: jal         0x10010F30
    // 0x15104314: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_10010F30(rdram, ctx);
        goto after_4;
    // 0x15104314: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x15104318: addiu       $a0, $zero, 0xD2
    ctx->r4 = ADD32(0, 0XD2);
    // 0x1510431C: jal         0x151D66F0
    // 0x15104320: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_151D66F0(rdram, ctx);
        goto after_5;
    // 0x15104320: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x15104324: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x15104328: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x1510432C: lw          $a0, 0x318($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X318);
    // 0x15104330: jal         0x151254F4
    // 0x15104334: lbu         $a1, 0x13F($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X13F);
    func_151254F4(rdram, ctx);
        goto after_6;
    // 0x15104334: lbu         $a1, 0x13F($t1)
    ctx->r5 = MEM_BU(ctx->r9, 0X13F);
    after_6:
    // 0x15104338: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x1510433C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x15104340: lw          $t3, 0x318($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X318);
    // 0x15104344: swc1        $f6, 0x674($t3)
    MEM_W(0X674, ctx->r11) = ctx->f6.u32l;
    // 0x15104348: b           L_15104480
    // 0x1510434C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15104480;
    // 0x1510434C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15104350:
    // 0x15104350: lw          $t4, -0x15F8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X15F8);
    // 0x15104354: lbu         $v0, 0x1B($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1B);
    // 0x15104358: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1510435C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15104360: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x15104364: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x15104368: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x1510436C: slti        $at, $v0, 0xFF
    ctx->r1 = SIGNED(ctx->r2) < 0XFF ? 1 : 0;
    // 0x15104370: bne         $at, $zero, L_1510438C
    if (ctx->r1 != 0) {
        // 0x15104374: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_1510438C;
    }
    // 0x15104374: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x15104378: addiu       $t8, $zero, 0xB4
    ctx->r24 = ADD32(0, 0XB4);
    // 0x1510437C: sb          $t6, 0x1B($a2)
    MEM_B(0X1B, ctx->r6) = ctx->r14;
    // 0x15104380: sb          $t7, 0x1A($a2)
    MEM_B(0X1A, ctx->r6) = ctx->r15;
    // 0x15104384: b           L_1510447C
    // 0x15104388: sh          $t8, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r24;
        goto L_1510447C;
    // 0x15104388: sh          $t8, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r24;
L_1510438C:
    // 0x1510438C: sb          $v0, 0x1B($a2)
    MEM_B(0X1B, ctx->r6) = ctx->r2;
    // 0x15104390: b           L_15104480
    // 0x15104394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15104480;
    // 0x15104394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15104398:
    // 0x15104398: lw          $v1, -0x15F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15F8);
    // 0x1510439C: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x151043A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151043A4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x151043A8: beq         $at, $zero, L_151043B8
    if (ctx->r1 == 0) {
        // 0x151043AC: subu        $t9, $v0, $v1
        ctx->r25 = SUB32(ctx->r2, ctx->r3);
            goto L_151043B8;
    }
    // 0x151043AC: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x151043B0: b           L_1510447C
    // 0x151043B4: sh          $t9, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r25;
        goto L_1510447C;
    // 0x151043B4: sh          $t9, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r25;
L_151043B8:
    // 0x151043B8: lw          $t0, 0x10($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X10);
    // 0x151043BC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151043C0: sb          $zero, -0x15F4($at)
    MEM_B(-0X15F4, ctx->r1) = 0;
    // 0x151043C4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x151043C8: jal         0x1000E2F4
    // 0x151043CC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_1000E2F4(rdram, ctx);
        goto after_7;
    // 0x151043CC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_7:
    // 0x151043D0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x151043D4: lw          $a0, 0x318($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X318);
    // 0x151043D8: jal         0x151254F4
    // 0x151043DC: lbu         $a1, 0x13F($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X13F);
    func_151254F4(rdram, ctx);
        goto after_8;
    // 0x151043DC: lbu         $a1, 0x13F($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X13F);
    after_8:
    // 0x151043E0: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x151043E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x151043E8: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x151043EC: lw          $t2, 0x318($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X318);
    // 0x151043F0: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x151043F4: swc1        $f8, 0x674($t2)
    MEM_W(0X674, ctx->r10) = ctx->f8.u32l;
    // 0x151043F8: sb          $t3, 0x1A($a2)
    MEM_B(0X1A, ctx->r6) = ctx->r11;
    // 0x151043FC: b           L_15104480
    // 0x15104400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15104480;
    // 0x15104400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15104404:
    // 0x15104404: lw          $t4, -0x15F8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X15F8);
    // 0x15104408: lbu         $v0, 0x1B($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1B);
    // 0x1510440C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x15104410: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x15104414: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x15104418: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x1510441C: subu        $v0, $v0, $t5
    ctx->r2 = SUB32(ctx->r2, ctx->r13);
    // 0x15104420: bgtz        $v0, L_15104444
    if (SIGNED(ctx->r2) > 0) {
        // 0x15104424: sll         $a0, $v0, 2
        ctx->r4 = S32(ctx->r2 << 2);
            goto L_15104444;
    }
    // 0x15104424: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x15104428: jal         0x1516972C
    // 0x1510442C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_1516972C(rdram, ctx);
        goto after_9;
    // 0x1510442C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_9:
    // 0x15104430: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x15104434: jal         0x151D66F0
    // 0x15104438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151D66F0(rdram, ctx);
        goto after_10;
    // 0x15104438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x1510443C: b           L_15104480
    // 0x15104440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_15104480;
    // 0x15104440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15104444:
    // 0x15104444: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x15104448: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x1510444C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x15104450: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x15104454: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x15104458: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x1510445C: sra         $t6, $a0, 8
    ctx->r14 = S32(SIGNED(ctx->r4) >> 8);
    // 0x15104460: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x15104464: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x15104468: jal         0x151D66F0
    // 0x1510446C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_151D66F0(rdram, ctx);
        goto after_11;
    // 0x1510446C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_11:
    // 0x15104470: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x15104474: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x15104478: sb          $v0, 0x1B($a2)
    MEM_B(0X1B, ctx->r6) = ctx->r2;
L_1510447C:
    // 0x1510447C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_15104480:
    // 0x15104480: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x15104484: jr          $ra
    // 0x15104488: nop

    return;
    return;
    // 0x15104488: nop

;}
RECOMP_FUNC void func_150031EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150031EC: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150031F0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x150031F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150031F8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150031FC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x15003200: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x15003204: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x15003208: slti        $at, $s0, 0x45
    ctx->r1 = SIGNED(ctx->r16) < 0X45 ? 1 : 0;
    // 0x1500320C: bne         $at, $zero, L_15003218
    if (ctx->r1 != 0) {
        // 0x15003210: addiu       $a0, $sp, 0x60
        ctx->r4 = ADD32(ctx->r29, 0X60);
            goto L_15003218;
    }
    // 0x15003210: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x15003214: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_15003218:
    // 0x15003218: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x1500321C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x15003220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15003224: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x15003228: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1500322C: jal         0x1502B6BC
    // 0x15003230: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_1502B6BC(rdram, ctx);
        goto after_0;
    // 0x15003230: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x15003234: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15003238: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1500323C: sw          $v0, 0xE50($at)
    MEM_W(0XE50, ctx->r1) = ctx->r2;
    // 0x15003240: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15003244: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x15003248: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x1500324C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x15003250: addiu       $v1, $v1, 0xE44
    ctx->r3 = ADD32(ctx->r3, 0XE44);
    // 0x15003254: addiu       $a1, $a1, 0xE14
    ctx->r5 = ADD32(ctx->r5, 0XE14);
    // 0x15003258: addiu       $a0, $a0, 0xE04
    ctx->r4 = ADD32(ctx->r4, 0XE04);
    // 0x1500325C: addiu       $v0, $v0, 0xE50
    ctx->r2 = ADD32(ctx->r2, 0XE50);
L_15003260:
    // 0x15003260: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x15003264: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x15003268: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x1500326C: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
    // 0x15003270: sw          $zero, -0x4($a1)
    MEM_W(-0X4, ctx->r5) = 0;
    // 0x15003274: bne         $v1, $v0, L_15003260
    if (ctx->r3 != ctx->r2) {
        // 0x15003278: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_15003260;
    }
    // 0x15003278: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x1500327C: jal         0x150034B4
    // 0x15003280: nop

    func_150034B4(rdram, ctx);
        goto after_1;
    // 0x15003280: nop

    after_1:
    // 0x15003284: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x15003288: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x1500328C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15003290: beq         $t7, $zero, L_15003428
    if (ctx->r15 == 0) {
        // 0x15003294: sll         $t8, $a0, 2
        ctx->r24 = S32(ctx->r4 << 2);
            goto L_15003428;
    }
    // 0x15003294: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x15003298: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x1500329C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150032A0: jal         0x10003C40
    // 0x150032A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x150032A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x150032A8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x150032AC: addiu       $s1, $s1, 0xE30
    ctx->r17 = ADD32(ctx->r17, 0XE30);
    // 0x150032B0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x150032B4: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x150032B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150032BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150032C0: jal         0x10003C40
    // 0x150032C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_3;
    // 0x150032C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x150032C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x150032CC: addiu       $v1, $v1, 0xE34
    ctx->r3 = ADD32(ctx->r3, 0XE34);
    // 0x150032D0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x150032D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150032D8: jal         0x100226F0
    // 0x150032DC: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x150032DC: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_4:
    // 0x150032E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x150032E4: jal         0x100226F0
    // 0x150032E8: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    bzero_recomp(rdram, ctx);
        goto after_5;
    // 0x150032E8: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_5:
    // 0x150032EC: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x150032F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x150032F4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x150032F8: beq         $v0, $zero, L_15003428
    if (ctx->r2 == 0) {
        // 0x150032FC: sb          $v0, 0xE38($at)
        MEM_B(0XE38, ctx->r1) = ctx->r2;
            goto L_15003428;
    }
    // 0x150032FC: sb          $v0, 0xE38($at)
    MEM_B(0XE38, ctx->r1) = ctx->r2;
    // 0x15003300: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
    // 0x15003304: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_15003308:
    // 0x15003308: beql        $s0, $zero, L_15003414
    if (ctx->r16 == 0) {
        // 0x1500330C: lw          $v0, 0x64($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X64);
            goto L_15003414;
    }
    goto skip_0;
    // 0x1500330C: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x15003310: lw          $t9, 0x4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X4);
    // 0x15003314: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15003318: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1500331C: beql        $t9, $zero, L_15003414
    if (ctx->r25 == 0) {
        // 0x15003320: lw          $v0, 0x64($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X64);
            goto L_15003414;
    }
    goto skip_1;
    // 0x15003320: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    skip_1:
    // 0x15003324: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x15003328: beq         $v0, $zero, L_15003334
    if (ctx->r2 == 0) {
        // 0x1500332C: addu        $t0, $v0, $s0
        ctx->r8 = ADD32(ctx->r2, ctx->r16);
            goto L_15003334;
    }
    // 0x1500332C: addu        $t0, $v0, $s0
    ctx->r8 = ADD32(ctx->r2, ctx->r16);
    // 0x15003330: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
L_15003334:
    // 0x15003334: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x15003338: beq         $v0, $zero, L_15003344
    if (ctx->r2 == 0) {
        // 0x1500333C: addu        $t1, $v0, $s0
        ctx->r9 = ADD32(ctx->r2, ctx->r16);
            goto L_15003344;
    }
    // 0x1500333C: addu        $t1, $v0, $s0
    ctx->r9 = ADD32(ctx->r2, ctx->r16);
    // 0x15003340: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
L_15003344:
    // 0x15003344: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x15003348: beq         $v0, $zero, L_15003354
    if (ctx->r2 == 0) {
        // 0x1500334C: addu        $t2, $v0, $s0
        ctx->r10 = ADD32(ctx->r2, ctx->r16);
            goto L_15003354;
    }
    // 0x1500334C: addu        $t2, $v0, $s0
    ctx->r10 = ADD32(ctx->r2, ctx->r16);
    // 0x15003350: sw          $t2, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r10;
L_15003354:
    // 0x15003354: jal         0x15003120
    // 0x15003358: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    func_15003120(rdram, ctx);
        goto after_6;
    // 0x15003358: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    after_6:
    // 0x1500335C: sltiu       $at, $s2, 0x4
    ctx->r1 = ctx->r18 < 0X4 ? 1 : 0;
    // 0x15003360: beq         $at, $zero, L_15003404
    if (ctx->r1 == 0) {
        // 0x15003364: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_15003404;
    }
    // 0x15003364: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15003368: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x1500336C: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x15003370: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x15003374: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x15003378: addiu       $t3, $t3, 0xE00
    ctx->r11 = ADD32(ctx->r11, 0XE00);
    // 0x1500337C: addiu       $t5, $t5, 0xE10
    ctx->r13 = ADD32(ctx->r13, 0XE10);
    // 0x15003380: addiu       $v1, $s0, 0x28
    ctx->r3 = ADD32(ctx->r16, 0X28);
    // 0x15003384: addu        $s1, $v0, $t3
    ctx->r17 = ADD32(ctx->r2, ctx->r11);
    // 0x15003388: addu        $a3, $v0, $t5
    ctx->r7 = ADD32(ctx->r2, ctx->r13);
    // 0x1500338C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15003390: subu        $t6, $a0, $v1
    ctx->r14 = SUB32(ctx->r4, ctx->r3);
    // 0x15003394: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x15003398: srl         $t7, $t6, 4
    ctx->r15 = S32(U32(ctx->r14) >> 4);
    // 0x1500339C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x150033A0: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    // 0x150033A4: sw          $t7, 0xE40($at)
    MEM_W(0XE40, ctx->r1) = ctx->r15;
    // 0x150033A8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x150033AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x150033B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x150033B4: bne         $s2, $zero, L_150033D0
    if (ctx->r18 != 0) {
        // 0x150033B8: sw          $t8, 0xE20($at)
        MEM_W(0XE20, ctx->r1) = ctx->r24;
            goto L_150033D0;
    }
    // 0x150033B8: sw          $t8, 0xE20($at)
    MEM_W(0XE20, ctx->r1) = ctx->r24;
    // 0x150033BC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x150033C0: jal         0x150039BC
    // 0x150033C4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    func_150039BC(rdram, ctx);
        goto after_7;
    // 0x150033C4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    after_7:
    // 0x150033C8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x150033CC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_150033D0:
    // 0x150033D0: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x150033D4: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x150033D8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x150033DC: jal         0x150049A4
    // 0x150033E0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    func_150049A4(rdram, ctx);
        goto after_8;
    // 0x150033E0: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    after_8:
    // 0x150033E4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x150033E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150033EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150033F0: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
    // 0x150033F4: jal         0x1510CE60
    // 0x150033F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1510CE60(rdram, ctx);
        goto after_9;
    // 0x150033F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x150033FC: b           L_15003414
    // 0x15003400: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
        goto L_15003414;
    // 0x15003400: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_15003404:
    // 0x15003404: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x15003408: jal         0x150049A4
    // 0x1500340C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_150049A4(rdram, ctx);
        goto after_10;
    // 0x1500340C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_10:
    // 0x15003410: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_15003414:
    // 0x15003414: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x15003418: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x1500341C: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x15003420: bnel        $at, $zero, L_15003308
    if (ctx->r1 != 0) {
        // 0x15003424: lw          $s0, 0x0($s3)
        ctx->r16 = MEM_W(ctx->r19, 0X0);
            goto L_15003308;
    }
    goto skip_2;
    // 0x15003424: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    skip_2:
L_15003428:
    // 0x15003428: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x1500342C: addiu       $s2, $s2, 0xDF0
    ctx->r18 = ADD32(ctx->r18, 0XDF0);
    // 0x15003430: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x15003434: lui         $s3, 0x8008
    ctx->r19 = S32(0X8008 << 16);
    // 0x15003438: addiu       $s3, $s3, 0x2B20
    ctx->r19 = ADD32(ctx->r19, 0X2B20);
    // 0x1500343C: lbu         $v0, 0x4B($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X4B);
    // 0x15003440: beq         $v0, $zero, L_15003498
    if (ctx->r2 == 0) {
        // 0x15003444: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_15003498;
    }
    // 0x15003444: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x15003448: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x1500344C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x15003450: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x15003454: lw          $s0, 0x0($t2)
    ctx->r16 = MEM_W(ctx->r10, 0X0);
    // 0x15003458: beq         $s0, $zero, L_15003498
    if (ctx->r16 == 0) {
        // 0x1500345C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15003498;
    }
    // 0x1500345C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_15003460:
    // 0x15003460: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x15003464: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x15003468: jal         0x1510D0EC
    // 0x1500346C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510D0EC(rdram, ctx);
        goto after_11;
    // 0x1500346C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x15003470: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x15003474: lbu         $t4, 0x4B($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X4B);
    // 0x15003478: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x1500347C: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x15003480: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x15003484: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x15003488: lw          $s0, 0x0($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X0);
    // 0x1500348C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x15003490: bnel        $s0, $zero, L_15003460
    if (ctx->r16 != 0) {
        // 0x15003494: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15003460;
    }
    goto skip_3;
    // 0x15003494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
L_15003498:
    // 0x15003498: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1500349C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x150034A0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x150034A4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x150034A8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x150034AC: jr          $ra
    // 0x150034B0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x150034B0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_15052F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15052F58: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x15052F5C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x15052F60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15052F64: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x15052F68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15052F6C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x15052F70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15052F74: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x15052F78: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15052F7C: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x15052F80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15052F84: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x15052F88: sb          $zero, 0x13C($v0)
    MEM_B(0X13C, ctx->r2) = 0;
    // 0x15052F8C: sw          $zero, 0x218($v0)
    MEM_W(0X218, ctx->r2) = 0;
    // 0x15052F90: sb          $a1, 0x232($v0)
    MEM_B(0X232, ctx->r2) = ctx->r5;
    // 0x15052F94: jr          $ra
    // 0x15052F98: nop

    return;
    return;
    // 0x15052F98: nop

;}
RECOMP_FUNC void func_1516A3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516A3F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1516A3F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1516A3FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1516A400: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1516A404: lh          $t6, 0x22($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X22);
    // 0x1516A408: lh          $t7, 0x2A($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2A);
    // 0x1516A40C: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x1516A410: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1516A414: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x1516A418: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1516A41C: bnel        $at, $zero, L_1516A450
    if (ctx->r1 != 0) {
        // 0x1516A420: slt         $at, $v1, $t0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_1516A450;
    }
    goto skip_0;
    // 0x1516A420: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    skip_0:
    // 0x1516A424: jal         0x1510F800
    // 0x1516A428: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_1510F800(rdram, ctx);
        goto after_0;
    // 0x1516A428: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_0:
    // 0x1516A42C: lh          $a0, 0x20($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X20);
    // 0x1516A430: lh          $a1, 0x22($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X22);
    // 0x1516A434: lh          $a2, 0x24($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X24);
    // 0x1516A438: jal         0x1510F8D8
    // 0x1516A43C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1510F8D8(rdram, ctx);
        goto after_1;
    // 0x1516A43C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1516A440: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x1516A444: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x1516A448: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1516A44C: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
L_1516A450:
    // 0x1516A450: bne         $at, $zero, L_1516A4E0
    if (ctx->r1 != 0) {
        // 0x1516A454: subu        $t8, $t0, $v1
        ctx->r24 = SUB32(ctx->r8, ctx->r3);
            goto L_1516A4E0;
    }
    // 0x1516A454: subu        $t8, $t0, $v1
    ctx->r24 = SUB32(ctx->r8, ctx->r3);
    // 0x1516A458: slti        $at, $t8, 0x32
    ctx->r1 = SIGNED(ctx->r24) < 0X32 ? 1 : 0;
    // 0x1516A45C: beq         $at, $zero, L_1516A524
    if (ctx->r1 == 0) {
        // 0x1516A460: sh          $zero, 0x38($s0)
        MEM_H(0X38, ctx->r16) = 0;
            goto L_1516A524;
    }
    // 0x1516A460: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x1516A464: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x1516A468: lw          $t9, -0x3524($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3524);
    // 0x1516A46C: addiu       $t1, $zero, 0x100
    ctx->r9 = ADD32(0, 0X100);
    // 0x1516A470: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    // 0x1516A474: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x1516A478: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x1516A47C: lh          $t2, 0x20($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X20);
    // 0x1516A480: addiu       $at, $zero, 0x13EC
    ctx->r1 = ADD32(0, 0X13EC);
    // 0x1516A484: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x1516A488: sh          $t2, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r10;
    // 0x1516A48C: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x1516A490: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x1516A494: addiu       $t4, $t3, 0xA
    ctx->r12 = ADD32(ctx->r11, 0XA);
    // 0x1516A498: sh          $t4, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r12;
    // 0x1516A49C: lh          $t5, 0x24($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X24);
    // 0x1516A4A0: sh          $t5, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r13;
    // 0x1516A4A4: lbu         $v0, 0x3B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B);
    // 0x1516A4A8: sb          $zero, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = 0;
    // 0x1516A4AC: sb          $t7, 0x40($sp)
    MEM_B(0X40, ctx->r29) = ctx->r15;
    // 0x1516A4B0: sll         $v1, $v0, 12
    ctx->r3 = S32(ctx->r2 << 12);
    // 0x1516A4B4: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x1516A4B8: mflo        $t6
    ctx->r14 = lo;
    // 0x1516A4BC: addiu       $v1, $t6, 0xCC
    ctx->r3 = ADD32(ctx->r14, 0XCC);
    // 0x1516A4C0: sh          $v1, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r3;
    // 0x1516A4C4: sh          $v1, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r3;
    // 0x1516A4C8: sb          $v0, 0x41($sp)
    MEM_B(0X41, ctx->r29) = ctx->r2;
    // 0x1516A4CC: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x1516A4D0: jal         0x15167AD8
    // 0x1516A4D4: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    func_15167AD8(rdram, ctx);
        goto after_2;
    // 0x1516A4D4: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    after_2:
    // 0x1516A4D8: b           L_1516A528
    // 0x1516A4DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_1516A528;
    // 0x1516A4DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1516A4E0:
    // 0x1516A4E0: lh          $t8, 0x26($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X26);
    // 0x1516A4E4: lh          $t2, 0x28($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X28);
    // 0x1516A4E8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516A4EC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1516A4F0: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x1516A4F4: lwc1        $f0, 0x6CC8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6CC8);
    // 0x1516A4F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1516A4FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1516A500: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1516A504: nop

    // 0x1516A508: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1516A50C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1516A510: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1516A514: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x1516A518: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x1516A51C: sh          $t1, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r9;
    // 0x1516A520: sh          $t4, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r12;
L_1516A524:
    // 0x1516A524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1516A528:
    // 0x1516A528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1516A52C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1516A530: jr          $ra
    // 0x1516A534: nop

    return;
    return;
    // 0x1516A534: nop

;}
RECOMP_FUNC void func_1506AAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506AAE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1506AAE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1506AAE8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x1506AAEC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x1506AAF0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x1506AAF4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x1506AAF8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1506AAFC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1506AB00: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x1506AB04: lw          $s0, -0x3DA0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3DA0);
    // 0x1506AB08: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x1506AB0C: addiu       $s1, $s1, -0x3D30
    ctx->r17 = ADD32(ctx->r17, -0X3D30);
    // 0x1506AB10: beq         $s0, $zero, L_1506AB60
    if (ctx->r16 == 0) {
        // 0x1506AB14: lui         $s3, 0x800D
        ctx->r19 = S32(0X800D << 16);
            goto L_1506AB60;
    }
    // 0x1506AB14: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x1506AB18: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x1506AB1C: addiu       $s2, $s2, 0x1560
    ctx->r18 = ADD32(ctx->r18, 0X1560);
    // 0x1506AB20: addiu       $s3, $s3, 0x1570
    ctx->r19 = ADD32(ctx->r19, 0X1570);
L_1506AB24:
    // 0x1506AB24: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x1506AB28: beq         $t6, $zero, L_1506AB50
    if (ctx->r14 == 0) {
        // 0x1506AB2C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_1506AB50;
    }
    // 0x1506AB2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1506AB30: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x1506AB34: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1506AB38: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x1506AB3C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1506AB40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x1506AB44: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x1506AB48: jal         0x15137610
    // 0x1506AB4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_15137610(rdram, ctx);
        goto after_0;
    // 0x1506AB4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_1506AB50:
    // 0x1506AB50: sra         $t9, $s0, 1
    ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
    // 0x1506AB54: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x1506AB58: bne         $t9, $zero, L_1506AB24
    if (ctx->r25 != 0) {
        // 0x1506AB5C: addiu       $s1, $s1, 0x32C
        ctx->r17 = ADD32(ctx->r17, 0X32C);
            goto L_1506AB24;
    }
    // 0x1506AB5C: addiu       $s1, $s1, 0x32C
    ctx->r17 = ADD32(ctx->r17, 0X32C);
L_1506AB60:
    // 0x1506AB60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1506AB64: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x1506AB68: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x1506AB6C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x1506AB70: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x1506AB74: jr          $ra
    // 0x1506AB78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1506AB78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_151D33FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D33FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D3400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D3404: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x151D3408: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x151D340C: lbu         $a2, 0x14($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X14);
    // 0x151D3410: lbu         $a3, 0x4($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X4);
    // 0x151D3414: beq         $v0, $v1, L_151D3424
    if (ctx->r2 == ctx->r3) {
        // 0x151D3418: nop
    
            goto L_151D3424;
    }
    // 0x151D3418: nop

    // 0x151D341C: bnel        $a3, $a2, L_151D3430
    if (ctx->r7 != ctx->r6) {
        // 0x151D3420: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_151D3430;
    }
    goto skip_0;
    // 0x151D3420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_151D3424:
    // 0x151D3424: jal         0x1516972C
    // 0x151D3428: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x151D3428: nop

    after_0:
    // 0x151D342C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151D3430:
    // 0x151D3430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D3434: jr          $ra
    // 0x151D3438: nop

    return;
    return;
    // 0x151D3438: nop

;}
RECOMP_FUNC void func_15039A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15039A78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15039A7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15039A80: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x15039A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15039A88: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15039A8C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x15039A90: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x15039A94: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x15039A98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15039A9C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x15039AA0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15039AA4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x15039AA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15039AAC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x15039AB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x15039AB4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15039AB8: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x15039ABC: lw          $v1, -0x3A18($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A18);
    // 0x15039AC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15039AC4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x15039AC8: jal         0x15039A54
    // 0x15039ACC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_15039A54(rdram, ctx);
        goto after_0;
    // 0x15039ACC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x15039AD0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x15039AD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15039AD8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x15039ADC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x15039AE0: beq         $v1, $zero, L_15039C30
    if (ctx->r3 == 0) {
        // 0x15039AE4: lw          $a3, 0x2C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X2C);
            goto L_15039C30;
    }
    // 0x15039AE4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x15039AE8: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x15039AEC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x15039AF0: beql        $t7, $at, L_15039C34
    if (ctx->r15 == ctx->r1) {
        // 0x15039AF4: lwc1        $f0, 0x0($a0)
        ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
            goto L_15039C34;
    }
    goto skip_0;
    // 0x15039AF4: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x15039AF8: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x15039AFC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15039B00: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15039B04: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15039B08: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x15039B0C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x15039B10: nop

    // 0x15039B14: bc1tl       L_15039B38
    if (c1cs) {
        // 0x15039B18: swc1        $f10, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
            goto L_15039B38;
    }
    goto skip_1;
    // 0x15039B18: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    skip_1:
    // 0x15039B1C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15039B20: sub.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x15039B24: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x15039B28: nop

    // 0x15039B2C: bc1f        L_15039B58
    if (!c1cs) {
        // 0x15039B30: nop
    
            goto L_15039B58;
    }
    // 0x15039B30: nop

    // 0x15039B34: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
L_15039B38:
    // 0x15039B38: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15039B3C: beq         $a2, $zero, L_15039CB8
    if (ctx->r6 == 0) {
        // 0x15039B40: swc1        $f16, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
            goto L_15039CB8;
    }
    // 0x15039B40: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x15039B44: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15039B48: swc1        $f18, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f18.u32l;
    // 0x15039B4C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15039B50: b           L_15039CB8
    // 0x15039B54: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
        goto L_15039CB8;
    // 0x15039B54: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
L_15039B58:
    // 0x15039B58: beql        $a2, $zero, L_15039B78
    if (ctx->r6 == 0) {
        // 0x15039B5C: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_15039B78;
    }
    goto skip_2;
    // 0x15039B5C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_2:
    // 0x15039B60: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x15039B64: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15039B68: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
    // 0x15039B6C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15039B70: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x15039B74: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_15039B78:
    // 0x15039B78: nop

    // 0x15039B7C: bc1fl       L_15039B90
    if (!c1cs) {
        // 0x15039B80: lwc1        $f2, 0x0($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
            goto L_15039B90;
    }
    goto skip_3;
    // 0x15039B80: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    skip_3:
    // 0x15039B84: b           L_15039BB0
    // 0x15039B88: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
        goto L_15039BB0;
    // 0x15039B88: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x15039B8C: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
L_15039B90:
    // 0x15039B90: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15039B94: nop

    // 0x15039B98: bc1fl       L_15039BAC
    if (!c1cs) {
        // 0x15039B9C: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_15039BAC;
    }
    goto skip_4;
    // 0x15039B9C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_4:
    // 0x15039BA0: b           L_15039BAC
    // 0x15039BA4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_15039BAC;
    // 0x15039BA4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x15039BA8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_15039BAC:
    // 0x15039BAC: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
L_15039BB0:
    // 0x15039BB0: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x15039BB4: lwc1        $f12, 0x14($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15039BB8: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15039BBC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x15039BC0: add.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x15039BC4: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x15039BC8: nop

    // 0x15039BCC: bc1t        L_15039BEC
    if (c1cs) {
        // 0x15039BD0: nop
    
            goto L_15039BEC;
    }
    // 0x15039BD0: nop

    // 0x15039BD4: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15039BD8: sub.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x15039BDC: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x15039BE0: nop

    // 0x15039BE4: bc1fl       L_15039BF8
    if (!c1cs) {
        // 0x15039BE8: c.lt.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
            goto L_15039BF8;
    }
    goto skip_5;
    // 0x15039BE8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    skip_5:
L_15039BEC:
    // 0x15039BEC: b           L_15039CB8
    // 0x15039BF0: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
        goto L_15039CB8;
    // 0x15039BF0: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
    // 0x15039BF4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
L_15039BF8:
    // 0x15039BF8: nop

    // 0x15039BFC: bc1fl       L_15039C10
    if (!c1cs) {
        // 0x15039C00: c.lt.s      $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
            goto L_15039C10;
    }
    goto skip_6;
    // 0x15039C00: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    skip_6:
    // 0x15039C04: b           L_15039CB8
    // 0x15039C08: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_15039CB8;
    // 0x15039C08: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x15039C0C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
L_15039C10:
    // 0x15039C10: nop

    // 0x15039C14: bc1fl       L_15039C28
    if (!c1cs) {
        // 0x15039C18: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_15039C28;
    }
    goto skip_7;
    // 0x15039C18: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_7:
    // 0x15039C1C: b           L_15039C28
    // 0x15039C20: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_15039C28;
    // 0x15039C20: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x15039C24: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_15039C28:
    // 0x15039C28: b           L_15039CB8
    // 0x15039C2C: swc1        $f12, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f12.u32l;
        goto L_15039CB8;
    // 0x15039C2C: swc1        $f12, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f12.u32l;
L_15039C30:
    // 0x15039C30: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
L_15039C34:
    // 0x15039C34: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    // 0x15039C38: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15039C3C: nop

    // 0x15039C40: bc1fl       L_15039C54
    if (!c1cs) {
        // 0x15039C44: lwc1        $f2, 0x0($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
            goto L_15039C54;
    }
    goto skip_8;
    // 0x15039C44: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    skip_8:
    // 0x15039C48: b           L_15039C74
    // 0x15039C4C: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
        goto L_15039C74;
    // 0x15039C4C: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
    // 0x15039C50: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
L_15039C54:
    // 0x15039C54: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15039C58: nop

    // 0x15039C5C: bc1fl       L_15039C70
    if (!c1cs) {
        // 0x15039C60: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_15039C70;
    }
    goto skip_9;
    // 0x15039C60: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_9:
    // 0x15039C64: b           L_15039C70
    // 0x15039C68: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_15039C70;
    // 0x15039C68: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x15039C6C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_15039C70:
    // 0x15039C70: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
L_15039C74:
    // 0x15039C74: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x15039C78: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x15039C7C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x15039C80: nop

    // 0x15039C84: bc1fl       L_15039C98
    if (!c1cs) {
        // 0x15039C88: lwc1        $f14, 0x8($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
            goto L_15039C98;
    }
    goto skip_10;
    // 0x15039C88: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    skip_10:
    // 0x15039C8C: b           L_15039CB8
    // 0x15039C90: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
        goto L_15039CB8;
    // 0x15039C90: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x15039C94: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
L_15039C98:
    // 0x15039C98: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x15039C9C: nop

    // 0x15039CA0: bc1fl       L_15039CB4
    if (!c1cs) {
        // 0x15039CA4: mov.s       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
            goto L_15039CB4;
    }
    goto skip_11;
    // 0x15039CA4: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    skip_11:
    // 0x15039CA8: b           L_15039CB4
    // 0x15039CAC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
        goto L_15039CB4;
    // 0x15039CAC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x15039CB0: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_15039CB4:
    // 0x15039CB4: swc1        $f12, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f12.u32l;
L_15039CB8:
    // 0x15039CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15039CBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15039CC0: jr          $ra
    // 0x15039CC4: nop

    return;
    return;
    // 0x15039CC4: nop

;}
RECOMP_FUNC void func_15157DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15157DEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15157DF0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15157DF4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15157DF8: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15157DFC: addiu       $v1, $v1, -0x1640
    ctx->r3 = ADD32(ctx->r3, -0X1640);
    // 0x15157E00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x15157E04: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15157E08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15157E0C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x15157E10: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x15157E14: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x15157E18: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x15157E1C: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x15157E20: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    // 0x15157E24: jal         0x150A8050
    // 0x15157E28: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x15157E28: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    after_0:
    // 0x15157E2C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x15157E30: addiu       $v1, $v1, -0x1640
    ctx->r3 = ADD32(ctx->r3, -0X1640);
    // 0x15157E34: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x15157E38: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x15157E3C: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x15157E40: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x15157E44: swc1        $f4, 0xAC($t0)
    MEM_W(0XAC, ctx->r8) = ctx->f4.u32l;
    // 0x15157E48: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x15157E4C: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x15157E50: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x15157E54: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x15157E58: swc1        $f6, 0xB0($t3)
    MEM_W(0XB0, ctx->r11) = ctx->f6.u32l;
    // 0x15157E5C: lbu         $t4, 0x0($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X0);
    // 0x15157E60: lwc1        $f8, 0x5C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x15157E64: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x15157E68: addu        $t6, $s0, $t5
    ctx->r14 = ADD32(ctx->r16, ctx->r13);
    // 0x15157E6C: swc1        $f8, 0xB4($t6)
    MEM_W(0XB4, ctx->r14) = ctx->f8.u32l;
    // 0x15157E70: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x15157E74: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15157E78: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x15157E7C: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x15157E80: lwc1        $f10, 0x7C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X7C);
    // 0x15157E84: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15157E88: swc1        $f18, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->f18.u32l;
    // 0x15157E8C: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x15157E90: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15157E94: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x15157E98: addu        $v0, $s0, $t0
    ctx->r2 = ADD32(ctx->r16, ctx->r8);
    // 0x15157E9C: lwc1        $f4, 0x80($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X80);
    // 0x15157EA0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15157EA4: swc1        $f8, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->f8.u32l;
    // 0x15157EA8: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x15157EAC: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15157EB0: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x15157EB4: addu        $v0, $s0, $t2
    ctx->r2 = ADD32(ctx->r16, ctx->r10);
    // 0x15157EB8: lwc1        $f10, 0x84($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X84);
    // 0x15157EBC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15157EC0: swc1        $f18, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->f18.u32l;
    // 0x15157EC4: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x15157EC8: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15157ECC: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x15157ED0: addu        $v0, $s0, $t4
    ctx->r2 = ADD32(ctx->r16, ctx->r12);
    // 0x15157ED4: lwc1        $f4, 0x8C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8C);
    // 0x15157ED8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15157EDC: swc1        $f8, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->f8.u32l;
    // 0x15157EE0: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x15157EE4: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15157EE8: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x15157EEC: addu        $v0, $s0, $t6
    ctx->r2 = ADD32(ctx->r16, ctx->r14);
    // 0x15157EF0: lwc1        $f10, 0x90($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X90);
    // 0x15157EF4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15157EF8: swc1        $f18, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->f18.u32l;
    // 0x15157EFC: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x15157F00: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x15157F04: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x15157F08: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x15157F0C: lwc1        $f4, 0x94($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X94);
    // 0x15157F10: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15157F14: swc1        $f8, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->f8.u32l;
    // 0x15157F18: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x15157F1C: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15157F20: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x15157F24: addu        $v0, $s0, $t0
    ctx->r2 = ADD32(ctx->r16, ctx->r8);
    // 0x15157F28: lwc1        $f10, 0x9C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X9C);
    // 0x15157F2C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15157F30: swc1        $f18, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f18.u32l;
    // 0x15157F34: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x15157F38: lwc1        $f6, 0xC($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15157F3C: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x15157F40: addu        $v0, $s0, $t2
    ctx->r2 = ADD32(ctx->r16, ctx->r10);
    // 0x15157F44: lwc1        $f4, 0xA0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XA0);
    // 0x15157F48: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15157F4C: swc1        $f8, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f8.u32l;
    // 0x15157F50: lbu         $t3, 0x0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X0);
    // 0x15157F54: lwc1        $f16, 0xC($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0XC);
    // 0x15157F58: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x15157F5C: addu        $v0, $s0, $t4
    ctx->r2 = ADD32(ctx->r16, ctx->r12);
    // 0x15157F60: lwc1        $f10, 0xA4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XA4);
    // 0x15157F64: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x15157F68: swc1        $f18, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->f18.u32l;
    // 0x15157F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15157F70: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15157F74: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15157F78: jr          $ra
    // 0x15157F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x15157F7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_150F02C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F02C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150F02C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F02C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x150F02CC: jal         0x150F0318
    // 0x150F02D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_150F0318(rdram, ctx);
        goto after_0;
    // 0x150F02D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x150F02D4: jal         0x1514933C
    // 0x150F02D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x150F02D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150F02DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F02E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150F02E4: jr          $ra
    // 0x150F02E8: nop

    return;
    return;
    // 0x150F02E8: nop

;}
RECOMP_FUNC void func_1508855C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1508855C: lui         $v1, 0x8008
    ctx->r3 = S32(0X8008 << 16);
    // 0x15088560: lw          $v1, 0x72A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X72A0);
    // 0x15088564: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15088568: addiu       $t6, $t6, -0x3D30
    ctx->r14 = ADD32(ctx->r14, -0X3D30);
    // 0x1508856C: bne         $v1, $zero, L_1508857C
    if (ctx->r3 != 0) {
        // 0x15088570: subu        $v0, $a0, $t6
        ctx->r2 = SUB32(ctx->r4, ctx->r14);
            goto L_1508857C;
    }
    // 0x15088570: subu        $v0, $a0, $t6
    ctx->r2 = SUB32(ctx->r4, ctx->r14);
    // 0x15088574: jr          $ra
    // 0x15088578: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    return;
    // 0x15088578: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_1508857C:
    // 0x1508857C: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15088580: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x15088584: mflo        $v0
    ctx->r2 = lo;
    // 0x15088588: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1508858C: bne         $v0, $zero, L_1508859C
    if (ctx->r2 != 0) {
        // 0x15088590: lui         $t9, 0x800D
        ctx->r25 = S32(0X800D << 16);
            goto L_1508859C;
    }
    // 0x15088590: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15088594: jr          $ra
    // 0x15088598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    return;
    // 0x15088598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1508859C:
    // 0x1508859C: lb          $t8, 0x2398($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X2398);
    // 0x150885A0: lb          $t9, 0x2399($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X2399);
    // 0x150885A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150885A8: addiu       $a2, $v1, 0x84
    ctx->r6 = ADD32(ctx->r3, 0X84);
    // 0x150885AC: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x150885B0: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x150885B4: bnel        $at, $zero, L_150885E4
    if (ctx->r1 != 0) {
        // 0x150885B8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_150885E4;
    }
    goto skip_0;
    // 0x150885B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
L_150885BC:
    // 0x150885BC: lb          $t0, 0x31($a2)
    ctx->r8 = MEM_B(ctx->r6, 0X31);
    // 0x150885C0: bnel        $v0, $t0, L_150885D4
    if (ctx->r2 != ctx->r8) {
        // 0x150885C4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_150885D4;
    }
    goto skip_1;
    // 0x150885C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x150885C8: jr          $ra
    // 0x150885CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    return;
    // 0x150885CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x150885D0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_150885D4:
    // 0x150885D4: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x150885D8: bne         $at, $zero, L_150885BC
    if (ctx->r1 != 0) {
        // 0x150885DC: addiu       $a2, $a2, 0x84
        ctx->r6 = ADD32(ctx->r6, 0X84);
            goto L_150885BC;
    }
    // 0x150885DC: addiu       $a2, $a2, 0x84
    ctx->r6 = ADD32(ctx->r6, 0X84);
    // 0x150885E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_150885E4:
    // 0x150885E4: jr          $ra
    // 0x150885E8: nop

    return;
    return;
    // 0x150885E8: nop

;}
RECOMP_FUNC void func_151A1FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151A1FB4: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x151A1FB8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x151A1FBC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x151A1FC0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x151A1FC4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x151A1FC8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x151A1FCC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x151A1FD0: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x151A1FD4: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x151A1FD8: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x151A1FDC: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x151A1FE0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x151A1FE4: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x151A1FE8: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x151A1FEC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x151A1FF0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x151A1FF4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x151A1FF8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x151A1FFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151A2000: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151A2004: lwc1        $f4, 0x3C($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X3C);
    // 0x151A2008: lwc1        $f10, 0x38($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X38);
    // 0x151A200C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A2010: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151A2014: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151A2018: lui         $t9, 0xC
    ctx->r25 = S32(0XC << 16);
    // 0x151A201C: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x151A2020: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x151A2024: addiu       $t7, $zero, 0x12
    ctx->r15 = ADD32(0, 0X12);
    // 0x151A2028: addiu       $t8, $zero, 0x120
    ctx->r24 = ADD32(0, 0X120);
    // 0x151A202C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151A2030: ori         $t9, $t9, 0x1
    ctx->r25 = ctx->r25 | 0X1;
    // 0x151A2034: addiu       $t0, $t0, 0xD34
    ctx->r8 = ADD32(ctx->r8, 0XD34);
    // 0x151A2038: addiu       $t1, $zero, 0x7D0
    ctx->r9 = ADD32(0, 0X7D0);
    // 0x151A203C: swc1        $f16, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->f16.u32l;
    // 0x151A2040: lwc1        $f4, 0x38($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X38);
    // 0x151A2044: addiu       $t2, $zero, 0x7D0
    ctx->r10 = ADD32(0, 0X7D0);
    // 0x151A2048: addiu       $s0, $s4, 0x28
    ctx->r16 = ADD32(ctx->r20, 0X28);
    // 0x151A204C: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x151A2050: addiu       $fp, $sp, 0xA8
    ctx->r30 = ADD32(ctx->r29, 0XA8);
    // 0x151A2054: addiu       $s7, $sp, 0xC4
    ctx->r23 = ADD32(ctx->r29, 0XC4);
    // 0x151A2058: addiu       $s6, $zero, 0x51
    ctx->r22 = ADD32(0, 0X51);
    // 0x151A205C: bc1f        L_151A2460
    if (!c1cs) {
        // 0x151A2060: lui         $s5, 0x8009
        ctx->r21 = S32(0X8009 << 16);
            goto L_151A2460;
    }
    // 0x151A2060: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x151A2064: sb          $t6, 0xF0($sp)
    MEM_B(0XF0, ctx->r29) = ctx->r14;
    // 0x151A2068: sb          $zero, 0xF1($sp)
    MEM_B(0XF1, ctx->r29) = 0;
    // 0x151A206C: sb          $zero, 0xF2($sp)
    MEM_B(0XF2, ctx->r29) = 0;
    // 0x151A2070: sb          $zero, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = 0;
    // 0x151A2074: sb          $zero, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = 0;
    // 0x151A2078: sb          $zero, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = 0;
    // 0x151A207C: sb          $t7, 0xE3($sp)
    MEM_B(0XE3, ctx->r29) = ctx->r15;
    // 0x151A2080: sh          $t8, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r24;
    // 0x151A2084: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x151A2088: sh          $zero, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = 0;
    // 0x151A208C: sw          $t0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r8;
    // 0x151A2090: sh          $zero, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = 0;
    // 0x151A2094: sh          $zero, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = 0;
    // 0x151A2098: sh          $zero, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = 0;
    // 0x151A209C: sh          $zero, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = 0;
    // 0x151A20A0: sb          $zero, 0xEE($sp)
    MEM_B(0XEE, ctx->r29) = 0;
    // 0x151A20A4: sb          $zero, 0xF3($sp)
    MEM_B(0XF3, ctx->r29) = 0;
    // 0x151A20A8: sh          $t1, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r9;
    // 0x151A20AC: sh          $t2, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r10;
    // 0x151A20B0: addiu       $s5, $s5, 0xB60
    ctx->r21 = ADD32(ctx->r21, 0XB60);
    // 0x151A20B4: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_151A20B8:
    // 0x151A20B8: jal         0x150ADA20
    // 0x151A20BC: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151A20BC: nop

    after_0:
    // 0x151A20C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x151A20C4: andi        $t3, $s1, 0xFF
    ctx->r11 = ctx->r17 & 0XFF;
    // 0x151A20C8: jal         0x150ADA20
    // 0x151A20CC: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x151A20CC: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    after_1:
    // 0x151A20D0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x151A20D4: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x151A20D8: andi        $t4, $s2, 0xFF
    ctx->r12 = ctx->r18 & 0XFF;
    // 0x151A20DC: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x151A20E0: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x151A20E4: jal         0x151423D8
    // 0x151A20E8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x151A20E8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_2:
    // 0x151A20EC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x151A20F0: jal         0x151423D8
    // 0x151A20F4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x151A20F4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_3:
    // 0x151A20F8: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x151A20FC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x151A2100: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x151A2104: jal         0x151423D8
    // 0x151A2108: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x151A2108: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_4:
    // 0x151A210C: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x151A2110: jal         0x151423D8
    // 0x151A2114: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x151A2114: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_5:
    // 0x151A2118: jal         0x150ADA68
    // 0x151A211C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151A211C: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    after_6:
    // 0x151A2120: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x151A2124: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x151A2128: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x151A212C: mul.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151A2130: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x151A2134: mul.s       $f12, $f2, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x151A2138: nop

    // 0x151A213C: mul.s       $f8, $f12, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f20.fl);
    // 0x151A2140: nop

    // 0x151A2144: mul.s       $f18, $f2, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x151A2148: nop

    // 0x151A214C: mul.s       $f6, $f12, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x151A2150: add.s       $f28, $f10, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151A2154: sub.s       $f30, $f16, $f18
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f30.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x151A2158: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151A215C: jal         0x150ADA20
    // 0x151A2160: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151A2160: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x151A2164: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x151A2168: beq         $t7, $zero, L_151A217C
    if (ctx->r15 == 0) {
        // 0x151A216C: lwc1        $f20, 0x88($sp)
        ctx->f20.u32l = MEM_W(ctx->r29, 0X88);
            goto L_151A217C;
    }
    // 0x151A216C: lwc1        $f20, 0x88($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151A2170: lhu         $t8, 0xF8($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XF8);
    // 0x151A2174: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x151A2178: sh          $t9, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r25;
L_151A217C:
    // 0x151A217C: jal         0x150ADA20
    // 0x151A2180: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x151A2180: nop

    after_8:
    // 0x151A2184: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x151A2188: beq         $t0, $zero, L_151A2198
    if (ctx->r8 == 0) {
        // 0x151A218C: lhu         $t1, 0xF8($sp)
        ctx->r9 = MEM_HU(ctx->r29, 0XF8);
            goto L_151A2198;
    }
    // 0x151A218C: lhu         $t1, 0xF8($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0XF8);
    // 0x151A2190: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x151A2194: sh          $t2, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r10;
L_151A2198:
    // 0x151A2198: jal         0x150ADA20
    // 0x151A219C: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x151A219C: nop

    after_9:
    // 0x151A21A0: lh          $t3, 0x1A($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X1A);
    // 0x151A21A4: lh          $t6, 0x18($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X18);
    // 0x151A21A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x151A21AC: divu        $zero, $v0, $t4
    lo = S32(U32(ctx->r2) / U32(ctx->r12)); hi = S32(U32(ctx->r2) % U32(ctx->r12));
    // 0x151A21B0: mfhi        $t5
    ctx->r13 = hi;
    // 0x151A21B4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x151A21B8: bne         $t4, $zero, L_151A21C4
    if (ctx->r12 != 0) {
        // 0x151A21BC: nop
    
            goto L_151A21C4;
    }
    // 0x151A21BC: nop

    // 0x151A21C0: break       7
    do_break(354034112);
L_151A21C4:
    // 0x151A21C4: sh          $t7, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r15;
    // 0x151A21C8: jal         0x150ADA20
    // 0x151A21CC: nop

    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x151A21CC: nop

    after_10:
    // 0x151A21D0: lh          $t8, 0x1E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1E);
    // 0x151A21D4: lh          $t5, 0xD2($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XD2);
    // 0x151A21D8: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x151A21DC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x151A21E0: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x151A21E4: mfhi        $t0
    ctx->r8 = hi;
    // 0x151A21E8: lbu         $t4, 0x1D8($s5)
    ctx->r12 = MEM_BU(ctx->r21, 0X1D8);
    // 0x151A21EC: lh          $t1, 0x1C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X1C);
    // 0x151A21F0: div         $zero, $t6, $t5
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r13)));
    // 0x151A21F4: mflo        $t7
    ctx->r15 = lo;
    // 0x151A21F8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x151A21FC: bne         $t9, $zero, L_151A2208
    if (ctx->r25 != 0) {
        // 0x151A2200: nop
    
            goto L_151A2208;
    }
    // 0x151A2200: nop

    // 0x151A2204: break       7
    do_break(354034180);
L_151A2208:
    // 0x151A2208: multu       $t4, $t7
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151A220C: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x151A2210: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x151A2214: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x151A2218: bne         $t5, $zero, L_151A2224
    if (ctx->r13 != 0) {
        // 0x151A221C: nop
    
            goto L_151A2224;
    }
    // 0x151A221C: nop

    // 0x151A2220: break       7
    do_break(354034208);
L_151A2224:
    // 0x151A2224: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A2228: bne         $t5, $at, L_151A223C
    if (ctx->r13 != ctx->r1) {
        // 0x151A222C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A223C;
    }
    // 0x151A222C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A2230: bne         $t6, $at, L_151A223C
    if (ctx->r14 != ctx->r1) {
        // 0x151A2234: nop
    
            goto L_151A223C;
    }
    // 0x151A2234: nop

    // 0x151A2238: break       6
    do_break(354034232);
L_151A223C:
    // 0x151A223C: mflo        $t8
    ctx->r24 = lo;
    // 0x151A2240: sh          $t8, 0xEC($sp)
    MEM_H(0XEC, ctx->r29) = ctx->r24;
    // 0x151A2244: lh          $t9, 0xEC($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XEC);
    // 0x151A2248: sra         $a0, $t9, 2
    ctx->r4 = S32(SIGNED(ctx->r25) >> 2);
    // 0x151A224C: subu        $t0, $t9, $a0
    ctx->r8 = SUB32(ctx->r25, ctx->r4);
    // 0x151A2250: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x151A2254: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x151A2258: subu        $t3, $t9, $t2
    ctx->r11 = SUB32(ctx->r25, ctx->r10);
    // 0x151A225C: div         $zero, $s3, $t3
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r11)));
    // 0x151A2260: sra         $v1, $t9, 1
    ctx->r3 = S32(SIGNED(ctx->r25) >> 1);
    // 0x151A2264: mflo        $t6
    ctx->r14 = lo;
    // 0x151A2268: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x151A226C: sra         $t4, $t5, 16
    ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
    // 0x151A2270: subu        $t7, $t9, $t4
    ctx->r15 = SUB32(ctx->r25, ctx->r12);
    // 0x151A2274: div         $zero, $a1, $t7
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r15)));
    // 0x151A2278: mflo        $t8
    ctx->r24 = lo;
    // 0x151A227C: sh          $t0, 0xAC($sp)
    MEM_H(0XAC, ctx->r29) = ctx->r8;
    // 0x151A2280: sh          $t6, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r14;
    // 0x151A2284: div         $zero, $s3, $v1
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r3)));
    // 0x151A2288: mflo        $t0
    ctx->r8 = lo;
    // 0x151A228C: sh          $v1, 0xB2($sp)
    MEM_H(0XB2, ctx->r29) = ctx->r3;
    // 0x151A2290: sh          $t8, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r24;
    // 0x151A2294: div         $zero, $s3, $a0
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r4)));
    // 0x151A2298: mflo        $t1
    ctx->r9 = lo;
    // 0x151A229C: sh          $v1, 0xB4($sp)
    MEM_H(0XB4, ctx->r29) = ctx->r3;
    // 0x151A22A0: sh          $t0, 0xB6($sp)
    MEM_H(0XB6, ctx->r29) = ctx->r8;
    // 0x151A22A4: sh          $a0, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r4;
    // 0x151A22A8: sh          $t1, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r9;
    // 0x151A22AC: sh          $v1, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r3;
    // 0x151A22B0: sh          $t9, 0xAA($sp)
    MEM_H(0XAA, ctx->r29) = ctx->r25;
    // 0x151A22B4: sh          $t9, 0xB0($sp)
    MEM_H(0XB0, ctx->r29) = ctx->r25;
    // 0x151A22B8: bne         $t3, $zero, L_151A22C4
    if (ctx->r11 != 0) {
        // 0x151A22BC: nop
    
            goto L_151A22C4;
    }
    // 0x151A22BC: nop

    // 0x151A22C0: break       7
    do_break(354034368);
L_151A22C4:
    // 0x151A22C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A22C8: bne         $t3, $at, L_151A22DC
    if (ctx->r11 != ctx->r1) {
        // 0x151A22CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A22DC;
    }
    // 0x151A22CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A22D0: bne         $s3, $at, L_151A22DC
    if (ctx->r19 != ctx->r1) {
        // 0x151A22D4: nop
    
            goto L_151A22DC;
    }
    // 0x151A22D4: nop

    // 0x151A22D8: break       6
    do_break(354034392);
L_151A22DC:
    // 0x151A22DC: bne         $t7, $zero, L_151A22E8
    if (ctx->r15 != 0) {
        // 0x151A22E0: nop
    
            goto L_151A22E8;
    }
    // 0x151A22E0: nop

    // 0x151A22E4: break       7
    do_break(354034404);
L_151A22E8:
    // 0x151A22E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A22EC: bne         $t7, $at, L_151A2300
    if (ctx->r15 != ctx->r1) {
        // 0x151A22F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A2300;
    }
    // 0x151A22F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A22F4: bne         $a1, $at, L_151A2300
    if (ctx->r5 != ctx->r1) {
        // 0x151A22F8: nop
    
            goto L_151A2300;
    }
    // 0x151A22F8: nop

    // 0x151A22FC: break       6
    do_break(354034428);
L_151A2300:
    // 0x151A2300: bne         $v1, $zero, L_151A230C
    if (ctx->r3 != 0) {
        // 0x151A2304: nop
    
            goto L_151A230C;
    }
    // 0x151A2304: nop

    // 0x151A2308: break       7
    do_break(354034440);
L_151A230C:
    // 0x151A230C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A2310: bne         $v1, $at, L_151A2324
    if (ctx->r3 != ctx->r1) {
        // 0x151A2314: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A2324;
    }
    // 0x151A2314: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A2318: bne         $s3, $at, L_151A2324
    if (ctx->r19 != ctx->r1) {
        // 0x151A231C: nop
    
            goto L_151A2324;
    }
    // 0x151A231C: nop

    // 0x151A2320: break       6
    do_break(354034464);
L_151A2324:
    // 0x151A2324: bne         $a0, $zero, L_151A2330
    if (ctx->r4 != 0) {
        // 0x151A2328: nop
    
            goto L_151A2330;
    }
    // 0x151A2328: nop

    // 0x151A232C: break       7
    do_break(354034476);
L_151A2330:
    // 0x151A2330: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151A2334: bne         $a0, $at, L_151A2348
    if (ctx->r4 != ctx->r1) {
        // 0x151A2338: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_151A2348;
    }
    // 0x151A2338: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151A233C: bne         $s3, $at, L_151A2348
    if (ctx->r19 != ctx->r1) {
        // 0x151A2340: nop
    
            goto L_151A2348;
    }
    // 0x151A2340: nop

    // 0x151A2344: break       6
    do_break(354034500);
L_151A2348:
    // 0x151A2348: jal         0x150ADA20
    // 0x151A234C: nop

    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x151A234C: nop

    after_11:
    // 0x151A2350: lh          $t2, 0x22($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X22);
    // 0x151A2354: lh          $t5, 0x20($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X20);
    // 0x151A2358: lh          $t4, 0xEC($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XEC);
    // 0x151A235C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x151A2360: divu        $zero, $v0, $t3
    lo = S32(U32(ctx->r2) / U32(ctx->r11)); hi = S32(U32(ctx->r2) % U32(ctx->r11));
    // 0x151A2364: mfhi        $t6
    ctx->r14 = hi;
    // 0x151A2368: addu        $t9, $t6, $t5
    ctx->r25 = ADD32(ctx->r14, ctx->r13);
    // 0x151A236C: bne         $t3, $zero, L_151A2378
    if (ctx->r11 != 0) {
        // 0x151A2370: nop
    
            goto L_151A2378;
    }
    // 0x151A2370: nop

    // 0x151A2374: break       7
    do_break(354034548);
L_151A2378:
    // 0x151A2378: sra         $t7, $t4, 1
    ctx->r15 = S32(SIGNED(ctx->r12) >> 1);
    // 0x151A237C: sh          $t9, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r25;
    // 0x151A2380: jal         0x150ADA20
    // 0x151A2384: sh          $t7, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x151A2384: sh          $t7, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r15;
    after_12:
    // 0x151A2388: divu        $zero, $v0, $s6
    lo = S32(U32(ctx->r2) / U32(ctx->r22)); hi = S32(U32(ctx->r2) % U32(ctx->r22));
    // 0x151A238C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x151A2390: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151A2394: trunc.w.s   $f16, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    ctx->f16.u32l = TRUNC_W_S(ctx->f30.fl);
    // 0x151A2398: mfhi        $t8
    ctx->r24 = hi;
    // 0x151A239C: mul.s       $f4, $f28, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f28.fl, ctx->f0.fl);
    // 0x151A23A0: trunc.w.s   $f8, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    ctx->f8.u32l = TRUNC_W_S(ctx->f28.fl);
    // 0x151A23A4: mfc1        $t6, $f16
    ctx->r14 = (int32_t)ctx->f16.u32l;
    // 0x151A23A8: mul.s       $f10, $f30, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f0.fl);
    // 0x151A23AC: addiu       $t0, $t8, 0x50
    ctx->r8 = ADD32(ctx->r24, 0X50);
    // 0x151A23B0: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x151A23B4: mul.s       $f16, $f20, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x151A23B8: sh          $t0, 0xC2($sp)
    MEM_H(0XC2, ctx->r29) = ctx->r8;
    // 0x151A23BC: sh          $t2, 0xD4($sp)
    MEM_H(0XD4, ctx->r29) = ctx->r10;
    // 0x151A23C0: sh          $t6, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r14;
    // 0x151A23C4: bne         $s6, $zero, L_151A23D0
    if (ctx->r22 != 0) {
        // 0x151A23C8: nop
    
            goto L_151A23D0;
    }
    // 0x151A23C8: nop

    // 0x151A23CC: break       7
    do_break(354034636);
L_151A23D0:
    // 0x151A23D0: trunc.w.s   $f18, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    ctx->f18.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x151A23D4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x151A23D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151A23DC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151A23E0: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x151A23E4: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x151A23E8: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x151A23EC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x151A23F0: sh          $t9, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = ctx->r25;
    // 0x151A23F4: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x151A23F8: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x151A23FC: sb          $t8, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r24;
    // 0x151A2400: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x151A2404: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x151A2408: sb          $t2, 0xE2($sp)
    MEM_B(0XE2, ctx->r29) = ctx->r10;
    // 0x151A240C: sb          $t5, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r13;
    // 0x151A2410: lbu         $t9, 0xC($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0XC);
    // 0x151A2414: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151A2418: lbu         $t4, 0x1($s4)
    ctx->r12 = MEM_BU(ctx->r20, 0X1);
    // 0x151A241C: jal         0x15167D84
    // 0x151A2420: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_15167D84(rdram, ctx);
        goto after_13;
    // 0x151A2420: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_13:
    // 0x151A2424: beq         $v0, $zero, L_151A2438
    if (ctx->r2 == 0) {
        // 0x151A2428: addiu       $a0, $v0, 0x50
        ctx->r4 = ADD32(ctx->r2, 0X50);
            goto L_151A2438;
    }
    // 0x151A2428: addiu       $a0, $v0, 0x50
    ctx->r4 = ADD32(ctx->r2, 0X50);
    // 0x151A242C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x151A2430: jal         0x10022EC0
    // 0x151A2434: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x151A2434: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_14:
L_151A2438:
    // 0x151A2438: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151A243C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151A2440: lwc1        $f4, 0x10($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151A2444: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x151A2448: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x151A244C: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151A2450: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x151A2454: nop

    // 0x151A2458: bc1t        L_151A20B8
    if (c1cs) {
        // 0x151A245C: nop
    
            goto L_151A20B8;
    }
    // 0x151A245C: nop

L_151A2460:
    // 0x151A2460: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x151A2464: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x151A2468: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x151A246C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x151A2470: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x151A2474: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x151A2478: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x151A247C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x151A2480: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x151A2484: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x151A2488: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x151A248C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x151A2490: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x151A2494: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x151A2498: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x151A249C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x151A24A0: jr          $ra
    // 0x151A24A4: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    return;
    // 0x151A24A4: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_15177F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15177F90: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x15177F94: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x15177F98: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x15177F9C: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x15177FA0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x15177FA4: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x15177FA8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x15177FAC: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x15177FB0: andi        $s3, $a2, 0xFF
    ctx->r19 = ctx->r6 & 0XFF;
    // 0x15177FB4: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x15177FB8: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x15177FBC: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x15177FC0: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x15177FC4: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x15177FC8: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x15177FCC: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x15177FD0: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x15177FD4: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x15177FD8: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x15177FDC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x15177FE0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x15177FE4: sw          $a0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r4;
    // 0x15177FE8: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x15177FEC: lbu         $s7, 0x113($sp)
    ctx->r23 = MEM_BU(ctx->r29, 0X113);
    // 0x15177FF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15177FF4: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15177FF8: addiu       $a0, $zero, 0x3A
    ctx->r4 = ADD32(0, 0X3A);
    // 0x15177FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15178000: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x15178004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15178008: jal         0x15167A68
    // 0x1517800C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1517800C: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    after_0:
    // 0x15178010: beq         $v0, $zero, L_15178220
    if (ctx->r2 == 0) {
        // 0x15178014: lw          $v1, 0x118($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X118);
            goto L_15178220;
    }
    // 0x15178014: lw          $v1, 0x118($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X118);
    // 0x15178018: bne         $v1, $zero, L_15178028
    if (ctx->r3 != 0) {
        // 0x1517801C: addiu       $t2, $zero, 0x320
        ctx->r10 = ADD32(0, 0X320);
            goto L_15178028;
    }
    // 0x1517801C: addiu       $t2, $zero, 0x320
    ctx->r10 = ADD32(0, 0X320);
    // 0x15178020: b           L_1517802C
    // 0x15178024: addiu       $v1, $zero, 0x118
    ctx->r3 = ADD32(0, 0X118);
        goto L_1517802C;
    // 0x15178024: addiu       $v1, $zero, 0x118
    ctx->r3 = ADD32(0, 0X118);
L_15178028:
    // 0x15178028: addiu       $v1, $zero, 0x8C
    ctx->r3 = ADD32(0, 0X8C);
L_1517802C:
    // 0x1517802C: beq         $s1, $zero, L_1517804C
    if (ctx->r17 == 0) {
        // 0x15178030: lui         $t4, 0x8009
        ctx->r12 = S32(0X8009 << 16);
            goto L_1517804C;
    }
    // 0x15178030: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x15178034: lui         $t7, 0x8000
    ctx->r15 = S32(0X8000 << 16);
    // 0x15178038: sw          $s1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r17;
    // 0x1517803C: sw          $t7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r15;
    // 0x15178040: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x15178044: b           L_1517806C
    // 0x15178048: lw          $fp, 0x100($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X100);
        goto L_1517806C;
    // 0x15178048: lw          $fp, 0x100($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X100);
L_1517804C:
    // 0x1517804C: lw          $fp, 0x100($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X100);
    // 0x15178050: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x15178054: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x15178058: andi        $t9, $fp, 0xFFFF
    ctx->r25 = ctx->r30 & 0XFFFF;
    // 0x1517805C: or          $t0, $t8, $t9
    ctx->r8 = ctx->r24 | ctx->r25;
    // 0x15178060: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x15178064: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x15178068: sw          $t1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r9;
L_1517806C:
    // 0x1517806C: sw          $s0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r16;
    // 0x15178070: sw          $fp, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r30;
    // 0x15178074: sw          $a0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r4;
    // 0x15178078: sh          $zero, 0x30($v0)
    MEM_H(0X30, ctx->r2) = 0;
    // 0x1517807C: sh          $t2, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r10;
    // 0x15178080: sb          $s2, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r18;
    // 0x15178084: sb          $s3, 0x34($v0)
    MEM_B(0X34, ctx->r2) = ctx->r19;
    // 0x15178088: lw          $t3, 0x114($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X114);
    // 0x1517808C: sh          $zero, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = 0;
    // 0x15178090: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x15178094: sb          $t3, 0x37($v0)
    MEM_B(0X37, ctx->r2) = ctx->r11;
    // 0x15178098: lw          $t4, -0x359C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X359C);
    // 0x1517809C: lw          $t6, 0x10C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10C);
    // 0x151780A0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151780A4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x151780A8: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151780AC: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x151780B0: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    // 0x151780B4: sh          $zero, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = 0;
    // 0x151780B8: sh          $zero, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = 0;
    // 0x151780BC: sh          $zero, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = 0;
    // 0x151780C0: sb          $t5, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r13;
    // 0x151780C4: sh          $zero, 0xD8($sp)
    MEM_H(0XD8, ctx->r29) = 0;
    // 0x151780C8: sh          $zero, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = 0;
    // 0x151780CC: sh          $v1, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r3;
    // 0x151780D0: sh          $v1, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r3;
    // 0x151780D4: sb          $zero, 0xE2($sp)
    MEM_B(0XE2, ctx->r29) = 0;
    // 0x151780D8: sb          $t7, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = ctx->r15;
    // 0x151780DC: sb          $t8, 0xE5($sp)
    MEM_B(0XE5, ctx->r29) = ctx->r24;
    // 0x151780E0: sb          $t9, 0xE6($sp)
    MEM_B(0XE6, ctx->r29) = ctx->r25;
    // 0x151780E4: sb          $t0, 0xE7($sp)
    MEM_B(0XE7, ctx->r29) = ctx->r8;
    // 0x151780E8: sh          $zero, 0xEC($sp)
    MEM_H(0XEC, ctx->r29) = 0;
    // 0x151780EC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x151780F0: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
    // 0x151780F4: sw          $t4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r12;
    // 0x151780F8: blez        $s2, L_15178220
    if (SIGNED(ctx->r18) <= 0) {
        // 0x151780FC: sh          $t6, 0xE0($sp)
        MEM_H(0XE0, ctx->r29) = ctx->r14;
            goto L_15178220;
    }
    // 0x151780FC: sh          $t6, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r14;
    // 0x15178100: mtc1        $s0, $f22
    ctx->f22.u32l = ctx->r16;
    // 0x15178104: mtc1        $a0, $f20
    ctx->f20.u32l = ctx->r4;
    // 0x15178108: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x1517810C: cvt.s.w     $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    ctx->f24.fl = CVT_S_W(ctx->f22.u32l);
    // 0x15178110: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x15178114: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15178118: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x1517811C: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x15178120: cvt.s.w     $f26, $f20
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 20);
    ctx->f26.fl = CVT_S_W(ctx->f20.u32l);
    // 0x15178124: addiu       $s5, $sp, 0xB8
    ctx->r21 = ADD32(ctx->r29, 0XB8);
L_15178128:
    // 0x15178128: jal         0x150ADA20
    // 0x1517812C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1517812C: nop

    after_1:
    // 0x15178130: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x15178134: jal         0x15048A40
    // 0x15178138: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_15048A40(rdram, ctx);
        goto after_2;
    // 0x15178138: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x1517813C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x15178140: jal         0x150489B0
    // 0x15178144: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_3;
    // 0x15178144: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
    // 0x15178148: jal         0x150ADA20
    // 0x1517814C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1517814C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_4:
    // 0x15178150: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x15178154: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x15178158: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1517815C: bgez        $t1, L_15178170
    if (SIGNED(ctx->r9) >= 0) {
        // 0x15178160: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_15178170;
    }
    // 0x15178160: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15178164: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15178168: nop

    // 0x1517816C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_15178170:
    // 0x15178170: mul.s       $f18, $f10, $f28
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x15178174: nop

    // 0x15178178: mul.s       $f0, $f18, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x1517817C: nop

    // 0x15178180: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x15178184: nop

    // 0x15178188: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x1517818C: add.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f24.fl + ctx->f4.fl;
    // 0x15178190: add.s       $f10, $f26, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f26.fl + ctx->f16.fl;
    // 0x15178194: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15178198: trunc.w.s   $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x1517819C: mfc1        $s0, $f8
    ctx->r16 = (int32_t)ctx->f8.u32l;
    // 0x151781A0: mfc1        $s1, $f18
    ctx->r17 = (int32_t)ctx->f18.u32l;
    // 0x151781A4: jal         0x150ADA20
    // 0x151781A8: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151781A8: nop

    after_5:
    // 0x151781AC: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x151781B0: addu        $s2, $t4, $fp
    ctx->r18 = ADD32(ctx->r12, ctx->r30);
    // 0x151781B4: jal         0x150ADA20
    // 0x151781B8: addiu       $s2, $s2, -0x4E
    ctx->r18 = ADD32(ctx->r18, -0X4E);
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x151781B8: addiu       $s2, $s2, -0x4E
    ctx->r18 = ADD32(ctx->r18, -0X4E);
    after_6:
    // 0x151781BC: andi        $t5, $v0, 0x7
    ctx->r13 = ctx->r2 & 0X7;
    // 0x151781C0: addiu       $t6, $t5, 0x7
    ctx->r14 = ADD32(ctx->r13, 0X7);
    // 0x151781C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151781C8: sb          $t6, 0xE3($sp)
    MEM_B(0XE3, ctx->r29) = ctx->r14;
    // 0x151781CC: sh          $zero, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = 0;
    // 0x151781D0: sh          $zero, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = 0;
    // 0x151781D4: sh          $s0, 0xC8($sp)
    MEM_H(0XC8, ctx->r29) = ctx->r16;
    // 0x151781D8: sh          $s2, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r18;
    // 0x151781DC: sh          $s1, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r17;
    // 0x151781E0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151781E4: addiu       $a0, $zero, 0x3B
    ctx->r4 = ADD32(0, 0X3B);
    // 0x151781E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151781EC: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x151781F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151781F4: jal         0x15167A68
    // 0x151781F8: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    func_15167A68(rdram, ctx);
        goto after_7;
    // 0x151781F8: sw          $s7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r23;
    after_7:
    // 0x151781FC: beq         $v0, $zero, L_15178220
    if (ctx->r2 == 0) {
        // 0x15178200: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_15178220;
    }
    // 0x15178200: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15178204: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x15178208: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x1517820C: jal         0x10023A10
    // 0x15178210: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    bcopy_recomp(rdram, ctx);
        goto after_8;
    // 0x15178210: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    after_8:
    // 0x15178214: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x15178218: bne         $s3, $s4, L_15178128
    if (ctx->r19 != ctx->r20) {
        // 0x1517821C: sb          $s6, 0x48($s0)
        MEM_B(0X48, ctx->r16) = ctx->r22;
            goto L_15178128;
    }
    // 0x1517821C: sb          $s6, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r22;
L_15178220:
    // 0x15178220: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x15178224: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x15178228: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1517822C: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x15178230: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x15178234: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x15178238: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x1517823C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x15178240: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x15178244: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x15178248: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x1517824C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x15178250: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x15178254: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x15178258: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x1517825C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x15178260: jr          $ra
    // 0x15178264: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    return;
    // 0x15178264: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_1507735C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507735C: jr          $ra
    // 0x15077360: nop

    return;
    return;
    // 0x15077360: nop

;}
RECOMP_FUNC void func_1507DB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507DB64: jr          $ra
    // 0x1507DB68: nop

    return;
    return;
    // 0x1507DB68: nop

;}
RECOMP_FUNC void func_1519E464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519E464: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1519E468: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1519E46C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1519E470: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1519E474: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x1519E478: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x1519E47C: addiu       $v1, $s0, 0x28
    ctx->r3 = ADD32(ctx->r16, 0X28);
    // 0x1519E480: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1519E484: bnel        $t7, $zero, L_1519E494
    if (ctx->r15 != 0) {
        // 0x1519E488: lw          $a0, 0x0($v1)
        ctx->r4 = MEM_W(ctx->r3, 0X0);
            goto L_1519E494;
    }
    goto skip_0;
    // 0x1519E488: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x1519E48C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1519E490: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
L_1519E494:
    // 0x1519E494: lbu         $t8, 0x4($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4);
    // 0x1519E498: lbu         $t9, 0x3B($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X3B);
    // 0x1519E49C: beq         $t8, $t9, L_1519E4A8
    if (ctx->r24 == ctx->r25) {
        // 0x1519E4A0: nop
    
            goto L_1519E4A8;
    }
    // 0x1519E4A0: nop

    // 0x1519E4A4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_1519E4A8:
    // 0x1519E4A8: bne         $t0, $zero, L_1519E540
    if (ctx->r8 != 0) {
        // 0x1519E4AC: nop
    
            goto L_1519E540;
    }
    // 0x1519E4AC: nop

    // 0x1519E4B0: lw          $t1, 0x1D4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X1D4);
    // 0x1519E4B4: beq         $t1, $zero, L_1519E540
    if (ctx->r9 == 0) {
        // 0x1519E4B8: nop
    
            goto L_1519E540;
    }
    // 0x1519E4B8: nop

    // 0x1519E4BC: lbu         $t4, 0xC($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XC);
    // 0x1519E4C0: lbu         $t2, 0xD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD);
    // 0x1519E4C4: lw          $a1, 0x8($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X8);
    // 0x1519E4C8: lh          $a2, 0xE($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XE);
    // 0x1519E4CC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1519E4D0: lbu         $t5, 0x1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1);
    // 0x1519E4D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x1519E4D8: sb          $t0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r8;
    // 0x1519E4DC: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x1519E4E0: andi        $a3, $t2, 0x1
    ctx->r7 = ctx->r10 & 0X1;
    // 0x1519E4E4: jal         0x1519D030
    // 0x1519E4E8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    func_1519D030(rdram, ctx);
        goto after_0;
    // 0x1519E4E8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    after_0:
    // 0x1519E4EC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x1519E4F0: beq         $v0, $zero, L_1519E540
    if (ctx->r2 == 0) {
        // 0x1519E4F4: lbu         $t0, 0x33($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X33);
            goto L_1519E540;
    }
    // 0x1519E4F4: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x1519E4F8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x1519E4FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1519E500: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1519E504: lw          $a0, 0x2F4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2F4);
    // 0x1519E508: sb          $t0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r8;
    // 0x1519E50C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x1519E510: jal         0x1514ED3C
    // 0x1519E514: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_1514ED3C(rdram, ctx);
        goto after_1;
    // 0x1519E514: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_1:
    // 0x1519E518: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x1519E51C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x1519E520: beq         $v0, $zero, L_1519E540
    if (ctx->r2 == 0) {
        // 0x1519E524: lbu         $t0, 0x33($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X33);
            goto L_1519E540;
    }
    // 0x1519E524: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x1519E528: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x1519E52C: sb          $t0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r8;
    // 0x1519E530: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x1519E534: jal         0x1514EC1C
    // 0x1519E538: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_1514EC1C(rdram, ctx);
        goto after_2;
    // 0x1519E538: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x1519E53C: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
L_1519E540:
    // 0x1519E540: beql        $t0, $zero, L_1519E560
    if (ctx->r8 == 0) {
        // 0x1519E544: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_1519E560;
    }
    goto skip_1;
    // 0x1519E544: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x1519E548: lbu         $t8, 0xD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0XD);
    // 0x1519E54C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1519E550: sh          $t7, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r15;
    // 0x1519E554: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x1519E558: sb          $t9, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r25;
    // 0x1519E55C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_1519E560:
    // 0x1519E560: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1519E564: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1519E568: jr          $ra
    // 0x1519E56C: nop

    return;
    return;
    // 0x1519E56C: nop

;}
RECOMP_FUNC void func_15101090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15101090: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15101094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15101098: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1510109C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x151010A0: lhu         $t7, 0x1A0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1A0);
    // 0x151010A4: beql        $t7, $zero, L_151010B8
    if (ctx->r15 == 0) {
        // 0x151010A8: lw          $v0, 0x20($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X20);
            goto L_151010B8;
    }
    goto skip_0;
    // 0x151010A8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x151010AC: jal         0x100111C8
    // 0x151010B0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_100111C8(rdram, ctx);
        goto after_0;
    // 0x151010B0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x151010B4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_151010B8:
    // 0x151010B8: lw          $a0, 0x138($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X138);
    // 0x151010BC: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x151010C0: beql        $a0, $zero, L_151010D8
    if (ctx->r4 == 0) {
        // 0x151010C4: lw          $a0, 0x2C($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X2C);
            goto L_151010D8;
    }
    goto skip_1;
    // 0x151010C4: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    skip_1:
    // 0x151010C8: jal         0x1516972C
    // 0x151010CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x151010CC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x151010D0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151010D4: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
L_151010D8:
    // 0x151010D8: beql        $a0, $zero, L_151010F0
    if (ctx->r4 == 0) {
        // 0x151010DC: lw          $a0, 0x24($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X24);
            goto L_151010F0;
    }
    goto skip_2;
    // 0x151010DC: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    skip_2:
    // 0x151010E0: jal         0x1516972C
    // 0x151010E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1516972C(rdram, ctx);
        goto after_2;
    // 0x151010E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x151010E8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151010EC: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
L_151010F0:
    // 0x151010F0: beql        $a0, $zero, L_15101108
    if (ctx->r4 == 0) {
        // 0x151010F4: lw          $a0, 0x30($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X30);
            goto L_15101108;
    }
    goto skip_3;
    // 0x151010F4: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
    skip_3:
    // 0x151010F8: jal         0x1516972C
    // 0x151010FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1516972C(rdram, ctx);
        goto after_3;
    // 0x151010FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x15101100: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x15101104: lw          $a0, 0x30($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X30);
L_15101108:
    // 0x15101108: beql        $a0, $zero, L_15101120
    if (ctx->r4 == 0) {
        // 0x1510110C: lw          $a0, 0x34($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X34);
            goto L_15101120;
    }
    goto skip_4;
    // 0x1510110C: lw          $a0, 0x34($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X34);
    skip_4:
    // 0x15101110: jal         0x1516972C
    // 0x15101114: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_1516972C(rdram, ctx);
        goto after_4;
    // 0x15101114: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_4:
    // 0x15101118: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x1510111C: lw          $a0, 0x34($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X34);
L_15101120:
    // 0x15101120: beq         $a0, $zero, L_15101130
    if (ctx->r4 == 0) {
        // 0x15101124: nop
    
            goto L_15101130;
    }
    // 0x15101124: nop

    // 0x15101128: jal         0x1516972C
    // 0x1510112C: nop

    func_1516972C(rdram, ctx);
        goto after_5;
    // 0x1510112C: nop

    after_5:
L_15101130:
    // 0x15101130: jal         0x1513CA6C
    // 0x15101134: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_1513CA6C(rdram, ctx);
        goto after_6;
    // 0x15101134: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x15101138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510113C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15101140: jr          $ra
    // 0x15101144: nop

    return;
    return;
    // 0x15101144: nop

;}
RECOMP_FUNC void func_15044660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15044660: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15044664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15044668: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1504466C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15044670: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x15044674: addiu       $a1, $sp, 0x2E
    ctx->r5 = ADD32(ctx->r29, 0X2E);
    // 0x15044678: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x1504467C: addiu       $a3, $sp, 0x2A
    ctx->r7 = ADD32(ctx->r29, 0X2A);
    // 0x15044680: jal         0x1507C3E0
    // 0x15044684: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_1507C3E0(rdram, ctx);
        goto after_0;
    // 0x15044684: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x15044688: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1504468C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x15044690: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x15044694: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x15044698: beq         $v0, $at, L_150446B0
    if (ctx->r2 == ctx->r1) {
        // 0x1504469C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_150446B0;
    }
    // 0x1504469C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x150446A0: beq         $v0, $at, L_150446B0
    if (ctx->r2 == ctx->r1) {
        // 0x150446A4: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_150446B0;
    }
    // 0x150446A4: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x150446A8: bne         $v0, $at, L_150446DC
    if (ctx->r2 != ctx->r1) {
        // 0x150446AC: nop
    
            goto L_150446DC;
    }
    // 0x150446AC: nop

L_150446B0:
    // 0x150446B0: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x150446B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150446B8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150446BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150446C0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x150446C4: addiu       $a1, $a1, -0x4224
    ctx->r5 = ADD32(ctx->r5, -0X4224);
    // 0x150446C8: addiu       $v1, $v1, -0x4228
    ctx->r3 = ADD32(ctx->r3, -0X4228);
    // 0x150446CC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x150446D0: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x150446D4: b           L_15044738
    // 0x150446D8: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
        goto L_15044738;
    // 0x150446D8: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
L_150446DC:
    // 0x150446DC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150446E0: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x150446E4: subu        $a3, $a0, $t9
    ctx->r7 = SUB32(ctx->r4, ctx->r25);
    // 0x150446E8: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x150446EC: div         $zero, $a3, $at
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r1)));
    // 0x150446F0: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x150446F4: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150446F8: lwc1        $f10, 0x18($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X18);
    // 0x150446FC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x15044700: mflo        $a3
    ctx->r7 = lo;
    // 0x15044704: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15044708: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1504470C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15044710: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x15044714: addiu       $v1, $v1, -0x4228
    ctx->r3 = ADD32(ctx->r3, -0X4228);
    // 0x15044718: addiu       $a1, $a1, -0x4224
    ctx->r5 = ADD32(ctx->r5, -0X4224);
    // 0x1504471C: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x15044720: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x15044724: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15044728: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1504472C: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x15044730: nop

    // 0x15044734: sh          $t8, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r24;
L_15044738:
    // 0x15044738: lbu         $t1, 0x5($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X5);
    // 0x1504473C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x15044740: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x15044744: bnel        $t1, $at, L_15044764
    if (ctx->r9 != ctx->r1) {
        // 0x15044748: lbu         $t2, 0xAD($a0)
        ctx->r10 = MEM_BU(ctx->r4, 0XAD);
            goto L_15044764;
    }
    goto skip_0;
    // 0x15044748: lbu         $t2, 0xAD($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XAD);
    skip_0:
    // 0x1504474C: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x15044750: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x15044754: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15044758: b           L_150448C0
    // 0x1504475C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
        goto L_150448C0;
    // 0x1504475C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x15044760: lbu         $t2, 0xAD($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XAD);
L_15044764:
    // 0x15044764: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x15044768: beq         $t2, $zero, L_1504478C
    if (ctx->r10 == 0) {
        // 0x1504476C: sra         $t3, $a2, 1
        ctx->r11 = S32(SIGNED(ctx->r6) >> 1);
            goto L_1504478C;
    }
    // 0x1504476C: sra         $t3, $a2, 1
    ctx->r11 = S32(SIGNED(ctx->r6) >> 1);
    // 0x15044770: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x15044774: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x15044778: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1504477C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15044780: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x15044784: b           L_150448C0
    // 0x15044788: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_150448C0;
    // 0x15044788: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_1504478C:
    // 0x1504478C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x15044790: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x15044794: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x15044798: bne         $v0, $at, L_150447BC
    if (ctx->r2 != ctx->r1) {
        // 0x1504479C: sra         $t4, $a2, 1
        ctx->r12 = S32(SIGNED(ctx->r6) >> 1);
            goto L_150447BC;
    }
    // 0x1504479C: sra         $t4, $a2, 1
    ctx->r12 = S32(SIGNED(ctx->r6) >> 1);
    // 0x150447A0: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x150447A4: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x150447A8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150447AC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150447B0: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x150447B4: b           L_150448C0
    // 0x150447B8: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
        goto L_150448C0;
    // 0x150447B8: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
L_150447BC:
    // 0x150447BC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x150447C0: bne         $v0, $at, L_150447FC
    if (ctx->r2 != ctx->r1) {
        // 0x150447C4: lh          $a2, 0x2E($sp)
        ctx->r6 = MEM_H(ctx->r29, 0X2E);
            goto L_150447FC;
    }
    // 0x150447C4: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x150447C8: addiu       $t5, $a2, -0x14
    ctx->r13 = ADD32(ctx->r6, -0X14);
    // 0x150447CC: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x150447D0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150447D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150447D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150447DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150447E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150447E4: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x150447E8: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150447EC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150447F0: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x150447F4: b           L_150448C0
    // 0x150447F8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
        goto L_150448C0;
    // 0x150447F8: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
L_150447FC:
    // 0x150447FC: bltz        $a3, L_1504484C
    if (SIGNED(ctx->r7) < 0) {
        // 0x15044800: lh          $t6, 0x2E($sp)
        ctx->r14 = MEM_H(ctx->r29, 0X2E);
            goto L_1504484C;
    }
    // 0x15044800: lh          $t6, 0x2E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2E);
    // 0x15044804: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15044808: lb          $t7, -0x274($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X274);
    // 0x1504480C: slt         $at, $a3, $t7
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x15044810: beql        $at, $zero, L_15044850
    if (ctx->r1 == 0) {
        // 0x15044814: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_15044850;
    }
    goto skip_1;
    // 0x15044814: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    skip_1:
    // 0x15044818: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x1504481C: sra         $t8, $t6, 1
    ctx->r24 = S32(SIGNED(ctx->r14) >> 1);
    // 0x15044820: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x15044824: nop

    // 0x15044828: bc1tl       L_15044850
    if (c1cs) {
        // 0x1504482C: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_15044850;
    }
    goto skip_2;
    // 0x1504482C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    skip_2:
    // 0x15044830: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x15044834: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x15044838: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1504483C: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x15044840: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x15044844: b           L_150448C0
    // 0x15044848: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
        goto L_150448C0;
    // 0x15044848: swc1        $f16, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f16.u32l;
L_1504484C:
    // 0x1504484C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
L_15044850:
    // 0x15044850: bne         $v0, $at, L_150448A4
    if (ctx->r2 != ctx->r1) {
        // 0x15044854: lh          $a2, 0x2E($sp)
        ctx->r6 = MEM_H(ctx->r29, 0X2E);
            goto L_150448A4;
    }
    // 0x15044854: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x15044858: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x1504485C: bgez        $a2, L_1504486C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x15044860: sra         $v0, $a2, 1
        ctx->r2 = S32(SIGNED(ctx->r6) >> 1);
            goto L_1504486C;
    }
    // 0x15044860: sra         $v0, $a2, 1
    ctx->r2 = S32(SIGNED(ctx->r6) >> 1);
    // 0x15044864: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x15044868: sra         $v0, $at, 1
    ctx->r2 = S32(SIGNED(ctx->r1) >> 1);
L_1504486C:
    // 0x1504486C: subu        $t9, $a2, $v0
    ctx->r25 = SUB32(ctx->r6, ctx->r2);
    // 0x15044870: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x15044874: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15044878: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1504487C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15044880: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x15044884: nop

    // 0x15044888: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x1504488C: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x15044890: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x15044894: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15044898: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x1504489C: b           L_150448C0
    // 0x150448A0: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
        goto L_150448C0;
    // 0x150448A0: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
L_150448A4:
    // 0x150448A4: sra         $t0, $a2, 1
    ctx->r8 = S32(SIGNED(ctx->r6) >> 1);
    // 0x150448A8: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x150448AC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x150448B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150448B4: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150448B8: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x150448BC: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
L_150448C0:
    // 0x150448C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150448C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150448C8: jr          $ra
    // 0x150448CC: nop

    return;
    return;
    // 0x150448CC: nop

;}
RECOMP_FUNC void func_150DE2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DE2C4: lh          $t6, 0x34($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X34);
    // 0x150DE2C8: lh          $t8, 0x36($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X36);
    // 0x150DE2CC: addiu       $t7, $t6, -0x1A
    ctx->r15 = ADD32(ctx->r14, -0X1A);
    // 0x150DE2D0: sh          $t7, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r15;
    // 0x150DE2D4: lh          $t0, 0x34($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X34);
    // 0x150DE2D8: addiu       $t9, $t8, -0x1A
    ctx->r25 = ADD32(ctx->r24, -0X1A);
    // 0x150DE2DC: sh          $t9, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r25;
    // 0x150DE2E0: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x150DE2E4: bnel        $at, $zero, L_150DE300
    if (ctx->r1 != 0) {
        // 0x150DE2E8: sh          $zero, 0x38($a0)
        MEM_H(0X38, ctx->r4) = 0;
            goto L_150DE300;
    }
    goto skip_0;
    // 0x150DE2E8: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    skip_0:
    // 0x150DE2EC: lh          $t1, 0x36($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X36);
    // 0x150DE2F0: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x150DE2F4: beq         $at, $zero, L_150DE300
    if (ctx->r1 == 0) {
        // 0x150DE2F8: nop
    
            goto L_150DE300;
    }
    // 0x150DE2F8: nop

    // 0x150DE2FC: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
L_150DE300:
    // 0x150DE300: jr          $ra
    // 0x150DE304: nop

    return;
    return;
    // 0x150DE304: nop

;}
RECOMP_FUNC void func_150A4B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A4B04: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x150A4B08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x150A4B0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x150A4B10: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x150A4B14: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x150A4B18: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x150A4B1C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x150A4B20: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x150A4B24: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x150A4B28: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x150A4B2C: sw          $gp, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r28;
    // 0x150A4B30: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x150A4B34: swc1        $f21, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x150A4B38: swc1        $f22, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f22.u32l;
    // 0x150A4B3C: swc1        $f23, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x150A4B40: swc1        $f24, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f24.u32l;
    // 0x150A4B44: swc1        $f25, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x150A4B48: swc1        $f26, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f26.u32l;
    // 0x150A4B4C: swc1        $f27, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x150A4B50: swc1        $f28, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f28.u32l;
    // 0x150A4B54: swc1        $f29, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x150A4B58: swc1        $f30, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f30.u32l;
    // 0x150A4B5C: swc1        $f31, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x150A4B60: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x150A4B64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150A4B68: lw          $s7, 0x0($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X0);
    // 0x150A4B6C: beq         $s7, $zero, L_150A4F5C
    if (ctx->r23 == 0) {
        // 0x150A4B70: lw          $s7, 0x1D4($s0)
        ctx->r23 = MEM_W(ctx->r16, 0X1D4);
            goto L_150A4F5C;
    }
    // 0x150A4B70: lw          $s7, 0x1D4($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X1D4);
    // 0x150A4B74: beq         $s7, $zero, L_150A4F5C
    if (ctx->r23 == 0) {
        // 0x150A4B78: lw          $s7, 0xF8($s0)
        ctx->r23 = MEM_W(ctx->r16, 0XF8);
            goto L_150A4F5C;
    }
    // 0x150A4B78: lw          $s7, 0xF8($s0)
    ctx->r23 = MEM_W(ctx->r16, 0XF8);
    // 0x150A4B7C: andi        $s7, $s7, 0x4000
    ctx->r23 = ctx->r23 & 0X4000;
    // 0x150A4B80: beq         $s7, $zero, L_150A4F5C
    if (ctx->r23 == 0) {
        // 0x150A4B84: lui         $s2, 0x800C
        ctx->r18 = S32(0X800C << 16);
            goto L_150A4F5C;
    }
    // 0x150A4B84: lui         $s2, 0x800C
    ctx->r18 = S32(0X800C << 16);
    // 0x150A4B88: addiu       $s2, $s2, 0x5C08
    ctx->r18 = ADD32(ctx->r18, 0X5C08);
    // 0x150A4B8C: lbu         $s1, 0x4($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X4);
    // 0x150A4B90: sll         $fp, $s1, 2
    ctx->r30 = S32(ctx->r17 << 2);
    // 0x150A4B94: addu        $s2, $s2, $fp
    ctx->r18 = ADD32(ctx->r18, ctx->r30);
    // 0x150A4B98: lw          $s2, 0x0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X0);
    // 0x150A4B9C: beq         $s2, $zero, L_150A4F5C
    if (ctx->r18 == 0) {
        // 0x150A4BA0: lui         $t0, 0x800D
        ctx->r8 = S32(0X800D << 16);
            goto L_150A4F5C;
    }
    // 0x150A4BA0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x150A4BA4: addiu       $t0, $t0, -0x3D30
    ctx->r8 = ADD32(ctx->r8, -0X3D30);
    // 0x150A4BA8: addiu       $t1, $t0, 0x4F4C
    ctx->r9 = ADD32(ctx->r8, 0X4F4C);
    // 0x150A4BAC: lwc1        $f12, 0x14($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150A4BB0: lwc1        $f13, 0x18($s0)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r16, 0X18);
    // 0x150A4BB4: lwc1        $f14, 0x1C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150A4BB8: lwc1        $f3, 0x270($s0)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r16, 0X270);
    // 0x150A4BBC: mul.s       $f3, $f3, $f3
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 3);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f3.fl); 
    ctx->f3.fl = MUL_S(ctx->f3.fl, ctx->f3.fl);
L_150A4BC0:
    // 0x150A4BC0: beq         $s0, $t0, L_150A4BF8
    if (ctx->r16 == ctx->r8) {
        // 0x150A4BC4: lw          $s7, 0x0($t0)
        ctx->r23 = MEM_W(ctx->r8, 0X0);
            goto L_150A4BF8;
    }
    // 0x150A4BC4: lw          $s7, 0x0($t0)
    ctx->r23 = MEM_W(ctx->r8, 0X0);
    // 0x150A4BC8: beq         $s7, $zero, L_150A4BF8
    if (ctx->r23 == 0) {
        // 0x150A4BCC: nop
    
            goto L_150A4BF8;
    }
    // 0x150A4BCC: nop

    // 0x150A4BD0: lwc1        $f0, 0x14($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X14);
    // 0x150A4BD4: lwc1        $f2, 0x1C($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x150A4BD8: sub.s       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x150A4BDC: sub.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x150A4BE0: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150A4BE4: nop

    // 0x150A4BE8: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150A4BEC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150A4BF0: c.ole.s     $f0, $f3
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 3);
    c1cs = ctx->f0.fl <= ctx->f3.fl;
    // 0x150A4BF4: bc1t        L_150A4C08
    if (c1cs) {
        // 0x150A4BF8: addiu       $t0, $t0, 0x32C
        ctx->r8 = ADD32(ctx->r8, 0X32C);
            goto L_150A4C08;
    }
L_150A4BF8:
    // 0x150A4BF8: addiu       $t0, $t0, 0x32C
    ctx->r8 = ADD32(ctx->r8, 0X32C);
    // 0x150A4BFC: bne         $t0, $t1, L_150A4BC0
    if (ctx->r8 != ctx->r9) {
        // 0x150A4C00: nop
    
            goto L_150A4BC0;
    }
    // 0x150A4C00: nop

    // 0x150A4C04: j           L_150A4F5C
    // 0x150A4C08: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
        goto L_150A4F5C;
L_150A4C08:
    // 0x150A4C08: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x150A4C0C: addiu       $s3, $s3, 0x5EF8
    ctx->r19 = ADD32(ctx->r19, 0X5EF8);
    // 0x150A4C10: sll         $s7, $s1, 1
    ctx->r23 = S32(ctx->r17 << 1);
    // 0x150A4C14: addu        $s3, $s3, $s7
    ctx->r19 = ADD32(ctx->r19, ctx->r23);
    // 0x150A4C18: lhu         $s3, 0x0($s3)
    ctx->r19 = MEM_HU(ctx->r19, 0X0);
    // 0x150A4C1C: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x150A4C20: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x150A4C24: addiu       $fp, $fp, 0x57A0
    ctx->r30 = ADD32(ctx->r30, 0X57A0);
    // 0x150A4C28: addu        $fp, $fp, $s7
    ctx->r30 = ADD32(ctx->r30, ctx->r23);
    // 0x150A4C2C: lhu         $fp, 0x0($fp)
    ctx->r30 = MEM_HU(ctx->r30, 0X0);
    // 0x150A4C30: lw          $s5, 0x264($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X264);
    // 0x150A4C34: sll         $a0, $fp, 4
    ctx->r4 = S32(ctx->r30 << 4);
    // 0x150A4C38: bne         $s5, $zero, L_150A4C58
    if (ctx->r21 != 0) {
        // 0x150A4C3C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_150A4C58;
    }
    // 0x150A4C3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150A4C40: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150A4C44: jal         0x10003C40
    // 0x150A4C48: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x150A4C48: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x150A4C4C: beq         $v0, $zero, L_150A4F5C
    if (ctx->r2 == 0) {
        // 0x150A4C50: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_150A4F5C;
    }
    // 0x150A4C50: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x150A4C54: sw          $v0, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r2;
L_150A4C58:
    // 0x150A4C58: mtc1        $s5, $f31
    ctx->f_odd[(31 - 1) * 2] = ctx->r21;
    // 0x150A4C5C: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x150A4C60: addiu       $fp, $fp, 0x5918
    ctx->r30 = ADD32(ctx->r30, 0X5918);
    // 0x150A4C64: addu        $fp, $fp, $s7
    ctx->r30 = ADD32(ctx->r30, ctx->r23);
    // 0x150A4C68: lhu         $fp, 0x0($fp)
    ctx->r30 = MEM_HU(ctx->r30, 0X0);
    // 0x150A4C6C: lw          $s6, 0x268($s0)
    ctx->r22 = MEM_W(ctx->r16, 0X268);
    // 0x150A4C70: sll         $a0, $fp, 3
    ctx->r4 = S32(ctx->r30 << 3);
    // 0x150A4C74: bne         $s6, $zero, L_150A4C94
    if (ctx->r22 != 0) {
        // 0x150A4C78: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_150A4C94;
    }
    // 0x150A4C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150A4C7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150A4C80: jal         0x10003C40
    // 0x150A4C84: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x150A4C84: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x150A4C88: beq         $v0, $zero, L_150A4F5C
    if (ctx->r2 == 0) {
        // 0x150A4C8C: or          $s6, $v0, $zero
        ctx->r22 = ctx->r2 | 0;
            goto L_150A4F5C;
    }
    // 0x150A4C8C: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x150A4C90: sw          $v0, 0x268($s0)
    MEM_W(0X268, ctx->r16) = ctx->r2;
L_150A4C94:
    // 0x150A4C94: lw          $a3, 0x26C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X26C);
    // 0x150A4C98: sll         $a0, $fp, 2
    ctx->r4 = S32(ctx->r30 << 2);
    // 0x150A4C9C: bne         $a3, $zero, L_150A4CBC
    if (ctx->r7 != 0) {
        // 0x150A4CA0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_150A4CBC;
    }
    // 0x150A4CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150A4CA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150A4CA8: jal         0x10003C40
    // 0x150A4CAC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x150A4CAC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x150A4CB0: beq         $v0, $zero, L_150A4F5C
    if (ctx->r2 == 0) {
        // 0x150A4CB4: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_150A4F5C;
    }
    // 0x150A4CB4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x150A4CB8: sw          $v0, 0x26C($s0)
    MEM_W(0X26C, ctx->r16) = ctx->r2;
L_150A4CBC:
    // 0x150A4CBC: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x150A4CC0: lw          $s4, 0x4($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X4);
    // 0x150A4CC4: lw          $t3, 0x8($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X8);
    // 0x150A4CC8: lw          $s7, 0x1D4($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X1D4);
    // 0x150A4CCC: sll         $t3, $t3, 6
    ctx->r11 = S32(ctx->r11 << 6);
    // 0x150A4CD0: addu        $t3, $t3, $s7
    ctx->r11 = ADD32(ctx->r11, ctx->r23);
    // 0x150A4CD4: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x150A4CD8: beq         $s4, $zero, L_150A4DB0
    if (ctx->r20 == 0) {
        // 0x150A4CDC: addiu       $s4, $s4, -0x1
        ctx->r20 = ADD32(ctx->r20, -0X1);
            goto L_150A4DB0;
    }
    // 0x150A4CDC: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x150A4CE0: lwc1        $f0, 0x0($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X0);
    // 0x150A4CE4: lwc1        $f1, 0x4($t3)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r11, 0X4);
    // 0x150A4CE8: lwc1        $f2, 0x8($t3)
    ctx->f2.u32l = MEM_W(ctx->r11, 0X8);
    // 0x150A4CEC: lwc1        $f3, 0x10($t3)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r11, 0X10);
    // 0x150A4CF0: lwc1        $f4, 0x14($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X14);
    // 0x150A4CF4: lwc1        $f5, 0x18($t3)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r11, 0X18);
    // 0x150A4CF8: lwc1        $f6, 0x20($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X20);
    // 0x150A4CFC: lwc1        $f7, 0x24($t3)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r11, 0X24);
    // 0x150A4D00: lwc1        $f8, 0x28($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X28);
    // 0x150A4D04: lwc1        $f9, 0x30($t3)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r11, 0X30);
    // 0x150A4D08: lwc1        $f10, 0x34($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X34);
    // 0x150A4D0C: lwc1        $f11, 0x38($t3)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r11, 0X38);
L_150A4D10:
    // 0x150A4D10: lh          $t0, 0x0($t4)
    ctx->r8 = MEM_H(ctx->r12, 0X0);
    // 0x150A4D14: lh          $t1, 0x2($t4)
    ctx->r9 = MEM_H(ctx->r12, 0X2);
    // 0x150A4D18: mtc1        $t0, $f12
    ctx->f12.u32l = ctx->r8;
    // 0x150A4D1C: mtc1        $t1, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r9;
    // 0x150A4D20: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x150A4D24: cvt.s.w     $f13, $f13
    CHECK_FR(ctx, 13);
    CHECK_FR(ctx, 13);
    ctx->f13.fl = CVT_S_W(ctx->f_odd[(13 - 1) * 2]);
    // 0x150A4D28: lh          $t2, 0x4($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X4);
    // 0x150A4D2C: mul.s       $f15, $f0, $f12
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f15.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x150A4D30: mtc1        $t2, $f14
    ctx->f14.u32l = ctx->r10;
    // 0x150A4D34: mul.s       $f16, $f3, $f13
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 3);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f3.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f16.fl = MUL_S(ctx->f3.fl, ctx->f13.fl);
    // 0x150A4D38: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x150A4D3C: add.s       $f15, $f15, $f16
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f15.fl = ctx->f15.fl + ctx->f16.fl;
    // 0x150A4D40: mul.s       $f20, $f6, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x150A4D44: add.s       $f20, $f20, $f9
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 9);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f9.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f9.fl;
    // 0x150A4D48: mul.s       $f21, $f1, $f12
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 1);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f1.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f21.fl = MUL_S(ctx->f1.fl, ctx->f12.fl);
    // 0x150A4D4C: add.s       $f17, $f15, $f20
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f17.fl = ctx->f15.fl + ctx->f20.fl;
    // 0x150A4D50: mul.s       $f22, $f4, $f13
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f22.fl = MUL_S(ctx->f4.fl, ctx->f13.fl);
    // 0x150A4D54: cvt.w.s     $f17, $f17
    CHECK_FR(ctx, 17);
    CHECK_FR(ctx, 17);
    ctx->f_odd[(17 - 1) * 2] = CVT_W_S(ctx->f17.fl);
    // 0x150A4D58: mul.s       $f23, $f7, $f14
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 7);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f7.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f23.fl = MUL_S(ctx->f7.fl, ctx->f14.fl);
    // 0x150A4D5C: add.s       $f21, $f21, $f22
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f21.fl = ctx->f21.fl + ctx->f22.fl;
    // 0x150A4D60: mul.s       $f15, $f2, $f12
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f15.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x150A4D64: add.s       $f23, $f23, $f10
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 23);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f23.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f23.fl = ctx->f23.fl + ctx->f10.fl;
    // 0x150A4D68: mul.s       $f16, $f5, $f13
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 5);
    CHECK_FR(ctx, 13);
    NAN_CHECK(ctx->f5.fl); NAN_CHECK(ctx->f13.fl); 
    ctx->f16.fl = MUL_S(ctx->f5.fl, ctx->f13.fl);
    // 0x150A4D6C: add.s       $f18, $f21, $f23
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 21);
    CHECK_FR(ctx, 23);
    NAN_CHECK(ctx->f21.fl); NAN_CHECK(ctx->f23.fl); 
    ctx->f18.fl = ctx->f21.fl + ctx->f23.fl;
    // 0x150A4D70: mul.s       $f20, $f8, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x150A4D74: add.s       $f15, $f15, $f16
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f15.fl = ctx->f15.fl + ctx->f16.fl;
    // 0x150A4D78: add.s       $f20, $f20, $f11
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 11);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f11.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f11.fl;
    // 0x150A4D7C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150A4D80: add.s       $f19, $f15, $f20
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 15);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f15.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f19.fl = ctx->f15.fl + ctx->f20.fl;
    // 0x150A4D84: mfc1        $t0, $f17
    ctx->r8 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x150A4D88: cvt.w.s     $f19, $f19
    CHECK_FR(ctx, 19);
    CHECK_FR(ctx, 19);
    ctx->f_odd[(19 - 1) * 2] = CVT_W_S(ctx->f19.fl);
    // 0x150A4D8C: sh          $t0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r8;
    // 0x150A4D90: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x150A4D94: mfc1        $t2, $f19
    ctx->r10 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x150A4D98: sh          $t1, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r9;
    // 0x150A4D9C: addiu       $t4, $t4, 0x10
    ctx->r12 = ADD32(ctx->r12, 0X10);
    // 0x150A4DA0: sh          $t2, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r10;
    // 0x150A4DA4: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x150A4DA8: bne         $s4, $zero, L_150A4D10
    if (ctx->r20 != 0) {
        // 0x150A4DAC: addiu       $s4, $s4, -0x1
        ctx->r20 = ADD32(ctx->r20, -0X1);
            goto L_150A4D10;
    }
    // 0x150A4DAC: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_150A4DB0:
    // 0x150A4DB0: bne         $s3, $zero, L_150A4CBC
    if (ctx->r19 != 0) {
        // 0x150A4DB4: addiu       $s3, $s3, -0x1
        ctx->r19 = ADD32(ctx->r19, -0X1);
            goto L_150A4CBC;
    }
    // 0x150A4DB4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x150A4DB8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x150A4DBC: addiu       $t9, $t9, 0x6070
    ctx->r25 = ADD32(ctx->r25, 0X6070);
    // 0x150A4DC0: sll         $s7, $s1, 2
    ctx->r23 = S32(ctx->r17 << 2);
    // 0x150A4DC4: addu        $t9, $t9, $s7
    ctx->r25 = ADD32(ctx->r25, ctx->r23);
    // 0x150A4DC8: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x150A4DCC: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x150A4DD0: addiu       $v1, $v1, 0x5918
    ctx->r3 = ADD32(ctx->r3, 0X5918);
    // 0x150A4DD4: sll         $s7, $s1, 1
    ctx->r23 = S32(ctx->r17 << 1);
    // 0x150A4DD8: addu        $v1, $v1, $s7
    ctx->r3 = ADD32(ctx->r3, ctx->r23);
    // 0x150A4DDC: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x150A4DE0: sll         $s7, $v1, 3
    ctx->r23 = S32(ctx->r3 << 3);
    // 0x150A4DE4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x150A4DE8: addu        $v1, $v1, $s7
    ctx->r3 = ADD32(ctx->r3, ctx->r23);
    // 0x150A4DEC: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x150A4DF0: mfc1        $s5, $f31
    ctx->r21 = (int32_t)ctx->f_odd[(31 - 1) * 2];
L_150A4DF4:
    // 0x150A4DF4: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x150A4DF8: lw          $s1, 0x4($t9)
    ctx->r17 = MEM_W(ctx->r25, 0X4);
    // 0x150A4DFC: lw          $s2, 0x8($t9)
    ctx->r18 = MEM_W(ctx->r25, 0X8);
    // 0x150A4E00: addu        $t4, $t4, $s5
    ctx->r12 = ADD32(ctx->r12, ctx->r21);
    // 0x150A4E04: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x150A4E08: lh          $a1, 0x2($t4)
    ctx->r5 = MEM_H(ctx->r12, 0X2);
    // 0x150A4E0C: lh          $t7, 0x4($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X4);
    // 0x150A4E10: or          $t6, $t5, $zero
    ctx->r14 = ctx->r13 | 0;
    // 0x150A4E14: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x150A4E18: or          $t8, $t7, $zero
    ctx->r24 = ctx->r15 | 0;
    // 0x150A4E1C: addu        $s1, $s1, $s5
    ctx->r17 = ADD32(ctx->r17, ctx->r21);
    // 0x150A4E20: lh          $t0, 0x0($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X0);
    // 0x150A4E24: lh          $t1, 0x2($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X2);
    // 0x150A4E28: lh          $t2, 0x4($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X4);
    // 0x150A4E2C: slt         $at, $t0, $t5
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150A4E30: bnel        $at, $zero, L_150A4E44
    if (ctx->r1 != 0) {
        // 0x150A4E34: or          $t5, $t0, $zero
        ctx->r13 = ctx->r8 | 0;
            goto L_150A4E44;
    }
    goto skip_0;
    // 0x150A4E34: or          $t5, $t0, $zero
    ctx->r13 = ctx->r8 | 0;
    skip_0:
    // 0x150A4E38: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150A4E3C: bnel        $at, $zero, L_150A4E44
    if (ctx->r1 != 0) {
        // 0x150A4E40: or          $t6, $t0, $zero
        ctx->r14 = ctx->r8 | 0;
            goto L_150A4E44;
    }
    goto skip_1;
    // 0x150A4E40: or          $t6, $t0, $zero
    ctx->r14 = ctx->r8 | 0;
    skip_1:
L_150A4E44:
    // 0x150A4E44: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x150A4E48: bnel        $at, $zero, L_150A4E5C
    if (ctx->r1 != 0) {
        // 0x150A4E4C: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_150A4E5C;
    }
    goto skip_2;
    // 0x150A4E4C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    skip_2:
    // 0x150A4E50: slt         $at, $a2, $t1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x150A4E54: bnel        $at, $zero, L_150A4E5C
    if (ctx->r1 != 0) {
        // 0x150A4E58: or          $a2, $t1, $zero
        ctx->r6 = ctx->r9 | 0;
            goto L_150A4E5C;
    }
    goto skip_3;
    // 0x150A4E58: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    skip_3:
L_150A4E5C:
    // 0x150A4E5C: slt         $at, $t2, $t7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150A4E60: bnel        $at, $zero, L_150A4E74
    if (ctx->r1 != 0) {
        // 0x150A4E64: or          $t7, $t2, $zero
        ctx->r15 = ctx->r10 | 0;
            goto L_150A4E74;
    }
    goto skip_4;
    // 0x150A4E64: or          $t7, $t2, $zero
    ctx->r15 = ctx->r10 | 0;
    skip_4:
    // 0x150A4E68: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x150A4E6C: bnel        $at, $zero, L_150A4E74
    if (ctx->r1 != 0) {
        // 0x150A4E70: or          $t8, $t2, $zero
        ctx->r24 = ctx->r10 | 0;
            goto L_150A4E74;
    }
    goto skip_5;
    // 0x150A4E70: or          $t8, $t2, $zero
    ctx->r24 = ctx->r10 | 0;
    skip_5:
L_150A4E74:
    // 0x150A4E74: addu        $s2, $s2, $s5
    ctx->r18 = ADD32(ctx->r18, ctx->r21);
    // 0x150A4E78: lh          $t0, 0x0($s2)
    ctx->r8 = MEM_H(ctx->r18, 0X0);
    // 0x150A4E7C: lh          $t1, 0x2($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X2);
    // 0x150A4E80: lh          $t2, 0x4($s2)
    ctx->r10 = MEM_H(ctx->r18, 0X4);
    // 0x150A4E84: slt         $at, $t0, $t5
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x150A4E88: bnel        $at, $zero, L_150A4E9C
    if (ctx->r1 != 0) {
        // 0x150A4E8C: or          $t5, $t0, $zero
        ctx->r13 = ctx->r8 | 0;
            goto L_150A4E9C;
    }
    goto skip_6;
    // 0x150A4E8C: or          $t5, $t0, $zero
    ctx->r13 = ctx->r8 | 0;
    skip_6:
    // 0x150A4E90: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x150A4E94: bnel        $at, $zero, L_150A4E9C
    if (ctx->r1 != 0) {
        // 0x150A4E98: or          $t6, $t0, $zero
        ctx->r14 = ctx->r8 | 0;
            goto L_150A4E9C;
    }
    goto skip_7;
    // 0x150A4E98: or          $t6, $t0, $zero
    ctx->r14 = ctx->r8 | 0;
    skip_7:
L_150A4E9C:
    // 0x150A4E9C: sh          $t5, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r13;
    // 0x150A4EA0: slt         $at, $t2, $t7
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x150A4EA4: bnel        $at, $zero, L_150A4EB8
    if (ctx->r1 != 0) {
        // 0x150A4EA8: or          $t7, $t2, $zero
        ctx->r15 = ctx->r10 | 0;
            goto L_150A4EB8;
    }
    goto skip_8;
    // 0x150A4EA8: or          $t7, $t2, $zero
    ctx->r15 = ctx->r10 | 0;
    skip_8:
    // 0x150A4EAC: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x150A4EB0: bnel        $at, $zero, L_150A4EB8
    if (ctx->r1 != 0) {
        // 0x150A4EB4: or          $t8, $t2, $zero
        ctx->r24 = ctx->r10 | 0;
            goto L_150A4EB8;
    }
    goto skip_9;
    // 0x150A4EB4: or          $t8, $t2, $zero
    ctx->r24 = ctx->r10 | 0;
    skip_9:
L_150A4EB8:
    // 0x150A4EB8: sh          $t6, 0x4($s6)
    MEM_H(0X4, ctx->r22) = ctx->r14;
    // 0x150A4EBC: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x150A4EC0: bnel        $at, $zero, L_150A4ED4
    if (ctx->r1 != 0) {
        // 0x150A4EC4: or          $a1, $t1, $zero
        ctx->r5 = ctx->r9 | 0;
            goto L_150A4ED4;
    }
    goto skip_10;
    // 0x150A4EC4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    skip_10:
    // 0x150A4EC8: slt         $at, $a2, $t1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x150A4ECC: bnel        $at, $zero, L_150A4ED4
    if (ctx->r1 != 0) {
        // 0x150A4ED0: or          $a2, $t1, $zero
        ctx->r6 = ctx->r9 | 0;
            goto L_150A4ED4;
    }
    goto skip_11;
    // 0x150A4ED0: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    skip_11:
L_150A4ED4:
    // 0x150A4ED4: sh          $t7, 0x2($s6)
    MEM_H(0X2, ctx->r22) = ctx->r15;
    // 0x150A4ED8: sh          $t8, 0x6($s6)
    MEM_H(0X6, ctx->r22) = ctx->r24;
    // 0x150A4EDC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x150A4EE0: sh          $a1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r5;
    // 0x150A4EE4: sh          $a2, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r6;
    // 0x150A4EE8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x150A4EEC: bne         $t9, $v1, L_150A4DF4
    if (ctx->r25 != ctx->r3) {
        // 0x150A4EF0: addiu       $s6, $s6, 0x8
        ctx->r22 = ADD32(ctx->r22, 0X8);
            goto L_150A4DF4;
    }
    // 0x150A4EF0: addiu       $s6, $s6, 0x8
    ctx->r22 = ADD32(ctx->r22, 0X8);
L_150A4EF4:
    // 0x150A4EF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x150A4EF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x150A4EFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x150A4F00: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x150A4F04: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x150A4F08: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x150A4F0C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x150A4F10: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x150A4F14: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x150A4F18: lw          $gp, 0x34($sp)
    ctx->r28 = MEM_W(ctx->r29, 0X34);
    // 0x150A4F1C: lwc1        $f20, 0x38($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X38);
    // 0x150A4F20: lwc1        $f21, 0x3C($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X3C);
    // 0x150A4F24: lwc1        $f22, 0x40($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X40);
    // 0x150A4F28: lwc1        $f23, 0x44($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X44);
    // 0x150A4F2C: lwc1        $f24, 0x48($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X48);
    // 0x150A4F30: lwc1        $f25, 0x4C($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X4C);
    // 0x150A4F34: lwc1        $f26, 0x50($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X50);
    // 0x150A4F38: lwc1        $f27, 0x54($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X54);
    // 0x150A4F3C: lwc1        $f28, 0x58($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150A4F40: lwc1        $f29, 0x5C($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X5C);
    // 0x150A4F44: lwc1        $f30, 0x60($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X60);
    // 0x150A4F48: lwc1        $f31, 0x64($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X64);
    // 0x150A4F4C: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x150A4F50: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x150A4F54: jr          $ra
    // 0x150A4F58: nop

    return;
    return;
    // 0x150A4F58: nop

L_150A4F5C:
    // 0x150A4F5C: lw          $s7, 0x264($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X264);
    // 0x150A4F60: beq         $s7, $zero, L_150A4F70
    if (ctx->r23 == 0) {
        // 0x150A4F64: sw          $zero, 0x264($s0)
        MEM_W(0X264, ctx->r16) = 0;
            goto L_150A4F70;
    }
    // 0x150A4F64: sw          $zero, 0x264($s0)
    MEM_W(0X264, ctx->r16) = 0;
    // 0x150A4F68: jal         0x10004074
    // 0x150A4F6C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_10004074(rdram, ctx);
        goto after_3;
    // 0x150A4F6C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_3:
L_150A4F70:
    // 0x150A4F70: lw          $s7, 0x268($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X268);
    // 0x150A4F74: beq         $s7, $zero, L_150A4F84
    if (ctx->r23 == 0) {
        // 0x150A4F78: sw          $zero, 0x268($s0)
        MEM_W(0X268, ctx->r16) = 0;
            goto L_150A4F84;
    }
    // 0x150A4F78: sw          $zero, 0x268($s0)
    MEM_W(0X268, ctx->r16) = 0;
    // 0x150A4F7C: jal         0x10004074
    // 0x150A4F80: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x150A4F80: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_4:
L_150A4F84:
    // 0x150A4F84: lw          $s7, 0x26C($s0)
    ctx->r23 = MEM_W(ctx->r16, 0X26C);
    // 0x150A4F88: beq         $s7, $zero, L_150A4F98
    if (ctx->r23 == 0) {
        // 0x150A4F8C: sw          $zero, 0x26C($s0)
        MEM_W(0X26C, ctx->r16) = 0;
            goto L_150A4F98;
    }
    // 0x150A4F8C: sw          $zero, 0x26C($s0)
    MEM_W(0X26C, ctx->r16) = 0;
    // 0x150A4F90: jal         0x10004074
    // 0x150A4F94: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_10004074(rdram, ctx);
        goto after_5;
    // 0x150A4F94: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_5:
L_150A4F98:
    // 0x150A4F98: j           L_150A4EF4
    // 0x150A4F9C: nop

        goto L_150A4EF4;
    // 0x150A4F9C: nop

;}
RECOMP_FUNC void func_1510D0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D0EC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x1510D0F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1510D0F4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1510D0F8: addiu       $v0, $v0, -0x60A8
    ctx->r2 = ADD32(ctx->r2, -0X60A8);
    // 0x1510D0FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1510D100: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1510D104: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x1510D108: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x1510D10C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x1510D110: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1510D114: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1510D118: beq         $at, $zero, L_1510D124
    if (ctx->r1 == 0) {
        // 0x1510D11C: nop
    
            goto L_1510D124;
    }
    // 0x1510D11C: nop

    // 0x1510D120: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_1510D124:
    // 0x1510D124: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1510D128: addiu       $v0, $v0, -0x60A4
    ctx->r2 = ADD32(ctx->r2, -0X60A4);
    // 0x1510D12C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x1510D130: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1510D134: beql        $at, $zero, L_1510D144
    if (ctx->r1 == 0) {
        // 0x1510D138: slti        $at, $s0, 0x1E52
        ctx->r1 = SIGNED(ctx->r16) < 0X1E52 ? 1 : 0;
            goto L_1510D144;
    }
    goto skip_0;
    // 0x1510D138: slti        $at, $s0, 0x1E52
    ctx->r1 = SIGNED(ctx->r16) < 0X1E52 ? 1 : 0;
    skip_0:
    // 0x1510D13C: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x1510D140: slti        $at, $s0, 0x1E52
    ctx->r1 = SIGNED(ctx->r16) < 0X1E52 ? 1 : 0;
L_1510D144:
    // 0x1510D144: beq         $at, $zero, L_1510D154
    if (ctx->r1 == 0) {
        // 0x1510D148: nop
    
            goto L_1510D154;
    }
    // 0x1510D148: nop

    // 0x1510D14C: bgez        $s0, L_1510D15C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x1510D150: sll         $t8, $s0, 1
        ctx->r24 = S32(ctx->r16 << 1);
            goto L_1510D15C;
    }
    // 0x1510D150: sll         $t8, $s0, 1
    ctx->r24 = S32(ctx->r16 << 1);
L_1510D154:
    // 0x1510D154: b           L_1510D360
    // 0x1510D158: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_1510D360;
    // 0x1510D158: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_1510D15C:
    // 0x1510D15C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x1510D160: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x1510D164: lhu         $v1, 0x1D20($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X1D20);
    // 0x1510D168: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x1510D16C: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x1510D170: bne         $v1, $zero, L_1510D190
    if (ctx->r3 != 0) {
        // 0x1510D174: lui         $t2, 0x800B
        ctx->r10 = S32(0X800B << 16);
            goto L_1510D190;
    }
    // 0x1510D174: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x1510D178: addiu       $t2, $t2, 0xE58
    ctx->r10 = ADD32(ctx->r10, 0XE58);
    // 0x1510D17C: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x1510D180: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x1510D184: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x1510D188: b           L_1510D2EC
    // 0x1510D18C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
        goto L_1510D2EC;
    // 0x1510D18C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
L_1510D190:
    // 0x1510D190: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x1510D194: addiu       $t5, $t5, 0xE58
    ctx->r13 = ADD32(ctx->r13, 0XE58);
    // 0x1510D198: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x1510D19C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1510D1A0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x1510D1A4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x1510D1A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1510D1AC: bnel        $t7, $at, L_1510D2F0
    if (ctx->r15 != ctx->r1) {
        // 0x1510D1B0: lw          $t2, 0x54($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X54);
            goto L_1510D2F0;
    }
    goto skip_1;
    // 0x1510D1B0: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    skip_1:
    // 0x1510D1B4: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x1510D1B8: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x1510D1BC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510D1C0: sb          $t8, -0x4246($at)
    MEM_B(-0X4246, ctx->r1) = ctx->r24;
    // 0x1510D1C4: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x1510D1C8: bne         $t9, $at, L_1510D1D8
    if (ctx->r25 != ctx->r1) {
        // 0x1510D1CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1510D1D8;
    }
    // 0x1510D1CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1510D1D0: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x1510D1D4: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
L_1510D1D8:
    // 0x1510D1D8: jal         0x1510D374
    // 0x1510D1DC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    func_1510D374(rdram, ctx);
        goto after_0;
    // 0x1510D1DC: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    after_0:
    // 0x1510D1E0: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x1510D1E4: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x1510D1E8: beq         $t2, $zero, L_1510D1FC
    if (ctx->r10 == 0) {
        // 0x1510D1EC: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_1510D1FC;
    }
    // 0x1510D1EC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x1510D1F0: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x1510D1F4: b           L_1510D200
    // 0x1510D1F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_1510D200;
    // 0x1510D1F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_1510D1FC:
    // 0x1510D1FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_1510D200:
    // 0x1510D200: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x1510D204: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x1510D208: beq         $t3, $zero, L_1510D214
    if (ctx->r11 == 0) {
        // 0x1510D20C: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_1510D214;
    }
    // 0x1510D20C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x1510D210: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_1510D214:
    // 0x1510D214: addiu       $a0, $v0, 0xF
    ctx->r4 = ADD32(ctx->r2, 0XF);
    // 0x1510D218: and         $t4, $a0, $at
    ctx->r12 = ctx->r4 & ctx->r1;
    // 0x1510D21C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x1510D220: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1510D224: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x1510D228: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x1510D22C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1510D230: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1510D234: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1510D238: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x1510D23C: jal         0x10003C6C
    // 0x1510D240: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    func_10003C6C(rdram, ctx);
        goto after_1;
    // 0x1510D240: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_1:
    // 0x1510D244: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x1510D248: bne         $v0, $zero, L_1510D258
    if (ctx->r2 != 0) {
        // 0x1510D24C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_1510D258;
    }
    // 0x1510D24C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1510D250: b           L_1510D360
    // 0x1510D254: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_1510D360;
    // 0x1510D254: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_1510D258:
    // 0x1510D258: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x1510D25C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x1510D260: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1510D264: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x1510D268: jal         0x10004514
    // 0x1510D26C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_10004514(rdram, ctx);
        goto after_2;
    // 0x1510D26C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_2:
    // 0x1510D270: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x1510D274: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1510D278: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1510D27C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x1510D280: lhu         $a0, -0x7860($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7860);
    // 0x1510D284: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x1510D288: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1510D28C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1510D290: jal         0x10003C6C
    // 0x1510D294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_10003C6C(rdram, ctx);
        goto after_3;
    // 0x1510D294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x1510D298: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x1510D29C: bne         $v0, $zero, L_1510D2B4
    if (ctx->r2 != 0) {
        // 0x1510D2A0: sw          $v0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r2;
            goto L_1510D2B4;
    }
    // 0x1510D2A0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x1510D2A4: jal         0x10004074
    // 0x1510D2A8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x1510D2A8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_4:
    // 0x1510D2AC: b           L_1510D360
    // 0x1510D2B0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_1510D360;
    // 0x1510D2B0: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_1510D2B4:
    // 0x1510D2B4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1510D2B8: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x1510D2BC: lw          $a2, -0x7F64($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7F64);
    // 0x1510D2C0: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x1510D2C4: jal         0x10006240
    // 0x1510D2C8: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    func_10006240(rdram, ctx);
        goto after_5;
    // 0x1510D2C8: addu        $a0, $t8, $v1
    ctx->r4 = ADD32(ctx->r24, ctx->r3);
    after_5:
    // 0x1510D2CC: jal         0x10004074
    // 0x1510D2D0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_10004074(rdram, ctx);
        goto after_6;
    // 0x1510D2D0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_6:
    // 0x1510D2D4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x1510D2D8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x1510D2DC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1510D2E0: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x1510D2E4: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x1510D2E8: sb          $zero, -0x6098($at)
    MEM_B(-0X6098, ctx->r1) = 0;
L_1510D2EC:
    // 0x1510D2EC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
L_1510D2F0:
    // 0x1510D2F0: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x1510D2F4: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x1510D2F8: beq         $t2, $zero, L_1510D314
    if (ctx->r10 == 0) {
        // 0x1510D2FC: addiu       $t4, $t4, -0x3BB8
        ctx->r12 = ADD32(ctx->r12, -0X3BB8);
            goto L_1510D314;
    }
    // 0x1510D2FC: addiu       $t4, $t4, -0x3BB8
    ctx->r12 = ADD32(ctx->r12, -0X3BB8);
    // 0x1510D300: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x1510D304: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1510D308: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x1510D30C: lhu         $a0, -0x7860($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7860);
    // 0x1510D310: sw          $a0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r4;
L_1510D314:
    // 0x1510D314: addu        $v0, $s0, $t4
    ctx->r2 = ADD32(ctx->r16, ctx->r12);
    // 0x1510D318: lb          $t5, 0x0($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X0);
    // 0x1510D31C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x1510D320: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1510D324: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x1510D328: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x1510D32C: beq         $at, $zero, L_1510D338
    if (ctx->r1 == 0) {
        // 0x1510D330: addiu       $t8, $t8, -0x6098
        ctx->r24 = ADD32(ctx->r24, -0X6098);
            goto L_1510D338;
    }
    // 0x1510D330: addiu       $t8, $t8, -0x6098
    ctx->r24 = ADD32(ctx->r24, -0X6098);
    // 0x1510D334: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
L_1510D338:
    // 0x1510D338: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x1510D33C: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x1510D340: beql        $t7, $zero, L_1510D360
    if (ctx->r15 == 0) {
        // 0x1510D344: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_1510D360;
    }
    goto skip_2;
    // 0x1510D344: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_2:
    // 0x1510D348: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x1510D34C: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x1510D350: beq         $at, $zero, L_1510D35C
    if (ctx->r1 == 0) {
        // 0x1510D354: addiu       $t9, $v1, 0x1
        ctx->r25 = ADD32(ctx->r3, 0X1);
            goto L_1510D35C;
    }
    // 0x1510D354: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x1510D358: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_1510D35C:
    // 0x1510D35C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_1510D360:
    // 0x1510D360: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1510D364: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1510D368: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x1510D36C: jr          $ra
    // 0x1510D370: nop

    return;
    return;
    // 0x1510D370: nop

;}
RECOMP_FUNC void func_10015878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10015878: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1001587C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x10015880: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x10015884: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x10015888: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_1001588C:
    // 0x1001588C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x10015890: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x10015894: lh          $t8, 0x28($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X28);
    // 0x10015898: bne         $t8, $at, L_100158D0
    if (ctx->r24 != ctx->r1) {
        // 0x1001589C: nop
    
            goto L_100158D0;
    }
    // 0x1001589C: nop

    // 0x100158A0: b           L_100158A8
    // 0x100158A4: nop

        goto L_100158A8;
    // 0x100158A4: nop

L_100158A8:
    // 0x100158A8: addiu       $t9, $zero, 0x20
    ctx->r25 = ADD32(0, 0X20);
    // 0x100158AC: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
    // 0x100158B0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x100158B4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x100158B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x100158BC: addiu       $a0, $t0, 0x14
    ctx->r4 = ADD32(ctx->r8, 0X14);
    // 0x100158C0: jal         0x1001C224
    // 0x100158C4: lw          $a2, 0x48($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X48);
    n_alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x100158C4: lw          $a2, 0x48($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X48);
    after_0:
    // 0x100158C8: b           L_100158E4
    // 0x100158CC: nop

        goto L_100158E4;
    // 0x100158CC: nop

L_100158D0:
    // 0x100158D0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x100158D4: jal         0x10015944
    // 0x100158D8: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    _n_handleEvent(rdram, ctx);
        goto after_1;
    // 0x100158D8: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    after_1:
    // 0x100158DC: b           L_100158E4
    // 0x100158E0: nop

        goto L_100158E4;
    // 0x100158E0: nop

L_100158E4:
    // 0x100158E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x100158E8: addiu       $a0, $t1, 0x14
    ctx->r4 = ADD32(ctx->r9, 0X14);
    // 0x100158EC: jal         0x1001C108
    // 0x100158F0: addiu       $a1, $t1, 0x28
    ctx->r5 = ADD32(ctx->r9, 0X28);
    n_alEvtqNextEvent(rdram, ctx);
        goto after_2;
    // 0x100158F0: addiu       $a1, $t1, 0x28
    ctx->r5 = ADD32(ctx->r9, 0X28);
    after_2:
    // 0x100158F4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x100158F8: sw          $v0, 0x4C($t2)
    MEM_W(0X4C, ctx->r10) = ctx->r2;
    // 0x100158FC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x10015900: lw          $t4, 0x4C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4C);
    // 0x10015904: beq         $t4, $zero, L_1001588C
    if (ctx->r12 == 0) {
        // 0x10015908: nop
    
            goto L_1001588C;
    }
    // 0x10015908: nop

    // 0x1001590C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x10015910: lw          $t6, 0x50($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X50);
    // 0x10015914: lw          $t7, 0x4C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X4C);
    // 0x10015918: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x1001591C: sw          $t8, 0x50($t5)
    MEM_W(0X50, ctx->r13) = ctx->r24;
    // 0x10015920: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x10015924: b           L_10015934
    // 0x10015928: lw          $v0, 0x4C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X4C);
        goto L_10015934;
    // 0x10015928: lw          $v0, 0x4C($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X4C);
    // 0x1001592C: b           L_10015934
    // 0x10015930: nop

        goto L_10015934;
    // 0x10015930: nop

L_10015934:
    // 0x10015934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x10015938: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1001593C: jr          $ra
    // 0x10015940: nop

    return;
    return;
    // 0x10015940: nop

;}
RECOMP_FUNC void func_1510D694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510D694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1510D698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1510D69C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1510D6A0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x1510D6A4: lb          $t6, -0x3BB8($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3BB8);
    // 0x1510D6A8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x1510D6AC: addiu       $t7, $t7, -0x6098
    ctx->r15 = ADD32(ctx->r15, -0X6098);
    // 0x1510D6B0: beq         $t6, $zero, L_1510D710
    if (ctx->r14 == 0) {
        // 0x1510D6B4: addu        $v0, $a0, $t7
        ctx->r2 = ADD32(ctx->r4, ctx->r15);
            goto L_1510D710;
    }
    // 0x1510D6B4: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x1510D6B8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x1510D6BC: beq         $v1, $zero, L_1510D710
    if (ctx->r3 == 0) {
        // 0x1510D6C0: addiu       $t8, $v1, -0x1
        ctx->r24 = ADD32(ctx->r3, -0X1);
            goto L_1510D710;
    }
    // 0x1510D6C0: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x1510D6C4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1510D6C8: bne         $t9, $zero, L_1510D710
    if (ctx->r25 != 0) {
        // 0x1510D6CC: sb          $t8, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r24;
            goto L_1510D710;
    }
    // 0x1510D6CC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x1510D6D0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1510D6D4: addiu       $v0, $v0, -0x60A8
    ctx->r2 = ADD32(ctx->r2, -0X60A8);
    // 0x1510D6D8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x1510D6DC: slt         $at, $a0, $t0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1510D6E0: beq         $at, $zero, L_1510D6EC
    if (ctx->r1 == 0) {
        // 0x1510D6E4: nop
    
            goto L_1510D6EC;
    }
    // 0x1510D6E4: nop

    // 0x1510D6E8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_1510D6EC:
    // 0x1510D6EC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1510D6F0: addiu       $v0, $v0, -0x60A4
    ctx->r2 = ADD32(ctx->r2, -0X60A4);
    // 0x1510D6F4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x1510D6F8: slt         $at, $t1, $a0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x1510D6FC: beq         $at, $zero, L_1510D708
    if (ctx->r1 == 0) {
        // 0x1510D700: nop
    
            goto L_1510D708;
    }
    // 0x1510D700: nop

    // 0x1510D704: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_1510D708:
    // 0x1510D708: jal         0x1510D608
    // 0x1510D70C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_1510D608(rdram, ctx);
        goto after_0;
    // 0x1510D70C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
L_1510D710:
    // 0x1510D710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1510D714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1510D718: jr          $ra
    // 0x1510D71C: nop

    return;
    return;
    // 0x1510D71C: nop

;}
RECOMP_FUNC void func_150BEACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BEACC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150BEAD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150BEAD4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x150BEAD8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x150BEADC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x150BEAE0: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x150BEAE4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x150BEAE8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x150BEAEC: lw          $t7, 0x1D4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1D4);
    // 0x150BEAF0: lbu         $a3, 0x5F($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X5F);
    // 0x150BEAF4: beq         $t7, $zero, L_150BEC20
    if (ctx->r15 == 0) {
        // 0x150BEAF8: addiu       $a2, $sp, 0x28
        ctx->r6 = ADD32(ctx->r29, 0X28);
            goto L_150BEC20;
    }
    // 0x150BEAF8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x150BEAFC: jal         0x150BE9B0
    // 0x150BEB00: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_150BE9B0(rdram, ctx);
        goto after_0;
    // 0x150BEB00: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x150BEB04: beq         $v0, $zero, L_150BEC20
    if (ctx->r2 == 0) {
        // 0x150BEB08: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_150BEC20;
    }
    // 0x150BEB08: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x150BEB0C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x150BEB10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BEB14: lwc1        $f8, 0xC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0XC0);
    // 0x150BEB18: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150BEB1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BEB20: lwc1        $f16, 0xC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XC4);
    // 0x150BEB24: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x150BEB28: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BEB2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150BEB30: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150BEB34: lwc1        $f6, 0xC8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XC8);
    // 0x150BEB38: lwc1        $f4, 0x40($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X40);
    // 0x150BEB3C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150BEB40: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x150BEB44: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x150BEB48: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x150BEB4C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150BEB50: nop

    // 0x150BEB54: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150BEB58: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x150BEB5C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x150BEB60: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150BEB64: nop

    // 0x150BEB68: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x150BEB6C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150BEB70: nop

    // 0x150BEB74: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150BEB78: beq         $a3, $zero, L_150BEBC4
    if (ctx->r7 == 0) {
        // 0x150BEB7C: nop
    
            goto L_150BEBC4;
    }
    // 0x150BEB7C: nop

    // 0x150BEB80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BEB84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150BEB88: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150BEB8C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x150BEB90: nop

    // 0x150BEB94: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x150BEB98: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x150BEB9C: nop

    // 0x150BEBA0: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x150BEBA4: bne         $a3, $zero, L_150BEBBC
    if (ctx->r7 != 0) {
        // 0x150BEBA8: nop
    
            goto L_150BEBBC;
    }
    // 0x150BEBA8: nop

    // 0x150BEBAC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150BEBB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150BEBB4: b           L_150BEBD4
    // 0x150BEBB8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_150BEBD4;
    // 0x150BEBB8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_150BEBBC:
    // 0x150BEBBC: b           L_150BEBD4
    // 0x150BEBC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_150BEBD4;
    // 0x150BEBC0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_150BEBC4:
    // 0x150BEBC4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150BEBC8: nop

    // 0x150BEBCC: bltz        $a3, L_150BEBBC
    if (SIGNED(ctx->r7) < 0) {
        // 0x150BEBD0: nop
    
            goto L_150BEBBC;
    }
    // 0x150BEBD0: nop

L_150BEBD4:
    // 0x150BEBD4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x150BEBD8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x150BEBDC: andi        $t1, $a3, 0xFF
    ctx->r9 = ctx->r7 & 0XFF;
    // 0x150BEBE0: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x150BEBE4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150BEBE8: jal         0x15141F78
    // 0x150BEBEC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_15141F78(rdram, ctx);
        goto after_1;
    // 0x150BEBEC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_1:
    // 0x150BEBF0: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x150BEBF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150BEBF8: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x150BEBFC: slti        $at, $t4, 0x4C
    ctx->r1 = SIGNED(ctx->r12) < 0X4C ? 1 : 0;
    // 0x150BEC00: bne         $at, $zero, L_150BEC20
    if (ctx->r1 != 0) {
        // 0x150BEC04: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_150BEC20;
    }
    // 0x150BEC04: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x150BEC08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BEC0C: lwc1        $f16, 0xCC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XCC);
    // 0x150BEC10: lui         $a3, 0x404E
    ctx->r7 = S32(0X404E << 16);
    // 0x150BEC14: ori         $a3, $a3, 0xD917
    ctx->r7 = ctx->r7 | 0XD917;
    // 0x150BEC18: jal         0x15142180
    // 0x150BEC1C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_15142180(rdram, ctx);
        goto after_2;
    // 0x150BEC1C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
L_150BEC20:
    // 0x150BEC20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150BEC24: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x150BEC28: jr          $ra
    // 0x150BEC2C: nop

    return;
    return;
    // 0x150BEC2C: nop

;}
RECOMP_FUNC void func_16001700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001700: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x16001704: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x16001708: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x1600170C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x16001710: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x16001714: lbu         $t6, 0x2A50($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X2A50);
    // 0x16001718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1600171C: beq         $t6, $at, L_16001784
    if (ctx->r14 == ctx->r1) {
        // 0x16001720: nop
    
            goto L_16001784;
    }
    // 0x16001720: nop

    // 0x16001724: jal         0x160018BC
    // 0x16001728: nop

    func_160018BC(rdram, ctx);
        goto after_0;
    // 0x16001728: nop

    after_0:
    // 0x1600172C: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x16001730: addiu       $a1, $a1, 0x2A10
    ctx->r5 = ADD32(ctx->r5, 0X2A10);
    // 0x16001734: jal         0x160019A8
    // 0x16001738: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_160019A8(rdram, ctx);
        goto after_1;
    // 0x16001738: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x1600173C: jal         0x10024770
    // 0x16001740: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    osGetCount_recomp(rdram, ctx);
        goto after_2;
    // 0x16001740: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_2:
    // 0x16001744: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x16001748: ori         $at, $at, 0xD40
    ctx->r1 = ctx->r1 | 0XD40;
    // 0x1600174C: jal         0x10024770
    // 0x16001750: addu        $s1, $v0, $at
    ctx->r17 = ADD32(ctx->r2, ctx->r1);
    osGetCount_recomp(rdram, ctx);
        goto after_3;
    // 0x16001750: addu        $s1, $v0, $at
    ctx->r17 = ADD32(ctx->r2, ctx->r1);
    after_3:
    // 0x16001754: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x16001758: beq         $at, $zero, L_1600177C
    if (ctx->r1 == 0) {
        // 0x1600175C: nop
    
            goto L_1600177C;
    }
    // 0x1600175C: nop

L_16001760:
    // 0x16001760: jal         0x160016F4
    // 0x16001764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_160016F4(rdram, ctx);
        goto after_4;
    // 0x16001764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x16001768: jal         0x10024770
    // 0x1600176C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    osGetCount_recomp(rdram, ctx);
        goto after_5;
    // 0x1600176C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_5:
    // 0x16001770: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x16001774: bne         $at, $zero, L_16001760
    if (ctx->r1 != 0) {
        // 0x16001778: nop
    
            goto L_16001760;
    }
    // 0x16001778: nop

L_1600177C:
    // 0x1600177C: jal         0x160016F4
    // 0x16001780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_160016F4(rdram, ctx);
        goto after_6;
    // 0x16001780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_16001784:
    // 0x16001784: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x16001788: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x1600178C: addiu       $a0, $a0, 0x2A50
    ctx->r4 = ADD32(ctx->r4, 0X2A50);
    // 0x16001790: addiu       $v0, $v0, 0x2A10
    ctx->r2 = ADD32(ctx->r2, 0X2A10);
    // 0x16001794: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_16001798:
    // 0x16001798: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x1600179C: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x160017A0: bne         $at, $zero, L_16001798
    if (ctx->r1 != 0) {
        // 0x160017A4: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_16001798;
    }
    // 0x160017A4: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x160017A8: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x160017AC: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x160017B0: sw          $zero, 0x2A4C($at)
    MEM_W(0X2A4C, ctx->r1) = 0;
    // 0x160017B4: addiu       $a1, $a1, 0x2A10
    ctx->r5 = ADD32(ctx->r5, 0X2A10);
    // 0x160017B8: jal         0x160019A8
    // 0x160017BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_160019A8(rdram, ctx);
        goto after_7;
    // 0x160017BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x160017C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x160017C4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x160017C8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x160017CC: sb          $t7, 0x2A50($at)
    MEM_B(0X2A50, ctx->r1) = ctx->r15;
    // 0x160017D0: jal         0x10024770
    // 0x160017D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    osGetCount_recomp(rdram, ctx);
        goto after_8;
    // 0x160017D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_8:
    // 0x160017D8: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x160017DC: ori         $at, $at, 0x3500
    ctx->r1 = ctx->r1 | 0X3500;
    // 0x160017E0: jal         0x10024770
    // 0x160017E4: addu        $s1, $v0, $at
    ctx->r17 = ADD32(ctx->r2, ctx->r1);
    osGetCount_recomp(rdram, ctx);
        goto after_9;
    // 0x160017E4: addu        $s1, $v0, $at
    ctx->r17 = ADD32(ctx->r2, ctx->r1);
    after_9:
    // 0x160017E8: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x160017EC: beq         $at, $zero, L_16001810
    if (ctx->r1 == 0) {
        // 0x160017F0: nop
    
            goto L_16001810;
    }
    // 0x160017F0: nop

L_160017F4:
    // 0x160017F4: jal         0x160016F4
    // 0x160017F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_160016F4(rdram, ctx);
        goto after_10;
    // 0x160017F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x160017FC: jal         0x10024770
    // 0x16001800: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    osGetCount_recomp(rdram, ctx);
        goto after_11;
    // 0x16001800: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_11:
    // 0x16001804: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x16001808: bne         $at, $zero, L_160017F4
    if (ctx->r1 != 0) {
        // 0x1600180C: nop
    
            goto L_160017F4;
    }
    // 0x1600180C: nop

L_16001810:
    // 0x16001810: jal         0x160016F4
    // 0x16001814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_160016F4(rdram, ctx);
        goto after_12;
    // 0x16001814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x16001818: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x1600181C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x16001820: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x16001824: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x16001828: jr          $ra
    // 0x1600182C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1600182C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_151F2E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2E4C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2E50: sh          $a0, 0xDB2($at)
    MEM_H(0XDB2, ctx->r1) = ctx->r4;
    // 0x151F2E54: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2E58: sh          $a1, 0xDB0($at)
    MEM_H(0XDB0, ctx->r1) = ctx->r5;
    // 0x151F2E5C: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151F2E60: lw          $t6, 0xDD8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XDD8);
    // 0x151F2E64: bne         $t6, $zero, L_151F2E78
    if (ctx->r14 != 0) {
        // 0x151F2E68: nop
    
            goto L_151F2E78;
    }
    // 0x151F2E68: nop

    // 0x151F2E6C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151F2E70: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151F2E74: sw          $t7, 0xDD8($at)
    MEM_W(0XDD8, ctx->r1) = ctx->r15;
L_151F2E78:
    // 0x151F2E78: jr          $ra
    // 0x151F2E7C: nop

    return;
    return;
    // 0x151F2E7C: nop

    // 0x151F2E80: jr          $ra
    // 0x151F2E84: nop

    return;
    return;
    // 0x151F2E84: nop

;}
RECOMP_FUNC void func_151C96DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C96DC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151C96E0: lw          $v0, 0x170($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X170);
    // 0x151C96E4: lbu         $t6, 0x196($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X196);
    // 0x151C96E8: addiu       $v0, $v0, 0x110
    ctx->r2 = ADD32(ctx->r2, 0X110);
    // 0x151C96EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C96F0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x151C96F4: beq         $t7, $zero, L_151C9704
    if (ctx->r15 == 0) {
        // 0x151C96F8: nop
    
            goto L_151C9704;
    }
    // 0x151C96F8: nop

    // 0x151C96FC: jr          $ra
    // 0x151C9700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    return;
    // 0x151C9700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151C9704:
    // 0x151C9704: jr          $ra
    // 0x151C9708: nop

    return;
    return;
    // 0x151C9708: nop

;}
RECOMP_FUNC void func_151AABC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151AABC4: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x151AABC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151AABCC: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x151AABD0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151AABD4: beql        $a3, $zero, L_151AADB0
    if (ctx->r7 == 0) {
        // 0x151AABD8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151AADB0;
    }
    goto skip_0;
    // 0x151AABD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x151AABDC: lw          $t6, 0x1D4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X1D4);
    // 0x151AABE0: beql        $t6, $zero, L_151AADB0
    if (ctx->r14 == 0) {
        // 0x151AABE4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_151AADB0;
    }
    goto skip_1;
    // 0x151AABE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x151AABE8: jal         0x151D8E20
    // 0x151AABEC: sw          $a3, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r7;
    func_151D8E20(rdram, ctx);
        goto after_0;
    // 0x151AABEC: sw          $a3, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r7;
    after_0:
    // 0x151AABF0: lbu         $t7, 0xCF($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XCF);
    // 0x151AABF4: lw          $a3, 0xC8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC8);
    // 0x151AABF8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x151AABFC: sb          $v0, 0x87($sp)
    MEM_B(0X87, ctx->r29) = ctx->r2;
    // 0x151AAC00: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x151AAC04: lbu         $a1, -0x7090($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X7090);
    // 0x151AAC08: addiu       $a2, $sp, 0xBC
    ctx->r6 = ADD32(ctx->r29, 0XBC);
    // 0x151AAC0C: jal         0x15142314
    // 0x151AAC10: lw          $a0, 0x1D4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1D4);
    func_15142314(rdram, ctx);
        goto after_1;
    // 0x151AAC10: lw          $a0, 0x1D4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1D4);
    after_1:
    // 0x151AAC14: lw          $a1, 0xC8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC8);
    // 0x151AAC18: jal         0x1504715C
    // 0x151AAC1C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    func_1504715C(rdram, ctx);
        goto after_2;
    // 0x151AAC1C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    after_2:
    // 0x151AAC20: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x151AAC24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151AAC28: lwc1        $f6, 0xC0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x151AAC2C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151AAC30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151AAC34: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151AAC38: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151AAC3C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151AAC40: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x151AAC44: sub.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x151AAC48: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x151AAC4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x151AAC50: addiu       $a3, $sp, 0x98
    ctx->r7 = ADD32(ctx->r29, 0X98);
    // 0x151AAC54: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x151AAC58: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x151AAC5C: jal         0x1504697C
    // 0x151AAC60: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    func_1504697C(rdram, ctx);
        goto after_3;
    // 0x151AAC60: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x151AAC64: beq         $v0, $zero, L_151AADAC
    if (ctx->r2 == 0) {
        // 0x151AAC68: lwc1        $f4, 0xBC($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
            goto L_151AADAC;
    }
    // 0x151AAC68: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x151AAC6C: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151AAC70: lwc1        $f8, 0xC4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151AAC74: addiu       $t8, $sp, 0x78
    ctx->r24 = ADD32(ctx->r29, 0X78);
    // 0x151AAC78: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x151AAC7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151AAC80: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x151AAC84: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x151AAC88: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151AAC8C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151AAC90: lbu         $a0, 0x87($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X87);
    // 0x151AAC94: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x151AAC98: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x151AAC9C: addiu       $a3, $sp, 0x9C
    ctx->r7 = ADD32(ctx->r29, 0X9C);
    // 0x151AACA0: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x151AACA4: jal         0x151DBCBC
    // 0x151AACA8: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    func_151DBCBC(rdram, ctx);
        goto after_4;
    // 0x151AACA8: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x151AACAC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x151AACB0: addiu       $t1, $sp, 0x78
    ctx->r9 = ADD32(ctx->r29, 0X78);
    // 0x151AACB4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x151AACB8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x151AACBC: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x151AACC0: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x151AACC4: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x151AACC8: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x151AACCC: addiu       $t8, $zero, -0x40
    ctx->r24 = ADD32(0, -0X40);
    // 0x151AACD0: sw          $t4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r12;
    // 0x151AACD4: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x151AACD8: addiu       $t9, $zero, 0x1A
    ctx->r25 = ADD32(0, 0X1A);
    // 0x151AACDC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x151AACE0: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x151AACE4: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x151AACE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151AACEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AACF0: lwc1        $f16, -0x7034($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X7034);
    // 0x151AACF4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AACF8: lwc1        $f18, -0x7030($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7030);
    // 0x151AACFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AAD00: lwc1        $f4, -0x702C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X702C);
    // 0x151AAD04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AAD08: lwc1        $f6, -0x7028($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X7028);
    // 0x151AAD0C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151AAD10: sh          $t6, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r14;
    // 0x151AAD14: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x151AAD18: lwc1        $f8, -0x7024($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X7024);
    // 0x151AAD1C: lbu         $t6, 0x87($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X87);
    // 0x151AAD20: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151AAD24: sh          $t5, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r13;
    // 0x151AAD28: sh          $t7, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r15;
    // 0x151AAD2C: sh          $t8, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r24;
    // 0x151AAD30: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
    // 0x151AAD34: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151AAD38: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x151AAD3C: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x151AAD40: addiu       $t4, $zero, 0x9B
    ctx->r12 = ADD32(0, 0X9B);
    // 0x151AAD44: addiu       $t5, $zero, 0x64
    ctx->r13 = ADD32(0, 0X64);
    // 0x151AAD48: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x151AAD4C: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x151AAD50: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x151AAD54: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    // 0x151AAD58: sh          $t0, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r8;
    // 0x151AAD5C: sh          $t3, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r11;
    // 0x151AAD60: sh          $t2, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r10;
    // 0x151AAD64: sh          $t1, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r9;
    // 0x151AAD68: sh          $t4, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r12;
    // 0x151AAD6C: sh          $t5, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r13;
    // 0x151AAD70: sh          $t7, 0x70($sp)
    MEM_H(0X70, ctx->r29) = ctx->r15;
    // 0x151AAD74: sh          $t8, 0x72($sp)
    MEM_H(0X72, ctx->r29) = ctx->r24;
    // 0x151AAD78: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x151AAD7C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x151AAD80: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x151AAD84: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x151AAD88: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x151AAD8C: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x151AAD90: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x151AAD94: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x151AAD98: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x151AAD9C: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x151AADA0: sb          $t6, 0x68($sp)
    MEM_B(0X68, ctx->r29) = ctx->r14;
    // 0x151AADA4: jal         0x15153F18
    // 0x151AADA8: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    func_15153F18(rdram, ctx);
        goto after_5;
    // 0x151AADA8: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    after_5:
L_151AADAC:
    // 0x151AADAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_151AADB0:
    // 0x151AADB0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x151AADB4: jr          $ra
    // 0x151AADB8: nop

    return;
    return;
    // 0x151AADB8: nop

;}
RECOMP_FUNC void func_150F03E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F03E8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x150F03EC: sw          $zero, 0x13C($v0)
    MEM_W(0X13C, ctx->r2) = 0;
    // 0x150F03F0: jr          $ra
    // 0x150F03F4: nop

    return;
    return;
    // 0x150F03F4: nop

;}
RECOMP_FUNC void func_10008180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10008180: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x10008184: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x10008188: lui         $s7, 0x8004
    ctx->r23 = S32(0X8004 << 16);
    // 0x1000818C: addiu       $s7, $s7, -0x1C90
    ctx->r23 = ADD32(ctx->r23, -0X1C90);
    // 0x10008190: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x10008194: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x10008198: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x1000819C: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x100081A0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x100081A4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x100081A8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x100081AC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x100081B0: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x100081B4: lui         $a2, 0x3
    ctx->r6 = S32(0X3 << 16);
    // 0x100081B8: ori         $a2, $a2, 0xE000
    ctx->r6 = ctx->r6 | 0XE000;
    // 0x100081BC: addiu       $a1, $a1, 0x4B20
    ctx->r5 = ADD32(ctx->r5, 0X4B20);
    // 0x100081C0: jal         0x10012820
    // 0x100081C4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    alHeapInit(rdram, ctx);
        goto after_0;
    // 0x100081C4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_0:
    // 0x100081C8: addiu       $t6, $zero, 0x2C
    ctx->r14 = ADD32(0, 0X2C);
    // 0x100081CC: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x100081D0: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x100081D4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x100081D8: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x100081DC: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x100081E0: addiu       $t2, $zero, 0x5604
    ctx->r10 = ADD32(0, 0X5604);
    // 0x100081E4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x100081E8: addiu       $t4, $zero, 0xC00
    ctx->r12 = ADD32(0, 0XC00);
    // 0x100081EC: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x100081F0: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
    // 0x100081F4: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x100081F8: sw          $t9, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r25;
    // 0x100081FC: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x10008200: sb          $t0, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r8;
    // 0x10008204: sb          $t1, 0xC5($sp)
    MEM_B(0XC5, ctx->r29) = ctx->r9;
    // 0x10008208: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x1000820C: sw          $s7, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r23;
    // 0x10008210: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x10008214: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    // 0x10008218: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x1000821C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10008220: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x10008224: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x10008228: jal         0x1502B020
    // 0x1000822C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_1502B020(rdram, ctx);
        goto after_1;
    // 0x1000822C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x10008230: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    // 0x10008234: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x10008238: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x1000823C: jal         0x10008F90
    // 0x10008240: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    func_10008F90(rdram, ctx);
        goto after_2;
    // 0x10008240: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_2:
    // 0x10008244: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x10008248: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x1000824C: jal         0x1502B9B4
    // 0x10008250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1502B9B4(rdram, ctx);
        goto after_3;
    // 0x10008250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x10008254: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x10008258: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1000825C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x10008260: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x10008264: jal         0x10003C40
    // 0x10008268: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_4;
    // 0x10008268: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x1000826C: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x10008270: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x10008274: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x10008278: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1000827C: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    // 0x10008280: jal         0x1502B8E0
    // 0x10008284: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1502B8E0(rdram, ctx);
        goto after_5;
    // 0x10008284: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x10008288: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000828C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x10008290: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x10008294: jal         0x1502B020
    // 0x10008298: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_1502B020(rdram, ctx);
        goto after_6;
    // 0x10008298: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x1000829C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x100082A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100082A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x100082A8: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x100082AC: jal         0x1502B020
    // 0x100082B0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_1502B020(rdram, ctx);
        goto after_7;
    // 0x100082B0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_7:
    // 0x100082B4: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x100082B8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x100082BC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x100082C0: jal         0x10012934
    // 0x100082C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_10012934(rdram, ctx);
        goto after_8;
    // 0x100082C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x100082C8: lw          $t5, 0x4($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X4);
    // 0x100082CC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x100082D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x100082D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x100082D8: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x100082DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x100082E0: jal         0x1502B020
    // 0x100082E4: sw          $t5, -0x1C98($at)
    MEM_W(-0X1C98, ctx->r1) = ctx->r13;
    func_1502B020(rdram, ctx);
        goto after_9;
    // 0x100082E4: sw          $t5, -0x1C98($at)
    MEM_W(-0X1C98, ctx->r1) = ctx->r13;
    after_9:
    // 0x100082E8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x100082EC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x100082F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x100082F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x100082F8: jal         0x10003C40
    // 0x100082FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_10;
    // 0x100082FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x10008300: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x10008304: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x10008308: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1000830C: jal         0x100046E4
    // 0x10008310: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_100046E4(rdram, ctx);
        goto after_11;
    // 0x10008310: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x10008314: lh          $s1, 0x2($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X2);
    // 0x10008318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1000831C: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x10008320: jal         0x10004074
    // 0x10008324: addiu       $s1, $t6, 0x4
    ctx->r17 = ADD32(ctx->r14, 0X4);
    func_10004074(rdram, ctx);
        goto after_12;
    // 0x10008324: addiu       $s1, $t6, 0x4
    ctx->r17 = ADD32(ctx->r14, 0X4);
    after_12:
    // 0x10008328: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x1000832C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x10008330: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x10008334: jal         0x10003C40
    // 0x10008338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_13;
    // 0x10008338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x1000833C: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x10008340: addiu       $a2, $s1, 0xF
    ctx->r6 = ADD32(ctx->r17, 0XF);
    // 0x10008344: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x10008348: addiu       $s0, $s0, -0x32C0
    ctx->r16 = ADD32(ctx->r16, -0X32C0);
    // 0x1000834C: and         $t7, $a2, $at
    ctx->r15 = ctx->r6 & ctx->r1;
    // 0x10008350: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x10008354: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x10008358: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1000835C: jal         0x100046E4
    // 0x10008360: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_100046E4(rdram, ctx);
        goto after_14;
    // 0x10008360: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_14:
    // 0x10008364: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x10008368: jal         0x100128D0
    // 0x1000836C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alSeqFileNew(rdram, ctx);
        goto after_15;
    // 0x1000836C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_15:
    // 0x10008370: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x10008374: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x10008378: lw          $a0, -0x32C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X32C0);
    // 0x1000837C: addiu       $v0, $v0, -0x36F0
    ctx->r2 = ADD32(ctx->r2, -0X36F0);
    // 0x10008380: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_10008384:
    // 0x10008384: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x10008388: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x1000838C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x10008390: andi        $a1, $t8, 0xFFFF
    ctx->r5 = ctx->r24 & 0XFFFF;
    // 0x10008394: andi        $t9, $a1, 0x1
    ctx->r25 = ctx->r5 & 0X1;
    // 0x10008398: beq         $t9, $zero, L_100083A8
    if (ctx->r25 == 0) {
        // 0x1000839C: sh          $t8, 0x0($v0)
        MEM_H(0X0, ctx->r2) = ctx->r24;
            goto L_100083A8;
    }
    // 0x1000839C: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x100083A0: addiu       $t0, $a1, 0x1
    ctx->r8 = ADD32(ctx->r5, 0X1);
    // 0x100083A4: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
L_100083A8:
    // 0x100083A8: slti        $at, $v1, 0x4B0
    ctx->r1 = SIGNED(ctx->r3) < 0X4B0 ? 1 : 0;
    // 0x100083AC: bne         $at, $zero, L_10008384
    if (ctx->r1 != 0) {
        // 0x100083B0: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_10008384;
    }
    // 0x100083B0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x100083B4: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x100083B8: addiu       $t1, $zero, 0x2C
    ctx->r9 = ADD32(0, 0X2C);
    // 0x100083BC: addiu       $t2, $zero, 0x68
    ctx->r10 = ADD32(0, 0X68);
    // 0x100083C0: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x100083C4: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x100083C8: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
    // 0x100083CC: sb          $zero, 0x7D($sp)
    MEM_B(0X7D, ctx->r29) = 0;
    // 0x100083D0: sb          $t3, 0x7C($sp)
    MEM_B(0X7C, ctx->r29) = ctx->r11;
    // 0x100083D4: sw          $s7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r23;
    // 0x100083D8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x100083DC: jal         0x100131FC
    // 0x100083E0: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    func_100131FC(rdram, ctx);
        goto after_16;
    // 0x100083E0: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    after_16:
    // 0x100083E4: lui         $s1, 0x8004
    ctx->r17 = S32(0X8004 << 16);
    // 0x100083E8: lui         $s2, 0x8004
    ctx->r18 = S32(0X8004 << 16);
    // 0x100083EC: lui         $s0, 0x8004
    ctx->r16 = S32(0X8004 << 16);
    // 0x100083F0: lui         $s4, 0x8004
    ctx->r20 = S32(0X8004 << 16);
    // 0x100083F4: addiu       $s4, $s4, -0x36F4
    ctx->r20 = ADD32(ctx->r20, -0X36F4);
    // 0x100083F8: addiu       $s0, $s0, -0x3700
    ctx->r16 = ADD32(ctx->r16, -0X3700);
    // 0x100083FC: addiu       $s2, $s2, -0x35B8
    ctx->r18 = ADD32(ctx->r18, -0X35B8);
    // 0x10008400: addiu       $s1, $s1, -0x35C4
    ctx->r17 = ADD32(ctx->r17, -0X35C4);
    // 0x10008404: ori         $s3, $zero, 0xFFFF
    ctx->r19 = 0 | 0XFFFF;
L_10008408:
    // 0x10008408: addiu       $t4, $zero, 0x90
    ctx->r12 = ADD32(0, 0X90);
    // 0x1000840C: sh          $s3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r19;
    // 0x10008410: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x10008414: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x10008418: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1000841C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x10008420: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x10008424: jal         0x10012844
    // 0x10008428: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_17;
    // 0x10008428: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x1000842C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x10008430: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x10008434: jal         0x10013320
    // 0x10008438: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    n_alCSPNew(rdram, ctx);
        goto after_18;
    // 0x10008438: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_18:
    // 0x1000843C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x10008440: jal         0x10015550
    // 0x10008444: lw          $a1, 0x4($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X4);
    func_10015550(rdram, ctx);
        goto after_19;
    // 0x10008444: lw          $a1, 0x4($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X4);
    after_19:
    // 0x10008448: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1000844C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x10008450: bne         $s0, $s4, L_10008408
    if (ctx->r16 != ctx->r20) {
        // 0x10008454: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_10008408;
    }
    // 0x10008454: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x10008458: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x1000845C: addiu       $t5, $zero, 0x40
    ctx->r13 = ADD32(0, 0X40);
    // 0x10008460: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x10008464: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x10008468: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x1000846C: sw          $t5, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r13;
    // 0x10008470: sw          $t6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r14;
    // 0x10008474: sw          $t7, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r15;
    // 0x10008478: sh          $t8, 0xEC($sp)
    MEM_H(0XEC, ctx->r29) = ctx->r24;
    // 0x1000847C: sw          $s7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r23;
    // 0x10008480: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x10008484: jal         0x100155A0
    // 0x10008488: sw          $t9, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r25;
    func_100155A0(rdram, ctx);
        goto after_20;
    // 0x10008488: sw          $t9, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r25;
    after_20:
    // 0x1000848C: jal         0x10017870
    // 0x10008490: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_10017870(rdram, ctx);
        goto after_21;
    // 0x10008490: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_21:
    // 0x10008494: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x10008498: jal         0x10017944
    // 0x1000849C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_10017944(rdram, ctx);
        goto after_22;
    // 0x1000849C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_22:
    // 0x100084A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x100084A4: jal         0x10017944
    // 0x100084A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_10017944(rdram, ctx);
        goto after_23;
    // 0x100084A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_23:
    // 0x100084AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x100084B0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x100084B4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x100084B8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x100084BC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x100084C0: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x100084C4: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x100084C8: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x100084CC: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x100084D0: jr          $ra
    // 0x100084D4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    return;
    // 0x100084D4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_151D8BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8BB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151D8BB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D8BBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151D8BC0: jal         0x151D8B24
    // 0x151D8BC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151D8B24(rdram, ctx);
        goto after_0;
    // 0x151D8BC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151D8BC8: jal         0x15169824
    // 0x151D8BCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15169824(rdram, ctx);
        goto after_1;
    // 0x151D8BCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151D8BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D8BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151D8BD8: jr          $ra
    // 0x151D8BDC: nop

    return;
    return;
    // 0x151D8BDC: nop

;}
RECOMP_FUNC void func_15012FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15012FE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15012FE4: sw          $zero, -0x1A90($at)
    MEM_W(-0X1A90, ctx->r1) = 0;
    // 0x15012FE8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15012FEC: sb          $zero, -0x1A8C($at)
    MEM_B(-0X1A8C, ctx->r1) = 0;
    // 0x15012FF0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x15012FF4: sb          $zero, -0x1A8B($at)
    MEM_B(-0X1A8B, ctx->r1) = 0;
    // 0x15012FF8: jr          $ra
    // 0x15012FFC: nop

    return;
    return;
    // 0x15012FFC: nop

;}
RECOMP_FUNC void func_100077B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_1502B350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1502B350: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1502B354: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1502B358: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1502B35C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x1502B360: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x1502B364: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x1502B368: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x1502B36C: lui         $at, 0xFFF
    ctx->r1 = S32(0XFFF << 16);
    // 0x1502B370: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1502B374: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x1502B378: addiu       $v1, $t6, 0x1
    ctx->r3 = ADD32(ctx->r14, 0X1);
    // 0x1502B37C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1502B380: and         $a0, $v1, $at
    ctx->r4 = ctx->r3 & ctx->r1;
    // 0x1502B384: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x1502B388: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x1502B38C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1502B390: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1502B394: jal         0x10003C40
    // 0x1502B398: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1502B398: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x1502B39C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x1502B3A0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1502B3A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x1502B3A8: bne         $v0, $zero, L_1502B3B8
    if (ctx->r2 != 0) {
        // 0x1502B3AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1502B3B8;
    }
    // 0x1502B3AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1502B3B0: b           L_1502B494
    // 0x1502B3B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1502B494;
    // 0x1502B3B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1502B3B8:
    // 0x1502B3B8: addiu       $a2, $v1, 0xF
    ctx->r6 = ADD32(ctx->r3, 0XF);
    // 0x1502B3BC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x1502B3C0: and         $t8, $a2, $at
    ctx->r24 = ctx->r6 & ctx->r1;
    // 0x1502B3C4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x1502B3C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x1502B3CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1502B3D0: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x1502B3D4: jal         0x10004514
    // 0x1502B3D8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_10004514(rdram, ctx);
        goto after_1;
    // 0x1502B3D8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_1:
    // 0x1502B3DC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x1502B3E0: lui         $at, 0x7000
    ctx->r1 = S32(0X7000 << 16);
    // 0x1502B3E4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x1502B3E8: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x1502B3EC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x1502B3F0: bne         $t1, $at, L_1502B488
    if (ctx->r9 != ctx->r1) {
        // 0x1502B3F4: lw          $t2, 0x28($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X28);
            goto L_1502B488;
    }
    // 0x1502B3F4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x1502B3F8: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x1502B3FC: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x1502B400: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x1502B404: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x1502B408: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x1502B40C: beq         $t4, $zero, L_1502B470
    if (ctx->r12 == 0) {
        // 0x1502B410: sw          $t4, 0x0($t5)
        MEM_W(0X0, ctx->r13) = ctx->r12;
            goto L_1502B470;
    }
    // 0x1502B410: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x1502B414: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x1502B418: ori         $at, $at, 0x4240
    ctx->r1 = ctx->r1 | 0X4240;
    // 0x1502B41C: sltu        $at, $t4, $at
    ctx->r1 = ctx->r12 < ctx->r1 ? 1 : 0;
    // 0x1502B420: beq         $at, $zero, L_1502B468
    if (ctx->r1 == 0) {
        // 0x1502B424: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_1502B468;
    }
    // 0x1502B424: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502B428: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x1502B42C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1502B430: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1502B434: jal         0x10003C40
    // 0x1502B438: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x1502B438: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x1502B43C: beq         $v0, $zero, L_1502B460
    if (ctx->r2 == 0) {
        // 0x1502B440: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1502B460;
    }
    // 0x1502B440: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1502B444: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x1502B448: lw          $a2, -0x7F64($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X7F64);
    // 0x1502B44C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1502B450: jal         0x10006240
    // 0x1502B454: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_10006240(rdram, ctx);
        goto after_3;
    // 0x1502B454: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x1502B458: b           L_1502B478
    // 0x1502B45C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_1502B478;
    // 0x1502B45C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_1502B460:
    // 0x1502B460: b           L_1502B478
    // 0x1502B464: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_1502B478;
    // 0x1502B464: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1502B468:
    // 0x1502B468: b           L_1502B478
    // 0x1502B46C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
        goto L_1502B478;
    // 0x1502B46C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1502B470:
    // 0x1502B470: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1502B474: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_1502B478:
    // 0x1502B478: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x1502B47C: jal         0x10004074
    // 0x1502B480: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_10004074(rdram, ctx);
        goto after_4;
    // 0x1502B480: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_4:
    // 0x1502B484: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_1502B488:
    // 0x1502B488: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x1502B48C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1502B490: sw          $t0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r8;
L_1502B494:
    // 0x1502B494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1502B498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1502B49C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x1502B4A0: jr          $ra
    // 0x1502B4A4: nop

    return;
    return;
    // 0x1502B4A4: nop

;}
RECOMP_FUNC void func_15103E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15103E40: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x15103E44: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15103E48: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x15103E4C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15103E50: sw          $a0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r4;
    // 0x15103E54: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x15103E58: sw          $a3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r7;
    // 0x15103E5C: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x15103E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15103E64: beql        $t6, $zero, L_15104158
    if (ctx->r14 == 0) {
        // 0x15103E68: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15104158;
    }
    goto skip_0;
    // 0x15103E68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x15103E6C: sb          $zero, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = 0;
    // 0x15103E70: lbu         $a1, 0xAF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XAF);
    // 0x15103E74: jal         0x151D3FF4
    // 0x15103E78: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    func_151D3FF4(rdram, ctx);
        goto after_0;
    // 0x15103E78: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    after_0:
    // 0x15103E7C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15103E80: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15103E84: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15103E88: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x15103E8C: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15103E90: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x15103E94: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x15103E98: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15103E9C: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x15103EA0: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15103EA4: jal         0x1504715C
    // 0x15103EA8: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x15103EA8: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x15103EAC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x15103EB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15103EB4: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15103EB8: addiu       $a0, $sp, 0x7C
    ctx->r4 = ADD32(ctx->r29, 0X7C);
    // 0x15103EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15103EC0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15103EC4: addiu       $a3, $sp, 0x58
    ctx->r7 = ADD32(ctx->r29, 0X58);
    // 0x15103EC8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15103ECC: jal         0x15046C80
    // 0x15103ED0: nop

    func_15046C80(rdram, ctx);
        goto after_2;
    // 0x15103ED0: nop

    after_2:
    // 0x15103ED4: beql        $v0, $zero, L_15103FA0
    if (ctx->r2 == 0) {
        // 0x15103ED8: lbu         $t5, 0x8B($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0X8B);
            goto L_15103FA0;
    }
    goto skip_1;
    // 0x15103ED8: lbu         $t5, 0x8B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X8B);
    skip_1:
    // 0x15103EDC: lbu         $t7, 0x74($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X74);
    // 0x15103EE0: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x15103EE4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15103EE8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x15103EEC: beql        $t8, $zero, L_15103FA0
    if (ctx->r24 == 0) {
        // 0x15103EF0: lbu         $t5, 0x8B($sp)
        ctx->r13 = MEM_BU(ctx->r29, 0X8B);
            goto L_15103FA0;
    }
    goto skip_2;
    // 0x15103EF0: lbu         $t5, 0x8B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X8B);
    skip_2:
    // 0x15103EF4: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x15103EF8: lwc1        $f16, 0x84($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X84);
    // 0x15103EFC: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x15103F00: sb          $t9, 0x8B($sp)
    MEM_B(0X8B, ctx->r29) = ctx->r25;
    // 0x15103F04: swc1        $f10, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f10.u32l;
    // 0x15103F08: jal         0x150ADA68
    // 0x15103F0C: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    func_150ADA68(rdram, ctx);
        goto after_3;
    // 0x15103F0C: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x15103F10: jal         0x150ADA20
    // 0x15103F14: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x15103F14: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x15103F18: jal         0x150ADA20
    // 0x15103F1C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x15103F1C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_5:
    // 0x15103F20: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x15103F24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15103F28: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15103F2C: lui         $at, 0x434C
    ctx->r1 = S32(0X434C << 16);
    // 0x15103F30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15103F34: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x15103F38: divu        $zero, $a0, $at
    lo = S32(U32(ctx->r4) / U32(ctx->r1)); hi = S32(U32(ctx->r4) % U32(ctx->r1));
    // 0x15103F3C: mfhi        $a1
    ctx->r5 = hi;
    // 0x15103F40: addiu       $at, $zero, 0x12E
    ctx->r1 = ADD32(0, 0X12E);
    // 0x15103F44: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15103F48: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15103F4C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x15103F50: lbu         $t4, 0xAF($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XAF);
    // 0x15103F54: mfhi        $t1
    ctx->r9 = hi;
    // 0x15103F58: addiu       $a1, $a1, 0x9B
    ctx->r5 = ADD32(ctx->r5, 0X9B);
    // 0x15103F5C: andi        $t0, $a1, 0xFF
    ctx->r8 = ctx->r5 & 0XFF;
    // 0x15103F60: addiu       $t2, $t1, 0x1F4
    ctx->r10 = ADD32(ctx->r9, 0X1F4);
    // 0x15103F64: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x15103F68: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x15103F6C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15103F70: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x15103F74: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x15103F78: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    // 0x15103F7C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15103F80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15103F84: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15103F88: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x15103F8C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15103F90: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15103F94: jal         0x150E7FEC
    // 0x15103F98: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    func_150E7FEC(rdram, ctx);
        goto after_6;
    // 0x15103F98: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    after_6:
    // 0x15103F9C: lbu         $t5, 0x8B($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X8B);
L_15103FA0:
    // 0x15103FA0: beql        $t5, $zero, L_15103FB4
    if (ctx->r13 == 0) {
        // 0x15103FA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15103FB4;
    }
    goto skip_3;
    // 0x15103FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x15103FA8: b           L_15103FB4
    // 0x15103FAC: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
        goto L_15103FB4;
    // 0x15103FAC: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x15103FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_15103FB4:
    // 0x15103FB4: jal         0x150ADA20
    // 0x15103FB8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15103FB8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_7:
    // 0x15103FBC: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x15103FC0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15103FC4: mfhi        $a1
    ctx->r5 = hi;
    // 0x15103FC8: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x15103FCC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x15103FD0: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15103FD4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x15103FD8: lbu         $a2, 0xAF($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XAF);
    // 0x15103FDC: jal         0x150E83AC
    // 0x15103FE0: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    func_150E83AC(rdram, ctx);
        goto after_8;
    // 0x15103FE0: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    after_8:
    // 0x15103FE4: lbu         $t0, 0xAF($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XAF);
    // 0x15103FE8: lw          $t1, 0xB0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB0);
    // 0x15103FEC: lui         $a2, 0x447D
    ctx->r6 = S32(0X447D << 16);
    // 0x15103FF0: lui         $a3, 0x3A81
    ctx->r7 = S32(0X3A81 << 16);
    // 0x15103FF4: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x15103FF8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x15103FFC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15104000: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x15104004: ori         $a3, $a3, 0x63D3
    ctx->r7 = ctx->r7 | 0X63D3;
    // 0x15104008: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x1510400C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15104010: lui         $a1, 0x43FD
    ctx->r5 = S32(0X43FD << 16);
    // 0x15104014: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15104018: jal         0x151D5404
    // 0x1510401C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_151D5404(rdram, ctx);
        goto after_9;
    // 0x1510401C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_9:
    // 0x15104020: lbu         $t3, 0xAF($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XAF);
    // 0x15104024: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    // 0x15104028: lui         $a2, 0x447D
    ctx->r6 = S32(0X447D << 16);
    // 0x1510402C: lui         $a3, 0x3A81
    ctx->r7 = S32(0X3A81 << 16);
    // 0x15104030: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x15104034: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x15104038: ori         $a3, $a3, 0x63D3
    ctx->r7 = ctx->r7 | 0X63D3;
    // 0x1510403C: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x15104040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15104044: lui         $a1, 0x43FD
    ctx->r5 = S32(0X43FD << 16);
    // 0x15104048: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x1510404C: jal         0x151D5334
    // 0x15104050: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    func_151D5334(rdram, ctx);
        goto after_10;
    // 0x15104050: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    after_10:
    // 0x15104054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15104058: lbu         $a1, 0xAF($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XAF);
    // 0x1510405C: jal         0x151D5514
    // 0x15104060: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    func_151D5514(rdram, ctx);
        goto after_11;
    // 0x15104060: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    after_11:
    // 0x15104064: lbu         $v0, 0xA7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XA7);
    // 0x15104068: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1510406C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15104070: beq         $v0, $zero, L_151040B0
    if (ctx->r2 == 0) {
        // 0x15104074: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_151040B0;
    }
    // 0x15104074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15104078: bne         $v0, $at, L_1510408C
    if (ctx->r2 != ctx->r1) {
        // 0x1510407C: lw          $a2, 0x98($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X98);
            goto L_1510408C;
    }
    // 0x1510407C: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x15104080: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x15104084: b           L_15104094
    // 0x15104088: addiu       $v1, $zero, 0x41
    ctx->r3 = ADD32(0, 0X41);
        goto L_15104094;
    // 0x15104088: addiu       $v1, $zero, 0x41
    ctx->r3 = ADD32(0, 0X41);
L_1510408C:
    // 0x1510408C: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
    // 0x15104090: addiu       $v1, $zero, 0x2A
    ctx->r3 = ADD32(0, 0X2A);
L_15104094:
    // 0x15104094: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    // 0x15104098: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x1510409C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x151040A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x151040A4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x151040A8: jal         0x151D40D4
    // 0x151040AC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    func_151D40D4(rdram, ctx);
        goto after_12;
    // 0x151040AC: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    after_12:
L_151040B0:
    // 0x151040B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x151040B4: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x151040B8: lw          $a3, 0x8($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X8);
    // 0x151040BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151040C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151040C4: jal         0x15055A2C
    // 0x151040C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15055A2C(rdram, ctx);
        goto after_13;
    // 0x151040C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x151040CC: jal         0x150ADA68
    // 0x151040D0: nop

    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x151040D0: nop

    after_14:
    // 0x151040D4: jal         0x150ADA20
    // 0x151040D8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x151040D8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_15:
    // 0x151040DC: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x151040E0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151040E4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151040E8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x151040EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151040F0: mul.s       $f16, $f18, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x151040F4: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x151040F8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151040FC: add.s       $f14, $f16, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x15104100: mfhi        $t7
    ctx->r15 = hi;
    // 0x15104104: addiu       $t8, $t7, 0xC8
    ctx->r24 = ADD32(ctx->r15, 0XC8);
    // 0x15104108: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x1510410C: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x15104110: lui         $a2, 0x3FD2
    ctx->r6 = S32(0X3FD2 << 16);
    // 0x15104114: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15104118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1510411C: bgez        $t8, L_15104134
    if (SIGNED(ctx->r24) >= 0) {
        // 0x15104120: ori         $a2, $a2, 0xC49
        ctx->r6 = ctx->r6 | 0XC49;
            goto L_15104134;
    }
    // 0x15104120: ori         $a2, $a2, 0xC49
    ctx->r6 = ctx->r6 | 0XC49;
    // 0x15104124: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15104128: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1510412C: nop

    // 0x15104130: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_15104134:
    // 0x15104134: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15104138: lbu         $t9, 0xAF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XAF);
    // 0x1510413C: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x15104140: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x15104144: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x15104148: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x1510414C: jal         0x151541B8
    // 0x15104150: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_151541B8(rdram, ctx);
        goto after_16;
    // 0x15104150: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_16:
    // 0x15104154: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15104158:
    // 0x15104158: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x1510415C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x15104160: jr          $ra
    // 0x15104164: nop

    return;
    return;
    // 0x15104164: nop

;}
RECOMP_FUNC void func_150717E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150717E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150717E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150717E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150717EC: jal         0x15083E90
    // 0x150717F0: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_15083E90(rdram, ctx);
        goto after_0;
    // 0x150717F0: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x150717F4: beq         $v0, $zero, L_15071820
    if (ctx->r2 == 0) {
        // 0x150717F8: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_15071820;
    }
    // 0x150717F8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x150717FC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x15071800: lbu         $t6, 0x3B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X3B);
    // 0x15071804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15071808: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    // 0x1507180C: jal         0x15131D4C
    // 0x15071810: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    func_15131D4C(rdram, ctx);
        goto after_1;
    // 0x15071810: sb          $t6, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r14;
    after_1:
    // 0x15071814: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15071818: jal         0x151494E0
    // 0x1507181C: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    func_151494E0(rdram, ctx);
        goto after_2;
    // 0x1507181C: addiu       $a1, $zero, 0x43
    ctx->r5 = ADD32(0, 0X43);
    after_2:
L_15071820:
    // 0x15071820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15071824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15071828: jr          $ra
    // 0x1507182C: nop

    return;
    return;
    // 0x1507182C: nop

;}
RECOMP_FUNC void func_1510E7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1510E7A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1510E7A8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x1510E7AC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x1510E7B0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x1510E7B4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x1510E7B8: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x1510E7BC: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x1510E7C0: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x1510E7C4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1510E7C8: lwc1        $f6, 0x64($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X64);
    // 0x1510E7CC: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x1510E7D0: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x1510E7D4: lhu         $t9, 0x72($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X72);
    // 0x1510E7D8: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x1510E7DC: lwc1        $f16, 0x78($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1510E7E0: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x1510E7E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1510E7E8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x1510E7EC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1510E7F0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1510E7F4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x1510E7F8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x1510E7FC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x1510E800: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x1510E804: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x1510E808: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x1510E80C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x1510E810: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x1510E814: jal         0x1510E950
    // 0x1510E818: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    func_1510E950(rdram, ctx);
        goto after_0;
    // 0x1510E818: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x1510E81C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x1510E820: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x1510E824: jr          $ra
    // 0x1510E828: nop

    return;
    return;
    // 0x1510E828: nop

;}
RECOMP_FUNC void func_151F2CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151F2CDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151F2CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151F2CE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151F2CE8: jal         0x10024880
    // 0x151F2CEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x151F2CEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x151F2CF0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x151F2CF4: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x151F2CF8: lw          $t6, 0xE04($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XE04);
    // 0x151F2CFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x151F2D00: beq         $t6, $at, L_151F2D38
    if (ctx->r14 == ctx->r1) {
        // 0x151F2D04: nop
    
            goto L_151F2D38;
    }
    // 0x151F2D04: nop

    // 0x151F2D08: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x151F2D0C: beq         $t6, $at, L_151F2D38
    if (ctx->r14 == ctx->r1) {
        // 0x151F2D10: nop
    
            goto L_151F2D38;
    }
    // 0x151F2D10: nop

    // 0x151F2D14: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151F2D18: beq         $t6, $at, L_151F2D38
    if (ctx->r14 == ctx->r1) {
        // 0x151F2D1C: nop
    
            goto L_151F2D38;
    }
    // 0x151F2D1C: nop

    // 0x151F2D20: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151F2D24: beq         $t6, $at, L_151F2D38
    if (ctx->r14 == ctx->r1) {
        // 0x151F2D28: nop
    
            goto L_151F2D38;
    }
    // 0x151F2D28: nop

    // 0x151F2D2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151F2D30: bne         $t6, $at, L_151F2D44
    if (ctx->r14 != ctx->r1) {
        // 0x151F2D34: nop
    
            goto L_151F2D44;
    }
    // 0x151F2D34: nop

L_151F2D38:
    // 0x151F2D38: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x151F2D3C: lw          $t7, 0xE04($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XE04);
    // 0x151F2D40: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_151F2D44:
    // 0x151F2D44: jal         0x10024880
    // 0x151F2D48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x151F2D48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151F2D4C: b           L_151F2D5C
    // 0x151F2D50: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_151F2D5C;
    // 0x151F2D50: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x151F2D54: b           L_151F2D5C
    // 0x151F2D58: nop

        goto L_151F2D5C;
    // 0x151F2D58: nop

L_151F2D5C:
    // 0x151F2D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151F2D60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151F2D64: jr          $ra
    // 0x151F2D68: nop

    return;
    return;
    // 0x151F2D68: nop

;}
RECOMP_FUNC void func_150B2740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B2740: addiu       $sp, $sp, -0x1F8
    ctx->r29 = ADD32(ctx->r29, -0X1F8);
    // 0x150B2744: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x150B2748: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x150B274C: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x150B2750: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x150B2754: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x150B2758: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x150B275C: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x150B2760: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x150B2764: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x150B2768: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x150B276C: sw          $a0, 0x1F8($sp)
    MEM_W(0X1F8, ctx->r29) = ctx->r4;
    // 0x150B2770: sw          $a1, 0x1FC($sp)
    MEM_W(0X1FC, ctx->r29) = ctx->r5;
    // 0x150B2774: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150B2778: lw          $t6, -0x1618($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1618);
    // 0x150B277C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x150B2780: lw          $t8, -0x4010($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4010);
    // 0x150B2784: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150B2788: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150B278C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150B2790: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150B2794: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150B2798: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150B279C: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x150B27A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x150B27A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x150B27A8: jal         0x1512D748
    // 0x150B27AC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    func_1512D748(rdram, ctx);
        goto after_0;
    // 0x150B27AC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x150B27B0: jal         0x150ADA20
    // 0x150B27B4: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150B27B4: nop

    after_1:
    // 0x150B27B8: lbu         $t1, 0x1FB($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1FB);
    // 0x150B27BC: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x150B27C0: addiu       $t3, $t3, -0x6E0
    ctx->r11 = ADD32(ctx->r11, -0X6E0);
    // 0x150B27C4: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x150B27C8: addu        $s1, $t2, $t3
    ctx->r17 = ADD32(ctx->r10, ctx->r11);
    // 0x150B27CC: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150B27D0: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x150B27D4: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x150B27D8: sh          $t0, 0x19C($sp)
    MEM_H(0X19C, ctx->r29) = ctx->r8;
    // 0x150B27DC: addiu       $t4, $sp, 0x1A0
    ctx->r12 = ADD32(ctx->r29, 0X1A0);
    // 0x150B27E0: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x150B27E4: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x150B27E8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x150B27EC: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x150B27F0: sw          $t7, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r15;
    // 0x150B27F4: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150B27F8: addiu       $t1, $zero, 0x41
    ctx->r9 = ADD32(0, 0X41);
    // 0x150B27FC: addiu       $t2, $zero, -0x28
    ctx->r10 = ADD32(0, -0X28);
    // 0x150B2800: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x150B2804: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150B2808: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B280C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2810: lwc1        $f6, -0x4C0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4C0);
    // 0x150B2814: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2818: lwc1        $f8, -0x4BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4BC);
    // 0x150B281C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2820: lwc1        $f10, -0x4B8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4B8);
    // 0x150B2824: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2828: lwc1        $f16, -0x4B4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4B4);
    // 0x150B282C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2830: lwc1        $f18, -0x4B0($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4B0);
    // 0x150B2834: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2838: swc1        $f4, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f4.u32l;
    // 0x150B283C: lwc1        $f4, -0x4AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4AC);
    // 0x150B2840: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x150B2844: swc1        $f6, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->f6.u32l;
    // 0x150B2848: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B284C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2850: swc1        $f8, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f8.u32l;
    // 0x150B2854: lwc1        $f8, -0x4A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4A8);
    // 0x150B2858: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x150B285C: swc1        $f10, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f10.u32l;
    // 0x150B2860: lbu         $t9, 0xC($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XC);
    // 0x150B2864: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B2868: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B286C: swc1        $f16, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f16.u32l;
    // 0x150B2870: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B2874: addiu       $t3, $zero, 0x50
    ctx->r11 = ADD32(0, 0X50);
    // 0x150B2878: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150B287C: addiu       $t5, $zero, 0x32
    ctx->r13 = ADD32(0, 0X32);
    // 0x150B2880: addiu       $t4, $zero, 0x19
    ctx->r12 = ADD32(0, 0X19);
    // 0x150B2884: addiu       $t0, $t9, -0x20
    ctx->r8 = ADD32(ctx->r25, -0X20);
    // 0x150B2888: sh          $t8, 0x1AC($sp)
    MEM_H(0X1AC, ctx->r29) = ctx->r24;
    // 0x150B288C: sh          $t0, 0x1B4($sp)
    MEM_H(0X1B4, ctx->r29) = ctx->r8;
    // 0x150B2890: sh          $t1, 0x1B6($sp)
    MEM_H(0X1B6, ctx->r29) = ctx->r9;
    // 0x150B2894: sh          $t2, 0x1B8($sp)
    MEM_H(0X1B8, ctx->r29) = ctx->r10;
    // 0x150B2898: sh          $t3, 0x1BA($sp)
    MEM_H(0X1BA, ctx->r29) = ctx->r11;
    // 0x150B289C: sb          $t6, 0x1F0($sp)
    MEM_B(0X1F0, ctx->r29) = ctx->r14;
    // 0x150B28A0: sb          $zero, 0x1F1($sp)
    MEM_B(0X1F1, ctx->r29) = 0;
    // 0x150B28A4: sh          $t5, 0x1F2($sp)
    MEM_H(0X1F2, ctx->r29) = ctx->r13;
    // 0x150B28A8: sh          $t4, 0x1F4($sp)
    MEM_H(0X1F4, ctx->r29) = ctx->r12;
    // 0x150B28AC: addiu       $a0, $sp, 0x19C
    ctx->r4 = ADD32(ctx->r29, 0X19C);
    // 0x150B28B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150B28B4: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    // 0x150B28B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150B28BC: swc1        $f0, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->f0.u32l;
    // 0x150B28C0: swc1        $f0, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->f0.u32l;
    // 0x150B28C4: swc1        $f0, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->f0.u32l;
    // 0x150B28C8: swc1        $f18, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->f18.u32l;
    // 0x150B28CC: swc1        $f4, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->f4.u32l;
    // 0x150B28D0: swc1        $f6, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->f6.u32l;
    // 0x150B28D4: swc1        $f8, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->f8.u32l;
    // 0x150B28D8: swc1        $f10, 0x1E8($sp)
    MEM_W(0X1E8, ctx->r29) = ctx->f10.u32l;
    // 0x150B28DC: jal         0x151A6F00
    // 0x150B28E0: swc1        $f16, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f16.u32l;
    func_151A6F00(rdram, ctx);
        goto after_2;
    // 0x150B28E0: swc1        $f16, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x150B28E4: jal         0x150ADA20
    // 0x150B28E8: nop

    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x150B28E8: nop

    after_3:
    // 0x150B28EC: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x150B28F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x150B28F4: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x150B28F8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150B28FC: addiu       $s0, $t8, -0x1
    ctx->r16 = ADD32(ctx->r24, -0X1);
    // 0x150B2900: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x150B2904: beq         $t8, $zero, L_150B29B0
    if (ctx->r24 == 0) {
        // 0x150B2908: sra         $s0, $t9, 16
        ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
            goto L_150B29B0;
    }
    // 0x150B2908: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x150B290C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2910: lwc1        $f26, -0x4A4($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X4A4);
    // 0x150B2914: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x150B2918: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150B291C: lui         $at, 0x4292
    ctx->r1 = S32(0X4292 << 16);
    // 0x150B2920: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x150B2924: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_150B2928:
    // 0x150B2928: jal         0x150ADA68
    // 0x150B292C: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150B292C: nop

    after_4:
    // 0x150B2930: mul.s       $f18, $f0, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x150B2934: jal         0x150ADA20
    // 0x150B2938: add.s       $f20, $f18, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f24.fl;
    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150B2938: add.s       $f20, $f18, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f18.fl + ctx->f24.fl;
    after_5:
    // 0x150B293C: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x150B2940: lbu         $t1, 0xC($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XC);
    // 0x150B2944: mfhi        $t6
    ctx->r14 = hi;
    // 0x150B2948: addiu       $t5, $t6, 0x4
    ctx->r13 = ADD32(ctx->r14, 0X4);
    // 0x150B294C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x150B2950: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150B2954: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x150B2958: addiu       $t2, $t1, 0x40
    ctx->r10 = ADD32(ctx->r9, 0X40);
    // 0x150B295C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x150B2960: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x150B2964: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150B2968: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x150B296C: lwc1        $f12, 0x0($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150B2970: lwc1        $f14, 0x4($s1)
    ctx->f14.u32l = MEM_W(ctx->r17, 0X4);
    // 0x150B2974: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x150B2978: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150B297C: bne         $s2, $zero, L_150B2988
    if (ctx->r18 != 0) {
        // 0x150B2980: nop
    
            goto L_150B2988;
    }
    // 0x150B2980: nop

    // 0x150B2984: break       7
    do_break(353053060);
L_150B2988:
    // 0x150B2988: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x150B298C: swc1        $f26, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f26.u32l;
    // 0x150B2990: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150B2994: jal         0x1514C858
    // 0x150B2998: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    func_1514C858(rdram, ctx);
        goto after_6;
    // 0x150B2998: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    after_6:
    // 0x150B299C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x150B29A0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x150B29A4: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x150B29A8: bne         $v0, $zero, L_150B2928
    if (ctx->r2 != 0) {
        // 0x150B29AC: sra         $s0, $t7, 16
        ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
            goto L_150B2928;
    }
    // 0x150B29AC: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
L_150B29B0:
    // 0x150B29B0: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150B29B4: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x150B29B8: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x150B29BC: sh          $t9, 0x14C($sp)
    MEM_H(0X14C, ctx->r29) = ctx->r25;
    // 0x150B29C0: sh          $t0, 0x14E($sp)
    MEM_H(0X14E, ctx->r29) = ctx->r8;
    // 0x150B29C4: addiu       $t1, $sp, 0x150
    ctx->r9 = ADD32(ctx->r29, 0X150);
    // 0x150B29C8: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x150B29CC: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x150B29D0: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x150B29D4: addiu       $t8, $zero, -0x2D
    ctx->r24 = ADD32(0, -0X2D);
    // 0x150B29D8: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x150B29DC: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150B29E0: addiu       $t9, $zero, 0x5A
    ctx->r25 = ADD32(0, 0X5A);
    // 0x150B29E4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x150B29E8: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x150B29EC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150B29F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B29F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B29F8: lwc1        $f6, -0x4A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4A0);
    // 0x150B29FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2A00: lwc1        $f8, -0x49C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X49C);
    // 0x150B2A04: lbu         $t5, 0xC($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0XC);
    // 0x150B2A08: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2A0C: lwc1        $f10, -0x498($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X498);
    // 0x150B2A10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2A14: lwc1        $f16, -0x494($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X494);
    // 0x150B2A18: addiu       $t4, $t5, -0x40
    ctx->r12 = ADD32(ctx->r13, -0X40);
    // 0x150B2A1C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x150B2A20: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150B2A24: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150B2A28: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B2A2C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150B2A30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2A34: lwc1        $f18, -0x490($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X490);
    // 0x150B2A38: sh          $t4, 0x15C($sp)
    MEM_H(0X15C, ctx->r29) = ctx->r12;
    // 0x150B2A3C: sh          $t7, 0x160($sp)
    MEM_H(0X160, ctx->r29) = ctx->r15;
    // 0x150B2A40: sh          $t8, 0x15E($sp)
    MEM_H(0X15E, ctx->r29) = ctx->r24;
    // 0x150B2A44: sh          $t9, 0x162($sp)
    MEM_H(0X162, ctx->r29) = ctx->r25;
    // 0x150B2A48: sb          $t0, 0x174($sp)
    MEM_B(0X174, ctx->r29) = ctx->r8;
    // 0x150B2A4C: sb          $t3, 0x175($sp)
    MEM_B(0X175, ctx->r29) = ctx->r11;
    // 0x150B2A50: sb          $t2, 0x176($sp)
    MEM_B(0X176, ctx->r29) = ctx->r10;
    // 0x150B2A54: sb          $t1, 0x177($sp)
    MEM_B(0X177, ctx->r29) = ctx->r9;
    // 0x150B2A58: sb          $t6, 0x178($sp)
    MEM_B(0X178, ctx->r29) = ctx->r14;
    // 0x150B2A5C: sb          $t5, 0x179($sp)
    MEM_B(0X179, ctx->r29) = ctx->r13;
    // 0x150B2A60: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150B2A64: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150B2A68: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x150B2A6C: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x150B2A70: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x150B2A74: addiu       $t3, $zero, 0x1601
    ctx->r11 = ADD32(0, 0X1601);
    // 0x150B2A78: addiu       $t2, $zero, 0x7F
    ctx->r10 = ADD32(0, 0X7F);
    // 0x150B2A7C: addiu       $t1, $zero, 0x7F
    ctx->r9 = ADD32(0, 0X7F);
    // 0x150B2A80: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150B2A84: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x150B2A88: sb          $t4, 0x17A($sp)
    MEM_B(0X17A, ctx->r29) = ctx->r12;
    // 0x150B2A8C: sb          $t7, 0x17B($sp)
    MEM_B(0X17B, ctx->r29) = ctx->r15;
    // 0x150B2A90: sb          $t8, 0x17C($sp)
    MEM_B(0X17C, ctx->r29) = ctx->r24;
    // 0x150B2A94: sh          $t9, 0x17E($sp)
    MEM_H(0X17E, ctx->r29) = ctx->r25;
    // 0x150B2A98: sh          $t0, 0x180($sp)
    MEM_H(0X180, ctx->r29) = ctx->r8;
    // 0x150B2A9C: sh          $t3, 0x182($sp)
    MEM_H(0X182, ctx->r29) = ctx->r11;
    // 0x150B2AA0: sb          $t2, 0x18C($sp)
    MEM_B(0X18C, ctx->r29) = ctx->r10;
    // 0x150B2AA4: sb          $t1, 0x18D($sp)
    MEM_B(0X18D, ctx->r29) = ctx->r9;
    // 0x150B2AA8: sh          $t6, 0x18E($sp)
    MEM_H(0X18E, ctx->r29) = ctx->r14;
    // 0x150B2AAC: sh          $t5, 0x190($sp)
    MEM_H(0X190, ctx->r29) = ctx->r13;
    // 0x150B2AB0: sb          $zero, 0x192($sp)
    MEM_B(0X192, ctx->r29) = 0;
    // 0x150B2AB4: addiu       $a0, $sp, 0x14C
    ctx->r4 = ADD32(ctx->r29, 0X14C);
    // 0x150B2AB8: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x150B2ABC: swc1        $f4, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f4.u32l;
    // 0x150B2AC0: swc1        $f6, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f6.u32l;
    // 0x150B2AC4: swc1        $f8, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->f8.u32l;
    // 0x150B2AC8: swc1        $f10, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f10.u32l;
    // 0x150B2ACC: swc1        $f16, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f16.u32l;
    // 0x150B2AD0: jal         0x151539B4
    // 0x150B2AD4: swc1        $f18, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f18.u32l;
    func_151539B4(rdram, ctx);
        goto after_7;
    // 0x150B2AD4: swc1        $f18, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x150B2AD8: addiu       $s0, $sp, 0xF4
    ctx->r16 = ADD32(ctx->r29, 0XF4);
    // 0x150B2ADC: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x150B2AE0: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x150B2AE4: lbu         $t3, 0xC($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0XC);
    // 0x150B2AE8: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150B2AEC: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x150B2AF0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
    // 0x150B2AF4: addiu       $t2, $t3, -0x19
    ctx->r10 = ADD32(ctx->r11, -0X19);
    // 0x150B2AF8: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x150B2AFC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150B2B00: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150B2B04: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150B2B08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B2B0C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B2B10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B2B14: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150B2B18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B2B1C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x150B2B20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B2B24: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x150B2B28: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x150B2B2C: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x150B2B30: addiu       $t6, $zero, -0x32
    ctx->r14 = ADD32(0, -0X32);
    // 0x150B2B34: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x150B2B38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150B2B3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150B2B40: sh          $t9, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r25;
    // 0x150B2B44: sh          $t0, 0x11A($sp)
    MEM_H(0X11A, ctx->r29) = ctx->r8;
    // 0x150B2B48: sh          $t2, 0x11C($sp)
    MEM_H(0X11C, ctx->r29) = ctx->r10;
    // 0x150B2B4C: sh          $t1, 0x11E($sp)
    MEM_H(0X11E, ctx->r29) = ctx->r9;
    // 0x150B2B50: sh          $t6, 0x120($sp)
    MEM_H(0X120, ctx->r29) = ctx->r14;
    // 0x150B2B54: sh          $t5, 0x122($sp)
    MEM_H(0X122, ctx->r29) = ctx->r13;
    // 0x150B2B58: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150B2B5C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x150B2B60: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x150B2B64: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x150B2B68: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x150B2B6C: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x150B2B70: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150B2B74: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x150B2B78: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150B2B7C: addiu       $t5, $zero, 0xA0
    ctx->r13 = ADD32(0, 0XA0);
    // 0x150B2B80: sh          $t7, 0x124($sp)
    MEM_H(0X124, ctx->r29) = ctx->r15;
    // 0x150B2B84: sh          $t4, 0x126($sp)
    MEM_H(0X126, ctx->r29) = ctx->r12;
    // 0x150B2B88: sh          $t8, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r24;
    // 0x150B2B8C: sh          $t9, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r25;
    // 0x150B2B90: sb          $t0, 0x12C($sp)
    MEM_B(0X12C, ctx->r29) = ctx->r8;
    // 0x150B2B94: sb          $t3, 0x12D($sp)
    MEM_B(0X12D, ctx->r29) = ctx->r11;
    // 0x150B2B98: sw          $t2, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r10;
    // 0x150B2B9C: sw          $t1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r9;
    // 0x150B2BA0: sw          $zero, 0x138($sp)
    MEM_W(0X138, ctx->r29) = 0;
    // 0x150B2BA4: sw          $zero, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = 0;
    // 0x150B2BA8: sw          $zero, 0x140($sp)
    MEM_W(0X140, ctx->r29) = 0;
    // 0x150B2BAC: sw          $zero, 0x144($sp)
    MEM_W(0X144, ctx->r29) = 0;
    // 0x150B2BB0: sb          $t6, 0x148($sp)
    MEM_B(0X148, ctx->r29) = ctx->r14;
    // 0x150B2BB4: sb          $t5, 0x149($sp)
    MEM_B(0X149, ctx->r29) = ctx->r13;
    // 0x150B2BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B2BBC: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x150B2BC0: swc1        $f4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f4.u32l;
    // 0x150B2BC4: swc1        $f6, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f6.u32l;
    // 0x150B2BC8: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x150B2BCC: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    // 0x150B2BD0: swc1        $f16, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f16.u32l;
    // 0x150B2BD4: jal         0x15152F70
    // 0x150B2BD8: swc1        $f18, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f18.u32l;
    func_15152F70(rdram, ctx);
        goto after_8;
    // 0x150B2BD8: swc1        $f18, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x150B2BDC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x150B2BE0: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x150B2BE4: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x150B2BE8: addiu       $t9, $zero, 0x9
    ctx->r25 = ADD32(0, 0X9);
    // 0x150B2BEC: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x150B2BF0: sh          $t7, 0x118($sp)
    MEM_H(0X118, ctx->r29) = ctx->r15;
    // 0x150B2BF4: sh          $t4, 0x11A($sp)
    MEM_H(0X11A, ctx->r29) = ctx->r12;
    // 0x150B2BF8: sh          $t8, 0x128($sp)
    MEM_H(0X128, ctx->r29) = ctx->r24;
    // 0x150B2BFC: sh          $zero, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = 0;
    // 0x150B2C00: sb          $t9, 0x12D($sp)
    MEM_B(0X12D, ctx->r29) = ctx->r25;
    // 0x150B2C04: sw          $t0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r8;
    // 0x150B2C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150B2C0C: jal         0x15152F70
    // 0x150B2C10: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    func_15152F70(rdram, ctx);
        goto after_9;
    // 0x150B2C10: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    after_9:
    // 0x150B2C14: jal         0x151423D8
    // 0x150B2C18: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    func_151423D8(rdram, ctx);
        goto after_10;
    // 0x150B2C18: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    after_10:
    // 0x150B2C1C: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x150B2C20: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x150B2C24: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x150B2C28: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x150B2C2C: jal         0x151423D8
    // 0x150B2C30: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_151423D8(rdram, ctx);
        goto after_11;
    // 0x150B2C30: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_11:
    // 0x150B2C34: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x150B2C38: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150B2C3C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150B2C40: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x150B2C44: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x150B2C48: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150B2C4C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B2C50: mul.s       $f18, $f2, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x150B2C54: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x150B2C58: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x150B2C5C: sb          $t2, 0xC4($sp)
    MEM_B(0XC4, ctx->r29) = ctx->r10;
    // 0x150B2C60: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150B2C64: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150B2C68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150B2C6C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x150B2C70: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150B2C74: swc1        $f8, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f8.u32l;
    // 0x150B2C78: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x150B2C7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150B2C80: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150B2C84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150B2C88: swc1        $f4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f4.u32l;
    // 0x150B2C8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2C90: lwc1        $f4, -0x48C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X48C);
    // 0x150B2C94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2C98: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x150B2C9C: lwc1        $f6, -0x488($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X488);
    // 0x150B2CA0: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x150B2CA4: lui         $at, 0x423C
    ctx->r1 = S32(0X423C << 16);
    // 0x150B2CA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150B2CAC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2CB0: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    // 0x150B2CB4: lwc1        $f10, -0x484($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X484);
    // 0x150B2CB8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2CBC: lwc1        $f16, -0x480($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X480);
    // 0x150B2CC0: swc1        $f18, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f18.u32l;
    // 0x150B2CC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2CC8: lwc1        $f18, -0x47C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X47C);
    // 0x150B2CCC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150B2CD0: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x150B2CD4: lwc1        $f4, -0x478($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X478);
    // 0x150B2CD8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150B2CDC: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x150B2CE0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x150B2CE4: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x150B2CE8: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x150B2CEC: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x150B2CF0: addiu       $t0, $zero, 0x33
    ctx->r8 = ADD32(0, 0X33);
    // 0x150B2CF4: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150B2CF8: addiu       $t2, $zero, 0x55
    ctx->r10 = ADD32(0, 0X55);
    // 0x150B2CFC: addiu       $v0, $sp, 0x90
    ctx->r2 = ADD32(ctx->r29, 0X90);
    // 0x150B2D00: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
    // 0x150B2D04: sh          $t1, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r9;
    // 0x150B2D08: sb          $t6, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = ctx->r14;
    // 0x150B2D0C: sb          $t5, 0xD1($sp)
    MEM_B(0XD1, ctx->r29) = ctx->r13;
    // 0x150B2D10: sb          $t7, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r15;
    // 0x150B2D14: sb          $zero, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = 0;
    // 0x150B2D18: sh          $t4, 0xD6($sp)
    MEM_H(0XD6, ctx->r29) = ctx->r12;
    // 0x150B2D1C: sb          $t8, 0xBC($sp)
    MEM_B(0XBC, ctx->r29) = ctx->r24;
    // 0x150B2D20: sb          $t9, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = ctx->r25;
    // 0x150B2D24: sb          $t0, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r8;
    // 0x150B2D28: sb          $t3, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r11;
    // 0x150B2D2C: sb          $t2, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r10;
    // 0x150B2D30: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x150B2D34: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x150B2D38: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x150B2D3C: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x150B2D40: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    // 0x150B2D44: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x150B2D48: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x150B2D4C: addiu       $t1, $t1, -0x6B0
    ctx->r9 = ADD32(ctx->r9, -0X6B0);
    // 0x150B2D50: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150B2D54: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150B2D58: addiu       $t4, $t4, -0x6A4
    ctx->r12 = ADD32(ctx->r12, -0X6A4);
    // 0x150B2D5C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x150B2D60: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x150B2D64: addiu       $s2, $sp, 0x9C
    ctx->r18 = ADD32(ctx->r29, 0X9C);
    // 0x150B2D68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150B2D6C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x150B2D70: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x150B2D74: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x150B2D78: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x150B2D7C: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x150B2D80: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x150B2D84: lw          $t0, 0x4($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X4);
    // 0x150B2D88: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
    // 0x150B2D8C: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x150B2D90: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    // 0x150B2D94: lbu         $s0, 0x1FB($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X1FB);
    // 0x150B2D98: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x150B2D9C: addu        $t2, $v0, $t3
    ctx->r10 = ADD32(ctx->r2, ctx->r11);
    // 0x150B2DA0: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x150B2DA4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x150B2DA8: jal         0x151494E0
    // 0x150B2DAC: sb          $t5, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r13;
    func_151494E0(rdram, ctx);
        goto after_12;
    // 0x150B2DAC: sb          $t5, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r13;
    after_12:
    // 0x150B2DB0: addu        $t6, $s3, $s0
    ctx->r14 = ADD32(ctx->r19, ctx->r16);
    // 0x150B2DB4: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x150B2DB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x150B2DBC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x150B2DC0: jal         0x151494E0
    // 0x150B2DC4: sb          $t1, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r9;
    func_151494E0(rdram, ctx);
        goto after_13;
    // 0x150B2DC4: sb          $t1, 0x9C($sp)
    MEM_B(0X9C, ctx->r29) = ctx->r9;
    after_13:
    // 0x150B2DC8: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x150B2DCC: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x150B2DD0: jal         0x150B3F5C
    // 0x150B2DD4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    func_150B3F5C(rdram, ctx);
        goto after_14;
    // 0x150B2DD4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_14:
    // 0x150B2DD8: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150B2DDC: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x150B2DE0: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150B2DE4: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150B2DE8: addiu       $t2, $zero, 0x3E8
    ctx->r10 = ADD32(0, 0X3E8);
    // 0x150B2DEC: addiu       $t5, $zero, 0xBB8
    ctx->r13 = ADD32(0, 0XBB8);
    // 0x150B2DF0: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150B2DF4: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x150B2DF8: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x150B2DFC: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150B2E00: mfc1        $t4, $f16
    ctx->r12 = (int32_t)ctx->f16.u32l;
    // 0x150B2E04: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150B2E08: addiu       $a0, $zero, 0xE7
    ctx->r4 = ADD32(0, 0XE7);
    // 0x150B2E0C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x150B2E10: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150B2E14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B2E18: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x150B2E1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B2E20: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150B2E24: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x150B2E28: jal         0x10010F88
    // 0x150B2E2C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    func_10010F88(rdram, ctx);
        goto after_15;
    // 0x150B2E2C: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_15:
    // 0x150B2E30: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x150B2E34: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x150B2E38: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x150B2E3C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150B2E40: addiu       $t0, $zero, 0x3E8
    ctx->r8 = ADD32(0, 0X3E8);
    // 0x150B2E44: addiu       $t3, $zero, 0xBB8
    ctx->r11 = ADD32(0, 0XBB8);
    // 0x150B2E48: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150B2E4C: mfc1        $t1, $f8
    ctx->r9 = (int32_t)ctx->f8.u32l;
    // 0x150B2E50: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150B2E54: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150B2E58: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x150B2E5C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x150B2E60: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x150B2E64: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x150B2E68: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x150B2E6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150B2E70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150B2E74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150B2E78: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150B2E7C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150B2E80: jal         0x10010F88
    // 0x150B2E84: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_10010F88(rdram, ctx);
        goto after_16;
    // 0x150B2E84: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_16:
    // 0x150B2E88: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x150B2E8C: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x150B2E90: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x150B2E94: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x150B2E98: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x150B2E9C: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x150B2EA0: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x150B2EA4: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x150B2EA8: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x150B2EAC: jr          $ra
    // 0x150B2EB0: addiu       $sp, $sp, 0x1F8
    ctx->r29 = ADD32(ctx->r29, 0X1F8);
    return;
    return;
    // 0x150B2EB0: addiu       $sp, $sp, 0x1F8
    ctx->r29 = ADD32(ctx->r29, 0X1F8);
;}
RECOMP_FUNC void func_150E83AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E83AC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x150E83B0: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x150E83B4: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x150E83B8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150E83BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x150E83C0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x150E83C4: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x150E83C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x150E83CC: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x150E83D0: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x150E83D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150E83D8: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x150E83DC: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x150E83E0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x150E83E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150E83E8: sw          $t1, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r9;
    // 0x150E83EC: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x150E83F0: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x150E83F4: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x150E83F8: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x150E83FC: bne         $a1, $v0, L_150E840C
    if (ctx->r5 != ctx->r2) {
        // 0x150E8400: swc1        $f4, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
            goto L_150E840C;
    }
    // 0x150E8400: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x150E8404: b           L_150E840C
    // 0x150E8408: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
        goto L_150E840C;
    // 0x150E8408: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
L_150E840C:
    // 0x150E840C: bne         $a1, $v0, L_150E841C
    if (ctx->r5 != ctx->r2) {
        // 0x150E8410: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_150E841C;
    }
    // 0x150E8410: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x150E8414: b           L_150E8420
    // 0x150E8418: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150E8420;
    // 0x150E8418: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150E841C:
    // 0x150E841C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150E8420:
    // 0x150E8420: lbu         $t4, 0x5B($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5B);
    // 0x150E8424: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x150E8428: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x150E842C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x150E8430: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150E8434: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x150E8438: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150E843C: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x150E8440: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x150E8444: jal         0x15149130
    // 0x150E8448: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    func_15149130(rdram, ctx);
        goto after_0;
    // 0x150E8448: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    after_0:
    // 0x150E844C: beq         $v0, $zero, L_150E8460
    if (ctx->r2 == 0) {
        // 0x150E8450: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150E8460;
    }
    // 0x150E8450: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150E8454: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x150E8458: jal         0x10022EC0
    // 0x150E845C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150E845C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
L_150E8460:
    // 0x150E8460: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150E8464: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x150E8468: jr          $ra
    // 0x150E846C: nop

    return;
    return;
    // 0x150E846C: nop

;}
RECOMP_FUNC void func_1507E2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507E2B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1507E2B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1507E2B8: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x1507E2BC: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x1507E2C0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1507E2C4: beql        $t6, $at, L_1507E3B4
    if (ctx->r14 == ctx->r1) {
        // 0x1507E2C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507E3B4;
    }
    goto skip_0;
    // 0x1507E2C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x1507E2CC: lbu         $t7, 0x35EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X35EA);
    // 0x1507E2D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1507E2D4: beql        $a2, $t7, L_1507E3B4
    if (ctx->r6 == ctx->r15) {
        // 0x1507E2D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507E3B4;
    }
    goto skip_1;
    // 0x1507E2D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x1507E2DC: lbu         $t8, 0x127($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X127);
    // 0x1507E2E0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x1507E2E4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x1507E2E8: beql        $t8, $at, L_1507E314
    if (ctx->r24 == ctx->r1) {
        // 0x1507E2EC: lbu         $t1, 0x6A($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X6A);
            goto L_1507E314;
    }
    goto skip_2;
    // 0x1507E2EC: lbu         $t1, 0x6A($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X6A);
    skip_2:
    // 0x1507E2F0: lw          $t9, 0x31C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X31C);
    // 0x1507E2F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1507E2F8: lbu         $t0, 0x120($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X120);
    // 0x1507E2FC: beql        $t0, $zero, L_1507E314
    if (ctx->r8 == 0) {
        // 0x1507E300: lbu         $t1, 0x6A($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X6A);
            goto L_1507E314;
    }
    goto skip_3;
    // 0x1507E300: lbu         $t1, 0x6A($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X6A);
    skip_3:
    // 0x1507E304: sb          $a1, 0x6A($a0)
    MEM_B(0X6A, ctx->r4) = ctx->r5;
    // 0x1507E308: b           L_1507E3B0
    // 0x1507E30C: sb          $a1, 0x6B($a0)
    MEM_B(0X6B, ctx->r4) = ctx->r5;
        goto L_1507E3B0;
    // 0x1507E30C: sb          $a1, 0x6B($a0)
    MEM_B(0X6B, ctx->r4) = ctx->r5;
    // 0x1507E310: lbu         $t1, 0x6A($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X6A);
L_1507E314:
    // 0x1507E314: slti        $at, $t1, 0x3
    ctx->r1 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x1507E318: bnel        $at, $zero, L_1507E328
    if (ctx->r1 != 0) {
        // 0x1507E31C: lbu         $t2, 0x6B($a0)
        ctx->r10 = MEM_BU(ctx->r4, 0X6B);
            goto L_1507E328;
    }
    goto skip_4;
    // 0x1507E31C: lbu         $t2, 0x6B($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X6B);
    skip_4:
    // 0x1507E320: sb          $zero, 0x6A($a0)
    MEM_B(0X6A, ctx->r4) = 0;
    // 0x1507E324: lbu         $t2, 0x6B($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X6B);
L_1507E328:
    // 0x1507E328: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x1507E32C: bnel        $at, $zero, L_1507E33C
    if (ctx->r1 != 0) {
        // 0x1507E330: lbu         $v0, 0x6E($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X6E);
            goto L_1507E33C;
    }
    goto skip_5;
    // 0x1507E330: lbu         $v0, 0x6E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6E);
    skip_5:
    // 0x1507E334: sb          $zero, 0x6B($a0)
    MEM_B(0X6B, ctx->r4) = 0;
    // 0x1507E338: lbu         $v0, 0x6E($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6E);
L_1507E33C:
    // 0x1507E33C: lw          $v1, -0x161C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X161C);
    // 0x1507E340: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1507E344: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1507E348: bne         $at, $zero, L_1507E358
    if (ctx->r1 != 0) {
        // 0x1507E34C: subu        $t3, $v0, $v1
        ctx->r11 = SUB32(ctx->r2, ctx->r3);
            goto L_1507E358;
    }
    // 0x1507E34C: subu        $t3, $v0, $v1
    ctx->r11 = SUB32(ctx->r2, ctx->r3);
    // 0x1507E350: b           L_1507E3B0
    // 0x1507E354: sb          $t3, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r11;
        goto L_1507E3B0;
    // 0x1507E354: sb          $t3, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r11;
L_1507E358:
    // 0x1507E358: lbu         $t4, 0x6C($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X6C);
    // 0x1507E35C: sb          $zero, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = 0;
    // 0x1507E360: beql        $a2, $t4, L_1507E3B4
    if (ctx->r6 == ctx->r12) {
        // 0x1507E364: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1507E3B4;
    }
    goto skip_6;
    // 0x1507E364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x1507E368: lbu         $t5, 0x6A($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X6A);
    // 0x1507E36C: lbu         $t7, 0x6B($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X6B);
    // 0x1507E370: xori        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 ^ 0X1;
    // 0x1507E374: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x1507E378: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x1507E37C: sb          $t6, 0x6A($a0)
    MEM_B(0X6A, ctx->r4) = ctx->r14;
    // 0x1507E380: bne         $t9, $zero, L_1507E3AC
    if (ctx->r25 != 0) {
        // 0x1507E384: sb          $t8, 0x6B($a0)
        MEM_B(0X6B, ctx->r4) = ctx->r24;
            goto L_1507E3AC;
    }
    // 0x1507E384: sb          $t8, 0x6B($a0)
    MEM_B(0X6B, ctx->r4) = ctx->r24;
    // 0x1507E388: jal         0x150ADA20
    // 0x1507E38C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1507E38C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1507E390: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x1507E394: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1507E398: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1507E39C: mfhi        $t0
    ctx->r8 = hi;
    // 0x1507E3A0: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x1507E3A4: b           L_1507E3B0
    // 0x1507E3A8: sb          $t1, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r9;
        goto L_1507E3B0;
    // 0x1507E3A8: sb          $t1, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r9;
L_1507E3AC:
    // 0x1507E3AC: sb          $a1, 0x6E($a0)
    MEM_B(0X6E, ctx->r4) = ctx->r5;
L_1507E3B0:
    // 0x1507E3B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1507E3B4:
    // 0x1507E3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507E3B8: jr          $ra
    // 0x1507E3BC: nop

    return;
    return;
    // 0x1507E3BC: nop

;}
RECOMP_FUNC void func_150A6500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A6500: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150A6504: addiu       $t0, $zero, -0x2710
    ctx->r8 = ADD32(0, -0X2710);
    // 0x150A6508: addiu       $t1, $zero, 0x4E20
    ctx->r9 = ADD32(0, 0X4E20);
    // 0x150A650C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x150A6510: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x150A6514: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x150A6518: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150A651C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150A6520: jal         0x150A6568
    // 0x150A6524: nop

    func_150A6568(rdram, ctx);
        goto after_0;
    // 0x150A6524: nop

    after_0:
    // 0x150A6528: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x150A652C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150A6530: jr          $ra
    // 0x150A6534: nop

    return;
    return;
    // 0x150A6534: nop

    // 0x150A6538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150A653C: addiu       $t0, $zero, -0x2710
    ctx->r8 = ADD32(0, -0X2710);
    // 0x150A6540: addiu       $t1, $zero, 0x4E20
    ctx->r9 = ADD32(0, 0X4E20);
    // 0x150A6544: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x150A6548: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150A654C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150A6550: jal         0x150A6568
    // 0x150A6554: nop

    func_150A6568(rdram, ctx);
        goto after_1;
    // 0x150A6554: nop

    after_1:
    // 0x150A6558: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x150A655C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150A6560: jr          $ra
    // 0x150A6564: nop

    return;
    return;
    // 0x150A6564: nop

;}
RECOMP_FUNC void func_150839B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150839B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150839BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150839C0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150839C4: beq         $a1, $at, L_15083AB8
    if (ctx->r5 == ctx->r1) {
        // 0x150839C8: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_15083AB8;
    }
    // 0x150839C8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x150839CC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150839D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x150839D4: beq         $a2, $zero, L_15083A2C
    if (ctx->r6 == 0) {
        // 0x150839D8: lw          $v0, 0x1C90($v0)
        ctx->r2 = MEM_W(ctx->r2, 0X1C90);
            goto L_15083A2C;
    }
    // 0x150839D8: lw          $v0, 0x1C90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1C90);
    // 0x150839DC: lhu         $v1, 0x2C($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2C);
    // 0x150839E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150839E4: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x150839E8: bne         $v1, $zero, L_150839FC
    if (ctx->r3 != 0) {
        // 0x150839EC: or          $a1, $v1, $zero
        ctx->r5 = ctx->r3 | 0;
            goto L_150839FC;
    }
    // 0x150839EC: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x150839F0: lhu         $t7, 0x2A($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2A);
    // 0x150839F4: b           L_15083A10
    // 0x150839F8: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
        goto L_15083A10;
    // 0x150839F8: sh          $t7, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r15;
L_150839FC:
    // 0x150839FC: bnel        $a1, $at, L_15083A10
    if (ctx->r5 != ctx->r1) {
        // 0x15083A00: sh          $v1, 0x10($a0)
        MEM_H(0X10, ctx->r4) = ctx->r3;
            goto L_15083A10;
    }
    goto skip_0;
    // 0x15083A00: sh          $v1, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r3;
    skip_0:
    // 0x15083A04: b           L_15083A10
    // 0x15083A08: sh          $zero, 0x10($a0)
    MEM_H(0X10, ctx->r4) = 0;
        goto L_15083A10;
    // 0x15083A08: sh          $zero, 0x10($a0)
    MEM_H(0X10, ctx->r4) = 0;
    // 0x15083A0C: sh          $v1, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r3;
L_15083A10:
    // 0x15083A10: lw          $t8, -0x1610($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1610);
    // 0x15083A14: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x15083A18: addiu       $t9, $zero, 0x3E8
    ctx->r25 = ADD32(0, 0X3E8);
    // 0x15083A1C: bnel        $t8, $at, L_15083A34
    if (ctx->r24 != ctx->r1) {
        // 0x15083A20: lbu         $t0, 0x39($v0)
        ctx->r8 = MEM_BU(ctx->r2, 0X39);
            goto L_15083A34;
    }
    goto skip_1;
    // 0x15083A20: lbu         $t0, 0x39($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X39);
    skip_1:
    // 0x15083A24: b           L_15083A30
    // 0x15083A28: sh          $t9, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r25;
        goto L_15083A30;
    // 0x15083A28: sh          $t9, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r25;
L_15083A2C:
    // 0x15083A2C: sh          $zero, 0x10($a0)
    MEM_H(0X10, ctx->r4) = 0;
L_15083A30:
    // 0x15083A30: lbu         $t0, 0x39($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X39);
L_15083A34:
    // 0x15083A34: sb          $t0, 0x13B($a0)
    MEM_B(0X13B, ctx->r4) = ctx->r8;
    // 0x15083A38: lb          $t1, 0x33($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X33);
    // 0x15083A3C: sb          $t1, 0x2CB($a0)
    MEM_B(0X2CB, ctx->r4) = ctx->r9;
    // 0x15083A40: lw          $t2, 0x34($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X34);
    // 0x15083A44: sw          $t2, 0x2CC($a0)
    MEM_W(0X2CC, ctx->r4) = ctx->r10;
    // 0x15083A48: lbu         $t3, 0x12($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X12);
    // 0x15083A4C: sb          $t3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r11;
    // 0x15083A50: lbu         $t4, 0x3B($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3B);
    // 0x15083A54: sb          $t4, 0x68($a0)
    MEM_B(0X68, ctx->r4) = ctx->r12;
    // 0x15083A58: lbu         $t5, 0x3C($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3C);
    // 0x15083A5C: sb          $t5, 0x69($a0)
    MEM_B(0X69, ctx->r4) = ctx->r13;
    // 0x15083A60: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x15083A64: sh          $t6, 0x160($a0)
    MEM_H(0X160, ctx->r4) = ctx->r14;
    // 0x15083A68: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x15083A6C: beql        $t7, $zero, L_15083A98
    if (ctx->r15 == 0) {
        // 0x15083A70: lbu         $t2, 0x2C8($a0)
        ctx->r10 = MEM_BU(ctx->r4, 0X2C8);
            goto L_15083A98;
    }
    goto skip_2;
    // 0x15083A70: lbu         $t2, 0x2C8($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X2C8);
    skip_2:
    // 0x15083A74: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x15083A78: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x15083A7C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x15083A80: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x15083A84: lw          $t0, 0x6CAC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6CAC);
    // 0x15083A88: sw          $t0, 0x2C4($a0)
    MEM_W(0X2C4, ctx->r4) = ctx->r8;
    // 0x15083A8C: lbu         $t1, 0x4($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X4);
    // 0x15083A90: sb          $t1, 0x2C8($a0)
    MEM_B(0X2C8, ctx->r4) = ctx->r9;
    // 0x15083A94: lbu         $t2, 0x2C8($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X2C8);
L_15083A98:
    // 0x15083A98: lbu         $t3, 0x38($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X38);
    // 0x15083A9C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15083AA0: sb          $t4, 0x2C9($a0)
    MEM_B(0X2C9, ctx->r4) = ctx->r12;
    // 0x15083AA4: lbu         $t5, 0x29($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X29);
    // 0x15083AA8: beql        $t5, $zero, L_15083ABC
    if (ctx->r13 == 0) {
        // 0x15083AAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15083ABC;
    }
    goto skip_3;
    // 0x15083AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x15083AB0: jal         0x15036C70
    // 0x15083AB4: nop

    func_15036C70(rdram, ctx);
        goto after_0;
    // 0x15083AB4: nop

    after_0:
L_15083AB8:
    // 0x15083AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15083ABC:
    // 0x15083ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15083AC0: jr          $ra
    // 0x15083AC4: nop

    return;
    return;
    // 0x15083AC4: nop

;}
RECOMP_FUNC void func_150C1198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C1198: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x150C119C: lw          $v0, 0xA8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA8);
    // 0x150C11A0: sll         $a1, $t2, 16
    ctx->r5 = S32(ctx->r10 << 16);
    // 0x150C11A4: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150C11A8: lh          $a3, 0x44($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X44);
    // 0x150C11AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x150C11B0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150C11B4: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x150C11B8: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x150C11BC: beq         $t7, $t2, L_150C1204
    if (ctx->r15 == ctx->r10) {
        // 0x150C11C0: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_150C1204;
    }
    // 0x150C11C0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x150C11C4: lw          $t0, 0x40($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X40);
    // 0x150C11C8: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
L_150C11CC:
    // 0x150C11CC: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x150C11D0: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x150C11D4: bnel        $a0, $t9, L_150C11E8
    if (ctx->r4 != ctx->r25) {
        // 0x150C11D8: sll         $a1, $a2, 16
        ctx->r5 = S32(ctx->r6 << 16);
            goto L_150C11E8;
    }
    goto skip_0;
    // 0x150C11D8: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
    skip_0:
    // 0x150C11DC: b           L_150C11F4
    // 0x150C11E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_150C11F4;
    // 0x150C11E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x150C11E4: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
L_150C11E8:
    // 0x150C11E8: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150C11EC: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x150C11F0: lh          $a2, 0x4($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X4);
L_150C11F4:
    // 0x150C11F4: beq         $a2, $t2, L_150C1204
    if (ctx->r6 == ctx->r10) {
        // 0x150C11F8: nop
    
            goto L_150C1204;
    }
    // 0x150C11F8: nop

    // 0x150C11FC: beql        $v1, $zero, L_150C11CC
    if (ctx->r3 == 0) {
        // 0x150C1200: sll         $t8, $a2, 3
        ctx->r24 = S32(ctx->r6 << 3);
            goto L_150C11CC;
    }
    goto skip_1;
    // 0x150C1200: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    skip_1:
L_150C1204:
    // 0x150C1204: beq         $v1, $zero, L_150C124C
    if (ctx->r3 == 0) {
        // 0x150C1208: nop
    
            goto L_150C124C;
    }
    // 0x150C1208: nop

    // 0x150C120C: lw          $t0, 0x40($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X40);
    // 0x150C1210: sll         $v1, $a2, 3
    ctx->r3 = S32(ctx->r6 << 3);
    // 0x150C1214: bne         $a2, $a3, L_150C1228
    if (ctx->r6 != ctx->r7) {
        // 0x150C1218: addu        $t1, $t0, $v1
        ctx->r9 = ADD32(ctx->r8, ctx->r3);
            goto L_150C1228;
    }
    // 0x150C1218: addu        $t1, $t0, $v1
    ctx->r9 = ADD32(ctx->r8, ctx->r3);
    // 0x150C121C: lh          $t4, 0x4($t1)
    ctx->r12 = MEM_H(ctx->r9, 0X4);
    // 0x150C1220: b           L_150C1240
    // 0x150C1224: sh          $t4, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r12;
        goto L_150C1240;
    // 0x150C1224: sh          $t4, 0x44($v0)
    MEM_H(0X44, ctx->r2) = ctx->r12;
L_150C1228:
    // 0x150C1228: lh          $t5, 0x4($t1)
    ctx->r13 = MEM_H(ctx->r9, 0X4);
    // 0x150C122C: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x150C1230: addu        $t7, $t0, $t6
    ctx->r15 = ADD32(ctx->r8, ctx->r14);
    // 0x150C1234: sh          $t5, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r13;
    // 0x150C1238: lw          $t8, 0x40($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X40);
    // 0x150C123C: addu        $t1, $t8, $v1
    ctx->r9 = ADD32(ctx->r24, ctx->r3);
L_150C1240:
    // 0x150C1240: lh          $t9, 0x46($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X46);
    // 0x150C1244: sh          $t9, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r25;
    // 0x150C1248: sh          $a2, 0x46($v0)
    MEM_H(0X46, ctx->r2) = ctx->r6;
L_150C124C:
    // 0x150C124C: jr          $ra
    // 0x150C1250: nop

    return;
    return;
    // 0x150C1250: nop

;}
RECOMP_FUNC void func_151EC1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151EC1F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151EC1F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151EC1F8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x151EC1FC: lw          $t6, -0x1610($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1610);
    // 0x151EC200: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x151EC204: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151EC208: bne         $t6, $at, L_151EC218
    if (ctx->r14 != ctx->r1) {
        // 0x151EC20C: lui         $t7, 0xDE00
        ctx->r15 = S32(0XDE00 << 16);
            goto L_151EC218;
    }
    // 0x151EC20C: lui         $t7, 0xDE00
    ctx->r15 = S32(0XDE00 << 16);
    // 0x151EC210: b           L_151EC3D8
    // 0x151EC214: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_151EC3D8;
    // 0x151EC214: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151EC218:
    // 0x151EC218: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x151EC21C: addiu       $t8, $t8, 0x28
    ctx->r24 = ADD32(ctx->r24, 0X28);
    // 0x151EC220: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151EC224: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151EC228: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x151EC22C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x151EC230: lw          $a1, 0xA90($a1)
    ctx->r5 = MEM_W(ctx->r5, 0XA90);
    // 0x151EC234: slti        $at, $a1, 0x12D
    ctx->r1 = SIGNED(ctx->r5) < 0X12D ? 1 : 0;
    // 0x151EC238: bne         $at, $zero, L_151EC25C
    if (ctx->r1 != 0) {
        // 0x151EC23C: or          $v1, $a1, $zero
        ctx->r3 = ctx->r5 | 0;
            goto L_151EC25C;
    }
    // 0x151EC23C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x151EC240: addiu       $t9, $zero, 0x1AC
    ctx->r25 = ADD32(0, 0X1AC);
    // 0x151EC244: subu        $v1, $t9, $v1
    ctx->r3 = SUB32(ctx->r25, ctx->r3);
    // 0x151EC248: sll         $t0, $v1, 1
    ctx->r8 = S32(ctx->r3 << 1);
    // 0x151EC24C: bgez        $t0, L_151EC270
    if (SIGNED(ctx->r8) >= 0) {
        // 0x151EC250: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_151EC270;
    }
    // 0x151EC250: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x151EC254: b           L_151EC270
    // 0x151EC258: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151EC270;
    // 0x151EC258: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151EC25C:
    // 0x151EC25C: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
    // 0x151EC260: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x151EC264: bne         $at, $zero, L_151EC270
    if (ctx->r1 != 0) {
        // 0x151EC268: nop
    
            goto L_151EC270;
    }
    // 0x151EC268: nop

    // 0x151EC26C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151EC270:
    // 0x151EC270: beq         $v1, $zero, L_151EC2CC
    if (ctx->r3 == 0) {
        // 0x151EC274: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151EC2CC;
    }
    // 0x151EC274: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151EC278: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x151EC27C: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151EC280: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x151EC284: lui         $t1, 0xFB00
    ctx->r9 = S32(0XFB00 << 16);
    // 0x151EC288: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x151EC28C: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x151EC290: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151EC294: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC298: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151EC29C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EC2A0: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x151EC2A4: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x151EC2A8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151EC2AC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151EC2B0: addiu       $a1, $a1, 0x17F8
    ctx->r5 = ADD32(ctx->r5, 0X17F8);
    // 0x151EC2B4: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x151EC2B8: addiu       $a3, $zero, 0x63
    ctx->r7 = ADD32(0, 0X63);
    // 0x151EC2BC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EC2C0: jal         0x151ED430
    // 0x151EC2C4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_151ED430(rdram, ctx);
        goto after_0;
    // 0x151EC2C4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x151EC2C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_151EC2CC:
    // 0x151EC2CC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151EC2D0: lui         $t6, 0xFB00
    ctx->r14 = S32(0XFB00 << 16);
    // 0x151EC2D4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151EC2D8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x151EC2DC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x151EC2E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151EC2E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC2E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151EC2EC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EC2F0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x151EC2F4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x151EC2F8: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x151EC2FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x151EC300: addiu       $a1, $a1, 0x1804
    ctx->r5 = ADD32(ctx->r5, 0X1804);
    // 0x151EC304: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x151EC308: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    // 0x151EC30C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EC310: jal         0x151ED430
    // 0x151EC314: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    func_151ED430(rdram, ctx);
        goto after_1;
    // 0x151EC314: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x151EC318: lui         $t0, 0xFCFF
    ctx->r8 = S32(0XFCFF << 16);
    // 0x151EC31C: lui         $t1, 0xFFA6
    ctx->r9 = S32(0XFFA6 << 16);
    // 0x151EC320: ori         $t1, $t1, 0xFF7F
    ctx->r9 = ctx->r9 | 0XFF7F;
    // 0x151EC324: ori         $t0, $t0, 0xD3FF
    ctx->r8 = ctx->r8 | 0XD3FF;
    // 0x151EC328: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x151EC32C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x151EC330: lui         $t2, 0xFB00
    ctx->r10 = S32(0XFB00 << 16);
    // 0x151EC334: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x151EC338: lui         $t3, 0x800E
    ctx->r11 = S32(0X800E << 16);
    // 0x151EC33C: lbu         $t4, 0xB97($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XB97);
    // 0x151EC340: lui         $at, 0x20FF
    ctx->r1 = S32(0X20FF << 16);
    // 0x151EC344: ori         $at, $at, 0x2000
    ctx->r1 = ctx->r1 | 0X2000;
    // 0x151EC348: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x151EC34C: sw          $t5, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r13;
    // 0x151EC350: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151EC354: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151EC358: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x151EC35C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x151EC360: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x151EC364: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151EC368: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151EC36C: addiu       $a1, $a1, 0x1810
    ctx->r5 = ADD32(ctx->r5, 0X1810);
    // 0x151EC370: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x151EC374: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    // 0x151EC378: addiu       $a3, $zero, 0xCB
    ctx->r7 = ADD32(0, 0XCB);
    // 0x151EC37C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151EC380: jal         0x151ED430
    // 0x151EC384: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_151ED430(rdram, ctx);
        goto after_2;
    // 0x151EC384: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x151EC388: jal         0x15096934
    // 0x151EC38C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15096934(rdram, ctx);
        goto after_3;
    // 0x151EC38C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x151EC390: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x151EC394: lw          $t8, 0xA74($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XA74);
    // 0x151EC398: addiu       $t9, $zero, 0x1EA
    ctx->r25 = ADD32(0, 0X1EA);
    // 0x151EC39C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x151EC3A0: subu        $v1, $t9, $t8
    ctx->r3 = SUB32(ctx->r25, ctx->r24);
    // 0x151EC3A4: bgez        $v1, L_151EC3B4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x151EC3A8: addiu       $t1, $zero, 0xFF
        ctx->r9 = ADD32(0, 0XFF);
            goto L_151EC3B4;
    }
    // 0x151EC3A8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151EC3AC: b           L_151EC3C8
    // 0x151EC3B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_151EC3C8;
    // 0x151EC3B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151EC3B4:
    // 0x151EC3B4: sll         $t0, $v1, 4
    ctx->r8 = S32(ctx->r3 << 4);
    // 0x151EC3B8: slti        $at, $t0, 0x100
    ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
    // 0x151EC3BC: bne         $at, $zero, L_151EC3C8
    if (ctx->r1 != 0) {
        // 0x151EC3C0: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_151EC3C8;
    }
    // 0x151EC3C0: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x151EC3C4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_151EC3C8:
    // 0x151EC3C8: subu        $v1, $t1, $v1
    ctx->r3 = SUB32(ctx->r9, ctx->r3);
    // 0x151EC3CC: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151EC3D0: sb          $v1, 0xB96($at)
    MEM_B(0XB96, ctx->r1) = ctx->r3;
    // 0x151EC3D4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151EC3D8:
    // 0x151EC3D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151EC3DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151EC3E0: jr          $ra
    // 0x151EC3E4: nop

    return;
    return;
    // 0x151EC3E4: nop

;}
RECOMP_FUNC void func_150EB8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150EB8C4: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x150EB8C8: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x150EB8CC: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x150EB8D0: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x150EB8D4: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x150EB8D8: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x150EB8DC: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x150EB8E0: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x150EB8E4: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x150EB8E8: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x150EB8EC: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x150EB8F0: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x150EB8F4: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x150EB8F8: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x150EB8FC: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x150EB900: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x150EB904: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x150EB908: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150EB90C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150EB910: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150EB914: lbu         $a1, -0x1615($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1615);
    // 0x150EB918: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x150EB91C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150EB920: jal         0x15164F0C
    // 0x150EB924: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_15164F0C(rdram, ctx);
        goto after_0;
    // 0x150EB924: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x150EB928: jal         0x150ADA20
    // 0x150EB92C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x150EB92C: nop

    after_1:
    // 0x150EB930: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x150EB934: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150EB938: mfhi        $a1
    ctx->r5 = hi;
    // 0x150EB93C: addiu       $a1, $a1, 0x78
    ctx->r5 = ADD32(ctx->r5, 0X78);
    // 0x150EB940: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x150EB944: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150EB948: addiu       $a0, $a0, 0x149C
    ctx->r4 = ADD32(ctx->r4, 0X149C);
    // 0x150EB94C: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150EB950: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150EB954: jal         0x150E83AC
    // 0x150EB958: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150E83AC(rdram, ctx);
        goto after_2;
    // 0x150EB958: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x150EB95C: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x150EB960: addiu       $s0, $s0, 0x1490
    ctx->r16 = ADD32(ctx->r16, 0X1490);
    // 0x150EB964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EB968: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150EB96C: jal         0x151D5514
    // 0x150EB970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151D5514(rdram, ctx);
        goto after_3;
    // 0x150EB970: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x150EB974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EB978: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150EB97C: jal         0x151D3FF4
    // 0x150EB980: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_151D3FF4(rdram, ctx);
        goto after_4;
    // 0x150EB980: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x150EB984: jal         0x150ADA68
    // 0x150EB988: nop

    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150EB988: nop

    after_5:
    // 0x150EB98C: jal         0x150ADA20
    // 0x150EB990: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150EB990: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_6:
    // 0x150EB994: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150EB998: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EB99C: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x150EB9A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x150EB9A4: mul.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x150EB9A8: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150EB9AC: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150EB9B0: add.s       $f14, $f18, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x150EB9B4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x150EB9B8: mfhi        $t9
    ctx->r25 = hi;
    // 0x150EB9BC: addiu       $t0, $t9, 0xC8
    ctx->r8 = ADD32(ctx->r25, 0XC8);
    // 0x150EB9C0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x150EB9C4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x150EB9C8: lui         $a2, 0x3FD2
    ctx->r6 = S32(0X3FD2 << 16);
    // 0x150EB9CC: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150EB9D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150EB9D4: bgez        $t0, L_150EB9EC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x150EB9D8: ori         $a2, $a2, 0xC49
        ctx->r6 = ctx->r6 | 0XC49;
            goto L_150EB9EC;
    }
    // 0x150EB9D8: ori         $a2, $a2, 0xC49
    ctx->r6 = ctx->r6 | 0XC49;
    // 0x150EB9DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150EB9E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150EB9E4: nop

    // 0x150EB9E8: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_150EB9EC:
    // 0x150EB9EC: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x150EB9F0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150EB9F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x150EB9F8: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x150EB9FC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x150EBA00: jal         0x151541B8
    // 0x150EBA04: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    func_151541B8(rdram, ctx);
        goto after_7;
    // 0x150EBA04: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
    after_7:
    // 0x150EBA08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150EBA0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150EBA10: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x150EBA14: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150EBA18: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EBA1C: lwc1        $f6, 0x14E8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X14E8);
    // 0x150EBA20: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150EBA24: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x150EBA28: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    // 0x150EBA2C: addiu       $t4, $t4, 0x5480
    ctx->r12 = ADD32(ctx->r12, 0X5480);
    // 0x150EBA30: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x150EBA34: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x150EBA38: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x150EBA3C: addiu       $t3, $sp, 0xA4
    ctx->r11 = ADD32(ctx->r29, 0XA4);
    // 0x150EBA40: lw          $t7, 0x4($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X4);
    // 0x150EBA44: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150EBA48: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x150EBA4C: sw          $t7, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r15;
    // 0x150EBA50: addiu       $t8, $zero, 0x29E9
    ctx->r24 = ADD32(0, 0X29E9);
    // 0x150EBA54: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150EBA58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EBA5C: lwc1        $f30, 0x14EC($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X14EC);
    // 0x150EBA60: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EBA64: lwc1        $f28, 0x14F0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X14F0);
    // 0x150EBA68: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150EBA6C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x150EBA70: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x150EBA74: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x150EBA78: swc1        $f22, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f22.u32l;
    // 0x150EBA7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EBA80: lwc1        $f22, 0x14F4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X14F4);
    // 0x150EBA84: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150EBA88: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x150EBA8C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x150EBA90: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x150EBA94: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x150EBA98: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x150EBA9C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x150EBAA0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150EBAA4: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x150EBAA8: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x150EBAAC: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x150EBAB0: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x150EBAB4: sw          $t8, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r24;
    // 0x150EBAB8: sb          $zero, 0xEC($sp)
    MEM_B(0XEC, ctx->r29) = 0;
    // 0x150EBABC: sw          $zero, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = 0;
    // 0x150EBAC0: sb          $t9, 0xF4($sp)
    MEM_B(0XF4, ctx->r29) = ctx->r25;
    // 0x150EBAC4: sb          $t0, 0xF5($sp)
    MEM_B(0XF5, ctx->r29) = ctx->r8;
    // 0x150EBAC8: sb          $zero, 0xF6($sp)
    MEM_B(0XF6, ctx->r29) = 0;
    // 0x150EBACC: sb          $t1, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r9;
    // 0x150EBAD0: sb          $zero, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = 0;
    // 0x150EBAD4: sb          $zero, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = 0;
    // 0x150EBAD8: sb          $zero, 0xFA($sp)
    MEM_B(0XFA, ctx->r29) = 0;
    // 0x150EBADC: sb          $zero, 0xFB($sp)
    MEM_B(0XFB, ctx->r29) = 0;
    // 0x150EBAE0: sb          $t2, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r10;
    // 0x150EBAE4: sb          $t6, 0xFE($sp)
    MEM_B(0XFE, ctx->r29) = ctx->r14;
    // 0x150EBAE8: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x150EBAEC: sb          $zero, 0x104($sp)
    MEM_B(0X104, ctx->r29) = 0;
    // 0x150EBAF0: sh          $t5, 0x106($sp)
    MEM_H(0X106, ctx->r29) = ctx->r13;
    // 0x150EBAF4: sh          $t3, 0x108($sp)
    MEM_H(0X108, ctx->r29) = ctx->r11;
    // 0x150EBAF8: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    // 0x150EBAFC: addiu       $s4, $s4, 0x14A8
    ctx->r20 = ADD32(ctx->r20, 0X14A8);
    // 0x150EBB00: lwc1        $f20, 0x14F8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X14F8);
    // 0x150EBB04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150EBB08: addiu       $fp, $zero, 0x33
    ctx->r30 = ADD32(0, 0X33);
    // 0x150EBB0C: addiu       $s7, $sp, 0xC8
    ctx->r23 = ADD32(ctx->r29, 0XC8);
    // 0x150EBB10: addiu       $s6, $zero, 0x1A
    ctx->r22 = ADD32(0, 0X1A);
    // 0x150EBB14: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
    // 0x150EBB18: addiu       $s3, $sp, 0xBC
    ctx->r19 = ADD32(ctx->r29, 0XBC);
L_150EBB1C:
    // 0x150EBB1C: multu       $s0, $s5
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150EBB20: mflo        $t4
    ctx->r12 = lo;
    // 0x150EBB24: addu        $t7, $s4, $t4
    ctx->r15 = ADD32(ctx->r20, ctx->r12);
    // 0x150EBB28: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150EBB2C: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x150EBB30: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x150EBB34: sw          $t0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r8;
    // 0x150EBB38: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x150EBB3C: jal         0x150ADA20
    // 0x150EBB40: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150EBB40: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    after_8:
    // 0x150EBB44: jal         0x150ADA20
    // 0x150EBB48: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150EBB48: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_9:
    // 0x150EBB4C: jal         0x150ADA68
    // 0x150EBB50: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x150EBB50: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_10:
    // 0x150EBB54: divu        $zero, $s2, $s6
    lo = S32(U32(ctx->r18) / U32(ctx->r22)); hi = S32(U32(ctx->r18) % U32(ctx->r22));
    // 0x150EBB58: mul.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x150EBB5C: mfhi        $a0
    ctx->r4 = hi;
    // 0x150EBB60: andi        $a1, $s1, 0xF
    ctx->r5 = ctx->r17 & 0XF;
    // 0x150EBB64: addiu       $a1, $a1, -0x19
    ctx->r5 = ADD32(ctx->r5, -0X19);
    // 0x150EBB68: addiu       $a0, $a0, 0x2D
    ctx->r4 = ADD32(ctx->r4, 0X2D);
    // 0x150EBB6C: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x150EBB70: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x150EBB74: add.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x150EBB78: bne         $s6, $zero, L_150EBB84
    if (ctx->r22 != 0) {
        // 0x150EBB7C: nop
    
            goto L_150EBB84;
    }
    // 0x150EBB7C: nop

    // 0x150EBB80: break       7
    do_break(353287040);
L_150EBB84:
    // 0x150EBB84: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x150EBB88: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150EBB8C: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    // 0x150EBB90: jal         0x15143794
    // 0x150EBB94: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_15143794(rdram, ctx);
        goto after_11;
    // 0x150EBB94: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_11:
    // 0x150EBB98: jal         0x150ADA68
    // 0x150EBB9C: nop

    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x150EBB9C: nop

    after_12:
    // 0x150EBBA0: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150EBBA4: add.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f22.fl;
    // 0x150EBBA8: jal         0x150ADA68
    // 0x150EBBAC: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150EBBAC: swc1        $f18, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f18.u32l;
    after_13:
    // 0x150EBBB0: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x150EBBB4: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x150EBBB8: jal         0x150ADA68
    // 0x150EBBBC: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150EBBBC: swc1        $f6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x150EBBC0: mul.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x150EBBC4: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x150EBBC8: jal         0x150ADA20
    // 0x150EBBCC: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x150EBBCC: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    after_15:
    // 0x150EBBD0: divu        $zero, $v0, $fp
    lo = S32(U32(ctx->r2) / U32(ctx->r30)); hi = S32(U32(ctx->r2) % U32(ctx->r30));
    // 0x150EBBD4: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150EBBD8: addu        $t9, $t9, $s0
    ctx->r25 = ADD32(ctx->r25, ctx->r16);
    // 0x150EBBDC: lbu         $t9, 0x14D8($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X14D8);
    // 0x150EBBE0: mfhi        $t3
    ctx->r11 = hi;
    // 0x150EBBE4: addiu       $t4, $t3, 0x32
    ctx->r12 = ADD32(ctx->r11, 0X32);
    // 0x150EBBE8: bne         $fp, $zero, L_150EBBF4
    if (ctx->r30 != 0) {
        // 0x150EBBEC: nop
    
            goto L_150EBBF4;
    }
    // 0x150EBBEC: nop

    // 0x150EBBF0: break       7
    do_break(353287152);
L_150EBBF4:
    // 0x150EBBF4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150EBBF8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150EBBFC: sh          $t4, 0xE8($sp)
    MEM_H(0XE8, ctx->r29) = ctx->r12;
    // 0x150EBC00: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150EBC04: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150EBC08: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x150EBC0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x150EBC10: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x150EBC14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150EBC18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150EBC1C: jal         0x1513264C
    // 0x150EBC20: sh          $t9, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r25;
    func_1513264C(rdram, ctx);
        goto after_16;
    // 0x150EBC20: sh          $t9, 0xEA($sp)
    MEM_H(0XEA, ctx->r29) = ctx->r25;
    after_16:
    // 0x150EBC24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x150EBC28: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x150EBC2C: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x150EBC30: bne         $at, $zero, L_150EBB1C
    if (ctx->r1 != 0) {
        // 0x150EBC34: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_150EBB1C;
    }
    // 0x150EBC34: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x150EBC38: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x150EBC3C: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x150EBC40: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x150EBC44: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x150EBC48: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x150EBC4C: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x150EBC50: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x150EBC54: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x150EBC58: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x150EBC5C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x150EBC60: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x150EBC64: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x150EBC68: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x150EBC6C: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x150EBC70: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x150EBC74: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x150EBC78: jr          $ra
    // 0x150EBC7C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    return;
    // 0x150EBC7C: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_1000B2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000B2F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1000B2F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000B2FC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x1000B300: lui         $a2, 0x8004
    ctx->r6 = S32(0X8004 << 16);
    // 0x1000B304: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x1000B308: addiu       $v1, $v1, 0x1E58
    ctx->r3 = ADD32(ctx->r3, 0X1E58);
    // 0x1000B30C: addiu       $a2, $a2, 0x19A8
    ctx->r6 = ADD32(ctx->r6, 0X19A8);
    // 0x1000B310: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x1000B314: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
L_1000B318:
    // 0x1000B318: bne         $v0, $t6, L_1000B3B4
    if (ctx->r2 != ctx->r14) {
        // 0x1000B31C: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_1000B3B4;
    }
    // 0x1000B31C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x1000B320: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x1000B324: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x1000B328: jal         0x100226F0
    // 0x1000B32C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x1000B32C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x1000B330: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x1000B334: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x1000B338: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x1000B33C: slti        $at, $a3, 0x96
    ctx->r1 = SIGNED(ctx->r7) < 0X96 ? 1 : 0;
    // 0x1000B340: beq         $at, $zero, L_1000B360
    if (ctx->r1 == 0) {
        // 0x1000B344: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_1000B360;
    }
    // 0x1000B344: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x1000B348: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x1000B34C: lui         $t8, 0x8003
    ctx->r24 = S32(0X8003 << 16);
    // 0x1000B350: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x1000B354: lhu         $t8, -0x4F8C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X4F8C);
    // 0x1000B358: b           L_1000B368
    // 0x1000B35C: sw          $t8, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r24;
        goto L_1000B368;
    // 0x1000B35C: sw          $t8, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r24;
L_1000B360:
    // 0x1000B360: addiu       $t9, $zero, 0x6590
    ctx->r25 = ADD32(0, 0X6590);
    // 0x1000B364: sw          $t9, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r25;
L_1000B368:
    // 0x1000B368: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x1000B36C: lw          $t0, 0x2C($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X2C);
    // 0x1000B370: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x1000B374: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x1000B378: addiu       $t2, $t2, -0x462C
    ctx->r10 = ADD32(ctx->r10, -0X462C);
    // 0x1000B37C: addiu       $t3, $t3, -0x460C
    ctx->r11 = ADD32(ctx->r11, -0X460C);
    // 0x1000B380: sh          $v1, 0x5A($a2)
    MEM_H(0X5A, ctx->r6) = ctx->r3;
    // 0x1000B384: sh          $v1, 0x58($a2)
    MEM_H(0X58, ctx->r6) = ctx->r3;
    // 0x1000B388: sh          $v1, 0x54($a2)
    MEM_H(0X54, ctx->r6) = ctx->r3;
    // 0x1000B38C: sh          $v1, 0x52($a2)
    MEM_H(0X52, ctx->r6) = ctx->r3;
    // 0x1000B390: sh          $v1, 0x4C($a2)
    MEM_H(0X4C, ctx->r6) = ctx->r3;
    // 0x1000B394: sh          $v1, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = ctx->r3;
    // 0x1000B398: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x1000B39C: sw          $t2, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r10;
    // 0x1000B3A0: sw          $t3, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r11;
    // 0x1000B3A4: sw          $a2, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r6;
    // 0x1000B3A8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x1000B3AC: b           L_1000B3C4
    // 0x1000B3B0: sw          $t0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r8;
        goto L_1000B3C4;
    // 0x1000B3B0: sw          $t0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r8;
L_1000B3B4:
    // 0x1000B3B4: addiu       $a2, $a2, 0x64
    ctx->r6 = ADD32(ctx->r6, 0X64);
    // 0x1000B3B8: bnel        $a2, $v1, L_1000B318
    if (ctx->r6 != ctx->r3) {
        // 0x1000B3BC: lw          $t6, 0x4($a2)
        ctx->r14 = MEM_W(ctx->r6, 0X4);
            goto L_1000B318;
    }
    goto skip_0;
    // 0x1000B3BC: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    skip_0:
    // 0x1000B3C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000B3C4:
    // 0x1000B3C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000B3C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1000B3CC: jr          $ra
    // 0x1000B3D0: nop

    return;
    return;
    // 0x1000B3D0: nop

;}
RECOMP_FUNC void func_15159120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15159120: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15159124: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x15159128: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1515912C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15159130: beq         $a1, $at, L_15159140
    if (ctx->r5 == ctx->r1) {
        // 0x15159134: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15159140;
    }
    // 0x15159134: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15159138: bnel        $a1, $at, L_1515914C
    if (ctx->r5 != ctx->r1) {
        // 0x1515913C: lui         $at, 0x420C
        ctx->r1 = S32(0X420C << 16);
            goto L_1515914C;
    }
    goto skip_0;
    // 0x1515913C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    skip_0:
L_15159140:
    // 0x15159140: b           L_15159178
    // 0x15159144: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_15159178;
    // 0x15159144: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15159148: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
L_1515914C:
    // 0x1515914C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15159150: lwc1        $f6, 0x118($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X118);
    // 0x15159154: lwc1        $f4, 0x180($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X180);
    // 0x15159158: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x1515915C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x15159160: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x15159164: nop

    // 0x15159168: bc1f        L_15159178
    if (!c1cs) {
        // 0x1515916C: nop
    
            goto L_15159178;
    }
    // 0x1515916C: nop

    // 0x15159170: b           L_15159178
    // 0x15159174: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_15159178;
    // 0x15159174: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15159178:
    // 0x15159178: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1515917C: jr          $ra
    // 0x15159180: nop

    return;
    return;
    // 0x15159180: nop

;}
RECOMP_FUNC void func_1518F89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1518F89C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1518F8A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1518F8A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1518F8A8: jal         0x150ADA68
    // 0x1518F8AC: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x1518F8AC: nop

    after_0:
    // 0x1518F8B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1518F8B4: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x1518F8B8: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x1518F8BC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x1518F8C0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x1518F8C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1518F8C8: jal         0x1518F8E0
    // 0x1518F8CC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    func_1518F8E0(rdram, ctx);
        goto after_1;
    // 0x1518F8CC: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    after_1:
    // 0x1518F8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1518F8D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1518F8D8: jr          $ra
    // 0x1518F8DC: nop

    return;
    return;
    // 0x1518F8DC: nop

;}
RECOMP_FUNC void func_15095A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15095A90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15095A94: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x15095A98: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x15095A9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15095AA0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15095AA4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x15095AA8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x15095AAC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x15095AB0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x15095AB4: addiu       $t7, $sp, 0x24
    ctx->r15 = ADD32(ctx->r29, 0X24);
    // 0x15095AB8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15095ABC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x15095AC0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x15095AC4: jal         0x15095B08
    // 0x15095AC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15095B08(rdram, ctx);
        goto after_0;
    // 0x15095AC8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x15095ACC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x15095AD0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x15095AD4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x15095AD8: beq         $t8, $zero, L_15095AF4
    if (ctx->r24 == 0) {
        // 0x15095ADC: lw          $a2, 0x40($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X40);
            goto L_15095AF4;
    }
    // 0x15095ADC: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x15095AE0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x15095AE4: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x15095AE8: jal         0x15095D34
    // 0x15095AEC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15095D34(rdram, ctx);
        goto after_1;
    // 0x15095AEC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x15095AF0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
L_15095AF4:
    // 0x15095AF4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x15095AF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15095AFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15095B00: jr          $ra
    // 0x15095B04: nop

    return;
    return;
    // 0x15095B04: nop

;}
RECOMP_FUNC void func_15131828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15131828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1513182C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15131830: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15131834: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15131838: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x1513183C: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x15131840: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15131844: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x15131848: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1513184C: jal         0x151423D8
    // 0x15131850: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x15131850: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x15131854: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x15131858: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x1513185C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15131860: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x15131864: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15131868: swc1        $f6, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = ctx->f6.u32l;
    // 0x1513186C: lbu         $a0, 0x1($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X1);
    // 0x15131870: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x15131874: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x15131878: jal         0x151423D8
    // 0x1513187C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1513187C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_1:
    // 0x15131880: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x15131884: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x15131888: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x1513188C: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x15131890: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15131894: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15131898: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1513189C: addiu       $v0, $v0, -0x161C
    ctx->r2 = ADD32(ctx->r2, -0X161C);
    // 0x151318A0: swc1        $f10, 0x54($t1)
    MEM_W(0X54, ctx->r9) = ctx->f10.u32l;
    // 0x151318A4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x151318A8: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x151318AC: lbu         $t5, 0x0($a2)
    ctx->r13 = MEM_BU(ctx->r6, 0X0);
    // 0x151318B0: lbu         $t0, 0x1($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X1);
    // 0x151318B4: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151318B8: mflo        $t4
    ctx->r12 = lo;
    // 0x151318BC: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x151318C0: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
    // 0x151318C4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x151318C8: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    // 0x151318CC: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x151318D0: mflo        $t9
    ctx->r25 = lo;
    // 0x151318D4: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x151318D8: sb          $t1, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r9;
    // 0x151318DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151318E0: jr          $ra
    // 0x151318E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x151318E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15015644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15015644: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x15015648: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1501564C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15015650: lbu         $t6, 0x16($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X16);
    // 0x15015654: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15015658: sb          $t8, 0x14($a2)
    MEM_B(0X14, ctx->r6) = ctx->r24;
    // 0x1501565C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x15015660: sb          $t7, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r15;
    // 0x15015664: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x15015668: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x1501566C: jal         0x15144598
    // 0x15015670: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_15144598(rdram, ctx);
        goto after_0;
    // 0x15015670: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x15015674: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x15015678: jal         0x1510F800
    // 0x1501567C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_1510F800(rdram, ctx);
        goto after_1;
    // 0x1501567C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x15015680: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x15015684: lh          $a0, 0x0($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X0);
    // 0x15015688: jal         0x1510FD20
    // 0x1501568C: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    func_1510FD20(rdram, ctx);
        goto after_2;
    // 0x1501568C: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    after_2:
    // 0x15015690: addiu       $t9, $zero, 0x2F
    ctx->r25 = ADD32(0, 0X2F);
    // 0x15015694: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x15015698: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x1501569C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x150156A0: sb          $zero, 0x44($sp)
    MEM_B(0X44, ctx->r29) = 0;
    // 0x150156A4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150156A8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150156AC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150156B0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150156B4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150156B8: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x150156BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x150156C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150156C4: jal         0x15149130
    // 0x150156C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_15149130(rdram, ctx);
        goto after_3;
    // 0x150156C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_3:
    // 0x150156CC: beq         $v0, $zero, L_150156E0
    if (ctx->r2 == 0) {
        // 0x150156D0: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150156E0;
    }
    // 0x150156D0: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150156D4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x150156D8: jal         0x10022EC0
    // 0x150156DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x150156DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
L_150156E0:
    // 0x150156E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150156E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x150156E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x150156EC: jr          $ra
    // 0x150156F0: nop

    return;
    return;
    // 0x150156F0: nop

;}
RECOMP_FUNC void func_150FE248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FE248: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150FE24C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150FE250: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150FE254: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150FE258: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x150FE25C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150FE260: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x150FE264: lbu         $a3, -0x7480($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X7480);
    // 0x150FE268: addiu       $a2, $a2, 0x1F70
    ctx->r6 = ADD32(ctx->r6, 0X1F70);
    // 0x150FE26C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x150FE270: jal         0x151D3E04
    // 0x150FE274: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_151D3E04(rdram, ctx);
        goto after_0;
    // 0x150FE274: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x150FE278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150FE27C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150FE280: jr          $ra
    // 0x150FE284: nop

    return;
    return;
    // 0x150FE284: nop

;}
RECOMP_FUNC void func_151332DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151332DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151332E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151332E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151332E8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151332EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151332F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x151332F4: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x151332F8: swc1        $f2, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f2.u32l;
    // 0x151332FC: swc1        $f2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f2.u32l;
    // 0x15133300: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x15133304: beq         $t7, $zero, L_1513335C
    if (ctx->r15 == 0) {
        // 0x15133308: swc1        $f2, 0x34($s0)
        MEM_W(0X34, ctx->r16) = ctx->f2.u32l;
            goto L_1513335C;
    }
    // 0x15133308: swc1        $f2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f2.u32l;
    // 0x1513330C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15133310: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x15133314: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15133318: lwc1        $f4, 0x50($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X50);
    // 0x1513331C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x15133320: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15133324: lwc1        $f4, 0x54($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X54);
    // 0x15133328: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1513332C: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x15133330: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x15133334: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15133338: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1513333C: lwc1        $f4, 0x58($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X58);
    // 0x15133340: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x15133344: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x15133348: swc1        $f18, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f18.u32l;
    // 0x1513334C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x15133350: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15133354: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15133358: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
L_1513335C:
    // 0x1513335C: lui         $at, 0x4410
    ctx->r1 = S32(0X4410 << 16);
    // 0x15133360: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15133364: lwc1        $f6, 0x144($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X144);
    // 0x15133368: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x1513336C: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x15133370: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15133374: lbu         $t2, 0x149($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X149);
    // 0x15133378: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x1513337C: addiu       $a1, $s0, 0x134
    ctx->r5 = ADD32(ctx->r16, 0X134);
    // 0x15133380: trunc.w.s   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x15133384: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x15133388: nop

    // 0x1513338C: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15133390: mflo        $t1
    ctx->r9 = lo;
    // 0x15133394: addu        $t3, $t2, $t1
    ctx->r11 = ADD32(ctx->r10, ctx->r9);
    // 0x15133398: andi        $v0, $t3, 0xFF
    ctx->r2 = ctx->r11 & 0XFF;
    // 0x1513339C: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x151333A0: beq         $at, $zero, L_151334E0
    if (ctx->r1 == 0) {
        // 0x151333A4: sb          $t3, 0x149($s0)
        MEM_B(0X149, ctx->r16) = ctx->r11;
            goto L_151334E0;
    }
    // 0x151333A4: sb          $t3, 0x149($s0)
    MEM_B(0X149, ctx->r16) = ctx->r11;
    // 0x151333A8: addiu       $a0, $v0, -0x40
    ctx->r4 = ADD32(ctx->r2, -0X40);
    // 0x151333AC: andi        $t4, $a0, 0xFF
    ctx->r12 = ctx->r4 & 0XFF;
    // 0x151333B0: jal         0x151423D8
    // 0x151333B4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x151333B4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_0:
    // 0x151333B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151333BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151333C0: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    // 0x151333C4: lwc1        $f6, 0x144($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X144);
    // 0x151333C8: lbu         $v0, 0x148($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X148);
    // 0x151333CC: sub.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x151333D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151333D4: andi        $t5, $v0, 0x8
    ctx->r13 = ctx->r2 & 0X8;
    // 0x151333D8: sub.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x151333DC: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x151333E0: nop

    // 0x151333E4: mul.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x151333E8: beq         $t5, $zero, L_15133434
    if (ctx->r13 == 0) {
        // 0x151333EC: nop
    
            goto L_15133434;
    }
    // 0x151333EC: nop

    // 0x151333F0: add.s       $f12, $f2, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x151333F4: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x151333F8: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x151333FC: sub.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x15133400: mul.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x15133404: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15133408: lbu         $v0, 0x148($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X148);
    // 0x1513340C: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x15133410: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15133414: lwc1        $f4, 0x138($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X138);
    // 0x15133418: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    // 0x1513341C: mul.s       $f6, $f18, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x15133420: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x15133424: mul.s       $f8, $f14, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x15133428: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x1513342C: sub.s       $f18, $f4, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x15133430: swc1        $f18, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f18.u32l;
L_15133434:
    // 0x15133434: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x15133438: beql        $t6, $zero, L_151334FC
    if (ctx->r14 == 0) {
        // 0x1513343C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151334FC;
    }
    goto skip_0;
    // 0x1513343C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15133440: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15133444: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15133448: lb          $a0, 0x14A($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X14A);
    // 0x1513344C: add.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x15133450: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x15133454: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x15133458: sub.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x1513345C: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x15133460: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x15133464: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x15133468: jal         0x151423D8
    // 0x1513346C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1513346C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x15133470: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x15133474: jal         0x151423D8
    // 0x15133478: lbu         $a0, 0x14A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X14A);
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x15133478: lbu         $a0, 0x14A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X14A);
    after_2:
    // 0x1513347C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x15133480: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x15133484: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x15133488: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x1513348C: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15133490: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x15133494: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15133498: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x1513349C: lwc1        $f6, 0x134($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X134);
    // 0x151334A0: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x151334A4: swc1        $f18, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f18.u32l;
    // 0x151334A8: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x151334AC: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
    // 0x151334B0: mul.s       $f2, $f14, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x151334B4: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x151334B8: lwc1        $f8, 0x13C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X13C);
    // 0x151334BC: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x151334C0: sub.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x151334C4: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x151334C8: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x151334CC: mul.s       $f6, $f2, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x151334D0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151334D4: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    // 0x151334D8: b           L_151334FC
    // 0x151334DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151334FC;
    // 0x151334DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151334E0:
    // 0x151334E0: jal         0x10022EC0
    // 0x151334E4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151334E4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_3:
    // 0x151334E8: lbu         $t8, 0x148($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X148);
    // 0x151334EC: sb          $zero, 0x149($s0)
    MEM_B(0X149, ctx->r16) = 0;
    // 0x151334F0: andi        $t9, $t8, 0xFFE7
    ctx->r25 = ctx->r24 & 0XFFE7;
    // 0x151334F4: sb          $t9, 0x148($s0)
    MEM_B(0X148, ctx->r16) = ctx->r25;
    // 0x151334F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151334FC:
    // 0x151334FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15133500: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15133504: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15133508: jr          $ra
    // 0x1513350C: nop

    return;
    return;
    // 0x1513350C: nop

;}
RECOMP_FUNC void func_1514F590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514F590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1514F594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514F598: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1514F59C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1514F5A0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1514F5A4: jal         0x1501175C
    // 0x1514F5A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1501175C(rdram, ctx);
        goto after_0;
    // 0x1514F5A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x1514F5AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1514F5B0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x1514F5B4: jal         0x15011A78
    // 0x1514F5B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15011A78(rdram, ctx);
        goto after_1;
    // 0x1514F5B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x1514F5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514F5C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1514F5C4: jr          $ra
    // 0x1514F5C8: nop

    return;
    return;
    // 0x1514F5C8: nop

;}
RECOMP_FUNC void func_10006380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10006380: sw          $ra, 0xA68($sp)
    MEM_W(0XA68, ctx->r29) = ctx->r31;
    // 0x10006384: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x10006388: beq         $at, $zero, L_100063B0
    if (ctx->r1 == 0) {
        // 0x1000638C: nop
    
            goto L_100063B0;
    }
    // 0x1000638C: nop

    // 0x10006390: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
L_10006394:
    // 0x10006394: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x10006398: sllv        $at, $at, $fp
    ctx->r1 = S32(ctx->r1 << (ctx->r30 & 31));
    // 0x1000639C: or          $gp, $gp, $at
    ctx->r28 = ctx->r28 | ctx->r1;
    // 0x100063A0: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
    // 0x100063A4: slti        $at, $fp, 0x3
    ctx->r1 = SIGNED(ctx->r30) < 0X3 ? 1 : 0;
    // 0x100063A8: bnel        $at, $zero, L_10006394
    if (ctx->r1 != 0) {
        // 0x100063AC: lbu         $at, 0x0($s7)
        ctx->r1 = MEM_BU(ctx->r23, 0X0);
            goto L_10006394;
    }
    goto skip_0;
    // 0x100063AC: lbu         $at, 0x0($s7)
    ctx->r1 = MEM_BU(ctx->r23, 0X0);
    skip_0:
L_100063B0:
    // 0x100063B0: andi        $at, $gp, 0x1
    ctx->r1 = ctx->r28 & 0X1;
    // 0x100063B4: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x100063B8: srl         $t3, $gp, 1
    ctx->r11 = S32(U32(ctx->r28) >> 1);
    // 0x100063BC: andi        $t3, $t3, 0x3
    ctx->r11 = ctx->r11 & 0X3;
    // 0x100063C0: srl         $gp, $gp, 3
    ctx->r28 = S32(U32(ctx->r28) >> 3);
    // 0x100063C4: addiu       $fp, $fp, -0x3
    ctx->r30 = ADD32(ctx->r30, -0X3);
    // 0x100063C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x100063CC: bne         $t3, $at, L_100063E4
    if (ctx->r11 != ctx->r1) {
        // 0x100063D0: nop
    
            goto L_100063E4;
    }
    // 0x100063D0: nop

    // 0x100063D4: jal         0x10006424
    // 0x100063D8: nop

    func_10006424(rdram, ctx);
        goto after_0;
    // 0x100063D8: nop

    after_0:
    // 0x100063DC: j           L_10006418
    // 0x100063E0: nop

        goto L_10006418;
    // 0x100063E0: nop

L_100063E4:
    // 0x100063E4: bne         $t3, $zero, L_100063FC
    if (ctx->r11 != 0) {
        // 0x100063E8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_100063FC;
    }
    // 0x100063E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x100063EC: jal         0x10006828
    // 0x100063F0: nop

    func_10006828(rdram, ctx);
        goto after_1;
    // 0x100063F0: nop

    after_1:
    // 0x100063F4: j           L_10006418
    // 0x100063F8: nop

        goto L_10006418;
    // 0x100063F8: nop

L_100063FC:
    // 0x100063FC: bne         $t3, $at, L_10006414
    if (ctx->r11 != ctx->r1) {
        // 0x10006400: nop
    
            goto L_10006414;
    }
    // 0x10006400: nop

    // 0x10006404: jal         0x1000692C
    // 0x10006408: nop

    func_1000692C(rdram, ctx);
        goto after_2;
    // 0x10006408: nop

    after_2:
    // 0x1000640C: j           L_10006418
    // 0x10006410: nop

        goto L_10006418;
    // 0x10006410: nop

L_10006414:
    // 0x10006414: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_10006418:
    // 0x10006418: lw          $ra, 0xA68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA68);
    // 0x1000641C: jr          $ra
    // 0x10006420: nop

    return;
    return;
    // 0x10006420: nop

;}
RECOMP_FUNC void func_150C522C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C522C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150C5230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150C5234: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150C5238: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150C523C: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x150C5240: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x150C5244: addiu       $s1, $s1, -0x6720
    ctx->r17 = ADD32(ctx->r17, -0X6720);
    // 0x150C5248: addiu       $s0, $s0, -0x6730
    ctx->r16 = ADD32(ctx->r16, -0X6730);
L_150C524C:
    // 0x150C524C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x150C5250: beql        $a0, $zero, L_150C5264
    if (ctx->r4 == 0) {
        // 0x150C5254: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_150C5264;
    }
    goto skip_0;
    // 0x150C5254: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x150C5258: jal         0x1516972C
    // 0x150C525C: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x150C525C: nop

    after_0:
    // 0x150C5260: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_150C5264:
    // 0x150C5264: bne         $s0, $s1, L_150C524C
    if (ctx->r16 != ctx->r17) {
        // 0x150C5268: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_150C524C;
    }
    // 0x150C5268: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x150C526C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150C5270: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150C5274: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150C5278: jr          $ra
    // 0x150C527C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x150C527C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}

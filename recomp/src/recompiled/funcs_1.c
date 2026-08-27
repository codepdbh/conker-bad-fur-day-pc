#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_150F1CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F1CB0: lhu         $t6, 0x84($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X84);
    // 0x150F1CB4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x150F1CB8: addiu       $t7, $zero, 0x1B
    ctx->r15 = ADD32(0, 0X1B);
    // 0x150F1CBC: bne         $t6, $at, L_150F1CCC
    if (ctx->r14 != ctx->r1) {
        // 0x150F1CC0: addiu       $t8, $zero, 0xC
        ctx->r24 = ADD32(0, 0XC);
            goto L_150F1CCC;
    }
    // 0x150F1CC0: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x150F1CC4: b           L_150F1CD0
    // 0x150F1CC8: sb          $t7, 0x68($a0)
    MEM_B(0X68, ctx->r4) = ctx->r15;
        goto L_150F1CD0;
    // 0x150F1CC8: sb          $t7, 0x68($a0)
    MEM_B(0X68, ctx->r4) = ctx->r15;
L_150F1CCC:
    // 0x150F1CCC: sb          $t8, 0x68($a0)
    MEM_B(0X68, ctx->r4) = ctx->r24;
L_150F1CD0:
    // 0x150F1CD0: lw          $v0, 0x2E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2E4);
    // 0x150F1CD4: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x150F1CD8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150F1CDC: andi        $t0, $v0, 0x3
    ctx->r8 = ctx->r2 & 0X3;
    // 0x150F1CE0: bne         $t0, $at, L_150F1CF4
    if (ctx->r8 != ctx->r1) {
        // 0x150F1CE4: sb          $t9, 0x69($a0)
        MEM_B(0X69, ctx->r4) = ctx->r25;
            goto L_150F1CF4;
    }
    // 0x150F1CE4: sb          $t9, 0x69($a0)
    MEM_B(0X69, ctx->r4) = ctx->r25;
    // 0x150F1CE8: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x150F1CEC: sb          $t1, 0x69($a0)
    MEM_B(0X69, ctx->r4) = ctx->r9;
    // 0x150F1CF0: lw          $v0, 0x2E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2E4);
L_150F1CF4:
    // 0x150F1CF4: andi        $t2, $v0, 0xC
    ctx->r10 = ctx->r2 & 0XC;
    // 0x150F1CF8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x150F1CFC: bne         $t2, $at, L_150F1D08
    if (ctx->r10 != ctx->r1) {
        // 0x150F1D00: addiu       $t3, $zero, 0x17
        ctx->r11 = ADD32(0, 0X17);
            goto L_150F1D08;
    }
    // 0x150F1D00: addiu       $t3, $zero, 0x17
    ctx->r11 = ADD32(0, 0X17);
    // 0x150F1D04: sb          $t3, 0x69($a0)
    MEM_B(0X69, ctx->r4) = ctx->r11;
L_150F1D08:
    // 0x150F1D08: jr          $ra
    // 0x150F1D0C: nop

    return;
    return;
    // 0x150F1D0C: nop

;}
RECOMP_FUNC void func_1514C858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514C858: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x1514C85C: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x1514C860: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x1514C864: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x1514C868: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x1514C86C: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x1514C870: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x1514C874: mov.s       $f24, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 12);
    ctx->f24.fl = ctx->f12.fl;
    // 0x1514C878: mov.s       $f26, $f14
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 14);
    ctx->f26.fl = ctx->f14.fl;
    // 0x1514C87C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x1514C880: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x1514C884: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x1514C888: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x1514C88C: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x1514C890: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x1514C894: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x1514C898: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x1514C89C: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x1514C8A0: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x1514C8A4: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x1514C8A8: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x1514C8AC: lh          $a0, 0xEA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XEA);
    // 0x1514C8B0: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1514C8B4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x1514C8B8: jal         0x151423D8
    // 0x1514C8BC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_0;
    // 0x1514C8BC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x1514C8C0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1514C8C4: jal         0x151423D8
    // 0x1514C8C8: lbu         $a0, 0xEB($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XEB);
    func_151423D8(rdram, ctx);
        goto after_1;
    // 0x1514C8C8: lbu         $a0, 0xEB($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XEB);
    after_1:
    // 0x1514C8CC: lh          $v0, 0xF2($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XF2);
    // 0x1514C8D0: lh          $v1, 0xEE($sp)
    ctx->r3 = MEM_H(ctx->r29, 0XEE);
    // 0x1514C8D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x1514C8D8: lh          $s5, 0xF6($sp)
    ctx->r21 = MEM_H(ctx->r29, 0XF6);
    // 0x1514C8DC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1514C8E0: beq         $at, $zero, L_1514C908
    if (ctx->r1 == 0) {
        // 0x1514C8E4: subu        $a0, $v0, $v1
        ctx->r4 = SUB32(ctx->r2, ctx->r3);
            goto L_1514C908;
    }
    // 0x1514C8E4: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x1514C8E8: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x1514C8EC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1514C8F0: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x1514C8F4: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x1514C8F8: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1514C8FC: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x1514C900: b           L_1514C920
    // 0x1514C904: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
        goto L_1514C920;
    // 0x1514C904: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_1514C908:
    // 0x1514C908: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1514C90C: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x1514C910: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x1514C914: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1514C918: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x1514C91C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
L_1514C920:
    // 0x1514C920: blez        $s5, L_1514CA2C
    if (SIGNED(ctx->r21) <= 0) {
        // 0x1514C924: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_1514CA2C;
    }
    // 0x1514C924: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1514C928: mul.s       $f30, $f22, $f20
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f30.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x1514C92C: lbu         $t3, 0xFB($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XFB);
    // 0x1514C930: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x1514C934: mul.s       $f4, $f22, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x1514C938: addiu       $t5, $t5, -0x5600
    ctx->r13 = ADD32(ctx->r13, -0X5600);
    // 0x1514C93C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1514C940: addu        $s4, $t4, $t5
    ctx->r20 = ADD32(ctx->r12, ctx->r13);
    // 0x1514C944: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x1514C948: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x1514C94C: lbu         $fp, 0x10B($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X10B);
    // 0x1514C950: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    // 0x1514C954: lw          $s7, 0x104($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X104);
    // 0x1514C958: lw          $s6, 0xFC($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XFC);
L_1514C95C:
    // 0x1514C95C: jal         0x150ADA20
    // 0x1514C960: nop

    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1514C960: nop

    after_2:
    // 0x1514C964: divu        $zero, $v0, $s2
    lo = S32(U32(ctx->r2) / U32(ctx->r18)); hi = S32(U32(ctx->r2) % U32(ctx->r18));
    // 0x1514C968: mfhi        $t6
    ctx->r14 = hi;
    // 0x1514C96C: addu        $a0, $t6, $s3
    ctx->r4 = ADD32(ctx->r14, ctx->r19);
    // 0x1514C970: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x1514C974: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1514C978: bne         $s2, $zero, L_1514C984
    if (ctx->r18 != 0) {
        // 0x1514C97C: nop
    
            goto L_1514C984;
    }
    // 0x1514C97C: nop

    // 0x1514C980: break       7
    do_break(353683840);
L_1514C984:
    // 0x1514C984: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x1514C988: jal         0x151423D8
    // 0x1514C98C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x1514C98C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_3:
    // 0x1514C990: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1514C994: jal         0x151423D8
    // 0x1514C998: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x1514C998: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
    // 0x1514C99C: mul.s       $f6, $f30, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f30.fl, ctx->f0.fl);
    // 0x1514C9A0: lwc1        $f8, 0xA4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x1514C9A4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x1514C9A8: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x1514C9AC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1514C9B0: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x1514C9B4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x1514C9B8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x1514C9BC: add.s       $f2, $f6, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x1514C9C0: beq         $v0, $zero, L_1514CA14
    if (ctx->r2 == 0) {
        // 0x1514C9C4: add.s       $f12, $f10, $f28
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f28.fl;
            goto L_1514CA14;
    }
    // 0x1514C9C4: add.s       $f12, $f10, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x1514C9C8: mul.s       $f16, $f22, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f22.fl, ctx->f20.fl);
    // 0x1514C9CC: lh          $t9, 0xEA($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XEA);
    // 0x1514C9D0: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x1514C9D4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x1514C9D8: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    // 0x1514C9DC: swc1        $f24, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f24.u32l;
    // 0x1514C9E0: swc1        $f26, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f26.u32l;
    // 0x1514C9E4: sub.s       $f18, $f26, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f26.fl - ctx->f16.fl;
    // 0x1514C9E8: swc1        $f28, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f28.u32l;
    // 0x1514C9EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1514C9F0: swc1        $f22, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f22.u32l;
    // 0x1514C9F4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x1514C9F8: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x1514C9FC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x1514CA00: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x1514CA04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x1514CA08: jalr        $v0
    // 0x1514CA0C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x1514CA0C: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x1514CA10: beq         $v0, $zero, L_1514CA2C
    if (ctx->r2 == 0) {
        // 0x1514CA14: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1514CA2C;
    }
L_1514CA14:
    // 0x1514CA14: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1514CA18: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x1514CA1C: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x1514CA20: slt         $at, $s1, $s5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x1514CA24: bne         $at, $zero, L_1514C95C
    if (ctx->r1 != 0) {
        // 0x1514CA28: nop
    
            goto L_1514C95C;
    }
    // 0x1514CA28: nop

L_1514CA2C:
    // 0x1514CA2C: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x1514CA30: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x1514CA34: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x1514CA38: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x1514CA3C: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x1514CA40: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x1514CA44: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x1514CA48: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x1514CA4C: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x1514CA50: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x1514CA54: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x1514CA58: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x1514CA5C: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x1514CA60: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x1514CA64: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x1514CA68: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x1514CA6C: jr          $ra
    // 0x1514CA70: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    return;
    // 0x1514CA70: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_150CE150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CE150: addiu       $sp, $sp, -0x918
    ctx->r29 = ADD32(ctx->r29, -0X918);
    // 0x150CE154: sw          $a2, 0x920($sp)
    MEM_W(0X920, ctx->r29) = ctx->r6;
    // 0x150CE158: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x150CE15C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x150CE160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150CE164: sw          $a0, 0x918($sp)
    MEM_W(0X918, ctx->r29) = ctx->r4;
    // 0x150CE168: sw          $a1, 0x91C($sp)
    MEM_W(0X91C, ctx->r29) = ctx->r5;
    // 0x150CE16C: lw          $t7, 0x918($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X918);
    // 0x150CE170: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150CE174: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150CE178: bne         $t7, $zero, L_150CE188
    if (ctx->r15 != 0) {
        // 0x150CE17C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_150CE188;
    }
    // 0x150CE17C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150CE180: b           L_150CE1F0
    // 0x150CE184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150CE1F0;
    // 0x150CE184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150CE188:
    // 0x150CE188: lwc1        $f0, 0x7FC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7FC);
    // 0x150CE18C: lh          $t0, 0x91E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X91E);
    // 0x150CE190: lw          $t3, 0x918($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X918);
    // 0x150CE194: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x150CE198: addiu       $t2, $zero, 0x2710
    ctx->r10 = ADD32(0, 0X2710);
    // 0x150CE19C: sb          $t8, 0x910($sp)
    MEM_B(0X910, ctx->r29) = ctx->r24;
    // 0x150CE1A0: sb          $t9, 0x911($sp)
    MEM_B(0X911, ctx->r29) = ctx->r25;
    // 0x150CE1A4: sb          $zero, 0x912($sp)
    MEM_B(0X912, ctx->r29) = 0;
    // 0x150CE1A8: sb          $t1, 0x916($sp)
    MEM_B(0X916, ctx->r29) = ctx->r9;
    // 0x150CE1AC: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x150CE1B0: sb          $zero, 0x34($sp)
    MEM_B(0X34, ctx->r29) = 0;
    // 0x150CE1B4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x150CE1B8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x150CE1BC: sh          $t0, 0x914($sp)
    MEM_H(0X914, ctx->r29) = ctx->r8;
    // 0x150CE1C0: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x150CE1C4: lbu         $t4, 0x3B($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X3B);
    // 0x150CE1C8: addiu       $a0, $sp, 0x910
    ctx->r4 = ADD32(ctx->r29, 0X910);
    // 0x150CE1CC: addiu       $a1, $zero, 0x8F0
    ctx->r5 = ADD32(0, 0X8F0);
    // 0x150CE1D0: jal         0x1515FF74
    // 0x150CE1D4: sb          $t4, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r12;
    func_1515FF74(rdram, ctx);
        goto after_0;
    // 0x150CE1D4: sb          $t4, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r12;
    after_0:
    // 0x150CE1D8: beq         $v0, $zero, L_150CE1F0
    if (ctx->r2 == 0) {
        // 0x150CE1DC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_150CE1F0;
    }
    // 0x150CE1DC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x150CE1E0: addiu       $a0, $v1, 0x18
    ctx->r4 = ADD32(ctx->r3, 0X18);
    // 0x150CE1E4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x150CE1E8: jal         0x10022EC0
    // 0x150CE1EC: addiu       $a2, $zero, 0x8F0
    ctx->r6 = ADD32(0, 0X8F0);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x150CE1EC: addiu       $a2, $zero, 0x8F0
    ctx->r6 = ADD32(0, 0X8F0);
    after_1:
L_150CE1F0:
    // 0x150CE1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150CE1F4: addiu       $sp, $sp, 0x918
    ctx->r29 = ADD32(ctx->r29, 0X918);
    // 0x150CE1F8: jr          $ra
    // 0x150CE1FC: nop

    return;
    return;
    // 0x150CE1FC: nop

;}
RECOMP_FUNC void func_1506FE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506FE48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506FE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506FE50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1506FE54: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506FE58: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506FE5C: jal         0x151AABC4
    // 0x1506FE60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_151AABC4(rdram, ctx);
        goto after_0;
    // 0x1506FE60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x1506FE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506FE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506FE6C: jr          $ra
    // 0x1506FE70: nop

    return;
    return;
    // 0x1506FE70: nop

;}
RECOMP_FUNC void func_15135424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15135424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15135428: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x1513542C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x15135430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15135434: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15135438: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1513543C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x15135440: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x15135444: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x15135448: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x1513544C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x15135450: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x15135454: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x15135458: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x1513545C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x15135460: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x15135464: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15135468: jal         0x15145EA4
    // 0x1513546C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_15145EA4(rdram, ctx);
        goto after_0;
    // 0x1513546C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x15135470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15135474: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x15135478: jr          $ra
    // 0x1513547C: nop

    return;
    return;
    // 0x1513547C: nop

;}
RECOMP_FUNC void func_1500BE40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1500BE40: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1500BE44: addiu       $v0, $v0, -0x22F0
    ctx->r2 = ADD32(ctx->r2, -0X22F0);
    // 0x1500BE48: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1500BE4C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x1500BE50: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1500BE54: addiu       $t6, $zero, 0x6E
    ctx->r14 = ADD32(0, 0X6E);
    // 0x1500BE58: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1500BE5C: sw          $t6, -0x22F4($at)
    MEM_W(-0X22F4, ctx->r1) = ctx->r14;
    // 0x1500BE60: jr          $ra
    // 0x1500BE64: nop

    return;
    return;
    // 0x1500BE64: nop

;}
RECOMP_FUNC void func_151355B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151355B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151355BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x151355C0: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x151355C4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x151355C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151355CC: beq         $a2, $zero, L_151355E4
    if (ctx->r6 == 0) {
        // 0x151355D0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_151355E4;
    }
    // 0x151355D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151355D4: beql        $a2, $at, L_15135618
    if (ctx->r6 == ctx->r1) {
        // 0x151355D8: lw          $t1, 0x0($a1)
        ctx->r9 = MEM_W(ctx->r5, 0X0);
            goto L_15135618;
    }
    goto skip_0;
    // 0x151355D8: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x151355DC: b           L_1513564C
    // 0x151355E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1513564C;
    // 0x151355E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_151355E4:
    // 0x151355E4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x151355E8: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x151355EC: beq         $t7, $t8, L_15135604
    if (ctx->r15 == ctx->r24) {
        // 0x151355F0: nop
    
            goto L_15135604;
    }
    // 0x151355F0: nop

    // 0x151355F4: lbu         $t9, 0x4($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X4);
    // 0x151355F8: lbu         $t0, 0x18($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X18);
    // 0x151355FC: bnel        $t9, $t0, L_1513564C
    if (ctx->r25 != ctx->r8) {
        // 0x15135600: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1513564C;
    }
    goto skip_1;
    // 0x15135600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_15135604:
    // 0x15135604: jal         0x1516972C
    // 0x15135608: nop

    func_1516972C(rdram, ctx);
        goto after_0;
    // 0x15135608: nop

    after_0:
    // 0x1513560C: b           L_1513564C
    // 0x15135610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_1513564C;
    // 0x15135610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15135614: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
L_15135618:
    // 0x15135618: lw          $t2, 0x1C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X1C);
    // 0x1513561C: beql        $t1, $t2, L_15135638
    if (ctx->r9 == ctx->r10) {
        // 0x15135620: lw          $t5, 0x10($a0)
        ctx->r13 = MEM_W(ctx->r4, 0X10);
            goto L_15135638;
    }
    goto skip_2;
    // 0x15135620: lw          $t5, 0x10($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X10);
    skip_2:
    // 0x15135624: lbu         $t3, 0x4($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X4);
    // 0x15135628: lbu         $t4, 0x18($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X18);
    // 0x1513562C: bnel        $t3, $t4, L_1513564C
    if (ctx->r11 != ctx->r12) {
        // 0x15135630: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_1513564C;
    }
    goto skip_3;
    // 0x15135630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x15135634: lw          $t5, 0x10($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X10);
L_15135638:
    // 0x15135638: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1513563C: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x15135640: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x15135644: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x15135648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_1513564C:
    // 0x1513564C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15135650: jr          $ra
    // 0x15135654: nop

    return;
    return;
    // 0x15135654: nop

;}
RECOMP_FUNC void func_15195A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15195A84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15195A88: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x15195A8C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x15195A90: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15195A94: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15195A98: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15195A9C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15195AA0: jr          $ra
    // 0x15195AA4: nop

    return;
    return;
    // 0x15195AA4: nop

;}
RECOMP_FUNC void func_1519F3B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519F3B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1519F3BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1519F3C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x1519F3C4: jal         0x1519F1C8
    // 0x1519F3C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_1519F1C8(rdram, ctx);
        goto after_0;
    // 0x1519F3C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x1519F3CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x1519F3D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x1519F3D4: addiu       $v1, $a0, 0x58
    ctx->r3 = ADD32(ctx->r4, 0X58);
    // 0x1519F3D8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x1519F3DC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x1519F3E0: jal         0x1519F1C8
    // 0x1519F3E4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_1519F1C8(rdram, ctx);
        goto after_1;
    // 0x1519F3E4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x1519F3E8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x1519F3EC: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x1519F3F0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x1519F3F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1519F3F8: jr          $ra
    // 0x1519F3FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    return;
    // 0x1519F3FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_151749F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151749F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151749FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15174A00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15174A04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15174A08: jal         0x15165F70
    // 0x15174A0C: nop

    func_15165F70(rdram, ctx);
        goto after_0;
    // 0x15174A0C: nop

    after_0:
    // 0x15174A10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x15174A14: addiu       $v0, $v0, 0xE00
    ctx->r2 = ADD32(ctx->r2, 0XE00);
    // 0x15174A18: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x15174A1C: jal         0x15195FF0
    // 0x15174A20: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    func_15195FF0(rdram, ctx);
        goto after_1;
    // 0x15174A20: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    after_1:
    // 0x15174A24: jal         0x1510C8A8
    // 0x15174A28: nop

    func_1510C8A8(rdram, ctx);
        goto after_2;
    // 0x15174A28: nop

    after_2:
    // 0x15174A2C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x15174A30: lw          $t6, 0xDF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0XDF0);
    // 0x15174A34: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x15174A38: lbu         $v0, 0xB($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0XB);
    // 0x15174A3C: beq         $v0, $zero, L_15174A58
    if (ctx->r2 == 0) {
        // 0x15174A40: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_15174A58;
    }
    // 0x15174A40: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15174A44: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x15174A48: lw          $t9, -0x32FC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X32FC);
    // 0x15174A4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x15174A50: jalr        $t9
    // 0x15174A54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x15174A54: nop

    after_3:
L_15174A58:
    // 0x15174A58: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x15174A5C: lbu         $t8, -0x19EA($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X19EA);
    // 0x15174A60: bne         $t8, $zero, L_15174A78
    if (ctx->r24 != 0) {
        // 0x15174A64: nop
    
            goto L_15174A78;
    }
    // 0x15174A64: nop

    // 0x15174A68: jal         0x1517DE5C
    // 0x15174A6C: nop

    func_1517DE5C(rdram, ctx);
        goto after_4;
    // 0x15174A6C: nop

    after_4:
    // 0x15174A70: jal         0x151880C0
    // 0x15174A74: nop

    func_151880C0(rdram, ctx);
        goto after_5;
    // 0x15174A74: nop

    after_5:
L_15174A78:
    // 0x15174A78: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15174A7C: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x15174A80: lw          $t1, -0x161C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X161C);
    // 0x15174A84: addiu       $v0, $v0, -0x42B2
    ctx->r2 = ADD32(ctx->r2, -0X42B2);
    // 0x15174A88: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x15174A8C: sll         $t2, $t1, 6
    ctx->r10 = S32(ctx->r9 << 6);
    // 0x15174A90: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x15174A94: sh          $t3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r11;
    // 0x15174A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15174A9C: jr          $ra
    // 0x15174AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15174AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151065EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151065EC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x151065F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151065F4: nop

    // 0x151065F8: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x151065FC: nop

    // 0x15106600: mul.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x15106604: nop

    // 0x15106608: jr          $ra
    // 0x1510660C: nop

    return;
    return;
    // 0x1510660C: nop

;}
RECOMP_FUNC void func_1516A7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516A7B0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x1516A7B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1516A7B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1516A7BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1516A7C0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1516A7C4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1516A7C8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x1516A7CC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x1516A7D0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x1516A7D4: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x1516A7D8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1516A7DC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1516A7E0: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    // 0x1516A7E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1516A7E8: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x1516A7EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x1516A7F0: jal         0x15167A68
    // 0x1516A7F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1516A7F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x1516A7F8: beq         $v0, $zero, L_1516AA54
    if (ctx->r2 == 0) {
        // 0x1516A7FC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_1516AA54;
    }
    // 0x1516A7FC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x1516A800: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x1516A804: bne         $v1, $zero, L_1516A844
    if (ctx->r3 != 0) {
        // 0x1516A808: or          $s2, $v1, $zero
        ctx->r18 = ctx->r3 | 0;
            goto L_1516A844;
    }
    // 0x1516A808: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x1516A80C: sltiu       $at, $s0, 0x100
    ctx->r1 = ctx->r16 < 0X100 ? 1 : 0;
    // 0x1516A810: bne         $at, $zero, L_1516A830
    if (ctx->r1 != 0) {
        // 0x1516A814: lui         $t1, 0x800E
        ctx->r9 = S32(0X800E << 16);
            goto L_1516A830;
    }
    // 0x1516A814: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x1516A818: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1516A81C: lw          $t8, -0x2DA8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2DA8);
    // 0x1516A820: sll         $t9, $s0, 3
    ctx->r25 = S32(ctx->r16 << 3);
    // 0x1516A824: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x1516A828: b           L_1516A844
    // 0x1516A82C: lw          $s2, -0x800($t0)
    ctx->r18 = MEM_W(ctx->r8, -0X800);
        goto L_1516A844;
    // 0x1516A82C: lw          $s2, -0x800($t0)
    ctx->r18 = MEM_W(ctx->r8, -0X800);
L_1516A830:
    // 0x1516A830: lw          $t1, -0x2DAC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2DAC);
    // 0x1516A834: sll         $t2, $s0, 3
    ctx->r10 = S32(ctx->r16 << 3);
    // 0x1516A838: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x1516A83C: b           L_1516A844
    // 0x1516A840: lw          $s2, 0x0($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X0);
        goto L_1516A844;
    // 0x1516A840: lw          $s2, 0x0($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X0);
L_1516A844:
    // 0x1516A844: beq         $v1, $zero, L_1516A858
    if (ctx->r3 == 0) {
        // 0x1516A848: sltiu       $at, $s0, 0x100
        ctx->r1 = ctx->r16 < 0X100 ? 1 : 0;
            goto L_1516A858;
    }
    // 0x1516A848: sltiu       $at, $s0, 0x100
    ctx->r1 = ctx->r16 < 0X100 ? 1 : 0;
    // 0x1516A84C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x1516A850: b           L_1516A86C
    // 0x1516A854: sb          $t4, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r12;
        goto L_1516A86C;
    // 0x1516A854: sb          $t4, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r12;
L_1516A858:
    // 0x1516A858: bne         $at, $zero, L_1516A868
    if (ctx->r1 != 0) {
        // 0x1516A85C: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_1516A868;
    }
    // 0x1516A85C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1516A860: b           L_1516A86C
    // 0x1516A864: sb          $t5, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r13;
        goto L_1516A86C;
    // 0x1516A864: sb          $t5, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r13;
L_1516A868:
    // 0x1516A868: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_1516A86C:
    // 0x1516A86C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x1516A870: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x1516A874: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1516A878: sb          $t6, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r14;
    // 0x1516A87C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x1516A880: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x1516A884: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x1516A888: sb          $t7, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r15;
    // 0x1516A88C: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x1516A890: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1516A894: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1516A898: sw          $t8, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r24;
    // 0x1516A89C: sb          $t0, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r8;
    // 0x1516A8A0: sw          $s2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r18;
    // 0x1516A8A4: sb          $t1, 0x15($v0)
    MEM_B(0X15, ctx->r2) = ctx->r9;
    // 0x1516A8A8: beq         $v1, $zero, L_1516A8C0
    if (ctx->r3 == 0) {
        // 0x1516A8AC: sb          $zero, 0x1F($v0)
        MEM_B(0X1F, ctx->r2) = 0;
            goto L_1516A8C0;
    }
    // 0x1516A8AC: sb          $zero, 0x1F($v0)
    MEM_B(0X1F, ctx->r2) = 0;
    // 0x1516A8B0: sb          $t2, 0x14($v0)
    MEM_B(0X14, ctx->r2) = ctx->r10;
    // 0x1516A8B4: lhu         $t3, 0x26($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X26);
    // 0x1516A8B8: b           L_1516A8D0
    // 0x1516A8BC: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
        goto L_1516A8D0;
    // 0x1516A8BC: sh          $t3, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r11;
L_1516A8C0:
    // 0x1516A8C0: sb          $zero, 0x14($v0)
    MEM_B(0X14, ctx->r2) = 0;
    // 0x1516A8C4: lhu         $t4, 0x26($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X26);
    // 0x1516A8C8: sra         $t5, $t4, 1
    ctx->r13 = S32(SIGNED(ctx->r12) >> 1);
    // 0x1516A8CC: sh          $t5, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r13;
L_1516A8D0:
    // 0x1516A8D0: lbu         $t6, 0xD($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XD);
    // 0x1516A8D4: sh          $zero, 0x18($v0)
    MEM_H(0X18, ctx->r2) = 0;
    // 0x1516A8D8: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
    // 0x1516A8DC: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x1516A8E0: swc1        $f0, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f0.u32l;
    // 0x1516A8E4: bne         $t6, $at, L_1516A8F8
    if (ctx->r14 != ctx->r1) {
        // 0x1516A8E8: swc1        $f0, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->f0.u32l;
            goto L_1516A8F8;
    }
    // 0x1516A8E8: swc1        $f0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f0.u32l;
    // 0x1516A8EC: jal         0x1516A770
    // 0x1516A8F0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_1516A770(rdram, ctx);
        goto after_1;
    // 0x1516A8F0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_1:
    // 0x1516A8F4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_1516A8F8:
    // 0x1516A8F8: lbu         $t7, 0x8($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X8);
    // 0x1516A8FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1516A900: blez        $t7, L_1516A98C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x1516A904: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_1516A98C;
    }
    // 0x1516A904: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_1516A908:
    // 0x1516A908: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1516A90C: jal         0x1516C878
    // 0x1516A910: lbu         $a2, 0xD($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0XD);
    func_1516C878(rdram, ctx);
        goto after_2;
    // 0x1516A910: lbu         $a2, 0xD($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0XD);
    after_2:
    // 0x1516A914: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1516A918: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x1516A91C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x1516A920: jal         0x150428D4
    // 0x1516A924: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_150428D4(rdram, ctx);
        goto after_3;
    // 0x1516A924: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x1516A928: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x1516A92C: lwc1        $f6, 0x38($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X38);
    // 0x1516A930: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x1516A934: nop

    // 0x1516A938: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1516A93C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x1516A940: nop

    // 0x1516A944: bc1fl       L_1516A954
    if (!c1cs) {
        // 0x1516A948: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_1516A954;
    }
    goto skip_0;
    // 0x1516A948: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x1516A94C: swc1        $f0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f0.u32l;
    // 0x1516A950: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_1516A954:
    // 0x1516A954: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1516A958: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x1516A95C: nop

    // 0x1516A960: cvt.s.w     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    ctx->f0.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1516A964: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x1516A968: nop

    // 0x1516A96C: bc1fl       L_1516A97C
    if (!c1cs) {
        // 0x1516A970: lbu         $t0, 0x8($s2)
        ctx->r8 = MEM_BU(ctx->r18, 0X8);
            goto L_1516A97C;
    }
    goto skip_1;
    // 0x1516A970: lbu         $t0, 0x8($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X8);
    skip_1:
    // 0x1516A974: swc1        $f0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f0.u32l;
    // 0x1516A978: lbu         $t0, 0x8($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X8);
L_1516A97C:
    // 0x1516A97C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1516A980: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x1516A984: bnel        $at, $zero, L_1516A908
    if (ctx->r1 != 0) {
        // 0x1516A988: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_1516A908;
    }
    goto skip_2;
    // 0x1516A988: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_2:
L_1516A98C:
    // 0x1516A98C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x1516A990: lwc1        $f2, 0x38($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X38);
    // 0x1516A994: lwc1        $f12, 0x3C($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x1516A998: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x1516A99C: beq         $t2, $zero, L_1516A9B4
    if (ctx->r10 == 0) {
        // 0x1516A9A0: lui         $at, 0x4190
        ctx->r1 = S32(0X4190 << 16);
            goto L_1516A9B4;
    }
    // 0x1516A9A0: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x1516A9A4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x1516A9A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1516A9AC: b           L_1516A9C0
    // 0x1516A9B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
        goto L_1516A9C0;
    // 0x1516A9B0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_1516A9B4:
    // 0x1516A9B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1516A9B8: nop

    // 0x1516A9BC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_1516A9C0:
    // 0x1516A9C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x1516A9C4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516A9C8: lwc1        $f6, 0x6CD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6CD0);
    // 0x1516A9CC: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1516A9D0: add.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x1516A9D4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1516A9D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x1516A9DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1516A9E0: lbu         $a2, 0xD($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0XD);
    // 0x1516A9E4: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x1516A9E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1516A9EC: swc1        $f8, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f8.u32l;
    // 0x1516A9F0: lwc1        $f16, 0x6CD4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6CD4);
    // 0x1516A9F4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1516A9F8: jal         0x1516C878
    // 0x1516A9FC: swc1        $f18, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f18.u32l;
    func_1516C878(rdram, ctx);
        goto after_4;
    // 0x1516A9FC: swc1        $f18, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f18.u32l;
    after_4:
    // 0x1516AA00: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x1516AA04: sb          $zero, 0x20($s1)
    MEM_B(0X20, ctx->r17) = 0;
    // 0x1516AA08: lbu         $t6, 0x9($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X9);
    // 0x1516AA0C: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x1516AA10: addiu       $at, $zero, -0x7001
    ctx->r1 = ADD32(0, -0X7001);
    // 0x1516AA14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1516AA18: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1516AA1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1516AA20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x1516AA24: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1516AA28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1516AA2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1516AA30: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x1516AA34: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x1516AA38: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1516AA3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1516AA40: sw          $t4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r12;
    // 0x1516AA44: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x1516AA48: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x1516AA4C: sb          $t5, -0x3B4D($at)
    MEM_B(-0X3B4D, ctx->r1) = ctx->r13;
    // 0x1516AA50: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
L_1516AA54:
    // 0x1516AA54: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x1516AA58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1516AA5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1516AA60: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1516AA64: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1516AA68: jr          $ra
    // 0x1516AA6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    return;
    // 0x1516AA6C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_1001DA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1001DA28: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x1001DA2C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x1001DA30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1001DA34: lui         $t6, 0x8003
    ctx->r14 = S32(0X8003 << 16);
    // 0x1001DA38: lw          $t6, -0x45BC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X45BC);
    // 0x1001DA3C: lw          $t7, 0x44($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X44);
    // 0x1001DA40: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x1001DA44: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x1001DA48: lui         $t0, 0x1002
    ctx->r8 = S32(0X1002 << 16);
    // 0x1001DA4C: addiu       $t0, $t0, -0x1AD0
    ctx->r8 = ADD32(ctx->r8, -0X1AD0);
    // 0x1001DA50: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x1001DA54: bne         $t9, $t0, L_1001DA88
    if (ctx->r25 != ctx->r8) {
        // 0x1001DA58: nop
    
            goto L_1001DA88;
    }
    // 0x1001DA58: nop

    // 0x1001DA5C: lui         $t1, 0x8003
    ctx->r9 = S32(0X8003 << 16);
    // 0x1001DA60: lw          $t1, -0x45BC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X45BC);
    // 0x1001DA64: sll         $t3, $a0, 4
    ctx->r11 = S32(ctx->r4 << 4);
    // 0x1001DA68: addu        $t3, $t3, $a0
    ctx->r11 = ADD32(ctx->r11, ctx->r4);
    // 0x1001DA6C: lw          $t2, 0x48($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X48);
    // 0x1001DA70: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1001DA74: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x1001DA78: b           L_1001DA98
    // 0x1001DA7C: lw          $v0, 0x40($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X40);
        goto L_1001DA98;
    // 0x1001DA7C: lw          $v0, 0x40($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X40);
    // 0x1001DA80: b           L_1001DA90
    // 0x1001DA84: nop

        goto L_1001DA90;
    // 0x1001DA84: nop

L_1001DA88:
    // 0x1001DA88: b           L_1001DA98
    // 0x1001DA8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1001DA98;
    // 0x1001DA8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1001DA90:
    // 0x1001DA90: b           L_1001DA98
    // 0x1001DA94: nop

        goto L_1001DA98;
    // 0x1001DA94: nop

L_1001DA98:
    // 0x1001DA98: jr          $ra
    // 0x1001DA9C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1001DA9C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_150124A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150124A0: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x150124A4: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x150124A8: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x150124AC: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x150124B0: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x150124B4: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x150124B8: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x150124BC: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x150124C0: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x150124C4: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x150124C8: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x150124CC: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x150124D0: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x150124D4: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x150124D8: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x150124DC: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x150124E0: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x150124E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150124E8: lwc1        $f30, 0x6570($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X6570);
    // 0x150124EC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x150124F0: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x150124F4: addiu       $v1, $v1, -0x35D0
    ctx->r3 = ADD32(ctx->r3, -0X35D0);
    // 0x150124F8: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x150124FC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x15012500: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x15012504: addiu       $s4, $s4, -0x6E0
    ctx->r20 = ADD32(ctx->r20, -0X6E0);
    // 0x15012508: sw          $v1, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r3;
    // 0x1501250C: addiu       $fp, $sp, 0xE0
    ctx->r30 = ADD32(ctx->r29, 0XE0);
    // 0x15012510: addiu       $s7, $sp, 0xDC
    ctx->r23 = ADD32(ctx->r29, 0XDC);
    // 0x15012514: addiu       $s6, $sp, 0xD8
    ctx->r22 = ADD32(ctx->r29, 0XD8);
    // 0x15012518: addiu       $s5, $zero, 0xD
    ctx->r21 = ADD32(0, 0XD);
L_1501251C:
    // 0x1501251C: lw          $v1, 0xB0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB0);
    // 0x15012520: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x15012524: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_15012528:
    // 0x15012528: jal         0x150ADA20
    // 0x1501252C: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1501252C: nop

    after_0:
    // 0x15012530: divu        $zero, $v0, $s5
    lo = S32(U32(ctx->r2) / U32(ctx->r21)); hi = S32(U32(ctx->r2) % U32(ctx->r21));
    // 0x15012534: lbu         $t7, 0xC($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0XC);
    // 0x15012538: mfhi        $t6
    ctx->r14 = hi;
    // 0x1501253C: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x15012540: addiu       $s1, $s1, -0x86
    ctx->r17 = ADD32(ctx->r17, -0X86);
    // 0x15012544: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x15012548: bne         $s5, $zero, L_15012554
    if (ctx->r21 != 0) {
        // 0x1501254C: nop
    
            goto L_15012554;
    }
    // 0x1501254C: nop

    // 0x15012550: break       7
    do_break(352396624);
L_15012554:
    // 0x15012554: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    // 0x15012558: jal         0x150ADA20
    // 0x1501255C: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1501255C: nop

    after_1:
    // 0x15012560: andi        $s2, $v0, 0xF
    ctx->r18 = ctx->r2 & 0XF;
    // 0x15012564: addiu       $s2, $s2, -0xA
    ctx->r18 = ADD32(ctx->r18, -0XA);
    // 0x15012568: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x1501256C: sll         $t0, $s2, 16
    ctx->r8 = S32(ctx->r18 << 16);
    // 0x15012570: andi        $t2, $a0, 0xFF
    ctx->r10 = ctx->r4 & 0XFF;
    // 0x15012574: sra         $s2, $t0, 16
    ctx->r18 = S32(SIGNED(ctx->r8) >> 16);
    // 0x15012578: jal         0x151423D8
    // 0x1501257C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_151423D8(rdram, ctx);
        goto after_2;
    // 0x1501257C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_2:
    // 0x15012580: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x15012584: jal         0x151423D8
    // 0x15012588: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x15012588: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_3:
    // 0x1501258C: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x15012590: andi        $t3, $a0, 0xFF
    ctx->r11 = ctx->r4 & 0XFF;
    // 0x15012594: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x15012598: jal         0x151423D8
    // 0x1501259C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x1501259C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_4:
    // 0x150125A0: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x150125A4: jal         0x151423D8
    // 0x150125A8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x150125A8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_5:
    // 0x150125AC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x150125B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150125B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150125B8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x150125BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150125C0: mul.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x150125C4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x150125C8: mov.s       $f14, $f28
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 28);
    ctx->f14.fl = ctx->f28.fl;
    // 0x150125CC: mul.s       $f16, $f16, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f26.fl);
    // 0x150125D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150125D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150125D8: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x150125DC: mul.s       $f18, $f2, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x150125E0: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x150125E4: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x150125E8: mul.s       $f10, $f2, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x150125EC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x150125F0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150125F4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150125F8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x150125FC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x15012600: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x15012604: jal         0x150AC9C0
    // 0x15012608: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_150AC9C0(rdram, ctx);
        goto after_6;
    // 0x15012608: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x1501260C: bne         $v0, $zero, L_15012624
    if (ctx->r2 != 0) {
        // 0x15012610: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_15012624;
    }
    // 0x15012610: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x15012614: swc1        $f20, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f20.u32l;
    // 0x15012618: swc1        $f20, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f20.u32l;
    // 0x1501261C: b           L_15012650
    // 0x15012620: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
        goto L_15012650;
    // 0x15012620: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
L_15012624:
    // 0x15012624: lwc1        $f18, 0xD8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x15012628: lwc1        $f6, 0xDC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1501262C: mul.s       $f4, $f18, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x15012630: sub.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f28.fl;
    // 0x15012634: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x15012638: mul.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f30.fl);
    // 0x1501263C: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x15012640: mul.s       $f4, $f18, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x15012644: add.s       $f16, $f10, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x15012648: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x1501264C: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
L_15012650:
    // 0x15012650: addiu       $at, $zero, 0xA0
    ctx->r1 = ADD32(0, 0XA0);
    // 0x15012654: bne         $s3, $at, L_15012528
    if (ctx->r19 != ctx->r1) {
        // 0x15012658: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_15012528;
    }
    // 0x15012658: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x1501265C: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    // 0x15012660: lui         $t6, 0x800E
    ctx->r14 = S32(0X800E << 16);
    // 0x15012664: addiu       $t6, $t6, -0x33F0
    ctx->r14 = ADD32(ctx->r14, -0X33F0);
    // 0x15012668: addiu       $t5, $t4, 0xA0
    ctx->r13 = ADD32(ctx->r12, 0XA0);
    // 0x1501266C: sw          $t5, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r13;
    // 0x15012670: bne         $t5, $t6, L_1501251C
    if (ctx->r13 != ctx->r14) {
        // 0x15012674: addiu       $s4, $s4, 0x10
        ctx->r20 = ADD32(ctx->r20, 0X10);
            goto L_1501251C;
    }
    // 0x15012674: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x15012678: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x1501267C: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x15012680: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x15012684: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x15012688: sh          $t7, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r15;
    // 0x1501268C: sh          $t8, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r24;
    // 0x15012690: sh          $zero, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = 0;
    // 0x15012694: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x15012698: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1501269C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x150126A0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x150126A4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x150126A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150126AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150126B0: jal         0x151491F4
    // 0x150126B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_7;
    // 0x150126B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_7:
    // 0x150126B8: beq         $v0, $zero, L_150126CC
    if (ctx->r2 == 0) {
        // 0x150126BC: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_150126CC;
    }
    // 0x150126BC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x150126C0: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x150126C4: jal         0x10022EC0
    // 0x150126C8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x150126C8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_8:
L_150126CC:
    // 0x150126CC: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x150126D0: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x150126D4: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x150126D8: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x150126DC: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x150126E0: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x150126E4: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x150126E8: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x150126EC: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x150126F0: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x150126F4: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x150126F8: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x150126FC: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x15012700: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x15012704: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x15012708: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x1501270C: jr          $ra
    // 0x15012710: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    return;
    // 0x15012710: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    // 0x15012714: nop

    // 0x15012718: nop

    // 0x1501271C: nop

;}
RECOMP_FUNC void func_1514EE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514EE70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1514EE74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1514EE78: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x1514EE7C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x1514EE80: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x1514EE84: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x1514EE88: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x1514EE8C: lbu         $t7, 0x3B($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X3B);
    // 0x1514EE90: sb          $zero, 0x25($sp)
    MEM_B(0X25, ctx->r29) = 0;
    // 0x1514EE94: sh          $t8, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r24;
    // 0x1514EE98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1514EE9C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1514EEA0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1514EEA4: jal         0x1515BE50
    // 0x1514EEA8: sb          $t7, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r15;
    func_1515BE50(rdram, ctx);
        goto after_0;
    // 0x1514EEA8: sb          $t7, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r15;
    after_0:
    // 0x1514EEAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1514EEB0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1514EEB4: jal         0x1514EC1C
    // 0x1514EEB8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_1514EC1C(rdram, ctx);
        goto after_1;
    // 0x1514EEB8: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_1:
    // 0x1514EEBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1514EEC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1514EEC4: jr          $ra
    // 0x1514EEC8: nop

    return;
    return;
    // 0x1514EEC8: nop

;}
RECOMP_FUNC void func_150169A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150169A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x150169A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150169A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x150169AC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x150169B0: jal         0x15004F30
    // 0x150169B4: nop

    func_15004F30(rdram, ctx);
        goto after_0;
    // 0x150169B4: nop

    after_0:
    // 0x150169B8: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x150169BC: addiu       $t6, $a2, -0x1A
    ctx->r14 = ADD32(ctx->r6, -0X1A);
    // 0x150169C0: sltiu       $at, $t6, 0x26
    ctx->r1 = ctx->r14 < 0X26 ? 1 : 0;
    // 0x150169C4: beq         $at, $zero, L_150169F8
    if (ctx->r1 == 0) {
        // 0x150169C8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_150169F8;
    }
    // 0x150169C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150169CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150169D0: addu        $at, $at, $t6
    gpr jr_addend_150169D8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x150169D4: lw          $t6, 0x6760($at)
    ctx->r14 = ADD32(ctx->r1, 0X6760);
    // 0x150169D8: jr          $t6
    // 0x150169DC: nop

    switch (jr_addend_150169D8 >> 2) {
        case 0: goto L_150169E0; break;
        case 1: goto L_150169F8; break;
        case 2: goto L_150169F8; break;
        case 3: goto L_150169F8; break;
        case 4: goto L_150169F8; break;
        case 5: goto L_150169F8; break;
        case 6: goto L_150169F8; break;
        case 7: goto L_150169F8; break;
        case 8: goto L_150169F8; break;
        case 9: goto L_150169F8; break;
        case 10: goto L_150169E0; break;
        case 11: goto L_150169F8; break;
        case 12: goto L_150169F8; break;
        case 13: goto L_150169F8; break;
        case 14: goto L_150169F8; break;
        case 15: goto L_150169F8; break;
        case 16: goto L_150169F8; break;
        case 17: goto L_150169E0; break;
        case 18: goto L_150169F8; break;
        case 19: goto L_150169E0; break;
        case 20: goto L_150169F8; break;
        case 21: goto L_150169F8; break;
        case 22: goto L_150169E0; break;
        case 23: goto L_150169F8; break;
        case 24: goto L_150169F8; break;
        case 25: goto L_150169E0; break;
        case 26: goto L_150169E0; break;
        case 27: goto L_150169F8; break;
        case 28: goto L_150169F8; break;
        case 29: goto L_150169F8; break;
        case 30: goto L_150169F8; break;
        case 31: goto L_150169F8; break;
        case 32: goto L_150169F8; break;
        case 33: goto L_150169F8; break;
        case 34: goto L_150169F8; break;
        case 35: goto L_150169F8; break;
        case 36: goto L_150169F8; break;
        case 37: goto L_150169E0; break;
        default: switch_error(__func__, 0x150169D8, 0x80096760);
    }
    // 0x150169DC: nop

L_150169E0:
    // 0x150169E0: lui         $t7, 0x1A
    ctx->r15 = S32(0X1A << 16);
    // 0x150169E4: addiu       $t7, $t7, 0x34E0
    ctx->r15 = ADD32(ctx->r15, 0X34E0);
    // 0x150169E8: lui         $s0, 0x1A
    ctx->r16 = S32(0X1A << 16);
    // 0x150169EC: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x150169F0: b           L_15016A0C
    // 0x150169F4: addiu       $s0, $s0, 0x37E0
    ctx->r16 = ADD32(ctx->r16, 0X37E0);
        goto L_15016A0C;
    // 0x150169F4: addiu       $s0, $s0, 0x37E0
    ctx->r16 = ADD32(ctx->r16, 0X37E0);
L_150169F8:
    // 0x150169F8: lui         $t8, 0x1A
    ctx->r24 = S32(0X1A << 16);
    // 0x150169FC: addiu       $t8, $t8, 0x33F0
    ctx->r24 = ADD32(ctx->r24, 0X33F0);
    // 0x15016A00: lui         $s0, 0x1A
    ctx->r16 = S32(0X1A << 16);
    // 0x15016A04: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x15016A08: addiu       $s0, $s0, 0x34E0
    ctx->r16 = ADD32(ctx->r16, 0X34E0);
L_15016A0C:
    // 0x15016A0C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x15016A10: jal         0x1502B9B4
    // 0x15016A14: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_1502B9B4(rdram, ctx);
        goto after_1;
    // 0x15016A14: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_1:
    // 0x15016A18: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x15016A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15016A20: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15016A24: subu        $v1, $s0, $t9
    ctx->r3 = SUB32(ctx->r16, ctx->r25);
    // 0x15016A28: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x15016A2C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x15016A30: jal         0x10003C40
    // 0x15016A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_2;
    // 0x15016A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x15016A38: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x15016A3C: addiu       $s0, $s0, 0x20FC
    ctx->r16 = ADD32(ctx->r16, 0X20FC);
    // 0x15016A40: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x15016A44: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x15016A48: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x15016A4C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x15016A50: jal         0x10004514
    // 0x15016A54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_10004514(rdram, ctx);
        goto after_3;
    // 0x15016A54: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x15016A58: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x15016A5C: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x15016A60: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016A64: divu        $zero, $t6, $v1
    lo = S32(U32(ctx->r14) / U32(ctx->r3)); hi = S32(U32(ctx->r14) % U32(ctx->r3));
    // 0x15016A68: mflo        $t7
    ctx->r15 = lo;
    // 0x15016A6C: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x15016A70: sb          $t7, 0x2100($at)
    MEM_B(0X2100, ctx->r1) = ctx->r15;
    // 0x15016A74: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x15016A78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016A7C: sb          $v0, 0x2101($at)
    MEM_B(0X2101, ctx->r1) = ctx->r2;
    // 0x15016A80: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016A84: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x15016A88: bne         $v1, $zero, L_15016A94
    if (ctx->r3 != 0) {
        // 0x15016A8C: nop
    
            goto L_15016A94;
    }
    // 0x15016A8C: nop

    // 0x15016A90: break       7
    do_break(352414352);
L_15016A94:
    // 0x15016A94: mflo        $t8
    ctx->r24 = lo;
    // 0x15016A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15016A9C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x15016AA0: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    // 0x15016AA4: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x15016AA8: jal         0x1502B8E0
    // 0x15016AAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_1502B8E0(rdram, ctx);
        goto after_4;
    // 0x15016AAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_4:
    // 0x15016AB0: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x15016AB4: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x15016AB8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x15016ABC: addiu       $v1, $v1, 0x2100
    ctx->r3 = ADD32(ctx->r3, 0X2100);
    // 0x15016AC0: lbu         $t7, 0x0($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X0);
    // 0x15016AC4: mflo        $t8
    ctx->r24 = lo;
    // 0x15016AC8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x15016ACC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x15016AD0: jal         0x15017114
    // 0x15016AD4: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    func_15017114(rdram, ctx);
        goto after_5;
    // 0x15016AD4: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    after_5:
    // 0x15016AD8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15016ADC: lbu         $a0, 0x2100($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2100);
    // 0x15016AE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15016AE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15016AE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15016AEC: jal         0x10003C40
    // 0x15016AF0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    allocate_memory(rdram, ctx);
        goto after_6;
    // 0x15016AF0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_6:
    // 0x15016AF4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x15016AF8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016AFC: sw          $v0, 0x210C($at)
    MEM_W(0X210C, ctx->r1) = ctx->r2;
    // 0x15016B00: sll         $a0, $v1, 1
    ctx->r4 = S32(ctx->r3 << 1);
    // 0x15016B04: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15016B08: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x15016B0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15016B10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15016B14: jal         0x10003C40
    // 0x15016B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_7;
    // 0x15016B18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x15016B1C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016B20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15016B24: sw          $v0, 0x2110($at)
    MEM_W(0X2110, ctx->r1) = ctx->r2;
    // 0x15016B28: lw          $a0, 0x210C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X210C);
    // 0x15016B2C: jal         0x100226F0
    // 0x15016B30: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    bzero_recomp(rdram, ctx);
        goto after_8;
    // 0x15016B30: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    after_8:
    // 0x15016B34: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15016B38: lw          $a0, 0x2110($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2110);
    // 0x15016B3C: jal         0x100226F0
    // 0x15016B40: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    bzero_recomp(rdram, ctx);
        goto after_9;
    // 0x15016B40: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_9:
    // 0x15016B44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15016B48: sw          $zero, 0x1548($at)
    MEM_W(0X1548, ctx->r1) = 0;
    // 0x15016B4C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15016B50: lb          $t7, -0x274($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X274);
    // 0x15016B54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15016B58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15016B5C: blez        $t7, L_1501706C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15016B60: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_1501706C;
    }
    // 0x15016B60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_15016B64:
    // 0x15016B64: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15016B68: lhu         $t6, 0x2340($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X2340);
    // 0x15016B6C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x15016B70: sllv        $t9, $t8, $a2
    ctx->r25 = S32(ctx->r24 << (ctx->r6 & 31));
    // 0x15016B74: and         $t7, $t9, $t6
    ctx->r15 = ctx->r25 & ctx->r14;
    // 0x15016B78: beq         $t7, $zero, L_15017044
    if (ctx->r15 == 0) {
        // 0x15016B7C: sll         $a0, $a2, 16
        ctx->r4 = S32(ctx->r6 << 16);
            goto L_15017044;
    }
    // 0x15016B7C: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x15016B80: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x15016B84: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x15016B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15016B8C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x15016B90: jal         0x150859AC
    // 0x15016B94: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    func_150859AC(rdram, ctx);
        goto after_10;
    // 0x15016B94: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    after_10:
    // 0x15016B98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15016B9C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x15016BA0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016BA4: lwc1        $f0, 0x6800($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6800);
    // 0x15016BA8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15016BAC: lwc1        $f2, 0x6804($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6804);
    // 0x15016BB0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x15016BB4: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x15016BB8: lui         $t3, 0x8009
    ctx->r11 = S32(0X8009 << 16);
    // 0x15016BBC: sltiu       $at, $v0, 0x29
    ctx->r1 = ctx->r2 < 0X29 ? 1 : 0;
    // 0x15016BC0: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x15016BC4: addiu       $t3, $t3, -0x270
    ctx->r11 = ADD32(ctx->r11, -0X270);
    // 0x15016BC8: addiu       $t0, $t0, -0x1610
    ctx->r8 = ADD32(ctx->r8, -0X1610);
    // 0x15016BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15016BD0: addiu       $t1, $zero, 0x96
    ctx->r9 = ADD32(0, 0X96);
    // 0x15016BD4: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x15016BD8: addiu       $t4, $zero, 0x77
    ctx->r12 = ADD32(0, 0X77);
    // 0x15016BDC: addiu       $t5, $zero, 0xA8
    ctx->r13 = ADD32(0, 0XA8);
    // 0x15016BE0: addiu       $ra, $zero, 0x3
    ctx->r31 = ADD32(0, 0X3);
    // 0x15016BE4: beq         $at, $zero, L_15016F78
    if (ctx->r1 == 0) {
        // 0x15016BE8: sb          $zero, 0x2($t6)
        MEM_B(0X2, ctx->r14) = 0;
            goto L_15016F78;
    }
    // 0x15016BE8: sb          $zero, 0x2($t6)
    MEM_B(0X2, ctx->r14) = 0;
    // 0x15016BEC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x15016BF0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x15016BF4: addu        $at, $at, $t7
    gpr jr_addend_15016BFC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15016BF8: lw          $t7, 0x6808($at)
    ctx->r15 = ADD32(ctx->r1, 0X6808);
    // 0x15016BFC: jr          $t7
    // 0x15016C00: nop

    switch (jr_addend_15016BFC >> 2) {
        case 0: goto L_15016C04; break;
        case 1: goto L_15016C54; break;
        case 2: goto L_15016C68; break;
        case 3: goto L_15016C7C; break;
        case 4: goto L_15016C90; break;
        case 5: goto L_15016F78; break;
        case 6: goto L_15016F78; break;
        case 7: goto L_15016F78; break;
        case 8: goto L_15016E38; break;
        case 9: goto L_15016F10; break;
        case 10: goto L_15016EC0; break;
        case 11: goto L_15016D54; break;
        case 12: goto L_15016DD0; break;
        case 13: goto L_15016DD0; break;
        case 14: goto L_15016DD0; break;
        case 15: goto L_15016DD0; break;
        case 16: goto L_15016C44; break;
        case 17: goto L_15016DA8; break;
        case 18: goto L_15016DA8; break;
        case 19: goto L_15016DA8; break;
        case 20: goto L_15016DA8; break;
        case 21: goto L_15016DA8; break;
        case 22: goto L_15016DA8; break;
        case 23: goto L_15016DA8; break;
        case 24: goto L_15016DA8; break;
        case 25: goto L_15016DA8; break;
        case 26: goto L_15016DA8; break;
        case 27: goto L_15016DA8; break;
        case 28: goto L_15016DA8; break;
        case 29: goto L_15016DBC; break;
        case 30: goto L_15016DBC; break;
        case 31: goto L_15016DBC; break;
        case 32: goto L_15016DBC; break;
        case 33: goto L_15016D2C; break;
        case 34: goto L_15016D40; break;
        case 35: goto L_15016D68; break;
        case 36: goto L_15016D88; break;
        case 37: goto L_15016CA4; break;
        case 38: goto L_15016CD4; break;
        case 39: goto L_15016D04; break;
        case 40: goto L_15016D18; break;
        default: switch_error(__func__, 0x15016BFC, 0x80096808);
    }
    // 0x15016C00: nop

L_15016C04:
    // 0x15016C04: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x15016C08: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x15016C0C: beq         $v0, $at, L_15016C24
    if (ctx->r2 == ctx->r1) {
        // 0x15016C10: addiu       $at, $zero, 0x3A
        ctx->r1 = ADD32(0, 0X3A);
            goto L_15016C24;
    }
    // 0x15016C10: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x15016C14: beq         $v0, $at, L_15016C24
    if (ctx->r2 == ctx->r1) {
        // 0x15016C18: addiu       $at, $zero, 0x40
        ctx->r1 = ADD32(0, 0X40);
            goto L_15016C24;
    }
    // 0x15016C18: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x15016C1C: bnel        $v0, $at, L_15016C38
    if (ctx->r2 != ctx->r1) {
        // 0x15016C20: lw          $t6, 0x0($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X0);
            goto L_15016C38;
    }
    goto skip_0;
    // 0x15016C20: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    skip_0:
L_15016C24:
    // 0x15016C24: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016C28: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x15016C2C: b           L_15016F78
    // 0x15016C30: sb          $t1, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r9;
        goto L_15016F78;
    // 0x15016C30: sb          $t1, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r9;
    // 0x15016C34: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
L_15016C38:
    // 0x15016C38: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15016C3C: b           L_15016F78
    // 0x15016C40: sb          $zero, 0x4($t7)
    MEM_B(0X4, ctx->r15) = 0;
        goto L_15016F78;
    // 0x15016C40: sb          $zero, 0x4($t7)
    MEM_B(0X4, ctx->r15) = 0;
L_15016C44:
    // 0x15016C44: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016C48: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x15016C4C: b           L_15016F78
    // 0x15016C50: sb          $t1, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r9;
        goto L_15016F78;
    // 0x15016C50: sb          $t1, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r9;
L_15016C54:
    // 0x15016C54: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016C58: addiu       $t6, $zero, 0x3B
    ctx->r14 = ADD32(0, 0X3B);
    // 0x15016C5C: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x15016C60: b           L_15016F78
    // 0x15016C64: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
        goto L_15016F78;
    // 0x15016C64: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
L_15016C68:
    // 0x15016C68: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016C6C: addiu       $t9, $zero, 0x98
    ctx->r25 = ADD32(0, 0X98);
    // 0x15016C70: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x15016C74: b           L_15016F78
    // 0x15016C78: sb          $t9, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r25;
        goto L_15016F78;
    // 0x15016C78: sb          $t9, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r25;
L_15016C7C:
    // 0x15016C7C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016C80: addiu       $t8, $zero, 0x75
    ctx->r24 = ADD32(0, 0X75);
    // 0x15016C84: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x15016C88: b           L_15016F78
    // 0x15016C8C: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
        goto L_15016F78;
    // 0x15016C8C: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
L_15016C90:
    // 0x15016C90: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016C94: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x15016C98: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x15016C9C: b           L_15016F78
    // 0x15016CA0: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
        goto L_15016F78;
    // 0x15016CA0: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
L_15016CA4:
    // 0x15016CA4: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016CA8: addiu       $t9, $zero, 0xB0
    ctx->r25 = ADD32(0, 0XB0);
    // 0x15016CAC: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x15016CB0: sb          $t9, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r25;
    // 0x15016CB4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016CB8: addu        $t7, $t8, $v1
    ctx->r15 = ADD32(ctx->r24, ctx->r3);
    // 0x15016CBC: swc1        $f0, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f0.u32l;
    // 0x15016CC0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016CC4: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x15016CC8: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15016CCC: b           L_15016F78
    // 0x15016CD0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
        goto L_15016F78;
    // 0x15016CD0: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
L_15016CD4:
    // 0x15016CD4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016CD8: addiu       $t6, $zero, 0xB1
    ctx->r14 = ADD32(0, 0XB1);
    // 0x15016CDC: addu        $t7, $t8, $v1
    ctx->r15 = ADD32(ctx->r24, ctx->r3);
    // 0x15016CE0: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
    // 0x15016CE4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016CE8: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x15016CEC: swc1        $f0, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f0.u32l;
    // 0x15016CF0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016CF4: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x15016CF8: lwc1        $f6, 0x24($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X24);
    // 0x15016CFC: b           L_15016F78
    // 0x15016D00: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
        goto L_15016F78;
    // 0x15016D00: swc1        $f6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f6.u32l;
L_15016D04:
    // 0x15016D04: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016D08: addiu       $t7, $zero, 0xB2
    ctx->r15 = ADD32(0, 0XB2);
    // 0x15016D0C: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x15016D10: b           L_15016F78
    // 0x15016D14: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
        goto L_15016F78;
    // 0x15016D14: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
L_15016D18:
    // 0x15016D18: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016D1C: addiu       $t6, $zero, 0xB4
    ctx->r14 = ADD32(0, 0XB4);
    // 0x15016D20: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x15016D24: b           L_15016F78
    // 0x15016D28: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
        goto L_15016F78;
    // 0x15016D28: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
L_15016D2C:
    // 0x15016D2C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016D30: addiu       $t8, $zero, 0x9F
    ctx->r24 = ADD32(0, 0X9F);
    // 0x15016D34: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x15016D38: b           L_15016F78
    // 0x15016D3C: sb          $t8, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r24;
        goto L_15016F78;
    // 0x15016D3C: sb          $t8, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r24;
L_15016D40:
    // 0x15016D40: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016D44: addiu       $t7, $zero, 0xA0
    ctx->r15 = ADD32(0, 0XA0);
    // 0x15016D48: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x15016D4C: b           L_15016F78
    // 0x15016D50: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
        goto L_15016F78;
    // 0x15016D50: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
L_15016D54:
    // 0x15016D54: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016D58: addiu       $t6, $zero, 0x88
    ctx->r14 = ADD32(0, 0X88);
    // 0x15016D5C: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x15016D60: b           L_15016F78
    // 0x15016D64: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
        goto L_15016F78;
    // 0x15016D64: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
L_15016D68:
    // 0x15016D68: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016D6C: addiu       $t8, $zero, 0x9B
    ctx->r24 = ADD32(0, 0X9B);
    // 0x15016D70: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x15016D74: sb          $t8, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r24;
    // 0x15016D78: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016D7C: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x15016D80: b           L_15016F78
    // 0x15016D84: sb          $t2, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r10;
        goto L_15016F78;
    // 0x15016D84: sb          $t2, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r10;
L_15016D88:
    // 0x15016D88: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016D8C: addiu       $t8, $zero, 0x9A
    ctx->r24 = ADD32(0, 0X9A);
    // 0x15016D90: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15016D94: sb          $t8, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r24;
    // 0x15016D98: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016D9C: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x15016DA0: b           L_15016F78
    // 0x15016DA4: sb          $t2, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r10;
        goto L_15016F78;
    // 0x15016DA4: sb          $t2, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r10;
L_15016DA8:
    // 0x15016DA8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016DAC: addiu       $t8, $zero, 0x9C
    ctx->r24 = ADD32(0, 0X9C);
    // 0x15016DB0: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x15016DB4: b           L_15016F78
    // 0x15016DB8: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
        goto L_15016F78;
    // 0x15016DB8: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
L_15016DBC:
    // 0x15016DBC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016DC0: addiu       $t6, $zero, 0x9D
    ctx->r14 = ADD32(0, 0X9D);
    // 0x15016DC4: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x15016DC8: b           L_15016F78
    // 0x15016DCC: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
        goto L_15016F78;
    // 0x15016DCC: sb          $t6, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r14;
L_15016DD0:
    // 0x15016DD0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016DD4: addiu       $t9, $zero, 0x90
    ctx->r25 = ADD32(0, 0X90);
    // 0x15016DD8: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x15016DDC: sb          $t9, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r25;
    // 0x15016DE0: lb          $t8, 0x0($t3)
    ctx->r24 = MEM_B(ctx->r11, 0X0);
    // 0x15016DE4: slt         $at, $a2, $t8
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15016DE8: beql        $at, $zero, L_15016E04
    if (ctx->r1 == 0) {
        // 0x15016DEC: lw          $t8, 0x0($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X0);
            goto L_15016E04;
    }
    goto skip_1;
    // 0x15016DEC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x15016DF0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016DF4: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x15016DF8: b           L_15016E10
    // 0x15016DFC: sb          $a3, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r7;
        goto L_15016E10;
    // 0x15016DFC: sb          $a3, 0x3($t9)
    MEM_B(0X3, ctx->r25) = ctx->r7;
    // 0x15016E00: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
L_15016E04:
    // 0x15016E04: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x15016E08: addu        $t7, $t8, $v1
    ctx->r15 = ADD32(ctx->r24, ctx->r3);
    // 0x15016E0C: sb          $t6, 0x3($t7)
    MEM_B(0X3, ctx->r15) = ctx->r14;
L_15016E10:
    // 0x15016E10: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016E14: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x15016E18: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x15016E1C: lw          $t8, 0x18($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X18);
    // 0x15016E20: ori         $t6, $t8, 0x4
    ctx->r14 = ctx->r24 | 0X4;
    // 0x15016E24: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    // 0x15016E28: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016E2C: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x15016E30: b           L_15016F78
    // 0x15016E34: sb          $t7, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r15;
        goto L_15016F78;
    // 0x15016E34: sb          $t7, 0xD($t8)
    MEM_B(0XD, ctx->r24) = ctx->r15;
L_15016E38:
    // 0x15016E38: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016E3C: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x15016E40: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x15016E44: sb          $t4, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r12;
    // 0x15016E48: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016E4C: addiu       $t9, $zero, 0xAA
    ctx->r25 = ADD32(0, 0XAA);
    // 0x15016E50: addu        $t6, $t8, $v1
    ctx->r14 = ADD32(ctx->r24, ctx->r3);
    // 0x15016E54: sb          $t7, 0x3($t6)
    MEM_B(0X3, ctx->r14) = ctx->r15;
    // 0x15016E58: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016E5C: addu        $t7, $t8, $v1
    ctx->r15 = ADD32(ctx->r24, ctx->r3);
    // 0x15016E60: sb          $t9, 0x10($t7)
    MEM_B(0X10, ctx->r15) = ctx->r25;
    // 0x15016E64: lb          $t6, 0x0($t3)
    ctx->r14 = MEM_B(ctx->r11, 0X0);
    // 0x15016E68: slt         $at, $a2, $t6
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15016E6C: bnel        $at, $zero, L_15016E88
    if (ctx->r1 != 0) {
        // 0x15016E70: lw          $t7, 0x0($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X0);
            goto L_15016E88;
    }
    goto skip_2;
    // 0x15016E70: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x15016E74: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016E78: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x15016E7C: b           L_15016E90
    // 0x15016E80: sb          $ra, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r31;
        goto L_15016E90;
    // 0x15016E80: sb          $ra, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r31;
    // 0x15016E84: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_15016E88:
    // 0x15016E88: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x15016E8C: sb          $a3, 0xD($t6)
    MEM_B(0XD, ctx->r14) = ctx->r7;
L_15016E90:
    // 0x15016E90: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016E94: lui         $at, 0x18
    ctx->r1 = S32(0X18 << 16);
    // 0x15016E98: addu        $v0, $t8, $v1
    ctx->r2 = ADD32(ctx->r24, ctx->r3);
    // 0x15016E9C: lw          $t9, 0x18($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X18);
    // 0x15016EA0: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x15016EA4: sw          $t7, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r15;
    // 0x15016EA8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016EAC: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x15016EB0: lbu         $t8, 0xE($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XE);
    // 0x15016EB4: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x15016EB8: b           L_15016F78
    // 0x15016EBC: sb          $t9, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r25;
        goto L_15016F78;
    // 0x15016EBC: sb          $t9, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r25;
L_15016EC0:
    // 0x15016EC0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016EC4: addiu       $t8, $zero, 0x25
    ctx->r24 = ADD32(0, 0X25);
    // 0x15016EC8: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x15016ECC: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x15016ED0: sb          $t4, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r12;
    // 0x15016ED4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016ED8: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x15016EDC: sb          $t8, 0x3($t7)
    MEM_B(0X3, ctx->r15) = ctx->r24;
    // 0x15016EE0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016EE4: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x15016EE8: sb          $t5, 0x10($t9)
    MEM_B(0X10, ctx->r25) = ctx->r13;
    // 0x15016EEC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016EF0: addu        $t7, $t8, $v1
    ctx->r15 = ADD32(ctx->r24, ctx->r3);
    // 0x15016EF4: sb          $ra, 0xD($t7)
    MEM_B(0XD, ctx->r15) = ctx->r31;
    // 0x15016EF8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016EFC: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x15016F00: lw          $t9, 0x18($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X18);
    // 0x15016F04: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x15016F08: b           L_15016F78
    // 0x15016F0C: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
        goto L_15016F78;
    // 0x15016F0C: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
L_15016F10:
    // 0x15016F10: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016F14: addiu       $t7, $zero, 0x53
    ctx->r15 = ADD32(0, 0X53);
    // 0x15016F18: addiu       $t8, $zero, 0x1F
    ctx->r24 = ADD32(0, 0X1F);
    // 0x15016F1C: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x15016F20: sb          $t7, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r15;
    // 0x15016F24: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016F28: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15016F2C: sb          $t8, 0x3($t7)
    MEM_B(0X3, ctx->r15) = ctx->r24;
    // 0x15016F30: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016F34: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x15016F38: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x15016F3C: sb          $t5, 0x10($t6)
    MEM_B(0X10, ctx->r14) = ctx->r13;
    // 0x15016F40: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016F44: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x15016F48: sb          $t8, 0xD($t9)
    MEM_B(0XD, ctx->r25) = ctx->r24;
    // 0x15016F4C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016F50: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x15016F54: swc1        $f2, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f2.u32l;
    // 0x15016F58: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016F5C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x15016F60: swc1        $f2, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f2.u32l;
    // 0x15016F64: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15016F68: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x15016F6C: lw          $t7, 0x18($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X18);
    // 0x15016F70: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x15016F74: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
L_15016F78:
    // 0x15016F78: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x15016F7C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x15016F80: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x15016F84: beq         $v0, $at, L_15016F98
    if (ctx->r2 == ctx->r1) {
        // 0x15016F88: subu        $t8, $t8, $a2
        ctx->r24 = SUB32(ctx->r24, ctx->r6);
            goto L_15016F98;
    }
    // 0x15016F88: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15016F8C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x15016F90: bnel        $v0, $at, L_15016FB4
    if (ctx->r2 != ctx->r1) {
        // 0x15016F94: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_15016FB4;
    }
    goto skip_3;
    // 0x15016F94: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    skip_3:
L_15016F98:
    // 0x15016F98: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15016F9C: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x15016FA0: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x15016FA4: lw          $t6, 0x18($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X18);
    // 0x15016FA8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x15016FAC: sw          $t7, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r15;
    // 0x15016FB0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
L_15016FB4:
    // 0x15016FB4: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x15016FB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15016FBC: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15016FC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15016FC4: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x15016FC8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15016FCC: addiu       $t9, $t9, -0x3D30
    ctx->r25 = ADD32(ctx->r25, -0X3D30);
    // 0x15016FD0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x15016FD4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x15016FD8: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x15016FDC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15016FE0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15016FE4: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x15016FE8: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x15016FEC: nop

    // 0x15016FF0: sh          $t7, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r15;
    // 0x15016FF4: lwc1        $f16, 0x18($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15016FF8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15016FFC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15017000: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x15017004: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x15017008: nop

    // 0x1501700C: sh          $t8, 0x8($t9)
    MEM_H(0X8, ctx->r25) = ctx->r24;
    // 0x15017010: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x15017014: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x15017018: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1501701C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x15017020: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15017024: nop

    // 0x15017028: sh          $t7, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r15;
    // 0x1501702C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x15017030: lhu         $t6, 0x76($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X76);
    // 0x15017034: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x15017038: sra         $t8, $t6, 8
    ctx->r24 = S32(SIGNED(ctx->r14) >> 8);
    // 0x1501703C: b           L_15017050
    // 0x15017040: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
        goto L_15017050;
    // 0x15017040: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
L_15017044:
    // 0x15017044: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15017048: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x1501704C: sb          $a3, 0x2($t7)
    MEM_B(0X2, ctx->r15) = ctx->r7;
L_15017050:
    // 0x15017050: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x15017054: lb          $t8, -0x274($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X274);
    // 0x15017058: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x1501705C: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x15017060: slt         $at, $a2, $t8
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x15017064: bne         $at, $zero, L_15016B64
    if (ctx->r1 != 0) {
        // 0x15017068: nop
    
            goto L_15016B64;
    }
    // 0x15017068: nop

L_1501706C:
    // 0x1501706C: jal         0x15016850
    // 0x15017070: nop

    func_15016850(rdram, ctx);
        goto after_11;
    // 0x15017070: nop

    after_11:
    // 0x15017074: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15017078: lbu         $a0, 0x2100($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2100);
    // 0x1501707C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15017080: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x15017084: blezl       $a0, L_150170DC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x15017088: lw          $a0, 0x58($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X58);
            goto L_150170DC;
    }
    goto skip_4;
    // 0x15017088: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    skip_4:
L_1501708C:
    // 0x1501708C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x15017090: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x15017094: lbu         $t7, 0x28($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X28);
    // 0x15017098: bnel        $t7, $zero, L_150170CC
    if (ctx->r15 != 0) {
        // 0x1501709C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_150170CC;
    }
    goto skip_5;
    // 0x1501709C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_5:
    // 0x150170A0: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x150170A4: jal         0x15083DA0
    // 0x150170A8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_15083DA0(rdram, ctx);
        goto after_12;
    // 0x150170A8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_12:
    // 0x150170AC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x150170B0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x150170B4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x150170B8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150170BC: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x150170C0: sb          $v0, 0x28($t9)
    MEM_B(0X28, ctx->r25) = ctx->r2;
    // 0x150170C4: lbu         $a0, 0x2100($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2100);
    // 0x150170C8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_150170CC:
    // 0x150170CC: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x150170D0: bne         $at, $zero, L_1501708C
    if (ctx->r1 != 0) {
        // 0x150170D4: addiu       $v1, $v1, 0x30
        ctx->r3 = ADD32(ctx->r3, 0X30);
            goto L_1501708C;
    }
    // 0x150170D4: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x150170D8: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
L_150170DC:
    // 0x150170DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150170E0: jal         0x1508295C
    // 0x150170E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1508295C(rdram, ctx);
        goto after_13;
    // 0x150170E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x150170E8: jal         0x15172CA8
    // 0x150170EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_15172CA8(rdram, ctx);
        goto after_14;
    // 0x150170EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x150170F0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x150170F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x150170F8: jal         0x1508295C
    // 0x150170FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1508295C(rdram, ctx);
        goto after_15;
    // 0x150170FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x15017100: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15017104: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15017108: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x1501710C: jr          $ra
    // 0x15017110: nop

    return;
    return;
    // 0x15017110: nop

;}
RECOMP_FUNC void func_15016170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15016170: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x15016174: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15016178: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x1501617C: addiu       $s0, $s0, 0xD80
    ctx->r16 = ADD32(ctx->r16, 0XD80);
    // 0x15016180: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15016184: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x15016188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1501618C: jal         0x100226F0
    // 0x15016190: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x15016190: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_0:
    // 0x15016194: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x15016198: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1501619C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150161A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150161A4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x150161A8: jal         0x10012844
    // 0x150161AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x150161AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x150161B0: addiu       $t7, $zero, 0x440
    ctx->r15 = ADD32(0, 0X440);
    // 0x150161B4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x150161B8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150161BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150161C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150161C4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x150161C8: jal         0x10012844
    // 0x150161CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x150161CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x150161D0: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x150161D4: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x150161D8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150161DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150161E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150161E4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x150161E8: jal         0x10012844
    // 0x150161EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x150161EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x150161F0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x150161F4: sh          $a2, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r6;
    // 0x150161F8: lh          $v1, 0xC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XC);
    // 0x150161FC: sh          $a2, 0x96($s0)
    MEM_H(0X96, ctx->r16) = ctx->r6;
    // 0x15016200: lh          $t0, 0x96($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X96);
    // 0x15016204: addiu       $t1, $zero, 0x7FFF
    ctx->r9 = ADD32(0, 0X7FFF);
    // 0x15016208: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x1501620C: sh          $t1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r9;
    // 0x15016210: lui         $t3, 0x8003
    ctx->r11 = S32(0X8003 << 16);
    // 0x15016214: sll         $t2, $v1, 1
    ctx->r10 = S32(ctx->r3 << 1);
    // 0x15016218: sw          $v0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r2;
    // 0x1501621C: sw          $zero, 0x84($s0)
    MEM_W(0X84, ctx->r16) = 0;
    // 0x15016220: sw          $t9, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r25;
    // 0x15016224: sb          $zero, 0x9A($s0)
    MEM_B(0X9A, ctx->r16) = 0;
    // 0x15016228: sh          $zero, 0x32($s0)
    MEM_H(0X32, ctx->r16) = 0;
    // 0x1501622C: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    // 0x15016230: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15016234: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    // 0x15016238: lh          $t3, -0x43F0($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X43F0);
    // 0x1501623C: lh          $a1, 0xE($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XE);
    // 0x15016240: negu        $t6, $t2
    ctx->r14 = SUB32(0, ctx->r10);
    // 0x15016244: lui         $t7, 0x8003
    ctx->r15 = S32(0X8003 << 16);
    // 0x15016248: multu       $t3, $a1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501624C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15016250: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15016254: addiu       $t1, $zero, 0x7FFC
    ctx->r9 = ADD32(0, 0X7FFC);
    // 0x15016258: lui         $a0, 0x151F
    ctx->r4 = S32(0X151F << 16);
    // 0x1501625C: addiu       $a0, $a0, 0x3C4C
    ctx->r4 = ADD32(ctx->r4, 0X3C4C);
    // 0x15016260: mflo        $t4
    ctx->r12 = lo;
    // 0x15016264: sra         $t5, $t4, 15
    ctx->r13 = S32(SIGNED(ctx->r12) >> 15);
    // 0x15016268: sh          $t5, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r13;
    // 0x1501626C: lh          $t7, -0x42F2($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X42F2);
    // 0x15016270: sh          $t0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r8;
    // 0x15016274: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
    // 0x15016278: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1501627C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x15016280: mflo        $t8
    ctx->r24 = lo;
    // 0x15016284: sra         $t9, $t8, 15
    ctx->r25 = S32(SIGNED(ctx->r24) >> 15);
    // 0x15016288: jal         0x151F3C34
    // 0x1501628C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    func_151F3C34(rdram, ctx);
        goto after_4;
    // 0x1501628C: sh          $t9, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r25;
    after_4:
    // 0x15016290: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15016294: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15016298: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1501629C: jr          $ra
    // 0x150162A0: nop

    return;
    return;
    // 0x150162A0: nop

    // 0x150162A4: nop

    // 0x150162A8: nop

    // 0x150162AC: nop

;}
RECOMP_FUNC void func_1516C878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1516C878: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x1516C87C: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x1516C880: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x1516C884: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x1516C888: beq         $a2, $zero, L_1516C8B0
    if (ctx->r6 == 0) {
        // 0x1516C88C: lui         $t8, 0x800E
        ctx->r24 = S32(0X800E << 16);
            goto L_1516C8B0;
    }
    // 0x1516C88C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x1516C890: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1516C894: beq         $a2, $at, L_1516C8C8
    if (ctx->r6 == ctx->r1) {
        // 0x1516C898: lui         $t2, 0x800E
        ctx->r10 = S32(0X800E << 16);
            goto L_1516C8C8;
    }
    // 0x1516C898: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x1516C89C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x1516C8A0: beql        $a2, $at, L_1516C8E4
    if (ctx->r6 == ctx->r1) {
        // 0x1516C8A4: lw          $v1, 0x4($a0)
        ctx->r3 = MEM_W(ctx->r4, 0X4);
            goto L_1516C8E4;
    }
    goto skip_0;
    // 0x1516C8A4: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x1516C8A8: b           L_1516C8E4
    // 0x1516C8AC: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
        goto L_1516C8E4;
    // 0x1516C8AC: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
L_1516C8B0:
    // 0x1516C8B0: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x1516C8B4: lw          $t8, -0x2DAC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2DAC);
    // 0x1516C8B8: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x1516C8BC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x1516C8C0: b           L_1516C8E4
    // 0x1516C8C4: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
        goto L_1516C8E4;
    // 0x1516C8C4: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
L_1516C8C8:
    // 0x1516C8C8: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x1516C8CC: lw          $t2, -0x2DA8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2DA8);
    // 0x1516C8D0: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x1516C8D4: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x1516C8D8: b           L_1516C8E4
    // 0x1516C8DC: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
        goto L_1516C8E4;
    // 0x1516C8DC: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x1516C8E0: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
L_1516C8E4:
    // 0x1516C8E4: blez        $a1, L_1516C928
    if (SIGNED(ctx->r5) <= 0) {
        // 0x1516C8E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_1516C928;
    }
    // 0x1516C8E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1516C8EC: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_1516C8F0:
    // 0x1516C8F0: beq         $a0, $zero, L_1516C908
    if (ctx->r4 == 0) {
        // 0x1516C8F4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_1516C908;
    }
    // 0x1516C8F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1516C8F8: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
L_1516C8FC:
    // 0x1516C8FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1516C900: bnel        $a0, $zero, L_1516C8FC
    if (ctx->r4 != 0) {
        // 0x1516C904: lbu         $a0, 0x1($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X1);
            goto L_1516C8FC;
    }
    goto skip_1;
    // 0x1516C904: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
    skip_1:
L_1516C908:
    // 0x1516C908: bne         $a0, $zero, L_1516C920
    if (ctx->r4 != 0) {
        // 0x1516C90C: nop
    
            goto L_1516C920;
    }
    // 0x1516C90C: nop

    // 0x1516C910: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
L_1516C914:
    // 0x1516C914: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x1516C918: beql        $a0, $zero, L_1516C914
    if (ctx->r4 == 0) {
        // 0x1516C91C: lbu         $a0, 0x1($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X1);
            goto L_1516C914;
    }
    goto skip_2;
    // 0x1516C91C: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
    skip_2:
L_1516C920:
    // 0x1516C920: bne         $v0, $a1, L_1516C8F0
    if (ctx->r2 != ctx->r5) {
        // 0x1516C924: nop
    
            goto L_1516C8F0;
    }
    // 0x1516C924: nop

L_1516C928:
    // 0x1516C928: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1516C92C: jr          $ra
    // 0x1516C930: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    return;
    // 0x1516C930: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_15046C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15046C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15046C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15046C08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15046C0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x15046C10: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x15046C14: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x15046C18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15046C1C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x15046C20: jal         0x150470B0
    // 0x15046C24: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_150470B0(rdram, ctx);
        goto after_0;
    // 0x15046C24: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_0:
    // 0x15046C28: beq         $v0, $zero, L_15046C4C
    if (ctx->r2 == 0) {
        // 0x15046C2C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_15046C4C;
    }
    // 0x15046C2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15046C30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15046C34: beq         $v0, $at, L_15046C64
    if (ctx->r2 == ctx->r1) {
        // 0x15046C38: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_15046C64;
    }
    // 0x15046C38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15046C3C: beql        $v0, $at, L_15046C70
    if (ctx->r2 == ctx->r1) {
        // 0x15046C40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_15046C70;
    }
    goto skip_0;
    // 0x15046C40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x15046C44: b           L_15046C74
    // 0x15046C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15046C74;
    // 0x15046C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15046C4C:
    // 0x15046C4C: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    // 0x15046C50: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x15046C54: jal         0x150466F8
    // 0x15046C58: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_150466F8(rdram, ctx);
        goto after_1;
    // 0x15046C58: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x15046C5C: b           L_15046C74
    // 0x15046C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_15046C74;
    // 0x15046C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15046C64:
    // 0x15046C64: b           L_15046C70
    // 0x15046C68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_15046C70;
    // 0x15046C68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15046C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15046C70:
    // 0x15046C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15046C74:
    // 0x15046C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15046C78: jr          $ra
    // 0x15046C7C: nop

    return;
    return;
    // 0x15046C7C: nop

;}
RECOMP_FUNC void func_150BE494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150BE494: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x150BE498: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x150BE49C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x150BE4A0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x150BE4A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150BE4A8: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x150BE4AC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x150BE4B0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150BE4B4: sw          $a1, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r5;
    // 0x150BE4B8: beql        $s0, $zero, L_150BE838
    if (ctx->r16 == 0) {
        // 0x150BE4BC: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_150BE838;
    }
    goto skip_0;
    // 0x150BE4BC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_0:
    // 0x150BE4C0: lwc1        $f4, 0x14C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x150BE4C4: lwc1        $f6, 0x150($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X150);
    // 0x150BE4C8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150BE4CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BE4D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150BE4D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150BE4D8: addiu       $a1, $sp, 0x154
    ctx->r5 = ADD32(ctx->r29, 0X154);
    // 0x150BE4DC: addiu       $a2, $sp, 0x150
    ctx->r6 = ADD32(ctx->r29, 0X150);
    // 0x150BE4E0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150BE4E4: addiu       $a3, $sp, 0x14C
    ctx->r7 = ADD32(ctx->r29, 0X14C);
    // 0x150BE4E8: jal         0x1515C244
    // 0x150BE4EC: swc1        $f16, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f16.u32l;
    func_1515C244(rdram, ctx);
        goto after_0;
    // 0x150BE4EC: swc1        $f16, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x150BE4F0: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    // 0x150BE4F4: jal         0x1504715C
    // 0x150BE4F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_1504715C(rdram, ctx);
        goto after_1;
    // 0x150BE4F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x150BE4FC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x150BE500: sw          $t6, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r14;
    // 0x150BE504: sw          $zero, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = 0;
    // 0x150BE508: addiu       $t8, $sp, 0x154
    ctx->r24 = ADD32(ctx->r29, 0X154);
    // 0x150BE50C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x150BE510: addiu       $t7, $sp, 0xE8
    ctx->r15 = ADD32(ctx->r29, 0XE8);
    // 0x150BE514: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150BE518: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x150BE51C: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x150BE520: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x150BE524: addiu       $t3, $zero, -0x40
    ctx->r11 = ADD32(0, -0X40);
    // 0x150BE528: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x150BE52C: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x150BE530: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x150BE534: addiu       $t5, $zero, 0x4B
    ctx->r13 = ADD32(0, 0X4B);
    // 0x150BE538: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x150BE53C: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x150BE540: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150BE544: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x150BE548: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BE54C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE550: lwc1        $f6, 0x6C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6C);
    // 0x150BE554: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE558: lwc1        $f8, 0x70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X70);
    // 0x150BE55C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE560: swc1        $f18, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f18.u32l;
    // 0x150BE564: lwc1        $f18, 0x74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X74);
    // 0x150BE568: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150BE56C: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    // 0x150BE570: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150BE574: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x150BE578: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x150BE57C: lwc1        $f10, 0x148($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X148);
    // 0x150BE580: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150BE584: addiu       $t6, $zero, 0x28
    ctx->r14 = ADD32(0, 0X28);
    // 0x150BE588: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x150BE58C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150BE590: addiu       $t8, $sp, 0x124
    ctx->r24 = ADD32(ctx->r29, 0X124);
    // 0x150BE594: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150BE598: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150BE59C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150BE5A0: sh          $zero, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = 0;
    // 0x150BE5A4: sh          $t2, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = ctx->r10;
    // 0x150BE5A8: sh          $t3, 0xF8($sp)
    MEM_H(0XF8, ctx->r29) = ctx->r11;
    // 0x150BE5AC: sh          $t4, 0xFA($sp)
    MEM_H(0XFA, ctx->r29) = ctx->r12;
    // 0x150BE5B0: sh          $t5, 0x10C($sp)
    MEM_H(0X10C, ctx->r29) = ctx->r13;
    // 0x150BE5B4: sh          $t6, 0x10E($sp)
    MEM_H(0X10E, ctx->r29) = ctx->r14;
    // 0x150BE5B8: sb          $t0, 0x120($sp)
    MEM_B(0X120, ctx->r29) = ctx->r8;
    // 0x150BE5BC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x150BE5C0: addiu       $a2, $a2, 0x38
    ctx->r6 = ADD32(ctx->r6, 0X38);
    // 0x150BE5C4: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x150BE5C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150BE5CC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x150BE5D0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x150BE5D4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x150BE5D8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x150BE5DC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x150BE5E0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150BE5E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150BE5E8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150BE5EC: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    // 0x150BE5F0: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x150BE5F4: swc1        $f16, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f16.u32l;
    // 0x150BE5F8: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    // 0x150BE5FC: swc1        $f18, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f18.u32l;
    // 0x150BE600: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
    // 0x150BE604: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    // 0x150BE608: jal         0x1515080C
    // 0x150BE60C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_1515080C(rdram, ctx);
        goto after_2;
    // 0x150BE60C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x150BE610: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x150BE614: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x150BE618: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x150BE61C: sw          $t2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r10;
    // 0x150BE620: addiu       $t4, $sp, 0x154
    ctx->r12 = ADD32(ctx->r29, 0X154);
    // 0x150BE624: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x150BE628: addiu       $t3, $sp, 0xAC
    ctx->r11 = ADD32(ctx->r29, 0XAC);
    // 0x150BE62C: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150BE630: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x150BE634: lw          $t0, 0x4($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X4);
    // 0x150BE638: addiu       $t7, $zero, -0x3F
    ctx->r15 = ADD32(0, -0X3F);
    // 0x150BE63C: addiu       $t8, $zero, 0x4B
    ctx->r24 = ADD32(0, 0X4B);
    // 0x150BE640: sw          $t0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r8;
    // 0x150BE644: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x150BE648: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x150BE64C: addiu       $t2, $zero, 0x14
    ctx->r10 = ADD32(0, 0X14);
    // 0x150BE650: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x150BE654: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x150BE658: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150BE65C: lui         $at, 0x4130
    ctx->r1 = S32(0X4130 << 16);
    // 0x150BE660: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BE664: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE668: lwc1        $f16, 0x78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X78);
    // 0x150BE66C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE670: lwc1        $f18, 0x7C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X7C);
    // 0x150BE674: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE678: lwc1        $f4, 0x80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X80);
    // 0x150BE67C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE680: lwc1        $f6, 0x84($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X84);
    // 0x150BE684: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE688: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x150BE68C: lwc1        $f8, 0x88($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X88);
    // 0x150BE690: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150BE694: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    // 0x150BE698: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150BE69C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x150BE6A0: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x150BE6A4: sh          $zero, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = 0;
    // 0x150BE6A8: sh          $t9, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r25;
    // 0x150BE6AC: sh          $t7, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r15;
    // 0x150BE6B0: sh          $t8, 0xBE($sp)
    MEM_H(0XBE, ctx->r29) = ctx->r24;
    // 0x150BE6B4: sh          $t1, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r9;
    // 0x150BE6B8: sh          $t2, 0xD2($sp)
    MEM_H(0XD2, ctx->r29) = ctx->r10;
    // 0x150BE6BC: addiu       $a2, $a2, 0x64
    ctx->r6 = ADD32(ctx->r6, 0X64);
    // 0x150BE6C0: addiu       $a1, $a1, 0x60
    ctx->r5 = ADD32(ctx->r5, 0X60);
    // 0x150BE6C4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150BE6C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150BE6CC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150BE6D0: addiu       $a0, $sp, 0xA4
    ctx->r4 = ADD32(ctx->r29, 0XA4);
    // 0x150BE6D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150BE6D8: swc1        $f16, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f16.u32l;
    // 0x150BE6DC: swc1        $f18, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f18.u32l;
    // 0x150BE6E0: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x150BE6E4: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
    // 0x150BE6E8: swc1        $f8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f8.u32l;
    // 0x150BE6EC: jal         0x15152190
    // 0x150BE6F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_15152190(rdram, ctx);
        goto after_3;
    // 0x150BE6F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x150BE6F4: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x150BE6F8: addiu       $t6, $sp, 0x154
    ctx->r14 = ADD32(ctx->r29, 0X154);
    // 0x150BE6FC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150BE700: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x150BE704: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x150BE708: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x150BE70C: lw          $t4, 0x4($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X4);
    // 0x150BE710: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150BE714: addiu       $t8, $zero, -0x2B
    ctx->r24 = ADD32(0, -0X2B);
    // 0x150BE718: sw          $t4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r12;
    // 0x150BE71C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x150BE720: addiu       $t1, $zero, 0x1A
    ctx->r9 = ADD32(0, 0X1A);
    // 0x150BE724: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150BE728: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x150BE72C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE730: lwc1        $f16, 0x8C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X8C);
    // 0x150BE734: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE738: lwc1        $f18, 0x90($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X90);
    // 0x150BE73C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE740: lwc1        $f4, 0x94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X94);
    // 0x150BE744: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE748: lwc1        $f6, 0x98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X98);
    // 0x150BE74C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE750: lwc1        $f8, 0x9C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X9C);
    // 0x150BE754: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150BE758: lwc1        $f10, 0xA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0XA0);
    // 0x150BE75C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150BE760: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x150BE764: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150BE768: sh          $t0, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r8;
    // 0x150BE76C: sh          $t9, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r25;
    // 0x150BE770: sh          $t7, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r15;
    // 0x150BE774: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150BE778: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x150BE77C: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x150BE780: addiu       $t4, $zero, 0x9B
    ctx->r12 = ADD32(0, 0X9B);
    // 0x150BE784: addiu       $t0, $zero, 0x64
    ctx->r8 = ADD32(0, 0X64);
    // 0x150BE788: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x150BE78C: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x150BE790: sh          $zero, 0x58($sp)
    MEM_H(0X58, ctx->r29) = 0;
    // 0x150BE794: sh          $t8, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r24;
    // 0x150BE798: sh          $t1, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r9;
    // 0x150BE79C: sh          $t2, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r10;
    // 0x150BE7A0: sh          $t3, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r11;
    // 0x150BE7A4: sh          $t5, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r13;
    // 0x150BE7A8: sh          $t6, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r14;
    // 0x150BE7AC: sh          $t4, 0x90($sp)
    MEM_H(0X90, ctx->r29) = ctx->r12;
    // 0x150BE7B0: sh          $t0, 0x92($sp)
    MEM_H(0X92, ctx->r29) = ctx->r8;
    // 0x150BE7B4: sh          $t9, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r25;
    // 0x150BE7B8: sh          $t7, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = ctx->r15;
    // 0x150BE7BC: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x150BE7C0: sb          $zero, 0x94($sp)
    MEM_B(0X94, ctx->r29) = 0;
    // 0x150BE7C4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x150BE7C8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x150BE7CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150BE7D0: addiu       $a2, $sp, 0x124
    ctx->r6 = ADD32(ctx->r29, 0X124);
    // 0x150BE7D4: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x150BE7D8: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    // 0x150BE7DC: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x150BE7E0: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x150BE7E4: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x150BE7E8: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x150BE7EC: jal         0x15153F18
    // 0x150BE7F0: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    func_15153F18(rdram, ctx);
        goto after_4;
    // 0x150BE7F0: swc1        $f16, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x150BE7F4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x150BE7F8: sb          $t8, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r24;
    // 0x150BE7FC: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x150BE800: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150BE804: addiu       $a2, $sp, 0x124
    ctx->r6 = ADD32(ctx->r29, 0X124);
    // 0x150BE808: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x150BE80C: jal         0x15153F18
    // 0x150BE810: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_15153F18(rdram, ctx);
        goto after_5;
    // 0x150BE810: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_5:
    // 0x150BE814: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x150BE818: sb          $t1, 0x94($sp)
    MEM_B(0X94, ctx->r29) = ctx->r9;
    // 0x150BE81C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x150BE820: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150BE824: addiu       $a2, $sp, 0x124
    ctx->r6 = ADD32(ctx->r29, 0X124);
    // 0x150BE828: andi        $a3, $s1, 0xFF
    ctx->r7 = ctx->r17 & 0XFF;
    // 0x150BE82C: jal         0x15153F18
    // 0x150BE830: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_15153F18(rdram, ctx);
        goto after_6;
    // 0x150BE830: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_6:
    // 0x150BE834: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_150BE838:
    // 0x150BE838: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x150BE83C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x150BE840: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x150BE844: jr          $ra
    // 0x150BE848: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    return;
    return;
    // 0x150BE848: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
;}
RECOMP_FUNC void func_150C79BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C79BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x150C79C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x150C79C4: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x150C79C8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x150C79CC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150C79D0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150C79D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150C79D8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150C79DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150C79E0: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150C79E4: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x150C79E8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150C79EC: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x150C79F0: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x150C79F4: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
    // 0x150C79F8: lwc1        $f8, 0x2FC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X2FC);
    // 0x150C79FC: lwc1        $f4, 0x2F8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2F8);
    // 0x150C7A00: lwc1        $f16, 0x300($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X300);
    // 0x150C7A04: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C7A08: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x150C7A0C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C7A10: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x150C7A14: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x150C7A18: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x150C7A1C: addiu       $v1, $a1, -0x9C4
    ctx->r3 = ADD32(ctx->r5, -0X9C4);
    // 0x150C7A20: slti        $at, $v1, -0xC7
    ctx->r1 = SIGNED(ctx->r3) < -0XC7 ? 1 : 0;
    // 0x150C7A24: mfc1        $s1, $f18
    ctx->r17 = (int32_t)ctx->f18.u32l;
    // 0x150C7A28: addiu       $s0, $s0, 0x972
    ctx->r16 = ADD32(ctx->r16, 0X972);
    // 0x150C7A2C: bne         $at, $zero, L_150C7AC0
    if (ctx->r1 != 0) {
        // 0x150C7A30: addiu       $s1, $s1, -0x6EF
        ctx->r17 = ADD32(ctx->r17, -0X6EF);
            goto L_150C7AC0;
    }
    // 0x150C7A30: addiu       $s1, $s1, -0x6EF
    ctx->r17 = ADD32(ctx->r17, -0X6EF);
    // 0x150C7A34: multu       $s0, $s0
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C7A38: lui         $at, 0x15
    ctx->r1 = S32(0X15 << 16);
    // 0x150C7A3C: ori         $at, $at, 0xF900
    ctx->r1 = ctx->r1 | 0XF900;
    // 0x150C7A40: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x150C7A44: mflo        $t2
    ctx->r10 = lo;
    // 0x150C7A48: nop

    // 0x150C7A4C: nop

    // 0x150C7A50: multu       $s1, $s1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C7A54: mflo        $t3
    ctx->r11 = lo;
    // 0x150C7A58: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x150C7A5C: slt         $at, $t4, $at
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x150C7A60: beq         $at, $zero, L_150C7AC0
    if (ctx->r1 == 0) {
        // 0x150C7A64: nop
    
            goto L_150C7AC0;
    }
    // 0x150C7A64: nop

    // 0x150C7A68: lw          $t5, -0x780C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X780C);
    // 0x150C7A6C: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    // 0x150C7A70: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x150C7A74: bnel        $t5, $zero, L_150C7B18
    if (ctx->r13 != 0) {
        // 0x150C7A78: addiu       $v1, $a1, -0x62F
        ctx->r3 = ADD32(ctx->r5, -0X62F);
            goto L_150C7B18;
    }
    goto skip_0;
    // 0x150C7A78: addiu       $v1, $a1, -0x62F
    ctx->r3 = ADD32(ctx->r5, -0X62F);
    skip_0:
    // 0x150C7A7C: jal         0x1000D96C
    // 0x150C7A80: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_1000D96C(rdram, ctx);
        goto after_0;
    // 0x150C7A80: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x150C7A84: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x150C7A88: jal         0x1000DE1C
    // 0x150C7A8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_1000DE1C(rdram, ctx);
        goto after_1;
    // 0x150C7A8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x150C7A90: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150C7A94: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x150C7A98: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x150C7A9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150C7AA0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150C7AA4: sw          $t6, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = ctx->r14;
    // 0x150C7AA8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x150C7AAC: lwc1        $f4, 0x2FC($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X2FC);
    // 0x150C7AB0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150C7AB4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x150C7AB8: b           L_150C7B18
    // 0x150C7ABC: addiu       $v1, $a1, -0x62F
    ctx->r3 = ADD32(ctx->r5, -0X62F);
        goto L_150C7B18;
    // 0x150C7ABC: addiu       $v1, $a1, -0x62F
    ctx->r3 = ADD32(ctx->r5, -0X62F);
L_150C7AC0:
    // 0x150C7AC0: lw          $t1, -0x780C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X780C);
    // 0x150C7AC4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x150C7AC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x150C7ACC: beql        $t1, $zero, L_150C7B18
    if (ctx->r9 == 0) {
        // 0x150C7AD0: addiu       $v1, $a1, -0x62F
        ctx->r3 = ADD32(ctx->r5, -0X62F);
            goto L_150C7B18;
    }
    goto skip_1;
    // 0x150C7AD0: addiu       $v1, $a1, -0x62F
    ctx->r3 = ADD32(ctx->r5, -0X62F);
    skip_1:
    // 0x150C7AD4: jal         0x1000D96C
    // 0x150C7AD8: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    func_1000D96C(rdram, ctx);
        goto after_2;
    // 0x150C7AD8: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    after_2:
    // 0x150C7ADC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x150C7AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150C7AE4: jal         0x1000D96C
    // 0x150C7AE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_1000D96C(rdram, ctx);
        goto after_3;
    // 0x150C7AE8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x150C7AEC: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x150C7AF0: lw          $t2, -0x4010($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4010);
    // 0x150C7AF4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x150C7AF8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x150C7AFC: sw          $zero, -0x780C($at)
    MEM_W(-0X780C, ctx->r1) = 0;
    // 0x150C7B00: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x150C7B04: lwc1        $f8, 0x2FC($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X2FC);
    // 0x150C7B08: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150C7B0C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x150C7B10: nop

    // 0x150C7B14: addiu       $v1, $a1, -0x62F
    ctx->r3 = ADD32(ctx->r5, -0X62F);
L_150C7B18:
    // 0x150C7B18: bgezl       $v1, L_150C7C80
    if (SIGNED(ctx->r3) >= 0) {
        // 0x150C7B1C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150C7C80;
    }
    goto skip_2;
    // 0x150C7B1C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_2:
    // 0x150C7B20: multu       $s0, $s0
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C7B24: lui         $at, 0xC
    ctx->r1 = S32(0XC << 16);
    // 0x150C7B28: ori         $at, $at, 0x5C10
    ctx->r1 = ctx->r1 | 0X5C10;
    // 0x150C7B2C: mflo        $t6
    ctx->r14 = lo;
    // 0x150C7B30: nop

    // 0x150C7B34: nop

    // 0x150C7B38: multu       $s1, $s1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150C7B3C: mflo        $t7
    ctx->r15 = lo;
    // 0x150C7B40: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x150C7B44: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x150C7B48: beql        $at, $zero, L_150C7C80
    if (ctx->r1 == 0) {
        // 0x150C7B4C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150C7C80;
    }
    goto skip_3;
    // 0x150C7B4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_3:
    // 0x150C7B50: jal         0x150ADA20
    // 0x150C7B54: nop

    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x150C7B54: nop

    after_4:
    // 0x150C7B58: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x150C7B5C: sltiu       $at, $t9, 0x2000
    ctx->r1 = ctx->r25 < 0X2000 ? 1 : 0;
    // 0x150C7B60: beql        $at, $zero, L_150C7C80
    if (ctx->r1 == 0) {
        // 0x150C7B64: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_150C7C80;
    }
    goto skip_4;
    // 0x150C7B64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_4:
    // 0x150C7B68: jal         0x150ADA20
    // 0x150C7B6C: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x150C7B6C: nop

    after_5:
    // 0x150C7B70: addiu       $at, $zero, 0x384
    ctx->r1 = ADD32(0, 0X384);
    // 0x150C7B74: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150C7B78: mfhi        $s1
    ctx->r17 = hi;
    // 0x150C7B7C: jal         0x150ADA20
    // 0x150C7B80: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150C7B80: nop

    after_6:
    // 0x150C7B84: sb          $v0, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r2;
    // 0x150C7B88: jal         0x150489B0
    // 0x150C7B8C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    func_150489B0(rdram, ctx);
        goto after_7;
    // 0x150C7B8C: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_7:
    // 0x150C7B90: mtc1        $s1, $f16
    ctx->f16.u32l = ctx->r17;
    // 0x150C7B94: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C7B98: lwc1        $f4, 0x4D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4D0);
    // 0x150C7B9C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150C7BA0: lbu         $a0, 0x4B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X4B);
    // 0x150C7BA4: mul.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150C7BA8: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x150C7BAC: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x150C7BB0: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150C7BB4: mfc1        $s0, $f8
    ctx->r16 = (int32_t)ctx->f8.u32l;
    // 0x150C7BB8: jal         0x15048A40
    // 0x150C7BBC: nop

    func_15048A40(rdram, ctx);
        goto after_8;
    // 0x150C7BBC: nop

    after_8:
    // 0x150C7BC0: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x150C7BC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150C7BC8: lwc1        $f16, 0x4D4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4D4);
    // 0x150C7BCC: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x150C7BD0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x150C7BD4: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C7BD8: mfc1        $s1, $f4
    ctx->r17 = (int32_t)ctx->f4.u32l;
    // 0x150C7BDC: jal         0x150ADA20
    // 0x150C7BE0: nop

    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150C7BE0: nop

    after_9:
    // 0x150C7BE4: andi        $t2, $v0, 0xFFFF
    ctx->r10 = ctx->r2 & 0XFFFF;
    // 0x150C7BE8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x150C7BEC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x150C7BF0: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x150C7BF4: bgez        $t3, L_150C7C0C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x150C7BF8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_150C7C0C;
    }
    // 0x150C7BF8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150C7BFC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150C7C00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150C7C04: nop

    // 0x150C7C08: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_150C7C0C:
    // 0x150C7C0C: lui         $at, 0x3780
    ctx->r1 = S32(0X3780 << 16);
    // 0x150C7C10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150C7C14: sll         $a3, $s1, 16
    ctx->r7 = S32(ctx->r17 << 16);
    // 0x150C7C18: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x150C7C1C: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x150C7C20: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x150C7C24: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x150C7C28: addiu       $t9, $zero, 0x4B0
    ctx->r25 = ADD32(0, 0X4B0);
    // 0x150C7C2C: addiu       $t0, $zero, 0x25
    ctx->r8 = ADD32(0, 0X25);
    // 0x150C7C30: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x150C7C34: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x150C7C38: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150C7C3C: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x150C7C40: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x150C7C44: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x150C7C48: mfc1        $a0, $f4
    ctx->r4 = (int32_t)ctx->f4.u32l;
    // 0x150C7C4C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x150C7C50: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x150C7C54: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x150C7C58: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x150C7C5C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x150C7C60: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x150C7C64: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x150C7C68: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150C7C6C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150C7C70: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x150C7C74: jal         0x15179FE0
    // 0x150C7C78: addiu       $a2, $zero, 0x62F
    ctx->r6 = ADD32(0, 0X62F);
    func_15179FE0(rdram, ctx);
        goto after_10;
    // 0x150C7C78: addiu       $a2, $zero, 0x62F
    ctx->r6 = ADD32(0, 0X62F);
    after_10:
    // 0x150C7C7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_150C7C80:
    // 0x150C7C80: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x150C7C84: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x150C7C88: jr          $ra
    // 0x150C7C8C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    return;
    // 0x150C7C8C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_150CA930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150CA930: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x150CA934: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150CA938: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x150CA93C: jal         0x150ADA20
    // 0x150CA940: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x150CA940: nop

    after_0:
    // 0x150CA944: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x150CA948: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150CA94C: mfhi        $t6
    ctx->r14 = hi;
    // 0x150CA950: addiu       $t7, $t6, 0xA
    ctx->r15 = ADD32(ctx->r14, 0XA);
    // 0x150CA954: jal         0x150ADA68
    // 0x150CA958: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150CA958: sh          $t7, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r15;
    after_1:
    // 0x150CA95C: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x150CA960: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150CA964: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x150CA968: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x150CA96C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150CA970: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150CA974: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x150CA978: lwc1        $f14, 0x4($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150CA97C: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x150CA980: lh          $t9, 0x3E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X3E);
    // 0x150CA984: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x150CA988: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150CA98C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150CA990: addiu       $t0, $zero, 0x13
    ctx->r8 = ADD32(0, 0X13);
    // 0x150CA994: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x150CA998: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x150CA99C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x150CA9A0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x150CA9A4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150CA9A8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150CA9AC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150CA9B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150CA9B4: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x150CA9B8: jal         0x1514C678
    // 0x150CA9BC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_1514C678(rdram, ctx);
        goto after_2;
    // 0x150CA9BC: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x150CA9C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150CA9C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x150CA9C8: jr          $ra
    // 0x150CA9CC: nop

    return;
    return;
    // 0x150CA9CC: nop

;}
RECOMP_FUNC void func_150FB8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FB8C0: addiu       $sp, $sp, -0x1C8
    ctx->r29 = ADD32(ctx->r29, -0X1C8);
    // 0x150FB8C4: sw          $a3, 0x1D4($sp)
    MEM_W(0X1D4, ctx->r29) = ctx->r7;
    // 0x150FB8C8: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x150FB8CC: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x150FB8D0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x150FB8D4: sw          $a0, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->r4;
    // 0x150FB8D8: sw          $a1, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r5;
    // 0x150FB8DC: sw          $a2, 0x1D0($sp)
    MEM_W(0X1D0, ctx->r29) = ctx->r6;
    // 0x150FB8E0: lw          $t6, 0x1C8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C8);
    // 0x150FB8E4: lbu         $v0, 0x1CF($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FB8E8: beql        $t6, $zero, L_150FC35C
    if (ctx->r14 == 0) {
        // 0x150FB8EC: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150FC35C;
    }
    goto skip_0;
    // 0x150FB8EC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_0:
    // 0x150FB8F0: bltz        $v0, L_150FC358
    if (SIGNED(ctx->r2) < 0) {
        // 0x150FB8F4: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_150FC358;
    }
    // 0x150FB8F4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x150FB8F8: beql        $at, $zero, L_150FC35C
    if (ctx->r1 == 0) {
        // 0x150FB8FC: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150FC35C;
    }
    goto skip_1;
    // 0x150FB8FC: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_1:
    // 0x150FB900: beq         $a3, $zero, L_150FB914
    if (ctx->r7 == 0) {
        // 0x150FB904: nop
    
            goto L_150FB914;
    }
    // 0x150FB904: nop

    // 0x150FB908: sw          $zero, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = 0;
    // 0x150FB90C: b           L_150FB94C
    // 0x150FB910: sb          $zero, 0x1C3($sp)
    MEM_B(0X1C3, ctx->r29) = 0;
        goto L_150FB94C;
    // 0x150FB910: sb          $zero, 0x1C3($sp)
    MEM_B(0X1C3, ctx->r29) = 0;
L_150FB914:
    // 0x150FB914: jal         0x1507515C
    // 0x150FB918: lw          $a0, 0x1C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C8);
    func_1507515C(rdram, ctx);
        goto after_0;
    // 0x150FB918: lw          $a0, 0x1C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C8);
    after_0:
    // 0x150FB91C: beq         $v0, $zero, L_150FC358
    if (ctx->r2 == 0) {
        // 0x150FB920: sw          $v0, 0x1C4($sp)
        MEM_W(0X1C4, ctx->r29) = ctx->r2;
            goto L_150FC358;
    }
    // 0x150FB920: sw          $v0, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->r2;
    // 0x150FB924: lw          $v1, 0x31C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X31C);
    // 0x150FB928: beql        $v1, $zero, L_150FC35C
    if (ctx->r3 == 0) {
        // 0x150FB92C: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150FC35C;
    }
    goto skip_2;
    // 0x150FB92C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_2:
    // 0x150FB930: lbu         $t9, 0x197($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X197);
    // 0x150FB934: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150FB938: beql        $t9, $zero, L_150FB94C
    if (ctx->r25 == 0) {
        // 0x150FB93C: sb          $zero, 0x1C3($sp)
        MEM_B(0X1C3, ctx->r29) = 0;
            goto L_150FB94C;
    }
    goto skip_3;
    // 0x150FB93C: sb          $zero, 0x1C3($sp)
    MEM_B(0X1C3, ctx->r29) = 0;
    skip_3:
    // 0x150FB940: b           L_150FB94C
    // 0x150FB944: sb          $t7, 0x1C3($sp)
    MEM_B(0X1C3, ctx->r29) = ctx->r15;
        goto L_150FB94C;
    // 0x150FB944: sb          $t7, 0x1C3($sp)
    MEM_B(0X1C3, ctx->r29) = ctx->r15;
    // 0x150FB948: sb          $zero, 0x1C3($sp)
    MEM_B(0X1C3, ctx->r29) = 0;
L_150FB94C:
    // 0x150FB94C: lw          $t8, 0x1C8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C8);
    // 0x150FB950: lw          $t5, 0x1C8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C8);
    // 0x150FB954: lw          $t3, 0x1D4($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X1D4);
    // 0x150FB958: beql        $t3, $zero, L_150FC35C
    if (ctx->r11 == 0) {
        // 0x150FB95C: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150FC35C;
    }
    goto skip_4;
    // 0x150FB95C: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_4:
    // 0x150FB960: lbu         $t4, 0x4($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X4);
    // 0x150FB964: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x150FB968: bne         $t4, $at, L_150FBA0C
    if (ctx->r12 != ctx->r1) {
        // 0x150FB96C: nop
    
            goto L_150FBA0C;
    }
    // 0x150FB96C: nop

    // 0x150FB970: lbu         $t6, 0x1CF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FB974: lbu         $t3, 0x1C3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1C3);
    // 0x150FB978: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150FB97C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x150FB980: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x150FB984: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150FB988: addiu       $t7, $t7, 0x1E38
    ctx->r15 = ADD32(ctx->r15, 0X1E38);
    // 0x150FB98C: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x150FB990: beq         $t3, $zero, L_150FB9AC
    if (ctx->r11 == 0) {
        // 0x150FB994: sw          $t8, 0x16C($sp)
        MEM_W(0X16C, ctx->r29) = ctx->r24;
            goto L_150FB9AC;
    }
    // 0x150FB994: sw          $t8, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r24;
    // 0x150FB998: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150FB99C: addiu       $t5, $t5, 0x1E68
    ctx->r13 = ADD32(ctx->r13, 0X1E68);
    // 0x150FB9A0: addu        $t4, $t9, $t5
    ctx->r12 = ADD32(ctx->r25, ctx->r13);
    // 0x150FB9A4: b           L_150FB9CC
    // 0x150FB9A8: sw          $t4, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r12;
        goto L_150FB9CC;
    // 0x150FB9A8: sw          $t4, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r12;
L_150FB9AC:
    // 0x150FB9AC: lbu         $t6, 0x1CF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FB9B0: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x150FB9B4: addiu       $t8, $t8, 0x1E50
    ctx->r24 = ADD32(ctx->r24, 0X1E50);
    // 0x150FB9B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150FB9BC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150FB9C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150FB9C4: addu        $t3, $t7, $t8
    ctx->r11 = ADD32(ctx->r15, ctx->r24);
    // 0x150FB9C8: sw          $t3, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r11;
L_150FB9CC:
    // 0x150FB9CC: lbu         $t9, 0x1CF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FB9D0: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150FB9D4: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150FB9D8: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x150FB9DC: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x150FB9E0: lw          $t3, 0x1C8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C8);
    // 0x150FB9E4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x150FB9E8: addiu       $t4, $t4, 0x1E80
    ctx->r12 = ADD32(ctx->r12, 0X1E80);
    // 0x150FB9EC: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x150FB9F0: lbu         $t7, 0x1E34($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X1E34);
    // 0x150FB9F4: addu        $t6, $t5, $t4
    ctx->r14 = ADD32(ctx->r13, ctx->r12);
    // 0x150FB9F8: sw          $t6, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r14;
    // 0x150FB9FC: lw          $t5, 0x1D4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X1D4);
    // 0x150FBA00: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x150FBA04: b           L_150FBAF8
    // 0x150FBA08: addu        $a2, $t8, $t5
    ctx->r6 = ADD32(ctx->r24, ctx->r13);
        goto L_150FBAF8;
    // 0x150FBA08: addu        $a2, $t8, $t5
    ctx->r6 = ADD32(ctx->r24, ctx->r13);
L_150FBA0C:
    // 0x150FBA0C: jal         0x150ADA68
    // 0x150FBA10: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x150FBA10: nop

    after_1:
    // 0x150FBA14: lbu         $t4, 0x1CF($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FBA18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x150FBA1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FBA20: beq         $t4, $zero, L_150FBA30
    if (ctx->r12 == 0) {
        // 0x150FBA24: lui         $at, 0x40C0
        ctx->r1 = S32(0X40C0 << 16);
            goto L_150FBA30;
    }
    // 0x150FBA24: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150FBA28: b           L_150FBA34
    // 0x150FBA2C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_150FBA34;
    // 0x150FBA2C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_150FBA30:
    // 0x150FBA30: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_150FBA34:
    // 0x150FBA34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FBA38: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x150FBA3C: lbu         $t6, 0x1CF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FBA40: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150FBA44: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FBA48: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x150FBA4C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150FBA50: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x150FBA54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x150FBA58: addiu       $t7, $t7, 0x1DEC
    ctx->r15 = ADD32(ctx->r15, 0X1DEC);
    // 0x150FBA5C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FBA60: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x150FBA64: addu        $v0, $t9, $t7
    ctx->r2 = ADD32(ctx->r25, ctx->r15);
    // 0x150FBA68: lbu         $t5, 0x1C3($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1C3);
    // 0x150FBA6C: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x150FBA70: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x150FBA74: addiu       $t3, $t3, 0x1DD4
    ctx->r11 = ADD32(ctx->r11, 0X1DD4);
    // 0x150FBA78: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150FBA7C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x150FBA80: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150FBA84: addu        $t8, $t9, $t3
    ctx->r24 = ADD32(ctx->r25, ctx->r11);
    // 0x150FBA88: addiu       $t4, $t4, 0x1E04
    ctx->r12 = ADD32(ctx->r12, 0X1E04);
    // 0x150FBA8C: sw          $t8, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r24;
    // 0x150FBA90: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150FBA94: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150FBA98: addu        $t6, $t9, $t4
    ctx->r14 = ADD32(ctx->r25, ctx->r12);
    // 0x150FBA9C: addiu       $t7, $sp, 0x150
    ctx->r15 = ADD32(ctx->r29, 0X150);
    // 0x150FBAA0: swc1        $f8, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f8.u32l;
    // 0x150FBAA4: swc1        $f4, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f4.u32l;
    // 0x150FBAA8: beq         $t5, $zero, L_150FBAB8
    if (ctx->r13 == 0) {
        // 0x150FBAAC: swc1        $f10, 0x150($sp)
        MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
            goto L_150FBAB8;
    }
    // 0x150FBAAC: swc1        $f10, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f10.u32l;
    // 0x150FBAB0: b           L_150FBABC
    // 0x150FBAB4: sw          $t6, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r14;
        goto L_150FBABC;
    // 0x150FBAB4: sw          $t6, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r14;
L_150FBAB8:
    // 0x150FBAB8: sw          $t7, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r15;
L_150FBABC:
    // 0x150FBABC: lbu         $t3, 0x1CF($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FBAC0: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150FBAC4: lw          $t7, 0x1C8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C8);
    // 0x150FBAC8: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x150FBACC: subu        $t8, $t8, $t3
    ctx->r24 = SUB32(ctx->r24, ctx->r11);
    // 0x150FBAD0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x150FBAD4: addiu       $t5, $t5, 0x1E1C
    ctx->r13 = ADD32(ctx->r13, 0X1E1C);
    // 0x150FBAD8: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x150FBADC: addu        $t9, $t8, $t5
    ctx->r25 = ADD32(ctx->r24, ctx->r13);
    // 0x150FBAE0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150FBAE4: lbu         $t4, 0x1DD0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1DD0);
    // 0x150FBAE8: sw          $t9, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->r25;
    // 0x150FBAEC: lw          $t8, 0x1D4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1D4);
    // 0x150FBAF0: sll         $t6, $t4, 6
    ctx->r14 = S32(ctx->r12 << 6);
    // 0x150FBAF4: addu        $a2, $t6, $t8
    ctx->r6 = ADD32(ctx->r14, ctx->r24);
L_150FBAF8:
    // 0x150FBAF8: lbu         $t9, 0x1C3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1C3);
    // 0x150FBAFC: addiu       $t5, $sp, 0x1B4
    ctx->r13 = ADD32(ctx->r29, 0X1B4);
    // 0x150FBB00: sw          $t5, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r13;
    // 0x150FBB04: beq         $t9, $zero, L_150FBB18
    if (ctx->r25 == 0) {
        // 0x150FBB08: addiu       $a0, $sp, 0x16C
        ctx->r4 = ADD32(ctx->r29, 0X16C);
            goto L_150FBB18;
    }
    // 0x150FBB08: addiu       $a0, $sp, 0x16C
    ctx->r4 = ADD32(ctx->r29, 0X16C);
    // 0x150FBB0C: addiu       $t3, $sp, 0x184
    ctx->r11 = ADD32(ctx->r29, 0X184);
    // 0x150FBB10: b           L_150FBB20
    // 0x150FBB14: sw          $t3, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r11;
        goto L_150FBB20;
    // 0x150FBB14: sw          $t3, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r11;
L_150FBB18:
    // 0x150FBB18: addiu       $t4, $sp, 0x1A8
    ctx->r12 = ADD32(ctx->r29, 0X1A8);
    // 0x150FBB1C: sw          $t4, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->r12;
L_150FBB20:
    // 0x150FBB20: lbu         $t6, 0x1C3($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1C3);
    // 0x150FBB24: addiu       $t7, $sp, 0x178
    ctx->r15 = ADD32(ctx->r29, 0X178);
    // 0x150FBB28: sw          $t7, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->r15;
    // 0x150FBB2C: beq         $t6, $zero, L_150FBB40
    if (ctx->r14 == 0) {
        // 0x150FBB30: addiu       $a1, $sp, 0x160
        ctx->r5 = ADD32(ctx->r29, 0X160);
            goto L_150FBB40;
    }
    // 0x150FBB30: addiu       $a1, $sp, 0x160
    ctx->r5 = ADD32(ctx->r29, 0X160);
    // 0x150FBB34: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x150FBB38: b           L_150FBB48
    // 0x150FBB3C: sw          $t8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r24;
        goto L_150FBB48;
    // 0x150FBB3C: sw          $t8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r24;
L_150FBB40:
    // 0x150FBB40: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x150FBB44: sw          $v1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r3;
L_150FBB48:
    // 0x150FBB48: jal         0x15145EA4
    // 0x150FBB4C: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    func_15145EA4(rdram, ctx);
        goto after_2;
    // 0x150FBB4C: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    after_2:
    // 0x150FBB50: lbu         $a3, 0x1C3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1C3);
    // 0x150FBB54: beql        $a3, $zero, L_150FBCB8
    if (ctx->r7 == 0) {
        // 0x150FBB58: lwc1        $f4, 0x1A8($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X1A8);
            goto L_150FBCB8;
    }
    goto skip_5;
    // 0x150FBB58: lwc1        $f4, 0x1A8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A8);
    skip_5:
    // 0x150FBB5C: lw          $t5, 0x1C4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C4);
    // 0x150FBB60: lwc1        $f18, 0x1B4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150FBB64: lwc1        $f16, 0x184($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X184);
    // 0x150FBB68: lw          $v1, 0x31C($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X31C);
    // 0x150FBB6C: lwc1        $f14, 0x1B8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150FBB70: sub.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x150FBB74: lwc1        $f12, 0x18C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18C);
    // 0x150FBB78: lwc1        $f10, 0x1BC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x150FBB7C: lwc1        $f8, 0x188($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X188);
    // 0x150FBB80: lwc1        $f6, 0x178($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X178);
    // 0x150FBB84: sub.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x150FBB88: lwc1        $f4, 0x17C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x150FBB8C: lwc1        $f2, 0x180($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X180);
    // 0x150FBB90: sub.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x150FBB94: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
    // 0x150FBB98: swc1        $f16, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->f16.u32l;
    // 0x150FBB9C: sub.s       $f8, $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x150FBBA0: swc1        $f12, 0x18C($sp)
    MEM_W(0X18C, ctx->r29) = ctx->f12.u32l;
    // 0x150FBBA4: swc1        $f18, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f18.u32l;
    // 0x150FBBA8: sub.s       $f14, $f4, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x150FBBAC: swc1        $f8, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->f8.u32l;
    // 0x150FBBB0: addiu       $a0, $sp, 0x184
    ctx->r4 = ADD32(ctx->r29, 0X184);
    // 0x150FBBB4: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x150FBBB8: swc1        $f14, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->f14.u32l;
    // 0x150FBBBC: addiu       $a1, $sp, 0x178
    ctx->r5 = ADD32(ctx->r29, 0X178);
    // 0x150FBBC0: addiu       $a2, $sp, 0x144
    ctx->r6 = ADD32(ctx->r29, 0X144);
    // 0x150FBBC4: swc1        $f10, 0x180($sp)
    MEM_W(0X180, ctx->r29) = ctx->f10.u32l;
    // 0x150FBBC8: jal         0x151450B4
    // 0x150FBBCC: sw          $v1, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r3;
    func_151450B4(rdram, ctx);
        goto after_3;
    // 0x150FBBCC: sw          $v1, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r3;
    after_3:
    // 0x150FBBD0: lw          $v1, 0x130($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X130);
    // 0x150FBBD4: lw          $a0, 0x1C4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C4);
    // 0x150FBBD8: lwc1        $f4, 0x1B4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150FBBDC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x150FBBE0: lwc1        $f10, 0x1B8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150FBBE4: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150FBBE8: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x150FBBEC: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x150FBBF0: lwc1        $f6, 0x1BC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x150FBBF4: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x150FBBF8: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150FBBFC: lwc1        $f10, 0x148($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X148);
    // 0x150FBC00: lwc1        $f8, 0x134($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X134);
    // 0x150FBC04: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x150FBC08: lwc1        $f4, 0x144($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X144);
    // 0x150FBC0C: mul.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x150FBC10: lwc1        $f2, 0x130($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X130);
    // 0x150FBC14: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x150FBC18: lwc1        $f10, 0x138($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X138);
    // 0x150FBC1C: mul.s       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x150FBC20: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x150FBC24: lwc1        $f6, 0x14C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x150FBC28: mul.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150FBC2C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FBC30: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x150FBC34: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x150FBC38: mul.s       $f4, $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x150FBC3C: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150FBC40: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x150FBC44: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150FBC48: div.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x150FBC4C: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x150FBC50: add.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x150FBC54: swc1        $f4, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->f4.u32l;
    // 0x150FBC58: lw          $t9, 0x31C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X31C);
    // 0x150FBC5C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x150FBC60: lwc1        $f8, 0x134($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X134);
    // 0x150FBC64: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x150FBC68: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x150FBC6C: swc1        $f4, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->f4.u32l;
    // 0x150FBC70: lw          $t3, 0x31C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X31C);
    // 0x150FBC74: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x150FBC78: lwc1        $f6, 0x138($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X138);
    // 0x150FBC7C: mul.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x150FBC80: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FBC84: swc1        $f4, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->f4.u32l;
    // 0x150FBC88: lw          $t4, 0x31C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X31C);
    // 0x150FBC8C: lwc1        $f6, 0x130($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X130);
    // 0x150FBC90: swc1        $f6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f6.u32l;
    // 0x150FBC94: lw          $t7, 0x31C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X31C);
    // 0x150FBC98: lwc1        $f8, 0x134($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X134);
    // 0x150FBC9C: swc1        $f8, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f8.u32l;
    // 0x150FBCA0: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
    // 0x150FBCA4: lwc1        $f10, 0x138($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X138);
    // 0x150FBCA8: swc1        $f10, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f10.u32l;
    // 0x150FBCAC: b           L_150FBCE8
    // 0x150FBCB0: lbu         $a3, 0x1C3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1C3);
        goto L_150FBCE8;
    // 0x150FBCB0: lbu         $a3, 0x1C3($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1C3);
    // 0x150FBCB4: lwc1        $f4, 0x1A8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1A8);
L_150FBCB8:
    // 0x150FBCB8: lwc1        $f6, 0x1B4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150FBCBC: lwc1        $f10, 0x1AC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1AC);
    // 0x150FBCC0: lw          $a0, 0x1C4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C4);
    // 0x150FBCC4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x150FBCC8: lwc1        $f4, 0x1B8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150FBCCC: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x150FBCD0: swc1        $f8, 0x1A8($sp)
    MEM_W(0X1A8, ctx->r29) = ctx->f8.u32l;
    // 0x150FBCD4: lwc1        $f8, 0x1B0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1B0);
    // 0x150FBCD8: lwc1        $f10, 0x1BC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x150FBCDC: swc1        $f6, 0x1AC($sp)
    MEM_W(0X1AC, ctx->r29) = ctx->f6.u32l;
    // 0x150FBCE0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150FBCE4: swc1        $f4, 0x1B0($sp)
    MEM_W(0X1B0, ctx->r29) = ctx->f4.u32l;
L_150FBCE8:
    // 0x150FBCE8: beql        $a3, $zero, L_150FBCFC
    if (ctx->r7 == 0) {
        // 0x150FBCEC: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_150FBCFC;
    }
    goto skip_6;
    // 0x150FBCEC: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    skip_6:
    // 0x150FBCF0: lw          $v0, 0x318($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X318);
    // 0x150FBCF4: bne         $v0, $zero, L_150FBD04
    if (ctx->r2 != 0) {
        // 0x150FBCF8: addiu       $t8, $zero, 0xFF
        ctx->r24 = ADD32(0, 0XFF);
            goto L_150FBD04;
    }
    // 0x150FBCF8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
L_150FBCFC:
    // 0x150FBCFC: b           L_150FBD18
    // 0x150FBD00: sb          $t8, 0x12F($sp)
    MEM_B(0X12F, ctx->r29) = ctx->r24;
        goto L_150FBD18;
    // 0x150FBD00: sb          $t8, 0x12F($sp)
    MEM_B(0X12F, ctx->r29) = ctx->r24;
L_150FBD04:
    // 0x150FBD04: lbu         $t5, 0x23D($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X23D);
    // 0x150FBD08: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150FBD0C: sllv        $t3, $t9, $t5
    ctx->r11 = S32(ctx->r25 << (ctx->r13 & 31));
    // 0x150FBD10: nor         $t7, $t3, $zero
    ctx->r15 = ~(ctx->r11 | 0);
    // 0x150FBD14: sb          $t7, 0x12F($sp)
    MEM_B(0X12F, ctx->r29) = ctx->r15;
L_150FBD18:
    // 0x150FBD18: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x150FBD1C: lw          $v0, -0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1610);
    // 0x150FBD20: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x150FBD24: beq         $v0, $at, L_150FBD34
    if (ctx->r2 == ctx->r1) {
        // 0x150FBD28: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_150FBD34;
    }
    // 0x150FBD28: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x150FBD2C: bne         $v0, $at, L_150FBD40
    if (ctx->r2 != ctx->r1) {
        // 0x150FBD30: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_150FBD40;
    }
    // 0x150FBD30: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
L_150FBD34:
    // 0x150FBD34: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x150FBD38: b           L_150FBD44
    // 0x150FBD3C: sb          $t6, 0x12E($sp)
    MEM_B(0X12E, ctx->r29) = ctx->r14;
        goto L_150FBD44;
    // 0x150FBD3C: sb          $t6, 0x12E($sp)
    MEM_B(0X12E, ctx->r29) = ctx->r14;
L_150FBD40:
    // 0x150FBD40: sb          $t8, 0x12E($sp)
    MEM_B(0X12E, ctx->r29) = ctx->r24;
L_150FBD44:
    // 0x150FBD44: beql        $a3, $zero, L_150FBD58
    if (ctx->r7 == 0) {
        // 0x150FBD48: addiu       $t9, $sp, 0x1A8
        ctx->r25 = ADD32(ctx->r29, 0X1A8);
            goto L_150FBD58;
    }
    goto skip_7;
    // 0x150FBD48: addiu       $t9, $sp, 0x1A8
    ctx->r25 = ADD32(ctx->r29, 0X1A8);
    skip_7:
    // 0x150FBD4C: b           L_150FBD5C
    // 0x150FBD50: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
        goto L_150FBD5C;
    // 0x150FBD50: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    // 0x150FBD54: addiu       $t9, $sp, 0x1A8
    ctx->r25 = ADD32(ctx->r29, 0X1A8);
L_150FBD58:
    // 0x150FBD58: sw          $t9, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r25;
L_150FBD5C:
    // 0x150FBD5C: beq         $a3, $zero, L_150FBD6C
    if (ctx->r7 == 0) {
        // 0x150FBD60: addiu       $t5, $sp, 0x19C
        ctx->r13 = ADD32(ctx->r29, 0X19C);
            goto L_150FBD6C;
    }
    // 0x150FBD60: addiu       $t5, $sp, 0x19C
    ctx->r13 = ADD32(ctx->r29, 0X19C);
    // 0x150FBD64: b           L_150FBD70
    // 0x150FBD68: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
        goto L_150FBD70;
    // 0x150FBD68: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
L_150FBD6C:
    // 0x150FBD6C: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
L_150FBD70:
    // 0x150FBD70: beq         $a3, $zero, L_150FBD80
    if (ctx->r7 == 0) {
        // 0x150FBD74: addiu       $t3, $sp, 0x190
        ctx->r11 = ADD32(ctx->r29, 0X190);
            goto L_150FBD80;
    }
    // 0x150FBD74: addiu       $t3, $sp, 0x190
    ctx->r11 = ADD32(ctx->r29, 0X190);
    // 0x150FBD78: b           L_150FBD84
    // 0x150FBD7C: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
        goto L_150FBD84;
    // 0x150FBD7C: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
L_150FBD80:
    // 0x150FBD80: sw          $zero, 0x94($sp)
    MEM_W(0X94, ctx->r29) = 0;
L_150FBD84:
    // 0x150FBD84: beq         $a3, $zero, L_150FBD94
    if (ctx->r7 == 0) {
        // 0x150FBD88: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_150FBD94;
    }
    // 0x150FBD88: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x150FBD8C: b           L_150FBD98
    // 0x150FBD90: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
        goto L_150FBD98;
    // 0x150FBD90: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
L_150FBD94:
    // 0x150FBD94: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
L_150FBD98:
    // 0x150FBD98: jal         0x150ADA68
    // 0x150FBD9C: nop

    func_150ADA68(rdram, ctx);
        goto after_4;
    // 0x150FBD9C: nop

    after_4:
    // 0x150FBDA0: jal         0x150ADA68
    // 0x150FBDA4: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    func_150ADA68(rdram, ctx);
        goto after_5;
    // 0x150FBDA4: swc1        $f0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x150FBDA8: jal         0x150ADA20
    // 0x150FBDAC: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x150FBDAC: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x150FBDB0: lw          $t2, 0x1C4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C4);
    // 0x150FBDB4: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x150FBDB8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150FBDBC: beq         $t2, $zero, L_150FBDCC
    if (ctx->r10 == 0) {
        // 0x150FBDC0: addiu       $a0, $sp, 0x1B4
        ctx->r4 = ADD32(ctx->r29, 0X1B4);
            goto L_150FBDCC;
    }
    // 0x150FBDC0: addiu       $a0, $sp, 0x1B4
    ctx->r4 = ADD32(ctx->r29, 0X1B4);
    // 0x150FBDC4: b           L_150FBDD0
    // 0x150FBDC8: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
        goto L_150FBDD0;
    // 0x150FBDC8: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
L_150FBDCC:
    // 0x150FBDCC: lw          $t0, 0x1C8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C8);
L_150FBDD0:
    // 0x150FBDD0: lbu         $t7, -0x19EA($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X19EA);
    // 0x150FBDD4: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x150FBDD8: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x150FBDDC: beq         $t7, $zero, L_150FBDEC
    if (ctx->r15 == 0) {
        // 0x150FBDE0: lw          $a3, 0x94($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X94);
            goto L_150FBDEC;
    }
    // 0x150FBDE0: lw          $a3, 0x94($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X94);
    // 0x150FBDE4: b           L_150FBDF0
    // 0x150FBDE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_150FBDF0;
    // 0x150FBDE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150FBDEC:
    // 0x150FBDEC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_150FBDF0:
    // 0x150FBDF0: lui         $at, 0x437C
    ctx->r1 = S32(0X437C << 16);
    // 0x150FBDF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FBDF8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FBDFC: lwc1        $f8, 0x1E98($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1E98);
    // 0x150FBE00: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150FBE04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FBE08: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x150FBE0C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x150FBE10: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x150FBE14: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x150FBE18: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x150FBE1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FBE20: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x150FBE24: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x150FBE28: lw          $t6, 0x98($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X98);
    // 0x150FBE2C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x150FBE30: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FBE34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FBE38: lui         $at, 0x43FB
    ctx->r1 = S32(0X43FB << 16);
    // 0x150FBE3C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150FBE40: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x150FBE44: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150FBE48: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150FBE4C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x150FBE50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FBE54: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x150FBE58: divu        $zero, $t1, $at
    lo = S32(U32(ctx->r9) / U32(ctx->r1)); hi = S32(U32(ctx->r9) % U32(ctx->r1));
    // 0x150FBE5C: mfhi        $t8
    ctx->r24 = hi;
    // 0x150FBE60: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FBE64: addiu       $t9, $t8, 0xE1
    ctx->r25 = ADD32(ctx->r24, 0XE1);
    // 0x150FBE68: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x150FBE6C: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x150FBE70: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x150FBE74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x150FBE78: lb          $t6, 0x12E($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X12E);
    // 0x150FBE7C: lbu         $t5, 0x1DB($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1DB);
    // 0x150FBE80: lw          $t3, 0x1DC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1DC);
    // 0x150FBE84: lbu         $t9, 0x12F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X12F);
    // 0x150FBE88: lwc1        $f8, 0x1D0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1D0);
    // 0x150FBE8C: addiu       $t8, $zero, 0x2C
    ctx->r24 = ADD32(0, 0X2C);
    // 0x150FBE90: addiu       $t4, $zero, 0x32
    ctx->r12 = ADD32(0, 0X32);
    // 0x150FBE94: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x150FBE98: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x150FBE9C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x150FBEA0: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x150FBEA4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x150FBEA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150FBEAC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x150FBEB0: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x150FBEB4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x150FBEB8: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x150FBEBC: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x150FBEC0: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x150FBEC4: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x150FBEC8: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
    // 0x150FBECC: sw          $t3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r11;
    // 0x150FBED0: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x150FBED4: jal         0x151C229C
    // 0x150FBED8: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    func_151C229C(rdram, ctx);
        goto after_7;
    // 0x150FBED8: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x150FBEDC: lw          $t4, 0x1C8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C8);
    // 0x150FBEE0: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x150FBEE4: lbu         $t7, 0x74($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X74);
    // 0x150FBEE8: andi        $t6, $t7, 0xF
    ctx->r14 = ctx->r15 & 0XF;
    // 0x150FBEEC: beql        $t6, $at, L_150FC190
    if (ctx->r14 == ctx->r1) {
        // 0x150FBEF0: lbu         $t9, 0x1C3($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X1C3);
            goto L_150FC190;
    }
    goto skip_8;
    // 0x150FBEF0: lbu         $t9, 0x1C3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1C3);
    skip_8:
    // 0x150FBEF4: jal         0x150ADA20
    // 0x150FBEF8: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x150FBEF8: nop

    after_8:
    // 0x150FBEFC: andi        $t8, $v0, 0x7
    ctx->r24 = ctx->r2 & 0X7;
    // 0x150FBF00: bne         $t8, $zero, L_150FBFB4
    if (ctx->r24 != 0) {
        // 0x150FBF04: addiu       $t9, $zero, 0x3
        ctx->r25 = ADD32(0, 0X3);
            goto L_150FBFB4;
    }
    // 0x150FBF04: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x150FBF08: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x150FBF0C: sb          $t9, 0x128($sp)
    MEM_B(0X128, ctx->r29) = ctx->r25;
    // 0x150FBF10: jal         0x150ADA20
    // 0x150FBF14: sb          $t5, 0x129($sp)
    MEM_B(0X129, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_9;
    // 0x150FBF14: sb          $t5, 0x129($sp)
    MEM_B(0X129, ctx->r29) = ctx->r13;
    after_9:
    // 0x150FBF18: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x150FBF1C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150FBF20: lwc1        $f10, 0x1B4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1B4);
    // 0x150FBF24: lwc1        $f6, 0x1B8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1B8);
    // 0x150FBF28: mfhi        $t3
    ctx->r11 = hi;
    // 0x150FBF2C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150FBF30: lwc1        $f10, 0x1BC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1BC);
    // 0x150FBF34: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x150FBF38: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150FBF3C: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x150FBF40: sh          $t4, 0x12A($sp)
    MEM_H(0X12A, ctx->r29) = ctx->r12;
    // 0x150FBF44: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x150FBF48: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x150FBF4C: sb          $zero, 0x12C($sp)
    MEM_B(0X12C, ctx->r29) = 0;
    // 0x150FBF50: sw          $t6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r14;
    // 0x150FBF54: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x150FBF58: sw          $t9, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r25;
    // 0x150FBF5C: jal         0x150ADA20
    // 0x150FBF60: sw          $t3, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r11;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x150FBF60: sw          $t3, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r11;
    after_10:
    // 0x150FBF64: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x150FBF68: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150FBF6C: lbu         $t8, 0x1DB($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1DB);
    // 0x150FBF70: lw          $t9, 0x1DC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1DC);
    // 0x150FBF74: mfhi        $a2
    ctx->r6 = hi;
    // 0x150FBF78: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x150FBF7C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150FBF80: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FBF84: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150FBF88: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x150FBF8C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150FBF90: addiu       $a2, $a2, 0x46
    ctx->r6 = ADD32(ctx->r6, 0X46);
    // 0x150FBF94: addiu       $a0, $sp, 0x128
    ctx->r4 = ADD32(ctx->r29, 0X128);
    // 0x150FBF98: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x150FBF9C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x150FBFA0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150FBFA4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150FBFA8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x150FBFAC: jal         0x151602C0
    // 0x150FBFB0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    func_151602C0(rdram, ctx);
        goto after_11;
    // 0x150FBFB0: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    after_11:
L_150FBFB4:
    // 0x150FBFB4: jal         0x150ADA20
    // 0x150FBFB8: nop

    func_150ADA20(rdram, ctx);
        goto after_12;
    // 0x150FBFB8: nop

    after_12:
    // 0x150FBFBC: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x150FBFC0: bne         $t5, $zero, L_150FC18C
    if (ctx->r13 != 0) {
        // 0x150FBFC4: lbu         $v1, 0x1CF($sp)
        ctx->r3 = MEM_BU(ctx->r29, 0X1CF);
            goto L_150FC18C;
    }
    // 0x150FBFC4: lbu         $v1, 0x1CF($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FBFC8: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x150FBFCC: subu        $t3, $t3, $v1
    ctx->r11 = SUB32(ctx->r11, ctx->r3);
    // 0x150FBFD0: sll         $v1, $t3, 2
    ctx->r3 = S32(ctx->r11 << 2);
    // 0x150FBFD4: jal         0x150ADA68
    // 0x150FBFD8: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    func_150ADA68(rdram, ctx);
        goto after_13;
    // 0x150FBFD8: sw          $v1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r3;
    after_13:
    // 0x150FBFDC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FBFE0: lwc1        $f6, 0x1E9C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1E9C);
    // 0x150FBFE4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FBFE8: lwc1        $f10, 0x1EA0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1EA0);
    // 0x150FBFEC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150FBFF0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FBFF4: jal         0x150ADA68
    // 0x150FBFF8: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    func_150ADA68(rdram, ctx);
        goto after_14;
    // 0x150FBFF8: swc1        $f4, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x150FBFFC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC000: lwc1        $f6, 0x1EA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1EA4);
    // 0x150FC004: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC008: lwc1        $f10, 0x1EA8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1EA8);
    // 0x150FC00C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150FC010: lbu         $t4, 0x1C3($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X1C3);
    // 0x150FC014: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x150FC018: lw          $t7, 0x1C4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C4);
    // 0x150FC01C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FC020: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FC024: beq         $t4, $zero, L_150FC038
    if (ctx->r12 == 0) {
        // 0x150FC028: swc1        $f4, 0x114($sp)
        MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
            goto L_150FC038;
    }
    // 0x150FC028: swc1        $f4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
    // 0x150FC02C: lw          $v0, 0x318($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X318);
    // 0x150FC030: bnel        $v0, $zero, L_150FC044
    if (ctx->r2 != 0) {
        // 0x150FC034: lbu         $t8, 0x23D($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X23D);
            goto L_150FC044;
    }
    goto skip_9;
    // 0x150FC034: lbu         $t8, 0x23D($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X23D);
    skip_9:
L_150FC038:
    // 0x150FC038: b           L_150FC054
    // 0x150FC03C: sb          $t6, 0x113($sp)
    MEM_B(0X113, ctx->r29) = ctx->r14;
        goto L_150FC054;
    // 0x150FC03C: sb          $t6, 0x113($sp)
    MEM_B(0X113, ctx->r29) = ctx->r14;
    // 0x150FC040: lbu         $t8, 0x23D($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X23D);
L_150FC044:
    // 0x150FC044: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150FC048: sllv        $t5, $t9, $t8
    ctx->r13 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x150FC04C: nor         $t4, $t5, $zero
    ctx->r12 = ~(ctx->r13 | 0);
    // 0x150FC050: sb          $t4, 0x113($sp)
    MEM_B(0X113, ctx->r29) = ctx->r12;
L_150FC054:
    // 0x150FC054: lw          $t7, 0x1C8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C8);
    // 0x150FC058: lbu         $t8, 0x1CF($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FC05C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x150FC060: lbu         $v0, 0x4($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X4);
    // 0x150FC064: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150FC068: lbu         $t6, 0x1CF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FC06C: bne         $a0, $v0, L_150FC088
    if (ctx->r4 != ctx->r2) {
        // 0x150FC070: addu        $t5, $t5, $t8
        ctx->r13 = ADD32(ctx->r13, ctx->r24);
            goto L_150FC088;
    }
    // 0x150FC070: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x150FC074: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150FC078: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x150FC07C: lbu         $t9, 0x1E34($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1E34);
    // 0x150FC080: b           L_150FC090
    // 0x150FC084: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
        goto L_150FC090;
    // 0x150FC084: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
L_150FC088:
    // 0x150FC088: lbu         $t5, 0x1DD0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X1DD0);
    // 0x150FC08C: sw          $t5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r13;
L_150FC090:
    // 0x150FC090: bne         $a0, $v0, L_150FC0AC
    if (ctx->r4 != ctx->r2) {
        // 0x150FC094: lui         $t7, 0x800A
        ctx->r15 = S32(0X800A << 16);
            goto L_150FC0AC;
    }
    // 0x150FC094: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x150FC098: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x150FC09C: addiu       $t3, $t3, 0x1E38
    ctx->r11 = ADD32(ctx->r11, 0X1E38);
    // 0x150FC0A0: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x150FC0A4: b           L_150FC0B8
    // 0x150FC0A8: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
        goto L_150FC0B8;
    // 0x150FC0A8: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
L_150FC0AC:
    // 0x150FC0AC: addiu       $t7, $t7, 0x1DD4
    ctx->r15 = ADD32(ctx->r15, 0X1DD4);
    // 0x150FC0B0: addu        $t6, $v1, $t7
    ctx->r14 = ADD32(ctx->r3, ctx->r15);
    // 0x150FC0B4: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
L_150FC0B8:
    // 0x150FC0B8: bne         $a0, $v0, L_150FC0D4
    if (ctx->r4 != ctx->r2) {
        // 0x150FC0BC: lui         $t5, 0x800A
        ctx->r13 = S32(0X800A << 16);
            goto L_150FC0D4;
    }
    // 0x150FC0BC: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x150FC0C0: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x150FC0C4: addiu       $t9, $t9, 0x1E50
    ctx->r25 = ADD32(ctx->r25, 0X1E50);
    // 0x150FC0C8: addu        $t8, $v1, $t9
    ctx->r24 = ADD32(ctx->r3, ctx->r25);
    // 0x150FC0CC: b           L_150FC0E0
    // 0x150FC0D0: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
        goto L_150FC0E0;
    // 0x150FC0D0: sw          $t8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r24;
L_150FC0D4:
    // 0x150FC0D4: addiu       $t5, $t5, 0x1DEC
    ctx->r13 = ADD32(ctx->r13, 0X1DEC);
    // 0x150FC0D8: addu        $t3, $v1, $t5
    ctx->r11 = ADD32(ctx->r3, ctx->r13);
    // 0x150FC0DC: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_150FC0E0:
    // 0x150FC0E0: jal         0x150ADA20
    // 0x150FC0E4: nop

    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x150FC0E4: nop

    after_15:
    // 0x150FC0E8: jal         0x150ADA20
    // 0x150FC0EC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    func_150ADA20(rdram, ctx);
        goto after_16;
    // 0x150FC0EC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    after_16:
    // 0x150FC0F0: jal         0x150ADA68
    // 0x150FC0F4: sw          $v0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r2;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x150FC0F4: sw          $v0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r2;
    after_17:
    // 0x150FC0F8: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x150FC0FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150FC100: lw          $v1, 0xAC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XAC);
    // 0x150FC104: divu        $zero, $t0, $at
    lo = S32(U32(ctx->r8) / U32(ctx->r1)); hi = S32(U32(ctx->r8) % U32(ctx->r1));
    // 0x150FC108: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x150FC10C: mfhi        $t7
    ctx->r15 = hi;
    // 0x150FC110: addiu       $t6, $t7, 0x4
    ctx->r14 = ADD32(ctx->r15, 0X4);
    // 0x150FC114: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150FC118: divu        $zero, $v1, $at
    lo = S32(U32(ctx->r3) / U32(ctx->r1)); hi = S32(U32(ctx->r3) % U32(ctx->r1));
    // 0x150FC11C: lui         $at, 0x447D
    ctx->r1 = S32(0X447D << 16);
    // 0x150FC120: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FC124: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150FC128: lwc1        $f10, 0x1EAC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1EAC);
    // 0x150FC12C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x150FC130: addiu       $t4, $sp, 0x114
    ctx->r12 = ADD32(ctx->r29, 0X114);
    // 0x150FC134: lw          $t6, 0x1DC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1DC);
    // 0x150FC138: lbu         $t7, 0x1DB($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1DB);
    // 0x150FC13C: lbu         $t3, 0x113($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X113);
    // 0x150FC140: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150FC144: mfhi        $t9
    ctx->r25 = hi;
    // 0x150FC148: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150FC14C: addiu       $t8, $t9, 0x9B
    ctx->r24 = ADD32(ctx->r25, 0X9B);
    // 0x150FC150: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150FC154: addiu       $t5, $sp, 0x1B4
    ctx->r13 = ADD32(ctx->r29, 0X1B4);
    // 0x150FC158: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x150FC15C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x150FC160: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x150FC164: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x150FC168: lw          $a0, 0x1C8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C8);
    // 0x150FC16C: lbu         $a1, 0x97($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X97);
    // 0x150FC170: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    // 0x150FC174: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x150FC178: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x150FC17C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x150FC180: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x150FC184: jal         0x15102B38
    // 0x150FC188: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    func_15102B38(rdram, ctx);
        goto after_18;
    // 0x150FC188: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    after_18:
L_150FC18C:
    // 0x150FC18C: lbu         $t9, 0x1C3($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1C3);
L_150FC190:
    // 0x150FC190: lw          $t8, 0x1C4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C4);
    // 0x150FC194: beql        $t9, $zero, L_150FC35C
    if (ctx->r25 == 0) {
        // 0x150FC198: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150FC35C;
    }
    goto skip_10;
    // 0x150FC198: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_10:
    // 0x150FC19C: lw          $t5, 0x318($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X318);
    // 0x150FC1A0: lbu         $t3, 0x1CF($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FC1A4: beql        $t5, $zero, L_150FC35C
    if (ctx->r13 == 0) {
        // 0x150FC1A8: lw          $ra, 0x74($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X74);
            goto L_150FC35C;
    }
    goto skip_11;
    // 0x150FC1A8: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    skip_11:
    // 0x150FC1AC: beq         $t3, $zero, L_150FC1C4
    if (ctx->r11 == 0) {
        // 0x150FC1B0: lui         $at, 0x426C
        ctx->r1 = S32(0X426C << 16);
            goto L_150FC1C4;
    }
    // 0x150FC1B0: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x150FC1B4: lui         $at, 0xC26C
    ctx->r1 = S32(0XC26C << 16);
    // 0x150FC1B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150FC1BC: b           L_150FC1D0
    // 0x150FC1C0: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
        goto L_150FC1D0;
    // 0x150FC1C0: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
L_150FC1C4:
    // 0x150FC1C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FC1C8: nop

    // 0x150FC1CC: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
L_150FC1D0:
    // 0x150FC1D0: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x150FC1D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150FC1D8: jal         0x150ADA68
    // 0x150FC1DC: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_19;
    // 0x150FC1DC: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    after_19:
    // 0x150FC1E0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150FC1E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FC1E8: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x150FC1EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FC1F0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150FC1F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FC1F8: jal         0x150ADA68
    // 0x150FC1FC: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x150FC1FC: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    after_20:
    // 0x150FC200: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x150FC204: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150FC208: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150FC20C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150FC210: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150FC214: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x150FC218: sb          $t4, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r12;
    // 0x150FC21C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x150FC220: jal         0x150ADA20
    // 0x150FC224: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_21;
    // 0x150FC224: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    after_21:
    // 0x150FC228: lbu         $t9, 0x1CF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FC22C: andi        $t7, $v0, 0x3
    ctx->r15 = ctx->r2 & 0X3;
    // 0x150FC230: addiu       $t6, $t7, 0x5
    ctx->r14 = ADD32(ctx->r15, 0X5);
    // 0x150FC234: beq         $t9, $zero, L_150FC244
    if (ctx->r25 == 0) {
        // 0x150FC238: sh          $t6, 0xCA($sp)
        MEM_H(0XCA, ctx->r29) = ctx->r14;
            goto L_150FC244;
    }
    // 0x150FC238: sh          $t6, 0xCA($sp)
    MEM_H(0XCA, ctx->r29) = ctx->r14;
    // 0x150FC23C: b           L_150FC248
    // 0x150FC240: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_150FC248;
    // 0x150FC240: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_150FC244:
    // 0x150FC244: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_150FC248:
    // 0x150FC248: ori         $t4, $v1, 0x39
    ctx->r12 = ctx->r3 | 0X39;
    // 0x150FC24C: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150FC250: addiu       $t6, $zero, 0x55
    ctx->r14 = ADD32(0, 0X55);
    // 0x150FC254: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150FC258: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150FC25C: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FC260: sh          $t4, 0xCC($sp)
    MEM_H(0XCC, ctx->r29) = ctx->r12;
    // 0x150FC264: sh          $t7, 0xCE($sp)
    MEM_H(0XCE, ctx->r29) = ctx->r15;
    // 0x150FC268: sh          $t6, 0xD0($sp)
    MEM_H(0XD0, ctx->r29) = ctx->r14;
    // 0x150FC26C: sb          $zero, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = 0;
    // 0x150FC270: sb          $t9, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r25;
    // 0x150FC274: sb          $t8, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r24;
    // 0x150FC278: jal         0x150ADA20
    // 0x150FC27C: sb          $t5, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r13;
    func_150ADA20(rdram, ctx);
        goto after_22;
    // 0x150FC27C: sb          $t5, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r13;
    after_22:
    // 0x150FC280: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x150FC284: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x150FC288: mfhi        $t3
    ctx->r11 = hi;
    // 0x150FC28C: addiu       $t4, $t3, 0xC8
    ctx->r12 = ADD32(ctx->r11, 0XC8);
    // 0x150FC290: lui         $t3, 0x20
    ctx->r11 = S32(0X20 << 16);
    // 0x150FC294: ori         $t3, $t3, 0x4
    ctx->r11 = ctx->r11 | 0X4;
    // 0x150FC298: sb          $t4, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = ctx->r12;
    // 0x150FC29C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150FC2A0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150FC2A4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x150FC2A8: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x150FC2AC: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150FC2B0: sw          $t3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r11;
    // 0x150FC2B4: lw          $t3, 0x1C4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C4);
    // 0x150FC2B8: sb          $t7, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r15;
    // 0x150FC2BC: sb          $t6, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r14;
    // 0x150FC2C0: sb          $t9, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r25;
    // 0x150FC2C4: sb          $t8, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r24;
    // 0x150FC2C8: sb          $t5, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r13;
    // 0x150FC2CC: lui         $t4, 0x1F
    ctx->r12 = S32(0X1F << 16);
    // 0x150FC2D0: ori         $t4, $t4, 0x601
    ctx->r12 = ctx->r12 | 0X601;
    // 0x150FC2D4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x150FC2D8: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x150FC2DC: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x150FC2E0: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x150FC2E4: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x150FC2E8: sw          $zero, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = 0;
    // 0x150FC2EC: sw          $t4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r12;
    // 0x150FC2F0: sw          $t7, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r15;
    // 0x150FC2F4: sw          $t6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r14;
    // 0x150FC2F8: sw          $t9, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r25;
    // 0x150FC2FC: sw          $t8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r24;
    // 0x150FC300: sb          $zero, 0xF8($sp)
    MEM_B(0XF8, ctx->r29) = 0;
    // 0x150FC304: sb          $t5, 0xF9($sp)
    MEM_B(0XF9, ctx->r29) = ctx->r13;
    // 0x150FC308: lw          $t4, 0x318($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X318);
    // 0x150FC30C: lw          $t6, 0x1DC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1DC);
    // 0x150FC310: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x150FC314: lbu         $t7, 0x23D($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X23D);
    // 0x150FC318: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x150FC31C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150FC320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x150FC324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150FC328: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150FC32C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x150FC330: jal         0x1515548C
    // 0x150FC334: sb          $t7, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r15;
    func_1515548C(rdram, ctx);
        goto after_23;
    // 0x150FC334: sb          $t7, 0xFC($sp)
    MEM_B(0XFC, ctx->r29) = ctx->r15;
    after_23:
    // 0x150FC338: lbu         $t9, 0x1CF($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1CF);
    // 0x150FC33C: lw          $t8, 0x1C4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C4);
    // 0x150FC340: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x150FC344: sb          $t9, 0xB0($sp)
    MEM_B(0XB0, ctx->r29) = ctx->r25;
    // 0x150FC348: lw          $t5, 0x318($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X318);
    // 0x150FC34C: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    // 0x150FC350: jal         0x1515572C
    // 0x150FC354: sw          $t5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r13;
    func_1515572C(rdram, ctx);
        goto after_24;
    // 0x150FC354: sw          $t5, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r13;
    after_24:
L_150FC358:
    // 0x150FC358: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_150FC35C:
    // 0x150FC35C: addiu       $sp, $sp, 0x1C8
    ctx->r29 = ADD32(ctx->r29, 0X1C8);
    // 0x150FC360: jr          $ra
    // 0x150FC364: nop

    return;
    return;
    // 0x150FC364: nop

;}
RECOMP_FUNC void func_151045F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151045F4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151045F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151045FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15104600: jr          $ra
    // 0x15104604: nop

    return;
    return;
    // 0x15104604: nop

;}
RECOMP_FUNC void func_1513BEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513BEB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1513BEB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1513BEB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1513BEBC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513BEC0: lwc1        $f4, 0x4A84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4A84);
    // 0x1513BEC4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1513BEC8: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1513BECC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x1513BED0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1513BED4: addu        $s0, $a0, $t6
    ctx->r16 = ADD32(ctx->r4, ctx->r14);
    // 0x1513BED8: lwc1        $f10, 0x100($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X100);
    // 0x1513BEDC: addiu       $s0, $s0, 0xF8
    ctx->r16 = ADD32(ctx->r16, 0XF8);
    // 0x1513BEE0: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x1513BEE4: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x1513BEE8: jal         0x15144B68
    // 0x1513BEEC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    func_15144B68(rdram, ctx);
        goto after_0;
    // 0x1513BEEC: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    after_0:
    // 0x1513BEF0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x1513BEF4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513BEF8: lwc1        $f18, 0x4A88($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4A88);
    // 0x1513BEFC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1513BF00: lwc1        $f4, -0x165C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x1513BF04: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1513BF08: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x1513BF0C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1513BF10: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1513BF14: jal         0x15047D60
    // 0x1513BF18: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x1513BF18: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x1513BF1C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513BF20: lwc1        $f16, 0x4A8C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4A8C);
    // 0x1513BF24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1513BF28: addiu       $v0, $v0, -0x165C
    ctx->r2 = ADD32(ctx->r2, -0X165C);
    // 0x1513BF2C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1513BF30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513BF34: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1513BF38: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x1513BF3C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1513BF40: lwc1        $f4, 0x4A90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4A90);
    // 0x1513BF44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1513BF48: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x1513BF4C: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x1513BF50: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x1513BF54: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x1513BF58: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1513BF5C: lwc1        $f18, 0x4A94($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4A94);
    // 0x1513BF60: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x1513BF64: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x1513BF68: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1513BF6C: jal         0x15144B68
    // 0x1513BF70: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    func_15144B68(rdram, ctx);
        goto after_2;
    // 0x1513BF70: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x1513BF74: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x1513BF78: jal         0x15144B68
    // 0x1513BF7C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    func_15144B68(rdram, ctx);
        goto after_3;
    // 0x1513BF7C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    after_3:
    // 0x1513BF80: lui         $at, 0x4580
    ctx->r1 = S32(0X4580 << 16);
    // 0x1513BF84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x1513BF88: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1513BF8C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x1513BF90: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x1513BF94: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x1513BF98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513BF9C: bc1fl       L_1513BFC4
    if (!c1cs) {
        // 0x1513BFA0: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_1513BFC4;
    }
    goto skip_0;
    // 0x1513BFA0: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_0:
    // 0x1513BFA4: sub.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
L_1513BFA8:
    // 0x1513BFA8: swc1        $f16, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f16.u32l;
    // 0x1513BFAC: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1513BFB0: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x1513BFB4: nop

    // 0x1513BFB8: bc1tl       L_1513BFA8
    if (c1cs) {
        // 0x1513BFBC: sub.s       $f16, $f2, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
            goto L_1513BFA8;
    }
    goto skip_1;
    // 0x1513BFBC: sub.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
    skip_1:
    // 0x1513BFC0: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_1513BFC4:
    // 0x1513BFC4: nop

    // 0x1513BFC8: bc1fl       L_1513BFF0
    if (!c1cs) {
        // 0x1513BFCC: lwc1        $f0, 0x4($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
            goto L_1513BFF0;
    }
    goto skip_2;
    // 0x1513BFCC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    skip_2:
    // 0x1513BFD0: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
L_1513BFD4:
    // 0x1513BFD4: swc1        $f18, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f18.u32l;
    // 0x1513BFD8: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x1513BFDC: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x1513BFE0: nop

    // 0x1513BFE4: bc1tl       L_1513BFD4
    if (c1cs) {
        // 0x1513BFE8: add.s       $f18, $f2, $f12
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
            goto L_1513BFD4;
    }
    goto skip_3;
    // 0x1513BFE8: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
    skip_3:
    // 0x1513BFEC: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
L_1513BFF0:
    // 0x1513BFF0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1513BFF4: nop

    // 0x1513BFF8: bc1fl       L_1513C020
    if (!c1cs) {
        // 0x1513BFFC: c.lt.s      $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
            goto L_1513C020;
    }
    goto skip_4;
    // 0x1513BFFC: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    skip_4:
    // 0x1513C000: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
L_1513C004:
    // 0x1513C004: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x1513C008: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1513C00C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x1513C010: nop

    // 0x1513C014: bc1tl       L_1513C004
    if (c1cs) {
        // 0x1513C018: sub.s       $f4, $f0, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
            goto L_1513C004;
    }
    goto skip_5;
    // 0x1513C018: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    skip_5:
    // 0x1513C01C: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
L_1513C020:
    // 0x1513C020: nop

    // 0x1513C024: bc1f        L_1513C048
    if (!c1cs) {
        // 0x1513C028: nop
    
            goto L_1513C048;
    }
    // 0x1513C028: nop

    // 0x1513C02C: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
L_1513C030:
    // 0x1513C030: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x1513C034: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x1513C038: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x1513C03C: nop

    // 0x1513C040: bc1tl       L_1513C030
    if (c1cs) {
        // 0x1513C044: add.s       $f8, $f0, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
            goto L_1513C030;
    }
    goto skip_6;
    // 0x1513C044: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    skip_6:
L_1513C048:
    // 0x1513C048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x1513C04C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1513C050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1513C054: jr          $ra
    // 0x1513C058: nop

    return;
    return;
    // 0x1513C058: nop

    // 0x1513C05C: nop

;}
RECOMP_FUNC void func_15126378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15126378: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x1512637C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15126380: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15126384: lwc1        $f2, 0x3558($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3558);
    // 0x15126388: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512638C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15126390: lbu         $t7, 0x23D($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X23D);
    // 0x15126394: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x15126398: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x1512639C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x151263A0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x151263A4: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x151263A8: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x151263AC: lwc1        $f0, 0x6C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X6C);
    // 0x151263B0: lwc1        $f4, 0x70($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X70);
    // 0x151263B4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x151263B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151263BC: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151263C0: lw          $t0, 0x3D4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X3D4);
    // 0x151263C4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x151263C8: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x151263CC: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x151263D0: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x151263D4: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x151263D8: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x151263DC: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x151263E0: lbu         $a2, 0x23E($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X23E);
    // 0x151263E4: bnel        $a2, $at, L_15126400
    if (ctx->r6 != ctx->r1) {
        // 0x151263E8: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_15126400;
    }
    goto skip_0;
    // 0x151263E8: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    skip_0:
    // 0x151263EC: lw          $t9, 0x3D0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3D0);
    // 0x151263F0: addiu       $at, $zero, 0x76
    ctx->r1 = ADD32(0, 0X76);
    // 0x151263F4: lhu         $t4, 0x84($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X84);
    // 0x151263F8: bne         $t4, $at, L_15126408
    if (ctx->r12 != ctx->r1) {
        // 0x151263FC: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_15126408;
    }
    // 0x151263FC: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
L_15126400:
    // 0x15126400: bnel        $a2, $at, L_15126428
    if (ctx->r6 != ctx->r1) {
        // 0x15126404: lbu         $a0, 0x197($t0)
        ctx->r4 = MEM_BU(ctx->r8, 0X197);
            goto L_15126428;
    }
    goto skip_1;
    // 0x15126404: lbu         $a0, 0x197($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X197);
    skip_1:
L_15126408:
    // 0x15126408: lhu         $t5, 0x36A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X36A);
    // 0x1512640C: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x15126410: ori         $t7, $t5, 0x10
    ctx->r15 = ctx->r13 | 0X10;
    // 0x15126414: sh          $t7, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r15;
    // 0x15126418: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x1512641C: ori         $t8, $t6, 0x10
    ctx->r24 = ctx->r14 | 0X10;
    // 0x15126420: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x15126424: lbu         $a0, 0x197($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X197);
L_15126428:
    // 0x15126428: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1512642C: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x15126430: bne         $a0, $zero, L_15126460
    if (ctx->r4 != 0) {
        // 0x15126434: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_15126460;
    }
    // 0x15126434: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x15126438: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x1512643C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x15126440: lb          $t9, 0x2($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X2);
    // 0x15126444: bnel        $t9, $zero, L_1512645C
    if (ctx->r25 != 0) {
        // 0x15126448: sb          $t5, 0x194($t0)
        MEM_B(0X194, ctx->r8) = ctx->r13;
            goto L_1512645C;
    }
    goto skip_2;
    // 0x15126448: sb          $t5, 0x194($t0)
    MEM_B(0X194, ctx->r8) = ctx->r13;
    skip_2:
    // 0x1512644C: lb          $t4, 0x3($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X3);
    // 0x15126450: beql        $t4, $zero, L_15126464
    if (ctx->r12 == 0) {
        // 0x15126454: lw          $v0, 0x3D0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X3D0);
            goto L_15126464;
    }
    goto skip_3;
    // 0x15126454: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    skip_3:
    // 0x15126458: sb          $t5, 0x194($t0)
    MEM_B(0X194, ctx->r8) = ctx->r13;
L_1512645C:
    // 0x1512645C: lbu         $a0, 0x197($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X197);
L_15126460:
    // 0x15126460: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
L_15126464:
    // 0x15126464: xori        $t2, $a2, 0x1B
    ctx->r10 = ctx->r6 ^ 0X1B;
    // 0x15126468: lbu         $v1, 0x65($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X65);
    // 0x1512646C: beq         $v1, $zero, L_151264A4
    if (ctx->r3 == 0) {
        // 0x15126470: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_151264A4;
    }
    // 0x15126470: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x15126474: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15126478: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1512647C: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x15126480: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15126484: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15126488: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1512648C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x15126490: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15126494: addiu       $t6, $t7, -0x32C
    ctx->r14 = ADD32(ctx->r15, -0X32C);
    // 0x15126498: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x1512649C: b           L_151264A8
    // 0x151264A0: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
        goto L_151264A8;
    // 0x151264A0: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
L_151264A4:
    // 0x151264A4: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
L_151264A8:
    // 0x151264A8: lbu         $v1, 0x11A($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X11A);
    // 0x151264AC: xori        $t4, $v1, 0x2
    ctx->r12 = ctx->r3 ^ 0X2;
    // 0x151264B0: sltiu       $v1, $t4, 0x1
    ctx->r3 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x151264B4: bne         $v1, $zero, L_151264DC
    if (ctx->r3 != 0) {
        // 0x151264B8: nop
    
            goto L_151264DC;
    }
    // 0x151264B8: nop

    // 0x151264BC: sltiu       $v1, $t2, 0x1
    ctx->r3 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x151264C0: bne         $v1, $zero, L_151264DC
    if (ctx->r3 != 0) {
        // 0x151264C4: xori        $a1, $a2, 0x1F
        ctx->r5 = ctx->r6 ^ 0X1F;
            goto L_151264DC;
    }
    // 0x151264C4: xori        $a1, $a2, 0x1F
    ctx->r5 = ctx->r6 ^ 0X1F;
    // 0x151264C8: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x151264CC: bne         $v1, $zero, L_151264DC
    if (ctx->r3 != 0) {
        // 0x151264D0: nop
    
            goto L_151264DC;
    }
    // 0x151264D0: nop

    // 0x151264D4: xori        $v1, $a2, 0x29
    ctx->r3 = ctx->r6 ^ 0X29;
    // 0x151264D8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
L_151264DC:
    // 0x151264DC: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x151264E0: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_15126534;
    }
    // 0x151264E0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x151264E4: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x151264E8: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_15126534;
    }
    // 0x151264E8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x151264EC: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x151264F0: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_15126534;
    }
    // 0x151264F0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x151264F4: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x151264F8: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_15126534;
    }
    // 0x151264F8: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x151264FC: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x15126500: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_15126534;
    }
    // 0x15126500: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15126504: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x15126508: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_15126534;
    }
    // 0x15126508: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x1512650C: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x15126510: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_15126534;
    }
    // 0x15126510: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x15126514: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x15126518: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_15126534;
    }
    // 0x15126518: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x1512651C: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x15126520: addiu       $at, $zero, 0x1F
        ctx->r1 = ADD32(0, 0X1F);
            goto L_15126534;
    }
    // 0x15126520: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x15126524: beq         $a2, $at, L_15126534
    if (ctx->r6 == ctx->r1) {
        // 0x15126528: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_15126534;
    }
    // 0x15126528: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x1512652C: bne         $a2, $at, L_15126B94
    if (ctx->r6 != ctx->r1) {
        // 0x15126530: nop
    
            goto L_15126B94;
    }
    // 0x15126530: nop

L_15126534:
    // 0x15126534: lw          $t5, 0x36C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X36C);
    // 0x15126538: lhu         $t7, 0x0($t5)
    ctx->r15 = MEM_HU(ctx->r13, 0X0);
    // 0x1512653C: andi        $t6, $t7, 0x10
    ctx->r14 = ctx->r15 & 0X10;
    // 0x15126540: beq         $t6, $zero, L_15126B94
    if (ctx->r14 == 0) {
        // 0x15126544: nop
    
            goto L_15126B94;
    }
    // 0x15126544: nop

    // 0x15126548: beq         $v1, $zero, L_15126B94
    if (ctx->r3 == 0) {
        // 0x1512654C: nop
    
            goto L_15126B94;
    }
    // 0x1512654C: nop

    // 0x15126550: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15126554: lw          $t4, 0xC8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC8);
    // 0x15126558: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1512655C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x15126560: nop

    // 0x15126564: beql        $t9, $zero, L_15126588
    if (ctx->r25 == 0) {
        // 0x15126568: lbu         $t6, 0x104($v0)
        ctx->r14 = MEM_BU(ctx->r2, 0X104);
            goto L_15126588;
    }
    goto skip_4;
    // 0x15126568: lbu         $t6, 0x104($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X104);
    skip_4:
    // 0x1512656C: lwc1        $f4, 0x28($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X28);
    // 0x15126570: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15126574: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x15126578: nop

    // 0x1512657C: bne         $t7, $zero, L_15126B94
    if (ctx->r15 != 0) {
        // 0x15126580: nop
    
            goto L_15126B94;
    }
    // 0x15126580: nop

    // 0x15126584: lbu         $t6, 0x104($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X104);
L_15126588:
    // 0x15126588: bne         $t6, $zero, L_15126B94
    if (ctx->r14 != 0) {
        // 0x1512658C: nop
    
            goto L_15126B94;
    }
    // 0x1512658C: nop

    // 0x15126590: bne         $a0, $zero, L_15126B94
    if (ctx->r4 != 0) {
        // 0x15126594: nop
    
            goto L_15126B94;
    }
    // 0x15126594: nop

    // 0x15126598: lw          $t8, 0x3D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D4);
    // 0x1512659C: xori        $v0, $a2, 0x1F
    ctx->r2 = ctx->r6 ^ 0X1F;
    // 0x151265A0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x151265A4: sb          $zero, 0x198($t8)
    MEM_B(0X198, ctx->r24) = 0;
    // 0x151265A8: bne         $v0, $zero, L_151265BC
    if (ctx->r2 != 0) {
        // 0x151265AC: sh          $zero, 0x73C($s0)
        MEM_H(0X73C, ctx->r16) = 0;
            goto L_151265BC;
    }
    // 0x151265AC: sh          $zero, 0x73C($s0)
    MEM_H(0X73C, ctx->r16) = 0;
    // 0x151265B0: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151265B4: bnel        $a2, $at, L_15126608
    if (ctx->r6 != ctx->r1) {
        // 0x151265B8: lw          $t8, 0x3D0($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X3D0);
            goto L_15126608;
    }
    goto skip_5;
    // 0x151265B8: lw          $t8, 0x3D0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D0);
    skip_5:
L_151265BC:
    // 0x151265BC: lw          $t9, 0x5F0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5F0);
    // 0x151265C0: lw          $t5, 0xC8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC8);
    // 0x151265C4: andi        $t4, $t9, 0x4
    ctx->r12 = ctx->r25 & 0X4;
    // 0x151265C8: bnel        $t4, $zero, L_15126608
    if (ctx->r12 != 0) {
        // 0x151265CC: lw          $t8, 0x3D0($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X3D0);
            goto L_15126608;
    }
    goto skip_6;
    // 0x151265CC: lw          $t8, 0x3D0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D0);
    skip_6:
    // 0x151265D0: lh          $t7, 0x2E4($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X2E4);
    // 0x151265D4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x151265D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151265DC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x151265E0: lwc1        $f4, 0x40($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X40);
    // 0x151265E4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x151265E8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151265EC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x151265F0: mul.s       $f0, $f10, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151265F4: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x151265F8: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x151265FC: b           L_1512661C
    // 0x15126600: sb          $t6, 0x194($t0)
    MEM_B(0X194, ctx->r8) = ctx->r14;
        goto L_1512661C;
    // 0x15126600: sb          $t6, 0x194($t0)
    MEM_B(0X194, ctx->r8) = ctx->r14;
    // 0x15126604: lw          $t8, 0x3D0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D0);
L_15126608:
    // 0x15126608: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x1512660C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15126610: lwc1        $f4, 0x40($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X40);
    // 0x15126614: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15126618: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
L_1512661C:
    // 0x1512661C: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x15126620: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x15126624: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    // 0x15126628: jal         0x15048758
    // 0x1512662C: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    func_15048758(rdram, ctx);
        goto after_0;
    // 0x1512662C: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    after_0:
    // 0x15126630: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15126634: lwc1        $f4, 0x355C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X355C);
    // 0x15126638: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1512663C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15126640: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x15126644: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15126648: jal         0x151239CC
    // 0x1512664C: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    func_151239CC(rdram, ctx);
        goto after_1;
    // 0x1512664C: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x15126650: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x15126654: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x15126658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1512665C: sb          $t9, 0x197($t0)
    MEM_B(0X197, ctx->r8) = ctx->r25;
    // 0x15126660: jal         0x151C9BA0
    // 0x15126664: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    func_151C9BA0(rdram, ctx);
        goto after_2;
    // 0x15126664: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    after_2:
    // 0x15126668: lw          $a1, 0x3D4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D4);
    // 0x1512666C: addiu       $t4, $s0, 0x2FC
    ctx->r12 = ADD32(ctx->r16, 0X2FC);
    // 0x15126670: addiu       $t7, $s0, 0x300
    ctx->r15 = ADD32(ctx->r16, 0X300);
    // 0x15126674: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x15126678: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1512667C: lw          $t5, 0x5F0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X5F0);
    // 0x15126680: addiu       $a3, $s0, 0x2F8
    ctx->r7 = ADD32(ctx->r16, 0X2F8);
    // 0x15126684: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15126688: andi        $t6, $t5, 0x10
    ctx->r14 = ctx->r13 & 0X10;
    // 0x1512668C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15126690: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x15126694: jal         0x1512623C
    // 0x15126698: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    func_1512623C(rdram, ctx);
        goto after_3;
    // 0x15126698: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    after_3:
    // 0x1512669C: jal         0x15047D60
    // 0x151266A0: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x151266A0: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    after_4:
    // 0x151266A4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151266A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151266AC: lwc1        $f4, 0x2F8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x151266B0: lw          $t8, 0x3D4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3D4);
    // 0x151266B4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x151266B8: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x151266BC: lw          $t4, 0x3D0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3D0);
    // 0x151266C0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151266C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151266C8: swc1        $f6, 0x2BC($s0)
    MEM_W(0X2BC, ctx->r16) = ctx->f6.u32l;
    // 0x151266CC: lh          $t9, 0x114($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X114);
    // 0x151266D0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x151266D4: nop

    // 0x151266D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x151266DC: lwc1        $f8, 0x18($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X18);
    // 0x151266E0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151266E4: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x151266E8: swc1        $f10, 0x2C0($s0)
    MEM_W(0X2C0, ctx->r16) = ctx->f10.u32l;
    // 0x151266EC: jal         0x15047C00
    // 0x151266F0: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x151266F0: lwc1        $f12, 0xA4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XA4);
    after_5:
    // 0x151266F4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x151266F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151266FC: lwc1        $f6, 0x300($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X300);
    // 0x15126700: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x15126704: mul.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15126708: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x1512670C: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x15126710: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x15126714: swc1        $f10, 0x2C4($s0)
    MEM_W(0X2C4, ctx->r16) = ctx->f10.u32l;
    // 0x15126718: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1512671C: lw          $t9, 0x190($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X190);
    // 0x15126720: sw          $at, 0x13C($t0)
    MEM_W(0X13C, ctx->r8) = ctx->r1;
    // 0x15126724: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x15126728: sw          $t5, 0x140($t0)
    MEM_W(0X140, ctx->r8) = ctx->r13;
    // 0x1512672C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15126730: sw          $at, 0x144($t0)
    MEM_W(0X144, ctx->r8) = ctx->r1;
    // 0x15126734: lwc1        $f4, 0x37C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X37C);
    // 0x15126738: swc1        $f4, 0x18C($t0)
    MEM_W(0X18C, ctx->r8) = ctx->f4.u32l;
    // 0x1512673C: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x15126740: sw          $at, 0x160($t0)
    MEM_W(0X160, ctx->r8) = ctx->r1;
    // 0x15126744: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x15126748: sw          $t8, 0x164($t0)
    MEM_W(0X164, ctx->r8) = ctx->r24;
    // 0x1512674C: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x15126750: beq         $t1, $t9, L_15126828
    if (ctx->r9 == ctx->r25) {
        // 0x15126754: sw          $at, 0x168($t0)
        MEM_W(0X168, ctx->r8) = ctx->r1;
            goto L_15126828;
    }
    // 0x15126754: sw          $at, 0x168($t0)
    MEM_W(0X168, ctx->r8) = ctx->r1;
    // 0x15126758: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x1512675C: bne         $t1, $at, L_15126774
    if (ctx->r9 != ctx->r1) {
        // 0x15126760: lwc1        $f8, 0xBC($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
            goto L_15126774;
    }
    // 0x15126760: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x15126764: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15126768: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x1512676C: b           L_1512679C
    // 0x15126770: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
        goto L_1512679C;
    // 0x15126770: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
L_15126774:
    // 0x15126774: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x15126778: bne         $t1, $at, L_1512678C
    if (ctx->r9 != ctx->r1) {
        // 0x1512677C: lui         $at, 0x3F40
        ctx->r1 = S32(0X3F40 << 16);
            goto L_1512678C;
    }
    // 0x1512677C: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x15126780: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15126784: b           L_1512679C
    // 0x15126788: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
        goto L_1512679C;
    // 0x15126788: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
L_1512678C:
    // 0x1512678C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15126790: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15126794: nop

    // 0x15126798: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
L_1512679C:
    // 0x1512679C: beq         $t1, $at, L_151267C4
    if (ctx->r9 == ctx->r1) {
        // 0x151267A0: addiu       $at, $zero, 0x41
        ctx->r1 = ADD32(0, 0X41);
            goto L_151267C4;
    }
    // 0x151267A0: addiu       $at, $zero, 0x41
    ctx->r1 = ADD32(0, 0X41);
    // 0x151267A4: beq         $t1, $at, L_151267C4
    if (ctx->r9 == ctx->r1) {
        // 0x151267A8: addiu       $at, $zero, 0x3F
        ctx->r1 = ADD32(0, 0X3F);
            goto L_151267C4;
    }
    // 0x151267A8: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x151267AC: beq         $t1, $at, L_151267C4
    if (ctx->r9 == ctx->r1) {
        // 0x151267B0: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_151267C4;
    }
    // 0x151267B0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x151267B4: beq         $t1, $at, L_151267C4
    if (ctx->r9 == ctx->r1) {
        // 0x151267B8: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_151267C4;
    }
    // 0x151267B8: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x151267BC: bnel        $t1, $at, L_1512680C
    if (ctx->r9 != ctx->r1) {
        // 0x151267C0: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_1512680C;
    }
    goto skip_7;
    // 0x151267C0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_7:
L_151267C4:
    // 0x151267C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x151267C8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151267CC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x151267D0: nop

    // 0x151267D4: bc1f        L_151267E4
    if (!c1cs) {
        // 0x151267D8: nop
    
            goto L_151267E4;
    }
    // 0x151267D8: nop

    // 0x151267DC: b           L_15126808
    // 0x151267E0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_15126808;
    // 0x151267E0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_151267E4:
    // 0x151267E4: lwc1        $f14, 0x3560($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X3560);
    // 0x151267E8: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x151267EC: nop

    // 0x151267F0: bc1fl       L_15126804
    if (!c1cs) {
        // 0x151267F4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15126804;
    }
    goto skip_8;
    // 0x151267F4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_8:
    // 0x151267F8: b           L_15126804
    // 0x151267FC: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_15126804;
    // 0x151267FC: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x15126800: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15126804:
    // 0x15126804: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_15126808:
    // 0x15126808: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_1512680C:
    // 0x1512680C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15126810: sb          $t4, 0x194($t0)
    MEM_B(0X194, ctx->r8) = ctx->r12;
    // 0x15126814: sub.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f8.fl;
    // 0x15126818: sw          $t1, 0x190($t0)
    MEM_W(0X190, ctx->r8) = ctx->r9;
    // 0x1512681C: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x15126820: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x15126824: swc1        $f4, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->f4.u32l;
L_15126828:
    // 0x15126828: lbu         $t7, 0x194($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X194);
    // 0x1512682C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x15126830: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x15126834: beql        $t7, $zero, L_15126860
    if (ctx->r15 == 0) {
        // 0x15126838: lwc1        $f0, 0x184($t0)
        ctx->f0.u32l = MEM_W(ctx->r8, 0X184);
            goto L_15126860;
    }
    goto skip_9;
    // 0x15126838: lwc1        $f0, 0x184($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X184);
    skip_9:
    // 0x1512683C: swc1        $f6, 0x174($t0)
    MEM_W(0X174, ctx->r8) = ctx->f6.u32l;
    // 0x15126840: lwc1        $f10, 0x174($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X174);
    // 0x15126844: swc1        $f12, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f12.u32l;
    // 0x15126848: swc1        $f12, 0x170($t0)
    MEM_W(0X170, ctx->r8) = ctx->f12.u32l;
    // 0x1512684C: swc1        $f12, 0x17C($t0)
    MEM_W(0X17C, ctx->r8) = ctx->f12.u32l;
    // 0x15126850: swc1        $f12, 0x180($t0)
    MEM_W(0X180, ctx->r8) = ctx->f12.u32l;
    // 0x15126854: sb          $zero, 0x194($t0)
    MEM_B(0X194, ctx->r8) = 0;
    // 0x15126858: swc1        $f10, 0x16C($t0)
    MEM_W(0X16C, ctx->r8) = ctx->f10.u32l;
    // 0x1512685C: lwc1        $f0, 0x184($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X184);
L_15126860:
    // 0x15126860: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x15126864: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x15126868: mul.s       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x1512686C: swc1        $f4, 0x188($t0)
    MEM_W(0X188, ctx->r8) = ctx->f4.u32l;
    // 0x15126870: swc1        $f0, 0x19C($s0)
    MEM_W(0X19C, ctx->r16) = ctx->f0.u32l;
    // 0x15126874: lwc1        $f6, 0x188($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X188);
    // 0x15126878: lw          $a1, 0x19C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X19C);
    // 0x1512687C: lbu         $a0, 0x23D($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X23D);
    // 0x15126880: swc1        $f6, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->f6.u32l;
    // 0x15126884: lwc1        $f10, 0x184($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X184);
    // 0x15126888: lw          $a2, 0x1A0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1A0);
    // 0x1512688C: swc1        $f10, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f10.u32l;
    // 0x15126890: lwc1        $f8, 0x188($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X188);
    // 0x15126894: swc1        $f8, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f8.u32l;
    // 0x15126898: jal         0x1510B32C
    // 0x1512689C: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    func_1510B32C(rdram, ctx);
        goto after_6;
    // 0x1512689C: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    after_6:
    // 0x151268A0: lbu         $t6, 0x23D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23D);
    // 0x151268A4: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x151268A8: lw          $t5, -0x19D8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X19D8);
    // 0x151268AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151268B0: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x151268B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151268B8: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x151268BC: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x151268C0: addu        $t9, $t5, $t8
    ctx->r25 = ADD32(ctx->r13, ctx->r24);
    // 0x151268C4: swc1        $f4, 0x84($t9)
    MEM_W(0X84, ctx->r25) = ctx->f4.u32l;
    // 0x151268C8: jal         0x150627D4
    // 0x151268CC: lw          $a0, 0x3D0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3D0);
    func_150627D4(rdram, ctx);
        goto after_7;
    // 0x151268CC: lw          $a0, 0x3D0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3D0);
    after_7:
    // 0x151268D0: lbu         $t7, 0x23D($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X23D);
    // 0x151268D4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x151268D8: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x151268DC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x151268E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x151268E4: sb          $t4, -0x400C($at)
    MEM_B(-0X400C, ctx->r1) = ctx->r12;
    // 0x151268E8: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x151268EC: beq         $t1, $at, L_151268FC
    if (ctx->r9 == ctx->r1) {
        // 0x151268F0: lw          $t0, 0xCC($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XCC);
            goto L_151268FC;
    }
    // 0x151268F0: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x151268F4: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x151268F8: bne         $t1, $at, L_151269E8
    if (ctx->r9 != ctx->r1) {
        // 0x151268FC: lui         $t9, 0x1512
        ctx->r25 = S32(0X1512 << 16);
            goto L_151269E8;
    }
L_151268FC:
    // 0x151268FC: lui         $t9, 0x1512
    ctx->r25 = S32(0X1512 << 16);
    // 0x15126900: addiu       $t9, $t9, 0x7520
    ctx->r25 = ADD32(ctx->r25, 0X7520);
    // 0x15126904: addiu       $t6, $zero, 0x6590
    ctx->r14 = ADD32(0, 0X6590);
    // 0x15126908: addiu       $t5, $zero, 0x12C
    ctx->r13 = ADD32(0, 0X12C);
    // 0x1512690C: addiu       $t8, $zero, 0x12B
    ctx->r24 = ADD32(0, 0X12B);
    // 0x15126910: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x15126914: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x15126918: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1512691C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x15126920: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15126924: lwc1        $f6, 0x1A4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x15126928: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512692C: lwc1        $f8, 0x3564($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3564);
    // 0x15126930: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x15126934: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15126938: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x1512693C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15126940: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    // 0x15126944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15126948: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1512694C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15126950: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x15126954: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15126958: nop

    // 0x1512695C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15126960: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15126964: nop

    // 0x15126968: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1512696C: beql        $t7, $zero, L_151269BC
    if (ctx->r15 == 0) {
        // 0x15126970: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_151269BC;
    }
    goto skip_10;
    // 0x15126970: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_10:
    // 0x15126974: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15126978: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1512697C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15126980: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15126984: nop

    // 0x15126988: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1512698C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15126990: nop

    // 0x15126994: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x15126998: bne         $t7, $zero, L_151269B0
    if (ctx->r15 != 0) {
        // 0x1512699C: nop
    
            goto L_151269B0;
    }
    // 0x1512699C: nop

    // 0x151269A0: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x151269A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x151269A8: b           L_151269C8
    // 0x151269AC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_151269C8;
    // 0x151269AC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_151269B0:
    // 0x151269B0: b           L_151269C8
    // 0x151269B4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_151269C8;
    // 0x151269B4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151269B8: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_151269BC:
    // 0x151269BC: nop

    // 0x151269C0: bltz        $t7, L_151269B0
    if (SIGNED(ctx->r15) < 0) {
        // 0x151269C4: nop
    
            goto L_151269B0;
    }
    // 0x151269C4: nop

L_151269C8:
    // 0x151269C8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x151269CC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x151269D0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x151269D4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151269D8: jal         0x1000FA64
    // 0x151269DC: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    func_1000FA64(rdram, ctx);
        goto after_8;
    // 0x151269DC: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    after_8:
    // 0x151269E0: b           L_15126B58
    // 0x151269E4: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
        goto L_15126B58;
    // 0x151269E4: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
L_151269E8:
    // 0x151269E8: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x151269EC: beq         $t1, $at, L_15126A04
    if (ctx->r9 == ctx->r1) {
        // 0x151269F0: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_15126A04;
    }
    // 0x151269F0: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x151269F4: bne         $t6, $zero, L_15126A04
    if (ctx->r14 != 0) {
        // 0x151269F8: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_15126A04;
    }
    // 0x151269F8: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x151269FC: bnel        $t1, $at, L_15126B5C
    if (ctx->r9 != ctx->r1) {
        // 0x15126A00: lw          $v0, 0xC8($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XC8);
            goto L_15126B5C;
    }
    goto skip_11;
    // 0x15126A00: lw          $v0, 0xC8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC8);
    skip_11:
L_15126A04:
    // 0x15126A04: lwc1        $f10, 0x174($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X174);
    // 0x15126A08: lwc1        $f8, 0x178($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X178);
    // 0x15126A0C: lui         $t4, 0x1512
    ctx->r12 = S32(0X1512 << 16);
    // 0x15126A10: addiu       $t4, $t4, 0x7520
    ctx->r12 = ADD32(ctx->r12, 0X7520);
    // 0x15126A14: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15126A18: addiu       $t5, $zero, 0x6590
    ctx->r13 = ADD32(0, 0X6590);
    // 0x15126A1C: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x15126A20: addiu       $t9, $zero, 0x12B
    ctx->r25 = ADD32(0, 0X12B);
    // 0x15126A24: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x15126A28: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15126A2C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x15126A30: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x15126A34: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x15126A38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15126A3C: lwc1        $f6, 0x1A4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x15126A40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15126A44: lwc1        $f8, 0x3568($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3568);
    // 0x15126A48: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x15126A4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15126A50: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15126A54: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x15126A58: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x15126A5C: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    // 0x15126A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15126A64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15126A68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15126A6C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x15126A70: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x15126A74: nop

    // 0x15126A78: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x15126A7C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x15126A80: nop

    // 0x15126A84: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x15126A88: beql        $t6, $zero, L_15126AD8
    if (ctx->r14 == 0) {
        // 0x15126A8C: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_15126AD8;
    }
    goto skip_12;
    // 0x15126A8C: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_12:
    // 0x15126A90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15126A94: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15126A98: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15126A9C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x15126AA0: nop

    // 0x15126AA4: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x15126AA8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x15126AAC: nop

    // 0x15126AB0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x15126AB4: bne         $t6, $zero, L_15126ACC
    if (ctx->r14 != 0) {
        // 0x15126AB8: nop
    
            goto L_15126ACC;
    }
    // 0x15126AB8: nop

    // 0x15126ABC: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x15126AC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15126AC4: b           L_15126AE4
    // 0x15126AC8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_15126AE4;
    // 0x15126AC8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_15126ACC:
    // 0x15126ACC: b           L_15126AE4
    // 0x15126AD0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_15126AE4;
    // 0x15126AD0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x15126AD4: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_15126AD8:
    // 0x15126AD8: nop

    // 0x15126ADC: bltz        $t6, L_15126ACC
    if (SIGNED(ctx->r14) < 0) {
        // 0x15126AE0: nop
    
            goto L_15126ACC;
    }
    // 0x15126AE0: nop

L_15126AE4:
    // 0x15126AE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x15126AE8: or          $t5, $t6, $at
    ctx->r13 = ctx->r14 | ctx->r1;
    // 0x15126AEC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x15126AF0: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x15126AF4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x15126AF8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15126AFC: jal         0x1000FA64
    // 0x15126B00: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    func_1000FA64(rdram, ctx);
        goto after_9;
    // 0x15126B00: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    after_9:
    // 0x15126B04: lw          $t5, 0x9C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X9C);
    // 0x15126B08: lui         $t6, 0x1512
    ctx->r14 = S32(0X1512 << 16);
    // 0x15126B0C: addiu       $t6, $t6, 0x77B0
    ctx->r14 = ADD32(ctx->r14, 0X77B0);
    // 0x15126B10: addiu       $t9, $zero, 0x3E80
    ctx->r25 = ADD32(0, 0X3E80);
    // 0x15126B14: addiu       $t4, $zero, 0x12C
    ctx->r12 = ADD32(0, 0X12C);
    // 0x15126B18: addiu       $t7, $zero, 0x12B
    ctx->r15 = ADD32(0, 0X12B);
    // 0x15126B1C: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x15126B20: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x15126B24: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x15126B28: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x15126B2C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x15126B30: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x15126B34: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    // 0x15126B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15126B3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15126B40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x15126B44: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15126B48: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x15126B4C: jal         0x1000FA64
    // 0x15126B50: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    func_1000FA64(rdram, ctx);
        goto after_10;
    // 0x15126B50: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    after_10:
    // 0x15126B54: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
L_15126B58:
    // 0x15126B58: lw          $v0, 0xC8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC8);
L_15126B5C:
    // 0x15126B5C: lbu         $t4, 0x23D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X23D);
    // 0x15126B60: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15126B64: lbu         $t9, 0x2FC($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2FC);
    // 0x15126B68: sllv        $t6, $t7, $t4
    ctx->r14 = S32(ctx->r15 << (ctx->r12 & 31));
    // 0x15126B6C: lbu         $t8, 0x74($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X74);
    // 0x15126B70: or          $t5, $t9, $t6
    ctx->r13 = ctx->r25 | ctx->r14;
    // 0x15126B74: sb          $t5, 0x2FC($v0)
    MEM_B(0X2FC, ctx->r2) = ctx->r13;
    // 0x15126B78: lbu         $t7, 0x23D($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X23D);
    // 0x15126B7C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x15126B80: sllv        $t9, $t4, $t7
    ctx->r25 = S32(ctx->r12 << (ctx->r15 & 31));
    // 0x15126B84: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x15126B88: sb          $t6, 0x74($v0)
    MEM_B(0X74, ctx->r2) = ctx->r14;
    // 0x15126B8C: lbu         $a0, 0x197($t0)
    ctx->r4 = MEM_BU(ctx->r8, 0X197);
    // 0x15126B90: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
L_15126B94:
    // 0x15126B94: bne         $a0, $zero, L_15126BA4
    if (ctx->r4 != 0) {
        // 0x15126B98: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_15126BA4;
    }
    // 0x15126B98: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15126B9C: b           L_1512750C
    // 0x15126BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1512750C;
    // 0x15126BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15126BA4:
    // 0x15126BA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15126BA8: bnel        $v0, $at, L_15127510
    if (ctx->r2 != ctx->r1) {
        // 0x15126BAC: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_15127510;
    }
    goto skip_13;
    // 0x15126BAC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_13:
    // 0x15126BB0: lw          $t5, 0x36C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X36C);
    // 0x15126BB4: addiu       $t7, $s0, 0x2FC
    ctx->r15 = ADD32(ctx->r16, 0X2FC);
    // 0x15126BB8: addiu       $t8, $s0, 0x300
    ctx->r24 = ADD32(ctx->r16, 0X300);
    // 0x15126BBC: lhu         $t4, 0x0($t5)
    ctx->r12 = MEM_HU(ctx->r13, 0X0);
    // 0x15126BC0: addiu       $a3, $s0, 0x2F8
    ctx->r7 = ADD32(ctx->r16, 0X2F8);
    // 0x15126BC4: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x15126BC8: sw          $t4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r12;
    // 0x15126BCC: lw          $a1, 0x3D4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3D4);
    // 0x15126BD0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x15126BD4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x15126BD8: lw          $t9, 0x5F0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X5F0);
    // 0x15126BDC: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    // 0x15126BE0: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x15126BE4: andi        $t6, $t9, 0x10
    ctx->r14 = ctx->r25 & 0X10;
    // 0x15126BE8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x15126BEC: jal         0x1512623C
    // 0x15126BF0: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    func_1512623C(rdram, ctx);
        goto after_11;
    // 0x15126BF0: sw          $a2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r6;
    after_11:
    // 0x15126BF4: lwc1        $f10, 0x19C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X19C);
    // 0x15126BF8: lwc1        $f8, 0xBC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x15126BFC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x15126C00: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x15126C04: div.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15126C08: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x15126C0C: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x15126C10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15126C14: andi        $t5, $t3, 0x10
    ctx->r13 = ctx->r11 & 0X10;
    // 0x15126C18: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x15126C1C: nop

    // 0x15126C20: bc1fl       L_15126C34
    if (!c1cs) {
        // 0x15126C24: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_15126C34;
    }
    goto skip_14;
    // 0x15126C24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_14:
    // 0x15126C28: b           L_15126C60
    // 0x15126C2C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_15126C60;
    // 0x15126C2C: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x15126C30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_15126C34:
    // 0x15126C34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15126C38: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x15126C3C: nop

    // 0x15126C40: bc1fl       L_15126C58
    if (!c1cs) {
        // 0x15126C44: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15126C58;
    }
    goto skip_15;
    // 0x15126C44: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_15:
    // 0x15126C48: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15126C4C: b           L_15126C5C
    // 0x15126C50: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
        goto L_15126C5C;
    // 0x15126C50: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    // 0x15126C54: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15126C58:
    // 0x15126C58: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
L_15126C5C:
    // 0x15126C5C: lwc1        $f0, 0xC4($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XC4);
L_15126C60:
    // 0x15126C60: beq         $t5, $zero, L_15126CE4
    if (ctx->r13 == 0) {
        // 0x15126C64: nop
    
            goto L_15126CE4;
    }
    // 0x15126C64: nop

    // 0x15126C68: beq         $t1, $zero, L_15126CE4
    if (ctx->r9 == 0) {
        // 0x15126C6C: nop
    
            goto L_15126CE4;
    }
    // 0x15126C6C: nop

    // 0x15126C70: lbu         $t4, 0x1AC($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X1AC);
    // 0x15126C74: bne         $t4, $zero, L_15126CE4
    if (ctx->r12 != 0) {
        // 0x15126C78: nop
    
            goto L_15126CE4;
    }
    // 0x15126C78: nop

    // 0x15126C7C: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x15126C80: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x15126C84: lbu         $t7, 0x1CA($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1CA);
    // 0x15126C88: bnel        $t7, $zero, L_15126C9C
    if (ctx->r15 != 0) {
        // 0x15126C8C: lbu         $t8, 0x104($v0)
        ctx->r24 = MEM_BU(ctx->r2, 0X104);
            goto L_15126C9C;
    }
    goto skip_16;
    // 0x15126C8C: lbu         $t8, 0x104($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X104);
    skip_16:
    // 0x15126C90: bne         $t1, $at, L_15126CE4
    if (ctx->r9 != ctx->r1) {
        // 0x15126C94: nop
    
            goto L_15126CE4;
    }
    // 0x15126C94: nop

    // 0x15126C98: lbu         $t8, 0x104($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X104);
L_15126C9C:
    // 0x15126C9C: xori        $t2, $t1, 0x1B
    ctx->r10 = ctx->r9 ^ 0X1B;
    // 0x15126CA0: sltiu       $t2, $t2, 0x1
    ctx->r10 = ctx->r10 < 0X1 ? 1 : 0;
    // 0x15126CA4: beq         $t8, $zero, L_15126CF4
    if (ctx->r24 == 0) {
        // 0x15126CA8: xori        $t4, $t1, 0x1F
        ctx->r12 = ctx->r9 ^ 0X1F;
            goto L_15126CF4;
    }
    // 0x15126CA8: xori        $t4, $t1, 0x1F
    ctx->r12 = ctx->r9 ^ 0X1F;
    // 0x15126CAC: lbu         $t9, 0x65($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X65);
    // 0x15126CB0: bnel        $t9, $zero, L_15126CF8
    if (ctx->r25 != 0) {
        // 0x15126CB4: sltiu       $t4, $t4, 0x1
        ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
            goto L_15126CF8;
    }
    goto skip_17;
    // 0x15126CB4: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
    skip_17:
    // 0x15126CB8: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x15126CBC: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x15126CC0: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x15126CC4: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x15126CC8: nop

    // 0x15126CCC: beql        $t5, $zero, L_15126CF8
    if (ctx->r13 == 0) {
        // 0x15126CD0: sltiu       $t4, $t4, 0x1
        ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
            goto L_15126CF8;
    }
    goto skip_18;
    // 0x15126CD0: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
    skip_18:
    // 0x15126CD4: beq         $t1, $at, L_15126CF4
    if (ctx->r9 == ctx->r1) {
        // 0x15126CD8: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_15126CF4;
    }
    // 0x15126CD8: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x15126CDC: beql        $t1, $at, L_15126CF8
    if (ctx->r9 == ctx->r1) {
        // 0x15126CE0: sltiu       $t4, $t4, 0x1
        ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
            goto L_15126CF8;
    }
    goto skip_19;
    // 0x15126CE0: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
    skip_19:
L_15126CE4:
    // 0x15126CE4: jal         0x15127EB8
    // 0x15126CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15127EB8(rdram, ctx);
        goto after_12;
    // 0x15126CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x15126CEC: b           L_1512750C
    // 0x15126CF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1512750C;
    // 0x15126CF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15126CF4:
    // 0x15126CF4: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
L_15126CF8:
    // 0x15126CF8: addiu       $t7, $t0, 0x13C
    ctx->r15 = ADD32(ctx->r8, 0X13C);
    // 0x15126CFC: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x15126D00: beq         $t2, $zero, L_15126D20
    if (ctx->r10 == 0) {
        // 0x15126D04: sw          $t4, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r12;
            goto L_15126D20;
    }
    // 0x15126D04: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x15126D08: lui         $at, 0x4198
    ctx->r1 = S32(0X4198 << 16);
    // 0x15126D0C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15126D10: lui         $at, 0x41F8
    ctx->r1 = S32(0X41F8 << 16);
    // 0x15126D14: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15126D18: b           L_15126D38
    // 0x15126D1C: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
        goto L_15126D38;
    // 0x15126D1C: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
L_15126D20:
    // 0x15126D20: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x15126D24: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x15126D28: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15126D2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x15126D30: nop

    // 0x15126D34: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
L_15126D38:
    // 0x15126D38: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x15126D3C: lb          $a0, 0x2($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X2);
    // 0x15126D40: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x15126D44: bgez        $a0, L_15126D54
    if (SIGNED(ctx->r4) >= 0) {
        // 0x15126D48: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_15126D54;
    }
    // 0x15126D48: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x15126D4C: b           L_15126D5C
    // 0x15126D50: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
        goto L_15126D5C;
    // 0x15126D50: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
L_15126D54:
    // 0x15126D54: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x15126D58: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
L_15126D5C:
    // 0x15126D5C: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15126D60: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x15126D64: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15126D68: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15126D6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15126D70: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x15126D74: lb          $a1, 0x3($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X3);
    // 0x15126D78: add.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x15126D7C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15126D80: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x15126D84: div.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x15126D88: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15126D8C: nop

    // 0x15126D90: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15126D94: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15126D98: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x15126D9C: nop

    // 0x15126DA0: mul.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x15126DA4: bgez        $a1, L_15126DB4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x15126DA8: nop
    
            goto L_15126DB4;
    }
    // 0x15126DA8: nop

    // 0x15126DAC: b           L_15126DB8
    // 0x15126DB0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_15126DB8;
    // 0x15126DB0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_15126DB4:
    // 0x15126DB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_15126DB8:
    // 0x15126DB8: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x15126DBC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x15126DC0: nop

    // 0x15126DC4: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15126DC8: mul.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x15126DCC: nop

    // 0x15126DD0: mul.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x15126DD4: beq         $t2, $zero, L_15126E7C
    if (ctx->r10 == 0) {
        // 0x15126DD8: nop
    
            goto L_15126E7C;
    }
    // 0x15126DD8: nop

    // 0x15126DDC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x15126DE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15126DE4: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x15126DE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15126DEC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15126DF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15126DF4: mul.s       $f14, $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x15126DF8: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x15126DFC: mul.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x15126E00: bc1f        L_15126E14
    if (!c1cs) {
        // 0x15126E04: lui         $at, 0x4040
        ctx->r1 = S32(0X4040 << 16);
            goto L_15126E14;
    }
    // 0x15126E04: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15126E08: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15126E0C: b           L_15126E40
    // 0x15126E10: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_15126E40;
    // 0x15126E10: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_15126E14:
    // 0x15126E14: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x15126E18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15126E1C: nop

    // 0x15126E20: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x15126E24: nop

    // 0x15126E28: bc1fl       L_15126E3C
    if (!c1cs) {
        // 0x15126E2C: mov.s       $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
            goto L_15126E3C;
    }
    goto skip_20;
    // 0x15126E2C: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    skip_20:
    // 0x15126E30: b           L_15126E3C
    // 0x15126E34: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
        goto L_15126E3C;
    // 0x15126E34: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x15126E38: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
L_15126E3C:
    // 0x15126E3C: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_15126E40:
    // 0x15126E40: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15126E44: nop

    // 0x15126E48: bc1fl       L_15126E5C
    if (!c1cs) {
        // 0x15126E4C: c.lt.s      $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
            goto L_15126E5C;
    }
    goto skip_21;
    // 0x15126E4C: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    skip_21:
    // 0x15126E50: b           L_15126EA0
    // 0x15126E54: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_15126EA0;
    // 0x15126E54: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x15126E58: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
L_15126E5C:
    // 0x15126E5C: nop

    // 0x15126E60: bc1fl       L_15126E74
    if (!c1cs) {
        // 0x15126E64: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_15126E74;
    }
    goto skip_22;
    // 0x15126E64: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    skip_22:
    // 0x15126E68: b           L_15126EA0
    // 0x15126E6C: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
        goto L_15126EA0;
    // 0x15126E6C: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x15126E70: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_15126E74:
    // 0x15126E74: b           L_15126EA0
    // 0x15126E78: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
        goto L_15126EA0;
    // 0x15126E78: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
L_15126E7C:
    // 0x15126E7C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x15126E80: bne         $t1, $at, L_15126EA0
    if (ctx->r9 != ctx->r1) {
        // 0x15126E84: lui         $at, 0x3FC0
        ctx->r1 = S32(0X3FC0 << 16);
            goto L_15126EA0;
    }
    // 0x15126E84: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x15126E88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15126E8C: nop

    // 0x15126E90: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x15126E94: nop

    // 0x15126E98: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15126E9C: nop

L_15126EA0:
    // 0x15126EA0: lwc1        $f10, 0x174($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X174);
    // 0x15126EA4: lwc1        $f4, 0x178($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X178);
    // 0x15126EA8: addiu       $a0, $t0, 0x174
    ctx->r4 = ADD32(ctx->r8, 0X174);
    // 0x15126EAC: sub.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x15126EB0: add.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x15126EB4: swc1        $f6, 0x174($t0)
    MEM_W(0X174, ctx->r8) = ctx->f6.u32l;
    // 0x15126EB8: swc1        $f8, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f8.u32l;
    // 0x15126EBC: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x15126EC0: jal         0x15048758
    // 0x15126EC4: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    func_15048758(rdram, ctx);
        goto after_13;
    // 0x15126EC4: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    after_13:
    // 0x15126EC8: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x15126ECC: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x15126ED0: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x15126ED4: bne         $t8, $zero, L_15126EE4
    if (ctx->r24 != 0) {
        // 0x15126ED8: lw          $t2, 0x68($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X68);
            goto L_15126EE4;
    }
    // 0x15126ED8: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x15126EDC: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x15126EE0: bne         $t1, $at, L_15126F38
    if (ctx->r9 != ctx->r1) {
        // 0x15126EE4: lui         $at, 0xC2A0
        ctx->r1 = S32(0XC2A0 << 16);
            goto L_15126F38;
    }
L_15126EE4:
    // 0x15126EE4: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x15126EE8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15126EEC: lwc1        $f0, 0x178($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X178);
    // 0x15126EF0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x15126EF4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15126EF8: nop

    // 0x15126EFC: bc1fl       L_15126F10
    if (!c1cs) {
        // 0x15126F00: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_15126F10;
    }
    goto skip_23;
    // 0x15126F00: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_23:
    // 0x15126F04: b           L_15126FE0
    // 0x15126F08: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
        goto L_15126FE0;
    // 0x15126F08: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
    // 0x15126F0C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_15126F10:
    // 0x15126F10: nop

    // 0x15126F14: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15126F18: nop

    // 0x15126F1C: bc1fl       L_15126F30
    if (!c1cs) {
        // 0x15126F20: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15126F30;
    }
    goto skip_24;
    // 0x15126F20: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_24:
    // 0x15126F24: b           L_15126F30
    // 0x15126F28: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_15126F30;
    // 0x15126F28: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x15126F2C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15126F30:
    // 0x15126F30: b           L_15126FE0
    // 0x15126F34: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
        goto L_15126FE0;
    // 0x15126F34: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
L_15126F38:
    // 0x15126F38: beq         $t2, $zero, L_15126F94
    if (ctx->r10 == 0) {
        // 0x15126F3C: lui         $at, 0xC2A0
        ctx->r1 = S32(0XC2A0 << 16);
            goto L_15126F94;
    }
    // 0x15126F3C: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x15126F40: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x15126F44: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15126F48: lwc1        $f0, 0x178($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X178);
    // 0x15126F4C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x15126F50: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15126F54: nop

    // 0x15126F58: bc1fl       L_15126F6C
    if (!c1cs) {
        // 0x15126F5C: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_15126F6C;
    }
    goto skip_25;
    // 0x15126F5C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_25:
    // 0x15126F60: b           L_15126FE0
    // 0x15126F64: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
        goto L_15126FE0;
    // 0x15126F64: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
    // 0x15126F68: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_15126F6C:
    // 0x15126F6C: nop

    // 0x15126F70: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15126F74: nop

    // 0x15126F78: bc1fl       L_15126F8C
    if (!c1cs) {
        // 0x15126F7C: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15126F8C;
    }
    goto skip_26;
    // 0x15126F7C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_26:
    // 0x15126F80: b           L_15126F8C
    // 0x15126F84: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_15126F8C;
    // 0x15126F84: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x15126F88: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15126F8C:
    // 0x15126F8C: b           L_15126FE0
    // 0x15126F90: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
        goto L_15126FE0;
    // 0x15126F90: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
L_15126F94:
    // 0x15126F94: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15126F98: lwc1        $f0, 0x178($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X178);
    // 0x15126F9C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x15126FA0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15126FA4: nop

    // 0x15126FA8: bc1fl       L_15126FBC
    if (!c1cs) {
        // 0x15126FAC: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_15126FBC;
    }
    goto skip_27;
    // 0x15126FAC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_27:
    // 0x15126FB0: b           L_15126FE0
    // 0x15126FB4: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
        goto L_15126FE0;
    // 0x15126FB4: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
    // 0x15126FB8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_15126FBC:
    // 0x15126FBC: nop

    // 0x15126FC0: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15126FC4: nop

    // 0x15126FC8: bc1fl       L_15126FDC
    if (!c1cs) {
        // 0x15126FCC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15126FDC;
    }
    goto skip_28;
    // 0x15126FCC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_28:
    // 0x15126FD0: b           L_15126FDC
    // 0x15126FD4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_15126FDC;
    // 0x15126FD4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x15126FD8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15126FDC:
    // 0x15126FDC: swc1        $f2, 0x178($t0)
    MEM_W(0X178, ctx->r8) = ctx->f2.u32l;
L_15126FE0:
    // 0x15126FE0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15126FE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15126FE8: lw          $a1, 0x174($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X174);
    // 0x15126FEC: addiu       $a0, $t0, 0x16C
    ctx->r4 = ADD32(ctx->r8, 0X16C);
    // 0x15126FF0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15126FF4: lwc1        $f6, 0x7B4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x15126FF8: sw          $t2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r10;
    // 0x15126FFC: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    // 0x15127000: addiu       $a2, $t0, 0x17C
    ctx->r6 = ADD32(ctx->r8, 0X17C);
    // 0x15127004: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x15127008: jal         0x15049688
    // 0x1512700C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_15049688(rdram, ctx);
        goto after_14;
    // 0x1512700C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x15127010: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x15127014: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x15127018: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1512701C: lw          $a1, 0x178($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X178);
    // 0x15127020: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x15127024: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x15127028: lwc1        $f8, 0x7B4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512702C: addiu       $a0, $t0, 0x170
    ctx->r4 = ADD32(ctx->r8, 0X170);
    // 0x15127030: addiu       $a2, $t0, 0x180
    ctx->r6 = ADD32(ctx->r8, 0X180);
    // 0x15127034: jal         0x15049688
    // 0x15127038: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_15049688(rdram, ctx);
        goto after_15;
    // 0x15127038: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x1512703C: lw          $t1, 0xB4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB4);
    // 0x15127040: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x15127044: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x15127048: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x1512704C: beq         $t1, $at, L_15127114
    if (ctx->r9 == ctx->r1) {
        // 0x15127050: lw          $t3, 0x98($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X98);
            goto L_15127114;
    }
    // 0x15127050: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x15127054: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x15127058: beq         $t1, $v0, L_15127114
    if (ctx->r9 == ctx->r2) {
        // 0x1512705C: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_15127114;
    }
    // 0x1512705C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x15127060: bne         $t1, $at, L_15127080
    if (ctx->r9 != ctx->r1) {
        // 0x15127064: andi        $t6, $t3, 0xC
        ctx->r14 = ctx->r11 & 0XC;
            goto L_15127080;
    }
    // 0x15127064: andi        $t6, $t3, 0xC
    ctx->r14 = ctx->r11 & 0XC;
    // 0x15127068: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x1512706C: bne         $t1, $at, L_15127080
    if (ctx->r9 != ctx->r1) {
        // 0x15127070: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_15127080;
    }
    // 0x15127070: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x15127074: lbu         $t9, -0x19EA($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X19EA);
    // 0x15127078: beql        $t9, $zero, L_15127118
    if (ctx->r25 == 0) {
        // 0x1512707C: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_15127118;
    }
    goto skip_29;
    // 0x1512707C: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    skip_29:
L_15127080:
    // 0x15127080: beq         $v0, $t6, L_15127114
    if (ctx->r2 == ctx->r14) {
        // 0x15127084: andi        $t5, $t3, 0x8
        ctx->r13 = ctx->r11 & 0X8;
            goto L_15127114;
    }
    // 0x15127084: andi        $t5, $t3, 0x8
    ctx->r13 = ctx->r11 & 0X8;
    // 0x15127088: beq         $t5, $zero, L_151270CC
    if (ctx->r13 == 0) {
        // 0x1512708C: lwc1        $f14, 0xBC($sp)
        ctx->f14.u32l = MEM_W(ctx->r29, 0XBC);
            goto L_151270CC;
    }
    // 0x1512708C: lwc1        $f14, 0xBC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x15127090: lwc1        $f0, 0x1A4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x15127094: c.lt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl < ctx->f0.fl;
    // 0x15127098: nop

    // 0x1512709C: bc1fl       L_151270D0
    if (!c1cs) {
        // 0x151270A0: andi        $t4, $t3, 0x4
        ctx->r12 = ctx->r11 & 0X4;
            goto L_151270D0;
    }
    goto skip_30;
    // 0x151270A0: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
    skip_30:
    // 0x151270A4: beq         $t1, $v0, L_151270CC
    if (ctx->r9 == ctx->r2) {
        // 0x151270A8: lwc1        $f2, 0xB8($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0XB8);
            goto L_151270CC;
    }
    // 0x151270A8: lwc1        $f2, 0xB8($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151270AC: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x151270B0: lwc1        $f6, 0x1A8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x151270B4: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x151270B8: mul.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x151270BC: swc1        $f10, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f10.u32l;
    // 0x151270C0: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x151270C4: b           L_15127114
    // 0x151270C8: swc1        $f8, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f8.u32l;
        goto L_15127114;
    // 0x151270C8: swc1        $f8, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f8.u32l;
L_151270CC:
    // 0x151270CC: andi        $t4, $t3, 0x4
    ctx->r12 = ctx->r11 & 0X4;
L_151270D0:
    // 0x151270D0: beql        $t4, $zero, L_15127118
    if (ctx->r12 == 0) {
        // 0x151270D4: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_15127118;
    }
    goto skip_31;
    // 0x151270D4: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    skip_31:
    // 0x151270D8: lwc1        $f0, 0x1A4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x151270DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x151270E0: lwc1        $f6, 0xB8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x151270E4: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x151270E8: nop

    // 0x151270EC: bc1fl       L_15127118
    if (!c1cs) {
        // 0x151270F0: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_15127118;
    }
    goto skip_32;
    // 0x151270F0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    skip_32:
    // 0x151270F4: add.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x151270F8: swc1        $f4, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f4.u32l;
    // 0x151270FC: lwc1        $f10, 0xC0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x15127100: lwc1        $f8, 0xB8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x15127104: lwc1        $f4, 0x1A8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x15127108: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1512710C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15127110: swc1        $f8, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f8.u32l;
L_15127114:
    // 0x15127114: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
L_15127118:
    // 0x15127118: lwc1        $f14, 0xBC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1512711C: lwc1        $f16, 0xC0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x15127120: bne         $t1, $at, L_151271B8
    if (ctx->r9 != ctx->r1) {
        // 0x15127124: lwc1        $f0, 0x1A4($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X1A4);
            goto L_151271B8;
    }
    // 0x15127124: lwc1        $f0, 0x1A4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x15127128: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x1512712C: nop

    // 0x15127130: bc1fl       L_15127144
    if (!c1cs) {
        // 0x15127134: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_15127144;
    }
    goto skip_33;
    // 0x15127134: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_33:
    // 0x15127138: b           L_1512716C
    // 0x1512713C: swc1        $f14, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f14.u32l;
        goto L_1512716C;
    // 0x1512713C: swc1        $f14, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f14.u32l;
    // 0x15127140: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_15127144:
    // 0x15127144: nop

    // 0x15127148: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x1512714C: nop

    // 0x15127150: bc1fl       L_15127168
    if (!c1cs) {
        // 0x15127154: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15127168;
    }
    goto skip_34;
    // 0x15127154: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_34:
    // 0x15127158: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x1512715C: b           L_1512716C
    // 0x15127160: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
        goto L_1512716C;
    // 0x15127160: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
    // 0x15127164: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15127168:
    // 0x15127168: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
L_1512716C:
    // 0x1512716C: mul.s       $f2, $f14, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f16.fl);
    // 0x15127170: lwc1        $f0, 0x1A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x15127174: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15127178: nop

    // 0x1512717C: bc1fl       L_15127190
    if (!c1cs) {
        // 0x15127180: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_15127190;
    }
    goto skip_35;
    // 0x15127180: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_35:
    // 0x15127184: b           L_151272F8
    // 0x15127188: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
        goto L_151272F8;
    // 0x15127188: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
    // 0x1512718C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_15127190:
    // 0x15127190: nop

    // 0x15127194: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15127198: nop

    // 0x1512719C: bc1fl       L_151271B0
    if (!c1cs) {
        // 0x151271A0: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_151271B0;
    }
    goto skip_36;
    // 0x151271A0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_36:
    // 0x151271A4: b           L_151271B0
    // 0x151271A8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_151271B0;
    // 0x151271A8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x151271AC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_151271B0:
    // 0x151271B0: b           L_151272F8
    // 0x151271B4: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
        goto L_151272F8;
    // 0x151271B4: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
L_151271B8:
    // 0x151271B8: beq         $t2, $zero, L_15127260
    if (ctx->r10 == 0) {
        // 0x151271BC: lui         $at, 0x3F40
        ctx->r1 = S32(0X3F40 << 16);
            goto L_15127260;
    }
    // 0x151271BC: lui         $at, 0x3F40
    ctx->r1 = S32(0X3F40 << 16);
    // 0x151271C0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x151271C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151271C8: nop

    // 0x151271CC: mul.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x151271D0: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x151271D4: nop

    // 0x151271D8: bc1fl       L_151271EC
    if (!c1cs) {
        // 0x151271DC: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_151271EC;
    }
    goto skip_37;
    // 0x151271DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_37:
    // 0x151271E0: b           L_15127214
    // 0x151271E4: swc1        $f12, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f12.u32l;
        goto L_15127214;
    // 0x151271E4: swc1        $f12, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f12.u32l;
    // 0x151271E8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_151271EC:
    // 0x151271EC: nop

    // 0x151271F0: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x151271F4: nop

    // 0x151271F8: bc1fl       L_15127210
    if (!c1cs) {
        // 0x151271FC: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15127210;
    }
    goto skip_38;
    // 0x151271FC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_38:
    // 0x15127200: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15127204: b           L_15127214
    // 0x15127208: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
        goto L_15127214;
    // 0x15127208: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
    // 0x1512720C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15127210:
    // 0x15127210: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
L_15127214:
    // 0x15127214: mul.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x15127218: lwc1        $f0, 0x1A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x1512721C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x15127220: nop

    // 0x15127224: bc1fl       L_15127238
    if (!c1cs) {
        // 0x15127228: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_15127238;
    }
    goto skip_39;
    // 0x15127228: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_39:
    // 0x1512722C: b           L_151272F8
    // 0x15127230: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
        goto L_151272F8;
    // 0x15127230: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
    // 0x15127234: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_15127238:
    // 0x15127238: nop

    // 0x1512723C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x15127240: nop

    // 0x15127244: bc1fl       L_15127258
    if (!c1cs) {
        // 0x15127248: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_15127258;
    }
    goto skip_40;
    // 0x15127248: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_40:
    // 0x1512724C: b           L_15127258
    // 0x15127250: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_15127258;
    // 0x15127250: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x15127254: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_15127258:
    // 0x15127258: b           L_151272F8
    // 0x1512725C: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
        goto L_151272F8;
    // 0x1512725C: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
L_15127260:
    // 0x15127260: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15127264: nop

    // 0x15127268: mul.s       $f12, $f14, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1512726C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x15127270: nop

    // 0x15127274: bc1fl       L_15127288
    if (!c1cs) {
        // 0x15127278: mtc1        $zero, $f10
        ctx->f10.u32l = 0;
            goto L_15127288;
    }
    goto skip_41;
    // 0x15127278: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    skip_41:
    // 0x1512727C: b           L_151272B0
    // 0x15127280: swc1        $f12, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f12.u32l;
        goto L_151272B0;
    // 0x15127280: swc1        $f12, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f12.u32l;
    // 0x15127284: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
L_15127288:
    // 0x15127288: nop

    // 0x1512728C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x15127290: nop

    // 0x15127294: bc1fl       L_151272AC
    if (!c1cs) {
        // 0x15127298: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_151272AC;
    }
    goto skip_42;
    // 0x15127298: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_42:
    // 0x1512729C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x151272A0: b           L_151272B0
    // 0x151272A4: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
        goto L_151272B0;
    // 0x151272A4: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
    // 0x151272A8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_151272AC:
    // 0x151272AC: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
L_151272B0:
    // 0x151272B0: mul.s       $f2, $f12, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x151272B4: lwc1        $f0, 0x1A8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x151272B8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x151272BC: nop

    // 0x151272C0: bc1fl       L_151272D4
    if (!c1cs) {
        // 0x151272C4: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_151272D4;
    }
    goto skip_43;
    // 0x151272C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_43:
    // 0x151272C8: b           L_151272F8
    // 0x151272CC: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
        goto L_151272F8;
    // 0x151272CC: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
    // 0x151272D0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_151272D4:
    // 0x151272D4: nop

    // 0x151272D8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x151272DC: nop

    // 0x151272E0: bc1fl       L_151272F4
    if (!c1cs) {
        // 0x151272E4: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_151272F4;
    }
    goto skip_44;
    // 0x151272E4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    skip_44:
    // 0x151272E8: b           L_151272F4
    // 0x151272EC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
        goto L_151272F4;
    // 0x151272EC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x151272F0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_151272F4:
    // 0x151272F4: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
L_151272F8:
    // 0x151272F8: lwc1        $f0, 0x1A4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x151272FC: lwc1        $f4, 0x1A8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x15127300: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15127304: swc1        $f0, 0x19C($s0)
    MEM_W(0X19C, ctx->r16) = ctx->f0.u32l;
    // 0x15127308: swc1        $f4, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->f4.u32l;
    // 0x1512730C: swc1        $f0, 0x184($t0)
    MEM_W(0X184, ctx->r8) = ctx->f0.u32l;
    // 0x15127310: lwc1        $f6, 0x1A8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x15127314: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15127318: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512731C: swc1        $f6, 0x188($t0)
    MEM_W(0X188, ctx->r8) = ctx->f6.u32l;
    // 0x15127320: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x15127324: lwc1        $f10, 0x170($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X170);
    // 0x15127328: lwc1        $f4, 0x356C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X356C);
    // 0x1512732C: sw          $t0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r8;
    // 0x15127330: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x15127334: jal         0x15047C00
    // 0x15127338: nop

    cosf_recomp(rdram, ctx);
        goto after_16;
    // 0x15127338: nop

    after_16:
    // 0x1512733C: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15127340: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x15127344: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15127348: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x1512734C: lwc1        $f4, 0x3570($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3570);
    // 0x15127350: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x15127354: lwc1        $f10, 0x170($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X170);
    // 0x15127358: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1512735C: jal         0x15047D60
    // 0x15127360: nop

    sinf_recomp(rdram, ctx);
        goto after_17;
    // 0x15127360: nop

    after_17:
    // 0x15127364: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15127368: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x1512736C: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x15127370: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x15127374: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15127378: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x1512737C: lwc1        $f4, 0x3574($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3574);
    // 0x15127380: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    // 0x15127384: lwc1        $f10, 0x16C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X16C);
    // 0x15127388: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x1512738C: jal         0x15047C00
    // 0x15127390: nop

    cosf_recomp(rdram, ctx);
        goto after_18;
    // 0x15127390: nop

    after_18:
    // 0x15127394: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x15127398: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x1512739C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151273A0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151273A4: lwc1        $f4, 0x3578($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3578);
    // 0x151273A8: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x151273AC: lwc1        $f10, 0x16C($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X16C);
    // 0x151273B0: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151273B4: jal         0x15047D60
    // 0x151273B8: nop

    sinf_recomp(rdram, ctx);
        goto after_19;
    // 0x151273B8: nop

    after_19:
    // 0x151273BC: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x151273C0: lwc1        $f2, 0x88($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X88);
    // 0x151273C4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x151273C8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x151273CC: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x151273D0: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x151273D4: addiu       $t4, $sp, 0x8C
    ctx->r12 = ADD32(ctx->r29, 0X8C);
    // 0x151273D8: addiu       $a1, $t0, 0x148
    ctx->r5 = ADD32(ctx->r8, 0X148);
    // 0x151273DC: addiu       $a2, $t0, 0x130
    ctx->r6 = ADD32(ctx->r8, 0X130);
    // 0x151273E0: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x151273E4: lwc1        $f10, 0x2F8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x151273E8: lwc1        $f6, 0x2FC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x151273EC: lw          $v0, 0x3D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3D0);
    // 0x151273F0: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x151273F4: swc1        $f4, 0x2BC($s0)
    MEM_W(0X2BC, ctx->r16) = ctx->f4.u32l;
    // 0x151273F8: lwc1        $f8, 0x90($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X90);
    // 0x151273FC: lwc1        $f4, 0x300($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X300);
    // 0x15127400: lw          $at, 0x2BC($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X2BC);
    // 0x15127404: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15127408: swc1        $f10, 0x2C0($s0)
    MEM_W(0X2C0, ctx->r16) = ctx->f10.u32l;
    // 0x1512740C: lwc1        $f6, 0x94($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X94);
    // 0x15127410: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x15127414: swc1        $f8, 0x2C4($s0)
    MEM_W(0X2C4, ctx->r16) = ctx->f8.u32l;
    // 0x15127418: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x1512741C: swc1        $f10, 0x2A4($s0)
    MEM_W(0X2A4, ctx->r16) = ctx->f10.u32l;
    // 0x15127420: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x15127424: swc1        $f4, 0x2A8($s0)
    MEM_W(0X2A8, ctx->r16) = ctx->f4.u32l;
    // 0x15127428: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x1512742C: swc1        $f6, 0x2AC($s0)
    MEM_W(0X2AC, ctx->r16) = ctx->f6.u32l;
    // 0x15127430: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x15127434: lw          $t8, 0x2C0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2C0);
    // 0x15127438: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x1512743C: lw          $at, 0x2C4($s0)
    ctx->r1 = MEM_W(ctx->r16, 0X2C4);
    // 0x15127440: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x15127444: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x15127448: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x1512744C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x15127450: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x15127454: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x15127458: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x1512745C: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x15127460: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x15127464: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x15127468: lw          $t8, 0x4($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X4);
    // 0x1512746C: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x15127470: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x15127474: jal         0x15048F90
    // 0x15127478: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    func_15048F90(rdram, ctx);
        goto after_20;
    // 0x15127478: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    after_20:
    // 0x1512747C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15127480: lwc1        $f8, 0x357C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X357C);
    // 0x15127484: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x15127488: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1512748C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15127490: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15127494: lbu         $t9, 0x23D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X23D);
    // 0x15127498: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x1512749C: lw          $t6, -0x19D8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X19D8);
    // 0x151274A0: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x151274A4: subu        $t5, $t5, $t9
    ctx->r13 = SUB32(ctx->r13, ctx->r25);
    // 0x151274A8: sll         $t5, $t5, 7
    ctx->r13 = S32(ctx->r13 << 7);
    // 0x151274AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151274B0: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x151274B4: lui         $at, 0x428E
    ctx->r1 = S32(0X428E << 16);
    // 0x151274B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x151274BC: swc1        $f8, 0x84($t7)
    MEM_W(0X84, ctx->r15) = ctx->f8.u32l;
    // 0x151274C0: lwc1        $f4, 0xC4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x151274C4: lbu         $v0, 0x23D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X23D);
    // 0x151274C8: lui         $at, 0x4258
    ctx->r1 = S32(0X4258 << 16);
    // 0x151274CC: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151274D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151274D4: lui         $t4, 0x800C
    ctx->r12 = S32(0X800C << 16);
    // 0x151274D8: lw          $t4, -0x19D8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X19D8);
    // 0x151274DC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x151274E0: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x151274E4: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x151274E8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151274EC: addu        $t9, $t4, $t8
    ctx->r25 = ADD32(ctx->r12, ctx->r24);
    // 0x151274F0: lw          $a3, 0x84($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X84);
    // 0x151274F4: lw          $a2, 0x1A0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1A0);
    // 0x151274F8: lw          $a1, 0x19C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X19C);
    // 0x151274FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x15127500: jal         0x1510B128
    // 0x15127504: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_1510B128(rdram, ctx);
        goto after_21;
    // 0x15127504: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_21:
    // 0x15127508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1512750C:
    // 0x1512750C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_15127510:
    // 0x15127510: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x15127514: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x15127518: jr          $ra
    // 0x1512751C: nop

    return;
    return;
    // 0x1512751C: nop

;}
RECOMP_FUNC void func_15074A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074A44: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15074A48: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x15074A4C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15074A50: lw          $v0, 0x31C($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X31C);
    // 0x15074A54: beq         $v0, $zero, L_15074A64
    if (ctx->r2 == 0) {
        // 0x15074A58: nop
    
            goto L_15074A64;
    }
    // 0x15074A58: nop

    // 0x15074A5C: lw          $t7, 0x1580($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1580);
    // 0x15074A60: sb          $t7, 0x26($v0)
    MEM_B(0X26, ctx->r2) = ctx->r15;
L_15074A64:
    // 0x15074A64: jr          $ra
    // 0x15074A68: nop

    return;
    return;
    // 0x15074A68: nop

;}
RECOMP_FUNC void func_15059140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15059140: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15059144: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15059148: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1505914C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15059150: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15059154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x15059158: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x1505915C: sw          $zero, -0x3D98($at)
    MEM_W(-0X3D98, ctx->r1) = 0;
    // 0x15059160: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x15059164: lbu         $t6, 0x13D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13D);
    // 0x15059168: beql        $t6, $zero, L_15059184
    if (ctx->r14 == 0) {
        // 0x1505916C: lbu         $t8, 0x223($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X223);
            goto L_15059184;
    }
    goto skip_0;
    // 0x1505916C: lbu         $t8, 0x223($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X223);
    skip_0:
    // 0x15059170: lhu         $t7, 0x21C($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X21C);
    // 0x15059174: slti        $at, $t7, 0x10
    ctx->r1 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x15059178: beq         $at, $zero, L_150591A0
    if (ctx->r1 == 0) {
        // 0x1505917C: nop
    
            goto L_150591A0;
    }
    // 0x1505917C: nop

    // 0x15059180: lbu         $t8, 0x223($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X223);
L_15059184:
    // 0x15059184: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x15059188: beq         $t8, $at, L_150591A0
    if (ctx->r24 == ctx->r1) {
        // 0x1505918C: nop
    
            goto L_150591A0;
    }
    // 0x1505918C: nop

    // 0x15059190: jal         0x15059C84
    // 0x15059194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15059C84(rdram, ctx);
        goto after_0;
    // 0x15059194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x15059198: jal         0x1505A770
    // 0x1505919C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1505A770(rdram, ctx);
        goto after_1;
    // 0x1505919C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_150591A0:
    // 0x150591A0: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150591A4: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    // 0x150591A8: jal         0x1505D6F0
    // 0x150591AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1505D6F0(rdram, ctx);
        goto after_2;
    // 0x150591AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x150591B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150591B4: jal         0x15055E50
    // 0x150591B8: lbu         $a1, 0x1E4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1E4);
    func_15055E50(rdram, ctx);
        goto after_3;
    // 0x150591B8: lbu         $a1, 0x1E4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1E4);
    after_3:
    // 0x150591BC: lbu         $t9, 0x4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X4);
    // 0x150591C0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x150591C4: bnel        $t9, $at, L_150591D8
    if (ctx->r25 != ctx->r1) {
        // 0x150591C8: lbu         $t0, 0x13D($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X13D);
            goto L_150591D8;
    }
    goto skip_1;
    // 0x150591C8: lbu         $t0, 0x13D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13D);
    skip_1:
    // 0x150591CC: jal         0x15056150
    // 0x150591D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15056150(rdram, ctx);
        goto after_4;
    // 0x150591D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x150591D4: lbu         $t0, 0x13D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13D);
L_150591D8:
    // 0x150591D8: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x150591DC: beq         $at, $zero, L_150591EC
    if (ctx->r1 == 0) {
        // 0x150591E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150591EC;
    }
    // 0x150591E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150591E4: jal         0x15058898
    // 0x150591E8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    func_15058898(rdram, ctx);
        goto after_5;
    // 0x150591E8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    after_5:
L_150591EC:
    // 0x150591EC: lw          $v0, 0xF4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF4);
    // 0x150591F0: sll         $t1, $v0, 13
    ctx->r9 = S32(ctx->r2 << 13);
    // 0x150591F4: bgez        $t1, L_1505921C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x150591F8: lui         $at, 0x1
        ctx->r1 = S32(0X1 << 16);
            goto L_1505921C;
    }
    // 0x150591F8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x150591FC: ori         $at, $at, 0x2000
    ctx->r1 = ctx->r1 | 0X2000;
    // 0x15059200: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x15059204: bne         $t2, $zero, L_15059218
    if (ctx->r10 != 0) {
        // 0x15059208: lui         $t3, 0x800D
        ctx->r11 = S32(0X800D << 16);
            goto L_15059218;
    }
    // 0x15059208: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x1505920C: lw          $t3, -0x3D98($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3D98);
    // 0x15059210: beql        $t3, $zero, L_15059220
    if (ctx->r11 == 0) {
        // 0x15059214: lb          $v0, 0xB0($s0)
        ctx->r2 = MEM_B(ctx->r16, 0XB0);
            goto L_15059220;
    }
    goto skip_2;
    // 0x15059214: lb          $v0, 0xB0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XB0);
    skip_2:
L_15059218:
    // 0x15059218: sh          $zero, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = 0;
L_1505921C:
    // 0x1505921C: lb          $v0, 0xB0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XB0);
L_15059220:
    // 0x15059220: beql        $v0, $zero, L_15059254
    if (ctx->r2 == 0) {
        // 0x15059224: lw          $t4, 0xF8($s0)
        ctx->r12 = MEM_W(ctx->r16, 0XF8);
            goto L_15059254;
    }
    goto skip_3;
    // 0x15059224: lw          $t4, 0xF8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XF8);
    skip_3:
    // 0x15059228: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x1505922C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15059230: lwc1        $f10, -0x6B58($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6B58);
    // 0x15059234: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x15059238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505923C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x15059240: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15059244: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x15059248: jal         0x15058F24
    // 0x1505924C: nop

    func_15058F24(rdram, ctx);
        goto after_6;
    // 0x1505924C: nop

    after_6:
    // 0x15059250: lw          $t4, 0xF8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XF8);
L_15059254:
    // 0x15059254: sll         $t5, $t4, 14
    ctx->r13 = S32(ctx->r12 << 14);
    // 0x15059258: bgezl       $t5, L_1505926C
    if (SIGNED(ctx->r13) >= 0) {
        // 0x1505925C: lbu         $t6, 0xAD($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0XAD);
            goto L_1505926C;
    }
    goto skip_4;
    // 0x1505925C: lbu         $t6, 0xAD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XAD);
    skip_4:
    // 0x15059260: jal         0x15056258
    // 0x15059264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15056258(rdram, ctx);
        goto after_7;
    // 0x15059264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x15059268: lbu         $t6, 0xAD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XAD);
L_1505926C:
    // 0x1505926C: beql        $t6, $zero, L_15059280
    if (ctx->r14 == 0) {
        // 0x15059270: lbu         $t7, 0x4($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X4);
            goto L_15059280;
    }
    goto skip_5;
    // 0x15059270: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
    skip_5:
    // 0x15059274: jal         0x15059444
    // 0x15059278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15059444(rdram, ctx);
        goto after_8;
    // 0x15059278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x1505927C: lbu         $t7, 0x4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X4);
L_15059280:
    // 0x15059280: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x15059284: bne         $t7, $at, L_15059294
    if (ctx->r15 != ctx->r1) {
        // 0x15059288: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_15059294;
    }
    // 0x15059288: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505928C: lwc1        $f18, -0x6B54($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6B54);
    // 0x15059290: swc1        $f18, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f18.u32l;
L_15059294:
    // 0x15059294: lw          $t8, 0xF8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XF8);
    // 0x15059298: lui         $at, 0x18
    ctx->r1 = S32(0X18 << 16);
    // 0x1505929C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x150592A0: beql        $t9, $zero, L_150592B4
    if (ctx->r25 == 0) {
        // 0x150592A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150592B4;
    }
    goto skip_6;
    // 0x150592A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_6:
    // 0x150592A8: jal         0x150511E8
    // 0x150592AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150511E8(rdram, ctx);
        goto after_9;
    // 0x150592AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x150592B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_150592B4:
    // 0x150592B4: jal         0x1505B5F8
    // 0x150592B8: lw          $a1, 0x180($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X180);
    func_1505B5F8(rdram, ctx);
        goto after_10;
    // 0x150592B8: lw          $a1, 0x180($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X180);
    after_10:
    // 0x150592BC: lw          $t0, 0xF4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XF4);
    // 0x150592C0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150592C4: andi        $t1, $t0, 0x1000
    ctx->r9 = ctx->r8 & 0X1000;
    // 0x150592C8: beql        $t1, $zero, L_150592F4
    if (ctx->r9 == 0) {
        // 0x150592CC: lw          $t2, 0xF8($s0)
        ctx->r10 = MEM_W(ctx->r16, 0XF8);
            goto L_150592F4;
    }
    goto skip_7;
    // 0x150592CC: lw          $t2, 0xF8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XF8);
    skip_7:
    // 0x150592D0: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150592D4: lwc1        $f6, -0x6B50($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6B50);
    // 0x150592D8: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x150592DC: nop

    // 0x150592E0: bc1fl       L_150592F4
    if (!c1cs) {
        // 0x150592E4: lw          $t2, 0xF8($s0)
        ctx->r10 = MEM_W(ctx->r16, 0XF8);
            goto L_150592F4;
    }
    goto skip_8;
    // 0x150592E4: lw          $t2, 0xF8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XF8);
    skip_8:
    // 0x150592E8: jal         0x15056B08
    // 0x150592EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15056B08(rdram, ctx);
        goto after_11;
    // 0x150592EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x150592F0: lw          $t2, 0xF8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XF8);
L_150592F4:
    // 0x150592F4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150592F8: addiu       $a3, $s0, 0x164
    ctx->r7 = ADD32(ctx->r16, 0X164);
    // 0x150592FC: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x15059300: bgez        $t3, L_15059314
    if (SIGNED(ctx->r11) >= 0) {
        // 0x15059304: mov.s       $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
            goto L_15059314;
    }
    // 0x15059304: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x15059308: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505930C: lwc1        $f8, -0x6B4C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X6B4C);
    // 0x15059310: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
L_15059314:
    // 0x15059314: addiu       $t4, $s0, 0x168
    ctx->r12 = ADD32(ctx->r16, 0X168);
    // 0x15059318: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1505931C: jal         0x1505A250
    // 0x15059320: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_1505A250(rdram, ctx);
        goto after_12;
    // 0x15059320: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_12:
    // 0x15059324: lbu         $t5, 0xD0($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XD0);
    // 0x15059328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1505932C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x15059330: beql        $t5, $zero, L_15059344
    if (ctx->r13 == 0) {
        // 0x15059334: lbu         $t6, 0x13D($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X13D);
            goto L_15059344;
    }
    goto skip_9;
    // 0x15059334: lbu         $t6, 0x13D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13D);
    skip_9:
    // 0x15059338: jal         0x1505C7D8
    // 0x1505933C: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    func_1505C7D8(rdram, ctx);
        goto after_13;
    // 0x1505933C: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    after_13:
    // 0x15059340: lbu         $t6, 0x13D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13D);
L_15059344:
    // 0x15059344: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x15059348: bnel        $t6, $zero, L_15059374
    if (ctx->r14 != 0) {
        // 0x1505934C: lbu         $v0, 0x107($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X107);
            goto L_15059374;
    }
    goto skip_10;
    // 0x1505934C: lbu         $v0, 0x107($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X107);
    skip_10:
    // 0x15059350: lbu         $v0, -0x1660($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1660);
    // 0x15059354: lbu         $v1, 0x10F($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X10F);
    // 0x15059358: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1505935C: bne         $at, $zero, L_1505936C
    if (ctx->r1 != 0) {
        // 0x15059360: subu        $t7, $v1, $v0
        ctx->r15 = SUB32(ctx->r3, ctx->r2);
            goto L_1505936C;
    }
    // 0x15059360: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x15059364: b           L_15059370
    // 0x15059368: sb          $zero, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = 0;
        goto L_15059370;
    // 0x15059368: sb          $zero, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = 0;
L_1505936C:
    // 0x1505936C: sb          $t7, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r15;
L_15059370:
    // 0x15059370: lbu         $v0, 0x107($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X107);
L_15059374:
    // 0x15059374: beq         $v0, $zero, L_15059380
    if (ctx->r2 == 0) {
        // 0x15059378: addiu       $t8, $v0, -0x1
        ctx->r24 = ADD32(ctx->r2, -0X1);
            goto L_15059380;
    }
    // 0x15059378: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x1505937C: sb          $t8, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r24;
L_15059380:
    // 0x15059380: lbu         $v1, 0x125($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X125);
    // 0x15059384: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x15059388: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1505938C: beql        $v1, $at, L_150593B4
    if (ctx->r3 == ctx->r1) {
        // 0x15059390: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_150593B4;
    }
    goto skip_11;
    // 0x15059390: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_11:
    // 0x15059394: lbu         $v0, -0x1660($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1660);
    // 0x15059398: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x1505939C: bne         $at, $zero, L_150593AC
    if (ctx->r1 != 0) {
        // 0x150593A0: subu        $t9, $v1, $v0
        ctx->r25 = SUB32(ctx->r3, ctx->r2);
            goto L_150593AC;
    }
    // 0x150593A0: subu        $t9, $v1, $v0
    ctx->r25 = SUB32(ctx->r3, ctx->r2);
    // 0x150593A4: b           L_150593B0
    // 0x150593A8: sb          $zero, 0x125($s0)
    MEM_B(0X125, ctx->r16) = 0;
        goto L_150593B0;
    // 0x150593A8: sb          $zero, 0x125($s0)
    MEM_B(0X125, ctx->r16) = 0;
L_150593AC:
    // 0x150593AC: sb          $t9, 0x125($s0)
    MEM_B(0X125, ctx->r16) = ctx->r25;
L_150593B0:
    // 0x150593B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_150593B4:
    // 0x150593B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x150593B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x150593BC: jr          $ra
    // 0x150593C0: nop

    return;
    return;
    // 0x150593C0: nop

;}
RECOMP_FUNC void func_15005D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15005D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15005D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15005D08: lw          $t7, 0x84($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X84);
    // 0x15005D0C: lui         $at, 0x30
    ctx->r1 = S32(0X30 << 16);
    // 0x15005D10: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x15005D14: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x15005D18: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x15005D1C: sw          $t8, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r24;
    // 0x15005D20: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x15005D24: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15005D28: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x15005D2C: sw          $t6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r14;
    // 0x15005D30: sw          $t0, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->r8;
    // 0x15005D34: sh          $t1, 0x1B4($a0)
    MEM_H(0X1B4, ctx->r4) = ctx->r9;
    // 0x15005D38: sh          $t2, 0x1E0($a0)
    MEM_H(0X1E0, ctx->r4) = ctx->r10;
    // 0x15005D3C: jal         0x15124B18
    // 0x15005D40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15124B18(rdram, ctx);
        goto after_0;
    // 0x15005D40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x15005D44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x15005D48: sw          $zero, 0x134($a0)
    MEM_W(0X134, ctx->r4) = 0;
    // 0x15005D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15005D50: jr          $ra
    // 0x15005D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x15005D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_15179FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15179FE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15179FE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15179FE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15179FEC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x15179FF0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15179FF4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15179FF8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x15179FFC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1517A000: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1517A004: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1517A008: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1517A00C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x1517A010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1517A014: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x1517A018: jal         0x15167A68
    // 0x1517A01C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1517A01C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x1517A020: beq         $v0, $zero, L_1517A1D8
    if (ctx->r2 == 0) {
        // 0x1517A024: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_1517A1D8;
    }
    // 0x1517A024: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x1517A028: lh          $t8, 0x3E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X3E);
    // 0x1517A02C: sh          $t8, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r24;
    // 0x1517A030: lh          $t9, 0x42($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X42);
    // 0x1517A034: sh          $t9, 0x92($v0)
    MEM_H(0X92, ctx->r2) = ctx->r25;
    // 0x1517A038: lh          $t0, 0x46($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X46);
    // 0x1517A03C: sh          $t0, 0x94($v0)
    MEM_H(0X94, ctx->r2) = ctx->r8;
    // 0x1517A040: lb          $t1, 0x4B($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X4B);
    // 0x1517A044: jal         0x150ADA20
    // 0x1517A048: sh          $t1, 0xA2($v0)
    MEM_H(0XA2, ctx->r2) = ctx->r9;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1517A048: sh          $t1, 0xA2($v0)
    MEM_H(0XA2, ctx->r2) = ctx->r9;
    after_1:
    // 0x1517A04C: lbu         $v1, 0x57($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X57);
    // 0x1517A050: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x1517A054: mfhi        $t2
    ctx->r10 = hi;
    // 0x1517A058: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x1517A05C: sra         $a1, $v1, 1
    ctx->r5 = S32(SIGNED(ctx->r3) >> 1);
    // 0x1517A060: subu        $t3, $t2, $a1
    ctx->r11 = SUB32(ctx->r10, ctx->r5);
    // 0x1517A064: sh          $t3, 0xA0($s0)
    MEM_H(0XA0, ctx->r16) = ctx->r11;
    // 0x1517A068: bne         $a0, $zero, L_1517A074
    if (ctx->r4 != 0) {
        // 0x1517A06C: nop
    
            goto L_1517A074;
    }
    // 0x1517A06C: nop

    // 0x1517A070: break       7
    do_break(353869936);
L_1517A074:
    // 0x1517A074: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x1517A078: jal         0x150ADA20
    // 0x1517A07C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x1517A07C: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_2:
    // 0x1517A080: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x1517A084: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x1517A088: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x1517A08C: divu        $zero, $v0, $a0
    lo = S32(U32(ctx->r2) / U32(ctx->r4)); hi = S32(U32(ctx->r2) % U32(ctx->r4));
    // 0x1517A090: mfhi        $t4
    ctx->r12 = hi;
    // 0x1517A094: subu        $t5, $t4, $a1
    ctx->r13 = SUB32(ctx->r12, ctx->r5);
    // 0x1517A098: sh          $t5, 0xA4($s0)
    MEM_H(0XA4, ctx->r16) = ctx->r13;
    // 0x1517A09C: lhu         $t6, 0x52($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X52);
    // 0x1517A0A0: bne         $a0, $zero, L_1517A0AC
    if (ctx->r4 != 0) {
        // 0x1517A0A4: nop
    
            goto L_1517A0AC;
    }
    // 0x1517A0A4: nop

    // 0x1517A0A8: break       7
    do_break(353869992);
L_1517A0AC:
    // 0x1517A0AC: bnel        $t6, $at, L_1517A0F4
    if (ctx->r14 != ctx->r1) {
        // 0x1517A0B0: sh          $zero, 0x96($s0)
        MEM_H(0X96, ctx->r16) = 0;
            goto L_1517A0F4;
    }
    goto skip_0;
    // 0x1517A0B0: sh          $zero, 0x96($s0)
    MEM_H(0X96, ctx->r16) = 0;
    skip_0:
    // 0x1517A0B4: lh          $t8, 0xA0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XA0);
    // 0x1517A0B8: lh          $t7, 0x90($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X90);
    // 0x1517A0BC: lh          $t2, 0xA2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0XA2);
    // 0x1517A0C0: lh          $t6, 0xA4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA4);
    // 0x1517A0C4: lh          $t1, 0x92($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X92);
    // 0x1517A0C8: lh          $t5, 0x94($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X94);
    // 0x1517A0CC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x1517A0D0: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x1517A0D4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x1517A0D8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x1517A0DC: subu        $t4, $t1, $t3
    ctx->r12 = SUB32(ctx->r9, ctx->r11);
    // 0x1517A0E0: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x1517A0E4: sh          $t0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r8;
    // 0x1517A0E8: sh          $t4, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r12;
    // 0x1517A0EC: sh          $t7, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r15;
    // 0x1517A0F0: sh          $zero, 0x96($s0)
    MEM_H(0X96, ctx->r16) = 0;
L_1517A0F4:
    // 0x1517A0F4: sh          $zero, 0x98($s0)
    MEM_H(0X98, ctx->r16) = 0;
    // 0x1517A0F8: jal         0x150ADA20
    // 0x1517A0FC: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x1517A0FC: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    after_3:
    // 0x1517A100: lbu         $v1, 0x5B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X5B);
    // 0x1517A104: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x1517A108: mfhi        $t9
    ctx->r25 = hi;
    // 0x1517A10C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x1517A110: sra         $a1, $v1, 1
    ctx->r5 = S32(SIGNED(ctx->r3) >> 1);
    // 0x1517A114: subu        $t0, $t9, $a1
    ctx->r8 = SUB32(ctx->r25, ctx->r5);
    // 0x1517A118: sb          $t0, 0x9C($s0)
    MEM_B(0X9C, ctx->r16) = ctx->r8;
    // 0x1517A11C: bne         $a0, $zero, L_1517A128
    if (ctx->r4 != 0) {
        // 0x1517A120: nop
    
            goto L_1517A128;
    }
    // 0x1517A120: nop

    // 0x1517A124: break       7
    do_break(353870116);
L_1517A128:
    // 0x1517A128: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x1517A12C: jal         0x150ADA20
    // 0x1517A130: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_4;
    // 0x1517A130: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_4:
    // 0x1517A134: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x1517A138: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x1517A13C: divu        $zero, $v0, $t2
    lo = S32(U32(ctx->r2) / U32(ctx->r10)); hi = S32(U32(ctx->r2) % U32(ctx->r10));
    // 0x1517A140: mfhi        $t1
    ctx->r9 = hi;
    // 0x1517A144: subu        $t4, $t1, $t3
    ctx->r12 = SUB32(ctx->r9, ctx->r11);
    // 0x1517A148: bne         $t2, $zero, L_1517A154
    if (ctx->r10 != 0) {
        // 0x1517A14C: nop
    
            goto L_1517A154;
    }
    // 0x1517A14C: nop

    // 0x1517A150: break       7
    do_break(353870160);
L_1517A154:
    // 0x1517A154: sb          $t4, 0x9D($s0)
    MEM_B(0X9D, ctx->r16) = ctx->r12;
    // 0x1517A158: jal         0x150ADA20
    // 0x1517A15C: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x1517A15C: nop

    after_5:
    // 0x1517A160: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x1517A164: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x1517A168: divu        $zero, $v0, $t6
    lo = S32(U32(ctx->r2) / U32(ctx->r14)); hi = S32(U32(ctx->r2) % U32(ctx->r14));
    // 0x1517A16C: mfhi        $t5
    ctx->r13 = hi;
    // 0x1517A170: subu        $t7, $t5, $t8
    ctx->r15 = SUB32(ctx->r13, ctx->r24);
    // 0x1517A174: bne         $t6, $zero, L_1517A180
    if (ctx->r14 != 0) {
        // 0x1517A178: nop
    
            goto L_1517A180;
    }
    // 0x1517A178: nop

    // 0x1517A17C: break       7
    do_break(353870204);
L_1517A180:
    // 0x1517A180: sb          $t7, 0x9E($s0)
    MEM_B(0X9E, ctx->r16) = ctx->r15;
    // 0x1517A184: jal         0x150ADA20
    // 0x1517A188: nop

    func_150ADA20(rdram, ctx);
        goto after_6;
    // 0x1517A188: nop

    after_6:
    // 0x1517A18C: andi        $t9, $v0, 0x7F
    ctx->r25 = ctx->r2 & 0X7F;
    // 0x1517A190: addiu       $t0, $t9, 0x8C
    ctx->r8 = ADD32(ctx->r25, 0X8C);
    // 0x1517A194: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x1517A198: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1517A19C: lwc1        $f8, 0x7220($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7220);
    // 0x1517A1A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1517A1A4: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1517A1A8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1517A1AC: swc1        $f10, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->f10.u32l;
    // 0x1517A1B0: lhu         $t2, 0x4E($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X4E);
    // 0x1517A1B4: sh          $t2, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r10;
    // 0x1517A1B8: lbu         $t1, 0x3B($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X3B);
    // 0x1517A1BC: sb          $t1, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r9;
    // 0x1517A1C0: lhu         $t3, 0x52($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X52);
    // 0x1517A1C4: sh          $t3, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r11;
    // 0x1517A1C8: lbu         $t4, 0x5F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X5F);
    // 0x1517A1CC: sb          $zero, 0xB2($s0)
    MEM_B(0XB2, ctx->r16) = 0;
    // 0x1517A1D0: sb          $t6, 0xB3($s0)
    MEM_B(0XB3, ctx->r16) = ctx->r14;
    // 0x1517A1D4: sh          $t4, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r12;
L_1517A1D8:
    // 0x1517A1D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1517A1DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1517A1E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1517A1E4: jr          $ra
    // 0x1517A1E8: nop

    return;
    return;
    // 0x1517A1E8: nop

;}
RECOMP_FUNC void func_150627D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150627D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150627D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150627DC: sb          $zero, 0x2FB($a0)
    MEM_B(0X2FB, ctx->r4) = 0;
    // 0x150627E0: jal         0x1503B840
    // 0x150627E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_1503B840(rdram, ctx);
        goto after_0;
    // 0x150627E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150627E8: jal         0x15039CC8
    // 0x150627EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_15039CC8(rdram, ctx);
        goto after_1;
    // 0x150627EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x150627F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150627F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150627F8: jr          $ra
    // 0x150627FC: nop

    return;
    return;
    // 0x150627FC: nop

;}
RECOMP_FUNC void func_1000EB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000EB00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000EB04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000EB08: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x1000EB0C: lhu         $t6, 0x24($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X24);
    // 0x1000EB10: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x1000EB14: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x1000EB18: beql        $t6, $zero, L_1000EB28
    if (ctx->r14 == 0) {
        // 0x1000EB1C: sw          $t7, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r15;
            goto L_1000EB28;
    }
    goto skip_0;
    // 0x1000EB1C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    skip_0:
    // 0x1000EB20: sh          $zero, 0x24($a0)
    MEM_H(0X24, ctx->r4) = 0;
    // 0x1000EB24: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
L_1000EB28:
    // 0x1000EB28: lbu         $t8, -0x3C83($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3C83);
    // 0x1000EB2C: bnel        $t8, $zero, L_1000EB48
    if (ctx->r24 != 0) {
        // 0x1000EB30: sw          $zero, 0x0($a2)
        MEM_W(0X0, ctx->r6) = 0;
            goto L_1000EB48;
    }
    goto skip_1;
    // 0x1000EB30: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    skip_1:
    // 0x1000EB34: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x1000EB38: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x1000EB3C: bnel        $t9, $zero, L_1000EB5C
    if (ctx->r25 != 0) {
        // 0x1000EB40: lw          $t1, 0x18($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X18);
            goto L_1000EB5C;
    }
    goto skip_2;
    // 0x1000EB40: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
    skip_2:
    // 0x1000EB44: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_1000EB48:
    // 0x1000EB48: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x1000EB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x1000EB50: b           L_1000EBB4
    // 0x1000EB54: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
        goto L_1000EBB4;
    // 0x1000EB54: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x1000EB58: lw          $t1, 0x18($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X18);
L_1000EB5C:
    // 0x1000EB5C: lw          $t2, -0x161C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X161C);
    // 0x1000EB60: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x1000EB64: blez        $t3, L_1000EB7C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x1000EB68: sw          $t3, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->r11;
            goto L_1000EB7C;
    }
    // 0x1000EB68: sw          $t3, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r11;
    // 0x1000EB6C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x1000EB70: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x1000EB74: b           L_1000EBB0
    // 0x1000EB78: sh          $zero, 0x0($t5)
    MEM_H(0X0, ctx->r13) = 0;
        goto L_1000EBB0;
    // 0x1000EB78: sh          $zero, 0x0($t5)
    MEM_H(0X0, ctx->r13) = 0;
L_1000EB7C:
    // 0x1000EB7C: jal         0x150ADA20
    // 0x1000EB80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1000EB80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x1000EB84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1000EB88: andi        $t6, $v0, 0x7F
    ctx->r14 = ctx->r2 & 0X7F;
    // 0x1000EB8C: addiu       $t7, $t6, 0x80
    ctx->r15 = ADD32(ctx->r14, 0X80);
    // 0x1000EB90: jal         0x150ADA20
    // 0x1000EB94: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1000EB94: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    after_1:
    // 0x1000EB98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x1000EB9C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1000EBA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x1000EBA4: mfhi        $t8
    ctx->r24 = hi;
    // 0x1000EBA8: addiu       $t9, $t8, 0x6C
    ctx->r25 = ADD32(ctx->r24, 0X6C);
    // 0x1000EBAC: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
L_1000EBB0:
    // 0x1000EBB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1000EBB4:
    // 0x1000EBB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000EBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000EBBC: jr          $ra
    // 0x1000EBC0: nop

    return;
    return;
    // 0x1000EBC0: nop

;}
RECOMP_FUNC void func_15074DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15074DEC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15074DF0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15074DF4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x15074DF8: sw          $t6, 0x2E8($a0)
    MEM_W(0X2E8, ctx->r4) = ctx->r14;
    // 0x15074DFC: jr          $ra
    // 0x15074E00: nop

    return;
    return;
    // 0x15074E00: nop

;}
RECOMP_FUNC void func_151422F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151422F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x151422FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15142300: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x15142304: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15142308: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x1514230C: jr          $ra
    // 0x15142310: nop

    return;
    return;
    // 0x15142310: nop

;}
RECOMP_FUNC void func_1515D69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515D69C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x1515D6A0: lw          $v0, -0x3288($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3288);
    // 0x1515D6A4: beq         $v0, $zero, L_1515D6C0
    if (ctx->r2 == 0) {
        // 0x1515D6A8: nop
    
            goto L_1515D6C0;
    }
    // 0x1515D6A8: nop

    // 0x1515D6AC: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
L_1515D6B0:
    // 0x1515D6B0: sb          $zero, 0x30($v0)
    MEM_B(0X30, ctx->r2) = 0;
    // 0x1515D6B4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x1515D6B8: bnel        $v0, $zero, L_1515D6B0
    if (ctx->r2 != 0) {
        // 0x1515D6BC: sb          $zero, 0xC($v0)
        MEM_B(0XC, ctx->r2) = 0;
            goto L_1515D6B0;
    }
    goto skip_0;
    // 0x1515D6BC: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    skip_0:
L_1515D6C0:
    // 0x1515D6C0: jr          $ra
    // 0x1515D6C4: nop

    return;
    return;
    // 0x1515D6C4: nop

;}
RECOMP_FUNC void func_1514D310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514D310: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1514D314: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x1514D318: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x1514D31C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x1514D320: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1514D324: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1514D328: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1514D32C: lw          $s0, 0x2F4($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X2F4);
    // 0x1514D330: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x1514D334: addiu       $s4, $s4, -0x54A8
    ctx->r20 = ADD32(ctx->r20, -0X54A8);
    // 0x1514D338: beq         $s0, $zero, L_1514D38C
    if (ctx->r16 == 0) {
        // 0x1514D33C: lui         $s3, 0x8009
        ctx->r19 = S32(0X8009 << 16);
            goto L_1514D38C;
    }
    // 0x1514D33C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x1514D340: addiu       $s3, $s3, -0x5418
    ctx->r19 = ADD32(ctx->r19, -0X5418);
    // 0x1514D344: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_1514D348:
    // 0x1514D348: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x1514D34C: lw          $s1, 0x14($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X14);
    // 0x1514D350: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x1514D354: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x1514D358: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x1514D35C: lh          $v0, 0x2($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X2);
    // 0x1514D360: beq         $s2, $v0, L_1514D37C
    if (ctx->r18 == ctx->r2) {
        // 0x1514D364: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_1514D37C;
    }
    // 0x1514D364: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x1514D368: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x1514D36C: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x1514D370: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x1514D374: jalr        $t9
    // 0x1514D378: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x1514D378: nop

    after_0:
L_1514D37C:
    // 0x1514D37C: jal         0x1516972C
    // 0x1514D380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x1514D380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x1514D384: bne         $s1, $zero, L_1514D348
    if (ctx->r17 != 0) {
        // 0x1514D388: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_1514D348;
    }
    // 0x1514D388: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_1514D38C:
    // 0x1514D38C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514D390: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x1514D394: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1514D398: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1514D39C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1514D3A0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x1514D3A4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x1514D3A8: jr          $ra
    // 0x1514D3AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1514D3AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_15075E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15075E98: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x15075E9C: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15075EA0: lw          $t7, 0x154C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X154C);
    // 0x15075EA4: lbu         $t6, 0x1890($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X1890);
    // 0x15075EA8: sb          $t6, 0x235($t7)
    MEM_B(0X235, ctx->r15) = ctx->r14;
    // 0x15075EAC: jr          $ra
    // 0x15075EB0: nop

    return;
    return;
    // 0x15075EB0: nop

;}
RECOMP_FUNC void func_1512D070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512D070: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x1512D074: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1512D078: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1512D07C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1512D080: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x1512D084: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x1512D088: and         $v0, $v1, $at
    ctx->r2 = ctx->r3 & ctx->r1;
    // 0x1512D08C: beq         $v0, $zero, L_1512D09C
    if (ctx->r2 == 0) {
        // 0x1512D090: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1512D09C;
    }
    // 0x1512D090: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512D094: b           L_1512D0BC
    // 0x1512D098: lwc1        $f2, 0x36C0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X36C0);
        goto L_1512D0BC;
    // 0x1512D098: lwc1        $f2, 0x36C0($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X36C0);
L_1512D09C:
    // 0x1512D09C: lh          $t6, 0x298($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X298);
    // 0x1512D0A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512D0A4: beq         $t6, $zero, L_1512D0B8
    if (ctx->r14 == 0) {
        // 0x1512D0A8: nop
    
            goto L_1512D0B8;
    }
    // 0x1512D0A8: nop

    // 0x1512D0AC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512D0B0: b           L_1512D0BC
    // 0x1512D0B4: lwc1        $f2, 0x36C4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X36C4);
        goto L_1512D0BC;
    // 0x1512D0B4: lwc1        $f2, 0x36C4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X36C4);
L_1512D0B8:
    // 0x1512D0B8: lwc1        $f2, 0x36C8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X36C8);
L_1512D0BC:
    // 0x1512D0BC: bne         $v0, $zero, L_1512D0E8
    if (ctx->r2 != 0) {
        // 0x1512D0C0: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_1512D0E8;
    }
    // 0x1512D0C0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x1512D0C4: lw          $v0, 0x5F0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5F0);
    // 0x1512D0C8: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x1512D0CC: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x1512D0D0: bne         $t7, $zero, L_1512D0E8
    if (ctx->r15 != 0) {
        // 0x1512D0D4: nop
    
            goto L_1512D0E8;
    }
    // 0x1512D0D4: nop

    // 0x1512D0D8: beq         $v1, $at, L_1512D13C
    if (ctx->r3 == ctx->r1) {
        // 0x1512D0DC: andi        $t8, $v0, 0x8
        ctx->r24 = ctx->r2 & 0X8;
            goto L_1512D13C;
    }
    // 0x1512D0DC: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x1512D0E0: beql        $t8, $zero, L_1512D140
    if (ctx->r24 == 0) {
        // 0x1512D0E4: mtc1        $zero, $f2
        ctx->f2.u32l = 0;
            goto L_1512D140;
    }
    goto skip_0;
    // 0x1512D0E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    skip_0:
L_1512D0E8:
    // 0x1512D0E8: lw          $t9, -0x161C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X161C);
    // 0x1512D0EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512D0F0: lwc1        $f4, 0x36CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X36CC);
    // 0x1512D0F4: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x1512D0F8: lwc1        $f16, 0x7B0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X7B0);
    // 0x1512D0FC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512D100: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1512D104: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x1512D108: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x1512D10C: swc1        $f18, 0x7B0($s0)
    MEM_W(0X7B0, ctx->r16) = ctx->f18.u32l;
    // 0x1512D110: lwc1        $f6, 0x36D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X36D0);
    // 0x1512D114: lwc1        $f0, 0x7B0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X7B0);
    // 0x1512D118: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512D11C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x1512D120: nop

    // 0x1512D124: bc1fl       L_1512D148
    if (!c1cs) {
        // 0x1512D128: lbu         $t0, 0x23C($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X23C);
            goto L_1512D148;
    }
    goto skip_1;
    // 0x1512D128: lbu         $t0, 0x23C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X23C);
    skip_1:
    // 0x1512D12C: lwc1        $f4, 0x36D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X36D4);
    // 0x1512D130: sub.s       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x1512D134: b           L_1512D144
    // 0x1512D138: swc1        $f8, 0x7B0($s0)
    MEM_W(0X7B0, ctx->r16) = ctx->f8.u32l;
        goto L_1512D144;
    // 0x1512D138: swc1        $f8, 0x7B0($s0)
    MEM_W(0X7B0, ctx->r16) = ctx->f8.u32l;
L_1512D13C:
    // 0x1512D13C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
L_1512D140:
    // 0x1512D140: nop

L_1512D144:
    // 0x1512D144: lbu         $t0, 0x23C($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X23C);
L_1512D148:
    // 0x1512D148: bne         $t0, $zero, L_1512D168
    if (ctx->r8 != 0) {
        // 0x1512D14C: nop
    
            goto L_1512D168;
    }
    // 0x1512D14C: nop

    // 0x1512D150: lw          $t1, 0x5F0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X5F0);
    // 0x1512D154: addiu       $a0, $s0, 0x7DC
    ctx->r4 = ADD32(ctx->r16, 0X7DC);
    // 0x1512D158: addiu       $a2, $s0, 0x7D8
    ctx->r6 = ADD32(ctx->r16, 0X7D8);
    // 0x1512D15C: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x1512D160: beq         $t2, $zero, L_1512D170
    if (ctx->r10 == 0) {
        // 0x1512D164: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_1512D170;
    }
    // 0x1512D164: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
L_1512D168:
    // 0x1512D168: b           L_1512D190
    // 0x1512D16C: swc1        $f2, 0x7DC($s0)
    MEM_W(0X7DC, ctx->r16) = ctx->f2.u32l;
        goto L_1512D190;
    // 0x1512D16C: swc1        $f2, 0x7DC($s0)
    MEM_W(0X7DC, ctx->r16) = ctx->f2.u32l;
L_1512D170:
    // 0x1512D170: lwc1        $f16, 0x36D8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X36D8);
    // 0x1512D174: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x1512D178: lui         $a3, 0x3E4C
    ctx->r7 = S32(0X3E4C << 16);
    // 0x1512D17C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x1512D180: lwc1        $f10, 0x7B4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X7B4);
    // 0x1512D184: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x1512D188: jal         0x150495B0
    // 0x1512D18C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_150495B0(rdram, ctx);
        goto after_0;
    // 0x1512D18C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_0:
L_1512D190:
    // 0x1512D190: jal         0x150A7BC0
    // 0x1512D194: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    guMtxIdentF(rdram, ctx);
        goto after_1;
    // 0x1512D194: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x1512D198: jal         0x150AD78C
    // 0x1512D19C: lwc1        $f12, 0x7B0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7B0);
    func_150AD78C(rdram, ctx);
        goto after_2;
    // 0x1512D19C: lwc1        $f12, 0x7B0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7B0);
    after_2:
    // 0x1512D1A0: lwc1        $f2, 0x7DC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X7DC);
    // 0x1512D1A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1512D1A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1512D1AC: mul.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1512D1B0: add.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x1512D1B4: add.s       $f18, $f14, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f14.fl;
    // 0x1512D1B8: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1512D1BC: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1512D1C0: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x1512D1C4: jal         0x150AD780
    // 0x1512D1C8: lwc1        $f12, 0x7B0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7B0);
    func_150AD780(rdram, ctx);
        goto after_3;
    // 0x1512D1C8: lwc1        $f12, 0x7B0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X7B0);
    after_3:
    // 0x1512D1CC: lwc1        $f2, 0x7DC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X7DC);
    // 0x1512D1D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1512D1D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1512D1D8: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x1512D1DC: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x1512D1E0: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x1512D1E4: add.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x1512D1E8: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x1512D1EC: jal         0x150A7790
    // 0x1512D1F0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    guMtxF2L(rdram, ctx);
        goto after_4;
    // 0x1512D1F0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x1512D1F4: lui         $t3, 0x800C
    ctx->r11 = S32(0X800C << 16);
    // 0x1512D1F8: lbu         $t3, -0x1640($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X1640);
    // 0x1512D1FC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x1512D200: lbu         $t6, 0x23D($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23D);
    // 0x1512D204: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x1512D208: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x1512D20C: lw          $t5, -0x3D60($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3D60);
    // 0x1512D210: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x1512D214: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x1512D218: addu        $a0, $t5, $t7
    ctx->r4 = ADD32(ctx->r13, ctx->r15);
    // 0x1512D21C: jal         0x151F00E0
    // 0x1512D220: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    guMtxCatL(rdram, ctx);
        goto after_5;
    // 0x1512D220: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    after_5:
    // 0x1512D224: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1512D228: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1512D22C: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x1512D230: jr          $ra
    // 0x1512D234: nop

    return;
    return;
    // 0x1512D234: nop

;}
RECOMP_FUNC void func_1513F728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513F728: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x1513F72C: addiu       $v1, $a0, 0x110
    ctx->r3 = ADD32(ctx->r4, 0X110);
    // 0x1513F730: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x1513F734: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x1513F738: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x1513F73C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x1513F740: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x1513F744: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x1513F748: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x1513F74C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x1513F750: lw          $v0, -0x161C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X161C);
    // 0x1513F754: beq         $v0, $zero, L_1513F908
    if (ctx->r2 == 0) {
        // 0x1513F758: andi        $a2, $v0, 0x3
        ctx->r6 = ctx->r2 & 0X3;
            goto L_1513F908;
    }
    // 0x1513F758: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    // 0x1513F75C: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x1513F760: beq         $a2, $zero, L_1513F7D0
    if (ctx->r6 == 0) {
        // 0x1513F764: addu        $a1, $a2, $v0
        ctx->r5 = ADD32(ctx->r6, ctx->r2);
            goto L_1513F7D0;
    }
    // 0x1513F764: addu        $a1, $a2, $v0
    ctx->r5 = ADD32(ctx->r6, ctx->r2);
    // 0x1513F768: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1513F76C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F770: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1513F774: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F778: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F77C: beq         $a1, $v0, L_1513F7B0
    if (ctx->r5 == ctx->r2) {
        // 0x1513F780: nop
    
            goto L_1513F7B0;
    }
    // 0x1513F780: nop

L_1513F784:
    // 0x1513F784: mul.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1513F788: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F78C: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x1513F790: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F794: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F798: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x1513F79C: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F7A0: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F7A4: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F7A8: bne         $a1, $v0, L_1513F784
    if (ctx->r5 != ctx->r2) {
        // 0x1513F7AC: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_1513F784;
    }
    // 0x1513F7AC: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
L_1513F7B0:
    // 0x1513F7B0: mul.s       $f14, $f16, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x1513F7B4: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F7B8: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x1513F7BC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F7C0: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F7C4: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x1513F7C8: beql        $v0, $zero, L_1513F90C
    if (ctx->r2 == 0) {
        // 0x1513F7CC: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_1513F90C;
    }
    goto skip_0;
    // 0x1513F7CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    skip_0:
L_1513F7D0:
    // 0x1513F7D0: lwc1        $f0, 0x10($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X10);
    // 0x1513F7D4: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F7D8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x1513F7DC: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F7E0: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F7E4: beq         $v0, $zero, L_1513F884
    if (ctx->r2 == 0) {
        // 0x1513F7E8: nop
    
            goto L_1513F884;
    }
    // 0x1513F7E8: nop

L_1513F7EC:
    // 0x1513F7EC: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1513F7F0: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F7F4: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    // 0x1513F7F8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F7FC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F800: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x1513F804: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F808: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F80C: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F810: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x1513F814: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1513F818: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F81C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1513F820: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F824: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F828: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F82C: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F830: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F834: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x1513F838: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1513F83C: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F840: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1513F844: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F848: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F84C: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F850: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F854: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F858: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x1513F85C: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1513F860: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F864: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1513F868: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F86C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F870: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F874: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F878: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F87C: bne         $v0, $zero, L_1513F7EC
    if (ctx->r2 != 0) {
        // 0x1513F880: swc1        $f12, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
            goto L_1513F7EC;
    }
    // 0x1513F880: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
L_1513F884:
    // 0x1513F884: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x1513F888: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F88C: swc1        $f16, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f16.u32l;
    // 0x1513F890: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F894: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F898: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F89C: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F8A0: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F8A4: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x1513F8A8: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1513F8AC: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F8B0: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1513F8B4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F8B8: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F8BC: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F8C0: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F8C4: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F8C8: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x1513F8CC: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1513F8D0: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F8D4: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1513F8D8: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F8DC: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F8E0: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F8E4: mul.s       $f10, $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F8E8: lwc1        $f14, 0x4($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F8EC: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
    // 0x1513F8F0: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x1513F8F4: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F8F8: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x1513F8FC: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x1513F900: swc1        $f14, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f14.u32l;
    // 0x1513F904: swc1        $f12, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f12.u32l;
L_1513F908:
    // 0x1513F908: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_1513F90C:
    // 0x1513F90C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x1513F910: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1513F914: addiu       $a1, $a1, -0x165C
    ctx->r5 = ADD32(ctx->r5, -0X165C);
    // 0x1513F918: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x1513F91C: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1513F920: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F924: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1513F928: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1513F92C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x1513F930: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1513F934: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x1513F938: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x1513F93C: lwc1        $f12, -0x1658($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1658);
    // 0x1513F940: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x1513F944: sub.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x1513F948: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1513F94C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1513F950: mul.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1513F954: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1513F958: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1513F95C: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x1513F960: mul.s       $f14, $f4, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1513F964: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1513F968: mul.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x1513F96C: nop

    // 0x1513F970: mul.s       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x1513F974: nop

    // 0x1513F978: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1513F97C: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x1513F980: lwc1        $f6, 0x34($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X34);
    // 0x1513F984: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1513F988: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1513F98C: mul.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x1513F990: swc1        $f10, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f10.u32l;
    // 0x1513F994: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1513F998: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x1513F99C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x1513F9A0: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x1513F9A4: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x1513F9A8: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x1513F9AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1513F9B0: mul.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x1513F9B4: swc1        $f8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f8.u32l;
    // 0x1513F9B8: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1513F9BC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x1513F9C0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1513F9C4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x1513F9C8: lwc1        $f10, 0x3C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x1513F9CC: mul.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1513F9D0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1513F9D4: swc1        $f6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f6.u32l;
    // 0x1513F9D8: lwc1        $f8, 0x14($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X14);
    // 0x1513F9DC: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1513F9E0: lwc1        $f6, 0x40($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X40);
    // 0x1513F9E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1513F9E8: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x1513F9EC: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x1513F9F0: swc1        $f8, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f8.u32l;
    // 0x1513F9F4: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1513F9F8: lwc1        $f10, 0x18($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X18);
    // 0x1513F9FC: lwc1        $f8, 0x44($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X44);
    // 0x1513FA00: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x1513FA04: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x1513FA08: swc1        $f10, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f10.u32l;
    // 0x1513FA0C: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x1513FA10: lwc1        $f6, 0x1C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X1C);
    // 0x1513FA14: lwc1        $f10, 0x48($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X48);
    // 0x1513FA18: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x1513FA1C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x1513FA20: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
    // 0x1513FA24: jr          $ra
    // 0x1513FA28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x1513FA28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1501A220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501A220: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1501A224: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x1501A228: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x1501A22C: addiu       $s2, $s2, 0x2FA0
    ctx->r18 = ADD32(ctx->r18, 0X2FA0);
    // 0x1501A230: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1501A234: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x1501A238: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x1501A23C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1501A240: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    // 0x1501A244: bne         $a0, $zero, L_1501A254
    if (ctx->r4 != 0) {
        // 0x1501A248: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_1501A254;
    }
    // 0x1501A248: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x1501A24C: b           L_1501A258
    // 0x1501A250: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_1501A258;
    // 0x1501A250: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_1501A254:
    // 0x1501A254: addiu       $s0, $s1, 0x2
    ctx->r16 = ADD32(ctx->r17, 0X2);
L_1501A258:
    // 0x1501A258: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x1501A25C: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x1501A260: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x1501A264: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501A268: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1501A26C: jal         0x10003C40
    // 0x1501A270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_0;
    // 0x1501A270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1501A274: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501A278: sw          $v0, -0x19D8($at)
    MEM_W(-0X19D8, ctx->r1) = ctx->r2;
    // 0x1501A27C: sll         $a0, $s0, 4
    ctx->r4 = S32(ctx->r16 << 4);
    // 0x1501A280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x1501A284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x1501A288: jal         0x10003C40
    // 0x1501A28C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    allocate_memory(rdram, ctx);
        goto after_1;
    // 0x1501A28C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x1501A290: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501A294: sw          $v0, -0x19D4($at)
    MEM_W(-0X19D4, ctx->r1) = ctx->r2;
    // 0x1501A298: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x1501A29C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501A2A0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1501A2A4: bne         $t6, $at, L_1501A30C
    if (ctx->r14 != ctx->r1) {
        // 0x1501A2A8: lui         $a0, 0x800C
        ctx->r4 = S32(0X800C << 16);
            goto L_1501A30C;
    }
    // 0x1501A2A8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x1501A2AC: lw          $t7, -0x19C4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X19C4);
    // 0x1501A2B0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x1501A2B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1501A2B8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x1501A2BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x1501A2C0: lwc1        $f10, 0x68E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X68E0);
    // 0x1501A2C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x1501A2C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501A2CC: sub.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x1501A2D0: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1501A2D4: trunc.w.s   $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x1501A2D8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x1501A2DC: nop

    // 0x1501A2E0: bgez        $v0, L_1501A2F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x1501A2E4: andi        $t9, $v0, 0x3
        ctx->r25 = ctx->r2 & 0X3;
            goto L_1501A2F4;
    }
    // 0x1501A2E4: andi        $t9, $v0, 0x3
    ctx->r25 = ctx->r2 & 0X3;
    // 0x1501A2E8: beq         $t9, $zero, L_1501A2F4
    if (ctx->r25 == 0) {
        // 0x1501A2EC: nop
    
            goto L_1501A2F4;
    }
    // 0x1501A2EC: nop

    // 0x1501A2F0: addiu       $t9, $t9, -0x4
    ctx->r25 = ADD32(ctx->r25, -0X4);
L_1501A2F4:
    // 0x1501A2F4: subu        $t0, $v0, $t9
    ctx->r8 = SUB32(ctx->r2, ctx->r25);
    // 0x1501A2F8: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x1501A2FC: nop

    // 0x1501A300: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x1501A304: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x1501A308: swc1        $f6, -0x1948($at)
    MEM_W(-0X1948, ctx->r1) = ctx->f6.u32l;
L_1501A30C:
    // 0x1501A30C: jal         0x150006E0
    // 0x1501A310: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    func_150006E0(rdram, ctx);
        goto after_2;
    // 0x1501A310: lw          $a0, -0x1610($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1610);
    after_2:
    // 0x1501A314: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x1501A318: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x1501A31C: bltz        $s1, L_1501A348
    if (SIGNED(ctx->r17) < 0) {
        // 0x1501A320: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1501A348;
    }
    // 0x1501A320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_1501A324:
    // 0x1501A324: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1501A328: addiu       $a2, $zero, 0x3FF
    ctx->r6 = ADD32(0, 0X3FF);
    // 0x1501A32C: jal         0x1501A8C0
    // 0x1501A330: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501A8C0(rdram, ctx);
        goto after_3;
    // 0x1501A330: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x1501A334: lw          $s1, 0x0($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X0);
    // 0x1501A338: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x1501A33C: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x1501A340: beql        $at, $zero, L_1501A324
    if (ctx->r1 == 0) {
        // 0x1501A344: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1501A324;
    }
    goto skip_0;
    // 0x1501A344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_1501A348:
    // 0x1501A348: beq         $s1, $zero, L_1501A360
    if (ctx->r17 == 0) {
        // 0x1501A34C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_1501A360;
    }
    // 0x1501A34C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1501A350: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501A354: addiu       $a2, $zero, 0x3FF
    ctx->r6 = ADD32(0, 0X3FF);
    // 0x1501A358: jal         0x1501A8C0
    // 0x1501A35C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1501A8C0(rdram, ctx);
        goto after_4;
    // 0x1501A35C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
L_1501A360:
    // 0x1501A360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1501A364: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501A368: sb          $v0, -0x19E9($at)
    MEM_B(-0X19E9, ctx->r1) = ctx->r2;
    // 0x1501A36C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501A370: sb          $v0, -0x19EC($at)
    MEM_B(-0X19EC, ctx->r1) = ctx->r2;
    // 0x1501A374: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501A378: sb          $zero, -0x19CB($at)
    MEM_B(-0X19CB, ctx->r1) = 0;
    // 0x1501A37C: jal         0x1510B070
    // 0x1501A380: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_1510B070(rdram, ctx);
        goto after_5;
    // 0x1501A380: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x1501A384: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1501A388: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x1501A38C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x1501A390: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1501A394: jr          $ra
    // 0x1501A398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    return;
    // 0x1501A398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_15071830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15071834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1507183C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15071840: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15071844: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15071848: jal         0x150F9BB0
    // 0x1507184C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150F9BB0(rdram, ctx);
        goto after_0;
    // 0x1507184C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15071850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15071854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15071858: jr          $ra
    // 0x1507185C: nop

    return;
    return;
    // 0x1507185C: nop

;}
RECOMP_FUNC void func_151B9408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B9408: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x151B940C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x151B9410: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151B9414: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151B9418: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151B941C: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x151B9420: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x151B9424: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x151B9428: lw          $a3, 0x170($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X170);
    // 0x151B942C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151B9430: jal         0x150A8050
    // 0x151B9434: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    func_150A8050(rdram, ctx);
        goto after_0;
    // 0x151B9434: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    after_0:
    // 0x151B9438: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x151B943C: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x151B9440: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151B9444: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x151B9448: addiu       $t6, $sp, 0x94
    ctx->r14 = ADD32(ctx->r29, 0X94);
    // 0x151B944C: addiu       $t7, $sp, 0x98
    ctx->r15 = ADD32(ctx->r29, 0X98);
    // 0x151B9450: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x151B9454: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x151B9458: addiu       $t8, $sp, 0x9C
    ctx->r24 = ADD32(ctx->r29, 0X9C);
    // 0x151B945C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x151B9460: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x151B9464: lwc1        $f8, 0x40($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X40);
    // 0x151B9468: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x151B946C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x151B9470: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x151B9474: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B9478: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x151B947C: lui         $a2, 0xC316
    ctx->r6 = S32(0XC316 << 16);
    // 0x151B9480: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151B9484: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x151B9488: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B948C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x151B9490: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151B9494: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x151B9498: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B949C: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x151B94A0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151B94A4: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x151B94A8: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151B94AC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x151B94B0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B94B4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x151B94B8: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151B94BC: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x151B94C0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151B94C4: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x151B94C8: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151B94CC: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x151B94D0: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151B94D4: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x151B94D8: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B94DC: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x151B94E0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x151B94E4: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x151B94E8: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B94EC: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x151B94F0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B94F4: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x151B94F8: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151B94FC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x151B9500: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x151B9504: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x151B9508: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151B950C: jal         0x150A7960
    // 0x151B9510: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    func_150A7960(rdram, ctx);
        goto after_1;
    // 0x151B9510: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x151B9514: lwc1        $f8, 0x94($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X94);
    // 0x151B9518: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x151B951C: lw          $v0, 0xA0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA0);
    // 0x151B9520: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B9524: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x151B9528: lui         $at, 0x4282
    ctx->r1 = S32(0X4282 << 16);
    // 0x151B952C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x151B9530: nop

    // 0x151B9534: sh          $t0, 0xE($t1)
    MEM_H(0XE, ctx->r9) = ctx->r8;
    // 0x151B9538: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151B953C: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x151B9540: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x151B9544: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x151B9548: nop

    // 0x151B954C: sh          $t3, 0x10($t4)
    MEM_H(0X10, ctx->r12) = ctx->r11;
    // 0x151B9550: lwc1        $f8, 0x9C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151B9554: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x151B9558: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x151B955C: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x151B9560: nop

    // 0x151B9564: sh          $t6, 0x12($t7)
    MEM_H(0X12, ctx->r15) = ctx->r14;
    // 0x151B9568: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x151B956C: beql        $v1, $zero, L_151B964C
    if (ctx->r3 == 0) {
        // 0x151B9570: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151B964C;
    }
    goto skip_0;
    // 0x151B9570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x151B9574: lwc1        $f4, 0x1C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151B9578: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151B957C: lwc1        $f12, 0x38($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X38);
    // 0x151B9580: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151B9584: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151B9588: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x151B958C: lwc1        $f10, -0x5A98($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5A98);
    // 0x151B9590: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x151B9594: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x151B9598: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x151B959C: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x151B95A0: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x151B95A4: lwc1        $f4, 0x3C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x151B95A8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151B95AC: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B95B0: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x151B95B4: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x151B95B8: mul.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151B95BC: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151B95C0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x151B95C4: mul.s       $f16, $f8, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151B95C8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x151B95CC: mul.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x151B95D0: nop

    // 0x151B95D4: mul.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x151B95D8: add.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x151B95DC: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151B95E0: swc1        $f4, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->f4.u32l;
    // 0x151B95E4: lwc1        $f6, 0x3C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x151B95E8: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x151B95EC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151B95F0: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151B95F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x151B95F8: swc1        $f10, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->f10.u32l;
    // 0x151B95FC: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x151B9600: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x151B9604: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151B9608: mul.s       $f4, $f14, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x151B960C: swc1        $f8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f8.u32l;
    // 0x151B9610: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x151B9614: lwc1        $f10, 0x34($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X34);
    // 0x151B9618: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x151B961C: mul.s       $f10, $f16, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x151B9620: swc1        $f6, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->f6.u32l;
    // 0x151B9624: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x151B9628: lwc1        $f8, 0x38($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X38);
    // 0x151B962C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x151B9630: mul.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151B9634: swc1        $f4, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->f4.u32l;
    // 0x151B9638: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x151B963C: lwc1        $f6, 0x3C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X3C);
    // 0x151B9640: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151B9644: swc1        $f10, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->f10.u32l;
    // 0x151B9648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151B964C:
    // 0x151B964C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151B9650: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x151B9654: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x151B9658: jr          $ra
    // 0x151B965C: nop

    return;
    return;
    // 0x151B965C: nop

;}
RECOMP_FUNC void func_1513C350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1513C350: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1513C354: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x1513C358: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x1513C35C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1513C360: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1513C364: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x1513C368: andi        $s2, $a2, 0xFF
    ctx->r18 = ctx->r6 & 0XFF;
    // 0x1513C36C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1513C370: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x1513C374: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x1513C378: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1513C37C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1513C380: bne         $s1, $zero, L_1513C390
    if (ctx->r17 != 0) {
        // 0x1513C384: lw          $a1, 0x60($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X60);
            goto L_1513C390;
    }
    // 0x1513C384: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x1513C388: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x1513C38C: addiu       $s1, $s1, 0x4AA0
    ctx->r17 = ADD32(ctx->r17, 0X4AA0);
L_1513C390:
    // 0x1513C390: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x1513C394: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x1513C398: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1513C39C: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x1513C3A0: bgez        $t7, L_1513C3B0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1513C3A4: addiu       $a2, $a2, 0xB0
        ctx->r6 = ADD32(ctx->r6, 0XB0);
            goto L_1513C3B0;
    }
    // 0x1513C3A4: addiu       $a2, $a2, 0xB0
    ctx->r6 = ADD32(ctx->r6, 0XB0);
    // 0x1513C3A8: b           L_1513C3B4
    // 0x1513C3AC: addiu       $v0, $zero, 0x4A
    ctx->r2 = ADD32(0, 0X4A);
        goto L_1513C3B4;
    // 0x1513C3AC: addiu       $v0, $zero, 0x4A
    ctx->r2 = ADD32(0, 0X4A);
L_1513C3B0:
    // 0x1513C3B0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_1513C3B4:
    // 0x1513C3B4: lbu         $t8, 0x5F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X5F);
    // 0x1513C3B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1513C3BC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x1513C3C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x1513C3C4: jal         0x15167A68
    // 0x1513C3C8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15167A68(rdram, ctx);
        goto after_0;
    // 0x1513C3C8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x1513C3CC: bne         $v0, $zero, L_1513C3DC
    if (ctx->r2 != 0) {
        // 0x1513C3D0: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_1513C3DC;
    }
    // 0x1513C3D0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x1513C3D4: b           L_1513C4CC
    // 0x1513C3D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1513C4CC;
    // 0x1513C3D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_1513C3DC:
    // 0x1513C3DC: addiu       $a0, $s4, 0x18
    ctx->r4 = ADD32(ctx->r20, 0X18);
    // 0x1513C3E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x1513C3E4: jal         0x10022EC0
    // 0x1513C3E8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1513C3E8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_1:
    // 0x1513C3EC: addiu       $s0, $s4, 0x40
    ctx->r16 = ADD32(ctx->r20, 0X40);
    // 0x1513C3F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513C3F4: lbu         $a1, 0x1E($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X1E);
    // 0x1513C3F8: jal         0x1513FFF4
    // 0x1513C3FC: lbu         $a2, 0x4B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X4B);
    func_1513FFF4(rdram, ctx);
        goto after_2;
    // 0x1513C3FC: lbu         $a2, 0x4B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X4B);
    after_2:
    // 0x1513C400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1513C404: jal         0x151400D0
    // 0x1513C408: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_151400D0(rdram, ctx);
        goto after_3;
    // 0x1513C408: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x1513C40C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x1513C410: sb          $s2, 0x80($s4)
    MEM_B(0X80, ctx->r20) = ctx->r18;
    // 0x1513C414: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x1513C418: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x1513C41C: sw          $t1, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r9;
    // 0x1513C420: sw          $zero, 0x14($s4)
    MEM_W(0X14, ctx->r20) = 0;
    // 0x1513C424: sw          $s3, 0x84($s4)
    MEM_W(0X84, ctx->r20) = ctx->r19;
    // 0x1513C428: sb          $t0, 0x81($s4)
    MEM_B(0X81, ctx->r20) = ctx->r8;
    // 0x1513C42C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x1513C430: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1513C434: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x1513C438: sw          $t2, 0xA0($s4)
    MEM_W(0XA0, ctx->r20) = ctx->r10;
L_1513C43C:
    // 0x1513C43C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1513C440: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x1513C444: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1513C448: bne         $at, $zero, L_1513C43C
    if (ctx->r1 != 0) {
        // 0x1513C44C: sw          $zero, 0x88($s0)
        MEM_W(0X88, ctx->r16) = 0;
            goto L_1513C43C;
    }
    // 0x1513C44C: sw          $zero, 0x88($s0)
    MEM_W(0X88, ctx->r16) = 0;
    // 0x1513C450: beq         $s3, $zero, L_1513C4A4
    if (ctx->r19 == 0) {
        // 0x1513C454: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_1513C4A4;
    }
    // 0x1513C454: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    // 0x1513C458: lui         $s2, 0x8008
    ctx->r18 = S32(0X8008 << 16);
    // 0x1513C45C: addiu       $s2, $s2, 0x2FA0
    ctx->r18 = ADD32(ctx->r18, 0X2FA0);
    // 0x1513C460: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x1513C464: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1513C468: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x1513C46C: bltz        $t3, L_1513C498
    if (SIGNED(ctx->r11) < 0) {
        // 0x1513C470: nop
    
            goto L_1513C498;
    }
    // 0x1513C470: nop

L_1513C474:
    // 0x1513C474: jal         0x1515D480
    // 0x1513C478: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_1515D480(rdram, ctx);
        goto after_4;
    // 0x1513C478: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x1513C47C: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x1513C480: lw          $t4, 0x0($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X0);
    // 0x1513C484: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x1513C488: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x1513C48C: slt         $at, $t4, $s1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x1513C490: beq         $at, $zero, L_1513C474
    if (ctx->r1 == 0) {
        // 0x1513C494: nop
    
            goto L_1513C474;
    }
    // 0x1513C494: nop

L_1513C498:
    // 0x1513C498: jal         0x1515D440
    // 0x1513C49C: nop

    func_1515D440(rdram, ctx);
        goto after_5;
    // 0x1513C49C: nop

    after_5:
    // 0x1513C4A0: sw          $v0, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = ctx->r2;
L_1513C4A4:
    // 0x1513C4A4: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x1513C4A8: beql        $v0, $zero, L_1513C4CC
    if (ctx->r2 == 0) {
        // 0x1513C4AC: or          $v0, $s4, $zero
        ctx->r2 = ctx->r20 | 0;
            goto L_1513C4CC;
    }
    goto skip_0;
    // 0x1513C4AC: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    skip_0:
    // 0x1513C4B0: lw          $at, 0x0($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X0);
    // 0x1513C4B4: sw          $at, 0xA4($s4)
    MEM_W(0XA4, ctx->r20) = ctx->r1;
    // 0x1513C4B8: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x1513C4BC: sw          $t6, 0xA8($s4)
    MEM_W(0XA8, ctx->r20) = ctx->r14;
    // 0x1513C4C0: lw          $at, 0x8($v0)
    ctx->r1 = MEM_W(ctx->r2, 0X8);
    // 0x1513C4C4: sw          $at, 0xAC($s4)
    MEM_W(0XAC, ctx->r20) = ctx->r1;
    // 0x1513C4C8: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_1513C4CC:
    // 0x1513C4CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1513C4D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1513C4D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x1513C4D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x1513C4DC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x1513C4E0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x1513C4E4: jr          $ra
    // 0x1513C4E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x1513C4E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_151C577C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C577C: addiu       $sp, $sp, -0x198
    ctx->r29 = ADD32(ctx->r29, -0X198);
    // 0x151C5780: sw          $s2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r18;
    // 0x151C5784: sw          $s1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r17;
    // 0x151C5788: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x151C578C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151C5790: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x151C5794: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x151C5798: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x151C579C: sw          $s5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r21;
    // 0x151C57A0: sw          $s4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r20;
    // 0x151C57A4: sw          $s3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r19;
    // 0x151C57A8: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x151C57AC: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x151C57B0: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x151C57B4: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x151C57B8: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x151C57BC: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x151C57C0: sw          $a3, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r7;
    // 0x151C57C4: addiu       $t6, $sp, 0x15C
    ctx->r14 = ADD32(ctx->r29, 0X15C);
    // 0x151C57C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x151C57CC: addiu       $a0, $sp, 0x18C
    ctx->r4 = ADD32(ctx->r29, 0X18C);
    // 0x151C57D0: addiu       $a1, $sp, 0x180
    ctx->r5 = ADD32(ctx->r29, 0X180);
    // 0x151C57D4: addiu       $a2, $sp, 0x174
    ctx->r6 = ADD32(ctx->r29, 0X174);
    // 0x151C57D8: addiu       $a3, $sp, 0x168
    ctx->r7 = ADD32(ctx->r29, 0X168);
    // 0x151C57DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x151C57E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x151C57E4: jal         0x15137C64
    // 0x151C57E8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    func_15137C64(rdram, ctx);
        goto after_0;
    // 0x151C57E8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_0:
    // 0x151C57EC: beql        $v0, $zero, L_151C5E3C
    if (ctx->r2 == 0) {
        // 0x151C57F0: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_151C5E3C;
    }
    goto skip_0;
    // 0x151C57F0: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_0:
    // 0x151C57F4: jal         0x150ADA68
    // 0x151C57F8: nop

    func_150ADA68(rdram, ctx);
        goto after_1;
    // 0x151C57F8: nop

    after_1:
    // 0x151C57FC: jal         0x150ADA20
    // 0x151C5800: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x151C5800: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_2:
    // 0x151C5804: jal         0x150ADA20
    // 0x151C5808: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_3;
    // 0x151C5808: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_3:
    // 0x151C580C: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x151C5810: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151C5814: lui         $at, 0x4328
    ctx->r1 = S32(0X4328 << 16);
    // 0x151C5818: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x151C581C: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x151C5820: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x151C5824: mul.s       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f4.fl);
    // 0x151C5828: mfhi        $a2
    ctx->r6 = hi;
    // 0x151C582C: andi        $a3, $v0, 0x7
    ctx->r7 = ctx->r2 & 0X7;
    // 0x151C5830: lbu         $s4, 0x1B3($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X1B3);
    // 0x151C5834: lw          $s5, 0x1B4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1B4);
    // 0x151C5838: addiu       $a3, $a3, 0xF
    ctx->r7 = ADD32(ctx->r7, 0XF);
    // 0x151C583C: addiu       $a2, $a2, 0x9B
    ctx->r6 = ADD32(ctx->r6, 0X9B);
    // 0x151C5840: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C5844: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x151C5848: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x151C584C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151C5850: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x151C5854: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151C5858: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x151C585C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x151C5860: addiu       $a0, $sp, 0x18C
    ctx->r4 = ADD32(ctx->r29, 0X18C);
    // 0x151C5864: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x151C5868: jal         0x151DC034
    // 0x151C586C: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    func_151DC034(rdram, ctx);
        goto after_4;
    // 0x151C586C: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    after_4:
    // 0x151C5870: lbu         $t1, 0x1AB($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1AB);
    // 0x151C5874: beql        $t1, $zero, L_151C5A50
    if (ctx->r9 == 0) {
        // 0x151C5878: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_151C5A50;
    }
    goto skip_1;
    // 0x151C5878: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x151C587C: jal         0x150ADA20
    // 0x151C5880: nop

    func_150ADA20(rdram, ctx);
        goto after_5;
    // 0x151C5880: nop

    after_5:
    // 0x151C5884: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151C5888: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C588C: mfhi        $v1
    ctx->r3 = hi;
    // 0x151C5890: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x151C5894: sll         $s2, $v1, 16
    ctx->r18 = S32(ctx->r3 << 16);
    // 0x151C5898: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x151C589C: sra         $t2, $s2, 16
    ctx->r10 = S32(SIGNED(ctx->r18) >> 16);
    // 0x151C58A0: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x151C58A4: beq         $t4, $zero, L_151C5A4C
    if (ctx->r12 == 0) {
        // 0x151C58A8: or          $s2, $t2, $zero
        ctx->r18 = ctx->r10 | 0;
            goto L_151C5A4C;
    }
    // 0x151C58A8: or          $s2, $t2, $zero
    ctx->r18 = ctx->r10 | 0;
    // 0x151C58AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C58B0: lwc1        $f30, -0x5534($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X5534);
    // 0x151C58B4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x151C58B8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x151C58BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151C58C0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x151C58C4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151C58C8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x151C58CC: addiu       $s3, $zero, 0x9C
    ctx->r19 = ADD32(0, 0X9C);
L_151C58D0:
    // 0x151C58D0: jal         0x150ADA68
    // 0x151C58D4: nop

    func_150ADA68(rdram, ctx);
        goto after_6;
    // 0x151C58D4: nop

    after_6:
    // 0x151C58D8: lui         $at, 0x4204
    ctx->r1 = S32(0X4204 << 16);
    // 0x151C58DC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151C58E0: nop

    // 0x151C58E4: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x151C58E8: add.s       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f28.fl;
    // 0x151C58EC: mul.s       $f20, $f4, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x151C58F0: jal         0x150ADA20
    // 0x151C58F4: nop

    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x151C58F4: nop

    after_7:
    // 0x151C58F8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x151C58FC: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x151C5900: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x151C5904: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    // 0x151C5908: addiu       $a2, $sp, 0x150
    ctx->r6 = ADD32(ctx->r29, 0X150);
    // 0x151C590C: jal         0x15143874
    // 0x151C5910: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    func_15143874(rdram, ctx);
        goto after_8;
    // 0x151C5910: addiu       $a3, $sp, 0x154
    ctx->r7 = ADD32(ctx->r29, 0X154);
    after_8:
    // 0x151C5914: lwc1        $f0, 0x150($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X150);
    // 0x151C5918: lwc1        $f6, 0x168($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X168);
    // 0x151C591C: lwc1        $f2, 0x154($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X154);
    // 0x151C5920: lwc1        $f10, 0x15C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x151C5924: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x151C5928: lwc1        $f4, 0x16C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X16C);
    // 0x151C592C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151C5930: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x151C5934: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x151C5938: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x151C593C: mul.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151C5940: lwc1        $f10, 0x164($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X164);
    // 0x151C5944: swc1        $f18, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f18.u32l;
    // 0x151C5948: lwc1        $f18, 0x170($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X170);
    // 0x151C594C: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x151C5950: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x151C5954: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151C5958: swc1        $f16, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f16.u32l;
    // 0x151C595C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151C5960: jal         0x150ADA68
    // 0x151C5964: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x151C5964: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x151C5968: jal         0x150ADA20
    // 0x151C596C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_10;
    // 0x151C596C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_10:
    // 0x151C5970: jal         0x150ADA20
    // 0x151C5974: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_11;
    // 0x151C5974: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_11:
    // 0x151C5978: jal         0x150ADA68
    // 0x151C597C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_12;
    // 0x151C597C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_12:
    // 0x151C5980: jal         0x150ADA20
    // 0x151C5984: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_13;
    // 0x151C5984: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    after_13:
    // 0x151C5988: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C598C: lwc1        $f16, -0x5530($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5530);
    // 0x151C5990: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C5994: lwc1        $f10, -0x552C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X552C);
    // 0x151C5998: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x151C599C: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x151C59A0: mfhi        $a3
    ctx->r7 = hi;
    // 0x151C59A4: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x151C59A8: addiu       $a3, $a3, 0x12
    ctx->r7 = ADD32(ctx->r7, 0X12);
    // 0x151C59AC: divu        $zero, $s1, $s3
    lo = S32(U32(ctx->r17) / U32(ctx->r19)); hi = S32(U32(ctx->r17) % U32(ctx->r19));
    // 0x151C59B0: mul.s       $f6, $f22, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x151C59B4: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x151C59B8: mfhi        $t9
    ctx->r25 = hi;
    // 0x151C59BC: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x151C59C0: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x151C59C4: addiu       $t0, $t9, 0x64
    ctx->r8 = ADD32(ctx->r25, 0X64);
    // 0x151C59C8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x151C59CC: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x151C59D0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x151C59D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x151C59D8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151C59DC: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x151C59E0: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x151C59E4: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x151C59E8: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x151C59EC: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x151C59F0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x151C59F4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x151C59F8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x151C59FC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151C5A00: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x151C5A04: addiu       $a0, $sp, 0x18C
    ctx->r4 = ADD32(ctx->r29, 0X18C);
    // 0x151C5A08: addiu       $a1, $sp, 0x144
    ctx->r5 = ADD32(ctx->r29, 0X144);
    // 0x151C5A0C: bne         $s3, $zero, L_151C5A18
    if (ctx->r19 != 0) {
        // 0x151C5A10: nop
    
            goto L_151C5A18;
    }
    // 0x151C5A10: nop

    // 0x151C5A14: break       7
    do_break(354179604);
L_151C5A18:
    // 0x151C5A18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C5A1C: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x151C5A20: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x151C5A24: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x151C5A28: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x151C5A2C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x151C5A30: jal         0x151DA6F8
    // 0x151C5A34: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    func_151DA6F8(rdram, ctx);
        goto after_14;
    // 0x151C5A34: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    after_14:
    // 0x151C5A38: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x151C5A3C: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x151C5A40: sra         $s2, $t6, 16
    ctx->r18 = S32(SIGNED(ctx->r14) >> 16);
    // 0x151C5A44: bne         $s2, $zero, L_151C58D0
    if (ctx->r18 != 0) {
        // 0x151C5A48: nop
    
            goto L_151C58D0;
    }
    // 0x151C5A48: nop

L_151C5A4C:
    // 0x151C5A4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_151C5A50:
    // 0x151C5A50: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x151C5A54: lbu         $t8, 0x1A7($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1A7);
    // 0x151C5A58: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x151C5A5C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x151C5A60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C5A64: lwc1        $f30, -0x5524($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X5524);
    // 0x151C5A68: beq         $t8, $zero, L_151C5BA8
    if (ctx->r24 == 0) {
        // 0x151C5A6C: addiu       $s3, $zero, 0x9C
        ctx->r19 = ADD32(0, 0X9C);
            goto L_151C5BA8;
    }
    // 0x151C5A6C: addiu       $s3, $zero, 0x9C
    ctx->r19 = ADD32(0, 0X9C);
    // 0x151C5A70: jal         0x150ADA20
    // 0x151C5A74: nop

    func_150ADA20(rdram, ctx);
        goto after_15;
    // 0x151C5A74: nop

    after_15:
    // 0x151C5A78: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x151C5A7C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C5A80: mfhi        $v1
    ctx->r3 = hi;
    // 0x151C5A84: addiu       $s2, $v1, 0x5
    ctx->r18 = ADD32(ctx->r3, 0X5);
    // 0x151C5A88: beq         $s2, $zero, L_151C5BA8
    if (ctx->r18 == 0) {
        // 0x151C5A8C: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_151C5BA8;
    }
    // 0x151C5A8C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x151C5A90: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x151C5A94: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x151C5A98: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x151C5A9C: nop

L_151C5AA0:
    // 0x151C5AA0: jal         0x150ADA68
    // 0x151C5AA4: nop

    func_150ADA68(rdram, ctx);
        goto after_16;
    // 0x151C5AA4: nop

    after_16:
    // 0x151C5AA8: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x151C5AAC: lwc1        $f10, 0x174($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X174);
    // 0x151C5AB0: lwc1        $f6, 0x178($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X178);
    // 0x151C5AB4: add.s       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f24.fl;
    // 0x151C5AB8: lwc1        $f16, 0x17C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X17C);
    // 0x151C5ABC: mul.s       $f2, $f18, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = MUL_S(ctx->f18.fl, ctx->f30.fl);
    // 0x151C5AC0: nop

    // 0x151C5AC4: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x151C5AC8: nop

    // 0x151C5ACC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x151C5AD0: nop

    // 0x151C5AD4: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x151C5AD8: swc1        $f4, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f4.u32l;
    // 0x151C5ADC: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    // 0x151C5AE0: jal         0x150ADA68
    // 0x151C5AE4: swc1        $f18, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f18.u32l;
    func_150ADA68(rdram, ctx);
        goto after_17;
    // 0x151C5AE4: swc1        $f18, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x151C5AE8: jal         0x150ADA20
    // 0x151C5AEC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_150ADA20(rdram, ctx);
        goto after_18;
    // 0x151C5AEC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_18:
    // 0x151C5AF0: jal         0x150ADA20
    // 0x151C5AF4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_19;
    // 0x151C5AF4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_19:
    // 0x151C5AF8: jal         0x150ADA68
    // 0x151C5AFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_20;
    // 0x151C5AFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_20:
    // 0x151C5B00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C5B04: lwc1        $f10, -0x5520($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5520);
    // 0x151C5B08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C5B0C: lwc1        $f6, -0x551C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X551C);
    // 0x151C5B10: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x151C5B14: divu        $zero, $s1, $at
    lo = S32(U32(ctx->r17) / U32(ctx->r1)); hi = S32(U32(ctx->r17) % U32(ctx->r1));
    // 0x151C5B18: mfhi        $t9
    ctx->r25 = hi;
    // 0x151C5B1C: mul.s       $f4, $f20, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x151C5B20: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x151C5B24: divu        $zero, $s0, $s3
    lo = S32(U32(ctx->r16) / U32(ctx->r19)); hi = S32(U32(ctx->r16) % U32(ctx->r19));
    // 0x151C5B28: mul.s       $f16, $f0, $f28
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x151C5B2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x151C5B30: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151C5B34: mfhi        $t1
    ctx->r9 = hi;
    // 0x151C5B38: addiu       $t2, $t1, 0x64
    ctx->r10 = ADD32(ctx->r9, 0X64);
    // 0x151C5B3C: addiu       $t0, $t9, 0x5
    ctx->r8 = ADD32(ctx->r25, 0X5);
    // 0x151C5B40: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x151C5B44: add.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x151C5B48: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x151C5B4C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x151C5B50: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x151C5B54: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x151C5B58: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x151C5B5C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x151C5B60: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x151C5B64: addiu       $a0, $sp, 0x180
    ctx->r4 = ADD32(ctx->r29, 0X180);
    // 0x151C5B68: addiu       $a1, $sp, 0x130
    ctx->r5 = ADD32(ctx->r29, 0X130);
    // 0x151C5B6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x151C5B70: bne         $s3, $zero, L_151C5B7C
    if (ctx->r19 != 0) {
        // 0x151C5B74: nop
    
            goto L_151C5B7C;
    }
    // 0x151C5B74: nop

    // 0x151C5B78: break       7
    do_break(354179960);
L_151C5B7C:
    // 0x151C5B7C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x151C5B80: swc1        $f26, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f26.u32l;
    // 0x151C5B84: swc1        $f26, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f26.u32l;
    // 0x151C5B88: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x151C5B8C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x151C5B90: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x151C5B94: jal         0x151D9014
    // 0x151C5B98: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    func_151D9014(rdram, ctx);
        goto after_21;
    // 0x151C5B98: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    after_21:
    // 0x151C5B9C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x151C5BA0: bne         $s2, $zero, L_151C5AA0
    if (ctx->r18 != 0) {
        // 0x151C5BA4: nop
    
            goto L_151C5AA0;
    }
    // 0x151C5BA4: nop

L_151C5BA8:
    // 0x151C5BA8: lbu         $t5, 0x1AF($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X1AF);
    // 0x151C5BAC: beql        $t5, $zero, L_151C5E3C
    if (ctx->r13 == 0) {
        // 0x151C5BB0: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_151C5E3C;
    }
    goto skip_2;
    // 0x151C5BB0: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_2:
    // 0x151C5BB4: jal         0x150ADA20
    // 0x151C5BB8: nop

    func_150ADA20(rdram, ctx);
        goto after_22;
    // 0x151C5BB8: nop

    after_22:
    // 0x151C5BBC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x151C5BC0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C5BC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C5BC8: addiu       $t6, $zero, 0x6C
    ctx->r14 = ADD32(0, 0X6C);
    // 0x151C5BCC: lui         $t8, 0x20
    ctx->r24 = S32(0X20 << 16);
    // 0x151C5BD0: lui         $t1, 0x80
    ctx->r9 = S32(0X80 << 16);
    // 0x151C5BD4: lwc1        $f4, -0x5518($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5518);
    // 0x151C5BD8: sb          $t6, 0xD9($sp)
    MEM_B(0XD9, ctx->r29) = ctx->r14;
    // 0x151C5BDC: addiu       $t7, $zero, 0x5103
    ctx->r15 = ADD32(0, 0X5103);
    // 0x151C5BE0: ori         $t8, $t8, 0x5
    ctx->r24 = ctx->r24 | 0X5;
    // 0x151C5BE4: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x151C5BE8: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x151C5BEC: ori         $t1, $t1, 0xD207
    ctx->r9 = ctx->r9 | 0XD207;
    // 0x151C5BF0: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x151C5BF4: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x151C5BF8: addiu       $t4, $zero, 0x10
    ctx->r12 = ADD32(0, 0X10);
    // 0x151C5BFC: sh          $t7, 0xC4($sp)
    MEM_H(0XC4, ctx->r29) = ctx->r15;
    // 0x151C5C00: sw          $t8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r24;
    // 0x151C5C04: sh          $t9, 0xDA($sp)
    MEM_H(0XDA, ctx->r29) = ctx->r25;
    // 0x151C5C08: sh          $t0, 0xDC($sp)
    MEM_H(0XDC, ctx->r29) = ctx->r8;
    // 0x151C5C0C: sw          $t1, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r9;
    // 0x151C5C10: sb          $t2, 0x11C($sp)
    MEM_B(0X11C, ctx->r29) = ctx->r10;
    // 0x151C5C14: sb          $t3, 0x11D($sp)
    MEM_B(0X11D, ctx->r29) = ctx->r11;
    // 0x151C5C18: sb          $t4, 0x11E($sp)
    MEM_B(0X11E, ctx->r29) = ctx->r12;
    // 0x151C5C1C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x151C5C20: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x151C5C24: sb          $t6, 0x120($sp)
    MEM_B(0X120, ctx->r29) = ctx->r14;
    // 0x151C5C28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x151C5C2C: addiu       $t8, $zero, 0xE2
    ctx->r24 = ADD32(0, 0XE2);
    // 0x151C5C30: addiu       $t9, $zero, 0xB2
    ctx->r25 = ADD32(0, 0XB2);
    // 0x151C5C34: addiu       $t0, $zero, 0x60
    ctx->r8 = ADD32(0, 0X60);
    // 0x151C5C38: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x151C5C3C: addiu       $t2, $zero, 0x39
    ctx->r10 = ADD32(0, 0X39);
    // 0x151C5C40: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x151C5C44: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x151C5C48: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
    // 0x151C5C4C: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x151C5C50: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x151C5C54: sb          $t5, 0x11F($sp)
    MEM_B(0X11F, ctx->r29) = ctx->r13;
    // 0x151C5C58: sb          $zero, 0x121($sp)
    MEM_B(0X121, ctx->r29) = 0;
    // 0x151C5C5C: sh          $t7, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r15;
    // 0x151C5C60: swc1        $f26, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f26.u32l;
    // 0x151C5C64: sb          $t8, 0xD0($sp)
    MEM_B(0XD0, ctx->r29) = ctx->r24;
    // 0x151C5C68: sb          $t9, 0xD1($sp)
    MEM_B(0XD1, ctx->r29) = ctx->r25;
    // 0x151C5C6C: sb          $t0, 0xD2($sp)
    MEM_B(0XD2, ctx->r29) = ctx->r8;
    // 0x151C5C70: sb          $t1, 0xD3($sp)
    MEM_B(0XD3, ctx->r29) = ctx->r9;
    // 0x151C5C74: sb          $t2, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r10;
    // 0x151C5C78: sb          $t3, 0xD5($sp)
    MEM_B(0XD5, ctx->r29) = ctx->r11;
    // 0x151C5C7C: sb          $zero, 0xD6($sp)
    MEM_B(0XD6, ctx->r29) = 0;
    // 0x151C5C80: sb          $t4, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r12;
    // 0x151C5C84: addiu       $t6, $sp, 0x180
    ctx->r14 = ADD32(ctx->r29, 0X180);
    // 0x151C5C88: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x151C5C8C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x151C5C90: addiu       $t5, $sp, 0xEC
    ctx->r13 = ADD32(ctx->r29, 0XEC);
    // 0x151C5C94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151C5C98: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x151C5C9C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x151C5CA0: mfhi        $v1
    ctx->r3 = hi;
    // 0x151C5CA4: addiu       $s2, $v1, 0x3
    ctx->r18 = ADD32(ctx->r3, 0X3);
    // 0x151C5CA8: sw          $t9, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r25;
    // 0x151C5CAC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x151C5CB0: sw          $at, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r1;
    // 0x151C5CB4: swc1        $f0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f0.u32l;
    // 0x151C5CB8: swc1        $f0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f0.u32l;
    // 0x151C5CBC: blez        $s2, L_151C5E38
    if (SIGNED(ctx->r18) <= 0) {
        // 0x151C5CC0: swc1        $f0, 0x100($sp)
        MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
            goto L_151C5E38;
    }
    // 0x151C5CC0: swc1        $f0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f0.u32l;
    // 0x151C5CC4: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x151C5CC8: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x151C5CCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x151C5CD0: lwc1        $f28, -0x5514($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X5514);
    // 0x151C5CD4: lui         $at, 0xC345
    ctx->r1 = S32(0XC345 << 16);
    // 0x151C5CD8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x151C5CDC: lui         $at, 0x42EA
    ctx->r1 = S32(0X42EA << 16);
    // 0x151C5CE0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x151C5CE4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x151C5CE8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x151C5CEC: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x151C5CF0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x151C5CF4: addiu       $s3, $sp, 0x104
    ctx->r19 = ADD32(ctx->r29, 0X104);
L_151C5CF8:
    // 0x151C5CF8: jal         0x150ADA20
    // 0x151C5CFC: nop

    func_150ADA20(rdram, ctx);
        goto after_23;
    // 0x151C5CFC: nop

    after_23:
    // 0x151C5D00: jal         0x150ADA20
    // 0x151C5D04: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    func_150ADA20(rdram, ctx);
        goto after_24;
    // 0x151C5D04: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_24:
    // 0x151C5D08: jal         0x150ADA68
    // 0x151C5D0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_150ADA68(rdram, ctx);
        goto after_25;
    // 0x151C5D0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_25:
    // 0x151C5D10: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x151C5D14: andi        $a1, $s0, 0x3F
    ctx->r5 = ctx->r16 & 0X3F;
    // 0x151C5D18: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x151C5D1C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x151C5D20: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x151C5D24: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x151C5D28: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x151C5D2C: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x151C5D30: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x151C5D34: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x151C5D38: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x151C5D3C: jal         0x15143794
    // 0x151C5D40: nop

    func_15143794(rdram, ctx);
        goto after_26;
    // 0x151C5D40: nop

    after_26:
    // 0x151C5D44: jal         0x150ADA68
    // 0x151C5D48: nop

    func_150ADA68(rdram, ctx);
        goto after_27;
    // 0x151C5D48: nop

    after_27:
    // 0x151C5D4C: mul.s       $f16, $f0, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x151C5D50: lw          $t4, 0x114($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X114);
    // 0x151C5D54: addiu       $at, $zero, -0xC1
    ctx->r1 = ADD32(0, -0XC1);
    // 0x151C5D58: and         $t8, $t4, $at
    ctx->r24 = ctx->r12 & ctx->r1;
    // 0x151C5D5C: sw          $t8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r24;
    // 0x151C5D60: add.s       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f26.fl;
    // 0x151C5D64: mul.s       $f10, $f18, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x151C5D68: jal         0x150ADA20
    // 0x151C5D6C: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_28;
    // 0x151C5D6C: swc1        $f10, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f10.u32l;
    after_28:
    // 0x151C5D70: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x151C5D74: beq         $t7, $zero, L_151C5D84
    if (ctx->r15 == 0) {
        // 0x151C5D78: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_151C5D84;
    }
    // 0x151C5D78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x151C5D7C: b           L_151C5D84
    // 0x151C5D80: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
        goto L_151C5D84;
    // 0x151C5D80: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
L_151C5D84:
    // 0x151C5D84: jal         0x150ADA20
    // 0x151C5D88: nop

    func_150ADA20(rdram, ctx);
        goto after_29;
    // 0x151C5D88: nop

    after_29:
    // 0x151C5D8C: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x151C5D90: beq         $t5, $zero, L_151C5DA0
    if (ctx->r13 == 0) {
        // 0x151C5D94: lw          $t6, 0x114($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X114);
            goto L_151C5DA0;
    }
    // 0x151C5D94: lw          $t6, 0x114($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X114);
    // 0x151C5D98: b           L_151C5DA4
    // 0x151C5D9C: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
        goto L_151C5DA4;
    // 0x151C5D9C: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
L_151C5DA0:
    // 0x151C5DA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_151C5DA4:
    // 0x151C5DA4: or          $t9, $s0, $s1
    ctx->r25 = ctx->r16 | ctx->r17;
    // 0x151C5DA8: or          $t0, $t6, $t9
    ctx->r8 = ctx->r14 | ctx->r25;
    // 0x151C5DAC: jal         0x150ADA20
    // 0x151C5DB0: sw          $t0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r8;
    func_150ADA20(rdram, ctx);
        goto after_30;
    // 0x151C5DB0: sw          $t0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r8;
    after_30:
    // 0x151C5DB4: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x151C5DB8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C5DBC: mfhi        $t1
    ctx->r9 = hi;
    // 0x151C5DC0: addiu       $t2, $t1, 0xBE
    ctx->r10 = ADD32(ctx->r9, 0XBE);
    // 0x151C5DC4: jal         0x150ADA20
    // 0x151C5DC8: sb          $t2, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r10;
    func_150ADA20(rdram, ctx);
        goto after_31;
    // 0x151C5DC8: sb          $t2, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r10;
    after_31:
    // 0x151C5DCC: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x151C5DD0: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151C5DD4: mfhi        $t3
    ctx->r11 = hi;
    // 0x151C5DD8: addiu       $t4, $t3, 0x2C
    ctx->r12 = ADD32(ctx->r11, 0X2C);
    // 0x151C5DDC: jal         0x150ADA68
    // 0x151C5DE0: sh          $t4, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r12;
    func_150ADA68(rdram, ctx);
        goto after_32;
    // 0x151C5DE0: sh          $t4, 0xC6($sp)
    MEM_H(0XC6, ctx->r29) = ctx->r12;
    after_32:
    // 0x151C5DE4: mul.s       $f4, $f0, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x151C5DE8: lui         $at, 0x429A
    ctx->r1 = S32(0X429A << 16);
    // 0x151C5DEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151C5DF0: addiu       $a0, $sp, 0xBC
    ctx->r4 = ADD32(ctx->r29, 0XBC);
    // 0x151C5DF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x151C5DF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x151C5DFC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x151C5E00: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151C5E04: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x151C5E08: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x151C5E0C: swc1        $f2, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f2.u32l;
    // 0x151C5E10: jal         0x15130280
    // 0x151C5E14: swc1        $f2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f2.u32l;
    func_15130280(rdram, ctx);
        goto after_33;
    // 0x151C5E14: swc1        $f2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f2.u32l;
    after_33:
    // 0x151C5E18: beq         $v0, $zero, L_151C5E2C
    if (ctx->r2 == 0) {
        // 0x151C5E1C: addiu       $a0, $v0, 0xA8
        ctx->r4 = ADD32(ctx->r2, 0XA8);
            goto L_151C5E2C;
    }
    // 0x151C5E1C: addiu       $a0, $v0, 0xA8
    ctx->r4 = ADD32(ctx->r2, 0XA8);
    // 0x151C5E20: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x151C5E24: jal         0x10022EC0
    // 0x151C5E28: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_34;
    // 0x151C5E28: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_34:
L_151C5E2C:
    // 0x151C5E2C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x151C5E30: bne         $s2, $zero, L_151C5CF8
    if (ctx->r18 != 0) {
        // 0x151C5E34: nop
    
            goto L_151C5CF8;
    }
    // 0x151C5E34: nop

L_151C5E38:
    // 0x151C5E38: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_151C5E3C:
    // 0x151C5E3C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x151C5E40: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x151C5E44: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x151C5E48: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x151C5E4C: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x151C5E50: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x151C5E54: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
    // 0x151C5E58: lw          $s1, 0x80($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X80);
    // 0x151C5E5C: lw          $s2, 0x84($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X84);
    // 0x151C5E60: lw          $s3, 0x88($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X88);
    // 0x151C5E64: lw          $s4, 0x8C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X8C);
    // 0x151C5E68: lw          $s5, 0x90($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X90);
    // 0x151C5E6C: jr          $ra
    // 0x151C5E70: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
    return;
    return;
    // 0x151C5E70: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
;}
RECOMP_FUNC void func_150B0C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B0C34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150B0C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150B0C3C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150B0C40: jal         0x150B0C58
    // 0x150B0C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150B0C58(rdram, ctx);
        goto after_0;
    // 0x150B0C44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150B0C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150B0C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150B0C50: jr          $ra
    // 0x150B0C54: nop

    return;
    return;
    // 0x150B0C54: nop

;}
RECOMP_FUNC void func_150C7968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C7968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150C796C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150C7970: jal         0x15116110
    // 0x150C7974: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_15116110(rdram, ctx);
        goto after_0;
    // 0x150C7974: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x150C7978: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x150C797C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x150C7980: lbu         $t6, 0x73($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X73);
    // 0x150C7984: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x150C7988: bnel        $t7, $zero, L_150C79B0
    if (ctx->r15 != 0) {
        // 0x150C798C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_150C79B0;
    }
    goto skip_0;
    // 0x150C798C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150C7990: lw          $v0, -0x410C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X410C);
    // 0x150C7994: lw          $v1, 0x7C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X7C);
    // 0x150C7998: lh          $a1, 0x21C($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X21C);
    // 0x150C799C: addiu       $v0, $v0, 0x1E0
    ctx->r2 = ADD32(ctx->r2, 0X1E0);
    // 0x150C79A0: beq         $v1, $zero, L_150C79AC
    if (ctx->r3 == 0) {
        // 0x150C79A4: sra         $t8, $a1, 4
        ctx->r24 = S32(SIGNED(ctx->r5) >> 4);
            goto L_150C79AC;
    }
    // 0x150C79A4: sra         $t8, $a1, 4
    ctx->r24 = S32(SIGNED(ctx->r5) >> 4);
    // 0x150C79A8: sb          $t8, 0x13($v1)
    MEM_B(0X13, ctx->r3) = ctx->r24;
L_150C79AC:
    // 0x150C79AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150C79B0:
    // 0x150C79B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150C79B4: jr          $ra
    // 0x150C79B8: nop

    return;
    return;
    // 0x150C79B8: nop

;}
RECOMP_FUNC void func_150C8600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C8600: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x150C8604: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x150C8608: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x150C860C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x150C8610: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
    // 0x150C8614: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150C8618: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x150C861C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x150C8620: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x150C8624: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x150C8628: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x150C862C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x150C8630: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x150C8634: addiu       $t6, $t6, -0x77F0
    ctx->r14 = ADD32(ctx->r14, -0X77F0);
    // 0x150C8638: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x150C863C: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x150C8640: addiu       $s4, $s4, -0x1B20
    ctx->r20 = ADD32(ctx->r20, -0X1B20);
    // 0x150C8644: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x150C8648: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x150C864C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x150C8650: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    // 0x150C8654: addiu       $s7, $zero, 0x2C
    ctx->r23 = ADD32(0, 0X2C);
    // 0x150C8658: lui         $s6, 0xDB06
    ctx->r22 = S32(0XDB06 << 16);
    // 0x150C865C: addiu       $s5, $sp, 0x58
    ctx->r21 = ADD32(ctx->r29, 0X58);
    // 0x150C8660: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
L_150C8664:
    // 0x150C8664: lw          $t0, 0x0($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X0);
    // 0x150C8668: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x150C866C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x150C8670: addu        $a0, $t0, $s0
    ctx->r4 = ADD32(ctx->r8, ctx->r16);
    // 0x150C8674: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x150C8678: sra         $t1, $v0, 8
    ctx->r9 = S32(SIGNED(ctx->r2) >> 8);
    // 0x150C867C: bgez        $t1, L_150C868C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x150C8680: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_150C868C;
    }
    // 0x150C8680: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x150C8684: b           L_150C869C
    // 0x150C8688: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150C869C;
    // 0x150C8688: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150C868C:
    // 0x150C868C: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x150C8690: bnel        $at, $zero, L_150C86A0
    if (ctx->r1 != 0) {
        // 0x150C8694: lbu         $v1, 0x0($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X0);
            goto L_150C86A0;
    }
    goto skip_0;
    // 0x150C8694: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    skip_0:
    // 0x150C8698: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_150C869C:
    // 0x150C869C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
L_150C86A0:
    // 0x150C86A0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x150C86A4: bnel        $at, $zero, L_150C86C0
    if (ctx->r1 != 0) {
        // 0x150C86A8: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_150C86C0;
    }
    goto skip_1;
    // 0x150C86A8: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    skip_1:
    // 0x150C86AC: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x150C86B0: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x150C86B4: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x150C86B8: lbu         $v1, 0x0($t3)
    ctx->r3 = MEM_BU(ctx->r11, 0X0);
    // 0x150C86BC: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
L_150C86C0:
    // 0x150C86C0: addu        $t5, $s3, $t4
    ctx->r13 = ADD32(ctx->r19, ctx->r12);
    // 0x150C86C4: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x150C86C8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x150C86CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150C86D0: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x150C86D4: jal         0x1510D0EC
    // 0x150C86D8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_1510D0EC(rdram, ctx);
        goto after_0;
    // 0x150C86D8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x150C86DC: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x150C86E0: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x150C86E4: or          $t0, $t9, $s6
    ctx->r8 = ctx->r25 | ctx->r22;
    // 0x150C86E8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x150C86EC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x150C86F0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x150C86F4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x150C86F8: bne         $s1, $s7, L_150C8664
    if (ctx->r17 != ctx->r23) {
        // 0x150C86FC: addiu       $s0, $s0, 0xA
        ctx->r16 = ADD32(ctx->r16, 0XA);
            goto L_150C8664;
    }
    // 0x150C86FC: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x150C8700: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x150C8704: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150C8708: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x150C870C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x150C8710: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x150C8714: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x150C8718: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x150C871C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x150C8720: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x150C8724: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x150C8728: jr          $ra
    // 0x150C872C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    return;
    // 0x150C872C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_15086098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15086098: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x1508609C: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x150860A0: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x150860A4: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x150860A8: mtc1        $a2, $f30
    ctx->f30.u32l = ctx->r6;
    // 0x150860AC: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x150860B0: mov.s       $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    ctx->f28.fl = ctx->f12.fl;
    // 0x150860B4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x150860B8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x150860BC: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x150860C0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x150860C4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x150860C8: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x150860CC: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x150860D0: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x150860D4: jal         0x15085DA8
    // 0x150860D8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_15085DA8(rdram, ctx);
        goto after_0;
    // 0x150860D8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x150860DC: mfc1        $a2, $f30
    ctx->r6 = (int32_t)ctx->f30.u32l;
    // 0x150860E0: mov.s       $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    ctx->f12.fl = ctx->f28.fl;
    // 0x150860E4: mov.s       $f14, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    ctx->f14.fl = ctx->f20.fl;
    // 0x150860E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150860EC: jal         0x15085DF8
    // 0x150860F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_15085DF8(rdram, ctx);
        goto after_1;
    // 0x150860F0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x150860F4: lb          $t7, 0x7F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X7F);
    // 0x150860F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x150860FC: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15086100: blezl       $t7, L_1508632C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x15086104: lw          $v1, 0x60($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X60);
            goto L_1508632C;
    }
    goto skip_0;
    // 0x15086104: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    skip_0:
    // 0x15086108: beql        $v0, $t3, L_1508632C
    if (ctx->r2 == ctx->r11) {
        // 0x1508610C: lw          $v1, 0x60($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X60);
            goto L_1508632C;
    }
    goto skip_1;
    // 0x1508610C: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x15086110: jal         0x15086C70
    // 0x15086114: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_15086C70(rdram, ctx);
        goto after_2;
    // 0x15086114: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x15086118: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1508611C: beq         $v0, $zero, L_15086170
    if (ctx->r2 == 0) {
        // 0x15086120: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_15086170;
    }
    // 0x15086120: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x15086124: trunc.w.s   $f4, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    ctx->f4.u32l = TRUNC_W_S(ctx->f28.fl);
    // 0x15086128: trunc.w.s   $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    ctx->f6.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x1508612C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x15086130: trunc.w.s   $f8, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    ctx->f8.u32l = TRUNC_W_S(ctx->f30.fl);
    // 0x15086134: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15086138: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x1508613C: jal         0x150A32B4
    // 0x15086140: nop

    func_150A32B4(rdram, ctx);
        goto after_3;
    // 0x15086140: nop

    after_3:
    // 0x15086144: beq         $v0, $zero, L_15086170
    if (ctx->r2 == 0) {
        // 0x15086148: addiu       $t3, $zero, 0xFF
        ctx->r11 = ADD32(0, 0XFF);
            goto L_15086170;
    }
    // 0x15086148: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x1508614C: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x15086150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x15086154: lb          $a1, 0x7F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X7F);
    // 0x15086158: lb          $a2, 0x83($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X83);
    // 0x1508615C: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x15086160: jal         0x15086364
    // 0x15086164: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_15086364(rdram, ctx);
        goto after_4;
    // 0x15086164: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_4:
    // 0x15086168: b           L_15086328
    // 0x1508616C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
        goto L_15086328;
    // 0x1508616C: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_15086170:
    // 0x15086170: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15086174: lw          $t1, 0x2350($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2350);
    // 0x15086178: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x1508617C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15086180: addu        $t0, $t6, $t1
    ctx->r8 = ADD32(ctx->r14, ctx->r9);
    // 0x15086184: lbu         $t7, 0x8($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X8);
    // 0x15086188: lwc1        $f12, -0x2630($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X2630);
    // 0x1508618C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15086190: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15086194: or          $t2, $t3, $zero
    ctx->r10 = ctx->r11 | 0;
    // 0x15086198: bgez        $t7, L_150861AC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x1508619C: cvt.s.w     $f2, $f10
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
            goto L_150861AC;
    }
    // 0x1508619C: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x150861A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150861A4: nop

    // 0x150861A8: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
L_150861AC:
    // 0x150861AC: add.s       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x150861B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150861B4: lb          $a1, 0x7F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X7F);
    // 0x150861B8: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x150861BC: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x150861C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x150861C4: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x150861C8: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x150861CC: nop

    // 0x150861D0: bc1fl       L_150861F4
    if (!c1cs) {
        // 0x150861D4: mov.s       $f26, $f12
        CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
            goto L_150861F4;
    }
    goto skip_2;
    // 0x150861D4: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
    skip_2:
    // 0x150861D8: lb          $a2, 0x83($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X83);
    // 0x150861DC: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x150861E0: jal         0x15086364
    // 0x150861E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15086364(rdram, ctx);
        goto after_5;
    // 0x150861E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_5:
    // 0x150861E8: b           L_15086328
    // 0x150861EC: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
        goto L_15086328;
    // 0x150861EC: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x150861F0: mov.s       $f26, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 12);
    ctx->f26.fl = ctx->f12.fl;
L_150861F4:
    // 0x150861F4: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x150861F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x150861FC: beq         $a1, $t3, L_150862E8
    if (ctx->r5 == ctx->r11) {
        // 0x15086200: sll         $t9, $a1, 4
        ctx->r25 = S32(ctx->r5 << 4);
            goto L_150862E8;
    }
    // 0x15086200: sll         $t9, $a1, 4
    ctx->r25 = S32(ctx->r5 << 4);
    // 0x15086204: addu        $v0, $t1, $t9
    ctx->r2 = ADD32(ctx->r9, ctx->r25);
    // 0x15086208: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x1508620C: lh          $v1, 0x0($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X0);
    // 0x15086210: lh          $t6, 0x4($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X4);
    // 0x15086214: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x15086218: subu        $t5, $t4, $v1
    ctx->r13 = SUB32(ctx->r12, ctx->r3);
    // 0x1508621C: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x15086220: subu        $t7, $t6, $a0
    ctx->r15 = SUB32(ctx->r14, ctx->r4);
    // 0x15086224: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x15086228: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x1508622C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15086230: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x15086234: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15086238: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x1508623C: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x15086240: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x15086244: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x15086248: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x1508624C: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x15086250: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15086254: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15086258: div.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1508625C: mul.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x15086260: nop

    // 0x15086264: mul.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x15086268: nop

    // 0x1508626C: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x15086270: nop

    // 0x15086274: mul.s       $f8, $f20, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x15086278: nop

    // 0x1508627C: mul.s       $f10, $f28, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x15086280: nop

    // 0x15086284: mul.s       $f4, $f30, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f30.fl, ctx->f12.fl);
    // 0x15086288: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x1508628C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15086290: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
    // 0x15086294: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x15086298: add.s       $f24, $f6, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x1508629C: c.lt.s      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.fl < ctx->f24.fl;
    // 0x150862A0: nop

    // 0x150862A4: bc1f        L_150862E8
    if (!c1cs) {
        // 0x150862A8: nop
    
            goto L_150862E8;
    }
    // 0x150862A8: nop

    // 0x150862AC: mul.s       $f10, $f2, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x150862B0: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x150862B4: mul.s       $f6, $f12, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x150862B8: sub.s       $f2, $f28, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f28.fl - ctx->f4.fl;
    // 0x150862BC: add.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x150862C0: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150862C4: sub.s       $f12, $f30, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f30.fl - ctx->f8.fl;
    // 0x150862C8: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x150862CC: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x150862D0: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x150862D4: nop

    // 0x150862D8: bc1fl       L_150862EC
    if (!c1cs) {
        // 0x150862DC: slti        $at, $a2, 0x5
        ctx->r1 = SIGNED(ctx->r6) < 0X5 ? 1 : 0;
            goto L_150862EC;
    }
    goto skip_3;
    // 0x150862DC: slti        $at, $a2, 0x5
    ctx->r1 = SIGNED(ctx->r6) < 0X5 ? 1 : 0;
    skip_3:
    // 0x150862E0: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x150862E4: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
L_150862E8:
    // 0x150862E8: slti        $at, $a2, 0x5
    ctx->r1 = SIGNED(ctx->r6) < 0X5 ? 1 : 0;
L_150862EC:
    // 0x150862EC: bne         $at, $zero, L_150861F4
    if (ctx->r1 != 0) {
        // 0x150862F0: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_150861F4;
    }
    // 0x150862F0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x150862F4: beq         $t2, $t3, L_15086328
    if (ctx->r10 == ctx->r11) {
        // 0x150862F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_15086328;
    }
    // 0x150862F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150862FC: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x15086300: lb          $a1, 0x7F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X7F);
    // 0x15086304: lb          $a2, 0x83($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X83);
    // 0x15086308: lw          $a3, 0x84($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X84);
    // 0x1508630C: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x15086310: jal         0x15086364
    // 0x15086314: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_15086364(rdram, ctx);
        goto after_6;
    // 0x15086314: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_6:
    // 0x15086318: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x1508631C: bnel        $v0, $t2, L_1508632C
    if (ctx->r2 != ctx->r10) {
        // 0x15086320: lw          $v1, 0x60($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X60);
            goto L_1508632C;
    }
    goto skip_4;
    // 0x15086320: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    skip_4:
    // 0x15086324: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
L_15086328:
    // 0x15086328: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
L_1508632C:
    // 0x1508632C: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x15086330: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x15086334: beq         $v1, $t3, L_15086340
    if (ctx->r3 == ctx->r11) {
        // 0x15086338: ldc1        $f22, 0x28($sp)
        CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
            goto L_15086340;
    }
    // 0x15086338: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x1508633C: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
L_15086340:
    // 0x15086340: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x15086344: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x15086348: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x1508634C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x15086350: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x15086354: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x15086358: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x1508635C: jr          $ra
    // 0x15086360: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    return;
    // 0x15086360: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_1501D1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501D1D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x1501D1D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1501D1DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x1501D1E0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x1501D1E4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x1501D1E8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x1501D1EC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x1501D1F0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x1501D1F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1501D1F8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x1501D1FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1501D200: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x1501D204: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x1501D208: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x1501D20C: jal         0x1502B6BC
    // 0x1501D210: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_1502B6BC(rdram, ctx);
        goto after_0;
    // 0x1501D210: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x1501D214: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x1501D218: beq         $v0, $zero, L_1501D234
    if (ctx->r2 == 0) {
        // 0x1501D21C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_1501D234;
    }
    // 0x1501D21C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x1501D220: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x1501D224: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D228: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x1501D22C: b           L_1501D244
    // 0x1501D230: sw          $v0, 0x3668($at)
    MEM_W(0X3668, ctx->r1) = ctx->r2;
        goto L_1501D244;
    // 0x1501D230: sw          $v0, 0x3668($at)
    MEM_W(0X3668, ctx->r1) = ctx->r2;
L_1501D234:
    // 0x1501D234: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x1501D238: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1501D23C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x1501D240: sw          $zero, 0x3668($at)
    MEM_W(0X3668, ctx->r1) = 0;
L_1501D244:
    // 0x1501D244: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1501D248: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1501D24C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x1501D250: jr          $ra
    // 0x1501D254: nop

    return;
    return;
    // 0x1501D254: nop

;}
RECOMP_FUNC void func_1514306C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514306C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15143070: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x15143074: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x15143078: addiu       $t7, $a3, -0x1
    ctx->r15 = ADD32(ctx->r7, -0X1);
    // 0x1514307C: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x15143080: beq         $at, $zero, L_15143108
    if (ctx->r1 == 0) {
        // 0x15143084: sll         $t1, $a1, 2
        ctx->r9 = S32(ctx->r5 << 2);
            goto L_15143108;
    }
    // 0x15143084: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x15143088: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x1514308C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15143090: addu        $at, $at, $t7
    gpr jr_addend_15143098 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x15143094: lw          $t7, 0x562C($at)
    ctx->r15 = ADD32(ctx->r1, 0X562C);
    // 0x15143098: jr          $t7
    // 0x1514309C: nop

    switch (jr_addend_15143098 >> 2) {
        case 0: goto L_151430B8; break;
        case 1: goto L_151430C0; break;
        case 2: goto L_151430AC; break;
        case 3: goto L_151430A0; break;
        case 4: goto L_151430D4; break;
        case 5: goto L_151430DC; break;
        default: switch_error(__func__, 0x15143098, 0x800A562C);
    }
    // 0x1514309C: nop

L_151430A0:
    // 0x151430A0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151430A4: b           L_15143128
    // 0x151430A8: lw          $v1, 0x15B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X15B0);
        goto L_15143128;
    // 0x151430A8: lw          $v1, 0x15B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X15B0);
L_151430AC:
    // 0x151430AC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151430B0: b           L_15143128
    // 0x151430B4: lw          $v1, 0x1514($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1514);
        goto L_15143128;
    // 0x151430B4: lw          $v1, 0x1514($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1514);
L_151430B8:
    // 0x151430B8: b           L_15143128
    // 0x151430BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_15143128;
    // 0x151430BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_151430C0:
    // 0x151430C0: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x151430C4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x151430C8: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x151430CC: b           L_15143128
    // 0x151430D0: lw          $v1, 0x1564($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1564);
        goto L_15143128;
    // 0x151430D0: lw          $v1, 0x1564($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1564);
L_151430D4:
    // 0x151430D4: b           L_15143128
    // 0x151430D8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_15143128;
    // 0x151430D8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_151430DC:
    // 0x151430DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x151430E0: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x151430E4: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x151430E8: sltu        $at, $v0, $at
    ctx->r1 = ctx->r2 < ctx->r1 ? 1 : 0;
    // 0x151430EC: bne         $at, $zero, L_15143100
    if (ctx->r1 != 0) {
        // 0x151430F0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_15143100;
    }
    // 0x151430F0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x151430F4: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x151430F8: b           L_15143128
    // 0x151430FC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
        goto L_15143128;
    // 0x151430FC: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
L_15143100:
    // 0x15143100: b           L_15143128
    // 0x15143104: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_15143128;
    // 0x15143104: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_15143108:
    // 0x15143108: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x1514310C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x15143110: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x15143114: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x15143118: lw          $t2, 0xB60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0XB60);
    // 0x1514311C: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x15143120: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x15143124: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
L_15143128:
    // 0x15143128: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1514312C: jr          $ra
    // 0x15143130: nop

    return;
    return;
    // 0x15143130: nop

;}
RECOMP_FUNC void func_150F3214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150F3214: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150F3218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150F321C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x150F3220: lw          $v1, 0x110($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X110);
    // 0x150F3224: addiu       $v0, $a3, 0x110
    ctx->r2 = ADD32(ctx->r7, 0X110);
    // 0x150F3228: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x150F322C: beq         $t6, $zero, L_150F3258
    if (ctx->r14 == 0) {
        // 0x150F3230: nop
    
            goto L_150F3258;
    }
    // 0x150F3230: nop

    // 0x150F3234: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x150F3238: lbu         $t8, 0x3B($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X3B);
    // 0x150F323C: bne         $t7, $t8, L_150F3258
    if (ctx->r15 != ctx->r24) {
        // 0x150F3240: nop
    
            goto L_150F3258;
    }
    // 0x150F3240: nop

    // 0x150F3244: lw          $t0, 0x1D4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X1D4);
    // 0x150F3248: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x150F324C: addiu       $a0, $a0, 0x1950
    ctx->r4 = ADD32(ctx->r4, 0X1950);
    // 0x150F3250: bne         $t0, $zero, L_150F3260
    if (ctx->r8 != 0) {
        // 0x150F3254: addiu       $a1, $a3, 0x34
        ctx->r5 = ADD32(ctx->r7, 0X34);
            goto L_150F3260;
    }
    // 0x150F3254: addiu       $a1, $a3, 0x34
    ctx->r5 = ADD32(ctx->r7, 0X34);
L_150F3258:
    // 0x150F3258: b           L_150F336C
    // 0x150F325C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F336C;
    // 0x150F325C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F3260:
    // 0x150F3260: addiu       $a2, $t0, 0x3C0
    ctx->r6 = ADD32(ctx->r8, 0X3C0);
    // 0x150F3264: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x150F3268: jal         0x15143134
    // 0x150F326C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    func_15143134(rdram, ctx);
        goto after_0;
    // 0x150F326C: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x150F3270: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x150F3274: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x150F3278: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150F327C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150F3280: lwc1        $f4, 0x10($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X10);
    // 0x150F3284: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x150F3288: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x150F328C: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x150F3290: swc1        $f2, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f2.u32l;
    // 0x150F3294: swc1        $f2, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f2.u32l;
    // 0x150F3298: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x150F329C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150F32A0: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x150F32A4: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x150F32A8: nop

    // 0x150F32AC: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x150F32B0: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x150F32B4: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x150F32B8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x150F32BC: nop

    // 0x150F32C0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x150F32C4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x150F32C8: nop

    // 0x150F32CC: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x150F32D0: beq         $t1, $zero, L_150F331C
    if (ctx->r9 == 0) {
        // 0x150F32D4: nop
    
            goto L_150F331C;
    }
    // 0x150F32D4: nop

    // 0x150F32D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150F32DC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x150F32E0: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150F32E4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x150F32E8: nop

    // 0x150F32EC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x150F32F0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x150F32F4: nop

    // 0x150F32F8: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x150F32FC: bne         $t1, $zero, L_150F3314
    if (ctx->r9 != 0) {
        // 0x150F3300: nop
    
            goto L_150F3314;
    }
    // 0x150F3300: nop

    // 0x150F3304: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150F3308: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x150F330C: b           L_150F332C
    // 0x150F3310: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_150F332C;
    // 0x150F3310: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_150F3314:
    // 0x150F3314: b           L_150F332C
    // 0x150F3318: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_150F332C;
    // 0x150F3318: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_150F331C:
    // 0x150F331C: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150F3320: nop

    // 0x150F3324: bltz        $t1, L_150F3314
    if (SIGNED(ctx->r9) < 0) {
        // 0x150F3328: nop
    
            goto L_150F3314;
    }
    // 0x150F3328: nop

L_150F332C:
    // 0x150F332C: sb          $t1, 0x5C($a3)
    MEM_B(0X5C, ctx->r7) = ctx->r9;
    // 0x150F3330: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x150F3334: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x150F3338: lwc1        $f10, -0x165C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x150F333C: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150F3340: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x150F3344: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150F3348: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x150F334C: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x150F3350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x150F3354: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x150F3358: nop

    // 0x150F335C: bc1f        L_150F336C
    if (!c1cs) {
        // 0x150F3360: nop
    
            goto L_150F336C;
    }
    // 0x150F3360: nop

    // 0x150F3364: b           L_150F336C
    // 0x150F3368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_150F336C;
    // 0x150F3368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150F336C:
    // 0x150F336C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150F3370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150F3374: jr          $ra
    // 0x150F3378: nop

    return;
    return;
    // 0x150F3378: nop

;}
RECOMP_FUNC void func_150337E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150337E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x150337E8: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150337EC: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x150337F0: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x150337F4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x150337F8: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x150337FC: bne         $at, $zero, L_15033814
    if (ctx->r1 != 0) {
        // 0x15033800: sw          $t8, 0x38($a0)
        MEM_W(0X38, ctx->r4) = ctx->r24;
            goto L_15033814;
    }
    // 0x15033800: sw          $t8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r24;
    // 0x15033804: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x15033808: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x1503380C: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x15033810: sw          $t1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r9;
L_15033814:
    // 0x15033814: lw          $t2, 0x3C($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X3C);
    // 0x15033818: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x1503381C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15033820: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15033824: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x15033828: lw          $t4, 0x2FC($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2FC);
    // 0x1503382C: sh          $t4, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r12;
    // 0x15033830: jr          $ra
    // 0x15033834: nop

    return;
    return;
    // 0x15033834: nop

;}
RECOMP_FUNC void func_150A2FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150A2FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150A2FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150A2FAC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x150A2FB0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150A2FB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A2FB8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x150A2FBC: lw          $t9, 0x3094($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3094);
    // 0x150A2FC0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x150A2FC4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x150A2FC8: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x150A2FCC: lw          $t7, -0x4010($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4010);
    // 0x150A2FD0: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x150A2FD4: andi        $t8, $a1, 0xFFF
    ctx->r24 = ctx->r5 & 0XFFF;
    // 0x150A2FD8: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x150A2FDC: sltu        $at, $t9, $t8
    ctx->r1 = ctx->r25 < ctx->r24 ? 1 : 0;
    // 0x150A2FE0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x150A2FE4: beq         $at, $zero, L_150A2FF4
    if (ctx->r1 == 0) {
        // 0x150A2FE8: addu        $v0, $t6, $t7
        ctx->r2 = ADD32(ctx->r14, ctx->r15);
            goto L_150A2FF4;
    }
    // 0x150A2FE8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x150A2FEC: b           L_150A3048
    // 0x150A2FF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_150A3048;
    // 0x150A2FF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150A2FF4:
    // 0x150A2FF4: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x150A2FF8: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x150A2FFC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x150A3000: lw          $v1, 0x3098($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3098);
    // 0x150A3004: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150A3008: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x150A300C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x150A3010: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x150A3014: lbu         $t2, 0x15($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X15);
    // 0x150A3018: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150A301C: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    // 0x150A3020: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x150A3024: bnel        $t3, $at, L_150A3048
    if (ctx->r11 != ctx->r1) {
        // 0x150A3028: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_150A3048;
    }
    goto skip_0;
    // 0x150A3028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x150A302C: lw          $a1, 0x2F8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X2F8);
    // 0x150A3030: lw          $a2, 0x2FC($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X2FC);
    // 0x150A3034: jal         0x150A2E4C
    // 0x150A3038: lw          $a3, 0x300($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X300);
    func_150A2E4C(rdram, ctx);
        goto after_0;
    // 0x150A3038: lw          $a3, 0x300($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X300);
    after_0:
    // 0x150A303C: b           L_150A304C
    // 0x150A3040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_150A304C;
    // 0x150A3040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150A3044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_150A3048:
    // 0x150A3048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_150A304C:
    // 0x150A304C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150A3050: jr          $ra
    // 0x150A3054: nop

    return;
    return;
    // 0x150A3054: nop

;}
RECOMP_FUNC void func_1506E77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506E77C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1506E780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1506E784: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506E788: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x1506E78C: addiu       $a1, $a1, 0x1580
    ctx->r5 = ADD32(ctx->r5, 0X1580);
    // 0x1506E790: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506E794: jal         0x1506E46C
    // 0x1506E798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1506E46C(rdram, ctx);
        goto after_0;
    // 0x1506E798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x1506E79C: beq         $v0, $zero, L_1506E7AC
    if (ctx->r2 == 0) {
        // 0x1506E7A0: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_1506E7AC;
    }
    // 0x1506E7A0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x1506E7A4: jal         0x1506BBA8
    // 0x1506E7A8: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    func_1506BBA8(rdram, ctx);
        goto after_1;
    // 0x1506E7A8: addiu       $a1, $zero, 0x708
    ctx->r5 = ADD32(0, 0X708);
    after_1:
L_1506E7AC:
    // 0x1506E7AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1506E7B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1506E7B4: jr          $ra
    // 0x1506E7B8: nop

    return;
    return;
    // 0x1506E7B8: nop

;}
RECOMP_FUNC void func_15190770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15190770: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x15190774: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x15190778: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1519077C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x15190780: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x15190784: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x15190788: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x1519078C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x15190790: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x15190794: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x15190798: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x1519079C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x151907A0: lbu         $t8, 0x3B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X3B);
    // 0x151907A4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x151907A8: jal         0x15191B8C
    // 0x151907AC: sb          $t8, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r24;
    func_15191B8C(rdram, ctx);
        goto after_0;
    // 0x151907AC: sb          $t8, 0x30($sp)
    MEM_B(0X30, ctx->r29) = ctx->r24;
    after_0:
    // 0x151907B0: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x151907B4: lbu         $t9, 0x43($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X43);
    // 0x151907B8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x151907BC: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x151907C0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x151907C4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x151907C8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x151907CC: addiu       $a2, $a2, 0x300
    ctx->r6 = ADD32(ctx->r6, 0X300);
    // 0x151907D0: jal         0x15167A68
    // 0x151907D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_15167A68(rdram, ctx);
        goto after_1;
    // 0x151907D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_1:
    // 0x151907D8: bne         $v0, $zero, L_151907E8
    if (ctx->r2 != 0) {
        // 0x151907DC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151907E8;
    }
    // 0x151907DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x151907E0: b           L_1519082C
    // 0x151907E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_1519082C;
    // 0x151907E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151907E8:
    // 0x151907E8: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    // 0x151907EC: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x151907F0: jal         0x10022EC0
    // 0x151907F4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151907F4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_2:
    // 0x151907F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151907FC: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x15190800: addiu       $t1, $s0, 0x300
    ctx->r9 = ADD32(ctx->r16, 0X300);
    // 0x15190804: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x15190808: sw          $t1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r9;
    // 0x1519080C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x15190810: addiu       $a1, $zero, 0x2D0
    ctx->r5 = ADD32(0, 0X2D0);
    // 0x15190814: jal         0x100226F0
    // 0x15190818: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x15190818: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x1519081C: jal         0x151D8E20
    // 0x15190820: nop

    func_151D8E20(rdram, ctx);
        goto after_4;
    // 0x15190820: nop

    after_4:
    // 0x15190824: sb          $v0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r2;
    // 0x15190828: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_1519082C:
    // 0x1519082C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15190830: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x15190834: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x15190838: jr          $ra
    // 0x1519083C: nop

    return;
    return;
    // 0x1519083C: nop

;}
RECOMP_FUNC void func_15071D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15071D08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15071D0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15071D10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x15071D14: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15071D18: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15071D1C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x15071D20: jal         0x150F2230
    // 0x15071D24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_150F2230(rdram, ctx);
        goto after_0;
    // 0x15071D24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x15071D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15071D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15071D30: jr          $ra
    // 0x15071D34: nop

    return;
    return;
    // 0x15071D34: nop

;}
RECOMP_FUNC void func_1519021C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519021C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x15190220: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x15190224: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
    // 0x15190228: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x1519022C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x15190230: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x15190234: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x15190238: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x1519023C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x15190240: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x15190244: slti        $at, $a2, 0x18
    ctx->r1 = SIGNED(ctx->r6) < 0X18 ? 1 : 0;
    // 0x15190248: bne         $at, $zero, L_15190258
    if (ctx->r1 != 0) {
        // 0x1519024C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_15190258;
    }
    // 0x1519024C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x15190250: b           L_151903BC
    // 0x15190254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151903BC;
    // 0x15190254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_15190258:
    // 0x15190258: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x1519025C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15190260: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x15190264: lwc1        $f4, 0x67C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X67C0);
    // 0x15190268: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1519026C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x15190270: lwc1        $f6, 0x6760($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6760);
    // 0x15190274: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15190278: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x1519027C: lwc1        $f8, 0x6820($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6820);
    // 0x15190280: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15190284: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15190288: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1519028C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15190290: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15190294: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x15190298: lwc1        $f18, -0x7FFC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X7FFC);
    // 0x1519029C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x151902A0: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x151902A4: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x151902A8: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x151902AC: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x151902B0: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x151902B4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x151902B8: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x151902BC: bne         $a3, $v1, L_151902CC
    if (ctx->r7 != ctx->r3) {
        // 0x151902C0: swc1        $f18, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
            goto L_151902CC;
    }
    // 0x151902C0: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x151902C4: b           L_151902D0
    // 0x151902C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151902D0;
    // 0x151902C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151902CC:
    // 0x151902CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151902D0:
    // 0x151902D0: ori         $t9, $v0, 0x2
    ctx->r25 = ctx->r2 | 0X2;
    // 0x151902D4: addiu       $t0, $zero, 0x12
    ctx->r8 = ADD32(0, 0X12);
    // 0x151902D8: sb          $t9, 0x84($sp)
    MEM_B(0X84, ctx->r29) = ctx->r25;
    // 0x151902DC: bne         $a3, $v1, L_151902F0
    if (ctx->r7 != ctx->r3) {
        // 0x151902E0: sb          $t0, 0x85($sp)
        MEM_B(0X85, ctx->r29) = ctx->r8;
            goto L_151902F0;
    }
    // 0x151902E0: sb          $t0, 0x85($sp)
    MEM_B(0X85, ctx->r29) = ctx->r8;
    // 0x151902E4: addiu       $t1, $zero, 0x12C
    ctx->r9 = ADD32(0, 0X12C);
    // 0x151902E8: b           L_151902F4
    // 0x151902EC: sh          $t1, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r9;
        goto L_151902F4;
    // 0x151902EC: sh          $t1, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r9;
L_151902F0:
    // 0x151902F0: sh          $a3, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r7;
L_151902F4:
    // 0x151902F4: addiu       $t2, $zero, 0x25
    ctx->r10 = ADD32(0, 0X25);
    // 0x151902F8: sb          $t2, 0x88($sp)
    MEM_B(0X88, ctx->r29) = ctx->r10;
    // 0x151902FC: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x15190300: lbu         $t3, 0x3B($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X3B);
    // 0x15190304: lw          $t4, 0xA4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA4);
    // 0x15190308: addiu       $t2, $zero, 0x30
    ctx->r10 = ADD32(0, 0X30);
    // 0x1519030C: sb          $t3, 0x80($sp)
    MEM_B(0X80, ctx->r29) = ctx->r11;
    // 0x15190310: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15190314: lbu         $t3, 0xA3($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XA3);
    // 0x15190318: addiu       $t0, $zero, 0xD1
    ctx->r8 = ADD32(0, 0XD1);
    // 0x1519031C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15190320: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15190324: addiu       $a0, $sp, 0x84
    ctx->r4 = ADD32(ctx->r29, 0X84);
    // 0x15190328: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x1519032C: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x15190330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15190334: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x15190338: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x1519033C: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15190340: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x15190344: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x15190348: nop

    // 0x1519034C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x15190350: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x15190354: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x15190358: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519035C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x15190360: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x15190364: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15190368: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1519036C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x15190370: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x15190374: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x15190378: jal         0x151602C0
    // 0x1519037C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    func_151602C0(rdram, ctx);
        goto after_0;
    // 0x1519037C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    after_0:
    // 0x15190380: beq         $v0, $zero, L_151903B8
    if (ctx->r2 == 0) {
        // 0x15190384: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_151903B8;
    }
    // 0x15190384: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x15190388: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x1519038C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x15190390: jal         0x10022EC0
    // 0x15190394: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x15190394: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x15190398: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x1519039C: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x151903A0: jal         0x10022EC0
    // 0x151903A4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x151903A4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x151903A8: addiu       $a0, $s0, 0x40
    ctx->r4 = ADD32(ctx->r16, 0X40);
    // 0x151903AC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x151903B0: jal         0x10022EC0
    // 0x151903B4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151903B4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
L_151903B8:
    // 0x151903B8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_151903BC:
    // 0x151903BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x151903C0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x151903C4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x151903C8: jr          $ra
    // 0x151903CC: nop

    return;
    return;
    // 0x151903CC: nop

;}
RECOMP_FUNC void func_1501C870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1501C870: jr          $ra
    // 0x1501C874: nop

    return;
    return;
    // 0x1501C874: nop

;}
RECOMP_FUNC void func_15198D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15198D7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x15198D80: jr          $ra
    // 0x15198D84: nop

    return;
    return;
    // 0x15198D84: nop

;}
RECOMP_FUNC void func_150B6DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B6DFC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x150B6E00: lw          $t7, -0x161C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X161C);
    // 0x150B6E04: lh          $t6, 0x34($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X34);
    // 0x150B6E08: addiu       $t1, $zero, -0xC00
    ctx->r9 = ADD32(0, -0XC00);
    // 0x150B6E0C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x150B6E10: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x150B6E14: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x150B6E18: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x150B6E1C: sh          $t9, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r25;
    // 0x150B6E20: lh          $t0, 0x34($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X34);
    // 0x150B6E24: slti        $at, $t0, 0x801
    ctx->r1 = SIGNED(ctx->r8) < 0X801 ? 1 : 0;
    // 0x150B6E28: bne         $at, $zero, L_150B6E34
    if (ctx->r1 != 0) {
        // 0x150B6E2C: nop
    
            goto L_150B6E34;
    }
    // 0x150B6E2C: nop

    // 0x150B6E30: sh          $t1, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r9;
L_150B6E34:
    // 0x150B6E34: jr          $ra
    // 0x150B6E38: nop

    return;
    return;
    // 0x150B6E38: nop

;}
RECOMP_FUNC void func_15014040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15014040: lbu         $t6, 0x16($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X16);
    // 0x15014044: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x15014048: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x1501404C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x15014050: bne         $v0, $zero, L_15014064
    if (ctx->r2 != 0) {
        // 0x15014054: sb          $t7, 0x16($a0)
        MEM_B(0X16, ctx->r4) = ctx->r15;
            goto L_15014064;
    }
    // 0x15014054: sb          $t7, 0x16($a0)
    MEM_B(0X16, ctx->r4) = ctx->r15;
    // 0x15014058: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501405C: b           L_15014070
    // 0x15014060: sw          $a0, -0x65E0($at)
    MEM_W(-0X65E0, ctx->r1) = ctx->r4;
        goto L_15014070;
    // 0x15014060: sw          $a0, -0x65E0($at)
    MEM_W(-0X65E0, ctx->r1) = ctx->r4;
L_15014064:
    // 0x15014064: bne         $v0, $at, L_15014070
    if (ctx->r2 != ctx->r1) {
        // 0x15014068: lui         $at, 0x800E
        ctx->r1 = S32(0X800E << 16);
            goto L_15014070;
    }
    // 0x15014068: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x1501406C: sw          $a0, -0x65DC($at)
    MEM_W(-0X65DC, ctx->r1) = ctx->r4;
L_15014070:
    // 0x15014070: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15014074: jr          $ra
    // 0x15014078: nop

    return;
    return;
    // 0x15014078: nop

;}
RECOMP_FUNC void func_151BD79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151BD79C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151BD7A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151BD7A4: lw          $v0, 0xB0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XB0);
    // 0x151BD7A8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x151BD7AC: beq         $t6, $zero, L_151BD7DC
    if (ctx->r14 == 0) {
        // 0x151BD7B0: nop
    
            goto L_151BD7DC;
    }
    // 0x151BD7B0: nop

    // 0x151BD7B4: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x151BD7B8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x151BD7BC: beq         $t7, $at, L_151BD7DC
    if (ctx->r15 == ctx->r1) {
        // 0x151BD7C0: nop
    
            goto L_151BD7DC;
    }
    // 0x151BD7C0: nop

    // 0x151BD7C4: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x151BD7C8: swc1        $f4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f4.u32l;
    // 0x151BD7CC: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x151BD7D0: swc1        $f6, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f6.u32l;
    // 0x151BD7D4: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x151BD7D8: swc1        $f8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f8.u32l;
L_151BD7DC:
    // 0x151BD7DC: jal         0x1513170C
    // 0x151BD7E0: nop

    func_1513170C(rdram, ctx);
        goto after_0;
    // 0x151BD7E0: nop

    after_0:
    // 0x151BD7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151BD7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151BD7EC: jr          $ra
    // 0x151BD7F0: nop

    return;
    return;
    // 0x151BD7F0: nop

;}
RECOMP_FUNC void func_150098D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150098D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150098D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150098D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150098DC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x150098E0: jal         0x15162034
    // 0x150098E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_15162034(rdram, ctx);
        goto after_0;
    // 0x150098E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x150098E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150098EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150098F0: jr          $ra
    // 0x150098F4: nop

    return;
    return;
    // 0x150098F4: nop

;}
RECOMP_FUNC void func_150FF288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150FF288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150FF28C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150FF290: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x150FF294: jal         0x1503195C
    // 0x150FF298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1503195C(rdram, ctx);
        goto after_0;
    // 0x150FF298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x150FF29C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150FF2A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150FF2A4: jr          $ra
    // 0x150FF2A8: nop

    return;
    return;
    // 0x150FF2A8: nop

;}
RECOMP_FUNC void func_150D7928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150D7928: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x150D792C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x150D7930: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x150D7934: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x150D7938: lbu         $t6, 0x124($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X124);
    // 0x150D793C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x150D7940: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x150D7944: sb          $t6, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r14;
    // 0x150D7948: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150D794C: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x150D7950: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x150D7954: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x150D7958: bne         $v0, $at, L_150D7978
    if (ctx->r2 != ctx->r1) {
        // 0x150D795C: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_150D7978;
    }
    // 0x150D795C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x150D7960: jal         0x15033E84
    // 0x150D7964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_15033E84(rdram, ctx);
        goto after_0;
    // 0x150D7964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x150D7968: beql        $v0, $zero, L_150D797C
    if (ctx->r2 == 0) {
        // 0x150D796C: lh          $v0, 0xE4($s0)
        ctx->r2 = MEM_H(ctx->r16, 0XE4);
            goto L_150D797C;
    }
    goto skip_0;
    // 0x150D796C: lh          $v0, 0xE4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE4);
    skip_0:
    // 0x150D7970: lbu         $t9, 0x6($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X6);
    // 0x150D7974: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
L_150D7978:
    // 0x150D7978: lh          $v0, 0xE4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE4);
L_150D797C:
    // 0x150D797C: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x150D7980: sb          $t1, 0xB0($s0)
    MEM_B(0XB0, ctx->r16) = ctx->r9;
    // 0x150D7984: beq         $v0, $zero, L_150D7990
    if (ctx->r2 == 0) {
        // 0x150D7988: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_150D7990;
    }
    // 0x150D7988: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150D798C: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
L_150D7990:
    // 0x150D7990: lbu         $v0, 0x13C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X13C);
    // 0x150D7994: lbu         $t2, 0x83($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X83);
    // 0x150D7998: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x150D799C: beq         $v0, $zero, L_150D7B8C
    if (ctx->r2 == 0) {
        // 0x150D79A0: sll         $t3, $t2, 2
        ctx->r11 = S32(ctx->r10 << 2);
            goto L_150D7B8C;
    }
    // 0x150D79A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x150D79A4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x150D79A8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150D79AC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x150D79B0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150D79B4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x150D79B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150D79BC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x150D79C0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x150D79C4: addiu       $t4, $t4, -0x3D30
    ctx->r12 = ADD32(ctx->r12, -0X3D30);
    // 0x150D79C8: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    // 0x150D79CC: lw          $t5, 0x31C($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X31C);
    // 0x150D79D0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x150D79D4: lbu         $t6, 0x4E($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4E);
    // 0x150D79D8: beql        $t6, $zero, L_150D7B90
    if (ctx->r14 == 0) {
        // 0x150D79DC: lhu         $t2, 0x7A($s0)
        ctx->r10 = MEM_HU(ctx->r16, 0X7A);
            goto L_150D7B90;
    }
    goto skip_1;
    // 0x150D79DC: lhu         $t2, 0x7A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X7A);
    skip_1:
    // 0x150D79E0: lhu         $t0, 0x7A($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0X7A);
    // 0x150D79E4: sh          $zero, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = 0;
    // 0x150D79E8: lwc1        $f6, 0x180($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X180);
    // 0x150D79EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150D79F0: addiu       $v0, $a1, 0x18E
    ctx->r2 = ADD32(ctx->r5, 0X18E);
    // 0x150D79F4: swc1        $f6, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->f6.u32l;
    // 0x150D79F8: lw          $t7, 0x184($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X184);
    // 0x150D79FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D7A00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x150D7A04: sw          $t7, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r15;
    // 0x150D7A08: lh          $t8, 0x18C($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X18C);
    // 0x150D7A0C: addiu       $v1, $a2, 0x18E
    ctx->r3 = ADD32(ctx->r6, 0X18E);
    // 0x150D7A10: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D7A14: sh          $t8, 0x18C($a1)
    MEM_H(0X18C, ctx->r5) = ctx->r24;
    // 0x150D7A18: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_150D7A1C:
    // 0x150D7A1C: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x150D7A20: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x150D7A24: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x150D7A28: sh          $t9, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r25;
    // 0x150D7A2C: lh          $t1, 0x2($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2);
    // 0x150D7A30: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x150D7A34: sh          $t1, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = ctx->r9;
    // 0x150D7A38: lh          $t2, -0x4($v1)
    ctx->r10 = MEM_H(ctx->r3, -0X4);
    // 0x150D7A3C: sh          $t2, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = ctx->r10;
    // 0x150D7A40: lh          $t3, -0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, -0X2);
    // 0x150D7A44: bne         $a0, $a1, L_150D7A1C
    if (ctx->r4 != ctx->r5) {
        // 0x150D7A48: sh          $t3, -0x2($v0)
        MEM_H(-0X2, ctx->r2) = ctx->r11;
            goto L_150D7A1C;
    }
    // 0x150D7A48: sh          $t3, -0x2($v0)
    MEM_H(-0X2, ctx->r2) = ctx->r11;
    // 0x150D7A4C: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x150D7A50: lwc1        $f16, 0xAF0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XAF0);
    // 0x150D7A54: lwc1        $f10, 0x54($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X54);
    // 0x150D7A58: lwc1        $f4, 0xC4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0XC4);
    // 0x150D7A5C: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x150D7A60: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150D7A64: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x150D7A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D7A6C: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x150D7A70: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x150D7A74: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x150D7A78: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x150D7A7C: bnel        $t4, $at, L_150D7B38
    if (ctx->r12 != ctx->r1) {
        // 0x150D7A80: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_150D7B38;
    }
    goto skip_2;
    // 0x150D7A80: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_2:
    // 0x150D7A84: lw          $t6, 0x184($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X184);
    // 0x150D7A88: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x150D7A8C: lwc1        $f6, 0x18($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X18);
    // 0x150D7A90: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x150D7A94: sw          $t7, 0x184($a2)
    MEM_W(0X184, ctx->r6) = ctx->r15;
    // 0x150D7A98: ori         $t9, $t7, 0x4
    ctx->r25 = ctx->r15 | 0X4;
    // 0x150D7A9C: sb          $t5, 0x125($a2)
    MEM_B(0X125, ctx->r6) = ctx->r13;
    // 0x150D7AA0: sw          $t9, 0x184($a2)
    MEM_W(0X184, ctx->r6) = ctx->r25;
    // 0x150D7AA4: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x150D7AA8: lwc1        $f8, 0x14($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X14);
    // 0x150D7AAC: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x150D7AB0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150D7AB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D7AB8: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x150D7ABC: lwc1        $f2, 0x1C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x150D7AC0: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x150D7AC4: addiu       $t4, $zero, 0x46
    ctx->r12 = ADD32(0, 0X46);
    // 0x150D7AC8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150D7ACC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D7AD0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150D7AD4: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x150D7AD8: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x150D7ADC: lwc1        $f6, 0x1C($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1C);
    // 0x150D7AE0: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x150D7AE4: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x150D7AE8: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x150D7AEC: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x150D7AF0: lw          $t2, 0x31C($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X31C);
    // 0x150D7AF4: sb          $t1, 0x8A($a2)
    MEM_B(0X8A, ctx->r6) = ctx->r9;
    // 0x150D7AF8: lbu         $t3, 0x4F($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X4F);
    // 0x150D7AFC: bne         $t3, $at, L_150D7B2C
    if (ctx->r11 != ctx->r1) {
        // 0x150D7B00: lui         $at, 0x800A
        ctx->r1 = S32(0X800A << 16);
            goto L_150D7B2C;
    }
    // 0x150D7B00: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D7B04: lwc1        $f6, 0xAF4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XAF4);
    // 0x150D7B08: lwc1        $f4, 0x44($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X44);
    // 0x150D7B0C: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150D7B10: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x150D7B14: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x150D7B18: nop

    // 0x150D7B1C: bc1fl       L_150D7B2C
    if (!c1cs) {
        // 0x150D7B20: sb          $t4, 0xAA($a2)
        MEM_B(0XAA, ctx->r6) = ctx->r12;
            goto L_150D7B2C;
    }
    goto skip_3;
    // 0x150D7B20: sb          $t4, 0xAA($a2)
    MEM_B(0XAA, ctx->r6) = ctx->r12;
    skip_3:
    // 0x150D7B24: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x150D7B28: sb          $t4, 0xAA($a2)
    MEM_B(0XAA, ctx->r6) = ctx->r12;
L_150D7B2C:
    // 0x150D7B2C: b           L_150D7B44
    // 0x150D7B30: lhu         $v0, 0x21C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X21C);
        goto L_150D7B44;
    // 0x150D7B30: lhu         $v0, 0x21C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X21C);
    // 0x150D7B34: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_150D7B38:
    // 0x150D7B38: nop

    // 0x150D7B3C: swc1        $f12, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f12.u32l;
    // 0x150D7B40: lhu         $v0, 0x21C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X21C);
L_150D7B44:
    // 0x150D7B44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x150D7B48: lbu         $t1, 0xD0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XD0);
    // 0x150D7B4C: subu        $t5, $t0, $v0
    ctx->r13 = SUB32(ctx->r8, ctx->r2);
    // 0x150D7B50: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x150D7B54: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150D7B58: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x150D7B5C: mflo        $t8
    ctx->r24 = lo;
    // 0x150D7B60: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x150D7B64: sh          $t9, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = ctx->r25;
    // 0x150D7B68: sh          $v0, 0x7A($s0)
    MEM_H(0X7A, ctx->r16) = ctx->r2;
    // 0x150D7B6C: sh          $v0, 0x76($s0)
    MEM_H(0X76, ctx->r16) = ctx->r2;
    // 0x150D7B70: lwc1        $f10, 0x3C($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X3C);
    // 0x150D7B74: beq         $t1, $zero, L_150D7D8C
    if (ctx->r9 == 0) {
        // 0x150D7B78: swc1        $f10, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
            goto L_150D7D8C;
    }
    // 0x150D7B78: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x150D7B7C: jal         0x1505C7D8
    // 0x150D7B80: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    func_1505C7D8(rdram, ctx);
        goto after_1;
    // 0x150D7B80: lbu         $a1, 0x3E78($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X3E78);
    after_1:
    // 0x150D7B84: b           L_150D7D90
    // 0x150D7B88: lwc1        $f2, 0x180($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X180);
        goto L_150D7D90;
    // 0x150D7B88: lwc1        $f2, 0x180($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X180);
L_150D7B8C:
    // 0x150D7B8C: lhu         $t2, 0x7A($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X7A);
L_150D7B90:
    // 0x150D7B90: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150D7B94: beq         $v0, $zero, L_150D7BF4
    if (ctx->r2 == 0) {
        // 0x150D7B98: sh          $t2, 0x21C($s0)
        MEM_H(0X21C, ctx->r16) = ctx->r10;
            goto L_150D7BF4;
    }
    // 0x150D7B98: sh          $t2, 0x21C($s0)
    MEM_H(0X21C, ctx->r16) = ctx->r10;
    // 0x150D7B9C: lbu         $t3, 0x83($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X83);
    // 0x150D7BA0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150D7BA4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x150D7BA8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150D7BAC: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150D7BB0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150D7BB4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150D7BB8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150D7BBC: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150D7BC0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150D7BC4: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150D7BC8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150D7BCC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x150D7BD0: lbu         $t5, -0x3C2C($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3C2C);
    // 0x150D7BD4: beql        $t5, $zero, L_150D7BF4
    if (ctx->r13 == 0) {
        // 0x150D7BD8: sb          $zero, 0x13C($s0)
        MEM_B(0X13C, ctx->r16) = 0;
            goto L_150D7BF4;
    }
    goto skip_4;
    // 0x150D7BD8: sb          $zero, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = 0;
    skip_4:
    // 0x150D7BDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D7BE0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x150D7BE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D7BE8: swc1        $f16, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f16.u32l;
    // 0x150D7BEC: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x150D7BF0: sb          $zero, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = 0;
L_150D7BF4:
    // 0x150D7BF4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150D7BF8: lbu         $t6, 0x3E78($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X3E78);
    // 0x150D7BFC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x150D7C00: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150D7C04: sb          $t6, 0x83($sp)
    MEM_B(0X83, ctx->r29) = ctx->r14;
    // 0x150D7C08: lh          $t7, 0x90($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X90);
    // 0x150D7C0C: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x150D7C10: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x150D7C14: sh          $t7, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r15;
    // 0x150D7C18: jal         0x1505A3A8
    // 0x150D7C1C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_1505A3A8(rdram, ctx);
        goto after_2;
    // 0x150D7C1C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_2:
    // 0x150D7C20: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x150D7C24: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x150D7C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D7C2C: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x150D7C30: jal         0x15059140
    // 0x150D7C34: sb          $t9, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r25;
    func_15059140(rdram, ctx);
        goto after_3;
    // 0x150D7C34: sb          $t9, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r25;
    after_3:
    // 0x150D7C38: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x150D7C3C: lwc1        $f8, 0xC4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x150D7C40: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150D7C44: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D7C48: swc1        $f6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f6.u32l;
    // 0x150D7C4C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x150D7C50: lwc1        $f18, 0xAF8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0XAF8);
    // 0x150D7C54: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150D7C58: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x150D7C5C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x150D7C60: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150D7C64: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x150D7C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D7C6C: lui         $a1, 0x4248
    ctx->r5 = S32(0X4248 << 16);
    // 0x150D7C70: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x150D7C74: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150D7C78: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x150D7C7C: lbu         $t1, 0x232($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X232);
    // 0x150D7C80: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x150D7C84: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x150D7C88: bne         $t1, $at, L_150D7CD0
    if (ctx->r9 != ctx->r1) {
        // 0x150D7C8C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_150D7CD0;
    }
    // 0x150D7C8C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x150D7C90: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x150D7C94: bne         $t2, $at, L_150D7CA4
    if (ctx->r10 != ctx->r1) {
        // 0x150D7C98: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_150D7CA4;
    }
    // 0x150D7C98: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x150D7C9C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150D7CA0: sb          $t3, -0x3B4C($at)
    MEM_B(-0X3B4C, ctx->r1) = ctx->r11;
L_150D7CA4:
    // 0x150D7CA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150D7CA8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x150D7CAC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x150D7CB0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x150D7CB4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x150D7CB8: jal         0x15052F9C
    // 0x150D7CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_15052F9C(rdram, ctx);
        goto after_4;
    // 0x150D7CBC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_4:
    // 0x150D7CC0: beql        $v0, $zero, L_150D7D90
    if (ctx->r2 == 0) {
        // 0x150D7CC4: lwc1        $f2, 0x180($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X180);
            goto L_150D7D90;
    }
    goto skip_5;
    // 0x150D7CC4: lwc1        $f2, 0x180($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X180);
    skip_5:
    // 0x150D7CC8: b           L_150D8294
    // 0x150D7CCC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_150D8294;
    // 0x150D7CCC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150D7CD0:
    // 0x150D7CD0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x150D7CD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150D7CD8: bnel        $t5, $at, L_150D7D80
    if (ctx->r13 != ctx->r1) {
        // 0x150D7CDC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_150D7D80;
    }
    goto skip_6;
    // 0x150D7CDC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_6:
    // 0x150D7CE0: lw          $v1, 0x31C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X31C);
    // 0x150D7CE4: lbu         $t6, 0x78($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X78);
    // 0x150D7CE8: bnel        $t6, $zero, L_150D7D80
    if (ctx->r14 != 0) {
        // 0x150D7CEC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_150D7D80;
    }
    goto skip_7;
    // 0x150D7CEC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_7:
    // 0x150D7CF0: lbu         $t7, 0x11A($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X11A);
    // 0x150D7CF4: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x150D7CF8: bnel        $t7, $zero, L_150D7D80
    if (ctx->r15 != 0) {
        // 0x150D7CFC: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_150D7D80;
    }
    goto skip_8;
    // 0x150D7CFC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_8:
    // 0x150D7D00: lw          $t1, -0x3D98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3D98);
    // 0x150D7D04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x150D7D08: sllv        $t9, $t8, $t0
    ctx->r25 = S32(ctx->r24 << (ctx->r8 & 31));
    // 0x150D7D0C: and         $t2, $t9, $t1
    ctx->r10 = ctx->r25 & ctx->r9;
    // 0x150D7D10: beql        $t2, $zero, L_150D7D80
    if (ctx->r10 == 0) {
        // 0x150D7D14: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_150D7D80;
    }
    goto skip_9;
    // 0x150D7D14: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_9:
    // 0x150D7D18: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x150D7D1C: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x150D7D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D7D24: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x150D7D28: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x150D7D2C: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x150D7D30: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x150D7D34: bc1fl       L_150D7D80
    if (!c1cs) {
        // 0x150D7D38: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_150D7D80;
    }
    goto skip_10;
    // 0x150D7D38: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    skip_10:
    // 0x150D7D3C: sb          $t0, 0x124($s0)
    MEM_B(0X124, ctx->r16) = ctx->r8;
    // 0x150D7D40: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x150D7D44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x150D7D48: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x150D7D4C: bnel        $t3, $at, L_150D7D60
    if (ctx->r11 != ctx->r1) {
        // 0x150D7D50: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_150D7D60;
    }
    goto skip_11;
    // 0x150D7D50: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_11:
    // 0x150D7D54: sb          $zero, 0x104($v0)
    MEM_B(0X104, ctx->r2) = 0;
    // 0x150D7D58: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x150D7D5C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_150D7D60:
    // 0x150D7D60: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x150D7D64: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x150D7D68: jal         0x1505327C
    // 0x150D7D6C: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    func_1505327C(rdram, ctx);
        goto after_5;
    // 0x150D7D6C: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    after_5:
    // 0x150D7D70: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150D7D74: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x150D7D78: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x150D7D7C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_150D7D80:
    // 0x150D7D80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150D7D84: bne         $t0, $at, L_150D7CD0
    if (ctx->r8 != ctx->r1) {
        // 0x150D7D88: addiu       $v0, $v0, 0x32C
        ctx->r2 = ADD32(ctx->r2, 0X32C);
            goto L_150D7CD0;
    }
    // 0x150D7D88: addiu       $v0, $v0, 0x32C
    ctx->r2 = ADD32(ctx->r2, 0X32C);
L_150D7D8C:
    // 0x150D7D8C: lwc1        $f2, 0x180($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X180);
L_150D7D90:
    // 0x150D7D90: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x150D7D94: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x150D7D98: sb          $t5, 0x125($s0)
    MEM_B(0X125, ctx->r16) = ctx->r13;
    // 0x150D7D9C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x150D7DA0: addiu       $at, $zero, 0x48
    ctx->r1 = ADD32(0, 0X48);
    // 0x150D7DA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150D7DA8: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x150D7DAC: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x150D7DB0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x150D7DB4: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x150D7DB8: bne         $t6, $at, L_150D7EB4
    if (ctx->r14 != ctx->r1) {
        // 0x150D7DBC: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_150D7EB4;
    }
    // 0x150D7DBC: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x150D7DC0: bne         $t7, $at, L_150D8288
    if (ctx->r15 != ctx->r1) {
        // 0x150D7DC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_150D8288;
    }
    // 0x150D7DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D7DC8: lw          $t8, 0xF8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XF8);
    // 0x150D7DCC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x150D7DD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x150D7DD4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x150D7DD8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x150D7DDC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150D7DE0: add.s       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x150D7DE4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D7DE8: sw          $t9, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->r25;
    // 0x150D7DEC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D7DF0: lwc1        $f6, 0xAFC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XAFC);
    // 0x150D7DF4: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x150D7DF8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150D7DFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D7E00: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x150D7E04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D7E08: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x150D7E0C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x150D7E10: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x150D7E14: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x150D7E18: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x150D7E1C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x150D7E20: jal         0x15058EA4
    // 0x150D7E24: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    func_15058EA4(rdram, ctx);
        goto after_6;
    // 0x150D7E24: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x150D7E28: lbu         $t1, 0x13C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X13C);
    // 0x150D7E2C: beql        $t1, $zero, L_150D7E70
    if (ctx->r9 == 0) {
        // 0x150D7E30: lhu         $t5, 0x7A($s0)
        ctx->r13 = MEM_HU(ctx->r16, 0X7A);
            goto L_150D7E70;
    }
    goto skip_12;
    // 0x150D7E30: lhu         $t5, 0x7A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X7A);
    skip_12:
    // 0x150D7E34: lbu         $t3, 0x124($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X124);
    // 0x150D7E38: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x150D7E3C: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x150D7E40: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x150D7E44: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150D7E48: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150D7E4C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x150D7E50: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150D7E54: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150D7E58: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150D7E5C: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x150D7E60: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x150D7E64: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x150D7E68: sh          $t2, -0x3C64($at)
    MEM_H(-0X3C64, ctx->r1) = ctx->r10;
    // 0x150D7E6C: lhu         $t5, 0x7A($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X7A);
L_150D7E70:
    // 0x150D7E70: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x150D7E74: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x150D7E78: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x150D7E7C: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x150D7E80: swc1        $f18, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f18.u32l;
    // 0x150D7E84: bgez        $t5, L_150D7E98
    if (SIGNED(ctx->r13) >= 0) {
        // 0x150D7E88: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_150D7E98;
    }
    // 0x150D7E88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x150D7E8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D7E90: nop

    // 0x150D7E94: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_150D7E98:
    // 0x150D7E98: lui         $at, 0x3BB4
    ctx->r1 = S32(0X3BB4 << 16);
    // 0x150D7E9C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D7EA0: nop

    // 0x150D7EA4: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x150D7EA8: swc1        $f16, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f16.u32l;
    // 0x150D7EAC: b           L_150D8288
    // 0x150D7EB0: nop

        goto L_150D8288;
    // 0x150D7EB0: nop

L_150D7EB4:
    // 0x150D7EB4: jal         0x1506B100
    // 0x150D7EB8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_1506B100(rdram, ctx);
        goto after_7;
    // 0x150D7EB8: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_7:
    // 0x150D7EBC: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x150D7EC0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D7EC4: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150D7EC8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150D7ECC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x150D7ED0: nop

    // 0x150D7ED4: bc1fl       L_150D7F00
    if (!c1cs) {
        // 0x150D7ED8: lbu         $v0, 0x102($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X102);
            goto L_150D7F00;
    }
    goto skip_13;
    // 0x150D7ED8: lbu         $v0, 0x102($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X102);
    skip_13:
    // 0x150D7EDC: lbu         $v1, 0x102($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X102);
    // 0x150D7EE0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x150D7EE4: beq         $at, $zero, L_150D7F14
    if (ctx->r1 == 0) {
        // 0x150D7EE8: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_150D7F14;
    }
    // 0x150D7EE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x150D7EEC: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x150D7EF0: sb          $t6, 0x102($s0)
    MEM_B(0X102, ctx->r16) = ctx->r14;
    // 0x150D7EF4: b           L_150D7F14
    // 0x150D7EF8: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
        goto L_150D7F14;
    // 0x150D7EF8: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x150D7EFC: lbu         $v0, 0x102($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X102);
L_150D7F00:
    // 0x150D7F00: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x150D7F04: beql        $at, $zero, L_150D7F18
    if (ctx->r1 == 0) {
        // 0x150D7F08: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_150D7F18;
    }
    goto skip_14;
    // 0x150D7F08: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    skip_14:
    // 0x150D7F0C: sb          $zero, 0x102($s0)
    MEM_B(0X102, ctx->r16) = 0;
    // 0x150D7F10: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_150D7F14:
    // 0x150D7F14: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
L_150D7F18:
    // 0x150D7F18: bne         $at, $zero, L_150D800C
    if (ctx->r1 != 0) {
        // 0x150D7F1C: lbu         $t7, 0x83($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0X83);
            goto L_150D800C;
    }
    // 0x150D7F1C: lbu         $t7, 0x83($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X83);
    // 0x150D7F20: addiu       $v1, $zero, 0x32C
    ctx->r3 = ADD32(0, 0X32C);
    // 0x150D7F24: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D7F28: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150D7F2C: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x150D7F30: mflo        $t8
    ctx->r24 = lo;
    // 0x150D7F34: addu        $a2, $v0, $t8
    ctx->r6 = ADD32(ctx->r2, ctx->r24);
    // 0x150D7F38: lwc1        $f8, 0x28($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X28);
    // 0x150D7F3C: c.eq.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl == ctx->f8.fl;
    // 0x150D7F40: nop

    // 0x150D7F44: bc1tl       L_150D7F7C
    if (c1cs) {
        // 0x150D7F48: lbu         $t4, 0x13C($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X13C);
            goto L_150D7F7C;
    }
    goto skip_15;
    // 0x150D7F48: lbu         $t4, 0x13C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X13C);
    skip_15:
    // 0x150D7F4C: lbu         $t9, 0xAD($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0XAD);
    // 0x150D7F50: bnel        $t9, $zero, L_150D7F7C
    if (ctx->r25 != 0) {
        // 0x150D7F54: lbu         $t4, 0x13C($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X13C);
            goto L_150D7F7C;
    }
    goto skip_16;
    // 0x150D7F54: lbu         $t4, 0x13C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X13C);
    skip_16:
    // 0x150D7F58: lbu         $t1, 0x124($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X124);
    // 0x150D7F5C: beql        $t1, $zero, L_150D8010
    if (ctx->r9 == 0) {
        // 0x150D7F60: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150D8010;
    }
    goto skip_17;
    // 0x150D7F60: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_17:
    // 0x150D7F64: lw          $t3, 0x31C($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X31C);
    // 0x150D7F68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x150D7F6C: lbu         $t2, 0x4F($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X4F);
    // 0x150D7F70: bnel        $t2, $at, L_150D8010
    if (ctx->r10 != ctx->r1) {
        // 0x150D7F74: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_150D8010;
    }
    goto skip_18;
    // 0x150D7F74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_18:
    // 0x150D7F78: lbu         $t4, 0x13C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X13C);
L_150D7F7C:
    // 0x150D7F7C: beq         $t4, $zero, L_150D7FE0
    if (ctx->r12 == 0) {
        // 0x150D7F80: nop
    
            goto L_150D7FE0;
    }
    // 0x150D7F80: nop

    // 0x150D7F84: lbu         $t5, 0x124($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X124);
    // 0x150D7F88: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x150D7F8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D7F90: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D7F94: mflo        $t6
    ctx->r14 = lo;
    // 0x150D7F98: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x150D7F9C: sh          $zero, 0xCC($t7)
    MEM_H(0XCC, ctx->r15) = 0;
    // 0x150D7FA0: lbu         $t8, 0x124($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X124);
    // 0x150D7FA4: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D7FA8: mflo        $t9
    ctx->r25 = lo;
    // 0x150D7FAC: addu        $t1, $v0, $t9
    ctx->r9 = ADD32(ctx->r2, ctx->r25);
    // 0x150D7FB0: lw          $t3, 0x31C($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X31C);
    // 0x150D7FB4: sb          $zero, 0x4E($t3)
    MEM_B(0X4E, ctx->r11) = 0;
    // 0x150D7FB8: lbu         $t2, 0x124($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X124);
    // 0x150D7FBC: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D7FC0: mflo        $t4
    ctx->r12 = lo;
    // 0x150D7FC4: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x150D7FC8: sb          $zero, 0xAD($t5)
    MEM_B(0XAD, ctx->r13) = 0;
    // 0x150D7FCC: lbu         $t6, 0x124($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X124);
    // 0x150D7FD0: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D7FD4: mflo        $t7
    ctx->r15 = lo;
    // 0x150D7FD8: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x150D7FDC: swc1        $f6, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f6.u32l;
L_150D7FE0:
    // 0x150D7FE0: jal         0x100109D0
    // 0x150D7FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_100109D0(rdram, ctx);
        goto after_8;
    // 0x150D7FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x150D7FE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x150D7FEC: addiu       $a1, $zero, 0x51
    ctx->r5 = ADD32(0, 0X51);
    // 0x150D7FF0: addiu       $a2, $zero, 0x6D60
    ctx->r6 = ADD32(0, 0X6D60);
    // 0x150D7FF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x150D7FF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150D7FFC: jal         0x10010FFC
    // 0x150D8000: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_10010FFC(rdram, ctx);
        goto after_9;
    // 0x150D8000: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_9:
    // 0x150D8004: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x150D8008: sb          $zero, 0x1CA($s0)
    MEM_B(0X1CA, ctx->r16) = 0;
L_150D800C:
    // 0x150D800C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_150D8010:
    // 0x150D8010: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150D8014: lwc1        $f0, 0x150($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X150);
    // 0x150D8018: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150D801C: addiu       $v0, $v0, -0x3D30
    ctx->r2 = ADD32(ctx->r2, -0X3D30);
    // 0x150D8020: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x150D8024: addiu       $v1, $zero, 0x32C
    ctx->r3 = ADD32(0, 0X32C);
    // 0x150D8028: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D802C: bc1fl       L_150D8044
    if (!c1cs) {
        // 0x150D8030: lwc1        $f4, 0x28($s0)
        ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
            goto L_150D8044;
    }
    goto skip_19;
    // 0x150D8030: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    skip_19:
    // 0x150D8034: lwc1        $f16, 0xB00($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0XB00);
    // 0x150D8038: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x150D803C: swc1        $f18, 0x150($s0)
    MEM_W(0X150, ctx->r16) = ctx->f18.u32l;
    // 0x150D8040: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
L_150D8044:
    // 0x150D8044: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x150D8048: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x150D804C: nop

    // 0x150D8050: bc1fl       L_150D8070
    if (!c1cs) {
        // 0x150D8054: lwc1        $f2, 0xC0($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0XC0);
            goto L_150D8070;
    }
    goto skip_20;
    // 0x150D8054: lwc1        $f2, 0xC0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC0);
    skip_20:
    // 0x150D8058: lwc1        $f8, 0xBC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XBC);
    // 0x150D805C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x150D8060: swc1        $f12, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->f12.u32l;
    // 0x150D8064: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x150D8068: swc1        $f10, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->f10.u32l;
    // 0x150D806C: lwc1        $f2, 0xC0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC0);
L_150D8070:
    // 0x150D8070: lwc1        $f18, 0x84($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150D8074: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x150D8078: nop

    // 0x150D807C: bc1fl       L_150D8098
    if (!c1cs) {
        // 0x150D8080: lwc1        $f8, 0xC4($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0XC4);
            goto L_150D8098;
    }
    goto skip_21;
    // 0x150D8080: lwc1        $f8, 0xC4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC4);
    skip_21:
    // 0x150D8084: lwc1        $f16, 0x44($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X44);
    // 0x150D8088: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x150D808C: b           L_150D80F0
    // 0x150D8090: swc1        $f4, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f4.u32l;
        goto L_150D80F0;
    // 0x150D8090: swc1        $f4, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f4.u32l;
    // 0x150D8094: lwc1        $f8, 0xC4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC4);
L_150D8098:
    // 0x150D8098: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150D809C: add.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x150D80A0: swc1        $f6, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f6.u32l;
    // 0x150D80A4: lwc1        $f0, 0xC4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x150D80A8: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x150D80AC: nop

    // 0x150D80B0: bc1fl       L_150D80D4
    if (!c1cs) {
        // 0x150D80B4: mtc1        $at, $f2
        ctx->f2.u32l = ctx->r1;
            goto L_150D80D4;
    }
    goto skip_22;
    // 0x150D80B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    skip_22:
    // 0x150D80B8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x150D80BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x150D80C0: nop

    // 0x150D80C4: add.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x150D80C8: b           L_150D80F0
    // 0x150D80CC: swc1        $f10, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f10.u32l;
        goto L_150D80F0;
    // 0x150D80CC: swc1        $f10, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f10.u32l;
    // 0x150D80D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_150D80D4:
    // 0x150D80D4: nop

    // 0x150D80D8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150D80DC: nop

    // 0x150D80E0: bc1fl       L_150D80F4
    if (!c1cs) {
        // 0x150D80E4: lbu         $t9, 0x13C($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X13C);
            goto L_150D80F4;
    }
    goto skip_23;
    // 0x150D80E4: lbu         $t9, 0x13C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X13C);
    skip_23:
    // 0x150D80E8: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x150D80EC: swc1        $f16, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f16.u32l;
L_150D80F0:
    // 0x150D80F0: lbu         $t9, 0x13C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X13C);
L_150D80F4:
    // 0x150D80F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D80F8: beql        $t9, $zero, L_150D8190
    if (ctx->r25 == 0) {
        // 0x150D80FC: lui         $at, 0x4230
        ctx->r1 = S32(0X4230 << 16);
            goto L_150D8190;
    }
    goto skip_24;
    // 0x150D80FC: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    skip_24:
    // 0x150D8100: lwc1        $f18, 0xC4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC4);
    // 0x150D8104: lwc1        $f4, 0xB04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0XB04);
    // 0x150D8108: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x150D810C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D8110: mul.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x150D8114: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D8118: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
    // 0x150D811C: add.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x150D8120: trunc.w.s   $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x150D8124: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x150D8128: nop

    // 0x150D812C: sll         $t2, $t3, 16
    ctx->r10 = S32(ctx->r11 << 16);
    // 0x150D8130: sra         $t4, $t2, 16
    ctx->r12 = S32(SIGNED(ctx->r10) >> 16);
    // 0x150D8134: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x150D8138: lbu         $t3, 0x124($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X124);
    // 0x150D813C: cvt.s.w     $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = CVT_S_W(ctx->f16.u32l);
    // 0x150D8140: lwc1        $f16, 0x150($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X150);
    // 0x150D8144: multu       $t3, $v1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x150D8148: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x150D814C: swc1        $f2, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f2.u32l;
    // 0x150D8150: trunc.w.s   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x150D8154: mflo        $t2
    ctx->r10 = lo;
    // 0x150D8158: addu        $t4, $v0, $t2
    ctx->r12 = ADD32(ctx->r2, ctx->r10);
    // 0x150D815C: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x150D8160: nop

    // 0x150D8164: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x150D8168: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x150D816C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x150D8170: nop

    // 0x150D8174: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x150D8178: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x150D817C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x150D8180: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x150D8184: b           L_150D819C
    // 0x150D8188: sh          $t1, 0xCC($t4)
    MEM_H(0XCC, ctx->r12) = ctx->r9;
        goto L_150D819C;
    // 0x150D8188: sh          $t1, 0xCC($t4)
    MEM_H(0XCC, ctx->r12) = ctx->r9;
    // 0x150D818C: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
L_150D8190:
    // 0x150D8190: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x150D8194: nop

    // 0x150D8198: swc1        $f8, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f8.u32l;
L_150D819C:
    // 0x150D819C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x150D81A0: lwc1        $f6, 0xB08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0XB08);
    // 0x150D81A4: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x150D81A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x150D81AC: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x150D81B0: nop

    // 0x150D81B4: bc1f        L_150D8268
    if (!c1cs) {
        // 0x150D81B8: nop
    
            goto L_150D8268;
    }
    // 0x150D81B8: nop

    // 0x150D81BC: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x150D81C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x150D81C4: nop

    // 0x150D81C8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x150D81CC: nop

    // 0x150D81D0: bc1f        L_150D8268
    if (!c1cs) {
        // 0x150D81D4: nop
    
            goto L_150D8268;
    }
    // 0x150D81D4: nop

    // 0x150D81D8: lbu         $t5, 0x1CA($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1CA);
    // 0x150D81DC: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150D81E0: beq         $t5, $zero, L_150D8268
    if (ctx->r13 == 0) {
        // 0x150D81E4: nop
    
            goto L_150D8268;
    }
    // 0x150D81E4: nop

    // 0x150D81E8: lbu         $t6, 0x35EA($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X35EA);
    // 0x150D81EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150D81F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D81F4: beq         $t6, $at, L_150D8268
    if (ctx->r14 == ctx->r1) {
        // 0x150D81F8: lui         $at, 0x447A
        ctx->r1 = S32(0X447A << 16);
            goto L_150D8268;
    }
    // 0x150D81F8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x150D81FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x150D8200: nop

    // 0x150D8204: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x150D8208: trunc.w.s   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x150D820C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x150D8210: nop

    // 0x150D8214: slti        $at, $a2, 0x4651
    ctx->r1 = SIGNED(ctx->r6) < 0X4651 ? 1 : 0;
    // 0x150D8218: bne         $at, $zero, L_150D8224
    if (ctx->r1 != 0) {
        // 0x150D821C: nop
    
            goto L_150D8224;
    }
    // 0x150D821C: nop

    // 0x150D8220: addiu       $a2, $zero, 0x4650
    ctx->r6 = ADD32(0, 0X4650);
L_150D8224:
    // 0x150D8224: jal         0x100107F8
    // 0x150D8228: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    func_100107F8(rdram, ctx);
        goto after_10;
    // 0x150D8228: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_10:
    // 0x150D822C: bne         $v0, $zero, L_150D8254
    if (ctx->r2 != 0) {
        // 0x150D8230: lw          $a2, 0x48($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X48);
            goto L_150D8254;
    }
    // 0x150D8230: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x150D8234: addiu       $t8, $zero, 0x7D0
    ctx->r24 = ADD32(0, 0X7D0);
    // 0x150D8238: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x150D823C: addiu       $a0, $zero, 0x678
    ctx->r4 = ADD32(0, 0X678);
    // 0x150D8240: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x150D8244: jal         0x10010154
    // 0x150D8248: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    func_10010154(rdram, ctx);
        goto after_11;
    // 0x150D8248: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    after_11:
    // 0x150D824C: b           L_150D8274
    // 0x150D8250: lui         $a3, 0x3F0C
    ctx->r7 = S32(0X3F0C << 16);
        goto L_150D8274;
    // 0x150D8250: lui         $a3, 0x3F0C
    ctx->r7 = S32(0X3F0C << 16);
L_150D8254:
    // 0x150D8254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D8258: jal         0x1001091C
    // 0x150D825C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_1001091C(rdram, ctx);
        goto after_12;
    // 0x150D825C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_12:
    // 0x150D8260: b           L_150D8274
    // 0x150D8264: lui         $a3, 0x3F0C
    ctx->r7 = S32(0X3F0C << 16);
        goto L_150D8274;
    // 0x150D8264: lui         $a3, 0x3F0C
    ctx->r7 = S32(0X3F0C << 16);
L_150D8268:
    // 0x150D8268: jal         0x100109D0
    // 0x150D826C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_100109D0(rdram, ctx);
        goto after_13;
    // 0x150D826C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x150D8270: lui         $a3, 0x3F0C
    ctx->r7 = S32(0X3F0C << 16);
L_150D8274:
    // 0x150D8274: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x150D8278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x150D827C: lhu         $a1, 0x76($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X76);
    // 0x150D8280: jal         0x15052490
    // 0x150D8284: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    func_15052490(rdram, ctx);
        goto after_14;
    // 0x150D8284: lw          $a2, 0x7C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X7C);
    after_14:
L_150D8288:
    // 0x150D8288: jal         0x150535F4
    // 0x150D828C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_150535F4(rdram, ctx);
        goto after_15;
    // 0x150D828C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x150D8290: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_150D8294:
    // 0x150D8294: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x150D8298: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x150D829C: jr          $ra
    // 0x150D82A0: nop

    return;
    return;
    // 0x150D82A0: nop

;}
RECOMP_FUNC void func_15146078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15146078: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x1514607C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15146080: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15146084: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x15146088: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x1514608C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x15146090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x15146094: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x15146098: lwc1        $f0, 0x0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X0);
    // 0x1514609C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x151460A0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x151460A4: nop

    // 0x151460A8: bc1fl       L_151460E4
    if (!c1cs) {
        // 0x151460AC: c.eq.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
            goto L_151460E4;
    }
    goto skip_0;
    // 0x151460AC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    skip_0:
    // 0x151460B0: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x151460B4: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x151460B8: nop

    // 0x151460BC: bc1fl       L_151460E4
    if (!c1cs) {
        // 0x151460C0: c.eq.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
            goto L_151460E4;
    }
    goto skip_1;
    // 0x151460C0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    skip_1:
    // 0x151460C4: lwc1        $f6, 0x8($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X8);
    // 0x151460C8: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x151460CC: nop

    // 0x151460D0: bc1fl       L_151460E4
    if (!c1cs) {
        // 0x151460D4: c.eq.s      $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
            goto L_151460E4;
    }
    goto skip_2;
    // 0x151460D4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    skip_2:
    // 0x151460D8: b           L_151462B4
    // 0x151460DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151462B4;
    // 0x151460DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151460E0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
L_151460E4:
    // 0x151460E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151460E8: lwc1        $f12, 0x4($a3)
    ctx->f12.u32l = MEM_W(ctx->r7, 0X4);
    // 0x151460EC: lwc1        $f14, 0x8($a3)
    ctx->f14.u32l = MEM_W(ctx->r7, 0X8);
    // 0x151460F0: bc1f        L_15146108
    if (!c1cs) {
        // 0x151460F4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_15146108;
    }
    // 0x151460F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x151460F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151460FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15146100: b           L_1514610C
    // 0x15146104: lbu         $a0, 0x46($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X46);
        goto L_1514610C;
    // 0x15146104: lbu         $a0, 0x46($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X46);
L_15146108:
    // 0x15146108: lbu         $a2, 0x45($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X45);
L_1514610C:
    // 0x1514610C: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x15146110: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15146114: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15146118: bc1fl       L_15146138
    if (!c1cs) {
        // 0x1514611C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_15146138;
    }
    goto skip_3;
    // 0x1514611C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_3:
    // 0x15146120: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x15146124: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x15146128: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x1514612C: b           L_15146138
    // 0x15146130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_15146138;
    // 0x15146130: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x15146134: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_15146138:
    // 0x15146138: c.eq.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl == ctx->f14.fl;
    // 0x1514613C: nop

    // 0x15146140: bc1fl       L_15146160
    if (!c1cs) {
        // 0x15146144: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_15146160;
    }
    goto skip_4;
    // 0x15146144: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_4:
    // 0x15146148: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x1514614C: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x15146150: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x15146154: b           L_15146160
    // 0x15146158: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_15146160;
    // 0x15146158: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x1514615C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_15146160:
    // 0x15146160: bne         $a1, $v0, L_15146208
    if (ctx->r5 != ctx->r2) {
        // 0x15146164: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_15146208;
    }
    // 0x15146164: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x15146168: beq         $a0, $zero, L_1514618C
    if (ctx->r4 == 0) {
        // 0x1514616C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_1514618C;
    }
    // 0x1514616C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15146170: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x15146174: beq         $a0, $at, L_151461B4
    if (ctx->r4 == ctx->r1) {
        // 0x15146178: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_151461B4;
    }
    // 0x15146178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514617C: beql        $a0, $a1, L_151461E0
    if (ctx->r4 == ctx->r5) {
        // 0x15146180: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_151461E0;
    }
    goto skip_5;
    // 0x15146180: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_5:
    // 0x15146184: b           L_151462B4
    // 0x15146188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151462B4;
    // 0x15146188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1514618C:
    // 0x1514618C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x15146190: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15146194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x15146198: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x1514619C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x151461A0: swc1        $f2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f2.u32l;
    // 0x151461A4: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x151461A8: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x151461AC: b           L_151462B4
    // 0x151461B0: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
        goto L_151462B4;
    // 0x151461B0: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
L_151461B4:
    // 0x151461B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x151461B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151461BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151461C0: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x151461C4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x151461C8: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
    // 0x151461CC: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x151461D0: swc1        $f0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f0.u32l;
    // 0x151461D4: b           L_151462B4
    // 0x151461D8: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
        goto L_151462B4;
    // 0x151461D8: swc1        $f2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f2.u32l;
    // 0x151461DC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_151461E0:
    // 0x151461E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151461E4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x151461E8: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x151461EC: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x151461F0: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
    // 0x151461F4: swc1        $f0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f0.u32l;
    // 0x151461F8: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x151461FC: swc1        $f2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f2.u32l;
    // 0x15146200: b           L_151462B4
    // 0x15146204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_151462B4;
    // 0x15146204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15146208:
    // 0x15146208: bne         $v1, $at, L_15146220
    if (ctx->r3 != ctx->r1) {
        // 0x1514620C: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_15146220;
    }
    // 0x1514620C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x15146210: bnel        $a1, $a2, L_15146224
    if (ctx->r5 != ctx->r6) {
        // 0x15146214: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_15146224;
    }
    goto skip_6;
    // 0x15146214: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_6:
    // 0x15146218: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x1514621C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_15146220:
    // 0x15146220: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_15146224:
    // 0x15146224: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15146228: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x1514622C: addu        $t8, $s0, $v0
    ctx->r24 = ADD32(ctx->r16, ctx->r2);
    // 0x15146230: swc1        $f2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f2.u32l;
    // 0x15146234: sll         $v1, $t1, 2
    ctx->r3 = S32(ctx->r9 << 2);
    // 0x15146238: swc1        $f2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f2.u32l;
    // 0x1514623C: addu        $t2, $a3, $v1
    ctx->r10 = ADD32(ctx->r7, ctx->r3);
    // 0x15146240: addu        $t9, $a3, $v0
    ctx->r25 = ADD32(ctx->r7, ctx->r2);
    // 0x15146244: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x15146248: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x1514624C: lwc1        $f18, 0x0($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X0);
    // 0x15146250: addu        $t3, $s0, $v1
    ctx->r11 = ADD32(ctx->r16, ctx->r3);
    // 0x15146254: div.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15146258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514625C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x15146260: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x15146264: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x15146268: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x1514626C: swc1        $f6, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f6.u32l;
    // 0x15146270: jal         0x151450B4
    // 0x15146274: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_151450B4(rdram, ctx);
        goto after_0;
    // 0x15146274: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_0:
    // 0x15146278: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x1514627C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15146280: jal         0x151450B4
    // 0x15146284: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_151450B4(rdram, ctx);
        goto after_1;
    // 0x15146284: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x15146288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1514628C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x15146290: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x15146294: jal         0x15145128
    // 0x15146298: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_15145128(rdram, ctx);
        goto after_2;
    // 0x15146298: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x1514629C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151462A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151462A4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x151462A8: jal         0x15145128
    // 0x151462AC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_15145128(rdram, ctx);
        goto after_3;
    // 0x151462AC: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x151462B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_151462B4:
    // 0x151462B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x151462B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x151462BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x151462C0: jr          $ra
    // 0x151462C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    return;
    // 0x151462C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_151B09BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B09BC: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x151B09C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151B09C4: sw          $a0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r4;
    // 0x151B09C8: sw          $a2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r6;
    // 0x151B09CC: sw          $a3, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r7;
    // 0x151B09D0: lw          $t6, 0xE0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE0);
    // 0x151B09D4: bne         $t6, $zero, L_151B09E4
    if (ctx->r14 != 0) {
        // 0x151B09D8: nop
    
            goto L_151B09E4;
    }
    // 0x151B09D8: nop

    // 0x151B09DC: b           L_151B0B78
    // 0x151B09E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B0B78;
    // 0x151B09E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B09E4:
    // 0x151B09E4: beq         $a1, $zero, L_151B0A20
    if (ctx->r5 == 0) {
        // 0x151B09E8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_151B0A20;
    }
    // 0x151B09E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x151B09EC: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x151B09F0: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x151B09F4: beq         $v0, $at, L_151B0A04
    if (ctx->r2 == ctx->r1) {
        // 0x151B09F8: addiu       $at, $zero, 0xA5
        ctx->r1 = ADD32(0, 0XA5);
            goto L_151B0A04;
    }
    // 0x151B09F8: addiu       $at, $zero, 0xA5
    ctx->r1 = ADD32(0, 0XA5);
    // 0x151B09FC: bne         $v0, $at, L_151B0A0C
    if (ctx->r2 != ctx->r1) {
        // 0x151B0A00: nop
    
            goto L_151B0A0C;
    }
    // 0x151B0A00: nop

L_151B0A04:
    // 0x151B0A04: b           L_151B0A20
    // 0x151B0A08: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_151B0A20;
    // 0x151B0A08: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_151B0A0C:
    // 0x151B0A0C: jal         0x15134070
    // 0x151B0A10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_15134070(rdram, ctx);
        goto after_0;
    // 0x151B0A10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x151B0A14: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151B0A18: b           L_151B0A20
    // 0x151B0A1C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_151B0A20;
    // 0x151B0A1C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151B0A20:
    // 0x151B0A20: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x151B0A24: bne         $v0, $at, L_151B0A34
    if (ctx->r2 != ctx->r1) {
        // 0x151B0A28: sll         $t7, $v0, 4
        ctx->r15 = S32(ctx->r2 << 4);
            goto L_151B0A34;
    }
    // 0x151B0A28: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x151B0A2C: b           L_151B0B78
    // 0x151B0A30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B0B78;
    // 0x151B0A30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_151B0A34:
    // 0x151B0A34: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x151B0A38: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x151B0A3C: lbu         $v1, 0x3FE6($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3FE6);
    // 0x151B0A40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x151B0A44: bnel        $v1, $at, L_151B0A58
    if (ctx->r3 != ctx->r1) {
        // 0x151B0A48: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_151B0A58;
    }
    goto skip_0;
    // 0x151B0A48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    skip_0:
    // 0x151B0A4C: b           L_151B0B78
    // 0x151B0A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_151B0B78;
    // 0x151B0A50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151B0A54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_151B0A58:
    // 0x151B0A58: bne         $v1, $at, L_151B0A68
    if (ctx->r3 != ctx->r1) {
        // 0x151B0A5C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_151B0A68;
    }
    // 0x151B0A5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x151B0A60: b           L_151B0A6C
    // 0x151B0A64: sb          $t8, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r24;
        goto L_151B0A6C;
    // 0x151B0A64: sb          $t8, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = ctx->r24;
L_151B0A68:
    // 0x151B0A68: sb          $zero, 0xD8($sp)
    MEM_B(0XD8, ctx->r29) = 0;
L_151B0A6C:
    // 0x151B0A6C: lw          $t9, 0xE0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE0);
    // 0x151B0A70: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x151B0A74: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x151B0A78: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x151B0A7C: lbu         $t0, 0x3B($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X3B);
    // 0x151B0A80: jal         0x151494E0
    // 0x151B0A84: sb          $t0, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r8;
    func_151494E0(rdram, ctx);
        goto after_1;
    // 0x151B0A84: sb          $t0, 0x38($sp)
    MEM_B(0X38, ctx->r29) = ctx->r8;
    after_1:
    // 0x151B0A88: lh          $t1, 0xEA($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XEA);
    // 0x151B0A8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x151B0A90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x151B0A94: bne         $t1, $at, L_151B0AA4
    if (ctx->r9 != ctx->r1) {
        // 0x151B0A98: lw          $t2, 0xE0($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XE0);
            goto L_151B0AA4;
    }
    // 0x151B0A98: lw          $t2, 0xE0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XE0);
    // 0x151B0A9C: b           L_151B0AAC
    // 0x151B0AA0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
        goto L_151B0AAC;
    // 0x151B0AA0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
L_151B0AA4:
    // 0x151B0AA4: lh          $a0, 0xEA($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XEA);
    // 0x151B0AA8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_151B0AAC:
    // 0x151B0AAC: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x151B0AB0: lbu         $t3, 0x3B($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X3B);
    // 0x151B0AB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x151B0AB8: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x151B0ABC: sb          $t3, 0x48($sp)
    MEM_B(0X48, ctx->r29) = ctx->r11;
    // 0x151B0AC0: swc1        $f4, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f4.u32l;
    // 0x151B0AC4: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x151B0AC8: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x151B0ACC: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x151B0AD0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x151B0AD4: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x151B0AD8: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x151B0ADC: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x151B0AE0: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x151B0AE4: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x151B0AE8: addiu       $v0, $sp, 0x68
    ctx->r2 = ADD32(ctx->r29, 0X68);
    // 0x151B0AEC: addiu       $v1, $sp, 0xC8
    ctx->r3 = ADD32(ctx->r29, 0XC8);
L_151B0AF0:
    // 0x151B0AF0: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x151B0AF4: sw          $zero, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = 0;
    // 0x151B0AF8: sw          $zero, -0x14($v0)
    MEM_W(-0X14, ctx->r2) = 0;
    // 0x151B0AFC: sw          $zero, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = 0;
    // 0x151B0B00: sw          $zero, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = 0;
    // 0x151B0B04: sw          $zero, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = 0;
    // 0x151B0B08: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x151B0B0C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x151B0B10: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151B0B14: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x151B0B18: sw          $zero, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = 0;
    // 0x151B0B1C: sw          $zero, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = 0;
    // 0x151B0B20: bne         $v0, $v1, L_151B0AF0
    if (ctx->r2 != ctx->r3) {
        // 0x151B0B24: sw          $zero, -0x1C($v0)
        MEM_W(-0X1C, ctx->r2) = 0;
            goto L_151B0AF0;
    }
    // 0x151B0B24: sw          $zero, -0x1C($v0)
    MEM_W(-0X1C, ctx->r2) = 0;
    // 0x151B0B28: lbu         $t6, 0xEF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XEF);
    // 0x151B0B2C: lw          $t7, 0xF0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF0);
    // 0x151B0B30: addiu       $t4, $zero, 0xF
    ctx->r12 = ADD32(0, 0XF);
    // 0x151B0B34: addiu       $t5, $zero, 0x98
    ctx->r13 = ADD32(0, 0X98);
    // 0x151B0B38: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x151B0B3C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x151B0B40: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x151B0B44: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x151B0B48: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x151B0B4C: jal         0x151491F4
    // 0x151B0B50: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_151491F4(rdram, ctx);
        goto after_2;
    // 0x151B0B50: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_2:
    // 0x151B0B54: beq         $v0, $zero, L_151B0B74
    if (ctx->r2 == 0) {
        // 0x151B0B58: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_151B0B74;
    }
    // 0x151B0B58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x151B0B5C: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x151B0B60: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x151B0B64: addiu       $a2, $zero, 0x98
    ctx->r6 = ADD32(0, 0X98);
    // 0x151B0B68: jal         0x10022EC0
    // 0x151B0B6C: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x151B0B6C: sw          $v0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r2;
    after_3:
    // 0x151B0B70: lw          $v1, 0xDC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XDC);
L_151B0B74:
    // 0x151B0B74: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_151B0B78:
    // 0x151B0B78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x151B0B7C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x151B0B80: jr          $ra
    // 0x151B0B84: nop

    return;
    return;
    // 0x151B0B84: nop

;}
RECOMP_FUNC void func_1000E40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000E40C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x1000E410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x1000E414: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x1000E418: slt         $at, $a1, $at
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x1000E41C: bne         $at, $zero, L_1000E42C
    if (ctx->r1 != 0) {
        // 0x1000E420: nop
    
            goto L_1000E42C;
    }
    // 0x1000E420: nop

    // 0x1000E424: b           L_1000E438
    // 0x1000E428: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
        goto L_1000E438;
    // 0x1000E428: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
L_1000E42C:
    // 0x1000E42C: bgez        $a1, L_1000E438
    if (SIGNED(ctx->r5) >= 0) {
        // 0x1000E430: nop
    
            goto L_1000E438;
    }
    // 0x1000E430: nop

    // 0x1000E434: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_1000E438:
    // 0x1000E438: jal         0x1000B1FC
    // 0x1000E43C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_1000B1FC(rdram, ctx);
        goto after_0;
    // 0x1000E43C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x1000E440: beq         $v0, $zero, L_1000E45C
    if (ctx->r2 == 0) {
        // 0x1000E444: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_1000E45C;
    }
    // 0x1000E444: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x1000E448: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x1000E44C: bgezl       $t6, L_1000E45C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x1000E450: sw          $a1, 0x2C($v0)
        MEM_W(0X2C, ctx->r2) = ctx->r5;
            goto L_1000E45C;
    }
    goto skip_0;
    // 0x1000E450: sw          $a1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r5;
    skip_0:
    // 0x1000E454: sw          $a1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r5;
    // 0x1000E458: sw          $a1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r5;
L_1000E45C:
    // 0x1000E45C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x1000E460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1000E464: jr          $ra
    // 0x1000E468: nop

    return;
    return;
    // 0x1000E468: nop

;}
RECOMP_FUNC void func_151C87AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151C87AC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x151C87B0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x151C87B4: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x151C87B8: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x151C87BC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x151C87C0: lbu         $t6, 0x86($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X86);
    // 0x151C87C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x151C87C8: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x151C87CC: bne         $t7, $zero, L_151C87D8
    if (ctx->r15 != 0) {
        // 0x151C87D0: nop
    
            goto L_151C87D8;
    }
    // 0x151C87D0: nop

    // 0x151C87D4: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
L_151C87D8:
    // 0x151C87D8: jr          $ra
    // 0x151C87DC: nop

    return;
    return;
    // 0x151C87DC: nop

;}
RECOMP_FUNC void func_15155F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15155F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15155F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15155F44: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x15155F48: jal         0x15155FD4
    // 0x15155F4C: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    func_15155FD4(rdram, ctx);
        goto after_0;
    // 0x15155F4C: lbu         $a0, 0x3E78($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X3E78);
    after_0:
    // 0x15155F50: beql        $v0, $zero, L_15155F84
    if (ctx->r2 == 0) {
        // 0x15155F54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15155F84;
    }
    goto skip_0;
    // 0x15155F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15155F58: lbu         $v1, 0x11($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X11);
    // 0x15155F5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15155F60: bnel        $v1, $at, L_15155F74
    if (ctx->r3 != ctx->r1) {
        // 0x15155F64: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_15155F74;
    }
    goto skip_1;
    // 0x15155F64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    skip_1:
    // 0x15155F68: b           L_15155F80
    // 0x15155F6C: sb          $zero, 0x11($v0)
    MEM_B(0X11, ctx->r2) = 0;
        goto L_15155F80;
    // 0x15155F6C: sb          $zero, 0x11($v0)
    MEM_B(0X11, ctx->r2) = 0;
    // 0x15155F70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_15155F74:
    // 0x15155F74: bne         $v1, $at, L_15155F80
    if (ctx->r3 != ctx->r1) {
        // 0x15155F78: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_15155F80;
    }
    // 0x15155F78: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x15155F7C: sb          $t6, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r14;
L_15155F80:
    // 0x15155F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15155F84:
    // 0x15155F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15155F88: jr          $ra
    // 0x15155F8C: nop

    return;
    return;
    // 0x15155F8C: nop

;}
RECOMP_FUNC void func_15063FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15063FA0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x15063FA4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x15063FA8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x15063FAC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x15063FB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15063FB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x15063FB8: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
    // 0x15063FBC: beq         $a1, $at, L_15063FE0
    if (ctx->r5 == ctx->r1) {
        // 0x15063FC0: mov.s       $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
            goto L_15063FE0;
    }
    // 0x15063FC0: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x15063FC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15063FC8: beq         $a1, $at, L_15063FF0
    if (ctx->r5 == ctx->r1) {
        // 0x15063FCC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_15063FF0;
    }
    // 0x15063FCC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x15063FD0: beql        $a1, $at, L_15063FF4
    if (ctx->r5 == ctx->r1) {
        // 0x15063FD4: lui         $at, 0xC130
        ctx->r1 = S32(0XC130 << 16);
            goto L_15063FF4;
    }
    goto skip_0;
    // 0x15063FD4: lui         $at, 0xC130
    ctx->r1 = S32(0XC130 << 16);
    skip_0:
    // 0x15063FD8: b           L_15064008
    // 0x15063FDC: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
        goto L_15064008;
    // 0x15063FDC: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
L_15063FE0:
    // 0x15063FE0: lui         $at, 0x41D8
    ctx->r1 = S32(0X41D8 << 16);
    // 0x15063FE4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15063FE8: b           L_15064008
    // 0x15063FEC: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
        goto L_15064008;
    // 0x15063FEC: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
L_15063FF0:
    // 0x15063FF0: lui         $at, 0xC130
    ctx->r1 = S32(0XC130 << 16);
L_15063FF4:
    // 0x15063FF4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15063FF8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x15063FFC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15064000: nop

    // 0x15064004: lw          $t6, 0x31C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X31C);
L_15064008:
    // 0x15064008: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506400C: lwc1        $f6, -0x6870($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6870);
    // 0x15064010: lwc1        $f4, 0x16C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X16C);
    // 0x15064014: swc1        $f14, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f14.u32l;
    // 0x15064018: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x1506401C: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x15064020: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x15064024: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x15064028: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x1506402C: jal         0x15047D60
    // 0x15064030: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x15064030: swc1        $f12, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x15064034: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x15064038: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x1506403C: mul.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x15064040: jal         0x15047C00
    // 0x15064044: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x15064044: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x15064048: lwc1        $f14, 0x5C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x1506404C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x15064050: lwc1        $f18, 0x64($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X64);
    // 0x15064054: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x15064058: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x1506405C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x15064060: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x15064064: lw          $t7, 0x31C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X31C);
    // 0x15064068: lwc1        $f4, 0x13C($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X13C);
    // 0x1506406C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15064070: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x15064074: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x15064078: lw          $t8, 0x31C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X31C);
    // 0x1506407C: lwc1        $f8, 0x140($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X140);
    // 0x15064080: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x15064084: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x15064088: lw          $t9, 0x31C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X31C);
    // 0x1506408C: lwc1        $f4, 0x144($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X144);
    // 0x15064090: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15064094: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x15064098: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x1506409C: lw          $v0, 0x31C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X31C);
    // 0x150640A0: lbu         $t0, 0x109($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X109);
    // 0x150640A4: bnel        $t0, $zero, L_150640C8
    if (ctx->r8 != 0) {
        // 0x150640A8: lwc1        $f18, 0xB8($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0XB8);
            goto L_150640C8;
    }
    goto skip_1;
    // 0x150640A8: lwc1        $f18, 0xB8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XB8);
    skip_1:
    // 0x150640AC: lwc1        $f2, 0x170($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X170);
    // 0x150640B0: lwc1        $f8, 0x16C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X16C);
    // 0x150640B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x150640B8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x150640BC: b           L_15064130
    // 0x150640C0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
        goto L_15064130;
    // 0x150640C0: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x150640C4: lwc1        $f18, 0xB8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XB8);
L_150640C8:
    // 0x150640C8: lwc1        $f10, 0xC0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC0);
    // 0x150640CC: lwc1        $f6, 0xBC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XBC);
    // 0x150640D0: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x150640D4: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x150640D8: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x150640DC: sub.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x150640E0: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x150640E4: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x150640E8: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x150640EC: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x150640F0: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x150640F4: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x150640F8: jal         0x150484A0
    // 0x150640FC: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    func_150484A0(rdram, ctx);
        goto after_2;
    // 0x150640FC: sqrt.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = sqrtf(ctx->f0.fl);
    after_2:
    // 0x15064100: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15064104: lwc1        $f8, -0x686C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X686C);
    // 0x15064108: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x1506410C: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x15064110: mul.s       $f2, $f0, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15064114: jal         0x150484A0
    // 0x15064118: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    func_150484A0(rdram, ctx);
        goto after_3;
    // 0x15064118: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x1506411C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15064120: lwc1        $f10, -0x6868($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X6868);
    // 0x15064124: lwc1        $f2, 0x54($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X54);
    // 0x15064128: mul.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x1506412C: nop

L_15064130:
    // 0x15064130: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15064134: lwc1        $f18, -0x6864($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X6864);
    // 0x15064138: addiu       $t5, $sp, 0x80
    ctx->r13 = ADD32(ctx->r29, 0X80);
    // 0x1506413C: addiu       $t6, $sp, 0x7C
    ctx->r14 = ADD32(ctx->r29, 0X7C);
    // 0x15064140: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x15064144: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x15064148: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x1506414C: lw          $a1, 0x78($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X78);
    // 0x15064150: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x15064154: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    // 0x15064158: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x1506415C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x15064160: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x15064164: jal         0x1505A184
    // 0x15064168: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    func_1505A184(rdram, ctx);
        goto after_4;
    // 0x15064168: andi        $a0, $t3, 0xFFFF
    ctx->r4 = ctx->r11 & 0XFFFF;
    after_4:
    // 0x1506416C: lwc1        $f0, 0x80($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X80);
    // 0x15064170: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x15064174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x15064178: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x1506417C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x15064180: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x15064184: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x15064188: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x1506418C: addiu       $t9, $sp, 0x6C
    ctx->r25 = ADD32(ctx->r29, 0X6C);
    // 0x15064190: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x15064194: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x15064198: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x1506419C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x150641A0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x150641A4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x150641A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x150641AC: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x150641B0: lwc1        $f14, 0x84($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X84);
    // 0x150641B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x150641B8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x150641BC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x150641C0: jal         0x1506C460
    // 0x150641C4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_1506C460(rdram, ctx);
        goto after_5;
    // 0x150641C4: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x150641C8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x150641CC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x150641D0: jr          $ra
    // 0x150641D4: nop

    return;
    return;
    // 0x150641D4: nop

;}
RECOMP_FUNC void func_1519C09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1519C09C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x1519C0A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x1519C0A4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x1519C0A8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x1519C0AC: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x1519C0B0: sw          $a3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r7;
    // 0x1519C0B4: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x1519C0B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1519C0BC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x1519C0C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1519C0C4: lui         $at, 0x42DC
    ctx->r1 = S32(0X42DC << 16);
    // 0x1519C0C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x1519C0CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x1519C0D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1519C0D4: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x1519C0D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1519C0DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x1519C0E0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x1519C0E4: lwc1        $f4, -0x7508($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X7508);
    // 0x1519C0E8: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x1519C0EC: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x1519C0F0: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x1519C0F4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x1519C0F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1519C0FC: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x1519C100: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x1519C104: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x1519C108: addiu       $t9, $zero, 0x12C
    ctx->r25 = ADD32(0, 0X12C);
    // 0x1519C10C: addiu       $t0, $zero, 0x22
    ctx->r8 = ADD32(0, 0X22);
    // 0x1519C110: sb          $t7, 0x6C($sp)
    MEM_B(0X6C, ctx->r29) = ctx->r15;
    // 0x1519C114: sb          $t8, 0x6D($sp)
    MEM_B(0X6D, ctx->r29) = ctx->r24;
    // 0x1519C118: sh          $t9, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r25;
    // 0x1519C11C: sb          $t0, 0x70($sp)
    MEM_B(0X70, ctx->r29) = ctx->r8;
    // 0x1519C120: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x1519C124: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x1519C128: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x1519C12C: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x1519C130: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x1519C134: swc1        $f16, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f16.u32l;
    // 0x1519C138: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x1519C13C: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x1519C140: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x1519C144: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x1519C148: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1519C14C: lbu         $t1, 0x8F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X8F);
    // 0x1519C150: lbu         $t0, 0x8B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X8B);
    // 0x1519C154: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x1519C158: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1519C15C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x1519C160: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1519C164: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x1519C168: lwc1        $f16, 0x4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X4);
    // 0x1519C16C: lbu         $t4, 0x93($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X93);
    // 0x1519C170: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x1519C174: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x1519C178: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x1519C17C: lbu         $a2, 0x83($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X83);
    // 0x1519C180: lbu         $a3, 0x87($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X87);
    // 0x1519C184: mfc1        $t6, $f18
    ctx->r14 = (int32_t)ctx->f18.u32l;
    // 0x1519C188: nop

    // 0x1519C18C: sw          $t6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r14;
    // 0x1519C190: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x1519C194: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x1519C198: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x1519C19C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x1519C1A0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x1519C1A4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x1519C1A8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x1519C1AC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1519C1B0: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x1519C1B4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x1519C1B8: jal         0x151602C0
    // 0x1519C1BC: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    func_151602C0(rdram, ctx);
        goto after_0;
    // 0x1519C1BC: sw          $t9, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r25;
    after_0:
    // 0x1519C1C0: beq         $v0, $zero, L_1519C1EC
    if (ctx->r2 == 0) {
        // 0x1519C1C4: sw          $v0, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r2;
            goto L_1519C1EC;
    }
    // 0x1519C1C4: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x1519C1C8: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x1519C1CC: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x1519C1D0: jal         0x10022EC0
    // 0x1519C1D4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x1519C1D4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_1:
    // 0x1519C1D8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x1519C1DC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x1519C1E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x1519C1E4: jal         0x10022EC0
    // 0x1519C1E8: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x1519C1E8: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_2:
L_1519C1EC:
    // 0x1519C1EC: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
    // 0x1519C1F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x1519C1F4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x1519C1F8: jr          $ra
    // 0x1519C1FC: nop

    return;
    return;
    // 0x1519C1FC: nop

;}
RECOMP_FUNC void func_1000B8B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1000B8B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x1000B8BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x1000B8C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x1000B8C4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x1000B8C8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x1000B8CC: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x1000B8D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x1000B8D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x1000B8D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1000B8DC: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x1000B8E0: lw          $t7, -0x1610($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1610);
    // 0x1000B8E4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x1000B8E8: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x1000B8EC: bnel        $t7, $at, L_1000B9F0
    if (ctx->r15 != ctx->r1) {
        // 0x1000B8F0: lwc1        $f4, 0x38($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
            goto L_1000B9F0;
    }
    goto skip_0;
    // 0x1000B8F0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    skip_0:
    // 0x1000B8F4: beq         $t8, $zero, L_1000B930
    if (ctx->r24 == 0) {
        // 0x1000B8F8: lui         $v0, 0x8004
        ctx->r2 = S32(0X8004 << 16);
            goto L_1000B930;
    }
    // 0x1000B8F8: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x1000B8FC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x1000B900: lw          $t9, 0x1F0C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1F0C);
    // 0x1000B904: bne         $t9, $zero, L_1000B930
    if (ctx->r25 != 0) {
        // 0x1000B908: nop
    
            goto L_1000B930;
    }
    // 0x1000B908: nop

    // 0x1000B90C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x1000B910: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000B914: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    // 0x1000B918: jal         0x1000E46C
    // 0x1000B91C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_1000E46C(rdram, ctx);
        goto after_0;
    // 0x1000B91C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x1000B920: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x1000B924: and         $t0, $s0, $at
    ctx->r8 = ctx->r16 & ctx->r1;
    // 0x1000B928: b           L_1000B9A4
    // 0x1000B92C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
        goto L_1000B9A4;
    // 0x1000B92C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_1000B930:
    // 0x1000B930: lw          $v0, 0x1F0C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1F0C);
    // 0x1000B934: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x1000B938: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x1000B93C: beq         $v0, $zero, L_1000B9A4
    if (ctx->r2 == 0) {
        // 0x1000B940: nop
    
            goto L_1000B9A4;
    }
    // 0x1000B940: nop

    // 0x1000B944: lw          $t1, 0x1F08($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1F08);
    // 0x1000B948: div         $zero, $t1, $v0
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r2)));
    // 0x1000B94C: bne         $v0, $zero, L_1000B958
    if (ctx->r2 != 0) {
        // 0x1000B950: nop
    
            goto L_1000B958;
    }
    // 0x1000B950: nop

    // 0x1000B954: break       7
    do_break(268482900);
L_1000B958:
    // 0x1000B958: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1000B95C: bne         $v0, $at, L_1000B970
    if (ctx->r2 != ctx->r1) {
        // 0x1000B960: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1000B970;
    }
    // 0x1000B960: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1000B964: bne         $t1, $at, L_1000B970
    if (ctx->r9 != ctx->r1) {
        // 0x1000B968: nop
    
            goto L_1000B970;
    }
    // 0x1000B968: nop

    // 0x1000B96C: break       6
    do_break(268482924);
L_1000B970:
    // 0x1000B970: mflo        $a1
    ctx->r5 = lo;
    // 0x1000B974: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x1000B978: nop

    // 0x1000B97C: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x1000B980: mflo        $t2
    ctx->r10 = lo;
    // 0x1000B984: slti        $at, $t2, 0x65
    ctx->r1 = SIGNED(ctx->r10) < 0X65 ? 1 : 0;
    // 0x1000B988: bne         $at, $zero, L_1000B994
    if (ctx->r1 != 0) {
        // 0x1000B98C: or          $a1, $t2, $zero
        ctx->r5 = ctx->r10 | 0;
            goto L_1000B994;
    }
    // 0x1000B98C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x1000B990: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
L_1000B994:
    // 0x1000B994: jal         0x1000E588
    // 0x1000B998: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    func_1000E588(rdram, ctx);
        goto after_1;
    // 0x1000B998: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    after_1:
    // 0x1000B99C: ori         $t3, $s0, 0x1
    ctx->r11 = ctx->r16 | 0X1;
    // 0x1000B9A0: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
L_1000B9A4:
    // 0x1000B9A4: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000B9A8: sw          $zero, 0x1F08($at)
    MEM_W(0X1F08, ctx->r1) = 0;
    // 0x1000B9AC: lui         $at, 0x8004
    ctx->r1 = S32(0X8004 << 16);
    // 0x1000B9B0: andi        $t4, $s0, 0x2
    ctx->r12 = ctx->r16 & 0X2;
    // 0x1000B9B4: bne         $t4, $zero, L_1000B9E4
    if (ctx->r12 != 0) {
        // 0x1000B9B8: sw          $zero, 0x1F0C($at)
        MEM_W(0X1F0C, ctx->r1) = 0;
            goto L_1000B9E4;
    }
    // 0x1000B9B8: sw          $zero, 0x1F0C($at)
    MEM_W(0X1F0C, ctx->r1) = 0;
    // 0x1000B9BC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x1000B9C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1000B9C4: jal         0x1000DF68
    // 0x1000B9C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_1000DF68(rdram, ctx);
        goto after_2;
    // 0x1000B9C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x1000B9CC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x1000B9D0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    // 0x1000B9D4: jal         0x1000DF68
    // 0x1000B9D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_1000DF68(rdram, ctx);
        goto after_3;
    // 0x1000B9D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x1000B9DC: ori         $t5, $s0, 0x2
    ctx->r13 = ctx->r16 | 0X2;
    // 0x1000B9E0: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
L_1000B9E4:
    // 0x1000B9E4: b           L_1000BA04
    // 0x1000B9E8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_1000BA04;
    // 0x1000B9E8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x1000B9EC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
L_1000B9F0:
    // 0x1000B9F0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x1000B9F4: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x1000B9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x1000B9FC: jal         0x1000C530
    // 0x1000BA00: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_1000C530(rdram, ctx);
        goto after_4;
    // 0x1000BA00: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
L_1000BA04:
    // 0x1000BA04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1000BA08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x1000BA0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x1000BA10: jr          $ra
    // 0x1000BA14: nop

    return;
    return;
    // 0x1000BA14: nop

;}
RECOMP_FUNC void func_151D3D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D3D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x151D3D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D3D58: lh          $t6, 0x170($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X170);
    // 0x151D3D5C: addiu       $v0, $a0, 0x170
    ctx->r2 = ADD32(ctx->r4, 0X170);
    // 0x151D3D60: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x151D3D64: blezl       $t6, L_151D3DDC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x151D3D68: lw          $at, 0x50($a0)
        ctx->r1 = MEM_W(ctx->r4, 0X50);
            goto L_151D3DDC;
    }
    goto skip_0;
    // 0x151D3D68: lw          $at, 0x50($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X50);
    skip_0:
    // 0x151D3D6C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x151D3D70: lwc1        $f6, -0x165C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x151D3D74: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151D3D78: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x151D3D7C: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x151D3D80: swc1        $f16, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f16.u32l;
    // 0x151D3D84: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x151D3D88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x151D3D8C: jal         0x15144B68
    // 0x151D3D90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_15144B68(rdram, ctx);
        goto after_0;
    // 0x151D3D90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x151D3D94: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151D3D98: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x151D3D9C: jal         0x15047D60
    // 0x151D3DA0: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x151D3DA0: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    after_1:
    // 0x151D3DA4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x151D3DA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x151D3DAC: lui         $t8, 0x800C
    ctx->r24 = S32(0X800C << 16);
    // 0x151D3DB0: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x151D3DB4: lwc1        $f6, 0x54($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X54);
    // 0x151D3DB8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x151D3DBC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x151D3DC0: swc1        $f10, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f10.u32l;
    // 0x151D3DC4: lw          $t8, -0x161C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X161C);
    // 0x151D3DC8: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x151D3DCC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x151D3DD0: b           L_151D3DF0
    // 0x151D3DD4: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
        goto L_151D3DF0;
    // 0x151D3DD4: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x151D3DD8: lw          $at, 0x50($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X50);
L_151D3DDC:
    // 0x151D3DDC: lw          $t1, 0x54($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X54);
    // 0x151D3DE0: sw          $at, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r1;
    // 0x151D3DE4: lw          $at, 0x58($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X58);
    // 0x151D3DE8: sw          $t1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r9;
    // 0x151D3DEC: sw          $at, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r1;
L_151D3DF0:
    // 0x151D3DF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x151D3DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D3DF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x151D3DFC: jr          $ra
    // 0x151D3E00: nop

    return;
    return;
    // 0x151D3E00: nop

;}
RECOMP_FUNC void func_15076B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15076B94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15076B98: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15076B9C: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x15076BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15076BA4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x15076BA8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x15076BAC: addiu       $t7, $t7, -0x3D30
    ctx->r15 = ADD32(ctx->r15, -0X3D30);
    // 0x15076BB0: addiu       $at, $zero, 0x32C
    ctx->r1 = ADD32(0, 0X32C);
    // 0x15076BB4: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x15076BB8: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x15076BBC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x15076BC0: lbu         $t9, 0x1891($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X1891);
    // 0x15076BC4: mflo        $v1
    ctx->r3 = lo;
    // 0x15076BC8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15076BCC: beq         $t9, $zero, L_15076BD8
    if (ctx->r25 == 0) {
        // 0x15076BD0: lui         $t1, 0x800D
        ctx->r9 = S32(0X800D << 16);
            goto L_15076BD8;
    }
    // 0x15076BD0: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15076BD4: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
L_15076BD8:
    // 0x15076BD8: beq         $v1, $zero, L_15076C6C
    if (ctx->r3 == 0) {
        // 0x15076BDC: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_15076C6C;
    }
    // 0x15076BDC: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x15076BE0: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x15076BE4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15076BE8: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x15076BEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15076BF0: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x15076BF4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15076BF8: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x15076BFC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15076C00: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x15076C04: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x15076C08: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
L_15076C0C:
    // 0x15076C0C: lbu         $t2, -0x328($v0)
    ctx->r10 = MEM_BU(ctx->r2, -0X328);
    // 0x15076C10: bnel        $a0, $t2, L_15076C64
    if (ctx->r4 != ctx->r10) {
        // 0x15076C14: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_15076C64;
    }
    goto skip_0;
    // 0x15076C14: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_0:
    // 0x15076C18: lbu         $t3, -0x162($v0)
    ctx->r11 = MEM_BU(ctx->r2, -0X162);
    // 0x15076C1C: beql        $t3, $zero, L_15076C64
    if (ctx->r11 == 0) {
        // 0x15076C20: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_15076C64;
    }
    goto skip_1;
    // 0x15076C20: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    skip_1:
    // 0x15076C24: jal         0x15075548
    // 0x15076C28: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_15075548(rdram, ctx);
        goto after_0;
    // 0x15076C28: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x15076C2C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x15076C30: addiu       $a1, $a1, 0x154C
    ctx->r5 = ADD32(ctx->r5, 0X154C);
    // 0x15076C34: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x15076C38: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x15076C3C: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x15076C40: sb          $t4, 0x223($t5)
    MEM_B(0X223, ctx->r13) = ctx->r12;
    // 0x15076C44: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x15076C48: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x15076C4C: addiu       $t8, $zero, 0x3E8
    ctx->r24 = ADD32(0, 0X3E8);
    // 0x15076C50: sb          $t6, 0x222($t7)
    MEM_B(0X222, ctx->r15) = ctx->r14;
    // 0x15076C54: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x15076C58: b           L_15076C6C
    // 0x15076C5C: sh          $t8, 0x21C($t9)
    MEM_H(0X21C, ctx->r25) = ctx->r24;
        goto L_15076C6C;
    // 0x15076C5C: sh          $t8, 0x21C($t9)
    MEM_H(0X21C, ctx->r25) = ctx->r24;
    // 0x15076C60: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_15076C64:
    // 0x15076C64: bne         $v1, $zero, L_15076C0C
    if (ctx->r3 != 0) {
        // 0x15076C68: addiu       $v0, $v0, -0x32C
        ctx->r2 = ADD32(ctx->r2, -0X32C);
            goto L_15076C0C;
    }
    // 0x15076C68: addiu       $v0, $v0, -0x32C
    ctx->r2 = ADD32(ctx->r2, -0X32C);
L_15076C6C:
    // 0x15076C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15076C70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15076C74: jr          $ra
    // 0x15076C78: nop

    return;
    return;
    // 0x15076C78: nop

;}
RECOMP_FUNC void func_150C4B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150C4B60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x150C4B64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150C4B68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x150C4B6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x150C4B70: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x150C4B74: lbu         $v0, 0x2B($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2B);
    // 0x150C4B78: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x150C4B7C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x150C4B80: bnel        $v0, $at, L_150C4BA0
    if (ctx->r2 != ctx->r1) {
        // 0x150C4B84: addiu       $at, $zero, 0x56
        ctx->r1 = ADD32(0, 0X56);
            goto L_150C4BA0;
    }
    goto skip_0;
    // 0x150C4B84: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
    skip_0:
    // 0x150C4B88: lbu         $t6, 0x3E($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X3E);
    // 0x150C4B8C: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x150C4B90: andi        $t7, $t6, 0xFFFD
    ctx->r15 = ctx->r14 & 0XFFFD;
    // 0x150C4B94: b           L_150C4BD8
    // 0x150C4B98: sb          $t7, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r15;
        goto L_150C4BD8;
    // 0x150C4B98: sb          $t7, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r15;
    // 0x150C4B9C: addiu       $at, $zero, 0x56
    ctx->r1 = ADD32(0, 0X56);
L_150C4BA0:
    // 0x150C4BA0: bne         $v0, $at, L_150C4BC0
    if (ctx->r2 != ctx->r1) {
        // 0x150C4BA4: lw          $t0, 0x20($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X20);
            goto L_150C4BC0;
    }
    // 0x150C4BA4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x150C4BA8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x150C4BAC: lbu         $t8, 0x3E($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X3E);
    // 0x150C4BB0: addiu       $a2, $a2, 0x28
    ctx->r6 = ADD32(ctx->r6, 0X28);
    // 0x150C4BB4: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x150C4BB8: b           L_150C4BD8
    // 0x150C4BBC: sb          $t9, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r25;
        goto L_150C4BD8;
    // 0x150C4BBC: sb          $t9, 0x16($a2)
    MEM_B(0X16, ctx->r6) = ctx->r25;
L_150C4BC0:
    // 0x150C4BC0: addiu       $a2, $t0, 0x28
    ctx->r6 = ADD32(ctx->r8, 0X28);
    // 0x150C4BC4: addiu       $a3, $a2, 0x4
    ctx->r7 = ADD32(ctx->r6, 0X4);
    // 0x150C4BC8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x150C4BCC: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x150C4BD0: jal         0x15149514
    // 0x150C4BD4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_15149514(rdram, ctx);
        goto after_0;
    // 0x150C4BD4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_0:
L_150C4BD8:
    // 0x150C4BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x150C4BDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x150C4BE0: jr          $ra
    // 0x150C4BE4: nop

    return;
    return;
    // 0x150C4BE4: nop

;}
RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x10001000: lui         $t0, 0x8003
    ctx->r8 = S32(0X8003 << 16);
    // 0x10001004: lui         $t1, 0x1
    ctx->r9 = S32(0X1 << 16);
    // 0x10001008: addiu       $t0, $t0, -0x2B50
    ctx->r8 = ADD32(ctx->r8, -0X2B50);
    // 0x1000100C: ori         $t1, $t1, 0x6690
    ctx->r9 = ctx->r9 | 0X6690;
L_10001010:
    // 0x10001010: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x10001014: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x10001018: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x1000101C: bne         $t1, $zero, L_10001010
    if (ctx->r9 != 0) {
        // 0x10001020: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_10001010;
    }
    // 0x10001020: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x10001024: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x10001028: lui         $sp, 0x8003
    ctx->r29 = S32(0X8003 << 16);
    // 0x1000102C: addiu       $t2, $t2, 0x5AB0
    ctx->r10 = ADD32(ctx->r10, 0X5AB0);
    // 0x10001030: jr          $t2
    // 0x10001034: addiu       $sp, $sp, 0x14B0
    ctx->r29 = ADD32(ctx->r29, 0X14B0);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    return;
    // 0x10001034: addiu       $sp, $sp, 0x14B0
    ctx->r29 = ADD32(ctx->r29, 0X14B0);
    // 0x10001038: nop

    // 0x1000103C: nop

    // 0x10001040: nop

    // 0x10001044: nop

    // 0x10001048: nop

    // 0x1000104C: nop

;}
RECOMP_FUNC void func_151D8FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D8FB0: addiu       $v0, $zero, 0x95
    ctx->r2 = ADD32(0, 0X95);
    // 0x151D8FB4: jr          $ra
    // 0x151D8FB8: nop

    return;
    return;
    // 0x151D8FB8: nop

;}
RECOMP_FUNC void func_15157F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15157F80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x15157F84: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x15157F88: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x15157F8C: lui         $t6, 0xDA38
    ctx->r14 = S32(0XDA38 << 16);
    // 0x15157F90: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x15157F94: addiu       $t7, $t7, -0x6B90
    ctx->r15 = ADD32(ctx->r15, -0X6B90);
    // 0x15157F98: ori         $t6, $t6, 0x3
    ctx->r14 = ctx->r14 | 0X3;
    // 0x15157F9C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x15157FA0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x15157FA4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15157FA8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x15157FAC: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x15157FB0: addiu       $t0, $t0, -0x33F0
    ctx->r8 = ADD32(ctx->r8, -0X33F0);
    // 0x15157FB4: lui         $t8, 0xDA38
    ctx->r24 = S32(0XDA38 << 16);
    // 0x15157FB8: sll         $t9, $a2, 6
    ctx->r25 = S32(ctx->r6 << 6);
    // 0x15157FBC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x15157FC0: ori         $t8, $t8, 0x7
    ctx->r24 = ctx->r24 | 0X7;
    // 0x15157FC4: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x15157FC8: sw          $t1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r9;
    // 0x15157FCC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x15157FD0: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x15157FD4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x15157FD8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x15157FDC: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x15157FE0: jr          $ra
    // 0x15157FE4: nop

    return;
    return;
    // 0x15157FE4: nop

;}
RECOMP_FUNC void func_1515AF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1515AF90: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x1515AF94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x1515AF98: sw          $a0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r4;
    // 0x1515AF9C: jal         0x150ADA20
    // 0x1515AFA0: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x1515AFA0: nop

    after_0:
    // 0x1515AFA4: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x1515AFA8: bne         $t6, $zero, L_1515B20C
    if (ctx->r14 != 0) {
        // 0x1515AFAC: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_1515B20C;
    }
    // 0x1515AFAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1515AFB0: lh          $v0, 0xD2($sp)
    ctx->r2 = MEM_H(ctx->r29, 0XD2);
    // 0x1515AFB4: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x1515AFB8: lw          $v1, -0x4010($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4010);
    // 0x1515AFBC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x1515AFC0: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x1515AFC4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1515AFC8: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x1515AFCC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x1515AFD0: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x1515AFD4: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x1515AFD8: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x1515AFDC: addiu       $t0, $t9, 0x2F8
    ctx->r8 = ADD32(ctx->r25, 0X2F8);
    // 0x1515AFE0: sb          $t7, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = ctx->r15;
    // 0x1515AFE4: sw          $t0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r8;
    // 0x1515AFE8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515AFEC: addu        $t1, $v1, $t8
    ctx->r9 = ADD32(ctx->r3, ctx->r24);
    // 0x1515AFF0: lwc1        $f4, 0x380($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X380);
    // 0x1515AFF4: lwc1        $f6, 0x6420($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6420);
    // 0x1515AFF8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x1515AFFC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x1515B000: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x1515B004: nop

    // 0x1515B008: sw          $t3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r11;
    // 0x1515B00C: jal         0x150ADA20
    // 0x1515B010: nop

    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x1515B010: nop

    after_1:
    // 0x1515B014: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x1515B018: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1515B01C: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x1515B020: mfhi        $t4
    ctx->r12 = hi;
    // 0x1515B024: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x1515B028: addiu       $t7, $t6, -0x14
    ctx->r15 = ADD32(ctx->r14, -0X14);
    // 0x1515B02C: jal         0x150ADA68
    // 0x1515B030: sh          $t7, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r15;
    func_150ADA68(rdram, ctx);
        goto after_2;
    // 0x1515B030: sh          $t7, 0xA8($sp)
    MEM_H(0XA8, ctx->r29) = ctx->r15;
    after_2:
    // 0x1515B034: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B038: lwc1        $f16, 0x6424($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6424);
    // 0x1515B03C: lui         $at, 0x42D6
    ctx->r1 = S32(0X42D6 << 16);
    // 0x1515B040: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x1515B044: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x1515B048: lbu         $a0, 0xA9($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XA9);
    // 0x1515B04C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x1515B050: jal         0x151423D8
    // 0x1515B054: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x1515B054: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x1515B058: lh          $a0, 0xA8($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XA8);
    // 0x1515B05C: swc1        $f0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f0.u32l;
    // 0x1515B060: addiu       $a0, $a0, -0x40
    ctx->r4 = ADD32(ctx->r4, -0X40);
    // 0x1515B064: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x1515B068: jal         0x151423D8
    // 0x1515B06C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x1515B06C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_4:
    // 0x1515B070: lwc1        $f2, 0xA4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x1515B074: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x1515B078: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x1515B07C: mul.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x1515B080: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x1515B084: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B088: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x1515B08C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x1515B090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1515B094: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    // 0x1515B098: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1515B09C: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x1515B0A0: lwc1        $f18, 0x8($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X8);
    // 0x1515B0A4: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1515B0A8: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x1515B0AC: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x1515B0B0: lwc1        $f16, 0x6428($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6428);
    // 0x1515B0B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B0B8: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1515B0BC: lwc1        $f18, 0x642C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X642C);
    // 0x1515B0C0: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x1515B0C4: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x1515B0C8: sb          $zero, 0x94($sp)
    MEM_B(0X94, ctx->r29) = 0;
    // 0x1515B0CC: sb          $zero, 0x95($sp)
    MEM_B(0X95, ctx->r29) = 0;
    // 0x1515B0D0: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x1515B0D4: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x1515B0D8: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x1515B0DC: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x1515B0E0: jal         0x1504697C
    // 0x1515B0E4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    func_1504697C(rdram, ctx);
        goto after_5;
    // 0x1515B0E4: lw          $a2, 0x4($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X4);
    after_5:
    // 0x1515B0E8: beq         $v0, $zero, L_1515B0F8
    if (ctx->r2 == 0) {
        // 0x1515B0EC: lwc1        $f6, 0x78($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
            goto L_1515B0F8;
    }
    // 0x1515B0EC: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x1515B0F0: b           L_1515B0FC
    // 0x1515B0F4: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
        goto L_1515B0FC;
    // 0x1515B0F4: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
L_1515B0F8:
    // 0x1515B0F8: sb          $zero, 0xAB($sp)
    MEM_B(0XAB, ctx->r29) = 0;
L_1515B0FC:
    // 0x1515B0FC: lbu         $t9, 0xAB($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XAB);
    // 0x1515B100: lw          $t0, 0xB0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB0);
    // 0x1515B104: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x1515B108: beq         $t9, $zero, L_1515B17C
    if (ctx->r25 == 0) {
        // 0x1515B10C: addiu       $a0, $sp, 0x3C
        ctx->r4 = ADD32(ctx->r29, 0X3C);
            goto L_1515B17C;
    }
    // 0x1515B10C: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x1515B110: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x1515B114: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1515B118: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B11C: lwc1        $f16, 0x6430($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6430);
    // 0x1515B120: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x1515B124: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x1515B128: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x1515B12C: sb          $zero, 0x65($sp)
    MEM_B(0X65, ctx->r29) = 0;
    // 0x1515B130: sb          $zero, 0x64($sp)
    MEM_B(0X64, ctx->r29) = 0;
    // 0x1515B134: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x1515B138: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x1515B13C: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x1515B140: lwc1        $f18, 0x4($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X4);
    // 0x1515B144: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x1515B148: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x1515B14C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x1515B150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x1515B154: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    // 0x1515B158: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x1515B15C: jal         0x1504697C
    // 0x1515B160: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    func_1504697C(rdram, ctx);
        goto after_6;
    // 0x1515B160: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x1515B164: beq         $v0, $zero, L_1515B178
    if (ctx->r2 == 0) {
        // 0x1515B168: lwc1        $f0, 0x38($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
            goto L_1515B178;
    }
    // 0x1515B168: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x1515B16C: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x1515B170: b           L_1515B17C
    // 0x1515B174: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
        goto L_1515B17C;
    // 0x1515B174: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
L_1515B178:
    // 0x1515B178: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
L_1515B17C:
    // 0x1515B17C: jal         0x150ADA68
    // 0x1515B180: nop

    func_150ADA68(rdram, ctx);
        goto after_7;
    // 0x1515B180: nop

    after_7:
    // 0x1515B184: lui         $at, 0x4343
    ctx->r1 = S32(0X4343 << 16);
    // 0x1515B188: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1515B18C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1515B190: lwc1        $f16, 0x6434($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6434);
    // 0x1515B194: lbu         $t1, 0xAB($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0XAB);
    // 0x1515B198: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x1515B19C: mul.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x1515B1A0: swc1        $f18, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f18.u32l;
    // 0x1515B1A4: beq         $t1, $zero, L_1515B20C
    if (ctx->r9 == 0) {
        // 0x1515B1A8: swc1        $f4, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
            goto L_1515B20C;
    }
    // 0x1515B1A8: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x1515B1AC: jal         0x150ADA20
    // 0x1515B1B0: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x1515B1B0: nop

    after_8:
    // 0x1515B1B4: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x1515B1B8: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1515B1BC: mfhi        $a0
    ctx->r4 = hi;
    // 0x1515B1C0: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    // 0x1515B1C4: sll         $t2, $a0, 16
    ctx->r10 = S32(ctx->r4 << 16);
    // 0x1515B1C8: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x1515B1CC: addiu       $t5, $zero, 0x18
    ctx->r13 = ADD32(0, 0X18);
    // 0x1515B1D0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x1515B1D4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x1515B1D8: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x1515B1DC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x1515B1E0: sra         $a0, $t2, 16
    ctx->r4 = S32(SIGNED(ctx->r10) >> 16);
    // 0x1515B1E4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x1515B1E8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x1515B1EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1515B1F0: jal         0x151491F4
    // 0x1515B1F4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_9;
    // 0x1515B1F4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_9:
    // 0x1515B1F8: beq         $v0, $zero, L_1515B20C
    if (ctx->r2 == 0) {
        // 0x1515B1FC: addiu       $a0, $v0, 0x28
        ctx->r4 = ADD32(ctx->r2, 0X28);
            goto L_1515B20C;
    }
    // 0x1515B1FC: addiu       $a0, $v0, 0x28
    ctx->r4 = ADD32(ctx->r2, 0X28);
    // 0x1515B200: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x1515B204: jal         0x10022EC0
    // 0x1515B208: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x1515B208: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_10:
L_1515B20C:
    // 0x1515B20C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x1515B210: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    // 0x1515B214: jr          $ra
    // 0x1515B218: nop

    return;
    return;
    // 0x1515B218: nop

;}
RECOMP_FUNC void func_150461D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150461D0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x150461D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x150461D8: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x150461DC: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x150461E0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x150461E4: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x150461E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x150461EC: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x150461F0: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x150461F4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x150461F8: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x150461FC: or          $t3, $s0, $zero
    ctx->r11 = ctx->r16 | 0;
    // 0x15046200: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x15046204: addiu       $t2, $s0, 0x24
    ctx->r10 = ADD32(ctx->r16, 0X24);
    // 0x15046208: addiu       $t4, $sp, 0x28
    ctx->r12 = ADD32(ctx->r29, 0X28);
    // 0x1504620C: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x15046210: bc1f        L_1504622C
    if (!c1cs) {
        // 0x15046214: addiu       $t6, $s0, 0x24
        ctx->r14 = ADD32(ctx->r16, 0X24);
            goto L_1504622C;
    }
    // 0x15046214: addiu       $t6, $s0, 0x24
    ctx->r14 = ADD32(ctx->r16, 0X24);
    // 0x15046218: lbu         $t7, 0x1C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1C);
    // 0x1504621C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15046220: andi        $t8, $t7, 0xFFFD
    ctx->r24 = ctx->r15 & 0XFFFD;
    // 0x15046224: b           L_1504644C
    // 0x15046228: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
        goto L_1504644C;
    // 0x15046228: sb          $t8, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r24;
L_1504622C:
    // 0x1504622C: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x15046230: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x15046234: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x15046238: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x1504623C: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x15046240: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x15046244: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x15046248: bne         $t3, $t2, L_1504622C
    if (ctx->r11 != ctx->r10) {
        // 0x1504624C: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_1504622C;
    }
    // 0x1504624C: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
L_15046250:
    // 0x15046250: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15046254: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x15046258: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x1504625C: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x15046260: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x15046264: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x15046268: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x1504626C: bne         $t7, $t6, L_15046250
    if (ctx->r15 != ctx->r14) {
        // 0x15046270: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_15046250;
    }
    // 0x15046270: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x15046274: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x15046278: addiu       $a3, $sp, 0x70
    ctx->r7 = ADD32(ctx->r29, 0X70);
    // 0x1504627C: jal         0x15045714
    // 0x15046280: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    func_15045714(rdram, ctx);
        goto after_0;
    // 0x15046280: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_0:
    // 0x15046284: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x15046288: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x1504628C: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x15046290: jal         0x15045880
    // 0x15046294: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    func_15045880(rdram, ctx);
        goto after_1;
    // 0x15046294: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_1:
    // 0x15046298: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x1504629C: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x150462A0: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x150462A4: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x150462A8: jal         0x15045D48
    // 0x150462AC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_15045D48(rdram, ctx);
        goto after_2;
    // 0x150462AC: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_2:
    // 0x150462B0: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x150462B4: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x150462B8: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x150462BC: beq         $v1, $zero, L_15046348
    if (ctx->r3 == 0) {
        // 0x150462C0: nop
    
            goto L_15046348;
    }
    // 0x150462C0: nop

    // 0x150462C4: beq         $t8, $zero, L_15046348
    if (ctx->r24 == 0) {
        // 0x150462C8: lwc1        $f8, 0x4C($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_15046348;
    }
    // 0x150462C8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x150462CC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150462D0: addiu       $t1, $sp, 0x4C
    ctx->r9 = ADD32(ctx->r29, 0X4C);
    // 0x150462D4: addiu       $t3, $t1, 0x24
    ctx->r11 = ADD32(ctx->r9, 0X24);
    // 0x150462D8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x150462DC: or          $t9, $s0, $zero
    ctx->r25 = ctx->r16 | 0;
    // 0x150462E0: or          $t7, $t0, $zero
    ctx->r15 = ctx->r8 | 0;
    // 0x150462E4: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x150462E8: bc1f        L_1504631C
    if (!c1cs) {
        // 0x150462EC: addiu       $t6, $t0, 0x24
        ctx->r14 = ADD32(ctx->r8, 0X24);
            goto L_1504631C;
    }
    // 0x150462EC: addiu       $t6, $t0, 0x24
    ctx->r14 = ADD32(ctx->r8, 0X24);
L_150462F0:
    // 0x150462F0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x150462F4: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x150462F8: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x150462FC: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x15046300: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x15046304: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x15046308: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x1504630C: bne         $t1, $t3, L_150462F0
    if (ctx->r9 != ctx->r11) {
        // 0x15046310: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_150462F0;
    }
    // 0x15046310: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x15046314: b           L_1504644C
    // 0x15046318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1504644C;
    // 0x15046318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_1504631C:
    // 0x1504631C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x15046320: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x15046324: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x15046328: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x1504632C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x15046330: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x15046334: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x15046338: bne         $t7, $t6, L_1504631C
    if (ctx->r15 != ctx->r14) {
        // 0x1504633C: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_1504631C;
    }
    // 0x1504633C: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x15046340: b           L_1504644C
    // 0x15046344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1504644C;
    // 0x15046344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15046348:
    // 0x15046348: beq         $v1, $zero, L_15046388
    if (ctx->r3 == 0) {
        // 0x1504634C: andi        $t9, $v0, 0xFF
        ctx->r25 = ctx->r2 & 0XFF;
            goto L_15046388;
    }
    // 0x1504634C: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x15046350: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x15046354: addiu       $t3, $t8, 0x24
    ctx->r11 = ADD32(ctx->r24, 0X24);
    // 0x15046358: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
L_1504635C:
    // 0x1504635C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x15046360: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x15046364: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x15046368: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x1504636C: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x15046370: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x15046374: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x15046378: bne         $t8, $t3, L_1504635C
    if (ctx->r24 != ctx->r11) {
        // 0x1504637C: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_1504635C;
    }
    // 0x1504637C: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x15046380: b           L_1504644C
    // 0x15046384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1504644C;
    // 0x15046384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_15046388:
    // 0x15046388: beq         $t9, $zero, L_150463C8
    if (ctx->r25 == 0) {
        // 0x1504638C: lwc1        $f16, 0x4C($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
            goto L_150463C8;
    }
    // 0x1504638C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x15046390: or          $t7, $t0, $zero
    ctx->r15 = ctx->r8 | 0;
    // 0x15046394: or          $t4, $s0, $zero
    ctx->r12 = ctx->r16 | 0;
    // 0x15046398: addiu       $t6, $t0, 0x24
    ctx->r14 = ADD32(ctx->r8, 0X24);
L_1504639C:
    // 0x1504639C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x150463A0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x150463A4: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x150463A8: sw          $at, -0xC($t4)
    MEM_W(-0XC, ctx->r12) = ctx->r1;
    // 0x150463AC: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x150463B0: sw          $at, -0x8($t4)
    MEM_W(-0X8, ctx->r12) = ctx->r1;
    // 0x150463B4: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x150463B8: bne         $t7, $t6, L_1504639C
    if (ctx->r15 != ctx->r14) {
        // 0x150463BC: sw          $at, -0x4($t4)
        MEM_W(-0X4, ctx->r12) = ctx->r1;
            goto L_1504639C;
    }
    // 0x150463BC: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x150463C0: b           L_1504644C
    // 0x150463C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_1504644C;
    // 0x150463C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_150463C8:
    // 0x150463C8: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x150463CC: addiu       $t2, $sp, 0x4C
    ctx->r10 = ADD32(ctx->r29, 0X4C);
    // 0x150463D0: addiu       $t8, $t2, 0x24
    ctx->r24 = ADD32(ctx->r10, 0X24);
    // 0x150463D4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x150463D8: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
    // 0x150463DC: or          $t6, $t0, $zero
    ctx->r14 = ctx->r8 | 0;
    // 0x150463E0: or          $t7, $s0, $zero
    ctx->r15 = ctx->r16 | 0;
    // 0x150463E4: bc1f        L_15046418
    if (!c1cs) {
        // 0x150463E8: addiu       $t5, $t0, 0x24
        ctx->r13 = ADD32(ctx->r8, 0X24);
            goto L_15046418;
    }
    // 0x150463E8: addiu       $t5, $t0, 0x24
    ctx->r13 = ADD32(ctx->r8, 0X24);
L_150463EC:
    // 0x150463EC: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x150463F0: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x150463F4: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x150463F8: sw          $at, -0xC($t1)
    MEM_W(-0XC, ctx->r9) = ctx->r1;
    // 0x150463FC: lw          $at, -0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X8);
    // 0x15046400: sw          $at, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->r1;
    // 0x15046404: lw          $at, -0x4($t2)
    ctx->r1 = MEM_W(ctx->r10, -0X4);
    // 0x15046408: bne         $t2, $t8, L_150463EC
    if (ctx->r10 != ctx->r24) {
        // 0x1504640C: sw          $at, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->r1;
            goto L_150463EC;
    }
    // 0x1504640C: sw          $at, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->r1;
    // 0x15046410: b           L_15046440
    // 0x15046414: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
        goto L_15046440;
    // 0x15046414: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
L_15046418:
    // 0x15046418: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x1504641C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x15046420: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x15046424: sw          $at, -0xC($t7)
    MEM_W(-0XC, ctx->r15) = ctx->r1;
    // 0x15046428: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x1504642C: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x15046430: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x15046434: bne         $t6, $t5, L_15046418
    if (ctx->r14 != ctx->r13) {
        // 0x15046438: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_15046418;
    }
    // 0x15046438: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x1504643C: lbu         $t4, 0x1C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1C);
L_15046440:
    // 0x15046440: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x15046444: andi        $t3, $t4, 0xFFFD
    ctx->r11 = ctx->r12 & 0XFFFD;
    // 0x15046448: sb          $t3, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r11;
L_1504644C:
    // 0x1504644C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x15046450: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15046454: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x15046458: jr          $ra
    // 0x1504645C: nop

    return;
    return;
    // 0x1504645C: nop

;}
RECOMP_FUNC void func_15115EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15115EDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x15115EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15115EE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x15115EE8: lwc1        $f12, 0x7C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x15115EEC: lwc1        $f14, 0x80($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X80);
    // 0x15115EF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x15115EF4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x15115EF8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x15115EFC: jal         0x15115E0C
    // 0x15115F00: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    func_15115E0C(rdram, ctx);
        goto after_0;
    // 0x15115F00: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x15115F04: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x15115F08: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x15115F0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x15115F10: lhu         $t7, 0x84($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X84);
    // 0x15115F14: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x15115F18: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x15115F1C: bnel        $t7, $at, L_15115F5C
    if (ctx->r15 != ctx->r1) {
        // 0x15115F20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15115F5C;
    }
    goto skip_0;
    // 0x15115F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x15115F24: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x15115F28: lwc1        $f2, 0x80($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X80);
    // 0x15115F2C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15115F30: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x15115F34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x15115F38: sub.s       $f6, $f2, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x15115F3C: mul.s       $f12, $f4, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x15115F40: nop

    // 0x15115F44: mul.s       $f14, $f6, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x15115F48: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x15115F4C: add.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x15115F50: swc1        $f8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f8.u32l;
    // 0x15115F54: swc1        $f10, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f10.u32l;
    // 0x15115F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15115F5C:
    // 0x15115F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x15115F60: jr          $ra
    // 0x15115F64: nop

    return;
    return;
    // 0x15115F64: nop

;}
RECOMP_FUNC void func_150E2F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150E2F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150E2F94: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x150E2F98: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x150E2F9C: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x150E2FA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150E2FA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x150E2FA8: jal         0x150E2DA4
    // 0x150E2FAC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_150E2DA4(rdram, ctx);
        goto after_0;
    // 0x150E2FAC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x150E2FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x150E2FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x150E2FB8: jr          $ra
    // 0x150E2FBC: nop

    return;
    return;
    // 0x150E2FBC: nop

;}
RECOMP_FUNC void func_150DDED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150DDED0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x150DDED4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x150DDED8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x150DDEDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x150DDEE0: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x150DDEE4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x150DDEE8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x150DDEEC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x150DDEF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x150DDEF4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x150DDEF8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x150DDEFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x150DDF00: jal         0x151491F4
    // 0x150DDF04: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_151491F4(rdram, ctx);
        goto after_0;
    // 0x150DDF04: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x150DDF08: beq         $v0, $zero, L_150DDF78
    if (ctx->r2 == 0) {
        // 0x150DDF0C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_150DDF78;
    }
    // 0x150DDF0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x150DDF10: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x150DDF14: addiu       $at, $zero, 0xFB
    ctx->r1 = ADD32(0, 0XFB);
    // 0x150DDF18: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x150DDF1C: lbu         $v1, 0x72($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X72);
    // 0x150DDF20: beq         $v1, $at, L_150DDF50
    if (ctx->r3 == ctx->r1) {
        // 0x150DDF24: addiu       $at, $zero, 0xFC
        ctx->r1 = ADD32(0, 0XFC);
            goto L_150DDF50;
    }
    // 0x150DDF24: addiu       $at, $zero, 0xFC
    ctx->r1 = ADD32(0, 0XFC);
    // 0x150DDF28: beq         $v1, $at, L_150DDF58
    if (ctx->r3 == ctx->r1) {
        // 0x150DDF2C: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_150DDF58;
    }
    // 0x150DDF2C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x150DDF30: addiu       $at, $zero, 0xFD
    ctx->r1 = ADD32(0, 0XFD);
    // 0x150DDF34: beq         $v1, $at, L_150DDF60
    if (ctx->r3 == ctx->r1) {
        // 0x150DDF38: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_150DDF60;
    }
    // 0x150DDF38: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x150DDF3C: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x150DDF40: beq         $v1, $at, L_150DDF68
    if (ctx->r3 == ctx->r1) {
        // 0x150DDF44: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_150DDF68;
    }
    // 0x150DDF44: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x150DDF48: b           L_150DDF70
    // 0x150DDF4C: nop

        goto L_150DDF70;
    // 0x150DDF4C: nop

L_150DDF50:
    // 0x150DDF50: b           L_150DDF78
    // 0x150DDF54: sb          $t9, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r25;
        goto L_150DDF78;
    // 0x150DDF54: sb          $t9, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r25;
L_150DDF58:
    // 0x150DDF58: b           L_150DDF78
    // 0x150DDF5C: sb          $t0, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r8;
        goto L_150DDF78;
    // 0x150DDF5C: sb          $t0, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r8;
L_150DDF60:
    // 0x150DDF60: b           L_150DDF78
    // 0x150DDF64: sb          $t1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r9;
        goto L_150DDF78;
    // 0x150DDF64: sb          $t1, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r9;
L_150DDF68:
    // 0x150DDF68: b           L_150DDF78
    // 0x150DDF6C: sb          $t2, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r10;
        goto L_150DDF78;
    // 0x150DDF6C: sb          $t2, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r10;
L_150DDF70:
    // 0x150DDF70: jal         0x1516972C
    // 0x150DDF74: nop

    func_1516972C(rdram, ctx);
        goto after_1;
    // 0x150DDF74: nop

    after_1:
L_150DDF78:
    // 0x150DDF78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x150DDF7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x150DDF80: jr          $ra
    // 0x150DDF84: nop

    return;
    return;
    // 0x150DDF84: nop

;}
RECOMP_FUNC void func_1507BB28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507BB28: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x1507BB2C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x1507BB30: lw          $t6, 0x154C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X154C);
    // 0x1507BB34: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1507BB38: lbu         $t7, 0x4($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X4);
    // 0x1507BB3C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x1507BB40: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x1507BB44: lw          $v0, 0x1588($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1588);
    // 0x1507BB48: bnel        $v0, $zero, L_1507BB60
    if (ctx->r2 != 0) {
        // 0x1507BB4C: lw          $v1, -0x10($v0)
        ctx->r3 = MEM_W(ctx->r2, -0X10);
            goto L_1507BB60;
    }
    goto skip_0;
    // 0x1507BB4C: lw          $v1, -0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X10);
    skip_0:
    // 0x1507BB50: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1507BB54: jr          $ra
    // 0x1507BB58: addiu       $v0, $v0, -0x5EE0
    ctx->r2 = ADD32(ctx->r2, -0X5EE0);
    return;
    return;
    // 0x1507BB58: addiu       $v0, $v0, -0x5EE0
    ctx->r2 = ADD32(ctx->r2, -0X5EE0);
    // 0x1507BB5C: lw          $v1, -0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, -0X10);
L_1507BB60:
    // 0x1507BB60: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x1507BB64: bnel        $v1, $zero, L_1507BB78
    if (ctx->r3 != 0) {
        // 0x1507BB68: lbu         $t9, 0x4($v1)
        ctx->r25 = MEM_BU(ctx->r3, 0X4);
            goto L_1507BB78;
    }
    goto skip_1;
    // 0x1507BB68: lbu         $t9, 0x4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4);
    skip_1:
    // 0x1507BB6C: jr          $ra
    // 0x1507BB70: addiu       $v0, $v0, -0x5EE0
    ctx->r2 = ADD32(ctx->r2, -0X5EE0);
    return;
    return;
    // 0x1507BB70: addiu       $v0, $v0, -0x5EE0
    ctx->r2 = ADD32(ctx->r2, -0X5EE0);
    // 0x1507BB74: lbu         $t9, 0x4($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X4);
L_1507BB78:
    // 0x1507BB78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507BB7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x1507BB80: beql        $a1, $t9, L_1507BC04
    if (ctx->r5 == ctx->r25) {
        // 0x1507BB84: sll         $t8, $a0, 3
        ctx->r24 = S32(ctx->r4 << 3);
            goto L_1507BC04;
    }
    goto skip_2;
    // 0x1507BB84: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    skip_2:
    // 0x1507BB88: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
L_1507BB8C:
    // 0x1507BB8C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x1507BB90: addiu       $a2, $a2, 0x6A88
    ctx->r6 = ADD32(ctx->r6, 0X6A88);
    // 0x1507BB94: bnel        $t0, $zero, L_1507BBF0
    if (ctx->r8 != 0) {
        // 0x1507BB98: lbu         $t7, 0xC($v0)
        ctx->r15 = MEM_BU(ctx->r2, 0XC);
            goto L_1507BBF0;
    }
    goto skip_3;
    // 0x1507BB98: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
    skip_3:
    // 0x1507BB9C: lbu         $t1, 0x4($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X4);
    // 0x1507BBA0: lui         $t2, 0x8008
    ctx->r10 = S32(0X8008 << 16);
    // 0x1507BBA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x1507BBA8: beq         $a1, $t1, L_1507BBDC
    if (ctx->r5 == ctx->r9) {
        // 0x1507BBAC: addiu       $v1, $t2, 0x6A88
        ctx->r3 = ADD32(ctx->r10, 0X6A88);
            goto L_1507BBDC;
    }
    // 0x1507BBAC: addiu       $v1, $t2, 0x6A88
    ctx->r3 = ADD32(ctx->r10, 0X6A88);
    // 0x1507BBB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_1507BBB4:
    // 0x1507BBB4: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x1507BBB8: bnel        $t3, $zero, L_1507BBCC
    if (ctx->r11 != 0) {
        // 0x1507BBBC: lbu         $t4, 0xC($v0)
        ctx->r12 = MEM_BU(ctx->r2, 0XC);
            goto L_1507BBCC;
    }
    goto skip_4;
    // 0x1507BBBC: lbu         $t4, 0xC($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XC);
    skip_4:
L_1507BBC0:
    // 0x1507BBC0: b           L_1507BBC0
    pause_self(rdram);
    // 0x1507BBC4: nop

    // 0x1507BBC8: lbu         $t4, 0xC($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0XC);
L_1507BBCC:
    // 0x1507BBCC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1507BBD0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1507BBD4: bne         $a1, $t4, L_1507BBB4
    if (ctx->r5 != ctx->r12) {
        // 0x1507BBD8: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_1507BBB4;
    }
    // 0x1507BBD8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_1507BBDC:
    // 0x1507BBDC: sll         $t5, $a0, 3
    ctx->r13 = S32(ctx->r4 << 3);
    // 0x1507BBE0: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x1507BBE4: jr          $ra
    // 0x1507BBE8: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    return;
    return;
    // 0x1507BBE8: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x1507BBEC: lbu         $t7, 0xC($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XC);
L_1507BBF0:
    // 0x1507BBF0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x1507BBF4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x1507BBF8: bnel        $a1, $t7, L_1507BB8C
    if (ctx->r5 != ctx->r15) {
        // 0x1507BBFC: lw          $t0, 0x0($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X0);
            goto L_1507BB8C;
    }
    goto skip_5;
    // 0x1507BBFC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    skip_5:
    // 0x1507BC00: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
L_1507BC04:
    // 0x1507BC04: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x1507BC08: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x1507BC0C: jr          $ra
    // 0x1507BC10: nop

    return;
    return;
    // 0x1507BC10: nop

;}
RECOMP_FUNC void func_151D6418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D6418: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x151D641C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x151D6420: sw          $fp, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r30;
    // 0x151D6424: sw          $s7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r23;
    // 0x151D6428: sw          $s6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r22;
    // 0x151D642C: sw          $s5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r21;
    // 0x151D6430: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    // 0x151D6434: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x151D6438: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x151D643C: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x151D6440: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x151D6444: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x151D6448: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x151D644C: lw          $v0, -0x19E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X19E0);
    // 0x151D6450: lw          $t0, -0x19DC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X19DC);
    // 0x151D6454: or          $t5, $a1, $zero
    ctx->r13 = ctx->r5 | 0;
    // 0x151D6458: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x151D645C: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x151D6460: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x151D6464: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x151D6468: lui         $t6, 0xFA00
    ctx->r14 = S32(0XFA00 << 16);
    // 0x151D646C: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x151D6470: sw          $t8, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r24;
    // 0x151D6474: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6478: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x151D647C: lui         $t9, 0xFC11
    ctx->r25 = S32(0XFC11 << 16);
    // 0x151D6480: ori         $t9, $t9, 0xFE23
    ctx->r25 = ctx->r25 | 0XFE23;
    // 0x151D6484: addiu       $t6, $zero, -0x805
    ctx->r14 = ADD32(0, -0X805);
    // 0x151D6488: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
    // 0x151D648C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x151D6490: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6494: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x151D6498: lui         $t7, 0xEF00
    ctx->r15 = S32(0XEF00 << 16);
    // 0x151D649C: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x151D64A0: ori         $t8, $t8, 0x4340
    ctx->r24 = ctx->r24 | 0X4340;
    // 0x151D64A4: ori         $t7, $t7, 0xCFF
    ctx->r15 = ctx->r15 | 0XCFF;
    // 0x151D64A8: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x151D64AC: sw          $t8, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r24;
    // 0x151D64B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D64B4: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x151D64B8: lui         $t9, 0xD900
    ctx->r25 = S32(0XD900 << 16);
    // 0x151D64BC: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    // 0x151D64C0: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x151D64C4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D64C8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D64CC: lui         $t6, 0xD700
    ctx->r14 = S32(0XD700 << 16);
    // 0x151D64D0: ori         $t6, $t6, 0x2
    ctx->r14 = ctx->r14 | 0X2;
    // 0x151D64D4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x151D64D8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x151D64DC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x151D64E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D64E4: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x151D64E8: beq         $t0, $zero, L_151D66BC
    if (ctx->r8 == 0) {
        // 0x151D64EC: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_151D66BC;
    }
    // 0x151D64EC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x151D64F0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x151D64F4: addiu       $s4, $v1, 0x7
    ctx->r20 = ADD32(ctx->r3, 0X7);
    // 0x151D64F8: srl         $t8, $s4, 3
    ctx->r24 = S32(U32(ctx->r20) >> 3);
    // 0x151D64FC: andi        $t9, $t8, 0x1FF
    ctx->r25 = ctx->r24 & 0X1FF;
    // 0x151D6500: sll         $t6, $t9, 9
    ctx->r14 = S32(ctx->r25 << 9);
    // 0x151D6504: addiu       $s5, $v0, -0x1
    ctx->r21 = ADD32(ctx->r2, -0X1);
    // 0x151D6508: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x151D650C: lui         $at, 0xF510
    ctx->r1 = S32(0XF510 << 16);
    // 0x151D6510: or          $s4, $t6, $at
    ctx->r20 = ctx->r14 | ctx->r1;
    // 0x151D6514: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x151D6518: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x151D651C: subu        $s6, $v0, $a2
    ctx->r22 = SUB32(ctx->r2, ctx->r6);
    // 0x151D6520: sll         $t8, $s6, 2
    ctx->r24 = S32(ctx->r22 << 2);
    // 0x151D6524: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x151D6528: ori         $s5, $t6, 0xC
    ctx->r21 = ctx->r14 | 0XC;
    // 0x151D652C: sll         $t6, $t9, 12
    ctx->r14 = S32(ctx->r25 << 12);
    // 0x151D6530: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x151D6534: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x151D6538: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x151D653C: or          $s6, $t6, $at
    ctx->r22 = ctx->r14 | ctx->r1;
    // 0x151D6540: srl         $t0, $v1, 3
    ctx->r8 = S32(U32(ctx->r3) >> 3);
    // 0x151D6544: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x151D6548: lui         $ra, 0xF510
    ctx->r31 = S32(0XF510 << 16);
    // 0x151D654C: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x151D6550: lui         $s7, 0xFD10
    ctx->r23 = S32(0XFD10 << 16);
    // 0x151D6554: lui         $s2, 0xE700
    ctx->r18 = S32(0XE700 << 16);
    // 0x151D6558: lui         $s1, 0x700
    ctx->r17 = S32(0X700 << 16);
    // 0x151D655C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_151D6560:
    // 0x151D6560: addu        $t8, $t5, $fp
    ctx->r24 = ADD32(ctx->r13, ctx->r30);
    // 0x151D6564: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x151D6568: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x151D656C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6570: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D6574: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x151D6578: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x151D657C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6580: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D6584: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x151D6588: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x151D658C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x151D6590: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6594: or          $t4, $a0, $zero
    ctx->r12 = ctx->r4 | 0;
    // 0x151D6598: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x151D659C: sltiu       $at, $s0, 0x7FF
    ctx->r1 = ctx->r16 < 0X7FF ? 1 : 0;
    // 0x151D65A0: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x151D65A4: beq         $at, $zero, L_151D65B4
    if (ctx->r1 == 0) {
        // 0x151D65A8: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_151D65B4;
    }
    // 0x151D65A8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D65AC: b           L_151D65B8
    // 0x151D65B0: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
        goto L_151D65B8;
    // 0x151D65B0: or          $t1, $s0, $zero
    ctx->r9 = ctx->r16 | 0;
L_151D65B4:
    // 0x151D65B4: addiu       $t1, $zero, 0x7FF
    ctx->r9 = ADD32(0, 0X7FF);
L_151D65B8:
    // 0x151D65B8: bne         $t0, $zero, L_151D65C8
    if (ctx->r8 != 0) {
        // 0x151D65BC: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151D65C8;
    }
    // 0x151D65BC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D65C0: b           L_151D65CC
    // 0x151D65C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
        goto L_151D65CC;
    // 0x151D65C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_151D65C8:
    // 0x151D65C8: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
L_151D65CC:
    // 0x151D65CC: bne         $t0, $zero, L_151D65DC
    if (ctx->r8 != 0) {
        // 0x151D65D0: addiu       $t7, $t2, 0x7FF
        ctx->r15 = ADD32(ctx->r10, 0X7FF);
            goto L_151D65DC;
    }
    // 0x151D65D0: addiu       $t7, $t2, 0x7FF
    ctx->r15 = ADD32(ctx->r10, 0X7FF);
    // 0x151D65D4: b           L_151D65E0
    // 0x151D65D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_151D65E0;
    // 0x151D65D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_151D65DC:
    // 0x151D65DC: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
L_151D65E0:
    // 0x151D65E0: divu        $zero, $t7, $a2
    lo = S32(U32(ctx->r15) / U32(ctx->r6)); hi = S32(U32(ctx->r15) % U32(ctx->r6));
    // 0x151D65E4: mflo        $t8
    ctx->r24 = lo;
    // 0x151D65E8: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x151D65EC: andi        $t7, $t1, 0xFFF
    ctx->r15 = ctx->r9 & 0XFFF;
    // 0x151D65F0: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x151D65F4: or          $t6, $t9, $s1
    ctx->r14 = ctx->r25 | ctx->r17;
    // 0x151D65F8: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x151D65FC: sw          $t9, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r25;
    // 0x151D6600: bne         $a2, $zero, L_151D660C
    if (ctx->r6 != 0) {
        // 0x151D6604: nop
    
            goto L_151D660C;
    }
    // 0x151D6604: nop

    // 0x151D6608: break       7
    do_break(354248200);
L_151D660C:
    // 0x151D660C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6610: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x151D6614: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151D6618: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D661C: sw          $s4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r20;
    // 0x151D6620: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x151D6624: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6628: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D662C: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x151D6630: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x151D6634: sw          $s5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r21;
    // 0x151D6638: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D663C: addiu       $a2, $t3, 0x4
    ctx->r6 = ADD32(ctx->r11, 0X4);
    // 0x151D6640: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x151D6644: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x151D6648: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x151D664C: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x151D6650: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x151D6654: or          $t9, $s6, $t8
    ctx->r25 = ctx->r22 | ctx->r24;
    // 0x151D6658: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x151D665C: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x151D6660: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6664: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D6668: lui         $t8, 0xE100
    ctx->r24 = S32(0XE100 << 16);
    // 0x151D666C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x151D6670: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x151D6674: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6678: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x151D667C: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x151D6680: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x151D6684: lui         $t9, 0xF100
    ctx->r25 = S32(0XF100 << 16);
    // 0x151D6688: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x151D668C: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x151D6690: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D6694: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x151D6698: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x151D669C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x151D66A0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x151D66A4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x151D66A8: or          $t3, $a2, $zero
    ctx->r11 = ctx->r6 | 0;
    // 0x151D66AC: addu        $t5, $t5, $s3
    ctx->r13 = ADD32(ctx->r13, ctx->r19);
    // 0x151D66B0: sltu        $at, $a2, $t6
    ctx->r1 = ctx->r6 < ctx->r14 ? 1 : 0;
    // 0x151D66B4: bnel        $at, $zero, L_151D6560
    if (ctx->r1 != 0) {
        // 0x151D66B8: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_151D6560;
    }
    goto skip_0;
    // 0x151D66B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    skip_0:
L_151D66BC:
    // 0x151D66BC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x151D66C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x151D66C4: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x151D66C8: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x151D66CC: lw          $s2, 0x10($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X10);
    // 0x151D66D0: lw          $s3, 0x14($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X14);
    // 0x151D66D4: lw          $s4, 0x18($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X18);
    // 0x151D66D8: lw          $s5, 0x1C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X1C);
    // 0x151D66DC: lw          $s6, 0x20($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X20);
    // 0x151D66E0: lw          $s7, 0x24($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X24);
    // 0x151D66E4: lw          $fp, 0x28($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X28);
    // 0x151D66E8: jr          $ra
    // 0x151D66EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    return;
    // 0x151D66EC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_150B71A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x150B71A8: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x150B71AC: lh          $v0, 0x38($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X38);
    // 0x150B71B0: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x150B71B4: beql        $v1, $v0, L_150B71E8
    if (ctx->r3 == ctx->r2) {
        // 0x150B71B8: lh          $v0, 0x3A($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X3A);
            goto L_150B71E8;
    }
    goto skip_0;
    // 0x150B71B8: lh          $v0, 0x3A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3A);
    skip_0:
    // 0x150B71BC: lw          $t6, -0x161C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X161C);
    // 0x150B71C0: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x150B71C4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x150B71C8: sh          $t8, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r24;
    // 0x150B71CC: lh          $t9, 0x38($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X38);
    // 0x150B71D0: slti        $at, $t9, 0x1001
    ctx->r1 = SIGNED(ctx->r25) < 0X1001 ? 1 : 0;
    // 0x150B71D4: bne         $at, $zero, L_150B7218
    if (ctx->r1 != 0) {
        // 0x150B71D8: nop
    
            goto L_150B7218;
    }
    // 0x150B71D8: nop

    // 0x150B71DC: jr          $ra
    // 0x150B71E0: sh          $v1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r3;
    return;
    return;
    // 0x150B71E0: sh          $v1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r3;
    // 0x150B71E4: lh          $v0, 0x3A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3A);
L_150B71E8:
    // 0x150B71E8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x150B71EC: beq         $v1, $v0, L_150B7218
    if (ctx->r3 == ctx->r2) {
        // 0x150B71F0: nop
    
            goto L_150B7218;
    }
    // 0x150B71F0: nop

    // 0x150B71F4: lw          $t0, -0x161C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X161C);
    // 0x150B71F8: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x150B71FC: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x150B7200: sh          $t2, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r10;
    // 0x150B7204: lh          $t3, 0x3A($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X3A);
    // 0x150B7208: slti        $at, $t3, 0x1001
    ctx->r1 = SIGNED(ctx->r11) < 0X1001 ? 1 : 0;
    // 0x150B720C: bne         $at, $zero, L_150B7218
    if (ctx->r1 != 0) {
        // 0x150B7210: nop
    
            goto L_150B7218;
    }
    // 0x150B7210: nop

    // 0x150B7214: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
L_150B7218:
    // 0x150B7218: jr          $ra
    // 0x150B721C: nop

    return;
    return;
    // 0x150B721C: nop

;}
RECOMP_FUNC void func_1512523C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1512523C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15125240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15125244: lwc1        $f4, 0x2BC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2BC);
    // 0x15125248: lwc1        $f6, 0x2F8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2F8);
    // 0x1512524C: lwc1        $f8, 0x2C4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C4);
    // 0x15125250: lwc1        $f10, 0x300($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X300);
    // 0x15125254: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15125258: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1512525C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x15125260: mul.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x15125264: nop

    // 0x15125268: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x1512526C: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x15125270: sqrt.s      $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = sqrtf(ctx->f0.fl);
    // 0x15125274: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15125278: nop

    // 0x1512527C: bc1f        L_1512528C
    if (!c1cs) {
        // 0x15125280: nop
    
            goto L_1512528C;
    }
    // 0x15125280: nop

    // 0x15125284: b           L_15125290
    // 0x15125288: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
        goto L_15125290;
    // 0x15125288: neg.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = -ctx->f0.fl;
L_1512528C:
    // 0x1512528C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_15125290:
    // 0x15125290: lwc1        $f6, 0x2FC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2FC);
    // 0x15125294: lwc1        $f8, 0x2C0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C0);
    // 0x15125298: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1512529C: jal         0x150484A0
    // 0x151252A0: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    func_150484A0(rdram, ctx);
        goto after_0;
    // 0x151252A0: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    after_0:
    // 0x151252A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151252A8: lwc1        $f10, 0x351C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X351C);
    // 0x151252AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x151252B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x151252B4: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x151252B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x151252BC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x151252C0: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x151252C4: swc1        $f2, 0x388($a0)
    MEM_W(0X388, ctx->r4) = ctx->f2.u32l;
    // 0x151252C8: bc1fl       L_151252E8
    if (!c1cs) {
        // 0x151252CC: lwc1        $f8, 0x388($a0)
        ctx->f8.u32l = MEM_W(ctx->r4, 0X388);
            goto L_151252E8;
    }
    goto skip_0;
    // 0x151252CC: lwc1        $f8, 0x388($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X388);
    skip_0:
    // 0x151252D0: lwc1        $f18, 0x388($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X388);
    // 0x151252D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x151252D8: nop

    // 0x151252DC: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x151252E0: swc1        $f6, 0x388($a0)
    MEM_W(0X388, ctx->r4) = ctx->f6.u32l;
    // 0x151252E4: lwc1        $f8, 0x388($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X388);
L_151252E8:
    // 0x151252E8: lwc1        $f18, 0x3A8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X3A8);
    // 0x151252EC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151252F0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x151252F4: lwc1        $f8, 0x38C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38C);
    // 0x151252F8: swc1        $f10, 0x388($a0)
    MEM_W(0X388, ctx->r4) = ctx->f10.u32l;
    // 0x151252FC: lwc1        $f16, 0x388($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X388);
    // 0x15125300: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x15125304: swc1        $f4, 0x388($a0)
    MEM_W(0X388, ctx->r4) = ctx->f4.u32l;
    // 0x15125308: lwc1        $f6, 0x388($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X388);
    // 0x1512530C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15125310: swc1        $f10, 0x388($a0)
    MEM_W(0X388, ctx->r4) = ctx->f10.u32l;
    // 0x15125314: lwc1        $f18, 0x3520($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3520);
    // 0x15125318: lwc1        $f16, 0x388($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X388);
    // 0x1512531C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x15125320: swc1        $f4, 0x398($a0)
    MEM_W(0X398, ctx->r4) = ctx->f4.u32l;
    // 0x15125324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15125328: jr          $ra
    // 0x1512532C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    return;
    // 0x1512532C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_151256BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151256BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x151256C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x151256C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x151256C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x151256CC: lui         $s1, 0x8
    ctx->r17 = S32(0X8 << 16);
    // 0x151256D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x151256D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x151256D8: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x151256DC: and         $t6, $v0, $s1
    ctx->r14 = ctx->r2 & ctx->r17;
    // 0x151256E0: bne         $t6, $zero, L_15125704
    if (ctx->r14 != 0) {
        // 0x151256E4: nop
    
            goto L_15125704;
    }
    // 0x151256E4: nop

    // 0x151256E8: lw          $t7, 0x5F0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X5F0);
    // 0x151256EC: sll         $t9, $v0, 13
    ctx->r25 = S32(ctx->r2 << 13);
    // 0x151256F0: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x151256F4: beql        $t8, $zero, L_1512585C
    if (ctx->r24 == 0) {
        // 0x151256F8: lwc1        $f14, 0x29C($s0)
        ctx->f14.u32l = MEM_W(ctx->r16, 0X29C);
            goto L_1512585C;
    }
    goto skip_0;
    // 0x151256F8: lwc1        $f14, 0x29C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X29C);
    skip_0:
    // 0x151256FC: bltzl       $t9, L_1512585C
    if (SIGNED(ctx->r25) < 0) {
        // 0x15125700: lwc1        $f14, 0x29C($s0)
        ctx->f14.u32l = MEM_W(ctx->r16, 0X29C);
            goto L_1512585C;
    }
    goto skip_1;
    // 0x15125700: lwc1        $f14, 0x29C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X29C);
    skip_1:
L_15125704:
    // 0x15125704: jal         0x150ADA20
    // 0x15125708: nop

    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x15125708: nop

    after_0:
    // 0x1512570C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15125710: lwc1        $f0, 0x3534($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3534);
    // 0x15125714: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x15125718: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x1512571C: mfhi        $t0
    ctx->r8 = hi;
    // 0x15125720: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x15125724: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x15125728: bgez        $t0, L_1512573C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x1512572C: cvt.s.w     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
            goto L_1512573C;
    }
    // 0x1512572C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x15125730: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x15125734: nop

    // 0x15125738: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_1512573C:
    // 0x1512573C: add.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x15125740: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15125744: lwc1        $f10, 0x3538($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3538);
    // 0x15125748: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x1512574C: lwc1        $f18, -0x165C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X165C);
    // 0x15125750: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x15125754: lwc1        $f6, 0x29C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x15125758: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x1512575C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x15125760: swc1        $f8, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f8.u32l;
    // 0x15125764: lwc1        $f14, 0x29C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x15125768: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x1512576C: nop

    // 0x15125770: bc1f        L_15125794
    if (!c1cs) {
        // 0x15125774: nop
    
            goto L_15125794;
    }
    // 0x15125774: nop

    // 0x15125778: sub.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f0.fl;
L_1512577C:
    // 0x1512577C: swc1        $f10, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f10.u32l;
    // 0x15125780: lwc1        $f14, 0x29C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X29C);
    // 0x15125784: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x15125788: nop

    // 0x1512578C: bc1tl       L_1512577C
    if (c1cs) {
        // 0x15125790: sub.s       $f10, $f14, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f0.fl;
            goto L_1512577C;
    }
    goto skip_2;
    // 0x15125790: sub.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f0.fl;
    skip_2:
L_15125794:
    // 0x15125794: jal         0x15047D60
    // 0x15125798: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x15125798: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_1:
    // 0x1512579C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x151257A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x151257A4: lwc1        $f2, 0x5EC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X5EC);
    // 0x151257A8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151257AC: mul.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x151257B0: lwc1        $f6, 0x353C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X353C);
    // 0x151257B4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151257B8: lw          $t1, 0x2C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X2C);
    // 0x151257BC: and         $t2, $t1, $s1
    ctx->r10 = ctx->r9 & ctx->r17;
    // 0x151257C0: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x151257C4: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x151257C8: add.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x151257CC: swc1        $f8, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f8.u32l;
    // 0x151257D0: lwc1        $f16, 0x3540($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X3540);
    // 0x151257D4: lwc1        $f10, 0x5EC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X5EC);
    // 0x151257D8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x151257DC: mul.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x151257E0: beql        $t2, $zero, L_151257F8
    if (ctx->r10 == 0) {
        // 0x151257E4: mtc1        $at, $f0
        ctx->f0.u32l = ctx->r1;
            goto L_151257F8;
    }
    goto skip_3;
    // 0x151257E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    skip_3:
    // 0x151257E8: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x151257EC: b           L_15125804
    // 0x151257F0: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
        goto L_15125804;
    // 0x151257F0: mov.s       $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    ctx->f2.fl = ctx->f14.fl;
    // 0x151257F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
L_151257F8:
    // 0x151257F8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x151257FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x15125800: nop

L_15125804:
    // 0x15125804: mul.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x15125808: addiu       $s1, $s0, 0x2F8
    ctx->r17 = ADD32(ctx->r16, 0X2F8);
    // 0x1512580C: addiu       $s2, $s0, 0x2BC
    ctx->r18 = ADD32(ctx->r16, 0X2BC);
    // 0x15125810: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x15125814: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x15125818: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x1512581C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x15125820: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x15125824: jal         0x1508EF80
    // 0x15125828: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_1508EF80(rdram, ctx);
        goto after_2;
    // 0x15125828: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x1512582C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x15125830: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x15125834: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x15125838: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x1512583C: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x15125840: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x15125844: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x15125848: jal         0x1508EF80
    // 0x1512584C: nop

    func_1508EF80(rdram, ctx);
        goto after_3;
    // 0x1512584C: nop

    after_3:
    // 0x15125850: b           L_15125910
    // 0x15125854: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_15125910;
    // 0x15125854: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x15125858: lwc1        $f14, 0x29C($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X29C);
L_1512585C:
    // 0x1512585C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x15125860: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x15125864: c.eq.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl == ctx->f14.fl;
    // 0x15125868: nop

    // 0x1512586C: bc1tl       L_15125910
    if (c1cs) {
        // 0x15125870: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_15125910;
    }
    goto skip_4;
    // 0x15125870: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x15125874: lwc1        $f8, 0x3544($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3544);
    // 0x15125878: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x1512587C: sub.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl - ctx->f10.fl;
    // 0x15125880: swc1        $f16, 0x29C($s0)
    MEM_W(0X29C, ctx->r16) = ctx->f16.u32l;
    // 0x15125884: jal         0x15047D60
    // 0x15125888: lwc1        $f12, 0x29C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X29C);
    sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x15125888: lwc1        $f12, 0x29C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X29C);
    after_4:
    // 0x1512588C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x15125890: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x15125894: lwc1        $f2, 0x5EC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X5EC);
    // 0x15125898: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1512589C: mul.s       $f18, $f0, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x151258A0: lwc1        $f4, 0x3548($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3548);
    // 0x151258A4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x151258A8: addiu       $s1, $s0, 0x2F8
    ctx->r17 = ADD32(ctx->r16, 0X2F8);
    // 0x151258AC: addiu       $s2, $s0, 0x2BC
    ctx->r18 = ADD32(ctx->r16, 0X2BC);
    // 0x151258B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x151258B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x151258B8: sub.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x151258BC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x151258C0: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x151258C4: add.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x151258C8: swc1        $f10, 0x5EC($s0)
    MEM_W(0X5EC, ctx->r16) = ctx->f10.u32l;
    // 0x151258CC: lwc1        $f18, 0x354C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X354C);
    // 0x151258D0: lwc1        $f16, 0x5EC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X5EC);
    // 0x151258D4: mul.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x151258D8: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x151258DC: jal         0x1508EF80
    // 0x151258E0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    func_1508EF80(rdram, ctx);
        goto after_5;
    // 0x151258E0: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    after_5:
    // 0x151258E4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x151258E8: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x151258EC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x151258F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x151258F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x151258F8: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x151258FC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x15125900: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x15125904: jal         0x1508EF80
    // 0x15125908: nop

    func_1508EF80(rdram, ctx);
        goto after_6;
    // 0x15125908: nop

    after_6:
    // 0x1512590C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_15125910:
    // 0x15125910: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x15125914: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x15125918: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x1512591C: jr          $ra
    // 0x15125920: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    return;
    // 0x15125920: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_15070760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15070760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x15070764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x15070768: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x1507076C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15070770: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15070774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x15070778: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x1507077C: jal         0x150EBEC0
    // 0x15070780: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_150EBEC0(rdram, ctx);
        goto after_0;
    // 0x15070780: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x15070784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x15070788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x1507078C: jr          $ra
    // 0x15070790: nop

    return;
    return;
    // 0x15070790: nop

;}
RECOMP_FUNC void func_1505DADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1505DADC: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x1505DAE0: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x1505DAE4: sw          $a3, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r7;
    // 0x1505DAE8: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x1505DAEC: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x1505DAF0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x1505DAF4: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x1505DAF8: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x1505DAFC: sw          $s7, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r23;
    // 0x1505DB00: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x1505DB04: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x1505DB08: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x1505DB0C: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x1505DB10: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x1505DB14: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x1505DB18: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x1505DB1C: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x1505DB20: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x1505DB24: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x1505DB28: sw          $a1, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r5;
    // 0x1505DB2C: sw          $a2, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r6;
    // 0x1505DB30: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505DB34: lwc1        $f22, -0x6ACC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6ACC);
    // 0x1505DB38: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x1505DB3C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x1505DB40: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
    // 0x1505DB44: bne         $a3, $at, L_1505DB54
    if (ctx->r7 != ctx->r1) {
        // 0x1505DB48: or          $s7, $a3, $zero
        ctx->r23 = ctx->r7 | 0;
            goto L_1505DB54;
    }
    // 0x1505DB48: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x1505DB4C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1505DB50: lwc1        $f22, -0x6AC8($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X6AC8);
L_1505DB54:
    // 0x1505DB54: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x1505DB58: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x1505DB5C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x1505DB60: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x1505DB64: addiu       $s5, $s5, -0x3D30
    ctx->r21 = ADD32(ctx->r21, -0X3D30);
    // 0x1505DB68: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x1505DB6C: addiu       $s6, $zero, 0x32C
    ctx->r22 = ADD32(0, 0X32C);
L_1505DB70:
    // 0x1505DB70: multu       $s1, $s6
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x1505DB74: mflo        $t7
    ctx->r15 = lo;
    // 0x1505DB78: addu        $s0, $s5, $t7
    ctx->r16 = ADD32(ctx->r21, ctx->r15);
    // 0x1505DB7C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x1505DB80: beql        $t8, $zero, L_1505DD54
    if (ctx->r24 == 0) {
        // 0x1505DB84: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_0;
    // 0x1505DB84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x1505DB88: lbu         $t9, 0x1CA($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1CA);
    // 0x1505DB8C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x1505DB90: subu        $t0, $s3, $s5
    ctx->r8 = SUB32(ctx->r19, ctx->r21);
    // 0x1505DB94: beql        $t9, $zero, L_1505DD54
    if (ctx->r25 == 0) {
        // 0x1505DB98: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_1;
    // 0x1505DB98: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x1505DB9C: div         $zero, $t0, $s6
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r22)));
    // 0x1505DBA0: mflo        $t1
    ctx->r9 = lo;
    // 0x1505DBA4: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x1505DBA8: bne         $s6, $zero, L_1505DBB4
    if (ctx->r22 != 0) {
        // 0x1505DBAC: nop
    
            goto L_1505DBB4;
    }
    // 0x1505DBAC: nop

    // 0x1505DBB0: break       7
    do_break(352705456);
L_1505DBB4:
    // 0x1505DBB4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x1505DBB8: bne         $s6, $at, L_1505DBCC
    if (ctx->r22 != ctx->r1) {
        // 0x1505DBBC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_1505DBCC;
    }
    // 0x1505DBBC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1505DBC0: bne         $t0, $at, L_1505DBCC
    if (ctx->r8 != ctx->r1) {
        // 0x1505DBC4: nop
    
            goto L_1505DBCC;
    }
    // 0x1505DBC4: nop

    // 0x1505DBC8: break       6
    do_break(352705480);
L_1505DBCC:
    // 0x1505DBCC: beql        $t2, $v0, L_1505DD54
    if (ctx->r10 == ctx->r2) {
        // 0x1505DBD0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_2;
    // 0x1505DBD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x1505DBD4: lw          $t3, 0xF8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0XF8);
    // 0x1505DBD8: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x1505DBDC: beql        $t4, $zero, L_1505DD54
    if (ctx->r12 == 0) {
        // 0x1505DBE0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_3;
    // 0x1505DBE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x1505DBE4: beql        $s7, $v0, L_1505DD54
    if (ctx->r23 == ctx->r2) {
        // 0x1505DBE8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_4;
    // 0x1505DBE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x1505DBEC: lbu         $t5, 0x2FA($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2FA);
    // 0x1505DBF0: beql        $t5, $zero, L_1505DD54
    if (ctx->r13 == 0) {
        // 0x1505DBF4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_5;
    // 0x1505DBF4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x1505DBF8: addiu       $t6, $sp, 0xD8
    ctx->r14 = ADD32(ctx->r29, 0XD8);
    // 0x1505DBFC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x1505DC00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x1505DC04: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x1505DC08: addiu       $a2, $sp, 0xEC
    ctx->r6 = ADD32(ctx->r29, 0XEC);
    // 0x1505DC0C: addiu       $a3, $sp, 0xDC
    ctx->r7 = ADD32(ctx->r29, 0XDC);
    // 0x1505DC10: jal         0x1505DF10
    // 0x1505DC14: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_1505DF10(rdram, ctx);
        goto after_0;
    // 0x1505DC14: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x1505DC18: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x1505DC1C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x1505DC20: lbu         $v0, 0x103($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X103);
    // 0x1505DC24: lhu         $t8, 0xEC($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0XEC);
    // 0x1505DC28: bc1tl       L_1505DC48
    if (c1cs) {
        // 0x1505DC2C: lhu         $t9, 0x7A($s3)
        ctx->r25 = MEM_HU(ctx->r19, 0X7A);
            goto L_1505DC48;
    }
    goto skip_6;
    // 0x1505DC2C: lhu         $t9, 0x7A($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X7A);
    skip_6:
    // 0x1505DC30: lbu         $t7, 0x104($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X104);
    // 0x1505DC34: bnel        $t7, $zero, L_1505DD54
    if (ctx->r15 != 0) {
        // 0x1505DC38: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_7;
    // 0x1505DC38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x1505DC3C: beql        $s4, $zero, L_1505DD54
    if (ctx->r20 == 0) {
        // 0x1505DC40: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_8;
    // 0x1505DC40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x1505DC44: lhu         $t9, 0x7A($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X7A);
L_1505DC48:
    // 0x1505DC48: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x1505DC4C: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x1505DC50: sra         $t1, $t0, 8
    ctx->r9 = S32(SIGNED(ctx->r8) >> 8);
    // 0x1505DC54: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x1505DC58: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x1505DC5C: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x1505DC60: beql        $at, $zero, L_1505DD54
    if (ctx->r1 == 0) {
        // 0x1505DC64: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_9;
    // 0x1505DC64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x1505DC68: lwc1        $f0, 0xDC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x1505DC6C: lwc1        $f14, 0xD8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XD8);
    // 0x1505DC70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x1505DC74: lbu         $s2, 0xFB($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0XFB);
    // 0x1505DC78: sqrt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = sqrtf(ctx->f0.fl);
    // 0x1505DC7C: jal         0x1505A630
    // 0x1505DC80: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    func_1505A630(rdram, ctx);
        goto after_1;
    // 0x1505DC80: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x1505DC84: sra         $t5, $v0, 8
    ctx->r13 = S32(SIGNED(ctx->r2) >> 8);
    // 0x1505DC88: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x1505DC8C: subu        $t7, $t6, $s2
    ctx->r15 = SUB32(ctx->r14, ctx->r18);
    // 0x1505DC90: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x1505DC94: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x1505DC98: slti        $at, $t9, 0x20
    ctx->r1 = SIGNED(ctx->r25) < 0X20 ? 1 : 0;
    // 0x1505DC9C: beq         $at, $zero, L_1505DD50
    if (ctx->r1 == 0) {
        // 0x1505DCA0: addiu       $t0, $sp, 0xD0
        ctx->r8 = ADD32(ctx->r29, 0XD0);
            goto L_1505DD50;
    }
    // 0x1505DCA0: addiu       $t0, $sp, 0xD0
    ctx->r8 = ADD32(ctx->r29, 0XD0);
    // 0x1505DCA4: lwc1        $f0, 0x18($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X18);
    // 0x1505DCA8: lwc1        $f2, 0x1C($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x1505DCAC: lwc1        $f12, 0x14($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X14);
    // 0x1505DCB0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x1505DCB4: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x1505DCB8: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x1505DCBC: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x1505DCC0: addiu       $t1, $sp, 0xBC
    ctx->r9 = ADD32(ctx->r29, 0XBC);
    // 0x1505DCC4: addiu       $t2, $sp, 0xB8
    ctx->r10 = ADD32(ctx->r29, 0XB8);
    // 0x1505DCC8: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x1505DCCC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x1505DCD0: addiu       $t3, $sp, 0xB4
    ctx->r11 = ADD32(ctx->r29, 0XB4);
    // 0x1505DCD4: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x1505DCD8: addiu       $t4, $sp, 0xB0
    ctx->r12 = ADD32(ctx->r29, 0XB0);
    // 0x1505DCDC: addiu       $t5, $sp, 0xAC
    ctx->r13 = ADD32(ctx->r29, 0XAC);
    // 0x1505DCE0: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x1505DCE4: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x1505DCE8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x1505DCEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x1505DCF0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x1505DCF4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x1505DCF8: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x1505DCFC: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x1505DD00: swc1        $f26, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f26.u32l;
    // 0x1505DD04: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x1505DD08: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x1505DD0C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x1505DD10: jal         0x150AC9C0
    // 0x1505DD14: add.s       $f14, $f0, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f24.fl;
    func_150AC9C0(rdram, ctx);
        goto after_2;
    // 0x1505DD14: add.s       $f14, $f0, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f24.fl;
    after_2:
    // 0x1505DD18: beql        $v0, $zero, L_1505DD3C
    if (ctx->r2 == 0) {
        // 0x1505DD1C: lhu         $t6, 0xEC($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0XEC);
            goto L_1505DD3C;
    }
    goto skip_10;
    // 0x1505DD1C: lhu         $t6, 0xEC($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XEC);
    skip_10:
    // 0x1505DD20: lwc1        $f0, 0xAC($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x1505DD24: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x1505DD28: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x1505DD2C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x1505DD30: bc1tl       L_1505DD54
    if (c1cs) {
        // 0x1505DD34: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_1505DD54;
    }
    goto skip_11;
    // 0x1505DD34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_11:
    // 0x1505DD38: lhu         $t6, 0xEC($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XEC);
L_1505DD3C:
    // 0x1505DD3C: lw          $t7, 0xF4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF4);
    // 0x1505DD40: lbu         $s4, 0x104($s0)
    ctx->r20 = MEM_BU(ctx->r16, 0X104);
    // 0x1505DD44: andi        $fp, $s1, 0xFF
    ctx->r30 = ctx->r17 & 0XFF;
    // 0x1505DD48: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    // 0x1505DD4C: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
L_1505DD50:
    // 0x1505DD50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_1505DD54:
    // 0x1505DD54: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x1505DD58: slti        $at, $t8, 0x19
    ctx->r1 = SIGNED(ctx->r24) < 0X19 ? 1 : 0;
    // 0x1505DD5C: bne         $at, $zero, L_1505DB70
    if (ctx->r1 != 0) {
        // 0x1505DD60: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_1505DB70;
    }
    // 0x1505DD60: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x1505DD64: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
    // 0x1505DD68: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x1505DD6C: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x1505DD70: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x1505DD74: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x1505DD78: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x1505DD7C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x1505DD80: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x1505DD84: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x1505DD88: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x1505DD8C: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x1505DD90: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x1505DD94: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x1505DD98: lw          $s7, 0x84($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X84);
    // 0x1505DD9C: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x1505DDA0: jr          $ra
    // 0x1505DDA4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    return;
    // 0x1505DDA4: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_1507839C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1507839C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x150783A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x150783A4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150783A8: lbu         $v0, 0x1892($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1892);
    // 0x150783AC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x150783B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150783B4: bne         $v0, $zero, L_15078400
    if (ctx->r2 != 0) {
        // 0x150783B8: nop
    
            goto L_15078400;
    }
    // 0x150783B8: nop

    // 0x150783BC: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x150783C0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x150783C4: addiu       $t8, $t8, -0x3D30
    ctx->r24 = ADD32(ctx->r24, -0X3D30);
    // 0x150783C8: lbu         $t6, 0x222($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X222);
    // 0x150783CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x150783D0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150783D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150783D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x150783DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150783E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150783E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150783E8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x150783EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x150783F0: jal         0x1505A6F8
    // 0x150783F4: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    func_1505A6F8(rdram, ctx);
        goto after_0;
    // 0x150783F4: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x150783F8: b           L_15078494
    // 0x150783FC: nop

        goto L_15078494;
    // 0x150783FC: nop

L_15078400:
    // 0x15078400: bne         $v0, $at, L_15078450
    if (ctx->r2 != ctx->r1) {
        // 0x15078404: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_15078450;
    }
    // 0x15078404: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15078408: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1507840C: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15078410: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x15078414: addiu       $t1, $t1, -0x3D30
    ctx->r9 = ADD32(ctx->r9, -0X3D30);
    // 0x15078418: lbu         $t9, 0x222($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X222);
    // 0x1507841C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x15078420: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x15078424: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15078428: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x1507842C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15078430: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x15078434: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15078438: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x1507843C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x15078440: jal         0x1505A72C
    // 0x15078444: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    func_1505A72C(rdram, ctx);
        goto after_1;
    // 0x15078444: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    after_1:
    // 0x15078448: b           L_15078494
    // 0x1507844C: nop

        goto L_15078494;
    // 0x1507844C: nop

L_15078450:
    // 0x15078450: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x15078454: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x15078458: lbu         $t2, 0x222($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X222);
    // 0x1507845C: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x15078460: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x15078464: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x15078468: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1507846C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x15078470: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15078474: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x15078478: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x1507847C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x15078480: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x15078484: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x15078488: lwc1        $f6, -0x3D18($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3D18);
    // 0x1507848C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15078490: abs.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = fabsf(ctx->f0.fl);
L_15078494:
    // 0x15078494: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x15078498: lbu         $v0, 0x1893($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1893);
    // 0x1507849C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x150784A0: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x150784A4: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x150784A8: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x150784AC: bne         $v0, $at, L_150784CC
    if (ctx->r2 != ctx->r1) {
        // 0x150784B0: cvt.s.w     $f2, $f8
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
            goto L_150784CC;
    }
    // 0x150784B0: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x150784B4: lw          $t5, 0x154C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X154C);
    // 0x150784B8: lbu         $t6, 0x23D($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X23D);
    // 0x150784BC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x150784C0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x150784C4: nop

    // 0x150784C8: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
L_150784CC:
    // 0x150784CC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x150784D0: lbu         $v0, 0x1891($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1891);
    // 0x150784D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x150784D8: bne         $v0, $zero, L_150784F0
    if (ctx->r2 != 0) {
        // 0x150784DC: nop
    
            goto L_150784F0;
    }
    // 0x150784DC: nop

    // 0x150784E0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x150784E4: nop

    // 0x150784E8: bc1t        L_15078504
    if (c1cs) {
        // 0x150784EC: nop
    
            goto L_15078504;
    }
    // 0x150784EC: nop

L_150784F0:
    // 0x150784F0: bnel        $v0, $at, L_15078514
    if (ctx->r2 != ctx->r1) {
        // 0x150784F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_15078514;
    }
    goto skip_0;
    // 0x150784F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x150784F8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x150784FC: nop

    // 0x15078500: bc1f        L_15078510
    if (!c1cs) {
        // 0x15078504: lui         $a0, 0x800D
        ctx->r4 = S32(0X800D << 16);
            goto L_15078510;
    }
L_15078504:
    // 0x15078504: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x15078508: jal         0x15075400
    // 0x1507850C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    func_15075400(rdram, ctx);
        goto after_2;
    // 0x1507850C: lbu         $a0, 0x1890($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1890);
    after_2:
L_15078510:
    // 0x15078510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_15078514:
    // 0x15078514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x15078518: jr          $ra
    // 0x1507851C: nop

    return;
    return;
    // 0x1507851C: nop

;}
RECOMP_FUNC void func_15043AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15043AC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x15043ACC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x15043AD0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x15043AD4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x15043AD8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x15043ADC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x15043AE0: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x15043AE4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x15043AE8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x15043AEC: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x15043AF0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x15043AF4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x15043AF8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x15043AFC: beq         $s2, $zero, L_15043B48
    if (ctx->r18 == 0) {
        // 0x15043B00: addu        $t6, $s1, $s2
        ctx->r14 = ADD32(ctx->r17, ctx->r18);
            goto L_15043B48;
    }
    // 0x15043B00: addu        $t6, $s1, $s2
    ctx->r14 = ADD32(ctx->r17, ctx->r18);
L_15043B04:
    // 0x15043B04: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x15043B08: beq         $at, $zero, L_15043B18
    if (ctx->r1 == 0) {
        // 0x15043B0C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_15043B18;
    }
    // 0x15043B0C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x15043B10: b           L_15043B1C
    // 0x15043B14: subu        $s0, $s3, $s1
    ctx->r16 = SUB32(ctx->r19, ctx->r17);
        goto L_15043B1C;
    // 0x15043B14: subu        $s0, $s3, $s1
    ctx->r16 = SUB32(ctx->r19, ctx->r17);
L_15043B18:
    // 0x15043B18: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_15043B1C:
    // 0x15043B1C: addu        $a1, $s5, $s1
    ctx->r5 = ADD32(ctx->r21, ctx->r17);
    // 0x15043B20: jal         0x10022EC0
    // 0x15043B24: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x15043B24: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_0:
    // 0x15043B28: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x15043B2C: slt         $at, $s1, $s3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x15043B30: addu        $s4, $s4, $s0
    ctx->r20 = ADD32(ctx->r20, ctx->r16);
    // 0x15043B34: bne         $at, $zero, L_15043B40
    if (ctx->r1 != 0) {
        // 0x15043B38: subu        $s2, $s2, $s0
        ctx->r18 = SUB32(ctx->r18, ctx->r16);
            goto L_15043B40;
    }
    // 0x15043B38: subu        $s2, $s2, $s0
    ctx->r18 = SUB32(ctx->r18, ctx->r16);
    // 0x15043B3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_15043B40:
    // 0x15043B40: bnel        $s2, $zero, L_15043B04
    if (ctx->r18 != 0) {
        // 0x15043B44: addu        $t6, $s1, $s2
        ctx->r14 = ADD32(ctx->r17, ctx->r18);
            goto L_15043B04;
    }
    goto skip_0;
    // 0x15043B44: addu        $t6, $s1, $s2
    ctx->r14 = ADD32(ctx->r17, ctx->r18);
    skip_0:
L_15043B48:
    // 0x15043B48: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x15043B4C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x15043B50: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x15043B54: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x15043B58: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x15043B5C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x15043B60: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x15043B64: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x15043B68: jr          $ra
    // 0x15043B6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    return;
    // 0x15043B6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_1517F08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1517F08C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1517F090: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x1517F094: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x1517F098: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x1517F09C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517F0A0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1517F0A4: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x1517F0A8: lui         $t8, 0xFFFD
    ctx->r24 = S32(0XFFFD << 16);
    // 0x1517F0AC: ori         $t8, $t8, 0xF6FB
    ctx->r24 = ctx->r24 | 0XF6FB;
    // 0x1517F0B0: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x1517F0B4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x1517F0B8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x1517F0BC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517F0C0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x1517F0C4: lui         $t9, 0xFA00
    ctx->r25 = S32(0XFA00 << 16);
    // 0x1517F0C8: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x1517F0CC: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x1517F0D0: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x1517F0D4: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x1517F0D8: sll         $t3, $a2, 24
    ctx->r11 = S32(ctx->r6 << 24);
    // 0x1517F0DC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x1517F0E0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x1517F0E4: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x1517F0E8: or          $t2, $t6, $t9
    ctx->r10 = ctx->r14 | ctx->r25;
    // 0x1517F0EC: andi        $t4, $a1, 0xFF
    ctx->r12 = ctx->r5 & 0XFF;
    // 0x1517F0F0: or          $t3, $t2, $t4
    ctx->r11 = ctx->r10 | ctx->r12;
    // 0x1517F0F4: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x1517F0F8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517F0FC: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x1517F100: lui         $t5, 0xEF00
    ctx->r13 = S32(0XEF00 << 16);
    // 0x1517F104: lui         $t7, 0x50
    ctx->r15 = S32(0X50 << 16);
    // 0x1517F108: ori         $t7, $t7, 0x4344
    ctx->r15 = ctx->r15 | 0X4344;
    // 0x1517F10C: ori         $t5, $t5, 0x2CFF
    ctx->r13 = ctx->r13 | 0X2CFF;
    // 0x1517F110: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x1517F114: addiu       $a3, $a3, -0x19D8
    ctx->r7 = ADD32(ctx->r7, -0X19D8);
    // 0x1517F118: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x1517F11C: sw          $t7, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r15;
    // 0x1517F120: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517F124: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x1517F128: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x1517F12C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1517F130: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x1517F134: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x1517F138: sll         $a1, $t8, 7
    ctx->r5 = S32(ctx->r24 << 7);
    // 0x1517F13C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1517F140: addu        $a2, $t6, $a1
    ctx->r6 = ADD32(ctx->r14, ctx->r5);
    // 0x1517F144: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1517F148: lwc1        $f4, 0x28($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X28);
    // 0x1517F14C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x1517F150: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x1517F154: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x1517F158: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1517F15C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x1517F160: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1517F164: nop

    // 0x1517F168: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x1517F16C: beql        $t2, $zero, L_1517F1BC
    if (ctx->r10 == 0) {
        // 0x1517F170: mfc1        $t2, $f6
        ctx->r10 = (int32_t)ctx->f6.u32l;
            goto L_1517F1BC;
    }
    goto skip_0;
    // 0x1517F170: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    skip_0:
    // 0x1517F174: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1517F178: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x1517F17C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1517F180: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1517F184: nop

    // 0x1517F188: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1517F18C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1517F190: nop

    // 0x1517F194: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x1517F198: bne         $t2, $zero, L_1517F1B0
    if (ctx->r10 != 0) {
        // 0x1517F19C: nop
    
            goto L_1517F1B0;
    }
    // 0x1517F19C: nop

    // 0x1517F1A0: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x1517F1A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517F1A8: b           L_1517F1C8
    // 0x1517F1AC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_1517F1C8;
    // 0x1517F1AC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_1517F1B0:
    // 0x1517F1B0: b           L_1517F1C8
    // 0x1517F1B4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_1517F1C8;
    // 0x1517F1B4: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x1517F1B8: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
L_1517F1BC:
    // 0x1517F1BC: nop

    // 0x1517F1C0: bltz        $t2, L_1517F1B0
    if (SIGNED(ctx->r10) < 0) {
        // 0x1517F1C4: nop
    
            goto L_1517F1B0;
    }
    // 0x1517F1C4: nop

L_1517F1C8:
    // 0x1517F1C8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x1517F1CC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1517F1D0: lwc1        $f8, 0x30($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X30);
    // 0x1517F1D4: andi        $t4, $t2, 0x3FF
    ctx->r12 = ctx->r10 & 0X3FF;
    // 0x1517F1D8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1517F1DC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x1517F1E0: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x1517F1E4: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x1517F1E8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x1517F1EC: or          $t5, $t3, $at
    ctx->r13 = ctx->r11 | ctx->r1;
    // 0x1517F1F0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1517F1F4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x1517F1F8: nop

    // 0x1517F1FC: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x1517F200: beql        $t8, $zero, L_1517F250
    if (ctx->r24 == 0) {
        // 0x1517F204: mfc1        $t8, $f10
        ctx->r24 = (int32_t)ctx->f10.u32l;
            goto L_1517F250;
    }
    goto skip_1;
    // 0x1517F204: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    skip_1:
    // 0x1517F208: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1517F20C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x1517F210: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x1517F214: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x1517F218: nop

    // 0x1517F21C: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x1517F220: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x1517F224: nop

    // 0x1517F228: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x1517F22C: bne         $t8, $zero, L_1517F244
    if (ctx->r24 != 0) {
        // 0x1517F230: nop
    
            goto L_1517F244;
    }
    // 0x1517F230: nop

    // 0x1517F234: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x1517F238: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517F23C: b           L_1517F25C
    // 0x1517F240: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_1517F25C;
    // 0x1517F240: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_1517F244:
    // 0x1517F244: b           L_1517F25C
    // 0x1517F248: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_1517F25C;
    // 0x1517F248: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x1517F24C: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
L_1517F250:
    // 0x1517F250: nop

    // 0x1517F254: bltz        $t8, L_1517F244
    if (SIGNED(ctx->r24) < 0) {
        // 0x1517F258: nop
    
            goto L_1517F244;
    }
    // 0x1517F258: nop

L_1517F25C:
    // 0x1517F25C: andi        $t6, $t8, 0x3FF
    ctx->r14 = ctx->r24 & 0X3FF;
    // 0x1517F260: sll         $t9, $t6, 14
    ctx->r25 = S32(ctx->r14 << 14);
    // 0x1517F264: or          $t2, $t5, $t9
    ctx->r10 = ctx->r13 | ctx->r25;
    // 0x1517F268: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1517F26C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x1517F270: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x1517F274: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1517F278: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x1517F27C: addu        $a2, $t4, $a1
    ctx->r6 = ADD32(ctx->r12, ctx->r5);
    // 0x1517F280: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1517F284: lwc1        $f16, 0x24($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X24);
    // 0x1517F288: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1517F28C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1517F290: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1517F294: nop

    // 0x1517F298: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1517F29C: beql        $t7, $zero, L_1517F2EC
    if (ctx->r15 == 0) {
        // 0x1517F2A0: mfc1        $t7, $f18
        ctx->r15 = (int32_t)ctx->f18.u32l;
            goto L_1517F2EC;
    }
    goto skip_2;
    // 0x1517F2A0: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    skip_2:
    // 0x1517F2A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1517F2A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x1517F2AC: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1517F2B0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x1517F2B4: nop

    // 0x1517F2B8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x1517F2BC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x1517F2C0: nop

    // 0x1517F2C4: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x1517F2C8: bne         $t7, $zero, L_1517F2E0
    if (ctx->r15 != 0) {
        // 0x1517F2CC: nop
    
            goto L_1517F2E0;
    }
    // 0x1517F2CC: nop

    // 0x1517F2D0: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x1517F2D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517F2D8: b           L_1517F2F8
    // 0x1517F2DC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_1517F2F8;
    // 0x1517F2DC: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_1517F2E0:
    // 0x1517F2E0: b           L_1517F2F8
    // 0x1517F2E4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_1517F2F8;
    // 0x1517F2E4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x1517F2E8: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
L_1517F2EC:
    // 0x1517F2EC: nop

    // 0x1517F2F0: bltz        $t7, L_1517F2E0
    if (SIGNED(ctx->r15) < 0) {
        // 0x1517F2F4: nop
    
            goto L_1517F2E0;
    }
    // 0x1517F2F4: nop

L_1517F2F8:
    // 0x1517F2F8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x1517F2FC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1517F300: lwc1        $f4, 0x2C($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X2C);
    // 0x1517F304: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x1517F308: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x1517F30C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x1517F310: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x1517F314: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1517F318: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x1517F31C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1517F320: nop

    // 0x1517F324: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x1517F328: beql        $t9, $zero, L_1517F378
    if (ctx->r25 == 0) {
        // 0x1517F32C: mfc1        $t9, $f6
        ctx->r25 = (int32_t)ctx->f6.u32l;
            goto L_1517F378;
    }
    goto skip_3;
    // 0x1517F32C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x1517F330: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x1517F334: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x1517F338: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x1517F33C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x1517F340: nop

    // 0x1517F344: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x1517F348: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x1517F34C: nop

    // 0x1517F350: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x1517F354: bne         $t9, $zero, L_1517F36C
    if (ctx->r25 != 0) {
        // 0x1517F358: nop
    
            goto L_1517F36C;
    }
    // 0x1517F358: nop

    // 0x1517F35C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x1517F360: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1517F364: b           L_1517F384
    // 0x1517F368: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_1517F384;
    // 0x1517F368: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_1517F36C:
    // 0x1517F36C: b           L_1517F384
    // 0x1517F370: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_1517F384;
    // 0x1517F370: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x1517F374: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
L_1517F378:
    // 0x1517F378: nop

    // 0x1517F37C: bltz        $t9, L_1517F36C
    if (SIGNED(ctx->r25) < 0) {
        // 0x1517F380: nop
    
            goto L_1517F36C;
    }
    // 0x1517F380: nop

L_1517F384:
    // 0x1517F384: andi        $t2, $t9, 0x3FF
    ctx->r10 = ctx->r25 & 0X3FF;
    // 0x1517F388: sll         $t4, $t2, 14
    ctx->r12 = S32(ctx->r10 << 14);
    // 0x1517F38C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x1517F390: or          $t3, $t6, $t4
    ctx->r11 = ctx->r14 | ctx->r12;
    // 0x1517F394: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x1517F398: jr          $ra
    // 0x1517F39C: nop

    return;
    return;
    // 0x1517F39C: nop

;}
RECOMP_FUNC void func_16001A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x16001A64: jr          $ra
    // 0x16001A68: nop

    return;
    return;
    // 0x16001A68: nop

;}
RECOMP_FUNC void func_151B2FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151B2FE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x151B2FEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151B2FF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x151B2FF4: jal         0x151B2FD0
    // 0x151B2FF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_151B2FD0(rdram, ctx);
        goto after_0;
    // 0x151B2FF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x151B2FFC: jal         0x1514933C
    // 0x151B3000: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_1514933C(rdram, ctx);
        goto after_1;
    // 0x151B3000: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x151B3004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151B3008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x151B300C: jr          $ra
    // 0x151B3010: nop

    return;
    return;
    // 0x151B3010: nop

;}
RECOMP_FUNC void func_1514C2B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1514C2B8: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
    // 0x1514C2BC: lh          $t7, 0x164($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X164);
    // 0x1514C2C0: lwc1        $f4, 0x160($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X160);
    // 0x1514C2C4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x1514C2C8: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x1514C2CC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x1514C2D0: sb          $zero, 0x72($a0)
    MEM_B(0X72, ctx->r4) = 0;
    // 0x1514C2D4: sb          $t6, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r14;
    // 0x1514C2D8: sw          $t9, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r25;
    // 0x1514C2DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x1514C2E0: sh          $t7, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r15;
    // 0x1514C2E4: swc1        $f4, 0x154($a0)
    MEM_W(0X154, ctx->r4) = ctx->f4.u32l;
    // 0x1514C2E8: jr          $ra
    // 0x1514C2EC: nop

    return;
    return;
    // 0x1514C2EC: nop

;}
RECOMP_FUNC void func_15198D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x15198D88: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x15198D8C: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x15198D90: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x15198D94: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x15198D98: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x15198D9C: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x15198DA0: addiu       $fp, $sp, 0xE8
    ctx->r30 = ADD32(ctx->r29, 0XE8);
    // 0x15198DA4: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x15198DA8: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x15198DAC: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x15198DB0: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x15198DB4: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x15198DB8: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x15198DBC: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x15198DC0: sdc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X70, ctx->r29);
    // 0x15198DC4: sdc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X68, ctx->r29);
    // 0x15198DC8: sdc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X60, ctx->r29);
    // 0x15198DCC: sdc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X58, ctx->r29);
    // 0x15198DD0: sdc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X50, ctx->r29);
    // 0x15198DD4: sdc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X48, ctx->r29);
    // 0x15198DD8: lw          $s4, 0x98($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X98);
    // 0x15198DDC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x15198DE0: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x15198DE4: lbu         $t6, 0x74($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X74);
    // 0x15198DE8: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x15198DEC: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x15198DF0: addiu       $t3, $zero, 0x82
    ctx->r11 = ADD32(0, 0X82);
    // 0x15198DF4: sh          $t9, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = ctx->r25;
    // 0x15198DF8: sb          $t0, 0xE1($sp)
    MEM_B(0XE1, ctx->r29) = ctx->r8;
    // 0x15198DFC: sb          $t1, 0xE2($sp)
    MEM_B(0XE2, ctx->r29) = ctx->r9;
    // 0x15198E00: sb          $t2, 0xE0($sp)
    MEM_B(0XE0, ctx->r29) = ctx->r10;
    // 0x15198E04: sb          $t3, 0xE3($sp)
    MEM_B(0XE3, ctx->r29) = ctx->r11;
    // 0x15198E08: lw          $at, 0x10($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X10);
    // 0x15198E0C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x15198E10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x15198E14: sw          $at, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r1;
    // 0x15198E18: lw          $t6, 0x14($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X14);
    // 0x15198E1C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x15198E20: addiu       $t8, $t8, -0x78D8
    ctx->r24 = ADD32(ctx->r24, -0X78D8);
    // 0x15198E24: sw          $t6, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r14;
    // 0x15198E28: lw          $at, 0x18($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X18);
    // 0x15198E2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x15198E30: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x15198E34: sw          $at, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->r1;
    // 0x15198E38: lui         $t8, 0x16
    ctx->r24 = S32(0X16 << 16);
    // 0x15198E3C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x15198E40: ori         $t8, $t8, 0x600
    ctx->r24 = ctx->r24 | 0X600;
    // 0x15198E44: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x15198E48: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x15198E4C: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x15198E50: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x15198E54: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x15198E58: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x15198E5C: sw          $t7, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r15;
    // 0x15198E60: sw          $t8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r24;
    // 0x15198E64: sw          $t9, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r25;
    // 0x15198E68: sw          $t0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r8;
    // 0x15198E6C: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x15198E70: sw          $t2, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r10;
    // 0x15198E74: sb          $zero, 0x124($sp)
    MEM_B(0X124, ctx->r29) = 0;
    // 0x15198E78: sb          $t3, 0x125($sp)
    MEM_B(0X125, ctx->r29) = ctx->r11;
    // 0x15198E7C: addiu       $s7, $sp, 0x108
    ctx->r23 = ADD32(ctx->r29, 0X108);
    // 0x15198E80: addiu       $s6, $sp, 0xC8
    ctx->r22 = ADD32(ctx->r29, 0XC8);
L_15198E84:
    // 0x15198E84: jal         0x150ADA68
    // 0x15198E88: nop

    func_150ADA68(rdram, ctx);
        goto after_0;
    // 0x15198E88: nop

    after_0:
    // 0x15198E8C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x15198E90: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x15198E94: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x15198E98: jal         0x150ADA20
    // 0x15198E9C: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    func_150ADA20(rdram, ctx);
        goto after_1;
    // 0x15198E9C: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
    after_1:
    // 0x15198EA0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x15198EA4: andi        $t5, $s1, 0xFF
    ctx->r13 = ctx->r17 & 0XFF;
    // 0x15198EA8: jal         0x150ADA20
    // 0x15198EAC: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    func_150ADA20(rdram, ctx);
        goto after_2;
    // 0x15198EAC: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    after_2:
    // 0x15198EB0: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x15198EB4: addiu       $a0, $s1, -0x40
    ctx->r4 = ADD32(ctx->r17, -0X40);
    // 0x15198EB8: andi        $t4, $s2, 0xFF
    ctx->r12 = ctx->r18 & 0XFF;
    // 0x15198EBC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x15198EC0: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x15198EC4: jal         0x151423D8
    // 0x15198EC8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_151423D8(rdram, ctx);
        goto after_3;
    // 0x15198EC8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_3:
    // 0x15198ECC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x15198ED0: jal         0x151423D8
    // 0x15198ED4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_4;
    // 0x15198ED4: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_4:
    // 0x15198ED8: addiu       $a0, $s2, -0x40
    ctx->r4 = ADD32(ctx->r18, -0X40);
    // 0x15198EDC: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x15198EE0: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x15198EE4: jal         0x151423D8
    // 0x15198EE8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_151423D8(rdram, ctx);
        goto after_5;
    // 0x15198EE8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_5:
    // 0x15198EEC: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x15198EF0: jal         0x151423D8
    // 0x15198EF4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_151423D8(rdram, ctx);
        goto after_6;
    // 0x15198EF4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_6:
    // 0x15198EF8: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x15198EFC: lwc1        $f10, 0x0($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X0);
    // 0x15198F00: lwc1        $f6, 0x8($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X8);
    // 0x15198F04: mul.s       $f12, $f2, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x15198F08: lwc1        $f18, 0x4($s5)
    ctx->f18.u32l = MEM_W(ctx->r21, 0X4);
    // 0x15198F0C: mul.s       $f16, $f12, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x15198F10: nop

    // 0x15198F14: mul.s       $f4, $f2, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x15198F18: nop

    // 0x15198F1C: mul.s       $f8, $f12, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x15198F20: add.s       $f28, $f10, $f16
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f28.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15198F24: sub.s       $f30, $f18, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f30.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x15198F28: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x15198F2C: jal         0x150ADA20
    // 0x15198F30: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    func_150ADA20(rdram, ctx);
        goto after_7;
    // 0x15198F30: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x15198F34: lh          $t8, 0x22($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X22);
    // 0x15198F38: lh          $t1, 0x20($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X20);
    // 0x15198F3C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x15198F40: divu        $zero, $v0, $t9
    lo = S32(U32(ctx->r2) / U32(ctx->r25)); hi = S32(U32(ctx->r2) % U32(ctx->r25));
    // 0x15198F44: mfhi        $t0
    ctx->r8 = hi;
    // 0x15198F48: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x15198F4C: bne         $t9, $zero, L_15198F58
    if (ctx->r25 != 0) {
        // 0x15198F50: nop
    
            goto L_15198F58;
    }
    // 0x15198F50: nop

    // 0x15198F54: break       7
    do_break(353996628);
L_15198F58:
    // 0x15198F58: sb          $t2, 0xFD($sp)
    MEM_B(0XFD, ctx->r29) = ctx->r10;
    // 0x15198F5C: jal         0x150ADA20
    // 0x15198F60: nop

    func_150ADA20(rdram, ctx);
        goto after_8;
    // 0x15198F60: nop

    after_8:
    // 0x15198F64: lh          $t3, 0x1E($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X1E);
    // 0x15198F68: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    // 0x15198F6C: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x15198F70: divu        $zero, $v0, $t5
    lo = S32(U32(ctx->r2) / U32(ctx->r13)); hi = S32(U32(ctx->r2) % U32(ctx->r13));
    // 0x15198F74: mfhi        $t4
    ctx->r12 = hi;
    // 0x15198F78: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x15198F7C: bne         $t5, $zero, L_15198F88
    if (ctx->r13 != 0) {
        // 0x15198F80: nop
    
            goto L_15198F88;
    }
    // 0x15198F80: nop

    // 0x15198F84: break       7
    do_break(353996676);
L_15198F88:
    // 0x15198F88: sh          $t7, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = ctx->r15;
    // 0x15198F8C: jal         0x150ADA68
    // 0x15198F90: nop

    func_150ADA68(rdram, ctx);
        goto after_9;
    // 0x15198F90: nop

    after_9:
    // 0x15198F94: lwc1        $f16, 0x10($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X10);
    // 0x15198F98: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x15198F9C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x15198FA0: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x15198FA4: jal         0x150ADA68
    // 0x15198FA8: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    func_150ADA68(rdram, ctx);
        goto after_10;
    // 0x15198FA8: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x15198FAC: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x15198FB0: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x15198FB4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x15198FB8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x15198FBC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x15198FC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x15198FC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x15198FC8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x15198FCC: swc1        $f18, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f18.u32l;
    // 0x15198FD0: lwc1        $f4, 0x10($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X10);
    // 0x15198FD4: sub.s       $f6, $f28, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f28.fl - ctx->f4.fl;
    // 0x15198FD8: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x15198FDC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x15198FE0: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x15198FE4: lwc1        $f10, 0x14($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X14);
    // 0x15198FE8: sub.s       $f16, $f30, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f30.fl - ctx->f10.fl;
    // 0x15198FEC: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x15198FF0: swc1        $f18, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f18.u32l;
    // 0x15198FF4: lwc1        $f6, 0x18($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X18);
    // 0x15198FF8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x15198FFC: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x15199000: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x15199004: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x15199008: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x1519900C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x15199010: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x15199014: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x15199018: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x1519901C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x15199020: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x15199024: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    // 0x15199028: lbu         $t8, 0xC($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0XC);
    // 0x1519902C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x15199030: lbu         $t9, 0x1($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X1);
    // 0x15199034: jal         0x15147DA0
    // 0x15199038: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    func_15147DA0(rdram, ctx);
        goto after_11;
    // 0x15199038: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    after_11:
    // 0x1519903C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x15199040: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x15199044: lwc1        $f16, 0x7C($s4)
    ctx->f16.u32l = MEM_W(ctx->r20, 0X7C);
    // 0x15199048: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x1519904C: swc1        $f18, 0x7C($s4)
    MEM_W(0X7C, ctx->r20) = ctx->f18.u32l;
    // 0x15199050: lwc1        $f4, 0x7C($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X7C);
    // 0x15199054: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x15199058: nop

    // 0x1519905C: bc1t        L_15198E84
    if (c1cs) {
        // 0x15199060: nop
    
            goto L_15198E84;
    }
    // 0x15199060: nop

    // 0x15199064: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x15199068: ldc1        $f20, 0x48($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X48);
    // 0x1519906C: ldc1        $f22, 0x50($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X50);
    // 0x15199070: ldc1        $f24, 0x58($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X58);
    // 0x15199074: ldc1        $f26, 0x60($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X60);
    // 0x15199078: ldc1        $f28, 0x68($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X68);
    // 0x1519907C: ldc1        $f30, 0x70($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X70);
    // 0x15199080: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x15199084: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x15199088: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x1519908C: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x15199090: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x15199094: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x15199098: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x1519909C: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x151990A0: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x151990A4: jr          $ra
    // 0x151990A8: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    return;
    // 0x151990A8: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_151D9A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x151D9A68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x151D9A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x151D9A70: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x151D9A74: addiu       $t7, $t7, -0x4C44
    ctx->r15 = ADD32(ctx->r15, -0X4C44);
    // 0x151D9A78: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x151D9A7C: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x151D9A80: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x151D9A84: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x151D9A88: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x151D9A8C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x151D9A90: jal         0x150ADA20
    // 0x151D9A94: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    func_150ADA20(rdram, ctx);
        goto after_0;
    // 0x151D9A94: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    after_0:
    // 0x151D9A98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x151D9A9C: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x151D9AA0: mfhi        $t1
    ctx->r9 = hi;
    // 0x151D9AA4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x151D9AA8: addu        $v0, $sp, $t2
    ctx->r2 = ADD32(ctx->r29, ctx->r10);
    // 0x151D9AAC: lbu         $v0, 0x1F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1F);
    // 0x151D9AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x151D9AB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x151D9AB8: jr          $ra
    // 0x151D9ABC: nop

    return;
    return;
    // 0x151D9ABC: nop

;}
RECOMP_FUNC void func_1506D584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x1506D584: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x1506D588: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x1506D58C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x1506D590: lw          $a0, 0x154C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154C);
    // 0x1506D594: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x1506D598: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x1506D59C: lbu         $t6, 0x70($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X70);
    // 0x1506D5A0: beql        $t6, $at, L_1506D6A8
    if (ctx->r14 == ctx->r1) {
        // 0x1506D5A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_1506D6A8;
    }
    goto skip_0;
    // 0x1506D5A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x1506D5A8: lw          $t1, 0x2D0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X2D0);
    // 0x1506D5AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x1506D5B0: lw          $a3, 0x1580($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1580);
    // 0x1506D5B4: lwc1        $f0, 0x10($t1)
    ctx->f0.u32l = MEM_W(ctx->r9, 0X10);
    // 0x1506D5B8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x1506D5BC: sra         $a1, $a3, 24
    ctx->r5 = S32(SIGNED(ctx->r7) >> 24);
    // 0x1506D5C0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x1506D5C4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x1506D5C8: sra         $t8, $a3, 16
    ctx->r24 = S32(SIGNED(ctx->r7) >> 16);
    // 0x1506D5CC: andi        $t0, $a3, 0xFFFF
    ctx->r8 = ctx->r7 & 0XFFFF;
    // 0x1506D5D0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x1506D5D4: andi        $a2, $t8, 0xFF
    ctx->r6 = ctx->r24 & 0XFF;
    // 0x1506D5D8: bc1f        L_1506D5E4
    if (!c1cs) {
        // 0x1506D5DC: or          $a3, $t0, $zero
        ctx->r7 = ctx->r8 | 0;
            goto L_1506D5E4;
    }
    // 0x1506D5DC: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x1506D5E0: lwc1        $f0, -0x62B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X62B8);
L_1506D5E4:
    // 0x1506D5E4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x1506D5E8: beq         $a3, $at, L_1506D69C
    if (ctx->r7 == ctx->r1) {
        // 0x1506D5EC: nop
    
            goto L_1506D69C;
    }
    // 0x1506D5EC: nop

    // 0x1506D5F0: mtc1        $a3, $f6
    ctx->f6.u32l = ctx->r7;
    // 0x1506D5F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x1506D5F8: bgez        $a3, L_1506D60C
    if (SIGNED(ctx->r7) >= 0) {
        // 0x1506D5FC: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_1506D60C;
    }
    // 0x1506D5FC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x1506D600: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x1506D604: nop

    // 0x1506D608: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_1506D60C:
    // 0x1506D60C: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x1506D610: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1506D614: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x1506D618: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x1506D61C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x1506D620: nop

    // 0x1506D624: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x1506D628: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x1506D62C: nop

    // 0x1506D630: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x1506D634: beql        $a3, $zero, L_1506D684
    if (ctx->r7 == 0) {
        // 0x1506D638: mfc1        $a3, $f18
        ctx->r7 = (int32_t)ctx->f18.u32l;
            goto L_1506D684;
    }
    goto skip_1;
    // 0x1506D638: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    skip_1:
    // 0x1506D63C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x1506D640: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x1506D644: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x1506D648: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x1506D64C: nop

    // 0x1506D650: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x1506D654: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x1506D658: nop

    // 0x1506D65C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x1506D660: bne         $a3, $zero, L_1506D678
    if (ctx->r7 != 0) {
        // 0x1506D664: nop
    
            goto L_1506D678;
    }
    // 0x1506D664: nop

    // 0x1506D668: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x1506D66C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x1506D670: b           L_1506D690
    // 0x1506D674: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_1506D690;
    // 0x1506D674: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_1506D678:
    // 0x1506D678: b           L_1506D690
    // 0x1506D67C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_1506D690;
    // 0x1506D67C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x1506D680: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
L_1506D684:
    // 0x1506D684: nop

    // 0x1506D688: bltz        $a3, L_1506D678
    if (SIGNED(ctx->r7) < 0) {
        // 0x1506D68C: nop
    
            goto L_1506D678;
    }
    // 0x1506D68C: nop

L_1506D690:
    // 0x1506D690: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x1506D694: andi        $t3, $a3, 0xFFFF
    ctx->r11 = ctx->r7 & 0XFFFF;
    // 0x1506D698: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
L_1506D69C:
    // 0x1506D69C: jal         0x1507E7E4
    // 0x1506D6A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_1507E7E4(rdram, ctx);
        goto after_0;
    // 0x1506D6A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x1506D6A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_1506D6A8:
    // 0x1506D6A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x1506D6AC: jr          $ra
    // 0x1506D6B0: nop

    return;
    return;
    // 0x1506D6B0: nop

;}
